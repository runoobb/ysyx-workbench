// AXI Ref: https://foxsen.github.io/archbase/%E8%AE%A1%E7%AE%97%E6%9C%BA%E6%80%BB%E7%BA%BF%E6%8E%A5%E5%8F%A3%E6%8A%80%E6%9C%AF.html#%E6%80%BB%E7%BA%BF%E6%A6%82%E8%BF%B0

#include "Vtop__Dpi.h"
#include "include/include.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <common.h>
#include <memory/paddr.h>
#include <memory/vaddr.h>
#include <memory/host.h>


#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <thread>

bool rst_n_sync   = false; // read from rtl by dpi-c.
bool diff_skip    = false;
bool diff_commit  = false;
bool system_exit  = false;
int  good_trap    = false;

regfile dut_reg;

#ifdef DUMPWAVE_ON
void dump_wave(VerilatedContext* contextp,VerilatedFstC* fstp, Vtop* top);
#endif

// data_mem_read(top->data_ce_o, top->data_we_o, top->data_addr_o, &(top->data_i));
void data_mem_read(bool ce, bool we, bool valid, uint32_t data_addr, uint32_t* data_i);

// data_mem_write(top->data_ce_o, top->data_we_o, top->data_addr_o, &(top->data_o))
void data_mem_write(bool ce, bool we, uint32_t data_addr, uint32_t* data_o);

// inst_mem_read(top->inst_ce_o, top->inst_addr_o, &(top->inst_i))
void inst_mem_read(bool ce, uint32_t inst_addr, uint32_t* inst_i);

int main(int argc, char** argv, char** env){

    // global settings during simulation
    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtop* top = new Vtop{contextp};

    #ifdef DUMPWAVE_ON
        VerilatedFstC *fstp = new VerilatedFstC;
        contextp->traceEverOn(true);
        top->trace(fstp, 0);
        fstp->open("/home/ykwang/Templates/ysyx-workbench/npc/obj_dir/sim.fst");
    #endif

    // initialize signal and reset pc
    top->clk = 1;
    top->rst = 0;
    top->eval();
    top->clk = 0;
    top->rst = !0;
    top->eval();
    top->rst = 0;
    //
    npc_init(argc, argv);
    // sim cycle nums
    int cycles = 0;
    // simulation loop 
    while (!contextp->gotFinish() & cycles < MAX_CYCLES & top->inst_i != EBREAK) {
        // clk driver
        top->clk = !top->clk;

        // dut driver(posedge)
        if(top->clk){
            inst_mem_read(top->inst_ce_o, top->inst_addr_o, &(top->inst_i));
            top->eval();
            printf("cycle: %d\n", cycles);
            data_mem_read(top->data_ce_o, top->data_we_o, top->mem_to_reg_o, top->data_addr_o, &(top->data_i));
            data_mem_write(top->data_ce_o, top->data_we_o, top->data_addr_o, &(top->data_o));
        }
        top->eval();    
        cycles++;
        #ifdef DUMPWAVE_ON
        dump_wave(contextp, fstp, top);
        #endif
    }

    top->final();
    #ifdef DUMPWAVE_ON
    dump_wave(contextp, fstp, top);
    fstp->close();
    delete fstp;
    #endif
    printf("Wave dump!\n");

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

// data_mem_read(top->data_ce_o, top->data_we_o, top->mem_to_reg_o, top->data_addr_o, &(top->data_i));
void data_mem_read(bool ce, bool we, bool valid, uint32_t data_addr, uint32_t* data_i){
  if(ce & !we & valid) *data_i = vaddr_read(data_addr, 4);
}

// data_mem_write(top->data_ce_o, top->data_we_o, top->data_addr_o)
void data_mem_write(bool ce, bool we, uint32_t data_addr, uint32_t* data_o){
  if(ce & we){
    vaddr_write(data_addr, 4, *data_o);
  }
}

// inst_mem_read(top->inst_ce_o, top->inst_addr_o, &(top->inst_i))
void inst_mem_read(bool ce, uint32_t inst_addr, uint32_t* inst_i){
  if(ce) *inst_i = vaddr_ifetch(inst_addr, 4);
}