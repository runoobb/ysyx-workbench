RTL-NEMU Co-simulation
===

## dbg:
manually `make build` before dbg(cause I do not set prelaunch task)    
vscode integrated script locates at ysyx-workbench/.vscode/launch.json  
nemu-log.txt locates at NEMU_HOME/build  
npc-log.txt locates at NPC_HOME/build  
when executes program, compare isa execution stream in these 2 log.txt.

## ISA:  
now only support riscv32(not riscv32e)

## TODO:
in fib.c  
80000054:	  00442783          	lw	a5,4(s0)  
value 0x1 is not correctly passed to RTL module

CPP to Cerilator Type Conversion
Verilator Data Type : CData, SData, IData, QData
