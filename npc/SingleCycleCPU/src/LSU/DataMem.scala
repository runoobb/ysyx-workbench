package LSU

import chisel3._
import chisel3.util._

class DataMem extends Module{
    val io = IO(new Bundle{
        val Addr = Input(UInt(32.W))
        val MemOp = Input(UInt(3.W))
        val DataIn = Input(UInt(32.W))
        val WrEn = Input(UInt(1.W))
        val DataOut = Output(UInt(32.W))
    })
    io.DataOut := 0.U(32.W)
}