#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <memory>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#define CONFIG_INSTSIZE 0x100
#define CONFIG_MSIZE 0x800000
static uint32_t inst[CONFIG_INSTSIZE] = {0x12308113//x[1] = x[1] + 0x123
};
static uint8_t pmem[CONFIG_MSIZE];//big endian
uint64_t read_paddr(int addr, int len){
  uin64_t res = 0;
  for(int i = addr + len - 1; i >= addr; i--){
    res <<= 8;
    res += pmem[i];
  }
}
void nvboard_bind_all_pins(Vtop* dut);

int main(int argc, char** argv, char** env) { 
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);

  Vtop* dut = new Vtop{contextp};
  VerilatedVcdC* tfp = new VerilatedVcdC;
  contextp->traceEverOn(true);
  dut->trace(tfp, 99);
  tfp->open("./build/obj_dir/wave.vcd");

  int sim_time = 10,n=10;//n to reset
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
    dut->instruction = inst[((dut->pc)-0x80000000)>>2];
    dut->eval();
    dut->in = rand() & 0xF; 
    dut->rst = 0;//to fix the sample bug
    tfp->dump(contextp->time());
    printf("in = %d, out = %d\n", dut->in, dut->out);
    ///assert(dut->f == dut->a ^ dut->b);
  }
  tfp->close();
  //nvboard_quit();
  dut->final();
  return 0;
}