`include "riscv_define.sv"

// change file name to core_top.v
module riscv_core(

	input logic				 clk,
	input logic				 rst,         // high is reset
	
    // inst_mem
	input logic [31:0]         inst_i,
	output logic [31:0]        inst_addr_o,
	output logic              inst_ce_o,  // enable to inst_mem

    // data_mem
	input logic [31:0]         data_i,      // load data from data_mem
	output logic              data_we_o,	 // write enable to data_mem
    output logic              data_ce_o,  // enable to data_mem
	output logic [31:0]        data_addr_o,
	output logic [31:0]        data_o       // store data to  data_mem

	// for dpi-c
	// output logic				 mem_to_reg_o
);


assign inst_ce_o = 1'b1; // always enable instruction memory
assign data_ce_o = 1'b1; // always enable data memory

logic [`REG_BUS] pc;
assign inst_addr_o = pc;


logic [`REG_BUS] rs1_val;
logic [`REG_BUS] rs2_val;


logic data_hazard_stall;
logic data_hazard_flush;
assign data_hazard_flush = data_hazard_stall;
logic control_hazard_flush;

logic branch_taken;

// IFU
logic [`REG_BUS] inst_if_id_o;
logic [`REG_BUS] pc_if_id_o;

logic [`REG_BUS] rd_val;

// IDU


logic reg_wr_id_ex_o;
logic [`BRANCHOP_BUS] branch_op_id_ex_o;
logic mem_to_reg_id_ex_o;
logic mem_wr_id_ex_o;
logic [`MEMOP_BUS] mem_op_id_ex_o;
logic [`ALU_CTR_BUS] alu_ctr_id_ex_o;



logic [`REG_BUS] rs1_val_id_ex_o;
logic [`REG_BUS] rs2_val_id_ex_o;

logic [`REGADDR_BUS] rs1_idx_id_ex_o;
logic [`REGADDR_BUS] rs2_idx_id_ex_o;
logic [`REGADDR_BUS] rd_idx_id_ex_o;
logic [`REG_BUS] pc_id_ex_o;
logic [`REG_BUS] imm_id_ex_o;
logic [4:0] opcode_id_ex_o;

logic alu_asrc_id_ex_o;
logic [`ALUB_SRC_BUS] alu_bsrc_id_ex_o;

logic [`REG_BUS] rs1_val_id_ex_i;
logic [`REG_BUS] rs2_val_id_ex_i;

// EXU
logic reg_wr_ex_mem_o;
logic [`BRANCHOP_BUS] branch_op_ex_mem_o;
logic mem_to_reg_ex_mem_o;
logic mem_wr_ex_mem_o;
logic [`REGADDR_BUS] rd_idx_ex_mem_o;
logic [`MEMOP_BUS] mem_op_ex_mem_o; 
logic [`REG_BUS] rs1_val_ex_mem_o;
logic [`REG_BUS] rs2_val_ex_mem_o;
logic [`REG_BUS] pc_ex_mem_o;
logic [`REG_BUS] alu_p_val_ex_mem_o;

logic zero_ex_mem_o;
logic less_ex_mem_o;
logic [`REG_BUS] imm_ex_mem_o;

// Forward
logic [2:0] forwarda;
logic [2:0] forwardb;
logic [`REG_BUS] forward_ex_mem_o;
logic [`REG_BUS] forward_mem_wb_o;

