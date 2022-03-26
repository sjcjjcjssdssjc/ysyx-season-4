#include <common.h>
#include "syscall.h"
void do_syscall(Context *c) {
  printf("do syscall\n");
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;//a0 reg
  a[2] = c->GPR3;//a1 reg
  a[3] = c->GPR4;//a2 reg
  switch (a[0]) {
    case(SYS_yield): c->GPRx = 0; break;//register intptr_t ret asm (GPRx);
    default: panic("Unhandled syscall ID = %lx", a[0]);
  }
}
