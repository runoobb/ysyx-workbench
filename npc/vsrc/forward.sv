`include "riscv_define.sv"
module forward(
    input ex_mem_regwr,
    input mem_wb_regwr, //
    input mem_wb_memtoreg, // marks load instructions
    input [`REGADDR_BUS] ex_mem_rd_idx,
    input [`REGADDR_BUS] mem_wb_rd_idx,
    input [4:0] if_id_opcode,
    input [`REGADDR_BUS] if_id_rs1_idx,
    input [`REGADDR_BUS] if_id_rs2_idx,
    input [4:0] id_ex_opcode,
    input [`REGADDR_BUS] id_ex_rs1_idx,
    input [`REGADDR_BUS] id_ex_rs2_idx,
    input [`REG_BUS] forward_ex_mem_alu,
    input [`REG_BUS] forward_mem_wb_alu,
    input [`REG_BUS] forward_mem_wb_mem,
    output [`REG_BUS] forward_ex_mem,
    output [`REG_BUS] forward_mem_wb,
    output [2:0] forwarda,
    output [2:0] forwardb
);

    assign forward_ex_mem = forward_ex_mem_alu;
    assign forward_mem_wb = mem_wb_memtoreg ? forward_mem_wb_mem : forward_mem_wb_alu;

    // forwarda_C1 and forwarda_C2, under these two conditions, val is forwarded to EX stage
    // forwarda_C3 is high when val is forwarded to ID stage
    wire forwarda_C1;
    wire forwarda_C2;
    wire forwarda_C3;
    assign forwarda_C1 = ex_mem_regwr & (ex_mem_rd_idx != 5'b00000) & (ex_mem_rd_idx == id_ex_rs1_idx);
    assign forwarda_C2 = mem_wb_regwr & (mem_wb_rd_idx != 5'b00000) & ~forwarda_C1 & (mem_wb_rd_idx == id_ex_rs1_idx);
    assign forwarda_C3 = mem_wb_regwr & (mem_wb_rd_idx != 5'b00000) & (mem_wb_rd_idx == if_id_rs1_idx);
    assign forwarda[1:0] = forwarda_C1 ? 2'b10 : 
                      forwarda_C2 ? 2'b01 : 2'b00;
    assign forwarda[2] = forwarda_C3 ? 1'b1 : 1'b0;

    // when I type instruction, do not forward B
    wire forwardb_cond1; 
    wire forwardb_cond2; 
    wire forwardb_cond3;
    assign forwardb_cond1 = ex_mem_regwr & (ex_mem_rd_idx != 5'b00000) & (ex_mem_rd_idx == id_ex_rs2_idx) & (id_ex_opcode != 5'b00100); // I-Type instruction do not forward(addi, sw, lw), controller signal pipelined to alu will block(mux not choose)
    assign forwardb_cond2 = mem_wb_regwr & (mem_wb_rd_idx != 5'b00000) & ~forwardb_cond1 & (mem_wb_rd_idx == id_ex_rs2_idx) & (id_ex_opcode != 5'b00100);
    assign forwardb_cond3 = mem_wb_regwr & (mem_wb_rd_idx != 5'b00000) & (mem_wb_rd_idx == if_id_rs2_idx) & (if_id_opcode != 5'b00100); 
    assign forwardb[1:0] = forwardb_cond1 ? 2'b10 : 
                      forwardb_cond2 ? 2'b01 : 2'b00;
    assign forwardb[2] = forwardb_cond3 ? 1'b1 : 1'b0;

endmodule