#include <stdint.h>

#ifdef __ISA_NATIVE__
#error can not support ISA=native
#endif

#define SYS_yield 1
//#define SYS_exit  0
//extern void _exit(int status);
extern int _syscall_(int, uintptr_t, uintptr_t, uintptr_t);
int main() {
  //_exit(_syscall_(SYS_yield, 0, 0, 0));
  return _syscall_(SYS_yield, 0, 0, 0);
}
