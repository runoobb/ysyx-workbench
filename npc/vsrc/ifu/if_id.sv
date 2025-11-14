`include "riscv_define.sv"
module if_id(
    input logic clk,
    input logic rst,
    input logic [`REG_BUS] inst_i,
    input logic [`REG_BUS] pc_i,
    input logic stall,
    input logic flush,
    output logic [`INST_BUS] inst_o,
    output logic [`INST_ADDR_BUS] pc_o
);


always_ff @(posedge clk or posedge rst) begin
    if(rst) begin
        inst_o <= 32'h0;
        pc_o <= 32'h0;
    end else if(stall) begin
        inst_o <= inst_o;
        pc_o <= pc_o;
    end else if(flush) begin
        inst_o <= 32'h0;
        pc_o <= 32'h0;
    end else begin
        inst_o <= inst_i;
        pc_o <= pc_i;
    end
end

endmodule