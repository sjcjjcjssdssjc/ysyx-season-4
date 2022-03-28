#include <common.h>
#include "syscall.h"
int strace = 1;
uintptr_t sys_write(uintptr_t a[4]){
  printf("%d %d\n",a[1],a[3]);
  if(a[1] == 1 || a[1] == 2){
    char   *buf  = (char *)a[2];
    size_t count = a[3];
    for(size_t i = 0;i < count; i++){
      putch(buf[i]);
    }
    printf("%d\n",count);
    return 1;
  }
  return -1;
}
void do_syscall(Context *c) {
  //printf("do syscall\n");
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;//a0 reg
  a[2] = c->GPR3;//a1 reg
  a[3] = c->GPR4;//a2 reg
  switch (a[0]) {//ssize_t write(int fd, const void *buf, size_t count);
    case(SYS_yield): if(strace)printf("call sys_yield\n"); yield(); c->GPRx = 0; break;
    case(SYS_write): if(strace)printf("call sys_write\n"); c->GPRx = sys_write(a); break;//register intptr_t ret asm (GPRx);
    case(SYS_exit):  if(strace)printf("call sys_exit\n");  halt(a[1]); break;
    default: panic("Unhandled syscall ID = %lx", a[0]);
  }
}
