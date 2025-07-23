`include "riscv_define.v"
module riscv_npc (
    input clk,
    input rst,
    input zero_i,
    input less_i,
    input [`BranchOpBus] branch_op_i,
    input [`RegBus] imm,
    input [`RegBus] rs1_val_i,
    output reg [`InstAddrBus] pc_i,
    output [`InstAddrBus] npc
);

    reg PCAsrc_o;
    reg PCBsrc_o;

always@(posedge clk or posedge rst) begin
    if(rst) begin
        pc_i <= 32'h8000_0000; // Reset PC to 0
    end else begin
        pc_i <= npc;
    end
end

always@(*) begin
    if(branch_op_i == 3'b000) begin
        PCAsrc_o = 1'b0; // PC + 4
        PCBsrc_o = 1'b0;
    end else if(branch_op_i == 3'b001) begin
        PCAsrc_o = 1'b1; // PC + imm
        PCBsrc_o = 1'b0;
    end else if(branch_op_i == 3'b010) begin
        PCAsrc_o = 1'b1; // rs1 + imm
        PCBsrc_o = 1'b1;
    end else if(branch_op_i == 3'b100) begin
        PCAsrc_o = zero_i ? 1'b1 : 1'b0;
        PCBsrc_o = 1'b0;
    end else if(branch_op_i == 3'b101) begin
        PCAsrc_o = zero_i ? 1'b0 : 1'b1;
        PCBsrc_o = 1'b0;
    end else if(branch_op_i == 3'b110) begin
        PCAsrc_o = less_i ? 1'b1 : 1'b0;
        PCBsrc_o = 1'b0;
    end else if(branch_op_i == 3'b111) begin
        PCAsrc_o = less_i ? 1'b0 : 1'b1;
        PCBsrc_o = 1'b0;
    end
end

wire [`RegBus] npc_add0 = PCAsrc_o ? imm : 32'h4;
wire [`RegBus] npc_add1 = PCBsrc_o ? rs1_val_i : pc_i;

assign npc = npc_add0 + npc_add1;

endmodule