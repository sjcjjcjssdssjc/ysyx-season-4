#include <common.h>
#include "syscall.h"
void do_syscall(Context *c) {
  printf("do syscall\n");
  uintptr_t a[4];
  a[0] = c->GPR1;

  switch (a[0]) {
    default: panic("Unhandled syscall ID = %x", a[0]);
  }
}
