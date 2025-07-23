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

#define DUMPWAVE_ON 1
#define INST_MEMORY_SIZE 1000
#define DATA_MEMORY_SIZE 1024

typedef struct {
  uint32_t x[32];
  uint32_t pc;
  uint32_t csr[4];
} regfile;


void npc_init(int argc, char** argv, uint8_t* inst_mem, uint8_t* data_mem);

#endif