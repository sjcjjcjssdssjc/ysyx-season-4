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

#include "axi4.hpp"
#include "axi4_slave.hpp"
#include "axi4_mem.hpp"

extern uint8_t pmem[CONFIG_MSIZE];

axi4_ptr<64,64,4> mem_ptr;
axi4_mem<64,64,4> mem(4096l*1024*1024);//8000000
axi4<64,64,4> mem_sigs;
axi4_ref<64,64,4> mem_sigs_ref(mem_sigs);
#define INST_SIZE 4

int sim_time, n;
uint64_t *cpu_gpr = NULL;
uint32_t cpu_pc = 0;
Vysyx_22040127_top* dut;
#define WAVE 1
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
void sdb_mainloop(char *ref_so_file, long img_size, int port, axi4_ref<64,64,4> &mem_ref);
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
int cyclecnt = 0;
void npc_exec_once(axi4_ref<64,64,4> &mem_ref){
  //nvboard_update();

  if(contextp->time() >= sim_time){
    wrap_up_trace();
    printf("\033[1;31m Hit Bad Trap \033[0m\n"); 
    exit(1);
  }

  contextp->timeInc(1);
  dut->rst = 0;//to fix the sample bug  
  dut->clk = 1;

  //updata_input:master->slave
  //mem_sigs.member = mem_ref.*member; mem_ref is mem_ptr's ref
  mem_sigs.update_input(mem_ref);                 //mem_sigs<-mem_ref master->slave
  dut->eval(); 

  //this update surfaces in next posedge
  //updata_output:slave->master
  mem.beat(mem_sigs_ref);//update this ref        //mem->mem_sigs_ref
  mem_sigs.update_output(mem_ref);                //mem_sigs->mem_ref slave->master
  
  // #ifdef WAVE
  //   if(cyclecnt >= 500000)
  //     tfp->dump(contextp->time());
  // #endif 

  contextp->timeInc(1);
  dut->clk = 0;
  dut->eval();  
  cyclecnt++;
  #ifdef WAVE
    if(cyclecnt >= 1000000 && cyclecnt <= 2000000)
      tfp->dump(contextp->time());//must do right after eval
  #endif 
  
}


void connect_wire(axi4_ptr<64,64,4> &mem_ptr){

  //master->slave 
  //no user prot qos lock cache region
  mem_ptr.awready = &(dut->axi_aw_ready_i);
  mem_ptr.awvalid = &(dut->axi_aw_valid_o);
  mem_ptr.awaddr  = &(dut->axi_aw_addr_o);
  mem_ptr.awid    = &(dut->axi_aw_id_o);
  mem_ptr.awlen   = &(dut->axi_aw_len_o);
  mem_ptr.awsize  = &(dut->axi_aw_size_o);
  mem_ptr.awburst = &(dut->axi_aw_burst_o);
  
  //no user
  mem_ptr.wready  = &(dut->axi_w_ready_i);
  mem_ptr.wvalid  = &(dut->axi_w_valid_o);
  mem_ptr.wdata   = &(dut->axi_w_data_o);
  mem_ptr.wstrb   = &(dut->axi_w_strb_o);
  mem_ptr.wlast   = &(dut->axi_w_last_o);
  
  mem_ptr.bready  = &(dut->axi_b_ready_o);
  mem_ptr.bvalid  = &(dut->axi_b_valid_i);
  mem_ptr.bresp   = &(dut->axi_b_resp_i);
  mem_ptr.bid     = &(dut->axi_b_id_i);

  //no prot user lock cache qos region
  mem_ptr.arready = &(dut->axi_ar_ready_i);
  mem_ptr.arvalid = &(dut->axi_ar_valid_o);
  mem_ptr.araddr  = &(dut->axi_ar_addr_o);
  mem_ptr.arid    = &(dut->axi_ar_id_o);
  mem_ptr.arlen   = &(dut->axi_ar_len_o);
  mem_ptr.arsize  = &(dut->axi_ar_size_o);
  mem_ptr.arburst = &(dut->axi_ar_burst_o);

  mem_ptr.rvalid  = &(dut->axi_r_valid_i);
  mem_ptr.rresp   = &(dut->axi_r_resp_i);
  mem_ptr.rdata   = &(dut->axi_r_data_i);
  mem_ptr.rlast   = &(dut->axi_r_last_i);
  mem_ptr.rid     = &(dut->axi_r_id_i);
  mem_ptr.rready  = &(dut->axi_r_ready_o);
}

int main(int argc, char** argv, char** env) { 

  printf("%s %s\n",argv[0],argv[1],argv[2]);
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
  fclose(fp);
  mem.load_binary(bin_file, 0x80000000);

  dut = new Vysyx_22040127_top{contextp};
  #ifdef WAVE  
  tfp = new VerilatedVcdC;
  contextp->traceEverOn(true);
  dut->trace(tfp, 3);  
  tfp->open("./build/obj_dir/wave.vcd");
  #endif
  //0x7FFFFFFF
  sim_time = -1,n = 10;//n to reset (up over)
  //nvboard_bind_all_pins(dut);
  //nvboard_init();

  connect_wire(mem_ptr);
  assert(mem_ptr.check());
  axi4_ref<64,64,4> mem_ref(mem_ptr);
  printf("\033[1;32m check complete \033[0m\n");
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
  
  npc_exec_once(mem_ref);
  sdb_mainloop(diff_so_file,addr - 0x80000000,1234,mem_ref);
  wrap_up_trace();
  return 0;
}