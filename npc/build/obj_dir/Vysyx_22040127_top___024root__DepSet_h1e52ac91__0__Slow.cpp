// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040127_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_22040127_top___024root.h"

void Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &doubly_aligned_data);
void Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__mem__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_ATTR_COLD void Vysyx_22040127_top___024root___settle__TOP__0(Vysyx_22040127_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[0U] = 0ULL;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[0U] = 0x31dU;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[1U] = 0x11aU;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[2U] = 0x39eU;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[3U] = 0x19cU;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[4U] = 0x1dcU;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[5U] = 0x37bU;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[6U] = 0x338U;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[7U] = 0x18U;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[8U] = 0xd8U;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[9U] = 0x1b9U;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[0xaU] = 0xb9U;
    Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__pmem_read_TOP((QData)((IData)(vlSelf->pc)), vlSelf->__Vtask_ysyx_22040127_top__DOT__pmem_read__0__doubly_aligned_data);
    vlSelf->ysyx_22040127_top__DOT__pcdata = vlSelf->__Vtask_ysyx_22040127_top__DOT__pmem_read__0__doubly_aligned_data;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [0U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[1U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[1U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [1U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[2U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[2U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [2U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[3U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[3U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [3U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[4U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[4U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [4U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[5U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[5U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [5U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[6U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[6U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [6U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[7U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[7U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [7U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[8U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[8U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [8U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[9U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[9U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [9U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0xaU] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0xaU] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [0xaU] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [0U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[1U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[1U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [1U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[2U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[2U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [2U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[3U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[3U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [3U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[4U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[4U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [4U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[5U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[5U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [5U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[6U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[6U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [6U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[7U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[7U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [7U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[8U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[8U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [8U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[9U] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[9U] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [9U] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0xaU] 
        = (7U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0xaU] 
        = (0x7fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list
                    [0xaU] >> 3U));
    vlSelf->ysyx_22040127_top__DOT__instruction = (
                                                   (4U 
                                                    & vlSelf->pc)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_22040127_top__DOT__pcdata 
                                                               >> 0x20U))
                                                    : (IData)(vlSelf->ysyx_22040127_top__DOT__pcdata));
    vlSelf->ysyx_22040127_top__DOT__reg_data1 = vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf
        [(0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                   >> 0xfU))];
    vlSelf->ysyx_22040127_top__DOT__reg_data2 = vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf
        [(0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                   >> 0x14U))];
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
                       == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
           == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
              == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
              == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
              == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
              == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
              == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
              == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
              == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
              == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
              == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
                          == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction) 
              == vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_22040127_top__DOT__inst_type = ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit)
                                                  ? (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out)
                                                  : 0U);
    vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in 
        = ((0x20U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                     >> 0x19U)) | ((0x10U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                             >> 0x15U)) 
                                   | ((0xeU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                               >> 0xbU)) 
                                      | (1U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                               >> 3U)))));
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
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                         >> 0x1fU)))) 
                                                     << 0xdU) 
                                                    | (QData)((IData)(
                                                                      ((0x1000U 
                                                                        & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                           >> 0x13U)) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                              << 4U)) 
                                                                          | ((0x7e0U 
                                                                              & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                                >> 0x14U)) 
                                                                             | (0x1eU 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                                >> 7U))))))))
                                                    : 0ULL))
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
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                           >> 0x14U)) 
                                                                       | (0x1fU 
                                                                          & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                             >> 7U)))))))
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
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xfffffffffffffff8ULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | (IData)((IData)((((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                               << 2U) | (((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xffffffffffffffc7ULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((5U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((4U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 3U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xfffffffffffffe3fULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((8U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((7U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 6U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xfffffffffffff1ffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((0xbU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((0xaU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (9U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 9U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xffffffffffff8fffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((0xeU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((0xdU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (0xcU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 0xcU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xfffffffffffc7fffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((0x11U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((0x10U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (0xfU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 0xfU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xffffffffffe3ffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((0x14U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((0x13U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (0x12U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 0x12U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xffffffffff1fffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((0x17U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((0x16U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (0x15U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 0x15U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xfffffffff8ffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((0x1aU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((0x19U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (0x18U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 0x18U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xffffffffc7ffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((0x1dU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((0x1cU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (0x1bU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 0x1bU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xfffffffe3fffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((0x20U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((0x1fU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (0x1eU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 0x1eU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xfffffff1ffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((0x23U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((0x22U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (0x21U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 0x21U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xffffff8fffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((0x26U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((0x25U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (0x24U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 0x24U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xfffffc7fffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((0x29U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((0x28U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (0x27U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 0x27U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xffffe3ffffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((0x2cU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((0x2bU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (0x2aU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 0x2aU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xffff1fffffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((0x2fU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((0x2eU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (0x2dU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 0x2dU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xfff8ffffffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((0x32U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((0x31U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (0x30U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 0x30U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xffc7ffffffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((0x35U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((0x34U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (0x33U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 0x33U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xfe3fffffffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((0x38U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((0x37U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (0x36U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 0x36U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0xf1ffffffffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((0x3bU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((0x3aU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (0x39U == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 0x39U));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0x8fffffffffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((((0x3eU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                << 2U) | (((0x3dU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)) 
                                           << 1U) | 
                                          (0x3cU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))))) 
              << 0x3cU));
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
        = ((0x7fffffffffffffffULL & vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op) 
           | ((QData)((IData)((0x3fU == (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in)))) 
              << 0x3fU));
    vlSelf->ysyx_22040127_top__DOT__branch_result = 
        ((((~ (IData)((0U != (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                    >> 0xcU))))) & 
           (vlSelf->ysyx_22040127_top__DOT__reg_data1 
            == vlSelf->ysyx_22040127_top__DOT__reg_data2)) 
          | (((~ (IData)((0U != (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                       >> 0xdU))))) 
              & (vlSelf->ysyx_22040127_top__DOT__instruction 
                 >> 0xcU)) & (vlSelf->ysyx_22040127_top__DOT__reg_data1 
                              != vlSelf->ysyx_22040127_top__DOT__reg_data2)))
          ? (vlSelf->pc + (IData)(vlSelf->ysyx_22040127_top__DOT__imm))
          : ((IData)(4U) + vlSelf->pc));
    vlSelf->ysyx_22040127_top__DOT__alu_input1 = ((
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                                                   | (3U 
                                                      == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))
                                                   ? vlSelf->ysyx_22040127_top__DOT__imm
                                                   : vlSelf->ysyx_22040127_top__DOT__reg_data1);
    vlSelf->ysyx_22040127_top__DOT__alu_input2 = ((
                                                   (0U 
                                                    == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                                                   | (2U 
                                                      == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))
                                                   ? vlSelf->ysyx_22040127_top__DOT__imm
                                                   : vlSelf->ysyx_22040127_top__DOT__reg_data2);
    vlSelf->ysyx_22040127_top__DOT__alu_output = ((4U 
                                                   & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                    ? 0ULL
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                     ? 0ULL
                                                     : 
                                                    ((((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
                                                                                >> 1U)))))) 
                                                       & (((QData)((IData)(
                                                                           (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__alu_input1 
                                                                                >> 0x1fU)) 
                                                                                ^ (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__alu_input2 
                                                                                >> 0x1fU)))))))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((IData)(vlSelf->ysyx_22040127_top__DOT__alu_input1) 
                                                                             + (IData)(vlSelf->ysyx_22040127_top__DOT__alu_input2)))))) 
                                                      | ((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op))))) 
                                                         & (vlSelf->ysyx_22040127_top__DOT__alu_input1 
                                                            + vlSelf->ysyx_22040127_top__DOT__alu_input2))) 
                                                     | ((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op 
                                                                                >> 0x20U)))))) 
                                                        & (vlSelf->ysyx_22040127_top__DOT__alu_input1 
                                                           - vlSelf->ysyx_22040127_top__DOT__alu_input2)))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                     ? (QData)((IData)(
                                                                       ((IData)(4U) 
                                                                        + vlSelf->pc)))
                                                     : 
                                                    (vlSelf->ysyx_22040127_top__DOT__alu_input1 
                                                     + vlSelf->ysyx_22040127_top__DOT__alu_input2))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                                     ? 
                                                    ((0x20U 
                                                      & vlSelf->ysyx_22040127_top__DOT__instruction)
                                                      ? vlSelf->ysyx_22040127_top__DOT__alu_input1
                                                      : 
                                                     (vlSelf->ysyx_22040127_top__DOT__alu_input1 
                                                      + (QData)((IData)(vlSelf->pc))))
                                                     : 
                                                    (vlSelf->ysyx_22040127_top__DOT__alu_input1 
                                                     + vlSelf->ysyx_22040127_top__DOT__alu_input2))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask 
        = ((0xf8U & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask)) 
           | (((2U == (7U & (IData)(vlSelf->ysyx_22040127_top__DOT__alu_output))) 
               << 2U) | (((1U == (7U & (IData)(vlSelf->ysyx_22040127_top__DOT__alu_output))) 
                          << 1U) | (0U == (7U & (IData)(vlSelf->ysyx_22040127_top__DOT__alu_output))))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask 
        = ((0xc7U & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask)) 
           | (((5U == (7U & (IData)(vlSelf->ysyx_22040127_top__DOT__alu_output))) 
               << 5U) | (((4U == (7U & (IData)(vlSelf->ysyx_22040127_top__DOT__alu_output))) 
                          << 4U) | ((3U == (7U & (IData)(vlSelf->ysyx_22040127_top__DOT__alu_output))) 
                                    << 3U))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask 
        = ((0x3fU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask)) 
           | (((7U == (7U & (IData)(vlSelf->ysyx_22040127_top__DOT__alu_output))) 
               << 7U) | ((6U == (7U & (IData)(vlSelf->ysyx_22040127_top__DOT__alu_output))) 
                         << 6U)));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask 
        = ((0xfeU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask)) 
           | (1U & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                    | (3U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                    >> 0xcU))))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask 
        = ((0xfdU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask)) 
           | (2U & (((0xfffffffeU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask)) 
                     | (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                         & ((1U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                          >> 0xcU))) 
                            | (2U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                            >> 0xcU))))) 
                        << 1U)) | ((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                 >> 0xcU))) 
                                   << 1U))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask 
        = ((0xfbU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask)) 
           | (4U & (((0xfffffffcU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask)) 
                     | (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                         & (0x2000U == (0x3000U & vlSelf->ysyx_22040127_top__DOT__instruction))) 
                        << 2U)) | ((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                 >> 0xcU))) 
                                   << 2U))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask 
        = ((0xf7U & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask)) 
           | (8U & ((((0xfffffff8U & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask)) 
                      | ((IData)((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                   >> 2U) & (0x1000U 
                                             == (0x3000U 
                                                 & vlSelf->ysyx_22040127_top__DOT__instruction)))) 
                         << 3U)) | (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                     & (0x2000U == 
                                        (0x3000U & vlSelf->ysyx_22040127_top__DOT__instruction))) 
                                    << 3U)) | ((3U 
                                                == 
                                                (3U 
                                                 & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                    >> 0xcU))) 
                                               << 3U))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask 
        = ((0xefU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask)) 
           | (0x10U & (((0xfffffff0U & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask)) 
                        | ((IData)((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                     >> 2U) & (0x1000U 
                                               == (0x3000U 
                                                   & vlSelf->ysyx_22040127_top__DOT__instruction)))) 
                           << 4U)) | ((3U == (3U & 
                                              (vlSelf->ysyx_22040127_top__DOT__instruction 
                                               >> 0xcU))) 
                                      << 4U))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask 
        = ((0xdfU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask)) 
           | (0x20U & ((0xffffffe0U & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                       | (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                           << 1U) & 
                                          (((1U == 
                                             (3U & 
                                              (vlSelf->ysyx_22040127_top__DOT__instruction 
                                               >> 0xcU))) 
                                            | (2U == 
                                               (3U 
                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                   >> 0xcU)))) 
                                           << 5U)))) 
                       | ((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                        >> 0xcU))) 
                          << 5U))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask 
        = ((0xbfU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask)) 
           | (0x40U & (((0xffffffc0U & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask)) 
                        | ((IData)((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                     >> 4U) & (0x2000U 
                                               == (0x3000U 
                                                   & vlSelf->ysyx_22040127_top__DOT__instruction)))) 
                           << 6U)) | ((3U == (3U & 
                                              (vlSelf->ysyx_22040127_top__DOT__instruction 
                                               >> 0xcU))) 
                                      << 6U))));
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask 
        = ((0x7fU & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask)) 
           | (0x80U & ((((0xffffff80U & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask)) 
                         | ((IData)((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                      >> 6U) & (0x1000U 
                                                == 
                                                (0x3000U 
                                                 & vlSelf->ysyx_22040127_top__DOT__instruction)))) 
                            << 7U)) | ((IData)((((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                 >> 4U) 
                                                & (0x2000U 
                                                   == 
                                                   (0x3000U 
                                                    & vlSelf->ysyx_22040127_top__DOT__instruction)))) 
                                       << 7U)) | ((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                       >> 0xcU))) 
                                                  << 7U))));
    Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__pmem_read_TOP(vlSelf->ysyx_22040127_top__DOT__alu_output, vlSelf->__Vtask_ysyx_22040127_top__DOT__mem__DOT__pmem_read__4__doubly_aligned_data);
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
        = vlSelf->__Vtask_ysyx_22040127_top__DOT__mem__DOT__pmem_read__4__doubly_aligned_data;
    if ((0U != (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask))) {
        Vysyx_22040127_top___024root____Vdpiimwrap_ysyx_22040127_top__DOT__mem__DOT__pmem_write_TOP(vlSelf->ysyx_22040127_top__DOT__alu_output, vlSelf->ysyx_22040127_top__DOT__reg_data2, 
                                                                                ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask) 
                                                                                & (- (IData)(
                                                                                (2U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))))));
    }
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__rdata 
        = ((((((((((((((((- (QData)((IData)((3U == 
                                             (7U & 
                                              (vlSelf->ysyx_22040127_top__DOT__instruction 
                                               >> 0xcU)))))) 
                         & vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data) 
                        | (QData)((IData)(((- (IData)(
                                                      ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                       & (0x2000U 
                                                          == 
                                                          (0x7000U 
                                                           & vlSelf->ysyx_22040127_top__DOT__instruction))))) 
                                           & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data))))) 
                       | (QData)((IData)(((- (IData)((IData)(
                                                             (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                               >> 4U) 
                                                              & (0x2000U 
                                                                 == 
                                                                 (0x7000U 
                                                                  & vlSelf->ysyx_22040127_top__DOT__instruction)))))) 
                                          & (IData)(
                                                    (vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                     >> 0x20U)))))) 
                      | (QData)((IData)((0xffffU & 
                                         ((- (IData)(
                                                     ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                      & (0x1000U 
                                                         == 
                                                         (0x7000U 
                                                          & vlSelf->ysyx_22040127_top__DOT__instruction))))) 
                                          & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data)))))) 
                     | (QData)((IData)((0xffffU & (
                                                   (- (IData)((IData)(
                                                                      (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                                        >> 2U) 
                                                                       & (0x1000U 
                                                                          == 
                                                                          (0x7000U 
                                                                           & vlSelf->ysyx_22040127_top__DOT__instruction)))))) 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                              >> 0x10U))))))) 
                    | (QData)((IData)((0xffffU & ((- (IData)((IData)(
                                                                     (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                                       >> 4U) 
                                                                      & (0x1000U 
                                                                         == 
                                                                         (0x7000U 
                                                                          & vlSelf->ysyx_22040127_top__DOT__instruction)))))) 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                             >> 0x20U))))))) 
                   | (QData)((IData)((0xffffU & ((- (IData)((IData)(
                                                                    (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                                      >> 6U) 
                                                                     & (0x1000U 
                                                                        == 
                                                                        (0x7000U 
                                                                         & vlSelf->ysyx_22040127_top__DOT__instruction)))))) 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                            >> 0x30U))))))) 
                  | (QData)((IData)((0xffU & ((- (IData)(
                                                         ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                          & (0U 
                                                             == 
                                                             (0x7000U 
                                                              & vlSelf->ysyx_22040127_top__DOT__instruction))))) 
                                              & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data)))))) 
                 | (QData)((IData)((0xffU & ((- (IData)((IData)(
                                                                (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                                  >> 1U) 
                                                                 & (0U 
                                                                    == 
                                                                    (0x7000U 
                                                                     & vlSelf->ysyx_22040127_top__DOT__instruction)))))) 
                                             & (IData)(
                                                       (vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                        >> 8U))))))) 
                | (QData)((IData)((0xffU & ((- (IData)((IData)(
                                                               (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                                 >> 2U) 
                                                                & (0U 
                                                                   == 
                                                                   (0x7000U 
                                                                    & vlSelf->ysyx_22040127_top__DOT__instruction)))))) 
                                            & (IData)(
                                                      (vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                       >> 0x10U))))))) 
               | (QData)((IData)((0xffU & ((- (IData)((IData)(
                                                              (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                                >> 3U) 
                                                               & (0U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->ysyx_22040127_top__DOT__instruction)))))) 
                                           & (IData)(
                                                     (vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                      >> 0x18U))))))) 
              | (QData)((IData)((0xffU & ((- (IData)((IData)(
                                                             (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                               >> 4U) 
                                                              & (0U 
                                                                 == 
                                                                 (0x7000U 
                                                                  & vlSelf->ysyx_22040127_top__DOT__instruction)))))) 
                                          & (IData)(
                                                    (vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                     >> 0x20U))))))) 
             | (QData)((IData)((0xffU & ((- (IData)((IData)(
                                                            (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                              >> 5U) 
                                                             & (0U 
                                                                == 
                                                                (0x7000U 
                                                                 & vlSelf->ysyx_22040127_top__DOT__instruction)))))) 
                                         & (IData)(
                                                   (vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                    >> 0x28U))))))) 
            | (QData)((IData)((0xffU & ((- (IData)((IData)(
                                                           (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                             >> 6U) 
                                                            & (0U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->ysyx_22040127_top__DOT__instruction)))))) 
                                        & (IData)((vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                   >> 0x30U))))))) 
           | (QData)((IData)((0xffU & ((- (IData)((IData)(
                                                          (((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask) 
                                                            >> 7U) 
                                                           & (0U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->ysyx_22040127_top__DOT__instruction)))))) 
                                       & (IData)((vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data 
                                                  >> 0x38U)))))));
    vlSelf->ysyx_22040127_top__DOT__loaded_data = (
                                                   (0xffffffffffffff00ULL 
                                                    & vlSelf->ysyx_22040127_top__DOT__loaded_data) 
                                                   | (IData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__rdata)))));
    vlSelf->ysyx_22040127_top__DOT__loaded_data = (
                                                   (0xffffffffffff00ffULL 
                                                    & vlSelf->ysyx_22040127_top__DOT__loaded_data) 
                                                   | ((QData)((IData)(
                                                                      (0xffU 
                                                                       & ((((- (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                                >> 0xcU))))) 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rdata 
                                                                                >> 7U)))))) 
                                                                           | ((- (IData)(
                                                                                ((1U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                                >> 0xcU))) 
                                                                                | (5U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                                >> 0xcU)))))) 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rdata 
                                                                                >> 8U)))) 
                                                                          | ((- (IData)(
                                                                                ((2U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                                >> 0xcU))) 
                                                                                | (6U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                                >> 0xcU)))))) 
                                                                             & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rdata 
                                                                                >> 8U))))))) 
                                                      << 8U));
    vlSelf->ysyx_22040127_top__DOT__loaded_data = (
                                                   (0xffffffff0000ffffULL 
                                                    & vlSelf->ysyx_22040127_top__DOT__loaded_data) 
                                                   | ((QData)((IData)(
                                                                      (0xffffU 
                                                                       & ((((- (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                                >> 0xcU))))) 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rdata 
                                                                                >> 7U)))))) 
                                                                           | ((- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                                >> 0xcU))))) 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rdata 
                                                                                >> 0xfU))))))) 
                                                                          | ((- (IData)(
                                                                                ((2U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                                >> 0xcU))) 
                                                                                | (6U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                                >> 0xcU)))))) 
                                                                             & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rdata 
                                                                                >> 0x10U))))))) 
                                                      << 0x10U));
    vlSelf->ysyx_22040127_top__DOT__loaded_data = (
                                                   (0xffffffffULL 
                                                    & vlSelf->ysyx_22040127_top__DOT__loaded_data) 
                                                   | ((QData)((IData)(
                                                                      (((((- (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                                >> 0xcU))))) 
                                                                          & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rdata 
                                                                                >> 7U)))))) 
                                                                         | ((- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                                >> 0xcU))))) 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rdata 
                                                                                >> 0xfU))))))) 
                                                                        | ((- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                                >> 0xcU))))) 
                                                                           & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rdata 
                                                                                >> 0x1fU))))))) 
                                                                       | ((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                                                >> 0xcU))))) 
                                                                          & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__mem__DOT__rdata 
                                                                                >> 0x20U)))))) 
                                                      << 0x20U));
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
    vlSelf->ysyx_22040127_top__DOT__branch_result = 0;
    vlSelf->ysyx_22040127_top__DOT__inst_type = 0;
    vlSelf->ysyx_22040127_top__DOT__imm = 0;
    vlSelf->ysyx_22040127_top__DOT__alu_input1 = 0;
    vlSelf->ysyx_22040127_top__DOT__alu_input2 = 0;
    vlSelf->ysyx_22040127_top__DOT__reg_data1 = 0;
    vlSelf->ysyx_22040127_top__DOT__reg_data2 = 0;
    vlSelf->ysyx_22040127_top__DOT__jalr = 0;
    vlSelf->ysyx_22040127_top__DOT__loaded_data = 0;
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<11; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out = 0;
    vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op = 0;
    vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[__Vi0] = 0;
    }
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__rdata = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask = 0;
    vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask = 0;
    vlSelf->__Vtask_ysyx_22040127_top__DOT__pmem_read__0__doubly_aligned_data = 0;
    vlSelf->__Vtask_ysyx_22040127_top__DOT__mem__DOT__pmem_read__4__doubly_aligned_data = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
