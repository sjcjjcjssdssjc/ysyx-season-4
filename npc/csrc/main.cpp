#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <memory>
#include "Vysyx_22040127_top.h"
#include "Vysyx_22040127_top__Dpi.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#define INST_SIZE 4
//#ifndef CONFIG_TARGET_AM
#include <getopt.h>
int sim_time, n;
int read_bin = 0;
void set_simtime(){
  sim_time = 0;
  printf("Good Job\n");
}
#define CONFIG_INSTSIZE 0x80000
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

static char *bin_file = NULL;
static int parse_args(int argc, char *argv[]) {
  int o;
  const struct option table[] = {
   {"bin"      , required_argument, NULL, 'n'},
  };
  while ( (o = getopt_long(argc, argv, "-n:", table, NULL)) != -1) {

    printf("%c %s\n",(char)o,optarg);
    switch (o) {
      case 'n': bin_file = optarg; read_bin = 1; break;
      default:
        printf("you are not prepared!\n");
        exit(0);
    }
  }
  return 0;
}

int main(int argc, char** argv, char** env) { 
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  parse_args(argc, argv);
  if(read_bin){
    FILE *fp;
    fp = fopen(bin_file, "rb");
    uint32_t inst,cnt = 0;
    while(fread(&inst, INST_SIZE, 1, fp)){
      rom[cnt++] = inst;
    }
  }
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
    tfp->dump(contextp->time());
    
    if(contextp->time() >= sim_time)break;
    dut->instruction = rom[((dut->pc)-0x80000000)>>2];
    dut->rst = 0;//to fix the sample bug
    tfp->dump(contextp->time());
  }
  tfp->close();
  //nvboard_quit();
  dut->final();
  return 0;
}