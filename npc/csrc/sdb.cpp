//#include <isa.h>
//#include <cpu/cpu.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>
#include "defs.h"
#ifdef ITRACE
#include "itrace.h"
#endif
#include "paddr.h" //to be changed
#include <assert.h>
#ifdef DIFF
#include "difftest.h"
riscv64_CPU_state ref_r;
#endif 


#include "Vysyx_22040127_top.h"
#include "Vysyx_22040127_top__Dpi.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

#include "axi4.hpp"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

static int is_batch_mode = true; 
extern uint64_t *cpu_gpr;//main.c(gpr of npc)
extern Vysyx_22040127_top* dut;
extern void wrap_up_trace();
int display_size = 5;
int exec_cnt = 0;
void npc_exec_once(axi4_ref<64,64,4> &mem_ref);
void dump_gpr();//main.c

extern u_int32_t cpu_pc;//main.c
void cpu_exec(unsigned x, axi4_ref<64,64,4> &mem_ref){
  int y = x;
  while(y--){
    npc_exec_once(mem_ref);
    #ifdef ITRACE
    itrace(cpu_pc);
    #endif
    #ifdef DIFF
    if(dut -> wb_valid){
      exec_cnt++;
      //if(exec_cnt == 1)dut->wb_pc = 0x80000000;
      ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);//ref_r is nemu
      bool k = isa_difftest_checkregs(&ref_r, dut->wb_pc);

      //compare the state machine(nextpc, regs of pc)
      /*
      if(dut-> wb_memwrite && ref_r.mwaddr != dut->wb_diff_addr){
        //k=0;
        printf("\033[1;31m nemu waddr:%lx our:%lx  after %d steps nemu pc:%lx our pc:%x \033[0m\n",
        ref_r.mwaddr,dut->wb_diff_addr,exec_cnt,ref_r.pc,dut->wb_pc);
      }
      if(dut-> wb_memwrite && ref_r.mwdata != dut->wb_diff_data){
        //k=0;
        printf("\033[1;31m nemu wdata:%lx our:%lx  after %d steps nemu pc:%lx our pc:%x \033[0m\n",
        ref_r.mwdata,dut->wb_diff_data,exec_cnt,ref_r.pc,dut->wb_pc);
      }
      */
      //compare the memory content
      if(!k)for(int i=0;i<32;i++){
        if(ref_r.gpr[i] != cpu_gpr[i])
          printf("\033[1;31m%s nemu:%lx our processor:%lx nemu pc:%lx our pc:%x after %d steps\033[0m\n", //nemupc!
          regs[i], ref_r.gpr[i], cpu_gpr[i],ref_r.pc,dut->wb_pc,exec_cnt);
      }
      if(ref_r.mcause != dut->mcause){
          printf("\033[1;31m mcause: nemu:%lx our processor:%lx nemu pc:%lx our pc:%x after %d steps\033[0m\n", //nemupc!
          ref_r.mcause, dut->mcause,ref_r.pc,dut->wb_pc,exec_cnt);
        }
        if(ref_r.mepc != dut->mepc){
          printf("\033[1;31m mepc: nemu:%lx our processor:%lx nemu pc:%lx our pc:%x after %d steps\033[0m\n", //nemupc!
          ref_r.mepc, dut->mepc,ref_r.pc,dut->wb_pc,exec_cnt);
        }
        if(ref_r.mie != dut->mie){
          printf("\033[1;31m mie: nemu:%lx our processor:%lx nemu pc:%lx our pc:%x after %d steps\033[0m\n", //nemupc!
          ref_r.mie, dut->mie,ref_r.pc,dut->wb_pc,exec_cnt);
        }
        if(ref_r.mip != dut->mip){
          printf("\033[1;31m mip: nemu:%lx our processor:%lx nemu pc:%lx our pc:%x after %d steps\033[0m\n", //nemupc!
          ref_r.mip, dut->mip,ref_r.pc,dut->wb_pc,exec_cnt);
        }
        if(ref_r.mscratch != dut->mscratch){
          printf("\033[1;31m mscratch: nemu:%lx our processor:%lx nemu pc:%lx our pc:%x after %d steps\033[0m\n", //nemupc!
          ref_r.mscratch, dut->mscratch,ref_r.pc,dut->wb_pc,exec_cnt);
        }
        if(ref_r.mstatus != dut->mstatus){
          printf("\033[1;31m mstatus: nemu:%lx our processor:%lx nemu pc:%lx our pc:%x after %d steps\033[0m\n", //nemupc!
          ref_r.mstatus, dut->mstatus,ref_r.pc,dut->wb_pc,exec_cnt);
        }
        if(ref_r.mtval != dut->mtval){
          printf("\033[1;31m mtval: nemu:%lx our processor:%lx nemu pc:%lx our pc:%x after %d steps\033[0m\n", //nemupc!
          ref_r.mtval, dut->mtval,ref_r.pc,dut->wb_pc,exec_cnt);
        }
        if(ref_r.mtvec != dut->mtvec){
          printf("\033[1;31m mtvec: nemu:%lx our processor:%lx nemu pc:%lx our pc:%x after %d steps\033[0m\n", //nemupc!
          ref_r.mtvec, dut->mtvec,ref_r.pc,dut->wb_pc,exec_cnt);
        }
      //printf("wb pc is %x\n",dut->wb_pc);
      if(ref_r.pc != dut->wb_pc)printf("\033[1;31m nemu pc:%lx our pc:%x after %d steps\033[0m\n",
      ref_r.pc,dut->wb_pc,exec_cnt);
      
      if(k == 0){
        printf("\033[1;31m regs Not same:Hit Bad Trap \033[0m\n"); 
        dump_gpr();
        wrap_up_trace();
        exit(1);
      }

      ref_difftest_exec(1);
    }
    #endif
  }
  
}

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");


  return line_read;
}
static int cmd_c(char *args,axi4_ref<64,64,4> &mem_ref) {
  cpu_exec(-1, mem_ref);
  return 0;
}
/*
static int cmd_d(char *args){
  char *arg = strtok(NULL, "\"");//first
  free_wp(arg);
  return 0;
}
*/

