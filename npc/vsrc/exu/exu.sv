`include "riscv_define.sv"

module exu(
    input logic clk,
    input logic rst,
	input logic [`ALU_CTR_BUS]	alu_ctr_i,
	input logic [`REG_BUS]	alu_a_i,
	input logic [`REG_BUS]	alu_b_i,

    // piped signals
    input logic regwr_i,
    input logic [`BRANCHOP_BUS] branchop_i,
    input logic memtoreg_i,
    input logic memwr_i,
    input logic [`MEMOP_BUS] memop_i,
    input logic [`REG_BUS] rs1_val_i,
    input logic [`REG_BUS] rs2_val_i,
    input logic [`INST_ADDR_BUS] pc_i,

    input logic [`REGADDR_BUS] rd_idx_i,
    input logic [`REG_BUS] imm_i,
    
    input logic stall,
    input logic flush,

    output logic regwr_o,
    output logic [`BRANCHOP_BUS] branchop_o,
    output logic memtoreg_o,
    output logic memwr_o,
    output logic [`MEMOP_BUS] memop_o,
    output logic [`REG_BUS] rs1_val_o,
    output logic [`REG_BUS] rs2_val_o,
    output logic [`INST_ADDR_BUS] pc_o,
    output logic [`REG_BUS] alup_val_o,
    output logic [`REGADDR_BUS] rd_idx_o,
    output logic [`REG_BUS] imm_o,

	output logic zero_o,
	output logic less_o,

	input logic upstream_valid_i,
    output logic upstream_ready_o,

    input logic downstream_ready_i,
    output logic downstream_valid_o 
);

// priority of control signals should match with those in pipeline register
logic downstream_handshake;
assign downstream_handshake = downstream_ready_i & downstream_valid_o;
assign upstream_ready_o = downstream_handshake;
always_ff @(posedge clk or posedge rst) begin
    if(rst) begin
        downstream_valid_o <= 1'b1;
	end else if(stall) begin
		downstream_valid_o <= 1'b0;
	end else if(flush) begin
        downstream_valid_o <= 1'b1;
    end else if(upstream_ready_o) begin
        downstream_valid_o <= upstream_valid_i;
    end
end

logic zero_w;
logic less_w;

logic [`REG_BUS] alu_p_w;

alu u0_alu(
    .alu_ctr_i(alu_ctr_i),
    .alu_a_i(alu_a_i),
    .alu_b_i(alu_b_i),
    .zero_o(zero_w),
    .less_o(less_w),
    .alu_p_o(alu_p_w)
);

ex_mem u0_ex_mem(
	.clk(clk),
	.rst(rst),
	.regwr_in(regwr_i),
	.branchop_in(branchop_i),
	.memtoreg_in(memtoreg_i),
	.memwr_in(memwr_i),
	.memop_in(memop_i),
	.rs1_val_in(rs1_val_i), // need to pass in following pipeline | e.g. B Type inst
	.rs2_val_in(rs2_val_i), // need to pass in following pipeline | e.g. S Type inst
	.pc_in(pc_i), //
	.alup_val_in(alu_p_w),
	.rd_idx_in(rd_idx_i),
	.zero_in(zero_w),
	.less_in(less_w),
	.imm_in(imm_i), //

	.stall(stall | ~upstream_valid_i),
	.flush(flush),

	.regwr_out(regwr_o),
	.branchop_out(branchop_o),
	.memtoreg_out(memtoreg_o),
	.memwr_out(memwr_o),
	.memop_out(memop_o),
	.rs1_val_out(rs1_val_o), //
	.rs2_val_out(rs2_val_o),
	.pc_out(pc_o), //
	.alup_val_out(alup_val_o),
	.rd_idx_out(rd_idx_o),
	.zero_out(zero_o),
	.less_out(less_o),
	.imm_out(imm_o)
);


endmodule