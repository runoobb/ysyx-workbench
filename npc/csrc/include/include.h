// from nemu
#ifndef _INCLUDE_H_
#define _INCLUDE_H_

#include "Vtop.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define DUMPWAVE_ON 1

typedef struct {
  uint32_t x[32];
  uint32_t pc;
  uint32_t csr[4];
} regfile;