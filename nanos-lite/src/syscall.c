#include <common.h>
#include "syscall.h"

enum {
  SYS_exit,
  SYS_yield,
  SYS_open,
  SYS_read,
  SYS_write,
  SYS_kill,
  SYS_getpid,
  SYS_close,
  SYS_lseek,
  SYS_brk,
  SYS_fstat,
  SYS_time,
  SYS_signal,
  SYS_execve,
  SYS_fork,
  SYS_link,
  SYS_unlink,
  SYS_wait,
  SYS_times,
  SYS_gettimeofday
};

//no ecall in syscall handler
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  switch (a[0]) {
    case SYS_exit:
      printf("Exit:a[1], a[2], a[3] = %d, %d, %d\n", a[1], a[2], a[3]);
      if(a[1] == 0)
        halt(0);
      else
        halt(-1);
      break;
    case SYS_yield:
      // printf("%d, %d, %d, %d\n", a[0], a[1], a[2], a[3]);
      // c->GPRx = -1;
      // printf("%d\n", c->GPR2);
      yield();
      c->GPRx = 0;
      break;
    case SYS_brk:
      printf("Brk:a[1], a[2], a[3] = %x, %x, %x\n", a[1], a[2], a[3]);
      c->GPRx = 0;
      break;
    case SYS_write:
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
