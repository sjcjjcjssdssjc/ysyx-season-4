// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040127_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040127_TOP___024ROOT_H_
#define VERILATED_VYSYX_22040127_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_22040127_top__Syms;
VL_MODULE(Vysyx_22040127_top___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*2:0*/ ysyx_22040127_top__DOT__inst_type;
    CData/*0:0*/ ysyx_22040127_top__DOT__jalr;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(pc,31,0);
    IData/*31:0*/ ysyx_22040127_top__DOT__instruction;
    QData/*63:0*/ ysyx_22040127_top__DOT__pcdata;
    QData/*63:0*/ ysyx_22040127_top__DOT__alu_output;
    QData/*63:0*/ ysyx_22040127_top__DOT__imm;
    QData/*63:0*/ ysyx_22040127_top__DOT__src0;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22040127_top__DOT__regs__DOT__rf;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22040127_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vysyx_22040127_top___024root(const char* name);
    ~Vysyx_22040127_top___024root();
    VL_UNCOPYABLE(Vysyx_22040127_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040127_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
