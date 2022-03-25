#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  //printf("%ld %lx %lx\n",NO,epc,cpu.mtvec);
  word_t mtvec;
  cpu.mepc   = epc;
  cpu.mcause = NO;
  mtvec      = cpu.mtvec;
  
  //1:将当前PC值保存到mepc寄存器
  //2:在mcause寄存器中设置异常号
  return mtvec;//从mtvec寄存器中取出异常入口地址,跳转到异常入口地址(nemu dnpc = mtvec)
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
