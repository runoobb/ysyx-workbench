package top
import EXU._
import IDU._
import IFU._
import LSU._

import chisel3._
import chisel3.util._

class SingleCycleCPU extends Module{
    val U0PC = Module(new PC)
    val U0InstrMem = Module(new InstrMem)
    val U0RegFile = Module(new RegFile)
    val U0ImmGen = Module(new ImmGen)
    val U0ContrGen = Module(new ContrGen)
    val U0EXUWrapper = Module(new EXUWrapper)
    val U0BranchCond = Module(new BranchCond)
    val U0LSUWrapper = Module(new LSUWrapper)
    
    // PC hardwire
    U0PC.io.PCAsrc <> U0BranchCond.io.PCAsrc
    U0PC.io.PCBsrc <> U0BranchCond.io.PCBsrc    
    U0PC.io.Imm <> U0ImmGen.io.ImmGenOut
    U0PC.io.Rs1 <> U0RegFile.io.Busa

    // InstrMem hardwire
    U0InstrMem.io.Instr(19, 15) <> U0RegFile.io.Ra
    U0InstrMem.io.Instr(24, 20) <> U0RegFile.io.Rb
    U0InstrMem.io.Instr(11, 7) <> U0RegFile.io.Rw
    U0InstrMem.io.RdAddr <> U0PC.io.NextPC

    // RegFile hardwire
    U0RegFile.io.Busw <> U0LSUWrapper.io.DataWriteBack
    U0RegFile.io.RegWr <> U0ContrGen.io.RegWr
    U0RegFile.io.Busa <> U0EXUWrapper.io.Rs1
    U0RegFile.io.Busb <> U0EXUWrapper.io.Rs2

    // ImmGen hardwire
    U0ImmGen.io.InstrImmField <> U0InstrMem.io.Instr(31, 7)
    U0ImmGen.io.ExtOp <> U0ContrGen.io.ExtOp
    U0ImmGen.io.ImmGenOut <> U0EXUWrapper.io.Imm

    // ContrGen hardwire
    U0ContrGen.io.Op <> U0InstrMem.io.Instr(6, 0)
    U0ContrGen.io.Func3 <> U0InstrMem.io.Instr(14, 12)
    U0ContrGen.io.Func7 <> U0InstrMem.io.Instr(31, 25)
    U0ContrGen.io.ALUAsrc <> U0EXUWrapper.io.ALUAsrc
    U0ContrGen.io.ALUBsrc <> U0EXUWrapper.io.ALUBsrc
    U0ContrGen.io.ALUctr <> U0EXUWrapper.io.ALUctr
    U0ContrGen.io.Branch <> U0BranchCond.io.Branch
    U0ContrGen.io.MemtoReg <> U0LSUWrapper.io.MemtoReg
    U0ContrGen.io.MemWr <> U0LSUWrapper.io.MemWr
    U0ContrGen.io.MemOp <> U0LSUWrapper.io.MemOp

    // EXUWrapper hardwire
    U0EXUWrapper.io.PC <> U0PC.io.CurrentPC
    U0EXUWrapper.io.Zero <> U0BranchCond.io.Zero
    U0EXUWrapper.io.Less <> U0BranchCond.io.Less

    // LSUWrapper hardwire
    U0LSUWrapper.io.ResultIn <> U0EXUWrapper.io.Result
    U0LSUWrapper.io.Rs2 <> U0RegFile.io.Busb
}