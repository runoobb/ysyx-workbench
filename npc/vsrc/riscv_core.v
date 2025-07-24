`include "riscv_define.v"

// change file name to core_top.v
module top(

	input wire				 clk,
	input wire				 rst,         // high is reset
	
    // inst_mem
	input wire[31:0]         inst_i,
	output wire[31:0]        inst_addr_o,
	output wire              inst_ce_o,  // enable to inst_mem

    // data_mem
	input wire[31:0]         data_i,      // load data from data_mem
	output wire              data_we_o,	 // write enable to data_mem
    output wire              data_ce_o,  // enable to data_mem
	output wire[31:0]        data_addr_o,
	output wire[31:0]        data_o,       // store data to  data_mem

	// for dpi-c
	output wire				 mem_to_reg_o
);

//  instance your module  below
wire [`ExtOpBus] ext_op;
wire reg_wr;
wire [`BranchOpBus] branch_op;
wire mem_to_reg;
wire mem_wr;
wire [`MemOpBus] mem_op;
wire alu_asrc;
wire [`AluBsrcBus] alu_bsrc;
wire [`AluctrBus] alu_ctr;

assign inst_ce_o = 1'b1; // always enable instruction memory
assign data_ce_o = 1'b1; // always enable data memory

riscv_control u0_riscv_control (
	.inst_i(inst_i),
	.ExtOp(ext_op),
	.RegWr(reg_wr),
	.BranchOp(branch_op),
	.MemtoReg(mem_to_reg),
	.MemWr(mem_wr),
	.MemOp(mem_op),
	.ALUAsrc(alu_asrc),
	.ALUBsrc(alu_bsrc),
	.ALUctr(alu_ctr)
);

wire [`RegBus] npc;
wire [`RegBus] pc;
wire zero;
wire less;
wire [`RegBus] imm;

wire [`RegBus] rs1_val;
wire [`RegBus] rs2_val;
assign inst_addr_o = pc;

riscv_npc u0_riscv_npc(
	.clk(clk),
	.rst(rst),
	.zero_i(zero),
	.less_i(less),
	.branch_op_i(branch_op),
	.imm(imm),
	.rs1_val_i(rs1_val),
	.pc_i(pc),
	.npc(npc)
);


wire [4:0] inst_rs1_idx_field = inst_i[19:15];
wire [4:0] inst_rs2_idx_field = inst_i[24:20];
wire [4:0] inst_rd_idx_field = inst_i[11:7];

wire [`RegBus] rd_val;
wire [`RegBus] alu_p;


assign rd_val = mem_to_reg ? data_i : alu_p;

assign mem_to_reg_o = mem_to_reg;

wire [`RegBus] w_regs [31:0];

riscv_regfile u0_riscv_regfile(
	.clk(clk),
	.rst(rst),
	.rs1_idx_i(inst_rs1_idx_field),
	.rs2_idx_i(inst_rs2_idx_field),
	.rd_idx_i(inst_rd_idx_field),
	.rd_val_i(rd_val),
	.rd_we_i(reg_wr),
	.rs1_val_o(rs1_val),
	.rs2_val_o(rs2_val),
	.regfile_o(w_regs)
);	


riscv_immgen u0_riscv_immgen(
	.inst_i(inst_i),
	.ExtOp(ext_op),
	.imm_o(imm)
);

wire [`RegBus] alu_a;
wire [`RegBus] alu_b;
assign alu_a = alu_asrc ? pc : rs1_val;
assign alu_b = alu_bsrc == 2'b00 ? rs2_val : 
	(alu_bsrc == 2'b01 ? imm : 
	(alu_bsrc == 2'b10 ? 32'h4 : 32'h0));

riscv_alu u0_riscv_alu(
	.alu_ctr_i(alu_ctr),
	.alu_a_i(alu_a),
	.alu_b_i(alu_b),
	.zero_o(zero),
	.less_o(less),
	.alu_p_o(alu_p)
);

assign data_o = rs2_val;
assign data_addr_o = alu_p;

assign data_we_o = mem_wr;

// DPI-C
// CANNOT pass signals inside sub-module to dpic function, only the signals inside the same module
import "DPI-C" function void get_dut_regs(
	input integer dut_pc, input integer dut_x0, input integer dut_x1, input integer dut_x2, input integer dut_x3, input integer dut_x4, input integer dut_x5,
    input integer dut_x6, input integer dut_x7, input integer dut_x8, input integer dut_x9, input integer dut_x10, input integer dut_x11, input integer dut_x12,input integer dut_x13, input integer dut_x14, 
    input integer dut_x15, input integer dut_x16, input integer dut_x17, input integer dut_x18, input integer dut_x19, input integer dut_x20, input integer dut_x21, input integer dut_x22, input integer dut_x23,
    input integer dut_x24, input integer dut_x25, input integer dut_x26, input integer dut_x27, input integer dut_x28, input integer dut_x29, input integer dut_x30, input integer dut_x31
);

always@(*) begin
	get_dut_regs(pc, w_regs[0], w_regs[1],
	w_regs[2], w_regs[3],
	w_regs[4], w_regs[5],
	w_regs[6], w_regs[7],
	w_regs[8], w_regs[9],
	w_regs[10], w_regs[11],
	w_regs[12], w_regs[13],
	w_regs[14], w_regs[15],
	w_regs[16], w_regs[17],
	w_regs[18], w_regs[19],
	w_regs[20], w_regs[21],
	w_regs[22], w_regs[23],
	w_regs[24], w_regs[25],
	w_regs[26], w_regs[27],
	w_regs[28], w_regs[29],
	w_regs[30], w_regs[31]
	);
end

endmodule