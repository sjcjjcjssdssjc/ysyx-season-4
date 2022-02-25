#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <nvboard.h>
#include <memory>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
void nvboard_bind_all_pins(Vtop* dut);

int main(int argc, char** argv, char** env) { 
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);

  Vtop* dut = new Vtop{contextp};
  VerilatedVcdC* tfp = new VerilatedVcdC;
  contextp->traceEverOn(true);
  dut->trace(tfp, 99);
  tfp->open("./build/obj_dir/wave.vcd");

  int sim_time = 50,n=10;//n to reset
  //nvboard_bind_all_pins(dut);
  //nvboard_init();

  dut->rst = 1;
  dut->clk = 0;
  while (n -- > 0) {
    
    contextp->timeInc(1);
    dut->clk = !dut->clk; 
    dut->eval();
    
    tfp->dump(contextp->time());
  }

  //contextp->time() < 50 && 
  while(contextp->time() < sim_time && !contextp->gotFinish()) {//contextp->time() < sim_time && 
    //nvboard_update();
    contextp->timeInc(1);
    dut->clk = !dut->clk;
    dut->d = dut->d + 1;
    dut->eval();
    dut->load = rand() & 1; 

    dut->rst = 0;//to fix the sample bug
    tfp->dump(contextp->time());
    //printf("a = %d, b = %d, f = %d\n", dut->a, dut->b, dut->f);
    ///assert(dut->f == dut->a ^ dut->b);
  }
  tfp->close();
  //nvboard_quit();
  dut->final();
  return 0;
}