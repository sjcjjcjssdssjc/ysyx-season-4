// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040127_top__Syms.h"


void Vysyx_22040127_top___024root__trace_chg_sub_0(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22040127_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_22040127_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040127_top___024root*>(voidSelf);
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_22040127_top___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vysyx_22040127_top___024root__trace_chg_sub_0(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<9>/*287:0*/ __Vtemp_h9bc57e54__0;
    VlWide<3>/*95:0*/ __Vtemp_h9b9f996a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_h176995fd__0;
    VlWide<4>/*127:0*/ __Vtemp_h105deb60__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__1;
    VlWide<4>/*127:0*/ __Vtemp_h176995fd__1;
    VlWide<4>/*127:0*/ __Vtemp_he0489fa6__0;
    VlWide<4>/*127:0*/ __Vtemp_h91b90814__0;
    VlWide<4>/*127:0*/ __Vtemp_hbc51f7d8__0;
    VlWide<4>/*127:0*/ __Vtemp_hac0c18d9__0;
    VlWide<4>/*127:0*/ __Vtemp_he177c09e__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgSData(oldp+0,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[0]),10);
        tracep->chgSData(oldp+1,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[1]),10);
        tracep->chgSData(oldp+2,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[2]),10);
        tracep->chgSData(oldp+3,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[3]),10);
        tracep->chgSData(oldp+4,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[4]),10);
        tracep->chgSData(oldp+5,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[5]),10);
        tracep->chgSData(oldp+6,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[6]),10);
        tracep->chgSData(oldp+7,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[7]),10);
        tracep->chgSData(oldp+8,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[8]),10);
        tracep->chgSData(oldp+9,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[9]),10);
        tracep->chgSData(oldp+10,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[10]),10);
        tracep->chgSData(oldp+11,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[11]),10);
        tracep->chgCData(oldp+12,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0]),7);
        tracep->chgCData(oldp+13,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[1]),7);
        tracep->chgCData(oldp+14,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[2]),7);
        tracep->chgCData(oldp+15,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[3]),7);
        tracep->chgCData(oldp+16,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[4]),7);
        tracep->chgCData(oldp+17,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[5]),7);
        tracep->chgCData(oldp+18,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[6]),7);
        tracep->chgCData(oldp+19,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[7]),7);
        tracep->chgCData(oldp+20,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[8]),7);
        tracep->chgCData(oldp+21,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[9]),7);
        tracep->chgCData(oldp+22,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[10]),7);
        tracep->chgCData(oldp+23,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[11]),7);
        tracep->chgCData(oldp+24,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0]),3);
        tracep->chgCData(oldp+25,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[1]),3);
        tracep->chgCData(oldp+26,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[2]),3);
        tracep->chgCData(oldp+27,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[3]),3);
        tracep->chgCData(oldp+28,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[4]),3);
        tracep->chgCData(oldp+29,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[5]),3);
        tracep->chgCData(oldp+30,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[6]),3);
        tracep->chgCData(oldp+31,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[7]),3);
        tracep->chgCData(oldp+32,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[8]),3);
        tracep->chgCData(oldp+33,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[9]),3);
        tracep->chgCData(oldp+34,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[10]),3);
        tracep->chgCData(oldp+35,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[11]),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgQData(oldp+36,(vlSelf->ysyx_22040127_top__DOT__mhartid),64);
        tracep->chgIData(oldp+38,(vlSelf->ysyx_22040127_top__DOT__if_instruction),32);
        tracep->chgBit(oldp+39,((((IData)((0x100073U 
                                           == (0x10007fU 
                                               & vlSelf->ysyx_22040127_top__DOT__if_instruction))) 
                                  & (~ (IData)((0U 
                                                != 
                                                (0xffefff80U 
                                                 & vlSelf->ysyx_22040127_top__DOT__if_instruction))))) 
                                 | (0x6bU == (0x7fU 
                                              & vlSelf->ysyx_22040127_top__DOT__if_instruction)))));
        tracep->chgBit(oldp+40,((0x7bU == (0x7fU & vlSelf->ysyx_22040127_top__DOT__if_instruction))));
        tracep->chgBit(oldp+41,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                       >> 0xdU))));
        tracep->chgBit(oldp+42,(vlSelf->ysyx_22040127_top__DOT__if_valid));
        tracep->chgBit(oldp+43,(vlSelf->ysyx_22040127_top__DOT__if_allowin));
        tracep->chgIData(oldp+44,(((((- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken))) 
                                     & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U] 
                                        + (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm))) 
                                    | (0xfffffffeU 
                                       & ((- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr))) 
                                          & ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final) 
                                             + (((- (IData)(
                                                            (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                   >> 0x14U)))))) 
                                   | ((- (IData)((3U 
                                                  == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                                      & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U] 
                                         + (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1))))),32);
        tracep->chgBit(oldp+45,(vlSelf->ysyx_22040127_top__DOT__id_branch_taken));
        tracep->chgCData(oldp+46,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+47,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                            >> 0x14U))),5);
        tracep->chgBit(oldp+48,(vlSelf->ysyx_22040127_top__DOT__id_flush));
        tracep->chgBit(oldp+49,(vlSelf->ysyx_22040127_top__DOT__id_allowin));
        tracep->chgQData(oldp+50,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf
                                  [(0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                             >> 0xfU))]),64);
        tracep->chgQData(oldp+52,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf
                                  [(0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                             >> 0x14U))]),64);
        tracep->chgBit(oldp+54,(vlSelf->ysyx_22040127_top__DOT__id_to_ex_valid));
        tracep->chgIData(oldp+55,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                    << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                              >> 0x1fU))),32);
        tracep->chgCData(oldp+56,((7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                         >> 8U))),3);
        tracep->chgCData(oldp+57,(vlSelf->ysyx_22040127_top__DOT__ex_wmask),8);
        tracep->chgBit(oldp+58,(vlSelf->ysyx_22040127_top__DOT__ex_flush));
        tracep->chgBit(oldp+59,(vlSelf->ysyx_22040127_top__DOT__ex_allowin));
        tracep->chgBit(oldp+60,(vlSelf->ysyx_22040127_top__DOT__ex_ready_go));
        tracep->chgBit(oldp+61,(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_valid));
        tracep->chgBit(oldp+62,((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                  & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                     | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit))) 
                                 | ((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                    & ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw)) 
                                       & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                          | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit)))))));
        tracep->chgBit(oldp+63,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_valid));
        tracep->chgBit(oldp+64,(vlSelf->ysyx_22040127_top__DOT__mem_flush));
        tracep->chgQData(oldp+65,((((QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])))),64);
        tracep->chgBit(oldp+67,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                       >> 5U))));
        tracep->chgQData(oldp+68,(vlSelf->ysyx_22040127_top__DOT__mem_final_rdata),64);
        tracep->chgQData(oldp+70,(vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data),64);
        tracep->chgQData(oldp+72,(vlSelf->ysyx_22040127_top__DOT__mem_diff_addr),64);
        tracep->chgQData(oldp+74,(vlSelf->ysyx_22040127_top__DOT__mem_diff_data),64);
        tracep->chgWData(oldp+76,(vlSelf->ysyx_22040127_top__DOT__if_to_id_bus),65);
        __Vtemp_h9bc57e54__0[0U] = (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final);
        __Vtemp_h9bc57e54__0[1U] = (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final 
                                            >> 0x20U));
        __Vtemp_h9bc57e54__0[2U] = (IData)((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                             | (2U 
                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                             ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                             : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final));
        __Vtemp_h9bc57e54__0[3U] = (IData)(((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                              | (2U 
                                                 == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                              ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                              : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final) 
                                            >> 0x20U));
        __Vtemp_h9bc57e54__0[4U] = (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1);
        __Vtemp_h9bc57e54__0[5U] = (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1 
                                            >> 0x20U));
        __Vtemp_h9bc57e54__0[6U] = (((IData)((((QData)((IData)(
                                                               (1U 
                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[2U]))) 
                                               << 0x3fU) 
                                              | (((QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm)))) 
                                                  << 0x33U) 
                                                 | (((QData)((IData)(
                                                                     ((0x604000U 
                                                                       == 
                                                                       (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                        >> 7U)) 
                                                                      & (6U 
                                                                         == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                     << 0x32U) 
                                                    | (((QData)((IData)(
                                                                        ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 7U)))) 
                                                                         & (6U 
                                                                            == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                        << 0x31U) 
                                                       | (((QData)((IData)(
                                                                           ((0x1000U 
                                                                             == 
                                                                             (0x7000U 
                                                                              & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                            & (6U 
                                                                               == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                           << 0x30U) 
                                                          | (((QData)((IData)(
                                                                              ((0x2000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                               & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                              << 0x2fU) 
                                                             | (((QData)((IData)(
                                                                                ((0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                 << 0x2eU) 
                                                                | (((QData)((IData)(
                                                                                ((0x5000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                    << 0x2dU) 
                                                                   | (((QData)((IData)(
                                                                                ((0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                       << 0x2cU) 
                                                                      | (((QData)((IData)(
                                                                                ((0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                          << 0x2bU) 
                                                                         | (((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U])) 
                                                                             << 0xbU) 
                                                                            | (QData)((IData)(
                                                                                (((0x400U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x10U)) 
                                                                                | (0x1e0U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                << 2U)))) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((2U 
                                                                                & ((((((~ (IData)(
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
                                                                                << 1U)) 
                                                                                | (2U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))))))))))))))))) 
                                     << 0x14U) | (((IData)(
                                                           (3U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U]))) 
                                                   << 0x13U) 
                                                  | ((0x7c000U 
                                                      & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                         << 7U)) 
                                                     | ((0x3e00U 
                                                         & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                            >> 6U)) 
                                                        | ((0x1f0U 
                                                            & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                               >> 0x10U)) 
                                                           | (((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type) 
                                                               << 1U) 
                                                              | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr)))))));
        __Vtemp_h9bc57e54__0[7U] = (((IData)((((QData)((IData)(
                                                               (1U 
                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[2U]))) 
                                               << 0x3fU) 
                                              | (((QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm)))) 
                                                  << 0x33U) 
                                                 | (((QData)((IData)(
                                                                     ((0x604000U 
                                                                       == 
                                                                       (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                        >> 7U)) 
                                                                      & (6U 
                                                                         == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                     << 0x32U) 
                                                    | (((QData)((IData)(
                                                                        ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 7U)))) 
                                                                         & (6U 
                                                                            == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                        << 0x31U) 
                                                       | (((QData)((IData)(
                                                                           ((0x1000U 
                                                                             == 
                                                                             (0x7000U 
                                                                              & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                            & (6U 
                                                                               == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                           << 0x30U) 
                                                          | (((QData)((IData)(
                                                                              ((0x2000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                               & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                              << 0x2fU) 
                                                             | (((QData)((IData)(
                                                                                ((0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                 << 0x2eU) 
                                                                | (((QData)((IData)(
                                                                                ((0x5000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                    << 0x2dU) 
                                                                   | (((QData)((IData)(
                                                                                ((0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                       << 0x2cU) 
                                                                      | (((QData)((IData)(
                                                                                ((0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                          << 0x2bU) 
                                                                         | (((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U])) 
                                                                             << 0xbU) 
                                                                            | (QData)((IData)(
                                                                                (((0x400U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x10U)) 
                                                                                | (0x1e0U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                << 2U)))) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((2U 
                                                                                & ((((((~ (IData)(
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
                                                                                << 1U)) 
                                                                                | (2U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))))))))))))))))) 
                                     >> 0xcU) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            (1U 
                                                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[2U]))) 
                                                            << 0x3fU) 
                                                           | (((QData)((IData)(
                                                                               (0xfffU 
                                                                                & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm)))) 
                                                               << 0x33U) 
                                                              | (((QData)((IData)(
                                                                                ((0x604000U 
                                                                                == 
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 7U)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                  << 0x32U) 
                                                                 | (((QData)((IData)(
                                                                                ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 7U)))) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                     << 0x31U) 
                                                                    | (((QData)((IData)(
                                                                                ((0x1000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                        << 0x30U) 
                                                                       | (((QData)((IData)(
                                                                                ((0x2000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                           << 0x2fU) 
                                                                          | (((QData)((IData)(
                                                                                ((0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                              << 0x2eU) 
                                                                             | (((QData)((IData)(
                                                                                ((0x5000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                ((0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                ((0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U])) 
                                                                                << 0xbU) 
                                                                                | (QData)((IData)(
                                                                                (((0x400U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x10U)) 
                                                                                | (0x1e0U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                << 2U)))) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((2U 
                                                                                & ((((((~ (IData)(
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
                                                                                << 1U)) 
                                                                                | (2U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))))))))))))))))) 
                                                          >> 0x20U)) 
                                                 << 0x14U));
        __Vtemp_h9bc57e54__0[8U] = ((IData)(((((QData)((IData)(
                                                               (1U 
                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[2U]))) 
                                               << 0x3fU) 
                                              | (((QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm)))) 
                                                  << 0x33U) 
                                                 | (((QData)((IData)(
                                                                     ((0x604000U 
                                                                       == 
                                                                       (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                        >> 7U)) 
                                                                      & (6U 
                                                                         == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                     << 0x32U) 
                                                    | (((QData)((IData)(
                                                                        ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 7U)))) 
                                                                         & (6U 
                                                                            == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                        << 0x31U) 
                                                       | (((QData)((IData)(
                                                                           ((0x1000U 
                                                                             == 
                                                                             (0x7000U 
                                                                              & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                            & (6U 
                                                                               == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                           << 0x30U) 
                                                          | (((QData)((IData)(
                                                                              ((0x2000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                               & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                              << 0x2fU) 
                                                             | (((QData)((IData)(
                                                                                ((0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                 << 0x2eU) 
                                                                | (((QData)((IData)(
                                                                                ((0x5000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                    << 0x2dU) 
                                                                   | (((QData)((IData)(
                                                                                ((0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                       << 0x2cU) 
                                                                      | (((QData)((IData)(
                                                                                ((0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                          << 0x2bU) 
                                                                         | (((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U])) 
                                                                             << 0xbU) 
                                                                            | (QData)((IData)(
                                                                                (((0x400U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x14U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x10U)) 
                                                                                | (0x1e0U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                << 2U)))) 
                                                                                | ((0x1cU 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0xaU)) 
                                                                                | ((2U 
                                                                                & ((((((~ (IData)(
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
                                                                                << 1U)) 
                                                                                | (2U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))))))))))))))))) 
                                             >> 0x20U)) 
                                    >> 0xcU);
        tracep->chgWData(oldp+79,(__Vtemp_h9bc57e54__0),276);
        tracep->chgWData(oldp+88,(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus),263);
        tracep->chgWData(oldp+97,(vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus),322);
        tracep->chgQData(oldp+108,(vlSelf->ysyx_22040127_top__DOT__d_req_addr),64);
        tracep->chgCData(oldp+110,(vlSelf->ysyx_22040127_top__DOT__d_req_strb),8);
        tracep->chgWData(oldp+111,(vlSelf->ysyx_22040127_top__DOT__d_req_data),128);
        tracep->chgBit(oldp+115,(vlSelf->ysyx_22040127_top__DOT__d_req_wen));
        tracep->chgBit(oldp+116,(vlSelf->ysyx_22040127_top__DOT__d_req_valid));
        tracep->chgBit(oldp+117,(vlSelf->ysyx_22040127_top__DOT__d_res_valid));
        tracep->chgWData(oldp+118,(vlSelf->ysyx_22040127_top__DOT__d_mrdata),128);
        tracep->chgQData(oldp+122,(vlSelf->ysyx_22040127_top__DOT__i_req_addr),64);
        tracep->chgBit(oldp+124,(vlSelf->ysyx_22040127_top__DOT__i_req_valid));
        tracep->chgBit(oldp+125,((5U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state))));
        tracep->chgWData(oldp+126,(vlSelf->ysyx_22040127_top__DOT__i_mrdata),128);
        tracep->chgQData(oldp+130,(vlSelf->ysyx_22040127_top__DOT__wb_reg_wdata),64);
        tracep->chgQData(oldp+132,(vlSelf->ysyx_22040127_top__DOT__wb_csrwdata),64);
        tracep->chgQData(oldp+134,(vlSelf->ysyx_22040127_top__DOT__wb_csrrdata),64);
        tracep->chgBit(oldp+136,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                        >> 0xeU))));
        tracep->chgCData(oldp+137,((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])),5);
        tracep->chgBit(oldp+138,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                        >> 5U))));
        tracep->chgBit(oldp+139,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                        >> 1U))));
        tracep->chgCData(oldp+140,(vlSelf->ysyx_22040127_top__DOT__dcache_state),3);
        tracep->chgCData(oldp+141,(vlSelf->ysyx_22040127_top__DOT__icache_state),3);
        tracep->chgIData(oldp+142,(vlSelf->ysyx_22040127_top__DOT__next_pc),32);
        tracep->chgIData(oldp+143,(vlSelf->ysyx_22040127_top__DOT__next_pc_delayed),32);
        tracep->chgBit(oldp+144,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state)) 
                                  & ((IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit) 
                                     | (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit)))));
        tracep->chgBit(oldp+145,(vlSelf->ysyx_22040127_top__DOT__icache_valid));
        tracep->chgBit(oldp+146,(vlSelf->ysyx_22040127_top__DOT__preif_valid));
        tracep->chgBit(oldp+147,(vlSelf->ysyx_22040127_top__DOT__preif_ready_go_delayed));
        tracep->chgBit(oldp+148,(vlSelf->ysyx_22040127_top__DOT__preif_ready_go));
        tracep->chgBit(oldp+149,((1U & ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__preif_valid)) 
                                        | ((IData)(vlSelf->ysyx_22040127_top__DOT__preif_ready_go) 
                                           & (IData)(vlSelf->ysyx_22040127_top__DOT__if_allowin))))));
        tracep->chgQData(oldp+150,(vlSelf->ysyx_22040127_top__DOT__icache_data),64);
        tracep->chgIData(oldp+152,(vlSelf->ysyx_22040127_top__DOT__if_instruction_reg),32);
        tracep->chgBit(oldp+153,(vlSelf->ysyx_22040127_top__DOT__if_instruction_blocked));
        tracep->chgBit(oldp+154,(((IData)(vlSelf->ysyx_22040127_top__DOT__d_req_wen) 
                                  & (IData)(vlSelf->ysyx_22040127_top__DOT__d_req_valid))));
        tracep->chgBit(oldp+155,(((IData)(vlSelf->ysyx_22040127_top__DOT__i_req_valid) 
                                  | (IData)(vlSelf->ysyx_22040127_top__DOT__d_req_valid))));
        tracep->chgBit(oldp+156,(((IData)(vlSelf->ysyx_22040127_top__DOT__d_req_valid) 
                                  & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__d_req_wen)))));
        tracep->chgQData(oldp+157,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state))
                                     ? (0xfffffffffffffff0ULL 
                                        & vlSelf->ysyx_22040127_top__DOT__i_req_addr)
                                     : ((3U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state))
                                         ? (0xfffffffffffffff0ULL 
                                            & vlSelf->ysyx_22040127_top__DOT__d_req_addr)
                                         : 0ULL))),64);
        tracep->chgCData(oldp+159,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state),3);
        tracep->chgCData(oldp+160,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state),3);
        tracep->chgBit(oldp+161,((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state))));
        tracep->chgBit(oldp+162,(((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state)) 
                                  | (5U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state)))));
        tracep->chgBit(oldp+163,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)) 
                                  | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)))));
        tracep->chgBit(oldp+164,(((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)) 
                                  | (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)))));
        tracep->chgQData(oldp+165,((((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])))),64);
        tracep->chgQData(oldp+167,((((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U])))),64);
        tracep->chgBit(oldp+169,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                        >> 6U))));
        tracep->chgBit(oldp+170,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                        >> 5U))));
        tracep->chgBit(oldp+171,(vlSelf->ysyx_22040127_top__DOT____Vcellinp__dcache__input_valid));
        tracep->chgCData(oldp+172,((3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                          >> 8U))),2);
        tracep->chgCData(oldp+173,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_size_reg),2);
        tracep->chgCData(oldp+174,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_offset_reg),4);
        tracep->chgBit(oldp+175,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit_reg));
        tracep->chgBit(oldp+176,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit_reg));
        tracep->chgIData(oldp+177,((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                    >> 0xbU)),21);
        tracep->chgCData(oldp+178,((0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                             >> 4U))),7);
        tracep->chgCData(oldp+179,((0xfU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])),4);
        tracep->chgCData(oldp+180,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_index_reg),7);
        tracep->chgCData(oldp+181,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_offset_reg),4);
        tracep->chgWData(oldp+182,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_strb),128);
        tracep->chgBit(oldp+186,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way0));
        tracep->chgBit(oldp+187,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way1));
        tracep->chgWData(oldp+188,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wdata),128);
        tracep->chgBit(oldp+192,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_miss));
        tracep->chgBit(oldp+193,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way0_reg));
        tracep->chgBit(oldp+194,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way1_reg));
        tracep->chgQData(oldp+195,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_strb),64);
        tracep->chgWData(oldp+197,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0),128);
        tracep->chgWData(oldp+201,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1),128);
        tracep->chgBit(oldp+205,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit));
        tracep->chgBit(oldp+206,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit));
        tracep->chgBit(oldp+207,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0dirty));
        tracep->chgBit(oldp+208,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1dirty));
        tracep->chgBit(oldp+209,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0valid));
        tracep->chgBit(oldp+210,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1valid));
        tracep->chgQData(oldp+211,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_offset_reg))
                                     ? (((QData)((IData)(
                                                         vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[2U])))
                                     : (((QData)((IData)(
                                                         vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[0U]))))),64);
        tracep->chgQData(oldp+213,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_offset_reg))
                                     ? (((QData)((IData)(
                                                         vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[2U])))
                                     : (((QData)((IData)(
                                                         vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[0U]))))),64);
        tracep->chgQData(oldp+215,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_wdata),64);
        tracep->chgBit(oldp+217,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way0));
        tracep->chgBit(oldp+218,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way1));
        tracep->chgBit(oldp+219,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw));
        tracep->chgBit(oldp+220,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cnt));
        tracep->chgBit(oldp+221,((1U & ((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                         >> 5U) | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_miss)))));
        tracep->chgIData(oldp+222,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__unnamedblk1__DOT__i),32);
        tracep->chgCData(oldp+223,((0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])),5);
        tracep->chgCData(oldp+224,((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U])),5);
        tracep->chgBit(oldp+225,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                        >> 7U))));
        tracep->chgBit(oldp+226,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U] 
                                        >> 5U))));
        tracep->chgBit(oldp+227,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+228,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[5U] 
                                        >> 0x14U))));
        tracep->chgBit(oldp+229,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
                                        >> 0xeU))));
        tracep->chgBit(oldp+230,((1U & (~ (IData)((0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                       >> 0xcU))))))));
        tracep->chgBit(oldp+231,((1U & ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                        >> 0xdU))))) 
                                        & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                           >> 0xcU)))));
        tracep->chgBit(oldp+232,((4U == (7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+233,((6U == (7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+234,((5U == (7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+235,((7U == (7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                               >> 0xcU)))));
        tracep->chgBit(oldp+236,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken));
        tracep->chgBit(oldp+237,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                  | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
        tracep->chgBit(oldp+238,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                  | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
        tracep->chgCData(oldp+239,(((0x20U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                              >> 0x19U)) 
                                    | ((0x10U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                 >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                  >> 3U))))),6);
        tracep->chgCData(oldp+240,((7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+241,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                             >> 7U))),5);
        tracep->chgBit(oldp+242,((1U & (((((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                                           | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                          | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                         | (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                        | (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
        tracep->chgBit(oldp+243,((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))));
        tracep->chgBit(oldp+244,((IData)((3U == (0x7fU 
                                                 & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])))));
        tracep->chgCData(oldp+245,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type),3);
        tracep->chgQData(oldp+246,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm),64);
        tracep->chgBit(oldp+248,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr));
        tracep->chgQData(oldp+249,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1),64);
        tracep->chgQData(oldp+251,((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                     | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                     ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                     : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final)),64);
        tracep->chgQData(oldp+253,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final),64);
        tracep->chgQData(oldp+255,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final),64);
        tracep->chgBit(oldp+257,((1U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[2U])));
        tracep->chgBit(oldp+258,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard1));
        tracep->chgBit(oldp+259,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard2));
        tracep->chgBit(oldp+260,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard1));
        tracep->chgBit(oldp+261,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard2));
        tracep->chgBit(oldp+262,((((0U != (0x1fU & 
                                           vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                                   & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                                      == (0x1fU & (
                                                   vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                   >> 0xfU)))) 
                                  & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                     >> 5U))));
        tracep->chgBit(oldp+263,((((0U != (0x1fU & 
                                           vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                                   & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                                      == (0x1fU & (
                                                   vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                   >> 0x14U)))) 
                                  & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                     >> 5U))));
        tracep->chgBit(oldp+264,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard1));
        tracep->chgBit(oldp+265,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard2));
        tracep->chgBit(oldp+266,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1_tmp));
        tracep->chgBit(oldp+267,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2_tmp));
        tracep->chgBit(oldp+268,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1));
        tracep->chgBit(oldp+269,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2));
        tracep->chgBit(oldp+270,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard1_tmp));
        tracep->chgBit(oldp+271,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard2_tmp));
        tracep->chgBit(oldp+272,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_ready_go));
        tracep->chgBit(oldp+273,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_valid));
        tracep->chgWData(oldp+274,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg),65);
        tracep->chgIData(oldp+277,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U]),32);
        tracep->chgIData(oldp+278,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U]),32);
        tracep->chgBit(oldp+279,(((0x604000U == (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                 >> 7U)) 
                                  & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
        tracep->chgBit(oldp+280,(((~ (IData)((0U != 
                                              (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                               >> 7U)))) 
                                  & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
        tracep->chgBit(oldp+281,((IData)(((0x1000U 
                                           == (0x7000U 
                                               & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                          & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
        tracep->chgBit(oldp+282,((IData)(((0x2000U 
                                           == (0x7000U 
                                               & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                          & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
        tracep->chgBit(oldp+283,((IData)(((0x3000U 
                                           == (0x7000U 
                                               & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                          & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
        tracep->chgBit(oldp+284,((IData)(((0x5000U 
                                           == (0x7000U 
                                               & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                          & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
        tracep->chgBit(oldp+285,((IData)(((0x6000U 
                                           == (0x7000U 
                                               & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                          & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
        tracep->chgBit(oldp+286,((IData)(((0x7000U 
                                           == (0x7000U 
                                               & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                          & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
        tracep->chgCData(oldp+287,((0x7fU & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])),7);
        tracep->chgCData(oldp+288,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out),3);
        tracep->chgBit(oldp+289,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit));
        tracep->chgQData(oldp+290,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_calc_result),64);
        tracep->chgQData(oldp+292,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_calc_result),64);
        tracep->chgQData(oldp+294,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op),64);
        tracep->chgIData(oldp+296,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op),32);
        tracep->chgQData(oldp+297,(((((QData)((IData)(
                                                      vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                    - (((QData)((IData)(
                                                        vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))))),64);
        tracep->chgIData(oldp+299,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__addw_result),32);
        tracep->chgIData(oldp+300,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result),32);
        tracep->chgIData(oldp+301,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U]),32);
        tracep->chgIData(oldp+302,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U]),32);
        tracep->chgIData(oldp+303,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                     << 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                                  >> 1U))),32);
        tracep->chgQData(oldp+304,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_addw_result),64);
        tracep->chgQData(oldp+306,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result)))),64);
        tracep->chgQData(oldp+308,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U] 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U])))),64);
        tracep->chgQData(oldp+310,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U] 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U])))),64);
        tracep->chgQData(oldp+312,((((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U]))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                                                   << 0x1fU) 
                                                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                                                     >> 1U)))))),64);
        tracep->chgIData(oldp+314,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_sllw),32);
        tracep->chgIData(oldp+315,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_srlw),32);
        tracep->chgCData(oldp+316,((0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])),6);
        tracep->chgQData(oldp+317,((~ (0xffffffffffffffffULL 
                                       >> (0x3fU & 
                                           vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))),64);
        tracep->chgQData(oldp+319,((0xffffffff00000000ULL 
                                    | (QData)((IData)(
                                                      (~ 
                                                       (0xffffffffU 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))))))),64);
        tracep->chgQData(oldp+321,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sraw),64);
        tracep->chgQData(oldp+323,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sllw),64);
        tracep->chgQData(oldp+325,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_srlw),64);
        tracep->chgQData(oldp+327,((((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[0U])))),64);
        tracep->chgCData(oldp+329,((0x3fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                             >> 0x19U))),6);
        tracep->chgCData(oldp+330,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 0x16U))),3);
        tracep->chgBit(oldp+331,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                        >> 0x14U))));
        tracep->chgBit(oldp+332,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                        >> 0x13U))));
        tracep->chgCData(oldp+333,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                             >> 0xeU))),5);
        tracep->chgCData(oldp+334,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 1U))),3);
        tracep->chgBit(oldp+335,((1U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])));
        tracep->chgQData(oldp+336,((((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])))),64);
        tracep->chgQData(oldp+338,((((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))),64);
        tracep->chgCData(oldp+340,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                             >> 9U))),5);
        tracep->chgCData(oldp+341,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                             >> 4U))),5);
        tracep->chgBit(oldp+342,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                        >> 0x15U))));
        tracep->chgBit(oldp+343,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_type));
        tracep->chgBit(oldp+344,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_type));
        tracep->chgBit(oldp+345,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_sign));
        tracep->chgBit(oldp+346,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_ok));
        tracep->chgBit(oldp+347,((1U & (~ (IData)((0xc00000U 
                                                   == 
                                                   (0xc00000U 
                                                    & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])))))));
        tracep->chgBit(oldp+348,((1U & (~ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                           >> 0x17U)))));
        tracep->chgQData(oldp+349,((((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[2U])))),64);
        tracep->chgQData(oldp+351,((((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U])))),64);
        tracep->chgBit(oldp+353,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__ex_valid));
        tracep->chgWData(oldp+354,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg),276);
        tracep->chgQData(oldp+363,(((8U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                     ? ((4U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                         ? 0ULL : (
                                                   (2U 
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
                                                + (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))))
                                         : ((2U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                             ? ((0x8000000U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])))
                                                 : 
                                                ((((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                                 + (QData)((IData)(
                                                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                     << 1U) 
                                                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                       >> 0x1fU))))))
                                             : ((1U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                 ? (QData)((IData)(
                                                                   ((IData)(4U) 
                                                                    + 
                                                                    ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                      << 1U) 
                                                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                        >> 0x1fU)))))
                                                 : vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_calc_result))))),64);
        tracep->chgBit(oldp+365,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_ready));
        tracep->chgCData(oldp+366,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_state),2);
        tracep->chgQData(oldp+367,((((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U])))),64);
        tracep->chgQData(oldp+369,((((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[4U])) 
                                     << 0x3fU) | (((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U])) 
                                                   << 0x1fU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U])) 
                                                     >> 1U)))),64);
        tracep->chgBit(oldp+371,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                        >> 6U))));
        tracep->chgBit(oldp+372,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                        >> 5U))));
        tracep->chgBit(oldp+373,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                        >> 4U))));
        tracep->chgBit(oldp+374,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                        >> 3U))));
        tracep->chgBit(oldp+375,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                        >> 2U))));
        tracep->chgBit(oldp+376,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                        >> 1U))));
        tracep->chgBit(oldp+377,((1U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])));
        tracep->chgBit(oldp+378,((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                  >> 0x1fU)));
        tracep->chgBit(oldp+379,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                   >> 0x1fU) | (0U 
                                                != 
                                                (0x7fU 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])))));
        tracep->chgSData(oldp+380,((0xfffU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                              >> 7U))),12);
        tracep->chgBit(oldp+381,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+382,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__cache_readygo));
        tracep->chgQData(oldp+383,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sra),64);
        tracep->chgQData(oldp+385,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_srl),64);
        tracep->chgQData(oldp+387,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sll),64);
        tracep->chgCData(oldp+389,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                             >> 0x16U))),5);
        tracep->chgCData(oldp+390,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in),6);
        tracep->chgQData(oldp+391,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber3),64);
        tracep->chgQData(oldp+393,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber4),64);
        tracep->chgCData(oldp+395,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__cnt),7);
        tracep->chgWData(oldp+396,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend),129);
        tracep->chgQData(oldp+401,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__divisor),64);
        tracep->chgWData(oldp+403,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__subres),65);
        tracep->chgWData(oldp+406,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext),65);
        __Vtemp_h9b9f996a__0[0U] = ((IData)((((QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))) 
                                    << 1U);
        __Vtemp_h9b9f996a__0[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp_h9b9f996a__0[2U] = ((((0x800000U & 
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
        tracep->chgWData(oldp+409,(__Vtemp_h9b9f996a__0),67);
        tracep->chgWData(oldp+412,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res),128);
        tracep->chgCData(oldp+416,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__cnt),5);
        tracep->chgWData(oldp+417,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier),128);
        tracep->chgWData(oldp+421,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied),67);
        tracep->chgCData(oldp+424,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__mul_state),2);
        __Vtemp_hc961b8db__0[0U] = 1U;
        __Vtemp_hc961b8db__0[1U] = 0U;
        __Vtemp_hc961b8db__0[2U] = 0U;
        __Vtemp_hc961b8db__0[3U] = 0U;
        __Vtemp_h176995fd__0[0U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U]);
        __Vtemp_h176995fd__0[1U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U]);
        __Vtemp_h176995fd__0[2U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U]);
        __Vtemp_h176995fd__0[3U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[3U]);
        VL_ADD_W(4, __Vtemp_h105deb60__0, __Vtemp_hc961b8db__0, __Vtemp_h176995fd__0);
        tracep->chgWData(oldp+425,(__Vtemp_h105deb60__0),128);
        __Vtemp_hc961b8db__1[0U] = 1U;
        __Vtemp_hc961b8db__1[1U] = 0U;
        __Vtemp_hc961b8db__1[2U] = 0U;
        __Vtemp_hc961b8db__1[3U] = 0U;
        __Vtemp_h176995fd__1[0U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U]);
        __Vtemp_h176995fd__1[1U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U]);
        __Vtemp_h176995fd__1[2U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U]);
        __Vtemp_h176995fd__1[3U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[3U]);
        VL_ADD_W(4, __Vtemp_he0489fa6__0, __Vtemp_hc961b8db__1, __Vtemp_h176995fd__1);
        __Vtemp_h91b90814__0[0U] = 1U;
        __Vtemp_h91b90814__0[1U] = 0U;
        __Vtemp_h91b90814__0[2U] = 0U;
        __Vtemp_h91b90814__0[3U] = 0U;
        __Vtemp_hbc51f7d8__0[0U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U]);
        __Vtemp_hbc51f7d8__0[1U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U]);
        __Vtemp_hbc51f7d8__0[2U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U]);
        __Vtemp_hbc51f7d8__0[3U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[3U]);
        VL_ADD_W(4, __Vtemp_hac0c18d9__0, __Vtemp_h91b90814__0, __Vtemp_hbc51f7d8__0);
        __Vtemp_he177c09e__0[0U] = (((((- (IData)((
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
                                         & __Vtemp_he0489fa6__0[0U])) 
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
                                       & (__Vtemp_hac0c18d9__0[0U] 
                                          << 1U)));
        __Vtemp_he177c09e__0[1U] = (((((- (IData)((
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
                                         & __Vtemp_he0489fa6__0[1U])) 
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
                                       & ((__Vtemp_hac0c18d9__0[0U] 
                                           >> 0x1fU) 
                                          | (__Vtemp_hac0c18d9__0[1U] 
                                             << 1U))));
        __Vtemp_he177c09e__0[2U] = (((((- (IData)((
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
                                         & __Vtemp_he0489fa6__0[2U])) 
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
                                       & ((__Vtemp_hac0c18d9__0[1U] 
                                           >> 0x1fU) 
                                          | (__Vtemp_hac0c18d9__0[2U] 
                                             << 1U))));
        __Vtemp_he177c09e__0[3U] = (((((- (IData)((
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
                                         & __Vtemp_he0489fa6__0[3U])) 
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
                                       & ((__Vtemp_hac0c18d9__0[2U] 
                                           >> 0x1fU) 
                                          | (__Vtemp_hac0c18d9__0[3U] 
                                             << 1U))));
        tracep->chgWData(oldp+429,(__Vtemp_he177c09e__0),128);
        tracep->chgQData(oldp+433,((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc))),64);
        tracep->chgCData(oldp+435,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__input_offset_reg),4);
        tracep->chgBit(oldp+436,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit_reg));
        tracep->chgBit(oldp+437,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit_reg));
        tracep->chgIData(oldp+438,((0x1fffffU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc)) 
                                                         >> 0xbU)))),21);
        tracep->chgCData(oldp+439,((0x7fU & (IData)(
                                                    ((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc)) 
                                                     >> 4U)))),7);
        tracep->chgCData(oldp+440,((0xfU & (IData)((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc))))),4);
        tracep->chgCData(oldp+441,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_offset_reg),4);
        tracep->chgBit(oldp+442,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wen_way0));
        tracep->chgBit(oldp+443,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wen_way1));
        tracep->chgBit(oldp+444,((((IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0valid) 
                                   & (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1valid)) 
                                  & ((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state)) 
                                     & (~ ((IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit) 
                                           | (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit)))))));
        tracep->chgWData(oldp+445,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_strb),128);
        tracep->chgWData(oldp+449,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wdata),128);
        tracep->chgWData(oldp+453,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0),128);
        tracep->chgWData(oldp+457,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1),128);
        tracep->chgBit(oldp+461,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit));
        tracep->chgBit(oldp+462,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit));
        tracep->chgBit(oldp+463,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0valid));
        tracep->chgBit(oldp+464,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1valid));
        tracep->chgQData(oldp+465,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__input_offset_reg))
                                     ? (((QData)((IData)(
                                                         vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[2U])))
                                     : (((QData)((IData)(
                                                         vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[0U]))))),64);
        tracep->chgQData(oldp+467,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__input_offset_reg))
                                     ? (((QData)((IData)(
                                                         vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[2U])))
                                     : (((QData)((IData)(
                                                         vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[0U]))))),64);
        tracep->chgBit(oldp+469,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cnt));
        tracep->chgIData(oldp+470,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__unnamedblk1__DOT__i),32);
        tracep->chgBit(oldp+471,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                        >> 6U))));
        tracep->chgCData(oldp+472,((7U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                          >> 8U))),3);
        tracep->chgQData(oldp+473,(((0x20U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])
                                     ? vlSelf->ysyx_22040127_top__DOT__mem_final_rdata
                                     : (((QData)((IData)(
                                                         vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U]))))),64);
        tracep->chgBit(oldp+475,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lb));
        tracep->chgBit(oldp+476,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lh));
        tracep->chgBit(oldp+477,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lw));
        tracep->chgBit(oldp+478,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ld));
        tracep->chgBit(oldp+479,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lbu));
        tracep->chgBit(oldp+480,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lhu));
        tracep->chgBit(oldp+481,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lwu));
        tracep->chgBit(oldp+482,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sb));
        tracep->chgBit(oldp+483,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sh));
        tracep->chgBit(oldp+484,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sw));
        tracep->chgBit(oldp+485,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sd));
        tracep->chgBit(oldp+486,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                        >> 7U))));
        tracep->chgCData(oldp+487,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                             >> 0x15U))),5);
        tracep->chgQData(oldp+488,((((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U])) 
                                     << 0x26U) | (((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[6U])) 
                                                   << 6U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U])) 
                                                     >> 0x1aU)))),64);
        tracep->chgSData(oldp+490,((0xfffU & ((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                               << 6U) 
                                              | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U] 
                                                 >> 0x1aU)))),12);
        tracep->chgCData(oldp+491,((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])),5);
        tracep->chgIData(oldp+492,(((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                     << 0x15U) | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                  >> 0xbU))),32);
        tracep->chgBit(oldp+493,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                        >> 0xbU))));
        tracep->chgQData(oldp+494,((((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U])))),64);
        tracep->chgBit(oldp+496,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                        >> 0x13U))));
        tracep->chgBit(oldp+497,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+498,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                        >> 0x11U))));
        tracep->chgBit(oldp+499,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                        >> 0x10U))));
        tracep->chgBit(oldp+500,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                        >> 0xfU))));
        tracep->chgBit(oldp+501,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                        >> 0xeU))));
        tracep->chgBit(oldp+502,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                        >> 0xdU))));
        tracep->chgBit(oldp+503,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+504,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                        >> 0x14U))));
        tracep->chgBit(oldp+505,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                        >> 6U))));
        tracep->chgBit(oldp+506,((0U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                               >> 8U)))));
        tracep->chgBit(oldp+507,((1U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                               >> 8U)))));
        tracep->chgBit(oldp+508,((2U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                               >> 8U)))));
        tracep->chgBit(oldp+509,((3U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                               >> 8U)))));
        tracep->chgBit(oldp+510,((4U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                               >> 8U)))));
        tracep->chgBit(oldp+511,((5U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                               >> 8U)))));
        tracep->chgBit(oldp+512,((6U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                               >> 8U)))));
        tracep->chgBit(oldp+513,((0U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                               >> 8U)))));
        tracep->chgBit(oldp+514,((1U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                               >> 8U)))));
        tracep->chgBit(oldp+515,((2U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                               >> 8U)))));
        tracep->chgBit(oldp+516,((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                               >> 8U)))));
        tracep->chgWData(oldp+517,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg),263);
        tracep->chgQData(oldp+526,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata),64);
        tracep->chgCData(oldp+528,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask),8);
        tracep->chgCData(oldp+529,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask),8);
        tracep->chgCData(oldp+530,((7U & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])),3);
        tracep->chgSData(oldp+531,((vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                    >> 0x14U)),12);
        tracep->chgQData(oldp+532,((((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0U])))),64);
        tracep->chgCData(oldp+534,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpp),2);
        tracep->chgBit(oldp+535,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpie));
        tracep->chgBit(oldp+536,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mie));
        tracep->chgBit(oldp+537,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__wb_flush));
        tracep->chgCData(oldp+538,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                             >> 0xfU))),5);
        tracep->chgBit(oldp+539,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                        >> 0xcU))));
        tracep->chgBit(oldp+540,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                        >> 0xbU))));
        tracep->chgBit(oldp+541,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                        >> 0xaU))));
        tracep->chgBit(oldp+542,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                        >> 9U))));
        tracep->chgBit(oldp+543,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                        >> 8U))));
        tracep->chgBit(oldp+544,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                        >> 7U))));
        tracep->chgBit(oldp+545,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                        >> 6U))));
        tracep->chgQData(oldp+546,((((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U])) 
                                     << 0x2cU) | (((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[4U])) 
                                                   << 0xcU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U])) 
                                                     >> 0x14U)))),64);
        tracep->chgQData(oldp+548,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[0]),64);
        tracep->chgQData(oldp+550,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[1]),64);
        tracep->chgQData(oldp+552,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[2]),64);
        tracep->chgQData(oldp+554,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[3]),64);
        tracep->chgQData(oldp+556,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[4]),64);
        tracep->chgQData(oldp+558,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[5]),64);
        tracep->chgQData(oldp+560,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[6]),64);
        tracep->chgQData(oldp+562,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[7]),64);
        tracep->chgQData(oldp+564,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[8]),64);
        tracep->chgQData(oldp+566,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[9]),64);
        tracep->chgQData(oldp+568,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[10]),64);
        tracep->chgQData(oldp+570,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[11]),64);
        tracep->chgQData(oldp+572,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[12]),64);
        tracep->chgQData(oldp+574,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[13]),64);
        tracep->chgQData(oldp+576,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[14]),64);
        tracep->chgQData(oldp+578,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[15]),64);
        tracep->chgQData(oldp+580,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[16]),64);
        tracep->chgQData(oldp+582,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[17]),64);
        tracep->chgQData(oldp+584,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[18]),64);
        tracep->chgQData(oldp+586,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[19]),64);
        tracep->chgQData(oldp+588,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[20]),64);
        tracep->chgQData(oldp+590,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[21]),64);
        tracep->chgQData(oldp+592,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[22]),64);
        tracep->chgQData(oldp+594,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[23]),64);
        tracep->chgQData(oldp+596,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[24]),64);
        tracep->chgQData(oldp+598,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[25]),64);
        tracep->chgQData(oldp+600,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[26]),64);
        tracep->chgQData(oldp+602,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[27]),64);
        tracep->chgQData(oldp+604,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[28]),64);
        tracep->chgQData(oldp+606,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[29]),64);
        tracep->chgQData(oldp+608,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[30]),64);
        tracep->chgQData(oldp+610,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[31]),64);
        tracep->chgWData(oldp+612,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg),322);
        tracep->chgBit(oldp+623,((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+624,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_hs));
        tracep->chgBit(oldp+625,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__b_hs));
        tracep->chgBit(oldp+626,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_hs));
        tracep->chgBit(oldp+627,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_done));
    }
    tracep->chgBit(oldp+628,(vlSelf->clk));
    tracep->chgBit(oldp+629,(vlSelf->rst));
    tracep->chgIData(oldp+630,(vlSelf->if_pc),32);
    tracep->chgBit(oldp+631,(vlSelf->wb_valid));
    tracep->chgIData(oldp+632,(vlSelf->wb_pc),32);
    tracep->chgQData(oldp+633,(vlSelf->mepc),64);
    tracep->chgQData(oldp+635,(vlSelf->mtvec),64);
    tracep->chgQData(oldp+637,(vlSelf->mstatus),64);
    tracep->chgQData(oldp+639,(vlSelf->mcause),64);
    tracep->chgQData(oldp+641,(vlSelf->mie),64);
    tracep->chgQData(oldp+643,(vlSelf->mip),64);
    tracep->chgQData(oldp+645,(vlSelf->mscratch),64);
    tracep->chgQData(oldp+647,(vlSelf->mtval),64);
    tracep->chgBit(oldp+649,(vlSelf->wb_memwrite));
    tracep->chgQData(oldp+650,(vlSelf->wb_diff_addr),64);
    tracep->chgQData(oldp+652,(vlSelf->wb_diff_data),64);
    tracep->chgBit(oldp+654,(vlSelf->axi_aw_ready_i));
    tracep->chgBit(oldp+655,(vlSelf->axi_aw_valid_o));
    tracep->chgQData(oldp+656,(vlSelf->axi_aw_addr_o),64);
    tracep->chgCData(oldp+658,(vlSelf->axi_aw_prot_o),3);
    tracep->chgCData(oldp+659,(vlSelf->axi_aw_id_o),4);
    tracep->chgBit(oldp+660,(vlSelf->axi_aw_user_o));
    tracep->chgCData(oldp+661,(vlSelf->axi_aw_len_o),8);
    tracep->chgCData(oldp+662,(vlSelf->axi_aw_size_o),3);
    tracep->chgCData(oldp+663,(vlSelf->axi_aw_burst_o),2);
    tracep->chgBit(oldp+664,(vlSelf->axi_aw_lock_o));
    tracep->chgCData(oldp+665,(vlSelf->axi_aw_cache_o),4);
    tracep->chgCData(oldp+666,(vlSelf->axi_aw_qos_o),4);
    tracep->chgCData(oldp+667,(vlSelf->axi_aw_region_o),4);
    tracep->chgBit(oldp+668,(vlSelf->axi_w_ready_i));
    tracep->chgBit(oldp+669,(vlSelf->axi_w_valid_o));
    tracep->chgQData(oldp+670,(vlSelf->axi_w_data_o),64);
    tracep->chgCData(oldp+672,(vlSelf->axi_w_strb_o),8);
    tracep->chgBit(oldp+673,(vlSelf->axi_w_last_o));
    tracep->chgBit(oldp+674,(vlSelf->axi_w_user_o));
    tracep->chgBit(oldp+675,(vlSelf->axi_b_ready_o));
    tracep->chgBit(oldp+676,(vlSelf->axi_b_valid_i));
    tracep->chgCData(oldp+677,(vlSelf->axi_b_resp_i),2);
    tracep->chgCData(oldp+678,(vlSelf->axi_b_id_i),4);
    tracep->chgBit(oldp+679,(vlSelf->axi_b_user_i));
    tracep->chgBit(oldp+680,(vlSelf->axi_ar_ready_i));
    tracep->chgBit(oldp+681,(vlSelf->axi_ar_valid_o));
    tracep->chgQData(oldp+682,(vlSelf->axi_ar_addr_o),64);
    tracep->chgCData(oldp+684,(vlSelf->axi_ar_prot_o),3);
    tracep->chgCData(oldp+685,(vlSelf->axi_ar_id_o),4);
    tracep->chgBit(oldp+686,(vlSelf->axi_ar_user_o));
    tracep->chgCData(oldp+687,(vlSelf->axi_ar_len_o),8);
    tracep->chgCData(oldp+688,(vlSelf->axi_ar_size_o),3);
    tracep->chgCData(oldp+689,(vlSelf->axi_ar_burst_o),2);
    tracep->chgBit(oldp+690,(vlSelf->axi_ar_lock_o));
    tracep->chgCData(oldp+691,(vlSelf->axi_ar_cache_o),4);
    tracep->chgCData(oldp+692,(vlSelf->axi_ar_qos_o),4);
    tracep->chgCData(oldp+693,(vlSelf->axi_ar_region_o),4);
    tracep->chgBit(oldp+694,(vlSelf->axi_r_ready_o));
    tracep->chgBit(oldp+695,(vlSelf->axi_r_valid_i));
    tracep->chgCData(oldp+696,(vlSelf->axi_r_resp_i),2);
    tracep->chgQData(oldp+697,(vlSelf->axi_r_data_i),64);
    tracep->chgBit(oldp+699,(vlSelf->axi_r_last_i));
    tracep->chgCData(oldp+700,(vlSelf->axi_r_id_i),4);
    tracep->chgBit(oldp+701,(vlSelf->axi_r_user_i));
    tracep->chgBit(oldp+702,(((IData)(vlSelf->axi_aw_ready_i) 
                              & (IData)(vlSelf->axi_aw_valid_o))));
    tracep->chgBit(oldp+703,(((IData)(vlSelf->axi_ar_ready_i) 
                              & (IData)(vlSelf->axi_ar_valid_o))));
    tracep->chgBit(oldp+704,(((IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_hs) 
                              & (IData)(vlSelf->axi_w_last_o))));
    tracep->chgBit(oldp+705,(((IData)(vlSelf->ysyx_22040127_top__DOT__d_req_wen)
                               ? (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__b_hs)
                               : (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_done))));
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
