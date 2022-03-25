#include <isa.h>

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  printf("%ld %ld\n",NO,epc);
  //todo:将当前PC值保存到mepc寄存器
  //todo:在mcause寄存器中设置异常号
  //todo:从mtvec寄存器中取出异常入口地址,跳转到异常入口地址
  return 0;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