// LSU
logic mem_to_reg_mem_wb_o;
logic reg_wr_mem_wb_o;
logic [`REG_BUS] alu_p_val_mem_wb_o;
logic [`REG_BUS] mem_rd_val_mem_wb_o;
logic [`REGADDR_BUS] rd_idx_mem_wb_o;


logic valid_ifu_idu_w;
logic ready_idu_ifu_w;

logic valid_exu_ifu_w;
logic ready_ifu_exu_w;

ifu u0_ifu(
	.clk(clk),
	.rst(rst),
	.branch_taken(branch_taken),
	.branch_op_i(branch_op_ex_mem_o),
	.imm_i(imm_ex_mem_o),
	.rs1_val_i(rs1_val_ex_mem_o),

	.pc(pc),
	// .npc(npc),
	.stall(data_hazard_stall),
	.flush(control_hazard_flush),

	.inst_i(inst_i),

	.pc_i(pc_ex_mem_o),

	.inst_o(inst_if_id_o),
	.pc_o(pc_if_id_o),

	.upstream_valid_i(valid_exu_ifu_w),
	.upstream_ready_o(ready_ifu_exu_w),
	.downstream_ready_i(ready_idu_ifu_w),
	.downstream_valid_o(valid_ifu_idu_w)
);

logic [4:0] inst_rs1_idx_field;
assign inst_rs1_idx_field = inst_if_id_o[19:15];
logic [4:0] inst_rs2_idx_field;
assign inst_rs2_idx_field = inst_if_id_o[24:20];
logic [4:0] inst_rd_idx_field;
assign inst_rd_idx_field = inst_if_id_o[11:7];



assign rs1_val_id_ex_i = forwarda[2] == 1'b1 ? forward_mem_wb_o : rs1_val;
assign rs2_val_id_ex_i = forwardb[2] == 1'b1 ? forward_mem_wb_o : rs2_val;



logic ready_exu_idu_w;
logic valid_idu_exu_w;

idu u0_idu(
	.clk(clk),
	.rst(rst),
	.inst_i(inst_if_id_o), // input
	.regwr_o(reg_wr_id_ex_o), // output
	.branchop_o(branch_op_id_ex_o),
	.memtoreg_o(mem_to_reg_id_ex_o),
	.memwr_o(mem_wr_id_ex_o),
	.memop_o(mem_op_id_ex_o),
	.alua_src_o(alu_asrc_id_ex_o),
	.alub_src_o(alu_bsrc_id_ex_o),
	.aluctr_o(alu_ctr_id_ex_o),

	// input
	.rs1_val_i(rs1_val_id_ex_i),
	.rs2_val_i(rs2_val_id_ex_i),

	.pc_i(pc_if_id_o),
	.rs1_idx_o(rs1_idx_id_ex_o),
	.rs2_idx_o(rs2_idx_id_ex_o),
	.rs1_val_o(rs1_val_id_ex_o),
	.rs2_val_o(rs2_val_id_ex_o),
	.rd_idx_o(rd_idx_id_ex_o),
	.pc_o(pc_id_ex_o),
	.imm_o(imm_id_ex_o),
	.opcode_o(opcode_id_ex_o),

	.flush(data_hazard_flush | control_hazard_flush),

	.upstream_valid_i(valid_ifu_idu_w),
	.upstream_ready_o(ready_idu_ifu_w),
	.downstream_ready_i(ready_exu_idu_w),
	.downstream_valid_o(valid_idu_exu_w)
);



logic [`REG_BUS] rs1_val_alu_i;
logic [`REG_BUS] rs2_val_alu_i;

assign rs1_val_alu_i = forwarda[1:0] == 2'b00 ? rs1_val_id_ex_o :
	(forwarda[1:0] == 2'b01 ? forward_mem_wb_o : 
	(forwarda[1:0] == 2'b10 ? forward_ex_mem_o : rs1_val_id_ex_o));

assign rs2_val_alu_i = forwardb[1:0] == 2'b00 ? rs2_val_id_ex_o :
	(forwardb[1:0] == 2'b01 ? forward_mem_wb_o : 
	(forwardb[1:0] == 2'b10 ? forward_ex_mem_o : rs2_val_id_ex_o));

logic [`REG_BUS] alu_a_val_ex_mem_i;
logic [`REG_BUS] alu_b_val_ex_mem_i;
assign alu_a_val_ex_mem_i = alu_asrc_id_ex_o ? pc_id_ex_o : rs1_val_alu_i;
assign alu_b_val_ex_mem_i = alu_bsrc_id_ex_o == 2'b00 ? rs2_val_alu_i : 
	(alu_bsrc_id_ex_o == 2'b01 ? imm_id_ex_o : 
	(alu_bsrc_id_ex_o == 2'b10 ? 32'h4 : 32'h0));


logic ready_lsu_exu_w;
logic valid_exu_lsu_w;

exu u0_exu(
	.clk(clk),
	.rst(rst),
	.alu_ctr_i(alu_ctr_id_ex_o),
	.alu_a_i(alu_a_val_ex_mem_i),
	.alu_b_i(alu_b_val_ex_mem_i),

	.regwr_i(reg_wr_id_ex_o),
	.branchop_i(branch_op_id_ex_o),
	.memtoreg_i(mem_to_reg_id_ex_o),
	.memwr_i(mem_wr_id_ex_o),
	.memop_i(mem_op_id_ex_o),
	.rs1_val_i(rs1_val_alu_i),
	.rs2_val_i(rs2_val_alu_i),
	.pc_i(pc_id_ex_o),

	.rd_idx_i(rd_idx_id_ex_o),
	.imm_i(imm_id_ex_o),

	.stall(1'b0),
	.flush(control_hazard_flush),

	.regwr_o(reg_wr_ex_mem_o),
	.branchop_o(branch_op_ex_mem_o),
	.memtoreg_o(mem_to_reg_ex_mem_o),
	.memwr_o(mem_wr_ex_mem_o),
	.memop_o(mem_op_ex_mem_o),
	.rs1_val_o(rs1_val_ex_mem_o),
	.rs2_val_o(rs2_val_ex_mem_o),
	.pc_o(pc_ex_mem_o),
	.alup_val_o(alu_p_val_ex_mem_o),
	.rd_idx_o(rd_idx_ex_mem_o),
	.imm_o(imm_ex_mem_o),

	.zero_o(zero_ex_mem_o),
	.less_o(less_ex_mem_o),

	.upstream_valid_i(valid_idu_exu_w),
	.upstream_ready_o(ready_exu_idu_w),
	.downstream_ready_i(ready_lsu_exu_w & ready_ifu_exu_w),
	.downstream_valid_o(valid_exu_lsu_w)
);

assign valid_exu_ifu_w = valid_exu_lsu_w;

//



assign data_we_o = mem_wr_ex_mem_o; // write enable to data memory
assign data_addr_o = alu_p_val_ex_mem_o;
assign data_o = rs2_val_ex_mem_o; // store data to data_mem

logic valid_lsu_regfile_w;

lsu u0_lsu(
	.clk(clk),
	.rst(rst),
	.memtoreg_i(mem_to_reg_ex_mem_o),
	.regwr_i(reg_wr_ex_mem_o),
	.alup_val_i(alu_p_val_ex_mem_o),
	.memrd_val_i(data_i),
	.rd_idx_i(rd_idx_ex_mem_o),
	.stall(1'b0),
	.flush(1'b0),
	.memtoreg_o(mem_to_reg_mem_wb_o),
	.regwr_o(reg_wr_mem_wb_o),
	.alup_val_o(alu_p_val_mem_wb_o),
	.memrd_val_o(mem_rd_val_mem_wb_o),
	.rd_idx_o(rd_idx_mem_wb_o),

	.upstream_valid_i(valid_exu_lsu_w),
	.upstream_ready_o(ready_lsu_exu_w),
	.downstream_ready_i(1'b1), // regfile is set to be always ready
	.downstream_valid_o(valid_lsu_regfile_w)
);



// WBU
assign rd_val = mem_to_reg_mem_wb_o ? mem_rd_val_mem_wb_o : alu_p_val_mem_wb_o;

// assign mem_to_reg_o = mem_to_reg_?_?;

logic [`REG_BUS] w_regs [31:0];

