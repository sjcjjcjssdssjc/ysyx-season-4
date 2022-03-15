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
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+78,"instruction", false,-1, 31,0);
    tracep->declBus(c+79,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_22040127_top ");
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+78,"instruction", false,-1, 31,0);
    tracep->declBus(c+79,"pc", false,-1, 31,0);
    tracep->declQuad(c+80,"reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+65,"alu_output", false,-1, 63,0);
    tracep->declBit(c+67,"reg_wen", false,-1);
    tracep->declBus(c+82,"rd", false,-1, 4,0);
    tracep->declBus(c+83,"rs1", false,-1, 4,0);
    tracep->declBus(c+84,"rs2", false,-1, 4,0);
    tracep->declBus(c+68,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+69,"imm", false,-1, 63,0);
    tracep->declBit(c+71,"imm_src0", false,-1);
    tracep->declBit(c+72,"imm_src1", false,-1);
    tracep->declBit(c+85,"ebreak", false,-1);
    tracep->declQuad(c+73,"src0", false,-1, 63,0);
    tracep->declQuad(c+86,"src1", false,-1, 63,0);
    tracep->declQuad(c+88,"reg_data0", false,-1, 63,0);
    tracep->declQuad(c+90,"reg_data1", false,-1, 63,0);
    tracep->declBit(c+75,"jalr", false,-1);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+78,"instruction", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBit(c+67,"r_wen", false,-1);
    tracep->declBus(c+82,"rd", false,-1, 4,0);
    tracep->declBus(c+83,"rs1", false,-1, 4,0);
    tracep->declBus(c+84,"rs2", false,-1, 4,0);
    tracep->declBus(c+68,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+69,"imm", false,-1, 63,0);
    tracep->declBus(c+93,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+94,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+95,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+96,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+97,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+98,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+99,"TYPE_N", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe ");
    tracep->declBus(c+78,"instruction", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+77,"rst", false,-1);
    tracep->declBus(c+79,"pc", false,-1, 31,0);
    tracep->declQuad(c+73,"src0", false,-1, 63,0);
    tracep->declQuad(c+86,"src1", false,-1, 63,0);
    tracep->declQuad(c+69,"imm", false,-1, 63,0);
    tracep->declBus(c+68,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+65,"alu_output", false,-1, 63,0);
    tracep->declBus(c+100,"TYPE_I", false,-1, 31,0);
    tracep->declBus(c+101,"TYPE_U", false,-1, 31,0);
    tracep->declBus(c+102,"TYPE_S", false,-1, 31,0);
    tracep->declBus(c+103,"TYPE_J", false,-1, 31,0);
    tracep->declBus(c+104,"TYPE_R", false,-1, 31,0);
    tracep->declBus(c+105,"TYPE_B", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs ");
    tracep->declBus(c+105,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+106,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+67,"wen", false,-1);
    tracep->declQuad(c+80,"wdata", false,-1, 63,0);
    tracep->declBus(c+82,"waddr", false,-1, 4,0);
    tracep->declBus(c+83,"raddr1", false,-1, 4,0);
    tracep->declBus(c+84,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+88,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+90,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+92,"non_zerow", false,-1);
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
    tracep->fullQData(oldp+1,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[0]),64);
    tracep->fullQData(oldp+3,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[1]),64);
    tracep->fullQData(oldp+5,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[2]),64);
    tracep->fullQData(oldp+7,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[3]),64);
    tracep->fullQData(oldp+9,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[4]),64);
    tracep->fullQData(oldp+11,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[5]),64);
    tracep->fullQData(oldp+13,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[6]),64);
    tracep->fullQData(oldp+15,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[7]),64);
    tracep->fullQData(oldp+17,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[8]),64);
    tracep->fullQData(oldp+19,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[9]),64);
    tracep->fullQData(oldp+21,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[10]),64);
    tracep->fullQData(oldp+23,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[11]),64);
    tracep->fullQData(oldp+25,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[12]),64);
    tracep->fullQData(oldp+27,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[13]),64);
    tracep->fullQData(oldp+29,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[14]),64);
    tracep->fullQData(oldp+31,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[15]),64);
    tracep->fullQData(oldp+33,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[16]),64);
    tracep->fullQData(oldp+35,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[17]),64);
    tracep->fullQData(oldp+37,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[18]),64);
    tracep->fullQData(oldp+39,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[19]),64);
    tracep->fullQData(oldp+41,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[20]),64);
    tracep->fullQData(oldp+43,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[21]),64);
    tracep->fullQData(oldp+45,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[22]),64);
    tracep->fullQData(oldp+47,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[23]),64);
    tracep->fullQData(oldp+49,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[24]),64);
    tracep->fullQData(oldp+51,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[25]),64);
    tracep->fullQData(oldp+53,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[26]),64);
    tracep->fullQData(oldp+55,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[27]),64);
    tracep->fullQData(oldp+57,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[28]),64);
    tracep->fullQData(oldp+59,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[29]),64);
    tracep->fullQData(oldp+61,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[30]),64);
    tracep->fullQData(oldp+63,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[31]),64);
    tracep->fullQData(oldp+65,(vlSelf->ysyx_22040127_top__DOT__alu_output),64);
    tracep->fullBit(oldp+67,((1U & (((~ (IData)((0U 
                                                 != (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))) 
                                     | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))) 
                                    | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))))));
    tracep->fullCData(oldp+68,(vlSelf->ysyx_22040127_top__DOT__inst_type),3);
    tracep->fullQData(oldp+69,(vlSelf->ysyx_22040127_top__DOT__imm),64);
    tracep->fullBit(oldp+71,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                              | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))));
    tracep->fullBit(oldp+72,((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))));
    tracep->fullQData(oldp+73,(vlSelf->ysyx_22040127_top__DOT__src0),64);
    tracep->fullBit(oldp+75,(vlSelf->ysyx_22040127_top__DOT__jalr));
    tracep->fullBit(oldp+76,(vlSelf->clk));
    tracep->fullBit(oldp+77,(vlSelf->rst));
    tracep->fullIData(oldp+78,(vlSelf->instruction),32);
    tracep->fullIData(oldp+79,(vlSelf->pc),32);
    tracep->fullQData(oldp+80,(((IData)(vlSelf->ysyx_22040127_top__DOT__jalr)
                                 ? (QData)((IData)(
                                                   ((IData)(4U) 
                                                    + vlSelf->pc)))
                                 : vlSelf->ysyx_22040127_top__DOT__alu_output)),64);
    tracep->fullCData(oldp+82,((0x1fU & (vlSelf->instruction 
                                         >> 7U))),5);
    tracep->fullCData(oldp+83,((0x1fU & (vlSelf->instruction 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+84,((0x1fU & (vlSelf->instruction 
                                         >> 0x14U))),5);
    tracep->fullBit(oldp+85,((((6U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                               & (vlSelf->instruction 
                                  >> 0x14U)) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0xffefff80U 
                                                            & vlSelf->instruction)))))));
    tracep->fullQData(oldp+86,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))
                                 ? vlSelf->ysyx_22040127_top__DOT__imm
                                 : vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf
                                [(0x1fU & (vlSelf->instruction 
                                           >> 0x14U))])),64);
    tracep->fullQData(oldp+88,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf
                               [(0x1fU & (vlSelf->instruction 
                                          >> 0xfU))]),64);
    tracep->fullQData(oldp+90,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf
                               [(0x1fU & (vlSelf->instruction 
                                          >> 0x14U))]),64);
    tracep->fullBit(oldp+92,((0U != (0x1fU & (vlSelf->instruction 
                                              >> 7U)))));
    tracep->fullCData(oldp+93,(0U),3);
    tracep->fullCData(oldp+94,(1U),3);
    tracep->fullCData(oldp+95,(2U),3);
    tracep->fullCData(oldp+96,(3U),3);
    tracep->fullCData(oldp+97,(4U),3);
    tracep->fullCData(oldp+98,(5U),3);
    tracep->fullCData(oldp+99,(6U),3);
    tracep->fullIData(oldp+100,(0U),32);
    tracep->fullIData(oldp+101,(1U),32);
    tracep->fullIData(oldp+102,(2U),32);
    tracep->fullIData(oldp+103,(3U),32);
    tracep->fullIData(oldp+104,(4U),32);
    tracep->fullIData(oldp+105,(5U),32);
    tracep->fullIData(oldp+106,(0x40U),32);
}
