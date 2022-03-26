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
  switch (a[0]) {
    case(SYS_yield): sys_yield(); break;
    default: panic("Unhandled syscall ID = %lx", a[0]);
  }
}
