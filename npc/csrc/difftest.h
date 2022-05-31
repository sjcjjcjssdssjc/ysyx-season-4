#ifndef __DIFFTEST_H__
#define __DIFFTEST_H__
#include <stdint.h>
#include <stddef.h>
#define RESET_VECTOR 0x80000000
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
extern void (*ref_difftest_memcpy)(uint64_t addr, void *buf, size_t n, bool direction);
extern void (*ref_difftest_regcpy)(void *dut, bool direction);
extern void (*ref_difftest_exec)(uint64_t n);
extern void (*ref_difftest_raise_intr)(uint64_t NO);
typedef struct {
  uint64_t gpr[32];
  uint64_t pc;
  uint64_t mepc, mcause, mtvec, mstatus;
  uint64_t mie, mip, mscratch, mtval;
  uint64_t mwaddr, mwdata;
} riscv64_CPU_state;//nemu cpustate
void init_difftest(char *ref_so_file, long img_size, int port);
bool isa_difftest_checkregs(riscv64_CPU_state *ref_r, uint64_t pc);
#endif