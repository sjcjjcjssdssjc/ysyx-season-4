#include "defs.h"
#ifdef ITRACE 
#include "itrace.h"
#include "paddr.h"
char iringbuf[IRINGBUF_SIZE][100];
char logbuf[100]; 
int iring_tail = 0; 
void print_surrounding_inst(){
  
  int i = 0;
  for(; i + 1 != IRINGBUF_SIZE; i = i + 1){
    if(i == iring_tail)printf("--> %s\n",iringbuf[i]);
    else printf("    %s\n",iringbuf[i]);
  }
   
}
void itrace(uint32_t pc, uint32_t inst){
  //uint32_t tmp = pc;
  char* p = logbuf; 
  p += sprintf(p, "%x: ", pc);
  int ilen = 4;
  int i;
  p += sprintf(p, " %08x ", inst);//big endian xianshi

  //printf("%s %ld %x %x %d",p,logbuf + sizeof(logbuf) - p - 1,pc,inst,4);
  disassemble(p, logbuf + sizeof(logbuf) - p,
       pc, (uint8_t *)&inst, 4);
  //if(pc >= 0x83000000)
  //printf("%s\n",logbuf);
  
  sprintf(iringbuf[iring_tail], "%s\n",logbuf);
  iring_tail = (iring_tail + 1) % IRINGBUF_SIZE;
  //printf("%d\n",iring_tail);
  
  //print_surrounding_inst();
  //printf("%lx: %02x %02x %02x %02x %s\n",pc,inst[0],p);
  //printf("")
  
}
#endif