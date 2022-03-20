// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040127_top__Syms.h"


VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_init_sub__TOP__0(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBus(c+92,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_22040127_top ");
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBus(c+92,"pc", false,-1, 31,0);
    tracep->declQuad(c+1,"pcdata", false,-1, 63,0);
    tracep->declBus(c+3,"instruction", false,-1, 31,0);
    tracep->declQuad(c+93,"reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+4,"alu_output", false,-1, 63,0);
    tracep->declBit(c+6,"reg_wen", false,-1);
    tracep->declBus(c+7,"rd", false,-1, 4,0);
    tracep->declBus(c+8,"rs1", false,-1, 4,0);
    tracep->declBus(c+9,"rs2", false,-1, 4,0);
    tracep->declBus(c+10,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+11,"imm", false,-1, 63,0);
    tracep->declBit(c+13,"imm_src0", false,-1);
    tracep->declBit(c+14,"imm_src1", false,-1);
    tracep->declBit(c+15,"ebreak", false,-1);
    tracep->declQuad(c+16,"src0", false,-1, 63,0);
    tracep->declQuad(c+18,"src1", false,-1, 63,0);
    tracep->declQuad(c+20,"reg_data0", false,-1, 63,0);
    tracep->declQuad(c+22,"reg_data1", false,-1, 63,0);
    tracep->declBit(c+24,"jalr", false,-1);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+3,"instruction", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBit(c+6,"r_wen", false,-1);
    tracep->declBus(c+7,"rd", false,-1, 4,0);
    tracep->declBus(c+8,"rs1", false,-1, 4,0);
    tracep->declBus(c+9,"rs2", false,-1, 4,0);
    tracep->declBus(c+10,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+11,"imm", false,-1, 63,0);
    tracep->declBus(c+95,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+96,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+97,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+98,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+99,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+100,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+101,"TYPE_N", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe ");
    tracep->declBus(c+3,"instruction", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBus(c+92,"pc", false,-1, 31,0);
    tracep->declQuad(c+16,"src0", false,-1, 63,0);
    tracep->declQuad(c+18,"src1", false,-1, 63,0);
    tracep->declQuad(c+11,"imm", false,-1, 63,0);
    tracep->declBus(c+10,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+4,"alu_output", false,-1, 63,0);
    tracep->declBus(c+102,"TYPE_I", false,-1, 31,0);
    tracep->declBus(c+103,"TYPE_U", false,-1, 31,0);
    tracep->declBus(c+104,"TYPE_S", false,-1, 31,0);
    tracep->declBus(c+105,"TYPE_J", false,-1, 31,0);
    tracep->declBus(c+106,"TYPE_R", false,-1, 31,0);
    tracep->declBus(c+107,"TYPE_B", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs ");
    tracep->declBus(c+107,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+108,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->declQuad(c+93,"wdata", false,-1, 63,0);
    tracep->declBus(c+7,"waddr", false,-1, 4,0);
    tracep->declBus(c+8,"raddr1", false,-1, 4,0);
    tracep->declBus(c+9,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+20,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+22,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+25+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+89,"non_zerow", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_init_top(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_22040127_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22040127_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22040127_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_register(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_22040127_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_22040127_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_22040127_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_full_sub_0(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_22040127_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040127_top___024root*>(voidSelf);
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_22040127_top___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_full_sub_0(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullQData(oldp+1,(vlSelf->ysyx_22040127_top__DOT__pcdata),64);
    tracep->fullIData(oldp+3,(vlSelf->ysyx_22040127_top__DOT__instruction),32);
    tracep->fullQData(oldp+4,(vlSelf->ysyx_22040127_top__DOT__alu_output),64);
    tracep->fullBit(oldp+6,((1U & (((~ (IData)((0U 
                                                != (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))) 
                                    | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))) 
                                   | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))))));
    tracep->fullCData(oldp+7,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                        >> 7U))),5);
    tracep->fullCData(oldp+8,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                        >> 0xfU))),5);
    tracep->fullCData(oldp+9,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                        >> 0x14U))),5);
    tracep->fullCData(oldp+10,(vlSelf->ysyx_22040127_top__DOT__inst_type),3);
    tracep->fullQData(oldp+11,(vlSelf->ysyx_22040127_top__DOT__imm),64);
    tracep->fullBit(oldp+13,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                              | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))));
    tracep->fullBit(oldp+14,((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))));
    tracep->fullBit(oldp+15,((((6U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                               & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                  >> 0x14U)) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0xffefff80U 
                                                            & vlSelf->ysyx_22040127_top__DOT__instruction)))))));
    tracep->fullQData(oldp+16,(vlSelf->ysyx_22040127_top__DOT__src0),64);
    tracep->fullQData(oldp+18,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                 ? vlSelf->ysyx_22040127_top__DOT__imm
                                 : vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf
                                [(0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0x14U))])),64);
    tracep->fullQData(oldp+20,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf
                               [(0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                          >> 0xfU))]),64);
    tracep->fullQData(oldp+22,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf
                               [(0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                          >> 0x14U))]),64);
    tracep->fullBit(oldp+24,(vlSelf->ysyx_22040127_top__DOT__jalr));
    tracep->fullQData(oldp+25,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[0]),64);
    tracep->fullQData(oldp+27,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[1]),64);
    tracep->fullQData(oldp+29,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[2]),64);
    tracep->fullQData(oldp+31,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[3]),64);
    tracep->fullQData(oldp+33,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[4]),64);
    tracep->fullQData(oldp+35,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[5]),64);
    tracep->fullQData(oldp+37,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[6]),64);
    tracep->fullQData(oldp+39,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[7]),64);
    tracep->fullQData(oldp+41,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[8]),64);
    tracep->fullQData(oldp+43,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[9]),64);
    tracep->fullQData(oldp+45,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[10]),64);
    tracep->fullQData(oldp+47,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[11]),64);
    tracep->fullQData(oldp+49,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[12]),64);
    tracep->fullQData(oldp+51,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[13]),64);
    tracep->fullQData(oldp+53,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[14]),64);
    tracep->fullQData(oldp+55,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[15]),64);
    tracep->fullQData(oldp+57,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[16]),64);
    tracep->fullQData(oldp+59,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[17]),64);
    tracep->fullQData(oldp+61,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[18]),64);
    tracep->fullQData(oldp+63,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[19]),64);
    tracep->fullQData(oldp+65,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[20]),64);
    tracep->fullQData(oldp+67,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[21]),64);
    tracep->fullQData(oldp+69,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[22]),64);
    tracep->fullQData(oldp+71,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[23]),64);
    tracep->fullQData(oldp+73,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[24]),64);
    tracep->fullQData(oldp+75,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[25]),64);
    tracep->fullQData(oldp+77,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[26]),64);
    tracep->fullQData(oldp+79,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[27]),64);
    tracep->fullQData(oldp+81,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[28]),64);
    tracep->fullQData(oldp+83,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[29]),64);
    tracep->fullQData(oldp+85,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[30]),64);
    tracep->fullQData(oldp+87,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[31]),64);
    tracep->fullBit(oldp+89,((0U != (0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                              >> 7U)))));
    tracep->fullBit(oldp+90,(vlSelf->clk));
    tracep->fullBit(oldp+91,(vlSelf->rst));
    tracep->fullIData(oldp+92,(vlSelf->pc),32);
    tracep->fullQData(oldp+93,(((IData)(vlSelf->ysyx_22040127_top__DOT__jalr)
                                 ? (QData)((IData)(
                                                   ((IData)(4U) 
                                                    + vlSelf->pc)))
                                 : vlSelf->ysyx_22040127_top__DOT__alu_output)),64);
    tracep->fullCData(oldp+95,(0U),3);
    tracep->fullCData(oldp+96,(1U),3);
    tracep->fullCData(oldp+97,(2U),3);
    tracep->fullCData(oldp+98,(3U),3);
    tracep->fullCData(oldp+99,(4U),3);
    tracep->fullCData(oldp+100,(5U),3);
    tracep->fullCData(oldp+101,(6U),3);
    tracep->fullIData(oldp+102,(0U),32);
    tracep->fullIData(oldp+103,(1U),32);
    tracep->fullIData(oldp+104,(2U),32);
    tracep->fullIData(oldp+105,(3U),32);
    tracep->fullIData(oldp+106,(4U),32);
    tracep->fullIData(oldp+107,(5U),32);
    tracep->fullIData(oldp+108,(0x40U),32);
}
