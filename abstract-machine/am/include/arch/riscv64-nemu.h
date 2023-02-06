#ifndef ARCH_H__
#define ARCH_H__

struct Context {
  // I have fixed the order of these members to match trap.S.
  uintptr_t gpr[32], mcause, mstatus, mepc;
  void *pdir;//handle it so PA4 will not WA
};

#define GPR1 gpr[17] // a7
#define GPR2 gpr[10] // a0
#define GPR3 gpr[11] // a1
#define GPR4 gpr[12] // a2
#define GPRx gpr[28] // t3
#endif
