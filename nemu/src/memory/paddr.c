#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {//word_t and paddr_t are uint64 
  word_t ret = host_read(guest_to_host(addr), len);
  #ifdef CONFIG_MTRACE 
  //printf("nemu: \033[1;15 mread memory 0x%x with length %d,data is 0x%lx\033[0m\n", addr, len, ret);
  #endif
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  //cpu.mwaddr  = addr;
  //cpu.mwvalue = data;
  word_t read_value = host_read(guest_to_host(addr & 0xFFFFFFFFFFFFFFF8) , 8);
  word_t rem = addr % 8;
  cpu.mwaddr = addr;
  if(len == 1)
    cpu.mwdata = (read_value & ~(0xFF << (rem * 8))) | ((data & 0xFF) <<(rem * 8));
  else if(len == 2)
    cpu.mwdata = (read_value & ~(0xFFFF << (rem * 8))) | ((data & 0xFFFF) << (rem * 8));
  else if(len == 4)
    cpu.mwdata = (read_value & ~(0xFFFFFFFF << (rem * 8))) | ((data & 0xFFFFFFFF) << (rem * 8));
  else 
    cpu.mwdata = (read_value) | ((data & 0xFFFFFFFFFFFFFFFF) << (rem * 8));
  #ifdef CONFIG_MTRACE 
  if(addr == 0x80003698 && data){
  printf("\033[1;15m nemu: write memory 0x%x with length %d,data is 0x%lx\033[0m\n", addr, len, data);
  
  }
  #endif
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR ") at pc = " FMT_WORD,
      addr, CONFIG_MBASE, CONFIG_MBASE + CONFIG_MSIZE, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE);
}

word_t paddr_read(paddr_t addr, int len) {
  if(addr >= 0x02000000 && addr <= 0x0200ffff){
    return 0;
  }
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  if(addr >= 0x02000000 && addr <= 0x0200ffff){
    return;
  }
  if (likely(in_pmem(addr))) { pmem_write(addr, len, data); return; }
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}
