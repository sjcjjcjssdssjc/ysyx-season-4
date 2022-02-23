#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <nvboard.h>
#include "Vtop.h"
#include "verilated.h"

static TOP_NAME dut;

void nvboard_bind_all_pins(Vtop* top);

static void single_cycle() {
  dut.a = rand() & 1;
  dut.b = rand() & 1; 
  dut.eval();
  printf("a = %d, b = %d, f = %d\n", dut.a, dut.b, dut.f);
  assert(dut.f == dut.a ^ dut.b);
}
int main() { // int argc, char** argv

  nvboard_bind_all_pins(&dut);
  nvboard_init();
  //reset(10);
  while(1) {
    nvboard_update();
    single_cycle();
  }
  return 0;
  /*
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  Vtop* top = new Vtop{contextp};
  while (!contextp->gotFinish()){
    int a = rand() & 1;
    int b = rand() & 1;
    top->a = a;
    top->b = b;
    top->eval();
    printf("a = %d, b = %d, f = %d\n", a, b, top->f);
    assert(top->f == a ^ b);
  }
  delete top;
  delete contextp;
  */
}


/*
static void reset(int n) {
  dut.rst = 1;
  while (n -- > 0) single_cycle();
  dut.rst = 0;
}
*/