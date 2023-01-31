#include <common.h>

extern void do_syscall(Context *c);
Context* schedule(Context *prev);
static Context* do_event(Event e, Context* c) {//(5)
  switch (e.event) {
    case EVENT_YIELD  : c = schedule(c); break;
    case EVENT_SYSCALL: do_syscall(c); break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {//os.main->this(hascte)
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
