`include "riscv_define.sv"

module idu(
    input logic clk,
    input logic rst,
    input logic [`INST_BUS] inst_i,

    output logic regwr_o,
    output logic [`BRANCHOP_BUS] branchop_o,
    output logic memtoreg_o,
    output logic memwr_o,
    output logic [`MEMOP_BUS] memop_o,
    output logic alua_src_o,
    output logic [`ALUB_SRC_BUS] alub_src_o,
    output logic[`ALU_CTR_BUS] aluctr_o,

    input logic [`REG_BUS] rs1_val_i,
    input logic [`REG_BUS] rs2_val_i,

    input logic [`REG_BUS] pc_i,

    output logic [`REGADDR_BUS] rs1_idx_o,
    output logic [`REGADDR_BUS] rs2_idx_o,
    output logic [`REG_BUS] rs1_val_o,
    output logic [`REG_BUS] rs2_val_o,

    output logic [`REGADDR_BUS] rd_idx_o,
    output logic [`INST_ADDR_BUS] pc_o,
    output logic [`REG_BUS] imm_o,
    output logic [4:0] opcode_o,


    input logic flush,

    input logic upstream_valid_i,
    output logic upstream_ready_o,

    input logic downstream_ready_i,
    output logic downstream_valid_o // status register

);


// priority of control signals should match with those in pipeline register
logic downstream_handshake;
assign downstream_handshake = downstream_ready_i & downstream_valid_o;
assign upstream_ready_o = downstream_handshake;
always_ff @(posedge clk or posedge rst) begin
    if(rst) begin
        downstream_valid_o <= 1'b1;
    end else if(flush) begin
        downstream_valid_o <= 1'b1;
    end else if(upstream_ready_o) begin
        downstream_valid_o <= upstream_valid_i;
    end
end

logic [`EXTOP_BUS] extop_w;
logic [`REG_BUS] imm_w;
logic regwr_w;
logic [`BRANCHOP_BUS] branchop_w;
logic memtoreg_w;
logic memwr_w;
logic [`MEMOP_BUS] memop_w;
logic alua_src_w;
logic [`ALUB_SRC_BUS] alub_src_w;
logic [`ALU_CTR_BUS] aluctr_w;

riscv_immgen u0_riscv_immgen(
    .inst_i(inst_i),
    .extop(extop_w),
    .imm_o(imm_w)
);

riscv_control u0_riscv_control(
    .inst_i(inst_i),
    .extop(extop_w),
    .regwr(regwr_w),
    .branchop(branchop_w),
    .memtoreg(memtoreg_w),
    .memwr(memwr_w),
    .memop(memop_w),
    .alua_src(alua_src_w),
    .alub_src(alub_src_w),
    .aluctr(aluctr_w)
);

id_ex u0_id_ex(
	.clk(clk),
	.rst(rst),
	.regwr_in(regwr_w),
	.branchop_in(branchop_w),
	.memtoreg_in(memtoreg_w),
	.memwr_in(memwr_w),
	.memop_in(memop_w),
	.aluctr_in(aluctr_w),
	.aluasrc_in(alua_src_w),
	.alubsrc_in(alub_src_w),
	.rs1_idx_in(inst_i[19:15]),
	.rs2_idx_in(inst_i[24:20]),
	.rs1_val_in(rs1_val_i), //
	.rs2_val_in(rs2_val_i),
	.rd_idx_in(inst_i[11:7]),
	.pc_in(pc_i), //
	.imm_in(imm_w), //
	.opcode_in(inst_i[6:2]), //
	.stall(~upstream_valid_i),
	.flush(flush),
	.regwr_out(regwr_o),
	.branchop_out(branchop_o),
	.memtoreg_out(memtoreg_o),
	.memwr_out(memwr_o),
	.memop_out(memop_o),
	.aluctr_out(aluctr_o),
	.aluasrc_out(alua_src_o),
	.alubsrc_out(alub_src_o),
	.rs1_idx_out(rs1_idx_o),
	.rs2_idx_out(rs2_idx_o),
	.rs1_val_out(rs1_val_o), //
	.rs2_val_out(rs2_val_o),
	.rd_idx_out(rd_idx_o),
	.pc_out(pc_o), //
	.imm_out(imm_o), //
	.opcode_out(opcode_o)
);

endmodule