package IFU

import chisel3._
import chisel3.util._

class PC extends Module{
    val io = IO(new Bundle{
        val PCAsrc = Input(UInt(1.W))
        val PCBsrc = Input(UInt(1.W))
        val Imm = Input(UInt(32.W))
        val Rs1 = Input(UInt(32.W))
        val NextPC = Output(UInt(32.W))
        val CurrentPC = Output(UInt(32.W))
    })
    val CurrentPCReg = RegNext(io.NextPC, 0.U(32.W))
    io.CurrentPC := CurrentPCReg 
    val PCB = Wire(UInt(32.W))
    val PCA = Wire(UInt(32.W))
    PCA := Mux(io.PCAsrc === "b0".U, io.Rs1, io.CurrentPC)
    PCB := Mux(io.PCBsrc === "b0".U, 4.U(32.W), io.Imm)
    io.NextPC := PCA + PCB
}