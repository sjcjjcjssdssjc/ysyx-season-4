#include "sim.h"
#include "../../include/common.h"
#include <difftest-def.h>

#ifdef CONFIG_ISA_riscv32
#undef DEFAULT_ISA
#define DEFAULT_ISA "RV32IM"
#endif

static std::vector<std::pair<reg_t, abstract_device_t*>> difftest_plugin_devices;
static std::vector<std::string> difftest_htif_args;
static std::vector<std::pair<reg_t, mem_t*>> difftest_mem(
    1, std::make_pair(reg_t(DRAM_BASE), new mem_t(CONFIG_MSIZE)));
static std::vector<int> difftest_hartids;
static debug_module_config_t difftest_dm_config = {
  .progbufsize = 2,
  .max_bus_master_bits = 0,
  .require_authentication = false,
  .abstract_rti = 0,
  .support_hasel = true,
  .support_abstract_csr_access = true,
  .support_haltgroups = true,
  .support_impebreak = true
};

struct diff_context_t {
  word_t gpr[32];
  word_t pc;
  word_t mepc, mcause, mtvec, mstatus;
  word_t mie, mip, mscratch, mtval;
};

static sim_t* s = NULL;
static processor_t *p = NULL;
static state_t *state = NULL;

void sim_t::diff_init(int port) {
  p = get_core("0");
  state = p->get_state();
}

void sim_t::diff_step(uint64_t n) {
  step(n);
}

void sim_t::diff_get_regs(void* diff_context) {//get from spike
  struct diff_context_t* ctx = (struct diff_context_t*)diff_context;
  for (int i = 0; i < NXPR; i++) {
    ctx->gpr[i] = state->XPR[i];
  }
  ctx->mepc     = state->mepc;
  ctx->mcause   = state->mcause;
  ctx->mtvec    = state->mtvec;
  ctx->mstatus  = state->mstatus;
  ctx->mie      = state->mie;
  ctx->mip      = state->mip;
  ctx->mtval    = state->mtval;
  ctx->mscratch = state->mscratch;
  ctx->pc = state->pc;
}

void sim_t::diff_set_regs(void* diff_context) {
  struct diff_context_t* ctx = (struct diff_context_t*)diff_context;
  for (int i = 0; i < NXPR; i++) {
    state->XPR.write(i, (sword_t)ctx->gpr[i]);
  }
  state->mepc     = ctx->mepc;
  state->mcause   = ctx->mcause;
  state->mtvec    = ctx->mtvec;
  state->mstatus  = ctx->mstatus;
  state->mie      = ctx->mie;
  state->mip      = ctx->mip;
  state->mtval    = ctx->mtval;
  state->mscratch = ctx->mscratch;
  state->pc = ctx->pc;
}

void sim_t::diff_memcpy(reg_t dest, void* src, size_t n) {
  mmu_t* mmu = p->get_mmu();
  for (size_t i = 0; i < n; i++) {
    mmu->store_uint8(dest+i, *((uint8_t*)src+i));
  }
}
int skip = 0;
extern "C" {

void difftest_skip(uint64_t n){//skip step must be equal to exec step
  printf("skiped %lx steps at pc %lx\n",n, state->pc);
  state->pc += 4 * n;
  skip = 1;
}

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  printf("cpy %x %lx\n",addr,n);
  if (direction == DIFFTEST_TO_REF) {
    s->diff_memcpy(addr, buf, n);
  } else {
    assert(0);
  }
}

void difftest_regcpy(void* dut, bool direction) {
  if (direction == DIFFTEST_TO_REF) {
    s->diff_set_regs(dut);
  } else {
    s->diff_get_regs(dut);
  }
}

void difftest_exec(uint64_t n) {
  if(skip == 0)s->diff_step(n);
  else skip = 0;
}

void difftest_init(int port) {
  difftest_htif_args.push_back("");
  s = new sim_t(DEFAULT_ISA, DEFAULT_PRIV, DEFAULT_VARCH, 1, false, false,
      0, 0, NULL, reg_t(-1), difftest_mem, difftest_plugin_devices, difftest_htif_args,
      std::move(difftest_hartids), difftest_dm_config, nullptr, false, NULL, true);
  s->diff_init(port);
}

void difftest_raise_intr(uint64_t NO) {
  trap_t t(NO);
  p->take_trap_public(t, state->pc);
}

}