static int cmd_q(char *args,axi4_ref<64,64,4> &mem_ref) {
  wrap_up_trace();
  exit(0);
}

static int cmd_x(char * args,axi4_ref<64,64,4> &mem_ref){
  char *arg = strtok(NULL, " ");//first

  unsigned int len;
  u_int64_t base;
  len = atoi(arg);

  arg = strtok(NULL, " ");//first
  //sscanf(arg,"%lx",&base);
  printf("len:%x base:%lx\n",len,base);
  for(int i = 0;i < len; i++){//long is 64bit
    u_int64_t x = paddr_read(base + i*4, 4);
    printf("addr 0x%lx: 0x%lx\n",base + i*4, x);
  }
  return 0;
}

static int cmd_p(char * args,axi4_ref<64,64,4> &mem_ref){
  return 0;
}


static int cmd_info(char *args,axi4_ref<64,64,4> &mem_ref) {
  char *arg = strtok(NULL, " ");
  if(arg[0] == 'r'){
    dump_gpr();
  } else printf("unknown instruction\n");
  return 0;
}

static int cmd_si(char *args,axi4_ref<64,64,4> &mem_ref) {
  char *arg = strtok(NULL, " ");
  int x = atoi(arg);
  cpu_exec(x, mem_ref);
  return 0;
}

static int cmd_help(char *args,axi4_ref<64,64,4> &mem_ref);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *, axi4_ref<64,64,4> &);
} cmd_table [] = {
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si","single step the program", cmd_si},
  { "info","print program status(regs/supervise node)", cmd_info},
  { "x","scan the memory", cmd_x},
  { "p", "Value of expression", cmd_p },
  //{ "watch", "watch variable and see when it changes", cmd_watch },
  //{ "d", "delete the watchpoint", cmd_d },
  /* TODO: Add more commands */

};
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define NR_CMD ARRLEN(cmd_table)

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop(char *ref_so_file, long img_size, int port, axi4_ref<64,64,4> &mem_ref) {//14
  #ifdef DIFF
  init_difftest(ref_so_file, img_size, port);
  //ref_difftest_exec(1);
  #endif
  if(is_batch_mode){
    cpu_exec(-1, mem_ref);
  }
  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;//to the start of next word
    if (args >= str_end) {
      args = NULL;
    }


    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args, mem_ref) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}
