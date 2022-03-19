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

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__regs__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__regs__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}
