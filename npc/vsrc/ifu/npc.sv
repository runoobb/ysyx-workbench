`include "riscv_define.sv"
module npc (
    input logic clk,
    input logic rst,
    input logic branch_taken,
    input logic [`BRANCHOP_BUS] branch_op_i,
    input logic [`REG_BUS] imm,
    input logic [`REG_BUS] rs1_val_i,
    input logic [`INST_ADDR_BUS] pc_i,
    output logic [`INST_ADDR_BUS] pc_o,
    // output logic [`INST_ADDR_BUS] npc,
    input logic stall
);

logic [`INST_ADDR_BUS] npc;

always_ff @(posedge clk or posedge rst) begin
    if(rst) begin
        pc_o <= 32'h8000_0000; // Reset PC to 0
    end else if(stall) begin
        pc_o <= pc_o;
    end else if(branch_taken) begin
        pc_o <= npc;
    end else
        pc_o <= pc_o + 32'h4;
end

// handle branch taken case: pc_o <= npc
always_comb begin
    if(branch_op_i == 3'b001) begin
        npc = pc_i + imm;
    end else if(branch_op_i == 3'b010) begin
        npc = rs1_val_i + imm; 
    end else if(branch_op_i == 3'b100) begin
        npc = pc_i + imm;
    end else if(branch_op_i == 3'b101) begin
        npc = pc_i + imm;
    end else if(branch_op_i == 3'b110) begin
        npc = pc_i + imm;
    end else if(branch_op_i == 3'b111) begin
        npc = pc_i + imm;
    end else begin
        npc = 32'b0;
    end
end

endmodule