package LSU

import chisel3._
import chisel3.util._

class LSUWrapper extends Module{
    val io = IO(new Bundle{
        val ResultIn = Input(UInt(32.W))
        val Rs2 = Input(UInt(32.W))
        val MemOp = Input(UInt(3.W))
        val MemWr = Input(UInt(1.W))
        val MemtoReg = Input(UInt(1.W))
        val DataWriteBack = Output(UInt(32.W))
    })

    val U0DataMem = Module(new DataMem)
    U0DataMem.io.Addr <> io.ResultIn
    U0DataMem.io.MemOp <> io.MemOp
    U0DataMem.io.WrEn <> io.MemWr
    U0DataMem.io.DataIn <> io.Rs2

    io.DataWriteBack := Mux(io.MemtoReg === "b0".U, io.ResultIn, U0DataMem.io.DataOut)

}