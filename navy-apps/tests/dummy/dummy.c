#include <stdint.h>
#include <fixedptc.h>
#include <stdio.h>
#ifdef __ISA_NATIVE__
#error can not support ISA=native
#endif

#define SYS_yield 1
extern int _syscall_(int, uintptr_t, uintptr_t, uintptr_t);
int main() {
  printf("1\n");
  fixedpt a = fixedpt_rconst(1.3);
  fixedpt b = fixedpt_rconst(0.6);
  fixedpt d[4];
  d[0] = fixedpt_mul(a, b);//c8
  d[1] = fixedpt_div(a, b);//200
  d[2] = fixedpt_muli(a,3);//3e7
  d[3] = fixedpt_divi(b,4);//26
  int c = 0;
  if (b > fixedpt_rconst(7.9)) {
    c = fixedpt_toint(fixedpt_div(fixedpt_mul(a + FIXEDPT_ONE, b), fixedpt_rconst(2.3)));
  }
  printf("%x %x %x\n", a,b,c);
  for(int i=0;i<4;i++){
    printf("%x\n",d[i]);
  }
  return _syscall_(SYS_yield, 0, 0, 0);//original
}
/*
LD_PRELOAD is an optional environmental variable containing one or more paths to shared libraries, 
or shared objects, that the loader will load before any other shared library including the C runtime library
*/