riscv_regfile u0_riscv_regfile(
	.clk(clk),
	.rst(rst),
	.rs1_idx_i(inst_rs1_idx_field),
	.rs2_idx_i(inst_rs2_idx_field),
	.rd_idx_i(rd_idx_mem_wb_o),
	.rd_val_i(rd_val),
	.rd_we_i(reg_wr_mem_wb_o & valid_lsu_regfile_w),
	.rs1_val_o(rs1_val),
	.rs2_val_o(rs2_val),
	.regfile_o(w_regs)
);	

forward u0_forward(
	.ex_mem_regwr(reg_wr_ex_mem_o),
	.mem_wb_regwr(reg_wr_mem_wb_o),
	.mem_wb_memtoreg(mem_to_reg_mem_wb_o),
	.ex_mem_rd_idx(rd_idx_ex_mem_o),
	.mem_wb_rd_idx(rd_idx_mem_wb_o),
	.if_id_opcode(inst_if_id_o[6:2]),
	// update at July 19th, 2025
	.if_id_rs1_idx(inst_rs1_idx_field),
	.if_id_rs2_idx(inst_rs2_idx_field),
	//
	.id_ex_opcode(opcode_id_ex_o),
	.id_ex_rs1_idx(rs1_idx_id_ex_o),
	.id_ex_rs2_idx(rs2_idx_id_ex_o),
	.forward_ex_mem_alu(alu_p_val_ex_mem_o),
	.forward_mem_wb_alu(alu_p_val_mem_wb_o),
	.forward_mem_wb_mem(mem_rd_val_mem_wb_o),
	.forward_ex_mem(forward_ex_mem_o),
	.forward_mem_wb(forward_mem_wb_o),
	.forwarda(forwarda),
	.forwardb(forwardb)
);

