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


word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
    //0 mcause
    //1 mstatus
    //2 mepc
    //3 mtvec

  // mcause correspond to /home/ykwang/Templates/ysyx-workbench/abstract-machine/am/src/riscv/nemu/cte.c
  // not sure correct or not

  // ETRACE
  extern int is_batch_mode;
  if(is_batch_mode){
    printf("E: mcause = %x    mstatus = %x    mepc = %x\n", cpu.csr[0], cpu.csr[1], cpu.csr[2]);
    switch(cpu.csr[0]){
      case -1:
        printf("E: event yield\n"); break;
      case 0 ... 19:
        printf("E: event syscall\n"); break;
      default:
        printf("E: event error\n"); break;
    }
  }
  cpu.csr[2] = epc;
  cpu.csr[0] = NO;
  return cpu.csr[3];
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
