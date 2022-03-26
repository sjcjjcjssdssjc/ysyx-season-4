#include <common.h>

extern void do_syscall(Context *c);
static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD : printf("EVENT_YIELD\n"); do_syscall(c); break;
    case EVENT_SYSCALL:printf("EVENT_SYSCALL\n");     break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {//os.main->this(hascte)
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
