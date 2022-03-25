#include <common.h>

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case 4 : break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {//os.main->this(hascte)
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
