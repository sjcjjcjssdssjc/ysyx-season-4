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
    IData/*31:0*/ __Vdly__pc;
    CData/*4:0*/ __Vdlyvdim0__ysyx_22040127_top__DOT__regs__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__ysyx_22040127_top__DOT__regs__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22040127_top__DOT__regs__DOT__rf__v0;
    // Body
    __Vdly__pc = vlSelf->pc;
    __Vdlyvset__ysyx_22040127_top__DOT__regs__DOT__rf__v0 = 0U;
    if ((((6U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
          & (vlSelf->instruction >> 0x14U)) & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0xffefff80U 
                                                           & vlSelf->instruction)))))) {
        Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__set_simtime_TOP();
    }
    __Vdly__pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : ((((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                        & (vlSelf->instruction >> 5U)) 
                       | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))
                       ? (vlSelf->pc + (IData)(vlSelf->ysyx_22040127_top__DOT__src0))
                       : ((IData)(vlSelf->ysyx_22040127_top__DOT__jalr)
                           ? (0xfffffffeU & (IData)(vlSelf->ysyx_22040127_top__DOT__alu_output))
                           : ((IData)(4U) + vlSelf->pc))));
    if (((((~ (IData)((0U != (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))) 
           | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))) 
          | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))) 
         & (0U != (0x1fU & (vlSelf->instruction >> 7U))))) {
        __Vdlyvval__ysyx_22040127_top__DOT__regs__DOT__rf__v0 
            = ((IData)(vlSelf->ysyx_22040127_top__DOT__jalr)
                ? (QData)((IData)(((IData)(4U) + vlSelf->pc)))
                : vlSelf->ysyx_22040127_top__DOT__alu_output);
        __Vdlyvset__ysyx_22040127_top__DOT__regs__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_22040127_top__DOT__regs__DOT__rf__v0 
            = (0x1fU & (vlSelf->instruction >> 7U));
    }
    vlSelf->pc = __Vdly__pc;
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
    vlSelf->ysyx_22040127_top__DOT__inst_type = ((0x40U 
                                                  & vlSelf->instruction)
                                                  ? 
                                                 ((0x20U 
                                                   & vlSelf->instruction)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSelf->instruction)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->instruction)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->instruction)
                                                        ? 6U
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->instruction)
                                                     ? 
                                                    ((4U 
                                                      & vlSelf->instruction)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->instruction)
                                                        ? 3U
                                                        : 0U)
                                                       : 0U)
                                                      : 0U)
                                                     : 0U))
                                                   : 0U)
                                                  : 
                                                 ((0x20U 
                                                   & vlSelf->instruction)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSelf->instruction)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->instruction)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->instruction)
                                                        ? 1U
                                                        : 0U)
                                                       : 0U)
                                                      : 0U))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->instruction)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->instruction)
                                                        ? 2U
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSelf->instruction)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->instruction)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->instruction)
                                                        ? 1U
                                                        : 0U)
                                                       : 0U)
                                                      : 0U))
                                                    : 0U)));
    vlSelf->ysyx_22040127_top__DOT__jalr = (IData)(
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                                                    & (0x60U 
                                                       == 
                                                       (0x60U 
                                                        & vlSelf->instruction))));
    vlSelf->ysyx_22040127_top__DOT__imm = ((4U & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                            ? ((2U 
                                                & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                    ? 0ULL
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->instruction 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->instruction 
                                                                       >> 0x14U)))))
                                                : 0ULL)
                                            : ((2U 
                                                & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->instruction 
                                                                         >> 0x1fU)))) 
                                                     << 0x15U) 
                                                    | (QData)((IData)(
                                                                      ((0x100000U 
                                                                        & (vlSelf->instruction 
                                                                           >> 0xbU)) 
                                                                       | ((0xff000U 
                                                                           & vlSelf->instruction) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->instruction 
                                                                                >> 9U)) 
                                                                             | (0x7feU 
                                                                                & (vlSelf->instruction 
                                                                                >> 0x14U))))))))
                                                    : 0ULL)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->instruction 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (0xfffff000U 
                                                                       & vlSelf->instruction))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->instruction 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->instruction 
                                                                       >> 0x14U)))))));
    vlSelf->ysyx_22040127_top__DOT__src0 = (((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                                             | (3U 
                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))
                                             ? vlSelf->ysyx_22040127_top__DOT__imm
                                             : vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->instruction 
                                                 >> 0xfU))]);
    vlSelf->ysyx_22040127_top__DOT__alu_output = ((0U 
                                                   == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                   ? 
                                                  (vlSelf->ysyx_22040127_top__DOT__src0 
                                                   + 
                                                   ((0U 
                                                     == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                     ? vlSelf->ysyx_22040127_top__DOT__imm
                                                     : 
                                                    vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf
                                                    [
                                                    (0x1fU 
                                                     & (vlSelf->instruction 
                                                        >> 0x14U))]))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                    ? 
                                                   ((0x20U 
                                                     & vlSelf->instruction)
                                                     ? vlSelf->ysyx_22040127_top__DOT__src0
                                                     : 
                                                    (vlSelf->ysyx_22040127_top__DOT__src0 
                                                     + (QData)((IData)(vlSelf->pc))))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                     ? (QData)((IData)(
                                                                       ((IData)(4U) 
                                                                        + vlSelf->pc)))
                                                     : 0ULL)));
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
