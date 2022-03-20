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
    vlSelf->ysyx_22040127_top__DOT__instruction = (
                                                   (4U 
                                                    & vlSelf->pc)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22040127_top__DOT__pcdata 
                                                               >> 0x20U))
                                                    : (IData)(vlSelf->ysyx_22040127_top__DOT__pcdata));
    vlSelf->ysyx_22040127_top__DOT__inst_type = ((0x40U 
                                                  & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                  ? 
                                                 ((0x20U 
                                                   & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                        ? 6U
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                     ? 
                                                    ((4U 
                                                      & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                        ? 3U
                                                        : 0U)
                                                       : 0U)
                                                      : 0U)
                                                     : 0U))
                                                   : 0U)
                                                  : 
                                                 ((0x20U 
                                                   & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                        ? 1U
                                                        : 0U)
                                                       : 0U)
                                                      : 0U))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                        ? 2U
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->ysyx_22040127_top__DOT__instruction)
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
                                                        & vlSelf->ysyx_22040127_top__DOT__instruction))));
    vlSelf->ysyx_22040127_top__DOT__imm = ((4U & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                            ? ((2U 
                                                & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                    ? 0ULL
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                       >> 0x14U)))))
                                                : 0ULL)
                                            : ((2U 
                                                & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                         >> 0x1fU)))) 
                                                     << 0x15U) 
                                                    | (QData)((IData)(
                                                                      ((0x100000U 
                                                                        & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                           >> 0xbU)) 
                                                                       | ((0xff000U 
                                                                           & vlSelf->ysyx_22040127_top__DOT__instruction) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                                >> 9U)) 
                                                                             | (0x7feU 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                                >> 0x14U))))))))
                                                    : 0ULL)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                                >> 0x1fU))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (0xfffff000U 
                                                                       & vlSelf->ysyx_22040127_top__DOT__instruction))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                       >> 0x14U)))))));
    vlSelf->ysyx_22040127_top__DOT__src0 = (((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                                             | (3U 
                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))
                                             ? vlSelf->ysyx_22040127_top__DOT__imm
                                             : vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->ysyx_22040127_top__DOT__instruction 
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
                                                     & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                        >> 0x14U))]))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                    ? 
                                                   ((0x20U 
                                                     & vlSelf->ysyx_22040127_top__DOT__instruction)
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

void Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__regs__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

VL_ATTR_COLD void Vysyx_22040127_top___024root___initial__TOP__0(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___initial__TOP__0\n"); );
    // Body
    Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__regs__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf);
}

VL_ATTR_COLD void Vysyx_22040127_top___024root___eval_initial(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vysyx_22040127_top___024root___initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vysyx_22040127_top___024root___eval_settle(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___eval_settle\n"); );
    // Body
    Vysyx_22040127_top___024root___settle__TOP__0(vlSelf);
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
    vlSelf->pc = 0;
    vlSelf->ysyx_22040127_top__DOT__pcdata = 0;
    vlSelf->ysyx_22040127_top__DOT__instruction = 0;
    vlSelf->ysyx_22040127_top__DOT__alu_output = 0;
    vlSelf->ysyx_22040127_top__DOT__inst_type = 0;
    vlSelf->ysyx_22040127_top__DOT__imm = 0;
    vlSelf->ysyx_22040127_top__DOT__src0 = 0;
    vlSelf->ysyx_22040127_top__DOT__jalr = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
