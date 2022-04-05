#include <common.h>
#include <sys/time.h>
#include "fs.h"
#include "syscall.h"
int strace = 0;
size_t sys_write(uintptr_t a[4]) {
  //printf("%lx %lx %lx\n",a[1],a[2],a[3]);
  return fs_write(a[1], (void *)a[2], a[3]);
}

uintptr_t sys_brk(uintptr_t a[4]) {
  uintptr_t *addr = (uintptr_t *)a[2];
  *addr = *addr + a[1];
  return 0;
}
int sys_gettimeofday(uintptr_t a[4]){//0 on success -1 error
  struct timeval *tv = (struct timeval *)a[1];
  //struct timezone *tz = (struct timezone *)a[3];

  tv->tv_usec = io_read(AM_TIMER_UPTIME).us;
  tv->tv_sec  = tv->tv_usec / 1000000;
  //printf("addr %lx %lx usec %ld sec %ld\n",a[2],tv,tv->tv_usec, tv->tv_sec);
  //tz->tz_minuteswest = 0;

  return 0;
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
    case(SYS_open):  
    c->GPRx = fs_open((const char *)a[1] , a[2], a[3]); if(strace)printf("call sys_open fname %s\n",fd2name(c->GPRx)); 
    break;
    case(SYS_read):  if(strace)printf("call sys_read  fname %s\n",fd2name(a[1])); c->GPRx = fs_read(a[1], (void *)a[2], a[3]);break;
    case(SYS_close): if(strace)printf("call sys_close fname %s\n",fd2name(a[1])); c->GPRx = fs_close(a[1]); break;
    case(SYS_lseek): if(strace)printf("call sys_lseek fname %s\n",fd2name(a[1])); c->GPRx = fs_lseek(a[1], a[2], a[3]);break;
    case(SYS_write): if(strace)printf("call sys_write fname %s\n",fd2name(a[1])); c->GPRx = sys_write(a); break;
    case(SYS_exit):  if(strace)printf("call sys_exit\n");  halt(a[1]); break;
    case(SYS_brk):   if(strace)printf("call sys_brk\n"); c->GPRx = sys_brk(a); break;
    case(SYS_gettimeofday):if(strace)printf("call sys_gettimeofday");c->GPRx = sys_gettimeofday(a); break;
    default: panic("Unhandled syscall ID = %lx", a[0]);
  }
}
