/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

extern const char *regs[];

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  bool cmpflag = true;
  for(int i = 0; i < 32; i++)
  {
    if(ref_r->gpr[i] != gpr(i))
    {
      cmpflag = false;
      printf("Spike: %-8s = 0x%-8lx\n", regs[i], (unsigned long int)ref_r->gpr[i]);
      printf("Nemu : %-8s = 0x%-8lx\n", regs[i], (unsigned long int)gpr(i));
    }
  }

  // for(int i = 0; i < 4; i++)
  // {
  //   if(ref_r->csr[i] != csr[i])
  //   {
  //     cmpflag = false;
  //     printf("Spike: %-8s = 0x%-8lx\n", regs[i], (unsigned long int)ref_r->gpr[i]);
  //     printf("Nemu : %-8s = 0x%-8lx\n", regs[i], (unsigned long int)gpr(i));      
  //   }
  // }

  if(pc != ref_r->pc)
  {
    cmpflag = false;
    printf("Spike: pc = 0x%lx\n", (unsigned long int)ref_r->pc);
    printf("Nemu : pc = 0x%lx\n", (unsigned long int)pc);
  }
  return cmpflag;
}

void isa_difftest_attach() {
}
