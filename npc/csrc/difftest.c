#include "defs.h"
#ifdef DIFF

#include "difftest.h"
#include <assert.h>
#include <dlfcn.h>
#include <stdio.h>
extern uint8_t* base();
extern uint32_t cpu_pc;//main.c(cpu of npc)
extern uint64_t *cpu_gpr;//main.c(gpr of npc)
void (*ref_difftest_memcpy)(uint64_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;
void init_difftest(char *ref_so_file, long img_size, int port) {
  riscv64_CPU_state cpu;
  cpu.pc  = cpu_pc;
  for(int i = 0; i < 32; i++)
    cpu.gpr[i] = cpu_gpr[i];
  assert(ref_so_file != NULL);
  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);// | MUXNDEF(CONFIG_CC_ASAN, RTLD_DEEPBIND, 0)
  assert(handle);

  ref_difftest_memcpy = (void (*)(uint64_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void*, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);


  ref_difftest_init(port);
  ref_difftest_memcpy(RESET_VECTOR, base(), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}
bool isa_difftest_checkregs(riscv64_CPU_state *ref_r, uint64_t pc) {
  for(int i = 0; i < 32; i++){
    if(ref_r -> gpr[i] != cpu_gpr[i])
      return false;
  }
  if(ref_r -> pc != pc)return false;
  return true;
}

#endif