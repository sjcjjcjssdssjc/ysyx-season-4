// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040127_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040127_top___024root.h"

void Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__set_simtime_TOP();

VL_INLINE_OPT void Vysyx_22040127_top___024root___sequent__TOP__0(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__ysyx_22040127_top__DOT__regs__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22040127_top__DOT__regs__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22040127_top__DOT__regs__DOT__rf__v0;
    // Body
    __Vdlyvset__ysyx_22040127_top__DOT__regs__DOT__rf__v0 = 0U;
    if ((((6U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
          & (vlSelf->instruction >> 0x14U)) & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0xffefff80U 
                                                           & vlSelf->instruction)))))) {
        Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__set_simtime_TOP();
    }
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : ((IData)(4U) + vlSelf->pc));
    if ((1U & (~ (IData)((0U != (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))))) {
        __Vdlyvval__ysyx_22040127_top__DOT__regs__DOT__rf__v0 
            = vlSelf->ysyx_22040127_top__DOT__r_wdata;
        __Vdlyvset__ysyx_22040127_top__DOT__regs__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_22040127_top__DOT__regs__DOT__rf__v0 
            = (0x1fU & (vlSelf->instruction >> 7U));
    }
    if (__Vdlyvset__ysyx_22040127_top__DOT__regs__DOT__rf__v0) {
        vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[__Vdlyvdim0__ysyx_22040127_top__DOT__regs__DOT__rf__v0] 
            = __Vdlyvval__ysyx_22040127_top__DOT__regs__DOT__rf__v0;
    }
}

VL_INLINE_OPT void Vysyx_22040127_top___024root___combo__TOP__0(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___combo__TOP__0\n"); );
    // Body
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

void Vysyx_22040127_top___024root___eval(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22040127_top___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vysyx_22040127_top___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vysyx_22040127_top___024root___eval_debug_assertions(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
