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
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}
void wrap_up_trace(){
  tfp->close();
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


static char *bin_file = NULL;
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
      case 'n': bin_file = optarg; read_bin = 1; break;
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
      tfp->dump(contextp->time());
      break;
    }
    contextp->timeInc(1);
    dut->clk = !dut->clk;
    dut->eval();
    //dut->instruction = paddr_read(dut->pc, 4);
    dut->rst = 0;//to fix the sample bug
    tfp->dump(contextp->time());
    //printf("%x\n",dut->pc);
    //if(dut->clk)dump_gpr();
  }
}

int main(int argc, char** argv, char** env) { 
  contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  parse_args(argc, argv);
  uint32_t inst,addr = 0x80000000;
  if(read_bin){
    FILE *fp;
    fp = fopen(bin_file, "rb");
    while(fread(&inst, INST_SIZE, 1, fp)){
      //printf("addr %x inst %x\n",addr,inst);
      if(addr % 8 == 4)pmem_write(addr,(long long)inst << 32,0xF0);
      else pmem_write(addr,inst,0x0F);
      addr += 4;
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
  sdb_mainloop(diff_so_file,addr - 0x80000000,1234);
  wrap_up_trace();
  return 0;
}