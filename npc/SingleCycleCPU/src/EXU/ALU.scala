package EXU

import chisel3._
import chisel3.util._

class ALU extends Module{
    val io = IO(new Bundle{
        // Opa for rs1, Opb for rs2
        val Opa = Input(UInt(32.W))
        val Opb = Input(UInt(32.W))
        // extend ALUctr width to support more alus 
        val ALUctr = Input(UInt(4.W))
        val Result = Output(UInt(32.W))
        val Zero = Output(UInt(1.W))
        val Less = Output(UInt(1.W))
    })

    val Add = Wire(UInt(32.W))
    val Sub = Wire(UInt(32.W))
    val Mult = Wire(UInt(32.W))
    val ShiftLeft = Wire(UInt(32.W))

    Add := io.Opa + io.Opb
    Sub := io.Opa - io.Opb
    Mult := io.Opa * io.Opb
    ShiftLeft := io.Opa << io.Opb(4, 0)
    io.Result := Mux(io.ALUctr === "b0000".U, Add,
        Mux(io.ALUctr === "b1000".U, Sub,
        Mux(io.ALUctr(2, 0) === "b001".U, ShiftLeft, Mult)))
    io.Zero := 0.U(1.W)
    io.Less := 0.U(1.W)
}