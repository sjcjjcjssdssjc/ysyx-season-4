// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040127_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040127_top__Syms.h"
#include "Vysyx_22040127_top___024root.h"

extern "C" void set_simtime();

VL_INLINE_OPT void Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__set_simtime_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__set_simtime_TOP\n"); );
    // Body
    set_simtime();
}

extern "C" void set_pc(const svBitVecVal* pc);

VL_INLINE_OPT void Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__set_pc_TOP(IData/*31:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__set_pc_TOP\n"); );
    // Body
    svBitVecVal pc__Vcvt[1];
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) VL_SET_SVBV_I(32, pc__Vcvt + 1 * pc__Vidx, pc);
    set_pc(pc__Vcvt);
}

extern "C" void pmem_read(long long raddr, long long* doubly_aligned_data);

VL_INLINE_OPT void Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &doubly_aligned_data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long doubly_aligned_data__Vcvt;
    pmem_read(raddr__Vcvt, &doubly_aligned_data__Vcvt);
    doubly_aligned_data = doubly_aligned_data__Vcvt;
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__mem__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__mem__DOT__pmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__wb__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__wb__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}
