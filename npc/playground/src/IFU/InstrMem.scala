package IFU
import chisel3._

class InstrMem extends Module {
    val io = IO(new Bundle{
        val RdAddr = Input(UInt(32.W))
        val Instr = Output(UInt(32.W))
    })
    // addi
    val InstrROM = VecInit(1.U, 2.U, 4.U, 8.U)
    io.Instr := InstrROM(io.RdAddr)
}