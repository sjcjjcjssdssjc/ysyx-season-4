
#ifndef __PADDR_H__
#define __PADDR_H__
#include <stdint.h>
#define CONFIG_INSTSIZE 0x80000
#define CONFIG_MSIZE 0x800000
uint32_t inst_read(uint32_t addr);
void inst_writebyindex(uint32_t ind,uint32_t inst);
uint64_t paddr_read(uint64_t addr, uint64_t len);
void paddr_write(uint64_t addr, uint64_t len, uint64_t val);
#endif