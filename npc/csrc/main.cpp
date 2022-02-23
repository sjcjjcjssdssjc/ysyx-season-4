#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <nvboard.h>
#include <memory>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
void nvboard_bind_all_pins(Vtop* top);
// Legacy function required only so linking works on Cygwin and MSVC++
double sc_time_stamp() { return 0; }

static void single_cycle(Vtop * dut) {
  contextp->timeInc(1);
  // Toggle a fast (time/2 period) clock
  dut->clk = !dut->clk;
  dut->a = rand() & 1;
  dut->b = rand() & 1; 
  dut->eval();
  printf("a = %d, b = %d, f = %d\n", dut->a, dut->b, dut->f);
  assert(dut->f == dut->a ^ dut->b);
}

static void reset(Vtop * dut,int n) {
  dut->rst = 1;
  while (n -- > 0) single_cycle(dut);
  dut->rst = 0;
}

int main(int argc, char** argv, char** env) { 
  // Prevent unused variable warnings
  if (false && argc && argv && env) {}

  // Create logs/ directory in case we have traces to put under it
  Verilated::mkdir("logs");

  contextp->debug(0);

  // Randomization reset policy
  // May be overridden by commandArgs argument parsing
  contextp->randReset(2);

  // Verilator must compute traced signals
  contextp->traceEverOn(true);

  // Pass arguments so Verilated code can see them, e.g. $value$plusargs
  // This needs to be called before you create any model
  contextp->commandArgs(argc, argv);

  Vtop * dut{new Vtop{contextp.get(), "TOP"}};
  dut->clk = 0;
  reset(dut,10);

  int sim_time = 50;
  //nvboard_bind_all_pins(dut);
  //nvboard_init();
  while(contextp->time() < sim_time && !contextp->gotFinish()) {
    nvboard_update();
    single_cycle(dut);
  }
  //nvboard_quit();
  delete(dut);
  return 0;
}