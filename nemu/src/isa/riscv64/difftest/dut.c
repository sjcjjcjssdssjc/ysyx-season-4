#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

extern const char *regs[];
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {//pc comp
  int ok=1;
  for(int i = 0; i < 32; i++){
    /*
    if(ref_r -> gpr[i] != cpu.gpr[i])
      printf("%s:ref:%lx our:%lx refpc:%lx mypc:%lx\n",
      regs[i],ref_r -> gpr[i], cpu.gpr[i], ref_r->pc, pc);
    */
    if(ref_r -> gpr[i] != cpu.gpr[i])
      ok=0;
  }
  printf("ref mepc:%lx our:%lx refpc:%lx mypc:%lx\n",
    ref_r->mepc, cpu.mepc, ref_r->pc, pc);
  printf("ref mcause:%lx our:%lx refpc:%lx mypc:%lx\n",
    ref_r->mcause, cpu.mcause, ref_r->pc, pc);
  printf("ref mtvec:%lx our:%lx refpc:%lx mypc:%lx\n",
    ref_r->mtvec, cpu.mtvec, ref_r->pc, pc);
  printf("ref mstatus:%lx our:%lx refpc:%lx mypc:%lx\n",
    ref_r->mstatus, cpu.mstatus, ref_r->pc, pc);
  //word_t mepc, mcause, mtvec, mstatus;
  if(!ok)return false;
  return true;
}

void isa_difftest_attach() {
}
