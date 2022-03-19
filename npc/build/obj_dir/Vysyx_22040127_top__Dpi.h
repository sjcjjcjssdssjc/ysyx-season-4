// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_22040127_TOP__DPI_H_
#define VERILATED_VYSYX_22040127_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/heisenberg/ysyx-workbench/npc/vsrc/reg.v:29:32
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/heisenberg/ysyx-workbench/npc/vsrc/top.v:32:32
    extern void set_pc(const svBitVecVal* pc);
    // DPI import at /home/heisenberg/ysyx-workbench/npc/vsrc/top.v:31:32
    extern void set_simtime();

#ifdef __cplusplus
}
#endif

#endif  // guard
