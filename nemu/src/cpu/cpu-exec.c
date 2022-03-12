#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include <common.h>
#include <elf.h>
#include <string.h>

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10
#define IRINGBUF_SIZE 8 //must be >= 3

CPU_state cpu = {};
char iringbuf[IRINGBUF_SIZE][100];
int overburden = 0;
int iring_tail = 0;
int first_inst = 1;
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
bool ftrace = 0;

void device_update();
void seek_changes();
void parse_elf(const char *elf_file){
  if(elf_file == NULL){
    panic("Elf file missing\n");
    return;
  }
  ftrace = 1;//give elf, so we trace
  FILE *fp;
  fp = fopen(elf_file, "r");
  if(fp){
    Elf64_Ehdr header; //elf header
    Elf64_Shdr* shdr;  //section header
    //Elf64_Phdr pheader;//program header
    int ret = fread(&header, 1, sizeof(header), fp);
    if(!ret)panic("cannot read file");
    // check so its really an elf file
    //printf("%x %c %c %c\n",header.e_type, header.e_ident[1], header.e_ident[2], header.e_ident[3]);
    if(header.e_type == ET_EXEC  &&
       header.e_ident[1] == 'E' &&
       header.e_ident[2] == 'L' &&
       header.e_ident[3] == 'F') {
       //printf("ok\n");
    }
    else printf("Unrecognized elf header format\n");

    ret = fseek(fp, header.e_shoff, SEEK_SET);
    if(ret != 0)panic("failed to seek header table's file offset");
    shdr = (Elf64_Shdr*)malloc(sizeof(Elf64_Shdr) * header.e_shnum);
    if(shdr == NULL)panic("unable to allocate memory for section header");
    ret = fread(shdr, 1, sizeof(Elf64_Shdr) * header.e_shnum, fp);
    //rewind(fp);//rewind to the start (not needed?)
    //printf("%ld %ld\n",shdr[header.e_shstrndx].sh_offset,shdr[0].sh_offset);
    fseek(fp, shdr[header.e_shstrndx].sh_offset, SEEK_SET);//

    //This member holds the section header table index of the entry
    //associated with the section name string table.
    char* tmp = (char *)malloc(92);//shdr[header.e_shstrndx].sh_size
    printf("%ld %ldoooo\n",shdr[header.e_shstrndx].sh_size,sizeof(tmp));
    ret = fread(tmp, shdr[header.e_shstrndx].sh_size, 1, fp);
    if(ret == 0)panic("cannot read section");
    for(int i = 0; i < header.e_shnum; i++){
      printf("%d %s\n",ret,tmp);
      char *now = tmp + shdr[i].sh_name;
      //printf("%s\n",now);
      if(strcmp(now,".dynsym") != 0)panic("fin");
    }
    // finally close the file
    fclose(fp);
  }
  else{
    panic("elf file err");
  }
}
static void print_surrounding_inst(){
  
  int i = 0;
  //printf("%d\n",overburden);
  if(overburden)i = (iring_tail);
  for(; (i + 1) % IRINGBUF_SIZE != iring_tail; i = (i + 1) % IRINGBUF_SIZE){
    printf("    %s\n",iringbuf[i]);
  }
  printf("--> %s\n",iringbuf[i]);
  
}
static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
  IFDEF(CONFIG_WATCHPOINT, seek_changes());//include
}

static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
#ifdef CONFIG_ITRACE
  vaddr_t tmp = pc;
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = 0; i < ilen; i ++) {//ilen is 4
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
  int ind = 0;
  ind += sprintf(iringbuf[iring_tail], "%lx: ",tmp);
  for (i = 0; i < ilen; i ++) {
    ind += sprintf(iringbuf[iring_tail] + ind, " %02x ",inst[i]);
  }
  ind += sprintf(iringbuf[iring_tail] + ind, "%s",p);
  if(!iring_tail && !first_inst)overburden = 1;
  first_inst = 0;
  iring_tail = (iring_tail + 1) % IRINGBUF_SIZE;
  //print_surrounding_inst();
  //printf("%lx: %02x %02x %02x %02x %s\n",tmp,inst[0],p);
  //printf("")
#endif
}

static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%ld", "%'ld")
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
  print_surrounding_inst();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ASNI_FMT("ABORT", ASNI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ASNI_FMT("HIT GOOD TRAP", ASNI_FG_GREEN) :
            ASNI_FMT("HIT BAD TRAP", ASNI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}
