#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>
#include <syscall.h>//soft link to navy-apps/libs/libos/src/syscall.h
static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {//handler function(4)
  //printf("handle mepc %lx mcause%lx mstatus%lx\n",c->mepc, c->mcause, c->mstatus);//no mtvec
  if (user_handler) {
    Event ev = {0};
    //printf("%d %d\n",SYS_brk,c->mcause);
    switch (c->mcause) {
      case(11): ev.event = EVENT_SYSCALL; break; 
      case(10): ev.event = EVENT_YIELD;  break;
      default:  ev.event = EVENT_ERROR;  break;
    }
  
    
  
    c = user_handler(ev, c);//callback function
    assert(c != NULL);
  }

  return c;//return the stack top
}

extern void __am_asm_trap(void);//(3)trap.S(to am_irq_handle)

//os.main->init_irq(hascte)->this
bool cte_init(Context*(*handler)(Event, Context*)) {//(1)
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));//异常入口地址
  // register event handler
  user_handler = handler;

  return true;
}


void yield() {
  //printf("yield\n");
  asm volatile("li a7, -1; ecall");//ecall:isa_raise_intr(nemu/src/isa/riscv64/system/intr.c)(5)
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
