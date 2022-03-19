#include "itrace.h"
#include "paddr.h"
void itrace(uint32_t pc){
  //uint32_t tmp = pc;
  
  char p = logbuf;
  p += sprintf(p, "%x: ", pc);
  int ilen = 4;
  int i;
  uint32_t inst = inst_read(pc);
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
  
}