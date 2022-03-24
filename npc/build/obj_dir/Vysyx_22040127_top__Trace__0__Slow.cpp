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
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+197,"rst", false,-1);
    tracep->declBus(c+198,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_22040127_top ");
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+197,"rst", false,-1);
    tracep->declBus(c+198,"pc", false,-1, 31,0);
    tracep->declQuad(c+37,"pcdata", false,-1, 63,0);
    tracep->declBus(c+39,"instruction", false,-1, 31,0);
    tracep->declQuad(c+199,"reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+40,"alu_output", false,-1, 63,0);
    tracep->declBus(c+201,"branch_result", false,-1, 31,0);
    tracep->declBit(c+42,"reg_wen", false,-1);
    tracep->declBus(c+43,"rd", false,-1, 4,0);
    tracep->declBus(c+44,"rs1", false,-1, 4,0);
    tracep->declBus(c+45,"rs2", false,-1, 4,0);
    tracep->declBus(c+46,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+47,"imm", false,-1, 63,0);
    tracep->declBit(c+49,"imm_src1", false,-1);
    tracep->declBit(c+50,"imm_src2", false,-1);
    tracep->declBit(c+51,"ebreak", false,-1);
    tracep->declQuad(c+52,"alu_input1", false,-1, 63,0);
    tracep->declQuad(c+54,"alu_input2", false,-1, 63,0);
    tracep->declQuad(c+56,"reg_data1", false,-1, 63,0);
    tracep->declQuad(c+58,"reg_data2", false,-1, 63,0);
    tracep->declBit(c+60,"jalr", false,-1);
    tracep->declBit(c+61,"beq", false,-1);
    tracep->declBit(c+62,"bne", false,-1);
    tracep->declBit(c+63,"blt", false,-1);
    tracep->declBit(c+64,"bltu", false,-1);
    tracep->declBit(c+65,"bge", false,-1);
    tracep->declBit(c+66,"bgeu", false,-1);
    tracep->declBit(c+67,"branch_taken", false,-1);
    tracep->declBit(c+68,"lb", false,-1);
    tracep->declBit(c+69,"lh", false,-1);
    tracep->declBit(c+70,"lw", false,-1);
    tracep->declBit(c+71,"ld", false,-1);
    tracep->declBit(c+63,"lbu", false,-1);
    tracep->declBit(c+65,"lhu", false,-1);
    tracep->declBit(c+64,"lwu", false,-1);
    tracep->declBit(c+72,"sb", false,-1);
    tracep->declBit(c+73,"sh", false,-1);
    tracep->declBit(c+74,"sw", false,-1);
    tracep->declBit(c+75,"sd", false,-1);
    tracep->declQuad(c+58,"mem_wdata", false,-1, 63,0);
    tracep->declQuad(c+40,"mem_waddr", false,-1, 63,0);
    tracep->declQuad(c+40,"mem_raddr", false,-1, 63,0);
    tracep->declQuad(c+76,"loaded_data", false,-1, 63,0);
    tracep->declBit(c+78,"memread", false,-1);
    tracep->declBit(c+79,"memwrite", false,-1);
    tracep->declBus(c+202,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+203,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+204,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+205,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+206,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+207,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+208,"TYPE_N", false,-1, 2,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+39,"instruction", false,-1, 31,0);
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+197,"rst", false,-1);
    tracep->declBit(c+42,"reg_wen", false,-1);
    tracep->declBit(c+78,"memread", false,-1);
    tracep->declBus(c+43,"rd", false,-1, 4,0);
    tracep->declBus(c+44,"rs1", false,-1, 4,0);
    tracep->declBus(c+45,"rs2", false,-1, 4,0);
    tracep->declBus(c+46,"inst_type", false,-1, 2,0);
    tracep->declQuad(c+47,"imm", false,-1, 63,0);
    tracep->declBus(c+202,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+203,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+204,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+205,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+206,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+207,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+208,"TYPE_N", false,-1, 2,0);
    tracep->pushNamePrefix("inst_mux ");
    tracep->declBus(c+209,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+210,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+211,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+46,"out", false,-1, 2,0);
    tracep->declBus(c+80,"key", false,-1, 6,0);
    tracep->declBus(c+202,"default_out", false,-1, 2,0);
    tracep->declArray(c+212,"lut", false,-1, 119,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+209,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+210,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+211,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+216,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+46,"out", false,-1, 2,0);
    tracep->declBus(c+80,"key", false,-1, 6,0);
    tracep->declBus(c+202,"default_out", false,-1, 2,0);
    tracep->declArray(c+212,"lut", false,-1, 119,0);
    tracep->declBus(c+217,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+13+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+25+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+81,"lut_out", false,-1, 2,0);
    tracep->declBit(c+82,"hit", false,-1);
    tracep->declBus(c+218,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("exe ");
    tracep->declBus(c+39,"instruction", false,-1, 31,0);
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+197,"rst", false,-1);
    tracep->declBus(c+198,"pc", false,-1, 31,0);
    tracep->declQuad(c+52,"src1", false,-1, 63,0);
    tracep->declQuad(c+54,"src2", false,-1, 63,0);
    tracep->declQuad(c+47,"imm", false,-1, 63,0);
    tracep->declBus(c+46,"inst_type", false,-1, 2,0);
    tracep->declBit(c+78,"memread", false,-1);
    tracep->declQuad(c+40,"alu_output", false,-1, 63,0);
    tracep->declQuad(c+83,"rtype_calc_result", false,-1, 63,0);
    tracep->declQuad(c+85,"itype_calc_result", false,-1, 63,0);
    tracep->declQuad(c+87,"rtype_alu_op", false,-1, 63,0);
    tracep->declBus(c+89,"itype_alu_op", false,-1, 31,0);
    tracep->declQuad(c+90,"sub", false,-1, 63,0);
    tracep->declBus(c+92,"addw_result", false,-1, 31,0);
    tracep->declBus(c+93,"subw_result", false,-1, 31,0);
    tracep->declBus(c+94,"mulw_result", false,-1, 31,0);
    tracep->declBus(c+95,"divw_result", false,-1, 31,0);
    tracep->declBus(c+96,"divuw_result", false,-1, 31,0);
    tracep->declBus(c+97,"remw_result", false,-1, 31,0);
    tracep->declBus(c+98,"remuw_result", false,-1, 31,0);
    tracep->declQuad(c+99,"sext_addw_result", false,-1, 63,0);
    tracep->declQuad(c+101,"sext_subw_result", false,-1, 63,0);
    tracep->declQuad(c+103,"sext_mulw_result", false,-1, 63,0);
    tracep->declQuad(c+105,"sext_divw_result", false,-1, 63,0);
    tracep->declQuad(c+107,"sext_divuw_result", false,-1, 63,0);
    tracep->declQuad(c+109,"sext_remw_result", false,-1, 63,0);
    tracep->declQuad(c+111,"sext_remuw_result", false,-1, 63,0);
    tracep->declBus(c+113,"src1_sraw", false,-1, 31,0);
    tracep->declBus(c+114,"src1_sllw", false,-1, 31,0);
    tracep->declBus(c+115,"src1_srlw", false,-1, 31,0);
    tracep->declQuad(c+116,"sext_src1_sraw", false,-1, 63,0);
    tracep->declQuad(c+118,"sext_src1_sllw", false,-1, 63,0);
    tracep->declQuad(c+120,"sext_src1_srlw", false,-1, 63,0);
    tracep->declBus(c+202,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+203,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+204,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+205,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+206,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+207,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+208,"TYPE_N", false,-1, 2,0);
    tracep->declBus(c+219,"op_add", false,-1, 5,0);
    tracep->declBus(c+220,"op_mul", false,-1, 5,0);
    tracep->declBus(c+221,"op_sub", false,-1, 5,0);
    tracep->declBus(c+222,"op_addw", false,-1, 5,0);
    tracep->declBus(c+223,"op_or", false,-1, 5,0);
    tracep->declBus(c+224,"op_xor", false,-1, 5,0);
    tracep->declBus(c+225,"op_sll", false,-1, 5,0);
    tracep->declBus(c+226,"op_slt", false,-1, 5,0);
    tracep->declBus(c+227,"op_sltu", false,-1, 5,0);
    tracep->declBus(c+228,"op_and", false,-1, 5,0);
    tracep->declBus(c+229,"op_div", false,-1, 5,0);
    tracep->declBus(c+230,"op_divu", false,-1, 5,0);
    tracep->declBus(c+231,"op_remu", false,-1, 5,0);
    tracep->declBus(c+232,"op_rem", false,-1, 5,0);
    tracep->declBus(c+233,"op_subw", false,-1, 5,0);
    tracep->declBus(c+234,"op_mulw", false,-1, 5,0);
    tracep->declBus(c+235,"op_sllw", false,-1, 5,0);
    tracep->declBus(c+236,"op_divw", false,-1, 5,0);
    tracep->declBus(c+237,"op_srlw", false,-1, 5,0);
    tracep->declBus(c+238,"op_sraw", false,-1, 5,0);
    tracep->declBus(c+239,"op_divuw", false,-1, 5,0);
    tracep->declBus(c+240,"op_remw", false,-1, 5,0);
    tracep->declBus(c+241,"op_remuw", false,-1, 5,0);
    tracep->declBus(c+242,"op_addi", false,-1, 4,0);
    tracep->declBus(c+243,"op_andi", false,-1, 4,0);
    tracep->declBus(c+244,"op_ori", false,-1, 4,0);
    tracep->declBus(c+245,"op_xori", false,-1, 4,0);
    tracep->declBus(c+246,"op_sltiu", false,-1, 4,0);
    tracep->declBus(c+247,"op_sri", false,-1, 4,0);
    tracep->declBus(c+248,"op_slli", false,-1, 4,0);
    tracep->declBus(c+249,"op_addiw", false,-1, 4,0);
    tracep->declBus(c+250,"op_slliw", false,-1, 4,0);
    tracep->declBus(c+251,"op_sriw", false,-1, 4,0);
    tracep->pushNamePrefix("dec_itype ");
    tracep->declBus(c+122,"in", false,-1, 4,0);
    tracep->declBus(c+89,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec_rtype ");
    tracep->declBus(c+123,"in", false,-1, 5,0);
    tracep->declQuad(c+87,"out", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+79,"memwrite", false,-1);
    tracep->declQuad(c+58,"wdata", false,-1, 63,0);
    tracep->declQuad(c+40,"waddr", false,-1, 63,0);
    tracep->declQuad(c+40,"raddr", false,-1, 63,0);
    tracep->declBit(c+68,"lb", false,-1);
    tracep->declBit(c+69,"lh", false,-1);
    tracep->declBit(c+70,"lw", false,-1);
    tracep->declBit(c+71,"ld", false,-1);
    tracep->declBit(c+63,"lbu", false,-1);
    tracep->declBit(c+65,"lhu", false,-1);
    tracep->declBit(c+64,"lwu", false,-1);
    tracep->declQuad(c+76,"loaded_data", false,-1, 63,0);
    tracep->declBit(c+72,"sb", false,-1);
    tracep->declBit(c+73,"sh", false,-1);
    tracep->declBit(c+74,"sw", false,-1);
    tracep->declBit(c+75,"sd", false,-1);
    tracep->declQuad(c+124,"doubly_aligned_data", false,-1, 63,0);
    tracep->declQuad(c+126,"rdata", false,-1, 63,0);
    tracep->declBus(c+128,"addr_lowmask", false,-1, 7,0);
    tracep->declBus(c+129,"wmask", false,-1, 7,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+130,"in", false,-1, 2,0);
    tracep->declBus(c+128,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regs ");
    tracep->declBus(c+252,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+253,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+42,"wen", false,-1);
    tracep->declQuad(c+199,"wdata", false,-1, 63,0);
    tracep->declBus(c+43,"waddr", false,-1, 4,0);
    tracep->declBus(c+44,"raddr1", false,-1, 4,0);
    tracep->declBus(c+45,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+56,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+58,"rdata2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+131+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+195,"non_zerow", false,-1);
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
    VlWide<4>/*127:0*/ __Vtemp_hdbbc8edc__0;
    // Body
    tracep->fullSData(oldp+1,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[0]),10);
    tracep->fullSData(oldp+2,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[1]),10);
    tracep->fullSData(oldp+3,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[2]),10);
    tracep->fullSData(oldp+4,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[3]),10);
    tracep->fullSData(oldp+5,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[4]),10);
    tracep->fullSData(oldp+6,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[5]),10);
    tracep->fullSData(oldp+7,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[6]),10);
    tracep->fullSData(oldp+8,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[7]),10);
    tracep->fullSData(oldp+9,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[8]),10);
    tracep->fullSData(oldp+10,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[9]),10);
    tracep->fullSData(oldp+11,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[10]),10);
    tracep->fullSData(oldp+12,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[11]),10);
    tracep->fullCData(oldp+13,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0]),7);
    tracep->fullCData(oldp+14,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[1]),7);
    tracep->fullCData(oldp+15,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[2]),7);
    tracep->fullCData(oldp+16,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[3]),7);
    tracep->fullCData(oldp+17,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[4]),7);
    tracep->fullCData(oldp+18,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[5]),7);
    tracep->fullCData(oldp+19,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[6]),7);
    tracep->fullCData(oldp+20,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[7]),7);
    tracep->fullCData(oldp+21,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[8]),7);
    tracep->fullCData(oldp+22,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[9]),7);
    tracep->fullCData(oldp+23,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[10]),7);
    tracep->fullCData(oldp+24,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[11]),7);
    tracep->fullCData(oldp+25,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0]),3);
    tracep->fullCData(oldp+26,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[1]),3);
    tracep->fullCData(oldp+27,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[2]),3);
    tracep->fullCData(oldp+28,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[3]),3);
    tracep->fullCData(oldp+29,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[4]),3);
    tracep->fullCData(oldp+30,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[5]),3);
    tracep->fullCData(oldp+31,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[6]),3);
    tracep->fullCData(oldp+32,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[7]),3);
    tracep->fullCData(oldp+33,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[8]),3);
    tracep->fullCData(oldp+34,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[9]),3);
    tracep->fullCData(oldp+35,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[10]),3);
    tracep->fullCData(oldp+36,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[11]),3);
    tracep->fullQData(oldp+37,(vlSelf->ysyx_22040127_top__DOT__pcdata),64);
    tracep->fullIData(oldp+39,(vlSelf->ysyx_22040127_top__DOT__instruction),32);
    tracep->fullQData(oldp+40,(vlSelf->ysyx_22040127_top__DOT__alu_output),64);
    tracep->fullBit(oldp+42,((1U & ((((~ (IData)((0U 
                                                  != (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))) 
                                      | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))) 
                                     | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))) 
                                    | (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))))));
    tracep->fullCData(oldp+43,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                         >> 7U))),5);
    tracep->fullCData(oldp+44,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+45,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+46,(vlSelf->ysyx_22040127_top__DOT__inst_type),3);
    tracep->fullQData(oldp+47,(vlSelf->ysyx_22040127_top__DOT__imm),64);
    tracep->fullBit(oldp+49,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                              | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))));
    tracep->fullBit(oldp+50,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                              | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)))));
    tracep->fullBit(oldp+51,((((6U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type)) 
                               & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                  >> 0x14U)) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0xffefff80U 
                                                            & vlSelf->ysyx_22040127_top__DOT__instruction)))))));
    tracep->fullQData(oldp+52,(vlSelf->ysyx_22040127_top__DOT__alu_input1),64);
    tracep->fullQData(oldp+54,(vlSelf->ysyx_22040127_top__DOT__alu_input2),64);
    tracep->fullQData(oldp+56,(vlSelf->ysyx_22040127_top__DOT__reg_data1),64);
    tracep->fullQData(oldp+58,(vlSelf->ysyx_22040127_top__DOT__reg_data2),64);
    tracep->fullBit(oldp+60,(vlSelf->ysyx_22040127_top__DOT__jalr));
    tracep->fullBit(oldp+61,((1U & (~ (IData)((0U != 
                                               (7U 
                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                   >> 0xcU))))))));
    tracep->fullBit(oldp+62,((1U & ((~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                    >> 0xdU))))) 
                                    & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                       >> 0xcU)))));
    tracep->fullBit(oldp+63,((4U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+64,((6U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+65,((5U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+66,((7U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+67,((((((((~ (IData)((0U != 
                                               (7U 
                                                & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                   >> 0xcU))))) 
                                   & (vlSelf->ysyx_22040127_top__DOT__reg_data1 
                                      == vlSelf->ysyx_22040127_top__DOT__reg_data2)) 
                                  | (((~ (IData)((0U 
                                                  != 
                                                  (3U 
                                                   & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                      >> 0xdU))))) 
                                      & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                         >> 0xcU)) 
                                     & (vlSelf->ysyx_22040127_top__DOT__reg_data1 
                                        != vlSelf->ysyx_22040127_top__DOT__reg_data2))) 
                                 | (IData)(((0x4000U 
                                             == (0x7000U 
                                                 & vlSelf->ysyx_22040127_top__DOT__instruction)) 
                                            & VL_LTS_IQQ(64, vlSelf->ysyx_22040127_top__DOT__reg_data1, vlSelf->ysyx_22040127_top__DOT__reg_data2)))) 
                                | (IData)(((0x6000U 
                                            == (0x7000U 
                                                & vlSelf->ysyx_22040127_top__DOT__instruction)) 
                                           & (vlSelf->ysyx_22040127_top__DOT__reg_data1 
                                              < vlSelf->ysyx_22040127_top__DOT__reg_data2)))) 
                               | (IData)(((0x5000U 
                                           == (0x7000U 
                                               & vlSelf->ysyx_22040127_top__DOT__instruction)) 
                                          & VL_GTES_IQQ(64, vlSelf->ysyx_22040127_top__DOT__reg_data1, vlSelf->ysyx_22040127_top__DOT__reg_data2)))) 
                              | (IData)(((0x7000U == 
                                          (0x7000U 
                                           & vlSelf->ysyx_22040127_top__DOT__instruction)) 
                                         & (vlSelf->ysyx_22040127_top__DOT__reg_data1 
                                            >= vlSelf->ysyx_22040127_top__DOT__reg_data2))))));
    tracep->fullBit(oldp+68,((0U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+69,((1U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+70,((2U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+71,((3U == (7U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+72,((0U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+73,((1U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+74,((2U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullBit(oldp+75,((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                           >> 0xcU)))));
    tracep->fullQData(oldp+76,(vlSelf->ysyx_22040127_top__DOT__loaded_data),64);
    tracep->fullBit(oldp+78,(vlSelf->ysyx_22040127_top__DOT__memread));
    tracep->fullBit(oldp+79,((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__inst_type))));
    tracep->fullCData(oldp+80,((0x7fU & vlSelf->ysyx_22040127_top__DOT__instruction)),7);
    tracep->fullCData(oldp+81,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out),3);
    tracep->fullBit(oldp+82,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit));
    tracep->fullQData(oldp+83,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_calc_result),64);
    tracep->fullQData(oldp+85,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_calc_result),64);
    tracep->fullQData(oldp+87,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op),64);
    tracep->fullIData(oldp+89,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op),32);
    tracep->fullQData(oldp+90,((vlSelf->ysyx_22040127_top__DOT__alu_input1 
                                - vlSelf->ysyx_22040127_top__DOT__alu_input2)),64);
    tracep->fullIData(oldp+92,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__addw_result),32);
    tracep->fullIData(oldp+93,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result),32);
    tracep->fullIData(oldp+94,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mulw_result),32);
    tracep->fullIData(oldp+95,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__divw_result),32);
    tracep->fullIData(oldp+96,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__divuw_result),32);
    tracep->fullIData(oldp+97,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__remw_result),32);
    tracep->fullIData(oldp+98,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__remuw_result),32);
    tracep->fullQData(oldp+99,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_addw_result),64);
    tracep->fullQData(oldp+101,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result)))),64);
    tracep->fullQData(oldp+103,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mulw_result 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mulw_result)))),64);
    tracep->fullQData(oldp+105,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__divw_result 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__divw_result)))),64);
    tracep->fullQData(oldp+107,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__divuw_result 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__divuw_result)))),64);
    tracep->fullQData(oldp+109,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__remw_result 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__remw_result)))),64);
    tracep->fullQData(oldp+111,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__remuw_result 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__remuw_result)))),64);
    tracep->fullIData(oldp+113,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_sraw),32);
    tracep->fullIData(oldp+114,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_sllw),32);
    tracep->fullIData(oldp+115,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_srlw),32);
    tracep->fullQData(oldp+116,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sraw),64);
    tracep->fullQData(oldp+118,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sllw),64);
    tracep->fullQData(oldp+120,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_srlw),64);
    tracep->fullCData(oldp+122,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_itype__in),5);
    tracep->fullCData(oldp+123,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in),6);
    tracep->fullQData(oldp+124,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data),64);
    tracep->fullQData(oldp+126,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__rdata),64);
    tracep->fullCData(oldp+128,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__addr_lowmask),8);
    tracep->fullCData(oldp+129,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__wmask),8);
    tracep->fullCData(oldp+130,((7U & (IData)(vlSelf->ysyx_22040127_top__DOT__alu_output))),3);
    tracep->fullQData(oldp+131,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[0]),64);
    tracep->fullQData(oldp+133,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[1]),64);
    tracep->fullQData(oldp+135,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[2]),64);
    tracep->fullQData(oldp+137,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[3]),64);
    tracep->fullQData(oldp+139,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[4]),64);
    tracep->fullQData(oldp+141,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[5]),64);
    tracep->fullQData(oldp+143,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[6]),64);
    tracep->fullQData(oldp+145,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[7]),64);
    tracep->fullQData(oldp+147,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[8]),64);
    tracep->fullQData(oldp+149,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[9]),64);
    tracep->fullQData(oldp+151,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[10]),64);
    tracep->fullQData(oldp+153,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[11]),64);
    tracep->fullQData(oldp+155,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[12]),64);
    tracep->fullQData(oldp+157,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[13]),64);
    tracep->fullQData(oldp+159,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[14]),64);
    tracep->fullQData(oldp+161,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[15]),64);
    tracep->fullQData(oldp+163,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[16]),64);
    tracep->fullQData(oldp+165,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[17]),64);
    tracep->fullQData(oldp+167,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[18]),64);
    tracep->fullQData(oldp+169,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[19]),64);
    tracep->fullQData(oldp+171,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[20]),64);
    tracep->fullQData(oldp+173,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[21]),64);
    tracep->fullQData(oldp+175,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[22]),64);
    tracep->fullQData(oldp+177,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[23]),64);
    tracep->fullQData(oldp+179,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[24]),64);
    tracep->fullQData(oldp+181,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[25]),64);
    tracep->fullQData(oldp+183,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[26]),64);
    tracep->fullQData(oldp+185,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[27]),64);
    tracep->fullQData(oldp+187,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[28]),64);
    tracep->fullQData(oldp+189,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[29]),64);
    tracep->fullQData(oldp+191,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[30]),64);
    tracep->fullQData(oldp+193,(vlSelf->ysyx_22040127_top__DOT__regs__DOT__rf[31]),64);
    tracep->fullBit(oldp+195,((0U != (0x1fU & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                               >> 7U)))));
    tracep->fullBit(oldp+196,(vlSelf->clk));
    tracep->fullBit(oldp+197,(vlSelf->rst));
    tracep->fullIData(oldp+198,(vlSelf->pc),32);
    tracep->fullQData(oldp+199,(((IData)(vlSelf->ysyx_22040127_top__DOT__jalr)
                                  ? (QData)((IData)(
                                                    ((IData)(4U) 
                                                     + vlSelf->pc)))
                                  : ((IData)(vlSelf->ysyx_22040127_top__DOT__memread)
                                      ? vlSelf->ysyx_22040127_top__DOT__loaded_data
                                      : vlSelf->ysyx_22040127_top__DOT__alu_output))),64);
    tracep->fullIData(oldp+201,(((((((((~ (IData)((0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                       >> 0xcU))))) 
                                       & (vlSelf->ysyx_22040127_top__DOT__reg_data1 
                                          == vlSelf->ysyx_22040127_top__DOT__reg_data2)) 
                                      | (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                                          >> 0xdU))))) 
                                          & (vlSelf->ysyx_22040127_top__DOT__instruction 
                                             >> 0xcU)) 
                                         & (vlSelf->ysyx_22040127_top__DOT__reg_data1 
                                            != vlSelf->ysyx_22040127_top__DOT__reg_data2))) 
                                     | (IData)(((0x4000U 
                                                 == 
                                                 (0x7000U 
                                                  & vlSelf->ysyx_22040127_top__DOT__instruction)) 
                                                & VL_LTS_IQQ(64, vlSelf->ysyx_22040127_top__DOT__reg_data1, vlSelf->ysyx_22040127_top__DOT__reg_data2)))) 
                                    | (IData)(((0x6000U 
                                                == 
                                                (0x7000U 
                                                 & vlSelf->ysyx_22040127_top__DOT__instruction)) 
                                               & (vlSelf->ysyx_22040127_top__DOT__reg_data1 
                                                  < vlSelf->ysyx_22040127_top__DOT__reg_data2)))) 
                                   | (IData)(((0x5000U 
                                               == (0x7000U 
                                                   & vlSelf->ysyx_22040127_top__DOT__instruction)) 
                                              & VL_GTES_IQQ(64, vlSelf->ysyx_22040127_top__DOT__reg_data1, vlSelf->ysyx_22040127_top__DOT__reg_data2)))) 
                                  | (IData)(((0x7000U 
                                              == (0x7000U 
                                                  & vlSelf->ysyx_22040127_top__DOT__instruction)) 
                                             & (vlSelf->ysyx_22040127_top__DOT__reg_data1 
                                                >= vlSelf->ysyx_22040127_top__DOT__reg_data2))))
                                  ? (vlSelf->pc + (IData)(vlSelf->ysyx_22040127_top__DOT__imm))
                                  : ((IData)(4U) + vlSelf->pc))),32);
    tracep->fullCData(oldp+202,(0U),3);
    tracep->fullCData(oldp+203,(1U),3);
    tracep->fullCData(oldp+204,(2U),3);
    tracep->fullCData(oldp+205,(3U),3);
    tracep->fullCData(oldp+206,(4U),3);
    tracep->fullCData(oldp+207,(5U),3);
    tracep->fullCData(oldp+208,(6U),3);
    tracep->fullIData(oldp+209,(0xcU),32);
    tracep->fullIData(oldp+210,(7U),32);
    tracep->fullIData(oldp+211,(3U),32);
    __Vtemp_hdbbc8edc__0[0U] = 0x39e46b1dU;
    __Vtemp_hdbbc8edc__0[1U] = 0x8deddc67U;
    __Vtemp_hdbbc8edc__0[2U] = 0x60980633U;
    __Vtemp_hdbbc8edc__0[3U] = 0x2e5b93U;
    tracep->fullWData(oldp+212,(__Vtemp_hdbbc8edc__0),120);
    tracep->fullIData(oldp+216,(1U),32);
    tracep->fullIData(oldp+217,(0xaU),32);
    tracep->fullIData(oldp+218,(0xcU),32);
    tracep->fullCData(oldp+219,(0U),6);
    tracep->fullCData(oldp+220,(0x10U),6);
    tracep->fullCData(oldp+221,(0x20U),6);
    tracep->fullCData(oldp+222,(1U),6);
    tracep->fullCData(oldp+223,(0xcU),6);
    tracep->fullCData(oldp+224,(8U),6);
    tracep->fullCData(oldp+225,(2U),6);
    tracep->fullCData(oldp+226,(4U),6);
    tracep->fullCData(oldp+227,(6U),6);
    tracep->fullCData(oldp+228,(0xeU),6);
    tracep->fullCData(oldp+229,(0x18U),6);
    tracep->fullCData(oldp+230,(0x1aU),6);
    tracep->fullCData(oldp+231,(0x1eU),6);
    tracep->fullCData(oldp+232,(0x1cU),6);
    tracep->fullCData(oldp+233,(0x21U),6);
    tracep->fullCData(oldp+234,(0x11U),6);
    tracep->fullCData(oldp+235,(3U),6);
    tracep->fullCData(oldp+236,(0x19U),6);
    tracep->fullCData(oldp+237,(0xbU),6);
    tracep->fullCData(oldp+238,(0x2bU),6);
    tracep->fullCData(oldp+239,(0x1bU),6);
    tracep->fullCData(oldp+240,(0x1dU),6);
    tracep->fullCData(oldp+241,(0x1fU),6);
    tracep->fullCData(oldp+242,(0x10U),5);
    tracep->fullCData(oldp+243,(0x17U),5);
    tracep->fullCData(oldp+244,(0x16U),5);
    tracep->fullCData(oldp+245,(0x14U),5);
    tracep->fullCData(oldp+246,(0x13U),5);
    tracep->fullCData(oldp+247,(0x15U),5);
    tracep->fullCData(oldp+248,(0x11U),5);
    tracep->fullCData(oldp+249,(0x18U),5);
    tracep->fullCData(oldp+250,(0x19U),5);
    tracep->fullCData(oldp+251,(0x1dU),5);
    tracep->fullIData(oldp+252,(5U),32);
    tracep->fullIData(oldp+253,(0x40U),32);
}
