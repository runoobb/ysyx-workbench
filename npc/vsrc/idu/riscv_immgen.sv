`include "riscv_define.sv"
module riscv_immgen(
    input logic [`INST_BUS] inst_i,
    input logic [`EXTOP_BUS] extop,
    output logic [`REG_BUS] imm_o
);

logic	[`REG_BUS]	i_imm;
logic	[`REG_BUS]	s_imm;
logic	[`REG_BUS]	b_imm;
logic	[`REG_BUS]	j_imm;
logic	[`REG_BUS]	u_imm;

assign	i_imm	= {{20{inst_i[31]}}, inst_i[31:20]};
assign	s_imm	= {{20{inst_i[31]}}, inst_i[31:25], inst_i[11:7]};
assign	b_imm	= {{20{inst_i[31]}}, inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};
assign	j_imm	= {{12{inst_i[31]}}, inst_i[19:12], inst_i[20], inst_i[30:21], 1'b0};
assign	u_imm	= {inst_i[31:12], 12'b0};

assign imm_o = 
    (extop == 3'b000) ? i_imm :
    (extop == 3'b010) ? s_imm :
    (extop == 3'b011) ? b_imm :
    (extop == 3'b100) ? j_imm :
    (extop == 3'b001) ? u_imm : 32'b0;

endmodule