`include "riscv_define.sv"

module mem_wb(
    input logic clk,
    input logic rst,
    input logic memtoreg_in,
    input logic regwr_in,
    input logic [`REG_BUS] alup_val_in,
    input logic [`REG_BUS] memrd_val_in,
    input logic [`REGADDR_BUS] rd_idx_in,
    input logic stall,
    input logic flush,
    output logic memtoreg_out,
    output logic regwr_out,
    output logic [`REG_BUS] alup_val_out,
    output logic [`REG_BUS] memrd_val_out,
    output logic [`REGADDR_BUS] rd_idx_out
);

always_ff @(posedge clk or posedge rst) begin
    if(rst) begin
        memtoreg_out <= 1'b0;
        regwr_out <= 1'b0;
        alup_val_out <= 32'h0;
        memrd_val_out <= 32'h0;
        rd_idx_out <= 5'h0;
    end else if(stall) begin
        memtoreg_out <= memtoreg_out;
        regwr_out <= regwr_out;
        alup_val_out <= alup_val_out;
        memrd_val_out <= memrd_val_out;
        rd_idx_out <= rd_idx_out;
    end else if(flush) begin
        memtoreg_out <= 1'b0;
        regwr_out <= 1'b0;
        alup_val_out <= 32'h0;
        memrd_val_out <= 32'h0;
        rd_idx_out <= 5'h0;
    end else begin
        memtoreg_out <= memtoreg_in;
        regwr_out <= regwr_in;
        alup_val_out <= alup_val_in;
        memrd_val_out <= memrd_val_in;
        rd_idx_out <= rd_idx_in;
    end    
end

endmodule