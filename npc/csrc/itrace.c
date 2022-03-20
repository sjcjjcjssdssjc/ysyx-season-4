#include "itrace.h"
#include "paddr.h"
char iringbuf[IRINGBUF_SIZE][100];
char logbuf[100];
int iring_tail = 0;
int first_inst = 1;
int overburden = 0;
void print_surrounding_inst(){
  
  int i = 0;
  //printf("%d\n",overburden);
  if(overburden)i = (iring_tail);
  for(; (i + 1) % IRINGBUF_SIZE != iring_tail; i = (i + 1) % IRINGBUF_SIZE){
    printf("    %s\n",iringbuf[i]);
  }
  printf("--> %s\n",iringbuf[i]);
  
}
void itrace(uint32_t pc){
  //uint32_t tmp = pc;
  char* p = logbuf;
  p += sprintf(p, "%x: ", pc);
  int ilen = 4;
  int i;
  uint32_t inst = inst_read(pc);
  p += sprintf(p, " %08x ", inst);//big endian xianshi
  printf("%s %x\n",logbuf,((uint8_t *)&inst)[0]);

  
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  //printf("%x\n",p);
  disassemble(p, logbuf + sizeof(logbuf) - p,
      pc, (uint8_t *)&inst, 4);

  printf("3 %s\n",logbuf);
  
  
  /*
  int ind = 0;
  ind += sprintf(iringbuf[iring_tail], "%lx: ",pc);
  for (i = 0; i < ilen; i ++) {
    ind += sprintf(iringbuf[iring_tail] + ind, " %02x ",inst[i]);
  }
  ind += sprintf(iringbuf[iring_tail] + ind, "%s",p);
  if(!iring_tail && !first_inst)overburden = 1;
  first_inst = 0;
  iring_tail = (iring_tail + 1) % IRINGBUF_SIZE;
  */
  
  //print_surrounding_inst();
  //printf("%lx: %02x %02x %02x %02x %s\n",pc,inst[0],p);
  //printf("")
  
}