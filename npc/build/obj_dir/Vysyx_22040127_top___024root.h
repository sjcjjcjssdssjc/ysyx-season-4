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
    CData/*0:0*/ ysyx_22040127_top__DOT__memread;
    CData/*2:0*/ ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out;
    CData/*0:0*/ ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit;
    CData/*5:0*/ ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in;
    CData/*4:0*/ ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_itype__in;
    CData/*7:0*/ ysyx_22040127_top__DOT__mem__DOT__addr_lowmask;
    CData/*7:0*/ ysyx_22040127_top__DOT__mem__DOT__wmask;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(pc,31,0);
    IData/*31:0*/ ysyx_22040127_top__DOT__instruction;
    IData/*31:0*/ ysyx_22040127_top__DOT__branch_result;
    IData/*31:0*/ ysyx_22040127_top__DOT__exe__DOT__itype_alu_op;
    IData/*31:0*/ ysyx_22040127_top__DOT__exe__DOT__addw_result;
    IData/*31:0*/ ysyx_22040127_top__DOT__exe__DOT__subw_result;
    IData/*31:0*/ ysyx_22040127_top__DOT__exe__DOT__mulw_result;
    IData/*31:0*/ ysyx_22040127_top__DOT__exe__DOT__divw_result;
    IData/*31:0*/ ysyx_22040127_top__DOT__exe__DOT__divuw_result;
    IData/*31:0*/ ysyx_22040127_top__DOT__exe__DOT__remw_result;
    IData/*31:0*/ ysyx_22040127_top__DOT__exe__DOT__remuw_result;
    IData/*31:0*/ ysyx_22040127_top__DOT__exe__DOT__src1_sraw;
    IData/*31:0*/ ysyx_22040127_top__DOT__exe__DOT__src1_sllw;
    IData/*31:0*/ ysyx_22040127_top__DOT__exe__DOT__src1_srlw;
    QData/*63:0*/ ysyx_22040127_top__DOT__pcdata;
    QData/*63:0*/ ysyx_22040127_top__DOT__alu_output;
    QData/*63:0*/ ysyx_22040127_top__DOT__imm;
    QData/*63:0*/ ysyx_22040127_top__DOT__alu_input1;
    QData/*63:0*/ ysyx_22040127_top__DOT__alu_input2;
    QData/*63:0*/ ysyx_22040127_top__DOT__reg_data1;
    QData/*63:0*/ ysyx_22040127_top__DOT__reg_data2;
    QData/*63:0*/ ysyx_22040127_top__DOT__loaded_data;
    QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT__rtype_calc_result;
    QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT__itype_calc_result;
    QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op;
    QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT__sext_addw_result;
    QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT__sext_src1_sraw;
    QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT__sext_src1_sllw;
    QData/*63:0*/ ysyx_22040127_top__DOT__exe__DOT__sext_src1_srlw;
    QData/*63:0*/ ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data;
    QData/*63:0*/ ysyx_22040127_top__DOT__mem__DOT__rdata;
    QData/*63:0*/ __Vtask_ysyx_22040127_top__DOT__pmem_read__0__doubly_aligned_data;
    QData/*63:0*/ __Vtask_ysyx_22040127_top__DOT__mem__DOT__pmem_read__4__doubly_aligned_data;
    VlUnpacked<SData/*9:0*/, 12> ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*6:0*/, 12> ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*2:0*/, 12> ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list;
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
