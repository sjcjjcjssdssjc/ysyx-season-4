#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <memory>
#include "Vysyx_22040127_top.h"
#include "Vysyx_22040127_top__Dpi.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
int sim_time, n;
void set_simtime(){
  sim_time = 0;
}
#define CONFIG_INSTSIZE 0x1000
#define CONFIG_MSIZE 0x800000
static uint32_t rom[CONFIG_INSTSIZE] = {0x12308093//x[1] = x[1] + 0x123
,0xFFF08093//x[1] = x[1] - 0x1
,0x12308093//x[1] = x[1] + 0x123
,0x00000000
,0xFFF08093//x[1] = x[1] - 0x1
,0xFFF08093//x[1] = x[1] - 0x1
,0xFFF08093//x[1] = x[1] - 0x1
,0x00100073
};
static uint8_t pmem[CONFIG_MSIZE];//big endian
uint64_t read_paddr(int addr, int len){
  uint64_t res = 0;
  for(int i = addr + len - 1; i >= addr; i--){
    res <<= 8;
    res += pmem[i];
  }
  return res;
}
void nvboard_bind_all_pins(Vysyx_22040127_top* dut);

int main(int argc, char** argv, char** env) { 
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);

  Vysyx_22040127_top* dut = new Vysyx_22040127_top{contextp};
  VerilatedVcdC* tfp = new VerilatedVcdC;
  contextp->traceEverOn(true);
  dut->trace(tfp, 99);
  tfp->open("./build/obj_dir/wave.vcd");

  sim_time = 50,n = 10;//n to reset
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
    dut->eval();
    dut->instruction = rom[((dut->pc)-0x80000000)>>2];
    dut->rst = 0;//to fix the sample bug
    tfp->dump(contextp->time());
    ///assert(dut->f == dut->a ^ dut->b);
    printf("%d\n",sim_time);
  }
  tfp->close();
  //nvboard_quit();
  dut->final();
  return 0;
}