// from nemu
#ifndef _INCLUDE_H_
#define _INCLUDE_H_

#include "Vtop.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <cstdint>
#include <cmath>

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

#define DUMPWAVE_ON 1
#define DIFFTEST_ON 1

#define MAX_CYCLES 100000
#define EBREAK 1048691

#define INST_START    0x80000000 // use for difftest reg copy.
#define PMEM_START    0x80000000 // use for difftest mem copy.
#define PMEM_END      0x87ffffff
#define PMEM_MSIZE    (PMEM_END+1-PMEM_START)


// layout of struct regfile in npc should be aligned with struct CPU_state in nemu
typedef struct {
  uint32_t x[32];
  uint32_t csr[4];
  uint32_t pc;
} regfile;


void npc_init(int argc, char** argv);
void print_regs();
bool checkregs(regfile *ref, regfile *dut);

#ifdef DIFFTEST_ON
void difftest_init(char *ref_so_file, long img_size);
bool difftest_check();
void difftest_step();
void diff_cpdutreg2ref();
#endif

#endif