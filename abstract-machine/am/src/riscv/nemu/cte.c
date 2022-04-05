#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>
#include <syscall.h>//soft link to navy-apps/libs/libos/src/syscall.h
static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {//handler function(hui diao)

  //printf("handle mepc %lx mcause%lx mstatus%lx\n",c->mepc, c->mcause, c->mstatus);//no mtvec
  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case(-1): ev.event = EVENT_YIELD;  break;
      case(SYS_exit): case(SYS_yield): case(SYS_open): case(SYS_read): 
      case(SYS_write):case(SYS_close): case(SYS_lseek):case(SYS_brk):  
      case(SYS_gettimeofday):
      ev.event = EVENT_SYSCALL;break;
      default:  ev.event = EVENT_ERROR;  break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);//trap.S

//os.main->init_irq(hascte)->this
bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));//异常入口地址
  /*
    SR[mepc] <- PC
    SR[mcause] <- 一个描述失败原因的号码
    PC <- SR[mtvec]
  */
  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");//ecall:isa_raise_intr(nemu/src/isa/riscv64/system/intr.c)
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
