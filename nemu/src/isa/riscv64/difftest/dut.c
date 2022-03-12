#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  for(int i = 0; i < 32; i++){
    if(ref_r -> gpr[i] != cpu.gpr[i])
      return false;
  }
  //printf("same\n");
  return true;
}

void isa_difftest_attach() {
}
