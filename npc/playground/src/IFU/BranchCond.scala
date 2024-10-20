package IFU

import chisel3._
import chisel3.util._

class BranchCond extends Module{
    val io = IO(new Bundle{
        val Branch = Input(UInt(3.W))
        val Less = Input(UInt(1.W))
        val Zero = Input(UInt(1.W))
        val PCAsrc = Output(UInt(1.W))
        val PCBsrc = Output(UInt(1.W))
    })

    io.PCAsrc := "b0".U
    io.PCBsrc := "b1".U
}