data_hazard u0_data_hazard(
	.id_ex_memtoreg(mem_to_reg_id_ex_o),
	.id_ex_rd_idx(rd_idx_id_ex_o),
	.if_id_rs1_idx(inst_rs1_idx_field),
	.if_id_rs2_idx(inst_rs2_idx_field),
	.stall(data_hazard_stall)
);


control_hazard u0_control_hazard(
	.branchop(branch_op_ex_mem_o),
	.zero_i(zero_ex_mem_o),
	.less_i(less_ex_mem_o),
	.branchtaken(branch_taken),
	.flush(control_hazard_flush)
);

// DPI-C
// CANNOT pass signals inside sub-module to dpic function, only the signals inside the same module
// PARAMETER TYPE: int instead of integer
// NOTICE: TYPE int here is within verilator scope, not same with C
import "DPI-C" function void get_dut_regs(
	input int dut_pc, input int dut_x0, input int dut_x1, input int dut_x2, input int dut_x3, input int dut_x4, input int dut_x5,
    input int dut_x6, input int dut_x7, input int dut_x8, input int dut_x9, input int dut_x10, input int dut_x11, input int dut_x12,input int dut_x13, input int dut_x14, 
    input int dut_x15, input int dut_x16, input int dut_x17, input int dut_x18, input int dut_x19, input int dut_x20, input int dut_x21, input int dut_x22, input int dut_x23,
    input int dut_x24, input int dut_x25, input int dut_x26, input int dut_x27, input int dut_x28, input int dut_x29, input int dut_x30, input int dut_x31
);

always_comb begin
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


//   import "DPI-C" function void check_rst(input bit rst_flag);
  import "DPI-C" function void get_diff_skip(input bit skip);
//   import "DPI-C" function void get_diff_commit(input bit commit);
//   import "DPI-C" function void check_finsih(input int ins,input bit a0zero);
//   wire real_commit = wbu_commit & !wbu_nop;
  always_comb begin
    // check_rst(i_rst_n);
    get_diff_skip(1'b0);
    // get_diff_commit(real_commit);
    // check_finsih(s_wbu_ins,s_a0zero);
  end

endmodule