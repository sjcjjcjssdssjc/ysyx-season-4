#include <stdint.h>
typedef struct {
  uint64_t gpr[32];
  uint64_t pc;
} riscv64_CPU_state;//nemu cpustate
extern uint32_t cpu_pc;//main.c
extern uint64_t *cpu_gpr;//main.c