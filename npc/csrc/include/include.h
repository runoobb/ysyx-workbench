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

#define MAX_CYCLES 100000
#define EBREAK 1048691

typedef struct {
  uint32_t x[32];
  uint32_t pc;
  uint32_t csr[4];
} regfile;


void npc_init(int argc, char** argv);

#endif