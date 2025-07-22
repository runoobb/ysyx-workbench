package IDU

import chisel3._
import chisel3.util._

class ContrGen extends Module{
    val io = IO(new Bundle{
        val Op = Input(UInt(7.W))
        val Func3 = Input(UInt(3.W))
        val Func7 = Input(UInt(7.W))
        val ExtOp = Output(UInt(3.W))
        val RegWr = Output(UInt(1.W))
        val ALUAsrc = Output(UInt(1.W))
        val ALUBsrc = Output(UInt(2.W))
        val ALUctr = Output(UInt(4.W))
        val Branch = Output(UInt(3.W))
        val MemtoReg = Output(UInt(1.W))
        val MemWr = Output(UInt(1.W))
        val MemOp = Output(UInt(3.W))
    })

    // val RType = Wire(UInt(1.W))
    // val IType = Wire(UInt(1.W))
    // val SType = Wire(UInt(1.W))
    // val BType = Wire(UInt(1.W))
    // val UType = Wire(UInt(1.W))
    // val JType = Wire(UInt(1.W))
    // support addi only
    io.ExtOp := "b000".U
    io.RegWr := "b1".U
    io.Branch := "b000".U
    io.MemtoReg := "b0".U
    io.MemWr := "b0".U
    io.MemOp := "b0".U
    io.ALUAsrc := "b0".U
    io.ALUBsrc := "b01".U
    io.ALUctr := "b0000".U
}

