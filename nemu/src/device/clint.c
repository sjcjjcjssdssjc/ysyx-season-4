#include <device/map.h>
#include <utils.h>

static uint32_t *clint_base = NULL;

static void clint_io_handler(uint32_t offset, int len, bool is_write) {
}


void init_clint() {
  clint_base = (uint32_t *)new_space(0x10000);

  add_mmio_map("clint", CONFIG_CLINT_MMIO, clint_base, 0x10000, clint_io_handler);

}
