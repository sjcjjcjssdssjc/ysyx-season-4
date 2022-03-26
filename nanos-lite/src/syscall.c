#include <common.h>
#include "syscall.h"
void do_syscall(Context *c) {
  printf("do syscall\n");
  uintptr_t a[4];
  a[0] = c->GPR1;
  switch (a[0]) {
    case(SYS_yield): yield();break;
    default: panic("Unhandled syscall ID = %lx", a[0]);
  }
}
