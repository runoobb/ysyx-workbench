// AXI Ref: https://foxsen.github.io/archbase/%E8%AE%A1%E7%AE%97%E6%9C%BA%E6%80%BB%E7%BA%BF%E6%8E%A5%E5%8F%A3%E6%8A%80%E6%9C%AF.html#%E6%80%BB%E7%BA%BF%E6%A6%82%E8%BF%B0

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

uint8_t* inst_mem;
uint8_t* data_mem;
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

    // initialize signal
    top->clk = 0;
    top->rst = 0;
    top->eval();

    //
    inst_mem = (uint8_t* )malloc(sizeof(uint8_t) * INST_MEMORY_SIZE);
    data_mem = (uint8_t* )malloc(sizeof(uint8_t) * DATA_MEMORY_SIZE);
    npc_init(argc, argv, inst_mem, data_mem);

    // sim cycle nums
    int cycles = 0;
    #define MAX_CYCLES 100000
    #define EBREAK 1048691
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

// data_mem_read(top->data_ce_o, top->data_we_o, top->data_addr_o, &(top->data_i));
void data_mem_read(bool ce, bool we, bool valid, uint32_t data_addr, uint32_t* data_i){
    if(valid & data_addr >= DATA_MEMORY_SIZE) {
        printf("illegal addr: 0x%x", data_addr);
        assert(data_addr < DATA_MEMORY_SIZE);
        assert(data_addr % 4 == 0);        
    }
  if(ce & !we & valid) *data_i = (uint32_t)(data_mem[data_addr + 3] + data_mem[data_addr + 2] * (uint32_t)std::pow(2, 8) + data_mem[data_addr + 1] * (uint32_t)std::pow(2, 16) + data_mem[data_addr + 0] * (uint32_t)std::pow(2, 24));
}

// data_mem_write(top->data_ce_o, top->data_we_o, top->data_addr_o)
void data_mem_write(bool ce, bool we, uint32_t data_addr, uint32_t* data_o){
  if(ce & we){
    data_mem[data_addr] = static_cast<uint8_t>(*data_o / std::pow(2, 24));
    data_mem[data_addr + 1] = static_cast<uint8_t>(*data_o / std::pow(2, 16));
    data_mem[data_addr + 2] = static_cast<uint8_t>(*data_o / std::pow(2, 8));
    data_mem[data_addr + 3] = static_cast<uint8_t>(*data_o);
  }
}

// inst_mem_read(top->inst_ce_o, top->inst_addr_o &(top->inst_i))
void inst_mem_read(bool ce, uint32_t inst_addr, uint32_t* inst_i){
  assert(inst_addr < INST_MEMORY_SIZE);
  if(ce) *inst_i = (uint32_t)(inst_mem[inst_addr + 3] + inst_mem[inst_addr + 2] * (uint32_t)std::pow(2, 8) + inst_mem[inst_addr + 1] * (uint32_t)std::pow(2, 16) + inst_mem[inst_addr + 0] * (uint32_t)std::pow(2, 24));
  printf("INST: %x\n", (uint32_t)(inst_mem[inst_addr + 3] + inst_mem[inst_addr + 2] * (uint32_t)std::pow(2, 8) + inst_mem[inst_addr + 1] * (uint32_t)std::pow(2, 16) + inst_mem[inst_addr + 0] * (uint32_t)std::pow(2, 24)));
}