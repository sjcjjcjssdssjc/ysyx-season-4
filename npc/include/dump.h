#include "verilated_dpi.h"
uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r);

// 一个输出RTL中通用寄存器的值的示例
void dump_gpr();

