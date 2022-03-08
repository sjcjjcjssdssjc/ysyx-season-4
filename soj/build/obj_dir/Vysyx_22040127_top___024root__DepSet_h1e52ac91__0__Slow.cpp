// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040127_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040127_top___024root.h"

VL_ATTR_COLD void Vysyx_22040127_top___024root___settle__TOP__0(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[0U] = 0ULL;
    vlSelf->ysyx_22040127_top__DOT__inst_type = ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->instruction))
                                                  ? 1U
                                                  : 
                                                 ((0x1bU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->instruction))
                                                   ? 0U
                                                   : 
                                                  ((0x73U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->instruction))
                                                    ? 6U
                                                    : 0U)));
    vlSelf->ysyx_22040127_top__DOT__r_wdata = ((0U 
                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                ? (
                                                   vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->instruction 
                                                       >> 0xfU))] 
                                                   + 
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->instruction 
                                                                          >> 0x1fU)))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->instruction 
                                                                        >> 0x14U))))
                                                     : 
                                                    vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf
                                                    [
                                                    (0x1fU 
                                                     & (vlSelf->instruction 
                                                        >> 0x14U))]))
                                                : 0ULL);
}

VL_ATTR_COLD void Vysyx_22040127_top___024root___eval_initial(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vysyx_22040127_top___024root___eval_settle(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___eval_settle\n"); );
    // Body
    Vysyx_22040127_top___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vysyx_22040127_top___024root___final(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___final\n"); );
}

VL_ATTR_COLD void Vysyx_22040127_top___024root___ctor_var_reset(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->instruction = 0;
    vlSelf->pc = 0;
    vlSelf->ysyx_22040127_top__DOT__r_wdata = 0;
    vlSelf->ysyx_22040127_top__DOT__inst_type = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
