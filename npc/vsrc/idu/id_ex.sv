`include "riscv_define.sv"

module id_ex (
    input logic clk,
    input logic rst,
    // some of control signal do not need to pass to next stage
    input logic regwr_in,
    input logic [`BRANCHOP_BUS] branchop_in,
    input logic memtoreg_in,
    input logic memwr_in,
    input logic [`MEMOP_BUS] memop_in,
    input logic [`ALU_CTR_BUS] aluctr_in,

    input logic aluasrc_in, // pass to next stage(EX), where forward value are mux
    input logic [`ALUB_SRC_BUS] alubsrc_in,
    input logic [`REGADDR_BUS] rs1_idx_in, // need to store, used by forward unit
    input logic [`REGADDR_BUS] rs2_idx_in,
    input logic [`REG_BUS] rs1_val_in,
    input logic [`REG_BUS] rs2_val_in, // rs2_val is used by load/store instruction, need to pass to next stage
    input logic [`REGADDR_BUS] rd_idx_in,
    input logic [`REG_BUS] pc_in,

    input logic [`REG_BUS] imm_in,
    input logic [4:0] opcode_in,

    input logic stall,
    input logic flush,
    
    output logic regwr_out,
    output logic [`BRANCHOP_BUS] branchop_out,
    output logic memtoreg_out,
    output logic memwr_out,
    output logic [`MEMOP_BUS] memop_out,
    output logic [`ALU_CTR_BUS] aluctr_out,
    output logic  aluasrc_out,
    output logic [`ALUB_SRC_BUS] alubsrc_out,
    output logic [`REGADDR_BUS] rs1_idx_out,
    output logic [`REGADDR_BUS] rs2_idx_out,
    output logic [`REG_BUS] rs1_val_out,
    output logic [`REG_BUS] rs2_val_out,
    output logic [`REGADDR_BUS] rd_idx_out,
    output logic [`INST_ADDR_BUS] pc_out,
    output logic [`REG_BUS] imm_out,
    output logic [4:0] opcode_out
);

always_ff @(posedge clk or posedge rst) begin
    if(rst) begin
        regwr_out <= 1'b0;
        branchop_out <= 3'h0;
        memtoreg_out <= 1'b0;
        memwr_out <= 1'b0;
        memop_out <= 3'b000;
        aluctr_out <= 4'b0000;
        aluasrc_out <= 1'b0;
        alubsrc_out <= 2'b00;
        rs1_idx_out <= 5'h0;
        rs2_idx_out <= 5'h0;
        rs1_val_out <= 32'h0;
        rs2_val_out <= 32'h0;
        rd_idx_out <= 5'h0;
        pc_out <= 32'h0;
        imm_out <= 32'h0;
        opcode_out <= 5'h0;
    end else if(stall) begin
        regwr_out <= regwr_out;
        branchop_out <= branchop_out;
        memtoreg_out <= memtoreg_out;
        memwr_out <= memwr_out;
        memop_out <= memop_out;
        aluctr_out <= aluctr_out;
        aluasrc_out <= aluasrc_out;
        alubsrc_out <= alubsrc_out;
        rs1_idx_out <= rs1_idx_out;
        rs2_idx_out <= rs2_idx_out;
        rs1_val_out <= rs1_val_out;
        rs2_val_out <= rs2_val_out;
        rd_idx_out <= rd_idx_out;
        pc_out <= pc_out;
        imm_out <= imm_out;
        opcode_out <= opcode_out;
    end else if(flush) begin
        regwr_out <= 1'b0;
        branchop_out <= 3'h0;
        memtoreg_out <= 1'b0;
        memwr_out <= 1'b0;
        memop_out <= 3'b000;
        aluctr_out <= 4'b0000;
        aluasrc_out <= 1'b0;
        alubsrc_out <= 2'b00;
        rs1_idx_out <= 5'h0;
        rs2_idx_out <= 5'h0;
        rs1_val_out <= 32'h0;
        rs2_val_out <= 32'h0;
        rd_idx_out <= 5'h0;
        pc_out <= 32'h0;
        imm_out <= 32'h0;
        opcode_out <= 5'h0;
    end else begin
        // Normal operation, pass values to next stage
        regwr_out <= regwr_in;
        branchop_out <= branchop_in;
        memtoreg_out <= memtoreg_in;
        memwr_out <= memwr_in;
        memop_out <= memop_in;
        aluctr_out <= aluctr_in;
        aluasrc_out <= aluasrc_in;
        alubsrc_out <= alubsrc_in;
        rs1_idx_out <= rs1_idx_in;
        rs2_idx_out <= rs2_idx_in;
        rs1_val_out <= rs1_val_in;
        rs2_val_out <= rs2_val_in;
        rd_idx_out <= rd_idx_in;
        pc_out <= pc_in;
        imm_out <= imm_in;
        opcode_out <= opcode_in;
    end
end

endmodule