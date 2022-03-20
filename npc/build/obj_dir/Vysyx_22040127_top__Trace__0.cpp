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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgQData(oldp+0,(vlSelf->ysyx_22040127_top__DOT__pcdata),64);
        tracep->chgIData(oldp+2,(vlSelf->ysyx_22040127_top__DOT__instruction),32);
        tracep->chgQData(oldp+3,(vlSelf->ysyx_22040127_top__DOT__alu_output),64);
        tracep->chgBit(oldp+5,((1U & (((~ (IData)((0U 
                                                   != (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))) 
                                       | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))) 
                                      | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))))));
        tracep->chgCData(oldp+6,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 7U))),5);
        tracep->chgCData(oldp+7,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xfU))),5);
        tracep->chgCData(oldp+8,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0x14U))),5);
        tracep->chgCData(oldp+9,(vlSelf->ysyx_22040127_top__DOT__inst_type),3);
        tracep->chgQData(oldp+10,(vlSelf->ysyx_22040127_top__DOT__imm),64);
        tracep->chgBit(oldp+12,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                                 | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))));
        tracep->chgBit(oldp+13,((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))));
        tracep->chgBit(oldp+14,((((6U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                                  & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                     >> 0x14U)) & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0xffefff80U 
                                                               & vlSelf->ysyx_22040127_top__DOT__instruction)))))));
        tracep->chgQData(oldp+15,(vlSelf->ysyx_22040127_top__DOT__src0),64);
        tracep->chgQData(oldp+17,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                    ? vlSelf->ysyx_22040127_top__DOT__imm
                                    : vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf
                                   [(0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                              >> 0x14U))])),64);
        tracep->chgQData(oldp+19,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf
                                  [(0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                             >> 0xfU))]),64);
        tracep->chgQData(oldp+21,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf
                                  [(0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                             >> 0x14U))]),64);
        tracep->chgBit(oldp+23,(vlSelf->ysyx_22040127_top__DOT__jalr));
        tracep->chgQData(oldp+24,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[0]),64);
        tracep->chgQData(oldp+26,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[1]),64);
        tracep->chgQData(oldp+28,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[2]),64);
        tracep->chgQData(oldp+30,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[3]),64);
        tracep->chgQData(oldp+32,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[4]),64);
        tracep->chgQData(oldp+34,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[5]),64);
        tracep->chgQData(oldp+36,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[6]),64);
        tracep->chgQData(oldp+38,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[7]),64);
        tracep->chgQData(oldp+40,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[8]),64);
        tracep->chgQData(oldp+42,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[9]),64);
        tracep->chgQData(oldp+44,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[10]),64);
        tracep->chgQData(oldp+46,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[11]),64);
        tracep->chgQData(oldp+48,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[12]),64);
        tracep->chgQData(oldp+50,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[13]),64);
        tracep->chgQData(oldp+52,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[14]),64);
        tracep->chgQData(oldp+54,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[15]),64);
        tracep->chgQData(oldp+56,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[16]),64);
        tracep->chgQData(oldp+58,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[17]),64);
        tracep->chgQData(oldp+60,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[18]),64);
        tracep->chgQData(oldp+62,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[19]),64);
        tracep->chgQData(oldp+64,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[20]),64);
        tracep->chgQData(oldp+66,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[21]),64);
        tracep->chgQData(oldp+68,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[22]),64);
        tracep->chgQData(oldp+70,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[23]),64);
        tracep->chgQData(oldp+72,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[24]),64);
        tracep->chgQData(oldp+74,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[25]),64);
        tracep->chgQData(oldp+76,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[26]),64);
        tracep->chgQData(oldp+78,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[27]),64);
        tracep->chgQData(oldp+80,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[28]),64);
        tracep->chgQData(oldp+82,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[29]),64);
        tracep->chgQData(oldp+84,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[30]),64);
        tracep->chgQData(oldp+86,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[31]),64);
        tracep->chgBit(oldp+88,((0U != (0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                 >> 7U)))));
    }
    tracep->chgBit(oldp+89,(vlSelf->clk));
    tracep->chgBit(oldp+90,(vlSelf->rst));
    tracep->chgIData(oldp+91,(vlSelf->pc),32);
    tracep->chgQData(oldp+92,(((IData)(vlSelf->ysyx_22040127_top__DOT__jalr)
                                ? (QData)((IData)(((IData)(4U) 
                                                   + vlSelf->pc)))
                                : vlSelf->ysyx_22040127_top__DOT__alu_output)),64);
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
