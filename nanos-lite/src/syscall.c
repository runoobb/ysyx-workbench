#include <common.h>
#include "syscall.h"

//no ecall in syscall handler
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  switch (a[0]) {
    case SYS_exit:
      Log("Exit:a[1], a[2], a[3] = %d, %d, %d\n", a[1], a[2], a[3]);
      if(a[1] == 0)
        halt(0);
      else
        halt(1);
      break;
    case SYS_yield:
      yield();
      c->GPRx = 0;
      break;
    // @TODO
    case SYS_brk:
      Log("Brk:a[1], a[2], a[3] = %x, %x, %x\n", a[1], a[2], a[3]);
      c->GPRx = 0;
      break;
    case SYS_write:
      Log("Write:a[1], a[2], a[3] = %x, %x, %x\n", a[1], a[2], a[3]);
      if(a[1] == 1 || a[1] == 2)
      {
        for(int i = 0; i < a[3]; i++)
        {
          putch(*((char *)a[2] + i));
        }
        c->GPRx = a[3];
      }
      else
        c->GPRx = -1;
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
