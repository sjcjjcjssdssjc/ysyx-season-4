#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

extern const char *regs[];
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {//pc comp
  int ok=1;
  for(int i = 0; i < 32; i++){
    //if(ref_r -> gpr[i] != cpu.gpr[i])
      printf("%s:ref:%lx our:%lx refpc:%lx mypc:%lx\n",
      regs[i],ref_r -> gpr[i], cpu.gpr[i], ref_r->pc, pc);
    if(ref_r -> gpr[i] != cpu.gpr[i])
      ok=0;
  }
  if(!ok)return false;
  //printf("same\n");
  return true;
}

void isa_difftest_attach() {
}
