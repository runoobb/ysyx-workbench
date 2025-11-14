`include "riscv_define.sv"
module isram(
    input logic clk,
    input logic rst,
    input logic ce,
    input logic [`INST_ADDR_BUS] addr,
    output logic [`REG_BUS] inst
);

// logic [`REG_BUS] isram [0:1000];

// always_comb begin
//     if(ce == 1'b0) begin
//         inst = 32'b0;
//     end else begin
//         inst = isram[addr[31:2]];
//     end
// end

endmodule
