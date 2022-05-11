#include "paddr.h"
#include "defs.h"
#include <stdio.h>
extern void set_simtime();
uint8_t pmem[CONFIG_MSIZE];//big endian
// void inst_writebyindex(uint32_t ind, uint32_t inst)
// {
//   rom[ind] = inst;
// }
// uint32_t inst_read(uint32_t addr){return rom[(addr - 0x80000000) >> 2];}
uint8_t* base(){
  return pmem;
}
uint64_t paddr_read(uint64_t addr, uint64_t len){//sdb read
  addr -= 0x80000000;
  uint64_t res = 0;
  for(uint64_t i = addr + len - 1; (int64_t)i >= (int64_t)addr; i--){
    res <<= 8;
    res += pmem[i];
  }
  return res;
}

extern "C" void pmem_read(long long raddr, long long *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
  //printf("%llx\n",raddr);
  long long tmp = raddr;
  raddr &= ~(0x7ull);
  raddr -= 0x80000000;
  if(raddr + 0x80000000 >= 0x02000000 && raddr + 0x80000000 <= 0x0200ffff){
    *rdata = 0;
    return;//plic
  }
  if(raddr < 0 || raddr >= CONFIG_MSIZE){
    printf("R %llx\n",raddr+0x80000000);
    //*rdata = 0;
    //return;
  }
  
  long long res = 0;
  for(long long i = raddr + 7; (int64_t)i >= (int64_t)raddr; i--){
    
    res <<= 8;
    res += pmem[i];
  }
  *rdata = res;
  #ifdef MTRACE
  printf("read mem with addr %llx, data is %llx\n",tmp,*rdata);
  #endif
}
extern "C" void pmem_write(long long waddr, long long wdata, char wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  waddr &= ~(0x7ull);
  waddr -= 0x80000000;
  if(waddr + 0x80000000 >= 0x02000000 && waddr + 0x80000000 <= 0x0200ffff)return;//plic
  if(waddr < 0 || waddr >= CONFIG_MSIZE || !wmask){
     printf("W %llx\n",waddr+0x80000000);
  //   return;
  }
  
  long long tmp = wdata;
  for(long long i = waddr; i <= waddr + 7; i++){
    if(wmask & (1 << (i - waddr))){
      pmem[i] = wdata & 0xFF;
    }
    wdata >>= 8;
  }
  #ifdef MTRACE
  long long rdata;
  pmem_read(waddr + 0x80000000,&rdata);
  printf("write mem with addr %llx, data is %llx,mask is %x,\
  when read, it is %llx\n",waddr + 0x80000000,tmp,(unsigned int)(wmask & 0xFF)
  , rdata);

  #endif
}

/*
void paddr_write(uint64_t addr, uint64_t len, uint64_t val){//big endian
  addr -= 0x80000000;
  for(uint64_t i = addr; (int64_t)i <= (int64_t)(addr + len - 1); i++){
    pmem[i] = val & 0xFF;
    val >>= 8;
  }
}
*/
