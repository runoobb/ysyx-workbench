package IFU
import chisel3._

class InstrMem extends Module {
    val io = IO(new Bundle{
        val RdAddr = Input(UInt(32.W))
        val Instr = Output(UInt(32.W))
    })
    // addi
    val InstrMem = SyncReadMem(4, UInt(32.W))
    io.Instr := InstrMem.read(io.RdAddr, true.B)
}