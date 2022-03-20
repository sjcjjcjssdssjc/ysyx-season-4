#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <memory>
#include <getopt.h>

#include "Vysyx_22040127_top.h"
#include "Vysyx_22040127_top__Dpi.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"
#include "paddr.h"

#define INST_SIZE 4

int sim_time, n;
int read_bin = 0;
uint64_t *cpu_gpr = NULL;
uint32_t cpu_pc = 0;
Vysyx_22040127_top* dut;
VerilatedVcdC* tfp;
VerilatedContext* contextp;

void sdb_mainloop();
void nvboard_bind_all_pins(Vysyx_22040127_top* dut);

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}
extern "C" void set_pc(const svBitVecVal* pc) {
  cpu_pc = *pc;
}

void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}

void set_simtime(){//x10 is a0(return)
  sim_time = 0;
  if(cpu_gpr[10] == 0){//a0
    printf("\033[1;32m Hit Good Trap \033[0m\n");//read a0 to see the true result
    exit(0);
  }
  else {
    exit(1);
    printf("\033[1;31m Hit Bad Trap \033[0m\n");
  }
}


static char *bin_file = NULL;
static int parse_args(int argc, char *argv[]) {
  int o;
  const struct option table[] = {
   {"bin"      , required_argument, NULL, 'n'},
  };
  while ( (o = getopt_long(argc, argv, "-n:", table, NULL)) != -1) {

    //printf("%c %s\n",(char)o,optarg);
    switch (o) {
      case 'n': bin_file = optarg; read_bin = 1; break;
      default:
        printf("you are not prepared!\n");
        exit(1);
    }
  }
  return 0;
}
void npc_exec_once(){
  //nvboard_update();
  for(int i = 0;i < 2; i++){

    if(contextp->time() >= sim_time){
      tfp->dump(contextp->time());
      break;
    }
    contextp->timeInc(1);
    dut->clk = !dut->clk;
    dut->eval();
    dut->instruction = inst_read(dut->pc);
    dut->rst = 0;//to fix the sample bug
    tfp->dump(contextp->time());
    //printf("%x\n",dut->pc);
    //if(dut->clk)dump_gpr();
  }
}

int main(int argc, char** argv, char** env) { 
  paddr_write(0x80000000,4,3000);
  contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  parse_args(argc, argv);
  if(read_bin){
    FILE *fp;
    fp = fopen(bin_file, "rb");
    uint32_t inst,cnt = 0;
    while(fread(&inst, INST_SIZE, 1, fp)){
      inst_writebyindex(cnt++,inst);
    }
  }
  dut = new Vysyx_22040127_top{contextp};
  tfp = new VerilatedVcdC;
  contextp->traceEverOn(true);
  dut->trace(tfp, 99);
  tfp->open("./build/obj_dir/wave.vcd");

  sim_time = 500,n = 10;//n to reset (up over)
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
  npc_exec_once();
  sdb_mainloop();
  tfp->close();
  //nvboard_quit();
  dut->final();
  return 0;
}