`include "riscv_define.sv"
module ifu(
    input logic clk,
    input logic rst,
    input logic branch_taken,
    input logic [`BRANCHOP_BUS] branch_op_i,
    input logic [`REG_BUS] imm_i,
    input logic [`REG_BUS] rs1_val_i,

    output logic [`INST_ADDR_BUS] pc, // current pc
    // output logic [`INST_ADDR_BUS] npc,

    input logic stall, // stall pc and if_id
    input logic flush, // flush if_id

    // from axi4
    input [`REG_BUS] inst_i,

    // to axi4
    input logic [`INST_ADDR_BUS] pc_i,

    output logic [`INST_BUS] inst_o,
    output logic [`INST_ADDR_BUS] pc_o,

    // PC handshake with EXU
    input logic upstream_valid_i,
    output logic upstream_ready_o,
    
    // IFU handshake with IDU
    input logic downstream_ready_i,
    output logic downstream_valid_o

    // IFU handshake with ICache
    // input logic icache_ready,
    // output logic icache_valid
);

logic [`INST_BUS] pc_w;
assign pc = pc_w;

logic pc_icache_handshake; // pc_icache_handshake

logic pc_icache_valid;
logic icache_pc_ready;
assign icache_pc_ready = 1'b1; // readu signal sent from icache to pc


assign pc_icache_handshake = icache_pc_ready & pc_icache_valid;
assign upstream_ready_o = pc_icache_handshake;
always_ff @(posedge clk or posedge rst) begin
    if(rst) begin
        pc_icache_valid <= 1'b1;
    end else if(flush) begin
        pc_icache_valid <= 1'b1;
    end else if(upstream_ready_o) begin
        pc_icache_valid <= upstream_valid_i;
    end
end



logic ifu_icache_ready; // ready signal sent from if_id to icache
logic icache_ifu_valid; // valid signal sent from icache to if_id
assign icache_ifu_valid = pc_icache_valid;

logic icache_ifu_handshake;
assign icache_ifu_handshake = ifu_icache_ready & icache_ifu_valid;

logic ifu_idu_handshake;
assign ifu_idu_handshake = downstream_ready_i & downstream_valid_o;
assign ifu_icache_ready = ifu_idu_handshake;
always_ff @(posedge clk or posedge rst) begin
    if(rst) begin
        downstream_valid_o <= 1'b1;
    end else if(flush) begin
        downstream_valid_o <= 1'b1;
    end else if(ifu_icache_ready) begin
        downstream_valid_o <= icache_ifu_valid;
    end
end

npc u0_npc(
    .clk(clk),
    .rst(rst),
    .branch_taken(branch_taken),
    .branch_op_i(branch_op_i),
    .imm(imm_i),
    .rs1_val_i(rs1_val_i),
    .pc_i(pc_i),
    .pc_o(pc_w),
    .stall(stall | ~upstream_valid_i)
);

if_id u0_if_id(
	.clk(clk),
	.rst(rst),
	.inst_i(inst_i),
	.pc_i(pc_w),
	.stall(stall | ~icache_ifu_valid),
	.flush(flush),
	.inst_o(inst_o),
	.pc_o(pc_o)
);

endmodule