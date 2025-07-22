#include "Vtop__Dpi.h"
#include "include/include.h"
#include "verilated.h"
#include "verilated_fst_c.h"

#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <thread>

bool rst_n_sync   = false; // read from rtl by dpi-c.
bool diff_skip    = false;
bool diff_commit  = false;
bool system_exit  = false;
int  good_trap    = false;

int main(int argc, char** argv, char** env){

    // global settings during simulation
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtop* top = new Vtop{contextp};

    #ifdef DUMPWAVE_ON
        VerilatedFstC *fstp = new VerilatedFstC;
        contextp->traceEverOn(true);
        top->trace(fspp, 0);
        fstp->open("obj_dir/sim.fst");
    #endif

    // initialize signal
    top->clk = 0;
    top->rst = !0;

    top->eval();

    // simulation loop 
    while (!contextp->gotFinish()) {
        top->clk = !top->clk;
        top->eval();
    }
    delete top;
    delete contextp;
    return 0;
}


#ifdef DUMPWAVE_ON
void dump_wave(VerilatedContext* contextp,VerilatedFstC* fstp,Vtop* top)
{
  contextp->timeInc(1);
  fstp->dump(contextp->time());
}
#endif