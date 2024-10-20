package EXU

import chisel3._
import chisel3.util._

class EXUWrapper extends Module{
    val io = IO(new Bundle{
        val Rs1 = Input(UInt(32.W))
        val Rs2 = Input(UInt(32.W))
        val PC = Input(UInt(32.W))
        val Imm = Input(UInt(32.W))
        // ALUAsrc  Sel
        // 0        Rs1
        // 1        PC
        val ALUAsrc = Input(UInt(1.W))
        // ALUBsrc  Sel
        // 00       Rs2
        // 01       Imm
        // 10       "4.U"
        val ALUBsrc = Input(UInt(2.W))
        val ALUctr = Input(UInt(4.W))
        val Zero = Output(UInt(1.W))
        val Less = Output(UInt(1.W))
        val Result = Output(UInt(32.W))
    })

    // hardwire to U0ALU
    val U0ALU = Module(new ALU)
    U0ALU.io.Zero <> io.Zero
    U0ALU.io.Less <> io.Less
    U0ALU.io.ALUctr <> io.ALUctr
    U0ALU.io.Result <> io.Result
    
    U0ALU.io.Opa := Mux(io.ALUAsrc === "b0".U, io.Rs1, io.PC)
    U0ALU.io.Opb := Mux(io.ALUBsrc === "b00".U, io.Rs2,
        Mux(io.ALUBsrc === "b01".U, io.Imm, 4.U(32.W)))
    }