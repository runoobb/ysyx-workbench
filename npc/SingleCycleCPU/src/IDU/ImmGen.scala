package IDU

import chisel3._
import chisel3.util._

class ImmGen extends Module{
    val io = IO(new Bundle{
        val InstrImmField = Input(UInt(25.W))
        // ExtOp  ImmType
        // 000    ImmI
        // 001    ImmU
        // 010    ImmS
        // 011    ImmB
        // 100    ImmJ
        val ExtOp = Input(UInt(3.W))
        val ImmGenOut = Output(UInt(32.W))
    })
    val ImmI = Wire(UInt(32.W)) 
    val ImmU = Wire(UInt(32.W))
    val ImmS = Wire(UInt(32.W))
    val ImmB = Wire(UInt(32.W))
    val ImmJ = Wire(UInt(32.W))
    // bit index of Instr -7 = bit index of InstrImmField
    ImmI := Cat(Fill(20, io.InstrImmField(24)), io.InstrImmField(24, 13))
    ImmU := Cat(io.InstrImmField(24, 5), Fill(12, 0.U(1.W)))
    ImmS := Cat(Fill(20, io.InstrImmField(24)), io.InstrImmField(24, 18), io.InstrImmField(4, 0))
    ImmB := Cat(Fill(20, io.InstrImmField(24)), io.InstrImmField(0), io.InstrImmField(23, 18), io.InstrImmField(4, 1), 0.U(1.W))
    ImmJ := Cat(Fill(12, io.InstrImmField(24)), io.InstrImmField(12, 5), io.InstrImmField(13), io.InstrImmField(23, 14), 0.U(1.W))                  
    io.ImmGenOut := Mux(io.ExtOp === "b000".U, ImmI, 
        Mux(io.ExtOp === "b001".U, ImmU, 
        Mux(io.ExtOp === "b010".U, ImmS,
        Mux(io.ExtOp === "b011".U, ImmB, ImmJ))))
}