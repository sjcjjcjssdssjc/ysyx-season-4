#include "paddr.h"
uint32_t rom[CONFIG_INSTSIZE];
uint8_t pmem[CONFIG_MSIZE];//big endian
void inst_writebyindex(uint32_t ind, uint32_t inst)
{
  rom[ind] = inst;
}
uint32_t inst_read(uint32_t addr){return rom[(addr - 0x80000000) >> 2];}
uint64_t paddr_read(uint64_t addr, uint64_t len){//big endian
  addr -= 0x80000000;
  uint64_t res = 0;
  for(uint64_t i = addr + len - 1; (int64_t)i >= (int64_t)addr; i--){
    res <<= 8;
    res += pmem[i];
  }
  return res;
}
void paddr_write(uint64_t addr, uint64_t len, uint64_t val){//big endian
  addr -= 0x80000000;
  for(uint64_t i = addr; (int64_t)i <= (int64_t)(addr + len - 1); i++){
    pmem[i] = val & 0xFF;
    val >>= 8;
  }
}
