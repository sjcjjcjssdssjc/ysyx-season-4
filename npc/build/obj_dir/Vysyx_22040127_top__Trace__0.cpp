// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040127_top__Syms.h"


void Vysyx_22040127_top___024root__trace_chg_sub_0(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_22040127_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_22040127_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040127_top___024root*>(voidSelf);
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_22040127_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_22040127_top___024root__trace_chg_sub_0(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_ha04bd5a7__0;
    VlWide<7>/*223:0*/ __Vtemp_h2b6c3015__0;
    VlWide<10>/*319:0*/ __Vtemp_h94b67449__0;
    VlWide<3>/*95:0*/ __Vtemp_h22fc65f5__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h938fe951__0;
    VlWide<4>/*127:0*/ __Vtemp_h133872f3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__1;
    VlWide<4>/*127:0*/ __Vtemp_h938fe951__1;
    VlWide<4>/*127:0*/ __Vtemp_hd58ee9b8__0;
    VlWide<4>/*127:0*/ __Vtemp_h91b922f6__0;
    VlWide<4>/*127:0*/ __Vtemp_hb260154b__0;
    VlWide<4>/*127:0*/ __Vtemp_h5f54cd54__0;
    VlWide<4>/*127:0*/ __Vtemp_h07b6cc8f__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgSData(oldp+0,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+1,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+2,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+3,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+4,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+5,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+6,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[6]),10);
        bufp->chgSData(oldp+7,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[7]),10);
        bufp->chgSData(oldp+8,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[8]),10);
        bufp->chgSData(oldp+9,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[9]),10);
        bufp->chgSData(oldp+10,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[10]),10);
        bufp->chgSData(oldp+11,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[11]),10);
        bufp->chgSData(oldp+12,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[12]),10);
        bufp->chgCData(oldp+13,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+17,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+18,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+19,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+20,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+21,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[8]),7);
        bufp->chgCData(oldp+22,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[9]),7);
        bufp->chgCData(oldp+23,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[10]),7);
        bufp->chgCData(oldp+24,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[11]),7);
        bufp->chgCData(oldp+25,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[12]),7);
        bufp->chgCData(oldp+26,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+27,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+28,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+29,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+30,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+31,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+32,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[6]),3);
        bufp->chgCData(oldp+33,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[7]),3);
        bufp->chgCData(oldp+34,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[8]),3);
        bufp->chgCData(oldp+35,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[9]),3);
        bufp->chgCData(oldp+36,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[10]),3);
        bufp->chgCData(oldp+37,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[11]),3);
        bufp->chgCData(oldp+38,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[12]),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+39,(vlSelf->ysyx_22040127_top__DOT__mhartid),64);
        bufp->chgBit(oldp+41,(vlSelf->ysyx_22040127_top__DOT__if_valid));
        bufp->chgIData(oldp+42,(vlSelf->ysyx_22040127_top__DOT__if_instruction),32);
        bufp->chgBit(oldp+43,((0x7bU == (0x7fU & vlSelf->ysyx_22040127_top__DOT__if_instruction))));
        bufp->chgBit(oldp+44,((IData)((0U != (0x3000U 
                                              & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U])))));
        bufp->chgBit(oldp+45,(vlSelf->ysyx_22040127_top__DOT__if_allowin));
        bufp->chgIData(oldp+46,(vlSelf->ysyx_22040127_top__DOT__id_branch_result),32);
        bufp->chgBit(oldp+47,(vlSelf->ysyx_22040127_top__DOT__id_branch_taken));
        bufp->chgCData(oldp+48,((0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                  >> 0x2fU)))),5);
        bufp->chgCData(oldp+49,((0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                  >> 0x34U)))),5);
        bufp->chgBit(oldp+50,(vlSelf->ysyx_22040127_top__DOT__id_flush));
        bufp->chgBit(oldp+51,(vlSelf->ysyx_22040127_top__DOT__id_allowin));
        bufp->chgQData(oldp+52,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
                                [(0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                   >> 0x2fU)))]),64);
        bufp->chgQData(oldp+54,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
                                [(0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                   >> 0x34U)))]),64);
        bufp->chgBit(oldp+56,(vlSelf->ysyx_22040127_top__DOT__id_to_ex_valid));
        bufp->chgBit(oldp+57,(vlSelf->ysyx_22040127_top__DOT__id_ecall));
        bufp->chgBit(oldp+58,(vlSelf->ysyx_22040127_top__DOT__id_mret));
        bufp->chgBit(oldp+59,(vlSelf->ysyx_22040127_top__DOT__load_branch));
        bufp->chgIData(oldp+60,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                  << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                            >> 0x1fU))),32);
        bufp->chgCData(oldp+61,((7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                       >> 8U))),3);
        bufp->chgCData(oldp+62,(vlSelf->ysyx_22040127_top__DOT__ex_wmask),8);
        bufp->chgBit(oldp+63,(vlSelf->ysyx_22040127_top__DOT__ex_flush));
        bufp->chgBit(oldp+64,(vlSelf->ysyx_22040127_top__DOT__ex_allowin));
        bufp->chgBit(oldp+65,(vlSelf->ysyx_22040127_top__DOT__ex_ready_go));
        bufp->chgBit(oldp+66,(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_valid));
        bufp->chgBit(oldp+67,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 5U))));
        bufp->chgBit(oldp+68,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 6U))));
        bufp->chgBit(oldp+69,(vlSelf->ysyx_22040127_top__DOT__ex_mmio));
        bufp->chgBit(oldp+70,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
                                     >> 0x15U))));
        bufp->chgBit(oldp+71,(vlSelf->ysyx_22040127_top__DOT__ecallmret_on));
        bufp->chgBit(oldp+72,((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                & (((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                    | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit)) 
                                   | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_ok))) 
                               | ((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                  & (((~ (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw)) 
                                      & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                         | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit))) 
                                     | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_ok))))));
        bufp->chgBit(oldp+73,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                     >> 0x12U))));
        bufp->chgBit(oldp+74,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_valid));
        bufp->chgBit(oldp+75,(vlSelf->ysyx_22040127_top__DOT__mem_flush));
        bufp->chgQData(oldp+76,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])))),64);
        bufp->chgBit(oldp+78,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                     >> 5U))));
        bufp->chgQData(oldp+79,(vlSelf->ysyx_22040127_top__DOT__mem_final_rdata),64);
        bufp->chgQData(oldp+81,(vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data),64);
        bufp->chgQData(oldp+83,(vlSelf->ysyx_22040127_top__DOT__mem_diff_addr),64);
        bufp->chgQData(oldp+85,(vlSelf->ysyx_22040127_top__DOT__mem_diff_data),64);
        bufp->chgIData(oldp+87,(((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                  << 0x15U) | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                               >> 0xbU))),32);
        bufp->chgQData(oldp+88,(vlSelf->ysyx_22040127_top__DOT__if_to_id_bus),64);
        __Vtemp_ha04bd5a7__0[0U] = (IData)((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_timer_int_reg)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                ((IData)(
                                                                         (0x10007300000000ULL 
                                                                          == 
                                                                          (0x10007f00000000ULL 
                                                                           & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg))) 
                                                                 & (~ (IData)(
                                                                              (0ULL 
                                                                               != 
                                                                               (0xffefff8000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg))))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (0xfffU 
                                                                    & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm)))) 
                                                   << 0x31U) 
                                                  | (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__id_mret)) 
                                                      << 0x30U) 
                                                     | (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__id_ecall)) 
                                                         << 0x2fU) 
                                                        | (((QData)((IData)(
                                                                            ((0x100000000000ULL 
                                                                              == 
                                                                              (0x700000000000ULL 
                                                                               & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                             & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                            << 0x2eU) 
                                                           | (((QData)((IData)(
                                                                               ((0x200000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                               << 0x2dU) 
                                                              | (((QData)((IData)(
                                                                                ((0x300000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                  << 0x2cU) 
                                                                 | (((QData)((IData)(
                                                                                ((0x500000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                     << 0x2bU) 
                                                                    | (((QData)((IData)(
                                                                                ((0x600000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                        << 0x2aU) 
                                                                       | (((QData)((IData)(
                                                                                ((0x700000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                           << 0x29U) 
                                                                          | (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                              << 9U) 
                                                                             | (QData)((IData)(
                                                                                ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x3eU)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x39U)) 
                                                                                << 7U)) 
                                                                                | ((0x78U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x23U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)))))))))))))))))))));
        __Vtemp_ha04bd5a7__0[1U] = (((IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                              >> 0x20U)) 
                                     << 0x1fU) | (IData)(
                                                         ((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_timer_int_reg)) 
                                                            << 0x3eU) 
                                                           | (((QData)((IData)(
                                                                               ((IData)(
                                                                                (0x10007300000000ULL 
                                                                                == 
                                                                                (0x10007f00000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg))) 
                                                                                & (~ (IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xffefff8000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg))))))) 
                                                               << 0x3dU) 
                                                              | (((QData)((IData)(
                                                                                (0xfffU 
                                                                                & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm)))) 
                                                                  << 0x31U) 
                                                                 | (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__id_mret)) 
                                                                     << 0x30U) 
                                                                    | (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__id_ecall)) 
                                                                        << 0x2fU) 
                                                                       | (((QData)((IData)(
                                                                                ((0x100000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                           << 0x2eU) 
                                                                          | (((QData)((IData)(
                                                                                ((0x200000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                              << 0x2dU) 
                                                                             | (((QData)((IData)(
                                                                                ((0x300000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                ((0x500000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                ((0x600000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                ((0x700000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                << 9U) 
                                                                                | (QData)((IData)(
                                                                                ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x3eU)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x39U)) 
                                                                                << 7U)) 
                                                                                | ((0x78U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x23U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)))))))))))))))))))) 
                                                          >> 0x20U)));
        __Vtemp_h2b6c3015__0[6U] = ((0x200000U & ((
                                                   ((((~ (IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                                                      | (1U 
                                                         == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                     | (3U 
                                                        == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                    | (4U 
                                                       == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                   | (6U 
                                                      == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                  << 0x15U)) 
                                    | (((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                        << 0x14U) | 
                                       (((IData)((0x300000000ULL 
                                                  == 
                                                  (0x7f00000000ULL 
                                                   & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg))) 
                                         << 0x13U) 
                                        | ((0x7c000U 
                                            & ((IData)(
                                                       (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                        >> 0x27U)) 
                                               << 0xeU)) 
                                           | ((0x3e00U 
                                               & ((IData)(
                                                          (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                           >> 0x2fU)) 
                                                  << 9U)) 
                                              | ((0x1f0U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                              >> 0x34U)) 
                                                     << 4U)) 
                                                 | (((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr))))))));
        __Vtemp_h94b67449__0[0U] = (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final);
        __Vtemp_h94b67449__0[1U] = (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final 
                                            >> 0x20U));
        __Vtemp_h94b67449__0[2U] = (IData)((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                             | (2U 
                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                             ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                             : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final));
        __Vtemp_h94b67449__0[3U] = (IData)(((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                              | (2U 
                                                 == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                              ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                              : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final) 
                                            >> 0x20U));
        __Vtemp_h94b67449__0[4U] = (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1);
        __Vtemp_h94b67449__0[5U] = (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1 
                                            >> 0x20U));
        __Vtemp_h94b67449__0[6U] = ((__Vtemp_ha04bd5a7__0[0U] 
                                     << 0x16U) | __Vtemp_h2b6c3015__0[6U]);
        __Vtemp_h94b67449__0[7U] = ((__Vtemp_ha04bd5a7__0[0U] 
                                     >> 0xaU) | (__Vtemp_ha04bd5a7__0[1U] 
                                                 << 0x16U));
        __Vtemp_h94b67449__0[8U] = ((__Vtemp_ha04bd5a7__0[1U] 
                                     >> 0xaU) | (0xffc00000U 
                                                 & ((IData)(
                                                            (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                             >> 0x20U)) 
                                                    << 0x15U)));
        __Vtemp_h94b67449__0[9U] = ((0x200000U & (((IData)(
                                                           ((0x100000000000ULL 
                                                             == 
                                                             (0x7f8000000000ULL 
                                                              & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x1ffffU 
                                                                           & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2fU)))))))) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                                  << 0x15U)) 
                                    | ((IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                >> 0x20U)) 
                                       >> 0xbU));
        bufp->chgWData(oldp+90,(__Vtemp_h94b67449__0),310);
        bufp->chgWData(oldp+100,(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus),296);
        bufp->chgWData(oldp+110,(vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus),356);
        bufp->chgQData(oldp+122,(vlSelf->ysyx_22040127_top__DOT__d_req_addr),64);
        bufp->chgCData(oldp+124,(vlSelf->ysyx_22040127_top__DOT__d_req_strb),8);
        bufp->chgWData(oldp+125,(vlSelf->ysyx_22040127_top__DOT__d_req_data),128);
        bufp->chgBit(oldp+129,(vlSelf->ysyx_22040127_top__DOT__d_req_wen));
        bufp->chgBit(oldp+130,(vlSelf->ysyx_22040127_top__DOT__d_req_valid));
        bufp->chgBit(oldp+131,(vlSelf->ysyx_22040127_top__DOT__d_res_valid));
        bufp->chgWData(oldp+132,(vlSelf->ysyx_22040127_top__DOT__d_mrdata),128);
        bufp->chgQData(oldp+136,(vlSelf->ysyx_22040127_top__DOT__i_req_addr),64);
        bufp->chgBit(oldp+138,(vlSelf->ysyx_22040127_top__DOT__i_req_valid));
        bufp->chgBit(oldp+139,((5U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state))));
        bufp->chgWData(oldp+140,(vlSelf->ysyx_22040127_top__DOT__i_mrdata),128);
        bufp->chgQData(oldp+144,(vlSelf->ysyx_22040127_top__DOT__wb_reg_wdata),64);
        bufp->chgQData(oldp+146,(vlSelf->ysyx_22040127_top__DOT__wb_csrwdata),64);
        bufp->chgQData(oldp+148,(vlSelf->ysyx_22040127_top__DOT__wb_csrrdata),64);
        bufp->chgBit(oldp+150,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+151,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 0xeU))));
        bufp->chgCData(oldp+152,((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])),5);
        bufp->chgBit(oldp+153,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                      >> 5U))));
        bufp->chgBit(oldp+154,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                      >> 1U))));
        bufp->chgBit(oldp+155,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+156,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                      >> 2U))));
        bufp->chgBit(oldp+157,(vlSelf->ysyx_22040127_top__DOT__ecall_stuck));
        bufp->chgBit(oldp+158,(vlSelf->ysyx_22040127_top__DOT__mret_stuck));
        bufp->chgCData(oldp+159,(vlSelf->ysyx_22040127_top__DOT__dcache_state),3);
        bufp->chgCData(oldp+160,(vlSelf->ysyx_22040127_top__DOT__icache_state),3);
        bufp->chgIData(oldp+161,(vlSelf->ysyx_22040127_top__DOT__next_pc),32);
        bufp->chgBit(oldp+162,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state)) 
                                & ((IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit) 
                                   | (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit)))));
        bufp->chgBit(oldp+163,(vlSelf->ysyx_22040127_top__DOT__icache_valid));
        bufp->chgBit(oldp+164,(vlSelf->ysyx_22040127_top__DOT__preif_valid));
        bufp->chgBit(oldp+165,(vlSelf->ysyx_22040127_top__DOT__preif_ready_go_reg));
        bufp->chgBit(oldp+166,(vlSelf->ysyx_22040127_top__DOT__preif_ready_go));
        bufp->chgBit(oldp+167,(vlSelf->ysyx_22040127_top__DOT__preif_allowin));
        bufp->chgQData(oldp+168,(vlSelf->ysyx_22040127_top__DOT__icache_data),64);
        bufp->chgBit(oldp+170,(vlSelf->ysyx_22040127_top__DOT__timer_blocked));
        bufp->chgBit(oldp+171,(vlSelf->ysyx_22040127_top__DOT__if_timer_blocked));
        bufp->chgBit(oldp+172,(vlSelf->ysyx_22040127_top__DOT__if_timer_int_tmp));
        bufp->chgIData(oldp+173,(vlSelf->ysyx_22040127_top__DOT__next_pc_reg),32);
        bufp->chgQData(oldp+174,(vlSelf->ysyx_22040127_top__DOT__rf[0]),64);
        bufp->chgQData(oldp+176,(vlSelf->ysyx_22040127_top__DOT__rf[1]),64);
        bufp->chgQData(oldp+178,(vlSelf->ysyx_22040127_top__DOT__rf[2]),64);
        bufp->chgQData(oldp+180,(vlSelf->ysyx_22040127_top__DOT__rf[3]),64);
        bufp->chgQData(oldp+182,(vlSelf->ysyx_22040127_top__DOT__rf[4]),64);
        bufp->chgQData(oldp+184,(vlSelf->ysyx_22040127_top__DOT__rf[5]),64);
        bufp->chgQData(oldp+186,(vlSelf->ysyx_22040127_top__DOT__rf[6]),64);
        bufp->chgQData(oldp+188,(vlSelf->ysyx_22040127_top__DOT__rf[7]),64);
        bufp->chgQData(oldp+190,(vlSelf->ysyx_22040127_top__DOT__rf[8]),64);
        bufp->chgQData(oldp+192,(vlSelf->ysyx_22040127_top__DOT__rf[9]),64);
        bufp->chgQData(oldp+194,(vlSelf->ysyx_22040127_top__DOT__rf[10]),64);
        bufp->chgQData(oldp+196,(vlSelf->ysyx_22040127_top__DOT__rf[11]),64);
        bufp->chgQData(oldp+198,(vlSelf->ysyx_22040127_top__DOT__rf[12]),64);
        bufp->chgQData(oldp+200,(vlSelf->ysyx_22040127_top__DOT__rf[13]),64);
        bufp->chgQData(oldp+202,(vlSelf->ysyx_22040127_top__DOT__rf[14]),64);
        bufp->chgQData(oldp+204,(vlSelf->ysyx_22040127_top__DOT__rf[15]),64);
        bufp->chgQData(oldp+206,(vlSelf->ysyx_22040127_top__DOT__rf[16]),64);
        bufp->chgQData(oldp+208,(vlSelf->ysyx_22040127_top__DOT__rf[17]),64);
        bufp->chgQData(oldp+210,(vlSelf->ysyx_22040127_top__DOT__rf[18]),64);
        bufp->chgQData(oldp+212,(vlSelf->ysyx_22040127_top__DOT__rf[19]),64);
        bufp->chgQData(oldp+214,(vlSelf->ysyx_22040127_top__DOT__rf[20]),64);
        bufp->chgQData(oldp+216,(vlSelf->ysyx_22040127_top__DOT__rf[21]),64);
        bufp->chgQData(oldp+218,(vlSelf->ysyx_22040127_top__DOT__rf[22]),64);
        bufp->chgQData(oldp+220,(vlSelf->ysyx_22040127_top__DOT__rf[23]),64);
        bufp->chgQData(oldp+222,(vlSelf->ysyx_22040127_top__DOT__rf[24]),64);
        bufp->chgQData(oldp+224,(vlSelf->ysyx_22040127_top__DOT__rf[25]),64);
        bufp->chgQData(oldp+226,(vlSelf->ysyx_22040127_top__DOT__rf[26]),64);
        bufp->chgQData(oldp+228,(vlSelf->ysyx_22040127_top__DOT__rf[27]),64);
        bufp->chgQData(oldp+230,(vlSelf->ysyx_22040127_top__DOT__rf[28]),64);
        bufp->chgQData(oldp+232,(vlSelf->ysyx_22040127_top__DOT__rf[29]),64);
        bufp->chgQData(oldp+234,(vlSelf->ysyx_22040127_top__DOT__rf[30]),64);
        bufp->chgQData(oldp+236,(vlSelf->ysyx_22040127_top__DOT__rf[31]),64);
        bufp->chgIData(oldp+238,(vlSelf->ysyx_22040127_top__DOT__if_instruction_reg),32);
        bufp->chgBit(oldp+239,(vlSelf->ysyx_22040127_top__DOT__if_instruction_blocked));
        bufp->chgBit(oldp+240,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_valid));
        bufp->chgBit(oldp+241,(((IData)(vlSelf->ysyx_22040127_top__DOT__i_req_valid) 
                                | (IData)(vlSelf->ysyx_22040127_top__DOT__d_req_valid))));
        bufp->chgBit(oldp+242,(((IData)(vlSelf->ysyx_22040127_top__DOT__d_req_valid) 
                                & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__d_req_wen)))));
        bufp->chgBit(oldp+243,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__mmio_rdone));
        bufp->chgBit(oldp+244,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__mmio_wdone));
        bufp->chgBit(oldp+245,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__is_mmio));
        bufp->chgQData(oldp+246,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state))
                                   ? (0xfffffffffffffff0ULL 
                                      & vlSelf->ysyx_22040127_top__DOT__i_req_addr)
                                   : ((3U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state))
                                       ? ((IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__is_mmio)
                                           ? vlSelf->ysyx_22040127_top__DOT__d_req_addr
                                           : (0xfffffffffffffff0ULL 
                                              & vlSelf->ysyx_22040127_top__DOT__d_req_addr))
                                       : 0ULL))),64);
        bufp->chgCData(oldp+248,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state),3);
        bufp->chgCData(oldp+249,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state),3);
        bufp->chgBit(oldp+250,((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state))));
        bufp->chgBit(oldp+251,(((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state)) 
                                | (5U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state)))));
        bufp->chgBit(oldp+252,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)) 
                                | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)))));
        bufp->chgBit(oldp+253,(((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)) 
                                | (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)))));
        bufp->chgQData(oldp+254,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])))),64);
        bufp->chgQData(oldp+256,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U])))),64);
        bufp->chgBit(oldp+258,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                      >> 6U))));
        bufp->chgBit(oldp+259,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                      >> 5U))));
        bufp->chgBit(oldp+260,(vlSelf->ysyx_22040127_top__DOT____Vcellinp__dcache__input_valid));
        bufp->chgCData(oldp+261,((3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                        >> 8U))),2);
        bufp->chgCData(oldp+262,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_size_reg),2);
        bufp->chgCData(oldp+263,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_offset_reg),4);
        bufp->chgBit(oldp+264,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit_reg));
        bufp->chgBit(oldp+265,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit_reg));
        bufp->chgBit(oldp+266,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mmio_ok));
        bufp->chgIData(oldp+267,((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                  >> 0xbU)),21);
        bufp->chgCData(oldp+268,((0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                           >> 4U))),7);
        bufp->chgCData(oldp+269,((0xfU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])),4);
        bufp->chgCData(oldp+270,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_index_reg),7);
        bufp->chgCData(oldp+271,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_offset_reg),4);
        bufp->chgWData(oldp+272,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_strb),128);
        bufp->chgBit(oldp+276,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way0));
        bufp->chgBit(oldp+277,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way1));
        bufp->chgWData(oldp+278,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wdata),128);
        bufp->chgBit(oldp+282,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_miss));
        bufp->chgCData(oldp+283,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_cnt),7);
        bufp->chgBit(oldp+284,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_ok));
        bufp->chgBit(oldp+285,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way0_reg));
        bufp->chgBit(oldp+286,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way1_reg));
        bufp->chgQData(oldp+287,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_strb),64);
        bufp->chgWData(oldp+289,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0),128);
        bufp->chgWData(oldp+293,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1),128);
        bufp->chgBit(oldp+297,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit));
        bufp->chgBit(oldp+298,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit));
        bufp->chgBit(oldp+299,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0dirty));
        bufp->chgBit(oldp+300,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1dirty));
        bufp->chgBit(oldp+301,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0valid));
        bufp->chgBit(oldp+302,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1valid));
        bufp->chgQData(oldp+303,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_offset_reg))
                                   ? (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[2U])))
                                   : (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[0U]))))),64);
        bufp->chgQData(oldp+305,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_offset_reg))
                                   ? (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[2U])))
                                   : (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[0U]))))),64);
        bufp->chgQData(oldp+307,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_wdata),64);
        bufp->chgBit(oldp+309,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way0));
        bufp->chgBit(oldp+310,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way1));
        bufp->chgBit(oldp+311,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw));
        bufp->chgBit(oldp+312,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mmio_mem));
        bufp->chgQData(oldp+313,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mmio_rdata_reg),64);
        bufp->chgBit(oldp+315,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0fencev));
        bufp->chgBit(oldp+316,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0fenced));
        bufp->chgBit(oldp+317,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1fencev));
        bufp->chgBit(oldp+318,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1fenced));
        bufp->chgBit(oldp+319,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cnt));
        bufp->chgBit(oldp+320,((1U & (((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                        >> 5U) | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_miss)) 
                                      | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
                                          >> 0x15U) 
                                         & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_ok)))))));
        bufp->chgCData(oldp+321,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT____Vcellinp__dcache_way1__A),7);
        bufp->chgCData(oldp+322,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT____Vcellinp__dcache_way2__A),7);
        bufp->chgIData(oldp+323,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+324,((0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])),5);
        bufp->chgCData(oldp+325,((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U])),5);
        bufp->chgBit(oldp+326,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                      >> 7U))));
        bufp->chgBit(oldp+327,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U] 
                                      >> 5U))));
        bufp->chgBit(oldp+328,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+329,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[5U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+330,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+331,((1U & (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                             >> 0x2cU)))))))));
        bufp->chgBit(oldp+332,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                              >> 0x2dU)))))) 
                                      & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                 >> 0x2cU))))));
        bufp->chgBit(oldp+333,((4U == (7U & (IData)(
                                                    (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                     >> 0x2cU))))));
        bufp->chgBit(oldp+334,((6U == (7U & (IData)(
                                                    (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                     >> 0x2cU))))));
        bufp->chgBit(oldp+335,((5U == (7U & (IData)(
                                                    (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                     >> 0x2cU))))));
        bufp->chgBit(oldp+336,((7U == (7U & (IData)(
                                                    (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                     >> 0x2cU))))));
        bufp->chgBit(oldp+337,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken));
        bufp->chgBit(oldp+338,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
        bufp->chgBit(oldp+339,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
        bufp->chgCData(oldp+340,(((0x20U & ((IData)(
                                                    (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                     >> 0x3eU)) 
                                            << 5U)) 
                                  | ((0x10U & ((IData)(
                                                       (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                        >> 0x39U)) 
                                               << 4U)) 
                                     | (0xfU & (IData)(
                                                       (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                        >> 0x23U)))))),6);
        bufp->chgCData(oldp+341,((7U & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                >> 0x2cU)))),3);
        bufp->chgCData(oldp+342,((0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                   >> 0x27U)))),5);
        bufp->chgBit(oldp+343,((1U & (((((~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                                         | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                        | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                       | (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                      | (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
        bufp->chgBit(oldp+344,((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))));
        bufp->chgBit(oldp+345,((IData)((0x300000000ULL 
                                        == (0x7f00000000ULL 
                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)))));
        bufp->chgCData(oldp+346,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type),3);
        bufp->chgQData(oldp+347,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm),64);
        bufp->chgBit(oldp+349,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr));
        bufp->chgQData(oldp+350,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1),64);
        bufp->chgQData(oldp+352,((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                   | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                   ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                   : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final)),64);
        bufp->chgQData(oldp+354,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final),64);
        bufp->chgQData(oldp+356,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final),64);
        bufp->chgBit(oldp+358,(((IData)((0x10007300000000ULL 
                                         == (0x10007f00000000ULL 
                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg))) 
                                & (~ (IData)((0ULL 
                                              != (0xffefff8000000000ULL 
                                                  & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)))))));
        bufp->chgBit(oldp+359,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard1));
        bufp->chgBit(oldp+360,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard2));
        bufp->chgBit(oldp+361,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard1));
        bufp->chgBit(oldp+362,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard2));
        bufp->chgBit(oldp+363,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard1));
        bufp->chgBit(oldp+364,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard2));
        bufp->chgBit(oldp+365,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1_tmp));
        bufp->chgBit(oldp+366,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2_tmp));
        bufp->chgBit(oldp+367,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1));
        bufp->chgBit(oldp+368,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2));
        bufp->chgBit(oldp+369,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard1_tmp));
        bufp->chgBit(oldp+370,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard2_tmp));
        bufp->chgBit(oldp+371,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_ready_go));
        bufp->chgBit(oldp+372,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_valid));
        bufp->chgQData(oldp+373,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg),64);
        bufp->chgIData(oldp+375,((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)),32);
        bufp->chgIData(oldp+376,((IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                          >> 0x20U))),32);
        bufp->chgBit(oldp+377,((IData)(((0x100000000000ULL 
                                         == (0x700000000000ULL 
                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                        & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
        bufp->chgBit(oldp+378,((IData)(((0x200000000000ULL 
                                         == (0x700000000000ULL 
                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                        & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
        bufp->chgBit(oldp+379,((IData)(((0x300000000000ULL 
                                         == (0x700000000000ULL 
                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                        & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
        bufp->chgBit(oldp+380,((IData)(((0x500000000000ULL 
                                         == (0x700000000000ULL 
                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                        & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
        bufp->chgBit(oldp+381,((IData)(((0x600000000000ULL 
                                         == (0x700000000000ULL 
                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                        & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
        bufp->chgBit(oldp+382,((IData)(((0x700000000000ULL 
                                         == (0x700000000000ULL 
                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                        & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
        bufp->chgBit(oldp+383,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_timer_int_reg));
        bufp->chgBit(oldp+384,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr_stuck));
        bufp->chgBit(oldp+385,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr_stuck_reg));
        bufp->chgIData(oldp+386,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__stuck_jalr_result),32);
        bufp->chgBit(oldp+387,(((IData)(((0x100000000000ULL 
                                          == (0x7f8000000000ULL 
                                              & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x1ffffU 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                   >> 0x2fU)))))))) 
                                & (0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
        bufp->chgCData(oldp+388,((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                   >> 0x20U)))),7);
        bufp->chgCData(oldp+389,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+390,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+391,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_calc_result),64);
        bufp->chgQData(oldp+393,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_calc_result),64);
        bufp->chgQData(oldp+395,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op),64);
        bufp->chgIData(oldp+397,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op),32);
        bufp->chgIData(oldp+398,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__addw_result),32);
        bufp->chgIData(oldp+399,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result),32);
        bufp->chgIData(oldp+400,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U]),32);
        bufp->chgIData(oldp+401,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U]),32);
        bufp->chgIData(oldp+402,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                   << 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                                >> 1U))),32);
        bufp->chgQData(oldp+403,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_addw_result),64);
        bufp->chgQData(oldp+405,((((QData)((IData)(
                                                   (- (IData)(
                                                              (vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result 
                                                               >> 0x1fU))))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result)))),64);
        bufp->chgQData(oldp+407,((((QData)((IData)(
                                                   (- (IData)(
                                                              (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U] 
                                                               >> 0x1fU))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U])))),64);
        bufp->chgQData(oldp+409,((((QData)((IData)(
                                                   (- (IData)(
                                                              (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U] 
                                                               >> 0x1fU))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U])))),64);
        bufp->chgQData(oldp+411,((((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U]))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                                                 << 0x1fU) 
                                                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                                                   >> 1U)))))),64);
        bufp->chgIData(oldp+413,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_sllw),32);
        bufp->chgIData(oldp+414,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_srlw),32);
        bufp->chgCData(oldp+415,((0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])),6);
        bufp->chgQData(oldp+416,((~ (0xffffffffffffffffULL 
                                     >> (0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))),64);
        bufp->chgQData(oldp+418,((0xffffffff00000000ULL 
                                  | (QData)((IData)(
                                                    (~ 
                                                     (0xffffffffU 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))))))),64);
        bufp->chgQData(oldp+420,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sraw),64);
        bufp->chgQData(oldp+422,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sllw),64);
        bufp->chgQData(oldp+424,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_srlw),64);
        bufp->chgQData(oldp+426,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[0U])))),64);
        bufp->chgCData(oldp+428,((0x3fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                           >> 0x19U))),6);
        bufp->chgCData(oldp+429,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                        >> 0x16U))),3);
        bufp->chgBit(oldp+430,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+431,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                      >> 0x13U))));
        bufp->chgCData(oldp+432,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                           >> 0xeU))),5);
        bufp->chgCData(oldp+433,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                        >> 1U))),3);
        bufp->chgBit(oldp+434,((1U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])));
        bufp->chgQData(oldp+435,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])))),64);
        bufp->chgQData(oldp+437,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))),64);
        bufp->chgCData(oldp+439,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                           >> 9U))),5);
        bufp->chgCData(oldp+440,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                           >> 4U))),5);
        bufp->chgBit(oldp+441,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                      >> 0x15U))));
        bufp->chgIData(oldp+442,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
                                   << 0xbU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                               >> 0x15U))),32);
        bufp->chgBit(oldp+443,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_type));
        bufp->chgBit(oldp+444,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_type));
        bufp->chgBit(oldp+445,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_sign));
        bufp->chgBit(oldp+446,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_ok));
        bufp->chgBit(oldp+447,((1U & (~ (IData)((0xc00000U 
                                                 == 
                                                 (0xc00000U 
                                                  & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])))))));
        bufp->chgBit(oldp+448,((1U & (~ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                         >> 0x17U)))));
        bufp->chgQData(oldp+449,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[3U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[2U])))),64);
        bufp->chgQData(oldp+451,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U])))),64);
        bufp->chgBit(oldp+453,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__ex_valid));
        bufp->chgWData(oldp+454,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg),310);
        bufp->chgQData(oldp+464,(((8U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                   ? ((4U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                       ? 0ULL : ((2U 
                                                  & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                  ? 0ULL
                                                  : vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_calc_result))
                                   : ((4U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                       ? ((2U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                           ? (QData)((IData)(
                                                             ((IData)(4U) 
                                                              + 
                                                              ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                << 1U) 
                                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                  >> 0x1fU)))))
                                           : ((((QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                              + (((QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))))
                                       : ((2U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                           ? ((0x8000000U 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                               ? (((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])))
                                               : ((
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                                  + (QData)((IData)(
                                                                    ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                      << 1U) 
                                                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                        >> 0x1fU))))))
                                           : ((1U & 
                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                               ? (QData)((IData)(
                                                                 ((IData)(4U) 
                                                                  + 
                                                                  ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                    << 1U) 
                                                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                      >> 0x1fU)))))
                                               : vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_calc_result))))),64);
        bufp->chgBit(oldp+466,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_ready));
        bufp->chgCData(oldp+467,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_state),2);
        bufp->chgQData(oldp+468,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U])))),64);
        bufp->chgQData(oldp+470,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[4U])) 
                                   << 0x3fU) | (((QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U])) 
                                                 << 0x1fU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U])) 
                                                   >> 1U)))),64);
        bufp->chgBit(oldp+472,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                      >> 4U))));
        bufp->chgBit(oldp+473,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                      >> 3U))));
        bufp->chgBit(oldp+474,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                      >> 2U))));
        bufp->chgBit(oldp+475,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                      >> 1U))));
        bufp->chgBit(oldp+476,((1U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])));
        bufp->chgBit(oldp+477,((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+478,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                 >> 0x1fU) | (0U != 
                                              (0x1fU 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])))));
        bufp->chgSData(oldp+479,((0xfffU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                            >> 7U))),12);
        bufp->chgBit(oldp+480,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+481,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+482,((IData)((0U != (0x100060U 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])))));
        bufp->chgBit(oldp+483,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__cache_readygo));
        bufp->chgBit(oldp+484,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_stuck));
        bufp->chgBit(oldp+485,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_stuck));
        bufp->chgQData(oldp+486,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sra),64);
        bufp->chgQData(oldp+488,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_srl),64);
        bufp->chgQData(oldp+490,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sll),64);
        bufp->chgCData(oldp+492,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                           >> 0x16U))),5);
        bufp->chgCData(oldp+493,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in),6);
        bufp->chgQData(oldp+494,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber3),64);
        bufp->chgQData(oldp+496,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber4),64);
        bufp->chgCData(oldp+498,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__cnt),7);
        bufp->chgWData(oldp+499,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend),129);
        bufp->chgQData(oldp+504,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__divisor),64);
        bufp->chgWData(oldp+506,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__subres),65);
        bufp->chgWData(oldp+509,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext),65);
        __Vtemp_h22fc65f5__0[0U] = ((IData)((((QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))) 
                                    << 1U);
        __Vtemp_h22fc65f5__0[1U] = (((IData)((((QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))) 
                                     >> 0x1fU) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))) 
                                                           >> 0x20U)) 
                                                  << 1U));
        __Vtemp_h22fc65f5__0[2U] = ((((0x800000U & 
                                       vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                       ? 0U : (3U & 
                                               (- (IData)(
                                                          (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U] 
                                                           >> 0x1fU))))) 
                                     << 1U) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))) 
                                                        >> 0x20U)) 
                                               >> 0x1fU));
        bufp->chgWData(oldp+512,(__Vtemp_h22fc65f5__0),67);
        bufp->chgWData(oldp+515,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res),128);
        bufp->chgCData(oldp+519,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__cnt),5);
        bufp->chgWData(oldp+520,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier),128);
        bufp->chgWData(oldp+524,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied),67);
        bufp->chgCData(oldp+527,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__mul_state),2);
        __Vtemp_hc961d23f__0[0U] = 1U;
        __Vtemp_hc961d23f__0[1U] = 0U;
        __Vtemp_hc961d23f__0[2U] = 0U;
        __Vtemp_hc961d23f__0[3U] = 0U;
        __Vtemp_h938fe951__0[0U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U]);
        __Vtemp_h938fe951__0[1U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U]);
        __Vtemp_h938fe951__0[2U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U]);
        __Vtemp_h938fe951__0[3U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[3U]);
        VL_ADD_W(4, __Vtemp_h133872f3__0, __Vtemp_hc961d23f__0, __Vtemp_h938fe951__0);
        bufp->chgWData(oldp+528,(__Vtemp_h133872f3__0),128);
        __Vtemp_hc961d23f__1[0U] = 1U;
        __Vtemp_hc961d23f__1[1U] = 0U;
        __Vtemp_hc961d23f__1[2U] = 0U;
        __Vtemp_hc961d23f__1[3U] = 0U;
        __Vtemp_h938fe951__1[0U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U]);
        __Vtemp_h938fe951__1[1U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U]);
        __Vtemp_h938fe951__1[2U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U]);
        __Vtemp_h938fe951__1[3U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[3U]);
        VL_ADD_W(4, __Vtemp_hd58ee9b8__0, __Vtemp_hc961d23f__1, __Vtemp_h938fe951__1);
        __Vtemp_h91b922f6__0[0U] = 1U;
        __Vtemp_h91b922f6__0[1U] = 0U;
        __Vtemp_h91b922f6__0[2U] = 0U;
        __Vtemp_h91b922f6__0[3U] = 0U;
        __Vtemp_hb260154b__0[0U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U]);
        __Vtemp_hb260154b__0[1U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U]);
        __Vtemp_hb260154b__0[2U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U]);
        __Vtemp_hb260154b__0[3U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[3U]);
        VL_ADD_W(4, __Vtemp_h5f54cd54__0, __Vtemp_h91b922f6__0, __Vtemp_hb260154b__0);
        __Vtemp_h07b6cc8f__0[0U] = (((((- (IData)((
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                                   | (2U 
                                                      == 
                                                      (7U 
                                                       & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                       & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U]) 
                                      | ((- (IData)(
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                                     | (6U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                         & __Vtemp_hd58ee9b8__0[0U])) 
                                     | ((- (IData)(
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                        & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U] 
                                           << 1U))) 
                                    | ((- (IData)((4U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                       & (__Vtemp_h5f54cd54__0[0U] 
                                          << 1U)));
        __Vtemp_h07b6cc8f__0[1U] = (((((- (IData)((
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                                   | (2U 
                                                      == 
                                                      (7U 
                                                       & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                       & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U]) 
                                      | ((- (IData)(
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                                     | (6U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                         & __Vtemp_hd58ee9b8__0[1U])) 
                                     | ((- (IData)(
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                        & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U] 
                                            >> 0x1fU) 
                                           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U] 
                                              << 1U)))) 
                                    | ((- (IData)((4U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                       & ((__Vtemp_h5f54cd54__0[0U] 
                                           >> 0x1fU) 
                                          | (__Vtemp_h5f54cd54__0[1U] 
                                             << 1U))));
        __Vtemp_h07b6cc8f__0[2U] = (((((- (IData)((
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                                   | (2U 
                                                      == 
                                                      (7U 
                                                       & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                       & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U]) 
                                      | ((- (IData)(
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                                     | (6U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                         & __Vtemp_hd58ee9b8__0[2U])) 
                                     | ((- (IData)(
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                        & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U] 
                                            >> 0x1fU) 
                                           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U] 
                                              << 1U)))) 
                                    | ((- (IData)((4U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                       & ((__Vtemp_h5f54cd54__0[1U] 
                                           >> 0x1fU) 
                                          | (__Vtemp_h5f54cd54__0[2U] 
                                             << 1U))));
        __Vtemp_h07b6cc8f__0[3U] = (((((- (IData)((
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                                   | (2U 
                                                      == 
                                                      (7U 
                                                       & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                       & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[3U]) 
                                      | ((- (IData)(
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                                     | (6U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                         & __Vtemp_hd58ee9b8__0[3U])) 
                                     | ((- (IData)(
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                        & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U] 
                                            >> 0x1fU) 
                                           | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[3U] 
                                              << 1U)))) 
                                    | ((- (IData)((4U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                       & ((__Vtemp_h5f54cd54__0[2U] 
                                           >> 0x1fU) 
                                          | (__Vtemp_h5f54cd54__0[3U] 
                                             << 1U))));
        bufp->chgWData(oldp+532,(__Vtemp_h07b6cc8f__0),128);
        bufp->chgQData(oldp+536,((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc))),64);
        bufp->chgCData(oldp+538,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__input_offset_reg),4);
        bufp->chgBit(oldp+539,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit_reg));
        bufp->chgBit(oldp+540,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit_reg));
        bufp->chgIData(oldp+541,((0x1fffffU & (IData)(
                                                      ((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc)) 
                                                       >> 0xbU)))),21);
        bufp->chgCData(oldp+542,((0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc)) 
                                                   >> 4U)))),7);
        bufp->chgCData(oldp+543,((0xfU & (IData)((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc))))),4);
        bufp->chgBit(oldp+544,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wen_way0));
        bufp->chgBit(oldp+545,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wen_way1));
        bufp->chgWData(oldp+546,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_strb),128);
        bufp->chgWData(oldp+550,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wdata),128);
        bufp->chgWData(oldp+554,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0),128);
        bufp->chgWData(oldp+558,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1),128);
        bufp->chgBit(oldp+562,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit));
        bufp->chgBit(oldp+563,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit));
        bufp->chgBit(oldp+564,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0valid));
        bufp->chgBit(oldp+565,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1valid));
        bufp->chgQData(oldp+566,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__input_offset_reg))
                                   ? (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[2U])))
                                   : (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[0U]))))),64);
        bufp->chgQData(oldp+568,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__input_offset_reg))
                                   ? (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[2U])))
                                   : (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[0U]))))),64);
        bufp->chgBit(oldp+570,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cnt));
        bufp->chgIData(oldp+571,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+572,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                      >> 6U))));
        bufp->chgCData(oldp+573,((7U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                        >> 8U))),3);
        bufp->chgQData(oldp+574,(((0x20U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])
                                   ? vlSelf->ysyx_22040127_top__DOT__mem_final_rdata
                                   : (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U]))))),64);
        bufp->chgBit(oldp+576,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+577,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                      >> 8U))));
        bufp->chgBit(oldp+578,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lb));
        bufp->chgBit(oldp+579,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lh));
        bufp->chgBit(oldp+580,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lw));
        bufp->chgBit(oldp+581,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ld));
        bufp->chgBit(oldp+582,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lbu));
        bufp->chgBit(oldp+583,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lhu));
        bufp->chgBit(oldp+584,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lwu));
        bufp->chgBit(oldp+585,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                      >> 7U))));
        bufp->chgCData(oldp+586,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                           >> 0x15U))),5);
        bufp->chgQData(oldp+587,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U])) 
                                   << 0x26U) | (((QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[6U])) 
                                                 << 6U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U])) 
                                                   >> 0x1aU)))),64);
        bufp->chgSData(oldp+589,((0xfffU & ((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                             << 6U) 
                                            | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U] 
                                               >> 0x1aU)))),12);
        bufp->chgCData(oldp+590,((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])),5);
        bufp->chgBit(oldp+591,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xbU))));
        bufp->chgQData(oldp+592,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U])))),64);
        bufp->chgBit(oldp+594,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+595,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+596,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+597,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+598,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+599,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+600,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+601,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                      >> 6U))));
        bufp->chgBit(oldp+602,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                      >> 7U))));
        bufp->chgIData(oldp+603,(((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[9U] 
                                   << 0x17U) | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                                >> 9U))),32);
        bufp->chgBit(oldp+604,((0U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
        bufp->chgBit(oldp+605,((1U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
        bufp->chgBit(oldp+606,((2U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
        bufp->chgBit(oldp+607,((3U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
        bufp->chgBit(oldp+608,((4U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
        bufp->chgBit(oldp+609,((5U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
        bufp->chgBit(oldp+610,((6U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
        bufp->chgBit(oldp+611,((1U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
        bufp->chgBit(oldp+612,((2U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
        bufp->chgBit(oldp+613,((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
        bufp->chgWData(oldp+614,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg),297);
        bufp->chgQData(oldp+624,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata),64);
        bufp->chgCData(oldp+626,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask),8);
        bufp->chgCData(oldp+627,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask),8);
        bufp->chgCData(oldp+628,((7U & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])),3);
        bufp->chgQData(oldp+629,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[0]),64);
        bufp->chgQData(oldp+631,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[1]),64);
        bufp->chgQData(oldp+633,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[2]),64);
        bufp->chgQData(oldp+635,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[3]),64);
        bufp->chgQData(oldp+637,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[4]),64);
        bufp->chgQData(oldp+639,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[5]),64);
        bufp->chgQData(oldp+641,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[6]),64);
        bufp->chgQData(oldp+643,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[7]),64);
        bufp->chgQData(oldp+645,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[8]),64);
        bufp->chgQData(oldp+647,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[9]),64);
        bufp->chgQData(oldp+649,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[10]),64);
        bufp->chgQData(oldp+651,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[11]),64);
        bufp->chgQData(oldp+653,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[12]),64);
        bufp->chgQData(oldp+655,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[13]),64);
        bufp->chgQData(oldp+657,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[14]),64);
        bufp->chgQData(oldp+659,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[15]),64);
        bufp->chgQData(oldp+661,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[16]),64);
        bufp->chgQData(oldp+663,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[17]),64);
        bufp->chgQData(oldp+665,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[18]),64);
        bufp->chgQData(oldp+667,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[19]),64);
        bufp->chgQData(oldp+669,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[20]),64);
        bufp->chgQData(oldp+671,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[21]),64);
        bufp->chgQData(oldp+673,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[22]),64);
        bufp->chgQData(oldp+675,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[23]),64);
        bufp->chgQData(oldp+677,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[24]),64);
        bufp->chgQData(oldp+679,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[25]),64);
        bufp->chgQData(oldp+681,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[26]),64);
        bufp->chgQData(oldp+683,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[27]),64);
        bufp->chgQData(oldp+685,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[28]),64);
        bufp->chgQData(oldp+687,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[29]),64);
        bufp->chgQData(oldp+689,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[30]),64);
        bufp->chgQData(oldp+691,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[31]),64);
        bufp->chgQData(oldp+693,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__csr_mcycle),64);
        bufp->chgSData(oldp+695,((vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                  >> 0x14U)),12);
        bufp->chgQData(oldp+696,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0U])))),64);
        bufp->chgCData(oldp+698,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpp),2);
        bufp->chgBit(oldp+699,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpie));
        bufp->chgBit(oldp+700,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mie));
        bufp->chgBit(oldp+701,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__wb_flush));
        bufp->chgCData(oldp+702,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                           >> 0xfU))),5);
        bufp->chgBit(oldp+703,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+704,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+705,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 9U))));
        bufp->chgBit(oldp+706,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 8U))));
        bufp->chgBit(oldp+707,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 7U))));
        bufp->chgBit(oldp+708,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 6U))));
        bufp->chgQData(oldp+709,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U])) 
                                   << 0x2cU) | (((QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[4U])) 
                                                 << 0xcU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U])) 
                                                   >> 0x14U)))),64);
        bufp->chgBit(oldp+711,(((0xb00U == (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                            >> 0x14U)) 
                                & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                   >> 0xaU))));
        bufp->chgBit(oldp+712,((1U & (((0xb00U == (
                                                   vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                                   >> 0x14U)) 
                                       & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                          >> 0xaU)) 
                                      | (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                         >> 3U)))));
        bufp->chgBit(oldp+713,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                      >> 3U))));
        bufp->chgWData(oldp+714,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg),356);
        bufp->chgBit(oldp+726,((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+727,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__ar_hs));
        bufp->chgBit(oldp+728,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_hs));
        bufp->chgBit(oldp+729,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__b_hs));
        bufp->chgBit(oldp+730,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_hs));
        bufp->chgBit(oldp+731,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_done));
    }
    bufp->chgBit(oldp+732,(vlSelf->clk));
    bufp->chgBit(oldp+733,(vlSelf->rst));
    bufp->chgIData(oldp+734,(vlSelf->if_pc),32);
    bufp->chgBit(oldp+735,(vlSelf->wb_valid));
    bufp->chgIData(oldp+736,(vlSelf->wb_pc),32);
    bufp->chgQData(oldp+737,(vlSelf->mepc),64);
    bufp->chgQData(oldp+739,(vlSelf->mtvec),64);
    bufp->chgQData(oldp+741,(vlSelf->mstatus),64);
    bufp->chgQData(oldp+743,(vlSelf->mcause),64);
    bufp->chgQData(oldp+745,(vlSelf->mie),64);
    bufp->chgQData(oldp+747,(vlSelf->mip),64);
    bufp->chgQData(oldp+749,(vlSelf->mscratch),64);
    bufp->chgQData(oldp+751,(vlSelf->mtval),64);
    bufp->chgBit(oldp+753,(vlSelf->wb_memwrite));
    bufp->chgIData(oldp+754,(vlSelf->wb_instruction),32);
    bufp->chgBit(oldp+755,(vlSelf->cmt_skip));
    bufp->chgQData(oldp+756,(vlSelf->wb_diff_addr),64);
    bufp->chgQData(oldp+758,(vlSelf->wb_diff_data),64);
    bufp->chgBit(oldp+760,(vlSelf->axi_aw_ready_i));
    bufp->chgBit(oldp+761,(vlSelf->axi_aw_valid_o));
    bufp->chgQData(oldp+762,(vlSelf->axi_aw_addr_o),64);
    bufp->chgCData(oldp+764,(vlSelf->axi_aw_prot_o),3);
    bufp->chgCData(oldp+765,(vlSelf->axi_aw_id_o),4);
    bufp->chgBit(oldp+766,(vlSelf->axi_aw_user_o));
    bufp->chgCData(oldp+767,(vlSelf->axi_aw_len_o),8);
    bufp->chgCData(oldp+768,(vlSelf->axi_aw_size_o),3);
    bufp->chgCData(oldp+769,(vlSelf->axi_aw_burst_o),2);
    bufp->chgBit(oldp+770,(vlSelf->axi_aw_lock_o));
    bufp->chgCData(oldp+771,(vlSelf->axi_aw_cache_o),4);
    bufp->chgCData(oldp+772,(vlSelf->axi_aw_qos_o),4);
    bufp->chgCData(oldp+773,(vlSelf->axi_aw_region_o),4);
    bufp->chgBit(oldp+774,(vlSelf->axi_w_ready_i));
    bufp->chgBit(oldp+775,(vlSelf->axi_w_valid_o));
    bufp->chgQData(oldp+776,(vlSelf->axi_w_data_o),64);
    bufp->chgCData(oldp+778,(vlSelf->axi_w_strb_o),8);
    bufp->chgBit(oldp+779,(vlSelf->axi_w_last_o));
    bufp->chgBit(oldp+780,(vlSelf->axi_w_user_o));
    bufp->chgBit(oldp+781,(vlSelf->axi_b_ready_o));
    bufp->chgBit(oldp+782,(vlSelf->axi_b_valid_i));
    bufp->chgCData(oldp+783,(vlSelf->axi_b_resp_i),2);
    bufp->chgCData(oldp+784,(vlSelf->axi_b_id_i),4);
    bufp->chgBit(oldp+785,(vlSelf->axi_b_user_i));
    bufp->chgBit(oldp+786,(vlSelf->axi_ar_ready_i));
    bufp->chgBit(oldp+787,(vlSelf->axi_ar_valid_o));
    bufp->chgQData(oldp+788,(vlSelf->axi_ar_addr_o),64);
    bufp->chgCData(oldp+790,(vlSelf->axi_ar_prot_o),3);
    bufp->chgCData(oldp+791,(vlSelf->axi_ar_id_o),4);
    bufp->chgBit(oldp+792,(vlSelf->axi_ar_user_o));
    bufp->chgCData(oldp+793,(vlSelf->axi_ar_len_o),8);
    bufp->chgCData(oldp+794,(vlSelf->axi_ar_size_o),3);
    bufp->chgCData(oldp+795,(vlSelf->axi_ar_burst_o),2);
    bufp->chgBit(oldp+796,(vlSelf->axi_ar_lock_o));
    bufp->chgCData(oldp+797,(vlSelf->axi_ar_cache_o),4);
    bufp->chgCData(oldp+798,(vlSelf->axi_ar_qos_o),4);
    bufp->chgCData(oldp+799,(vlSelf->axi_ar_region_o),4);
    bufp->chgBit(oldp+800,(vlSelf->axi_r_ready_o));
    bufp->chgBit(oldp+801,(vlSelf->axi_r_valid_i));
    bufp->chgCData(oldp+802,(vlSelf->axi_r_resp_i),2);
    bufp->chgQData(oldp+803,(vlSelf->axi_r_data_i),64);
    bufp->chgBit(oldp+805,(vlSelf->axi_r_last_i));
    bufp->chgCData(oldp+806,(vlSelf->axi_r_id_i),4);
    bufp->chgBit(oldp+807,(vlSelf->axi_r_user_i));
    bufp->chgBit(oldp+808,(((IData)(vlSelf->axi_aw_ready_i) 
                            & (IData)(vlSelf->axi_aw_valid_o))));
    bufp->chgBit(oldp+809,(((IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_hs) 
                            & (IData)(vlSelf->axi_w_last_o))));
    bufp->chgBit(oldp+810,(((IData)(vlSelf->ysyx_22040127_top__DOT__d_req_wen)
                             ? (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__b_hs)
                             : (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_done))));
    bufp->chgIData(oldp+811,((IData)(vlSelf->mepc)),32);
    bufp->chgBit(oldp+812,(((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                              & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                                 == (0x1fU & (IData)(
                                                     (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                      >> 0x2fU))))) 
                             & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                >> 5U)) & (vlSelf->wb_pc 
                                           != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)))));
    bufp->chgBit(oldp+813,(((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                              & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                                 == (0x1fU & (IData)(
                                                     (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                      >> 0x34U))))) 
                             & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                >> 5U)) & (vlSelf->wb_pc 
                                           != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)))));
}

void Vysyx_22040127_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_22040127_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040127_top___024root*>(voidSelf);
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
