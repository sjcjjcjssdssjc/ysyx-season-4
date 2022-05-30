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
#include "defs.h"

#define INST_SIZE 4

int sim_time, n;
uint64_t *cpu_gpr = NULL;
uint32_t cpu_pc = 0;
Vysyx_22040127_top* dut;
#ifdef WAVE
VerilatedVcdC* tfp;
#endif
VerilatedContext* contextp;
const char *gpr[] = {//to be changed
  "$0", //0
  "ra", //1
  "sp", //2
  "gp", //3
  "tp", //4
  "t0", //5
  "t1", //6
  "t2", //7
  "s0", //8
  "s1", //9 
  "a0", //10
  "a1", //11
  "a2", //12
  "a3", //13
  "a4", //14
  "a5", //15
  "a6", //16
  "a7", //17
  "s2", //18
  "s3", //19
  "s4", //20
  "s5", //21
  "s6", //22
  "s7", //23
  "s8", //24
  "s9", //25
  "s10",//26
  "s11",//27
  "t3", //28
  "t4", //29
  "t5", //30
  "t6"  //31
};
extern "C" void init_disasm(const char *triple);
void sdb_mainloop(char *ref_so_file, long img_size, int port);
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
    printf("gpr[%s] = 0x%lx\n", gpr[i], cpu_gpr[i]);
  }
}
void wrap_up_trace(){
  #ifdef WAVE
  tfp->close();
  #endif
  dut->final();
}
void set_simtime(){//x10 is a0(return)
  sim_time = 0;
  if(cpu_gpr[10] == 0){//a0
    printf("\033[1;32m Hit Good Trap \033[0m\n");//read a0 to see the true result
    wrap_up_trace();
    exit(0);
  }
  else {
    wrap_up_trace();
    printf("\033[1;31m Hit Bad Trap \033[0m\n"); 
    exit(1);
  }
}


static char *bin_file = "../rtt/rtthread.bin";
static char *diff_so_file = NULL;
static int parse_args(int argc, char *argv[]) {
  int o;
  const struct option table[] = {
   {"bin"      , required_argument, NULL, 'n'},
   {"diff"     , required_argument, NULL, 'd'},
  };
  while ( (o = getopt_long(argc, argv, "-n:d:", table, NULL)) != -1) {

    printf("%c %s\n",(char)o,optarg);
    switch (o) {
      case 'n': bin_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      default:
        printf("you are not prepared!\n");
        exit(1);
    }
    //printf("%s\n",diff_so_file);
  }
  return 0;
}
void npc_exec_once(){
  //nvboard_update();
  for(int i = 0;i < 2; i++){

    if(contextp->time() >= sim_time){
      wrap_up_trace();
      printf("\033[1;31m Hit Bad Trap \033[0m\n"); 
      exit(1);
    }
    contextp->timeInc(1);
    dut->clk = !dut->clk;
    dut->eval();
    dut->rst = 0;//to fix the sample bug
    #ifdef WAVE
    tfp->dump(contextp->time());
    #endif
  }
}

int main(int argc, char** argv, char** env) { 
  #ifdef ITRACE
  init_disasm("riscv64-pc-linux-gnu");
  #endif
  contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  parse_args(argc, argv);
  uint32_t inst,addr = 0x80000000;
  FILE *fp;
  fp = fopen(bin_file, "rb");
  while(fread(&inst, INST_SIZE, 1, fp)){
    //printf("addr %x inst %x\n",addr,inst);
    if(addr % 8 == 4)pmem_write(addr,((long long)inst << 32),0xF0);
    else pmem_write(addr,inst,0x0F);
    addr += 4;
  }
  dut = new Vysyx_22040127_top{contextp};
  #ifdef WAVE
  tfp = new VerilatedVcdC;
  contextp->traceEverOn(true);
  dut->trace(tfp, 99);
  tfp->open("./build/obj_dir/wave.vcd");
  #endif
  //0x7FFFFFFF
  sim_time = -1,n = 10;//n to reset (up over)
  //nvboard_bind_all_pins(dut);
  //nvboard_init();

  dut->rst = 1;
  dut->clk = 0;
  while (n -- > 0) {
    
    contextp->timeInc(1);
    dut->clk = !dut->clk; 
    dut->eval();
    #ifdef WAVE
    tfp->dump(contextp->time());
    #endif
  }
  npc_exec_once();
  sdb_mainloop(diff_so_file,addr - 0x80000000,1234);
  wrap_up_trace();
  return 0;
}