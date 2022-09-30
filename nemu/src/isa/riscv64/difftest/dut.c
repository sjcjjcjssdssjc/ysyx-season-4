#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

extern const char *regs[];
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {//pc comp
  int ok = 1;
  for(int i = 0; i < 32; i++){
    if(ref_r -> gpr[i] != cpu.gpr[i])
      ok=0;
  }
  if(ref_r->mepc != cpu.mepc || ref_r->mtvec != cpu.mtvec     || ref_r->mcause   != cpu.mcause 
   || ref_r->pc  != pc       || ref_r->mstatus != cpu.mstatus || ref_r->mtval    != cpu.mtval 
   || ref_r->mie != cpu.mie  || ref_r->mip != cpu.mip         || ref_r->mscratch != cpu.mscratch)
   return false;

  if(!ok)return false;
  return true;
}

void isa_difftest_attach() {
}
