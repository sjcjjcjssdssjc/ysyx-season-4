#include <common.h>
#include "syscall.h"
int sys_yield()
{
  yield();
  return 0;
}
void do_syscall(Context *c) {
  printf("do syscall\n");
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;//a0 reg
  a[2] = c->GPR3;//a1 reg
  a[3] = c->GPR4;//a2 reg
  switch (a[0]) {
    case(SYS_yield): sys_yield(); break;
    default: panic("Unhandled syscall ID = %lx", a[0]);
  }
}
