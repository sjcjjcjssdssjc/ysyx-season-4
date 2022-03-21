#include "difftest.h"
#include <assert.h>
#include <dlfcn.h>
extern uint8_t* base();
typedef struct {
  uint64_t gpr[32];
  uint64_t pc;
} riscv64_CPU_state;//nemu cpustate
extern uint32_t cpu_pc;//main.c(cpu of npc)
extern uint64_t *cpu_gpr;//main.c(gpr of npc)
void init_difftest(char *ref_so_file, long img_size, int port) {
  riscv64_CPU_state cpu;
  cpu.pc  = cpu_pc;
  for(int i = 0; i < 32; i++)
    cpu.gpr[i] = cpu_gpr[i];
  assert(ref_so_file != NULL);
  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY | MUXNDEF(CONFIG_CC_ASAN, RTLD_DEEPBIND, 0));
  assert(handle);

  ref_difftest_memcpy = dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = dlsym(handle, "difftest_init");
  assert(ref_difftest_init);


  ref_difftest_init(port);
  ref_difftest_memcpy(RESET_VECTOR, base(), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}
bool isa_difftest_checkregs(riscv64_CPU_state *ref_r, uint64_t pc) {
  for(int i = 0; i < 32; i++){
    //printf("%lx %lx %x\n",ref_r -> gpr[i],cpu.gpr[i],pc);
    if(ref_r -> gpr[i] != cpu_gpr[i])
      return false;
  }
  //printf("same\n");
  return true;
}