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
        tracep->chgCData(oldp+11,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0]),7);
        tracep->chgCData(oldp+12,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[1]),7);
        tracep->chgCData(oldp+13,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[2]),7);
        tracep->chgCData(oldp+14,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[3]),7);
        tracep->chgCData(oldp+15,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[4]),7);
        tracep->chgCData(oldp+16,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[5]),7);
        tracep->chgCData(oldp+17,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[6]),7);
        tracep->chgCData(oldp+18,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[7]),7);
        tracep->chgCData(oldp+19,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[8]),7);
        tracep->chgCData(oldp+20,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[9]),7);
        tracep->chgCData(oldp+21,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[10]),7);
        tracep->chgCData(oldp+22,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0]),3);
        tracep->chgCData(oldp+23,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[1]),3);
        tracep->chgCData(oldp+24,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[2]),3);
        tracep->chgCData(oldp+25,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[3]),3);
        tracep->chgCData(oldp+26,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[4]),3);
        tracep->chgCData(oldp+27,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[5]),3);
        tracep->chgCData(oldp+28,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[6]),3);
        tracep->chgCData(oldp+29,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[7]),3);
        tracep->chgCData(oldp+30,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[8]),3);
        tracep->chgCData(oldp+31,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[9]),3);
        tracep->chgCData(oldp+32,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[10]),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgQData(oldp+33,(vlSelf->ysyx_22040127_top__DOT__pcdata),64);
        tracep->chgIData(oldp+35,(vlSelf->ysyx_22040127_top__DOT__instruction),32);
        tracep->chgQData(oldp+36,(vlSelf->ysyx_22040127_top__DOT__alu_output),64);
        tracep->chgBit(oldp+38,((1U & ((((~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))) 
                                         | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))) 
                                        | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))) 
                                       | (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))))));
        tracep->chgCData(oldp+39,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                            >> 7U))),5);
        tracep->chgCData(oldp+40,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+41,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+42,(vlSelf->ysyx_22040127_top__DOT__inst_type),3);
        tracep->chgQData(oldp+43,(vlSelf->ysyx_22040127_top__DOT__imm),64);
        tracep->chgBit(oldp+45,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                                 | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))));
        tracep->chgBit(oldp+46,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                                 | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))));
        tracep->chgBit(oldp+47,((((6U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                                  & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                     >> 0x14U)) & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0xffefff80U 
                                                               & vlSelf->ysyx_22040127_top__DOT__instruction)))))));
        tracep->chgQData(oldp+48,(vlSelf->ysyx_22040127_top__DOT__alu_input1),64);
        tracep->chgQData(oldp+50,(vlSelf->ysyx_22040127_top__DOT__alu_input2),64);
        tracep->chgQData(oldp+52,(vlSelf->ysyx_22040127_top__DOT__reg_data1),64);
        tracep->chgQData(oldp+54,(vlSelf->ysyx_22040127_top__DOT__reg_data2),64);
        tracep->chgBit(oldp+56,(vlSelf->ysyx_22040127_top__DOT__jalr));
        tracep->chgBit(oldp+57,((1U & (~ (IData)((0U 
                                                  != 
                                                  (7U 
                                                   & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                      >> 0xcU))))))));
        tracep->chgBit(oldp+58,((1U & ((~ (IData)((0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                       >> 0xdU))))) 
                                       & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                          >> 0xcU)))));
        tracep->chgBit(oldp+59,((((~ (IData)((0U != 
                                              (7U & 
                                               (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                >> 0xcU))))) 
                                  & (vlSelf->ysyx_22040127_top__DOT__reg_data1 
                                     == vlSelf->ysyx_22040127_top__DOT__reg_data2)) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                     >> 0xdU))))) 
                                     & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                        >> 0xcU)) & 
                                    (vlSelf->ysyx_22040127_top__DOT__reg_data1 
                                     != vlSelf->ysyx_22040127_top__DOT__reg_data2)))));
        tracep->chgBit(oldp+60,((0U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                              >> 0xcU)))));
        tracep->chgBit(oldp+61,((1U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                              >> 0xcU)))));
        tracep->chgBit(oldp+62,((2U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                              >> 0xcU)))));
        tracep->chgBit(oldp+63,((3U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                              >> 0xcU)))));
        tracep->chgBit(oldp+64,((4U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                              >> 0xcU)))));
        tracep->chgBit(oldp+65,((5U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                              >> 0xcU)))));
        tracep->chgBit(oldp+66,((6U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                              >> 0xcU)))));
        tracep->chgBit(oldp+67,((0U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                              >> 0xcU)))));
        tracep->chgBit(oldp+68,((1U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                              >> 0xcU)))));
        tracep->chgBit(oldp+69,((2U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                              >> 0xcU)))));
        tracep->chgBit(oldp+70,((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                              >> 0xcU)))));
        tracep->chgQData(oldp+71,(vlSelf->ysyx_22040127_top__DOT__loaded_data),64);
        tracep->chgBit(oldp+73,((IData)((0U == (0xf8U 
                                                & vlSelf->ysyx_22040127_top__DOT__instruction)))));
        tracep->chgBit(oldp+74,((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))));
        tracep->chgCData(oldp+75,((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction)),7);
        tracep->chgCData(oldp+76,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out),3);
        tracep->chgBit(oldp+77,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit));
        tracep->chgQData(oldp+78,(((((- (QData)((IData)(
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
                                         - vlSelf->ysyx_22040127_top__DOT__alu_input2)))),64);
        tracep->chgQData(oldp+80,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__alu_op),64);
        tracep->chgQData(oldp+82,((vlSelf->ysyx_22040127_top__DOT__alu_input1 
                                   - vlSelf->ysyx_22040127_top__DOT__alu_input2)),64);
        tracep->chgCData(oldp+84,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec__in),6);
        tracep->chgQData(oldp+85,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data),64);
        tracep->chgQData(oldp+87,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__rdata),64);
        tracep->chgCData(oldp+89,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask),8);
        tracep->chgCData(oldp+90,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask),8);
        tracep->chgCData(oldp+91,((7U & (IData)(vlSelf->ysyx_22040127_top__DOT__alu_output))),3);
        tracep->chgQData(oldp+92,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[0]),64);
        tracep->chgQData(oldp+94,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[1]),64);
        tracep->chgQData(oldp+96,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[2]),64);
        tracep->chgQData(oldp+98,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[3]),64);
        tracep->chgQData(oldp+100,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[4]),64);
        tracep->chgQData(oldp+102,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[5]),64);
        tracep->chgQData(oldp+104,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[6]),64);
        tracep->chgQData(oldp+106,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[7]),64);
        tracep->chgQData(oldp+108,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[8]),64);
        tracep->chgQData(oldp+110,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[9]),64);
        tracep->chgQData(oldp+112,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[10]),64);
        tracep->chgQData(oldp+114,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[11]),64);
        tracep->chgQData(oldp+116,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[12]),64);
        tracep->chgQData(oldp+118,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[13]),64);
        tracep->chgQData(oldp+120,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[14]),64);
        tracep->chgQData(oldp+122,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[15]),64);
        tracep->chgQData(oldp+124,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[16]),64);
        tracep->chgQData(oldp+126,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[17]),64);
        tracep->chgQData(oldp+128,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[18]),64);
        tracep->chgQData(oldp+130,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[19]),64);
        tracep->chgQData(oldp+132,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[20]),64);
        tracep->chgQData(oldp+134,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[21]),64);
        tracep->chgQData(oldp+136,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[22]),64);
        tracep->chgQData(oldp+138,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[23]),64);
        tracep->chgQData(oldp+140,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[24]),64);
        tracep->chgQData(oldp+142,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[25]),64);
        tracep->chgQData(oldp+144,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[26]),64);
        tracep->chgQData(oldp+146,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[27]),64);
        tracep->chgQData(oldp+148,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[28]),64);
        tracep->chgQData(oldp+150,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[29]),64);
        tracep->chgQData(oldp+152,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[30]),64);
        tracep->chgQData(oldp+154,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[31]),64);
        tracep->chgBit(oldp+156,((0U != (0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                  >> 7U)))));
    }
    tracep->chgBit(oldp+157,(vlSelf->clk));
    tracep->chgBit(oldp+158,(vlSelf->rst));
    tracep->chgIData(oldp+159,(vlSelf->pc),32);
    tracep->chgQData(oldp+160,(((IData)(vlSelf->ysyx_22040127_top__DOT__jalr)
                                 ? (QData)((IData)(
                                                   ((IData)(4U) 
                                                    + vlSelf->pc)))
                                 : ((IData)((0U == 
                                             (0xf8U 
                                              & vlSelf->ysyx_22040127_top__DOT__instruction)))
                                     ? vlSelf->ysyx_22040127_top__DOT__loaded_data
                                     : vlSelf->ysyx_22040127_top__DOT__alu_output))),64);
    tracep->chgIData(oldp+162,(((((~ (IData)((0U != 
                                              (7U & 
                                               (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                >> 0xcU))))) 
                                  & (vlSelf->ysyx_22040127_top__DOT__reg_data1 
                                     == vlSelf->ysyx_22040127_top__DOT__reg_data2)) 
                                 | (((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                     >> 0xdU))))) 
                                     & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                        >> 0xcU)) & 
                                    (vlSelf->ysyx_22040127_top__DOT__reg_data1 
                                     != vlSelf->ysyx_22040127_top__DOT__reg_data2)))
                                 ? (vlSelf->pc + (IData)(vlSelf->ysyx_22040127_top__DOT__imm))
                                 : ((IData)(4U) + vlSelf->pc))),32);
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
}
