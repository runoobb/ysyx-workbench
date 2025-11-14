`include "riscv_define.sv"

module ex_mem(
    input logic clk,
    input logic rst,
    input logic regwr_in,
    input logic [`BRANCHOP_BUS] branchop_in,
    input logic memtoreg_in,
    input logic memwr_in,
    input logic [`MEMOP_BUS] memop_in,
    input logic [`REG_BUS] rs1_val_in,
    input logic [`REG_BUS] rs2_val_in,
    input logic [`REG_BUS] pc_in,
    input logic [`REG_BUS] alup_val_in,
    input logic [`REGADDR_BUS] rd_idx_in,
    input logic zero_in,
    input logic less_in,
    input logic [`REG_BUS] imm_in,
    input logic stall,
    input logic flush,
    output logic regwr_out,
    output logic [`BRANCHOP_BUS] branchop_out,
    output logic memtoreg_out,
    output logic memwr_out,
    output logic [`MEMOP_BUS] memop_out,
    output logic [`REG_BUS] rs1_val_out, //
    output logic [`REG_BUS] rs2_val_out,
    output logic [`REG_BUS] pc_out, //
    output logic [`REG_BUS] alup_val_out,
    output logic [`REGADDR_BUS] rd_idx_out,
    output logic zero_out,
    output logic less_out,
    output logic [`REG_BUS] imm_out
);

always_ff @(posedge clk or posedge rst) begin
    if(rst) begin
        regwr_out <= 1'b0;
        branchop_out <= 3'b000;
        memtoreg_out <= 1'b0;
        memwr_out <= 1'b0;
        memop_out <= 3'b000;
        rs1_val_out <= 32'h0;
        rs2_val_out <= 32'h0;
        pc_out <= 32'h0;
        alup_val_out <= 32'h0;
        rd_idx_out <= 5'h0;
        zero_out <= 1'b0;
        less_out <= 1'b0;
        imm_out <= 32'h0;
    end else if(stall) begin
        regwr_out <= regwr_out;
        branchop_out <= branchop_out;
        memtoreg_out <= memtoreg_in;
        memwr_out <= memwr_out;
        memop_out <= memop_out;
        rs1_val_out <= rs1_val_out;
        rs2_val_out <= rs2_val_out;
        pc_out <= pc_out;
        alup_val_out <= alup_val_out;
        rd_idx_out <= rd_idx_out;
        zero_out <= zero_out;
        less_out <= less_out;
        imm_out <= imm_out;
    end else if(flush) begin
        regwr_out <= 1'b0;
        branchop_out <= 3'b000;
        memtoreg_out <= 1'b0;
        memwr_out <= 1'b0;
        memop_out <= 3'b000;
        rs1_val_out <= 32'h0;
        rs2_val_out <= 32'h0;
        pc_out <= 32'h0;
        alup_val_out <= 32'h0;
        rd_idx_out <= 5'h0;
        zero_out <= 1'b0;
        less_out <= 1'b0;
        imm_out <= 32'h0;
    end else begin
        regwr_out <= regwr_in;
        branchop_out <= branchop_in;
        memtoreg_out <= memtoreg_in;
        memwr_out <= memwr_in;
        memop_out <= memop_in;
        rs1_val_out <= rs1_val_in;
        rs2_val_out <= rs2_val_in;
        pc_out <= pc_in;
        alup_val_out <= alup_val_in;
        rd_idx_out <= rd_idx_in;
        zero_out <= zero_in;
        less_out <= less_in;
        imm_out <= imm_in;
    end
end

endmodule