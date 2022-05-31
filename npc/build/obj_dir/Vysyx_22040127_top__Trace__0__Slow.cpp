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
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declBus(c+1571,"if_pc", false,-1, 31,0);
    tracep->declBit(c+1572,"wb_valid", false,-1);
    tracep->declBus(c+1573,"wb_pc", false,-1, 31,0);
    tracep->declQuad(c+1574,"mepc", false,-1, 63,0);
    tracep->declQuad(c+1576,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+1578,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+1580,"mcause", false,-1, 63,0);
    tracep->declQuad(c+1582,"mie", false,-1, 63,0);
    tracep->declQuad(c+1584,"mip", false,-1, 63,0);
    tracep->declQuad(c+1586,"mscratch", false,-1, 63,0);
    tracep->declQuad(c+1588,"mtval", false,-1, 63,0);
    tracep->declBit(c+1590,"wb_memwrite", false,-1);
    tracep->declQuad(c+1591,"wb_diff_addr", false,-1, 63,0);
    tracep->declQuad(c+1593,"wb_diff_data", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_22040127_top ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declBus(c+1571,"if_pc", false,-1, 31,0);
    tracep->declBit(c+1572,"wb_valid", false,-1);
    tracep->declBus(c+1573,"wb_pc", false,-1, 31,0);
    tracep->declQuad(c+1574,"mepc", false,-1, 63,0);
    tracep->declQuad(c+1576,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+1578,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+1580,"mcause", false,-1, 63,0);
    tracep->declQuad(c+1582,"mie", false,-1, 63,0);
    tracep->declQuad(c+1584,"mip", false,-1, 63,0);
    tracep->declQuad(c+1586,"mscratch", false,-1, 63,0);
    tracep->declQuad(c+1588,"mtval", false,-1, 63,0);
    tracep->declBit(c+1590,"wb_memwrite", false,-1);
    tracep->declQuad(c+1591,"wb_diff_addr", false,-1, 63,0);
    tracep->declQuad(c+1593,"wb_diff_data", false,-1, 63,0);
    tracep->declQuad(c+37,"mhartid", false,-1, 63,0);
    tracep->declQuad(c+39,"if_pcdata", false,-1, 63,0);
    tracep->declBus(c+41,"if_instruction", false,-1, 31,0);
    tracep->declBit(c+42,"if_ebreak", false,-1);
    tracep->declBit(c+43,"if_uart", false,-1);
    tracep->declBit(c+44,"id_ebreak", false,-1);
    tracep->declBit(c+45,"ex_ebreak", false,-1);
    tracep->declBit(c+46,"mem_ebreak", false,-1);
    tracep->declBit(c+47,"wb_ebreak", false,-1);
    tracep->declQuad(c+1597,"reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+1599,"alu_output", false,-1, 63,0);
    tracep->declBus(c+48,"id_branch_result", false,-1, 31,0);
    tracep->declBit(c+49,"id_branch_taken", false,-1);
    tracep->declBus(c+50,"id_rs1", false,-1, 4,0);
    tracep->declBus(c+51,"id_rs2", false,-1, 4,0);
    tracep->declQuad(c+52,"id_regdata1", false,-1, 63,0);
    tracep->declQuad(c+54,"id_regdata2", false,-1, 63,0);
    tracep->declBit(c+1601,"id_jalr", false,-1);
    tracep->declBit(c+56,"if_allowin", false,-1);
    tracep->declBit(c+57,"id_allowin", false,-1);
    tracep->declBit(c+58,"ex_allowin", false,-1);
    tracep->declBit(c+59,"ex_ready_go", false,-1);
    tracep->declBit(c+1602,"mem_allowin", false,-1);
    tracep->declBit(c+1602,"wb_allowin", false,-1);
    tracep->declBit(c+60,"cache_pipelinehit", false,-1);
    tracep->declBit(c+61,"if_to_id_valid", false,-1);
    tracep->declBit(c+62,"id_to_ex_valid", false,-1);
    tracep->declBit(c+63,"ex_to_mem_valid", false,-1);
    tracep->declBit(c+64,"mem_to_wb_valid", false,-1);
    tracep->declBit(c+65,"if_flush", false,-1);
    tracep->declBit(c+66,"id_flush", false,-1);
    tracep->declBit(c+67,"ex_flush", false,-1);
    tracep->declBit(c+68,"mem_flush", false,-1);
    tracep->declQuad(c+1595,"if_to_id_bus", false,-1, 63,0);
    tracep->declArray(c+69,"id_to_ex_bus", false,-1, 274,0);
    tracep->declArray(c+78,"ex_to_mem_bus", false,-1, 261,0);
    tracep->declArray(c+87,"mem_to_wb_bus", false,-1, 320,0);
    tracep->declQuad(c+98,"mem_alu_output", false,-1, 63,0);
    tracep->declBit(c+100,"mem_memread", false,-1);
    tracep->declQuad(c+101,"mem_final_rdata", false,-1, 63,0);
    tracep->declQuad(c+103,"wb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+105,"wb_csrwdata", false,-1, 63,0);
    tracep->declQuad(c+107,"wb_csrrdata", false,-1, 63,0);
    tracep->declBit(c+65,"wb_mret", false,-1);
    tracep->declBit(c+109,"wb_csr_we", false,-1);
    tracep->declBus(c+110,"wb_rd", false,-1, 4,0);
    tracep->declBit(c+111,"wb_reg_wen", false,-1);
    tracep->declBus(c+112,"cache_state", false,-1, 2,0);
    tracep->declBit(c+61,"if_valid", false,-1);
    tracep->declBit(c+1602,"if_ready_go", false,-1);
    tracep->declBus(c+1603,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+1604,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+1605,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+1606,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+1607,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+1608,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+1609,"TYPE_N", false,-1, 2,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declBit(c+57,"id_allowin", false,-1);
    tracep->declBit(c+58,"ex_allowin", false,-1);
    tracep->declBit(c+61,"if_to_id_valid", false,-1);
    tracep->declBit(c+62,"id_to_ex_valid", false,-1);
    tracep->declArray(c+69,"id_to_ex_bus", false,-1, 274,0);
    tracep->declQuad(c+1595,"if_to_id_bus", false,-1, 63,0);
    tracep->declBus(c+50,"id_rs1", false,-1, 4,0);
    tracep->declBus(c+51,"id_rs2", false,-1, 4,0);
    tracep->declQuad(c+52,"id_regdata1_tmp", false,-1, 63,0);
    tracep->declQuad(c+54,"id_regdata2_tmp", false,-1, 63,0);
    tracep->declBus(c+48,"id_branch_result", false,-1, 31,0);
    tracep->declBit(c+49,"id_branch_taken", false,-1);
    tracep->declBus(c+113,"ex_rd", false,-1, 4,0);
    tracep->declBus(c+114,"mem_rd", false,-1, 4,0);
    tracep->declBus(c+110,"wb_rd", false,-1, 4,0);
    tracep->declQuad(c+115,"ex_alu_output", false,-1, 63,0);
    tracep->declQuad(c+98,"mem_alu_output", false,-1, 63,0);
    tracep->declQuad(c+103,"wb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+117,"ex_memread", false,-1);
    tracep->declBit(c+100,"mem_memread", false,-1);
    tracep->declQuad(c+101,"mem_final_rdata", false,-1, 63,0);
    tracep->declBit(c+118,"ex_reg_wen", false,-1);
    tracep->declBit(c+119,"mem_reg_wen", false,-1);
    tracep->declBit(c+111,"wb_reg_wen", false,-1);
    tracep->declBit(c+120,"mem_mret", false,-1);
    tracep->declBit(c+121,"ex_csr_we", false,-1);
    tracep->declBit(c+122,"mem_csr_we", false,-1);
    tracep->declBit(c+109,"wb_csr_we", false,-1);
    tracep->declBit(c+65,"if_flush", false,-1);
    tracep->declBit(c+66,"id_flush", false,-1);
    tracep->declBus(c+1603,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+1604,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+1605,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+1606,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+1607,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+1608,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+1609,"TYPE_N", false,-1, 2,0);
    tracep->declBit(c+123,"beq", false,-1);
    tracep->declBit(c+124,"bne", false,-1);
    tracep->declBit(c+125,"blt", false,-1);
    tracep->declBit(c+126,"bltu", false,-1);
    tracep->declBit(c+127,"bge", false,-1);
    tracep->declBit(c+128,"bgeu", false,-1);
    tracep->declBit(c+129,"btype_taken", false,-1);
    tracep->declBit(c+130,"imm_src1", false,-1);
    tracep->declBit(c+131,"imm_src2", false,-1);
    tracep->declBus(c+132,"id_aluop", false,-1, 5,0);
    tracep->declBus(c+133,"id_memop", false,-1, 2,0);
    tracep->declBus(c+134,"id_rd", false,-1, 4,0);
    tracep->declBit(c+135,"id_reg_wen", false,-1);
    tracep->declBit(c+136,"id_memwrite", false,-1);
    tracep->declBit(c+137,"id_memread", false,-1);
    tracep->declBus(c+138,"id_inst_type", false,-1, 2,0);
    tracep->declQuad(c+139,"id_imm", false,-1, 63,0);
    tracep->declBit(c+141,"id_jalr", false,-1);
    tracep->declQuad(c+142,"id_alu_input1", false,-1, 63,0);
    tracep->declQuad(c+144,"id_alu_input2", false,-1, 63,0);
    tracep->declQuad(c+146,"id_regdata1_final", false,-1, 63,0);
    tracep->declQuad(c+148,"id_regdata2_final", false,-1, 63,0);
    tracep->declQuad(c+148,"id_mem_wdata", false,-1, 63,0);
    tracep->declBit(c+150,"exid_raw_hazard1", false,-1);
    tracep->declBit(c+151,"exid_raw_hazard2", false,-1);
    tracep->declBit(c+152,"memid_raw_hazard1", false,-1);
    tracep->declBit(c+153,"memid_raw_hazard2", false,-1);
    tracep->declBit(c+154,"wbid_raw_hazard1", false,-1);
    tracep->declBit(c+155,"wbid_raw_hazard2", false,-1);
    tracep->declBit(c+156,"load_use_hazard1", false,-1);
    tracep->declBit(c+157,"load_use_hazard2", false,-1);
    tracep->declBit(c+158,"mem_load_use_hazard1_tmp", false,-1);
    tracep->declBit(c+159,"mem_load_use_hazard2_tmp", false,-1);
    tracep->declBit(c+160,"mem_load_use_hazard1", false,-1);
    tracep->declBit(c+161,"mem_load_use_hazard2", false,-1);
    tracep->declBit(c+162,"wb_load_use_hazard1_tmp", false,-1);
    tracep->declBit(c+163,"wb_load_use_hazard2_tmp", false,-1);
    tracep->declBit(c+162,"wb_load_use_hazard1", false,-1);
    tracep->declBit(c+163,"wb_load_use_hazard2", false,-1);
    tracep->declBit(c+164,"id_ready_go", false,-1);
    tracep->declBit(c+165,"id_valid", false,-1);
    tracep->declQuad(c+166,"if_to_id_bus_reg", false,-1, 63,0);
    tracep->declBus(c+168,"id_pc", false,-1, 31,0);
    tracep->declBus(c+169,"id_instruction", false,-1, 31,0);
    tracep->declBit(c+170,"id_mret", false,-1);
    tracep->declBit(c+171,"id_ecall", false,-1);
    tracep->declBit(c+172,"id_csrrw", false,-1);
    tracep->declBit(c+173,"id_csrrs", false,-1);
    tracep->declBit(c+174,"id_csrrc", false,-1);
    tracep->declBit(c+175,"id_csrrwi", false,-1);
    tracep->declBit(c+176,"id_csrrsi", false,-1);
    tracep->declBit(c+177,"id_csrrci", false,-1);
    tracep->pushNamePrefix("inst_mux ");
    tracep->declBus(c+1610,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1611,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1612,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+138,"out", false,-1, 2,0);
    tracep->declBus(c+178,"key", false,-1, 6,0);
    tracep->declBus(c+1603,"default_out", false,-1, 2,0);
    tracep->declArray(c+1613,"lut", false,-1, 119,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1610,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1611,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1612,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1617,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+138,"out", false,-1, 2,0);
    tracep->declBus(c+178,"key", false,-1, 6,0);
    tracep->declBus(c+1603,"default_out", false,-1, 2,0);
    tracep->declArray(c+1613,"lut", false,-1, 119,0);
    tracep->declBus(c+1618,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+13+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+25+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+179,"lut_out", false,-1, 2,0);
    tracep->declBit(c+180,"hit", false,-1);
    tracep->declBus(c+1619,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("exe ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declBit(c+58,"ex_allowin", false,-1);
    tracep->declBit(c+1602,"mem_allowin", false,-1);
    tracep->declBit(c+62,"id_to_ex_valid", false,-1);
    tracep->declBit(c+63,"ex_to_mem_valid", false,-1);
    tracep->declArray(c+69,"id_to_ex_bus", false,-1, 274,0);
    tracep->declArray(c+78,"ex_to_mem_bus", false,-1, 261,0);
    tracep->declBit(c+120,"mem_mret", false,-1);
    tracep->declBit(c+66,"id_flush", false,-1);
    tracep->declBit(c+60,"cache_pipelinehit", false,-1);
    tracep->declBus(c+112,"cache_state", false,-1, 2,0);
    tracep->declBit(c+67,"ex_flush", false,-1);
    tracep->declBit(c+59,"ex_ready_go", false,-1);
    tracep->declQuad(c+181,"rtype_calc_result", false,-1, 63,0);
    tracep->declQuad(c+183,"itype_calc_result", false,-1, 63,0);
    tracep->declQuad(c+185,"rtype_alu_op", false,-1, 63,0);
    tracep->declBus(c+187,"itype_alu_op", false,-1, 31,0);
    tracep->declQuad(c+188,"sub", false,-1, 63,0);
    tracep->declBus(c+190,"addw_result", false,-1, 31,0);
    tracep->declBus(c+191,"subw_result", false,-1, 31,0);
    tracep->declBus(c+192,"mulw_result", false,-1, 31,0);
    tracep->declBus(c+193,"divw_result", false,-1, 31,0);
    tracep->declBus(c+193,"divuw_result", false,-1, 31,0);
    tracep->declBus(c+194,"remw_result", false,-1, 31,0);
    tracep->declBus(c+194,"remuw_result", false,-1, 31,0);
    tracep->declQuad(c+195,"sext_addw_result", false,-1, 63,0);
    tracep->declQuad(c+197,"sext_subw_result", false,-1, 63,0);
    tracep->declQuad(c+199,"sext_mulw_result", false,-1, 63,0);
    tracep->declQuad(c+201,"sext_divw_result", false,-1, 63,0);
    tracep->declQuad(c+201,"sext_divuw_result", false,-1, 63,0);
    tracep->declQuad(c+203,"sext_remw_result", false,-1, 63,0);
    tracep->declQuad(c+203,"sext_remuw_result", false,-1, 63,0);
    tracep->declBus(c+205,"src1_sllw", false,-1, 31,0);
    tracep->declBus(c+206,"src1_srlw", false,-1, 31,0);
    tracep->declBus(c+207,"sft_input2", false,-1, 5,0);
    tracep->declQuad(c+208,"sra_mask_32", false,-1, 63,0);
    tracep->declQuad(c+210,"sra_mask_64", false,-1, 63,0);
    tracep->declQuad(c+212,"sext_src1_sraw", false,-1, 63,0);
    tracep->declQuad(c+214,"sext_src1_sllw", false,-1, 63,0);
    tracep->declQuad(c+216,"sext_src1_srlw", false,-1, 63,0);
    tracep->declQuad(c+218,"ex_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+220,"ex_pc", false,-1, 31,0);
    tracep->declBus(c+221,"ex_aluop", false,-1, 5,0);
    tracep->declBus(c+222,"ex_memop", false,-1, 2,0);
    tracep->declBit(c+223,"ex_memwrite", false,-1);
    tracep->declBit(c+224,"ex_memread", false,-1);
    tracep->declBus(c+225,"ex_rd", false,-1, 4,0);
    tracep->declBus(c+226,"ex_inst_type", false,-1, 2,0);
    tracep->declBit(c+227,"ex_jalr", false,-1);
    tracep->declQuad(c+228,"ex_alu_input1", false,-1, 63,0);
    tracep->declQuad(c+230,"ex_alu_input2", false,-1, 63,0);
    tracep->declBus(c+232,"ex_rs1", false,-1, 4,0);
    tracep->declBus(c+233,"ex_rs2", false,-1, 4,0);
    tracep->declBit(c+234,"ex_reg_wen", false,-1);
    tracep->declBit(c+235,"mul_type", false,-1);
    tracep->declBit(c+236,"div_type", false,-1);
    tracep->declBit(c+237,"div_sign", false,-1);
    tracep->declBit(c+238,"mul_stage2", false,-1);
    tracep->declBit(c+239,"mul_ok", false,-1);
    tracep->declBit(c+240,"sign1", false,-1);
    tracep->declBit(c+241,"sign2", false,-1);
    tracep->declQuad(c+242,"mul_res_high", false,-1, 63,0);
    tracep->declQuad(c+244,"mul_res_low", false,-1, 63,0);
    tracep->declBit(c+246,"ex_valid", false,-1);
    tracep->declArray(c+247,"id_to_ex_bus_reg", false,-1, 274,0);
    tracep->declQuad(c+256,"ex_alu_output", false,-1, 63,0);
    tracep->declBit(c+258,"div_ready", false,-1);
    tracep->declBus(c+259,"div_state", false,-1, 1,0);
    tracep->declQuad(c+260,"quo", false,-1, 63,0);
    tracep->declQuad(c+262,"rem", false,-1, 63,0);
    tracep->declBit(c+264,"ex_mret", false,-1);
    tracep->declBit(c+265,"ex_ecall", false,-1);
    tracep->declBit(c+266,"ex_csrrw", false,-1);
    tracep->declBit(c+267,"ex_csrrs", false,-1);
    tracep->declBit(c+268,"ex_csrrc", false,-1);
    tracep->declBit(c+269,"ex_csrrwi", false,-1);
    tracep->declBit(c+270,"ex_csrrsi", false,-1);
    tracep->declBit(c+271,"ex_csrrci", false,-1);
    tracep->declBit(c+272,"ex_csr_we", false,-1);
    tracep->declBus(c+273,"ex_des_csr", false,-1, 11,0);
    tracep->declBit(c+274,"cache_readygo", false,-1);
    tracep->declBus(c+1620,"op_add", false,-1, 5,0);
    tracep->declBus(c+1621,"op_mul", false,-1, 5,0);
    tracep->declBus(c+1622,"op_sub", false,-1, 5,0);
    tracep->declBus(c+1623,"op_addw", false,-1, 5,0);
    tracep->declBus(c+1624,"op_or", false,-1, 5,0);
    tracep->declBus(c+1625,"op_xor", false,-1, 5,0);
    tracep->declBus(c+1626,"op_sll", false,-1, 5,0);
    tracep->declBus(c+1627,"op_slt", false,-1, 5,0);
    tracep->declBus(c+1628,"op_sltu", false,-1, 5,0);
    tracep->declBus(c+1629,"op_and", false,-1, 5,0);
    tracep->declBus(c+1630,"op_div", false,-1, 5,0);
    tracep->declBus(c+1631,"op_divu", false,-1, 5,0);
    tracep->declBus(c+1632,"op_remu", false,-1, 5,0);
    tracep->declBus(c+1633,"op_rem", false,-1, 5,0);
    tracep->declBus(c+1634,"op_subw", false,-1, 5,0);
    tracep->declBus(c+1635,"op_mulw", false,-1, 5,0);
    tracep->declBus(c+1636,"op_sllw", false,-1, 5,0);
    tracep->declBus(c+1637,"op_srl", false,-1, 5,0);
    tracep->declBus(c+1638,"op_sra", false,-1, 5,0);
    tracep->declBus(c+1639,"op_divw", false,-1, 5,0);
    tracep->declBus(c+1640,"op_srlw", false,-1, 5,0);
    tracep->declBus(c+1641,"op_sraw", false,-1, 5,0);
    tracep->declBus(c+1642,"op_divuw", false,-1, 5,0);
    tracep->declBus(c+1643,"op_remw", false,-1, 5,0);
    tracep->declBus(c+1644,"op_remuw", false,-1, 5,0);
    tracep->declBus(c+1645,"op_mulhu", false,-1, 5,0);
    tracep->declBus(c+1646,"op_mulh", false,-1, 5,0);
    tracep->declBus(c+1647,"op_mulhsu", false,-1, 5,0);
    tracep->declBus(c+1648,"op_addi", false,-1, 4,0);
    tracep->declBus(c+1649,"op_andi", false,-1, 4,0);
    tracep->declBus(c+1650,"op_ori", false,-1, 4,0);
    tracep->declBus(c+1651,"op_xori", false,-1, 4,0);
    tracep->declBus(c+1652,"op_sltiu", false,-1, 4,0);
    tracep->declBus(c+1653,"op_sri", false,-1, 4,0);
    tracep->declBus(c+1654,"op_slli", false,-1, 4,0);
    tracep->declBus(c+1655,"op_addiw", false,-1, 4,0);
    tracep->declBus(c+1656,"op_slliw", false,-1, 4,0);
    tracep->declBus(c+1657,"op_sriw", false,-1, 4,0);
    tracep->declBus(c+1658,"op_slti", false,-1, 4,0);
    tracep->declQuad(c+275,"res_sra", false,-1, 63,0);
    tracep->declQuad(c+277,"res_srl", false,-1, 63,0);
    tracep->declQuad(c+279,"res_sll", false,-1, 63,0);
    tracep->declBus(c+1603,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+1604,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+1605,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+1606,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+1607,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+1608,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+1609,"TYPE_N", false,-1, 2,0);
    tracep->pushNamePrefix("dec_itype ");
    tracep->declBus(c+281,"in", false,-1, 4,0);
    tracep->declBus(c+187,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec_rtype ");
    tracep->declBus(c+282,"in", false,-1, 5,0);
    tracep->declQuad(c+185,"out", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declQuad(c+283,"x", false,-1, 63,0);
    tracep->declQuad(c+285,"y", false,-1, 63,0);
    tracep->declBit(c+237,"s", false,-1);
    tracep->declBit(c+236,"is_div", false,-1);
    tracep->declBit(c+258,"ready", false,-1);
    tracep->declBus(c+259,"state", false,-1, 1,0);
    tracep->declQuad(c+260,"quo", false,-1, 63,0);
    tracep->declQuad(c+262,"rem", false,-1, 63,0);
    tracep->declBus(c+1659,"IDLE", false,-1, 1,0);
    tracep->declBus(c+1660,"DIV_ON", false,-1, 1,0);
    tracep->declBus(c+1661,"DIV_ZERO", false,-1, 1,0);
    tracep->declBus(c+1662,"DIV_END", false,-1, 1,0);
    tracep->declBus(c+287,"cnt", false,-1, 6,0);
    tracep->declArray(c+288,"dividend", false,-1, 128,0);
    tracep->declQuad(c+293,"divisor", false,-1, 63,0);
    tracep->declArray(c+295,"subres", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declQuad(c+228,"x", false,-1, 63,0);
    tracep->declQuad(c+230,"y", false,-1, 63,0);
    tracep->declBit(c+240,"xs", false,-1);
    tracep->declBit(c+241,"ys", false,-1);
    tracep->declQuad(c+242,"high", false,-1, 63,0);
    tracep->declQuad(c+244,"low", false,-1, 63,0);
    tracep->declBit(c+235,"mul_type", false,-1);
    tracep->declBit(c+238,"mul_stage2", false,-1);
    tracep->declBit(c+239,"mul_ok", false,-1);
    tracep->declArray(c+298,"x_ext", false,-1, 64,0);
    tracep->declArray(c+301,"y_ext", false,-1, 66,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declArray(c+304+i*4,"l1s", true,(i+0), 127,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declArray(c+348+i*4,"l1c", true,(i+0), 127,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declArray(c+392+i*4,"l2s", true,(i+0), 127,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declArray(c+420+i*4,"l2c", true,(i+0), 127,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+448+i*4,"l3s", true,(i+0), 127,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+468+i*4,"l3c", true,(i+0), 127,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+488+i*4,"l4s", true,(i+0), 127,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+500+i*4,"l4c", true,(i+0), 127,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+512+i*4,"l5s", true,(i+0), 127,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declArray(c+524+i*4,"l5c", true,(i+0), 127,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+536+i*4,"l6s", true,(i+0), 127,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+544+i*4,"l6c", true,(i+0), 127,0);
    }
    tracep->declArray(c+552,"l7s", false,-1, 127,0);
    tracep->declArray(c+556,"l7c", false,-1, 127,0);
    tracep->declArray(c+560,"l8s", false,-1, 127,0);
    tracep->declArray(c+564,"l8c", false,-1, 127,0);
    tracep->declArray(c+568,"res", false,-1, 127,0);
    tracep->pushNamePrefix("b0 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+572,"y", false,-1, 2,0);
    tracep->declArray(c+573,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b1 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+580,"y", false,-1, 2,0);
    tracep->declArray(c+581,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b10 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+585,"y", false,-1, 2,0);
    tracep->declArray(c+586,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b11 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+590,"y", false,-1, 2,0);
    tracep->declArray(c+591,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b12 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+595,"y", false,-1, 2,0);
    tracep->declArray(c+596,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b13 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+600,"y", false,-1, 2,0);
    tracep->declArray(c+601,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b14 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+605,"y", false,-1, 2,0);
    tracep->declArray(c+606,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b15 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+610,"y", false,-1, 2,0);
    tracep->declArray(c+611,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b16 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+615,"y", false,-1, 2,0);
    tracep->declArray(c+616,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b17 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+620,"y", false,-1, 2,0);
    tracep->declArray(c+621,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b18 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+625,"y", false,-1, 2,0);
    tracep->declArray(c+626,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b19 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+630,"y", false,-1, 2,0);
    tracep->declArray(c+631,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b2 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+635,"y", false,-1, 2,0);
    tracep->declArray(c+636,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b20 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+640,"y", false,-1, 2,0);
    tracep->declArray(c+641,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b21 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+645,"y", false,-1, 2,0);
    tracep->declArray(c+646,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b22 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+650,"y", false,-1, 2,0);
    tracep->declArray(c+651,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b23 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+655,"y", false,-1, 2,0);
    tracep->declArray(c+656,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b24 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+660,"y", false,-1, 2,0);
    tracep->declArray(c+661,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b25 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+665,"y", false,-1, 2,0);
    tracep->declArray(c+666,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b26 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+670,"y", false,-1, 2,0);
    tracep->declArray(c+671,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b27 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+675,"y", false,-1, 2,0);
    tracep->declArray(c+676,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b28 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+680,"y", false,-1, 2,0);
    tracep->declArray(c+681,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b29 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+685,"y", false,-1, 2,0);
    tracep->declArray(c+686,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b3 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+690,"y", false,-1, 2,0);
    tracep->declArray(c+691,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b30 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+695,"y", false,-1, 2,0);
    tracep->declArray(c+696,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b31 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+700,"y", false,-1, 2,0);
    tracep->declArray(c+701,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b32 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+705,"y", false,-1, 2,0);
    tracep->declArray(c+706,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b4 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+710,"y", false,-1, 2,0);
    tracep->declArray(c+711,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b5 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+715,"y", false,-1, 2,0);
    tracep->declArray(c+716,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b6 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+720,"y", false,-1, 2,0);
    tracep->declArray(c+721,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b7 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+725,"y", false,-1, 2,0);
    tracep->declArray(c+726,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b8 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+730,"y", false,-1, 2,0);
    tracep->declArray(c+731,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("b9 ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declArray(c+298,"x", false,-1, 64,0);
    tracep->declBus(c+735,"y", false,-1, 2,0);
    tracep->declArray(c+736,"z", false,-1, 127,0);
    tracep->declArray(c+577,"x_comp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_1 ");
    tracep->declArray(c+740,"x", false,-1, 127,0);
    tracep->declArray(c+744,"y", false,-1, 127,0);
    tracep->declArray(c+748,"z", false,-1, 127,0);
    tracep->declArray(c+752,"s", false,-1, 127,0);
    tracep->declArray(c+756,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_10 ");
    tracep->declArray(c+760,"x", false,-1, 127,0);
    tracep->declArray(c+764,"y", false,-1, 127,0);
    tracep->declArray(c+768,"z", false,-1, 127,0);
    tracep->declArray(c+772,"s", false,-1, 127,0);
    tracep->declArray(c+776,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_11 ");
    tracep->declArray(c+780,"x", false,-1, 127,0);
    tracep->declArray(c+784,"y", false,-1, 127,0);
    tracep->declArray(c+788,"z", false,-1, 127,0);
    tracep->declArray(c+792,"s", false,-1, 127,0);
    tracep->declArray(c+796,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_2 ");
    tracep->declArray(c+800,"x", false,-1, 127,0);
    tracep->declArray(c+804,"y", false,-1, 127,0);
    tracep->declArray(c+808,"z", false,-1, 127,0);
    tracep->declArray(c+812,"s", false,-1, 127,0);
    tracep->declArray(c+816,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_3 ");
    tracep->declArray(c+820,"x", false,-1, 127,0);
    tracep->declArray(c+824,"y", false,-1, 127,0);
    tracep->declArray(c+828,"z", false,-1, 127,0);
    tracep->declArray(c+832,"s", false,-1, 127,0);
    tracep->declArray(c+836,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_4 ");
    tracep->declArray(c+840,"x", false,-1, 127,0);
    tracep->declArray(c+844,"y", false,-1, 127,0);
    tracep->declArray(c+848,"z", false,-1, 127,0);
    tracep->declArray(c+852,"s", false,-1, 127,0);
    tracep->declArray(c+856,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_5 ");
    tracep->declArray(c+860,"x", false,-1, 127,0);
    tracep->declArray(c+864,"y", false,-1, 127,0);
    tracep->declArray(c+868,"z", false,-1, 127,0);
    tracep->declArray(c+872,"s", false,-1, 127,0);
    tracep->declArray(c+876,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_6 ");
    tracep->declArray(c+880,"x", false,-1, 127,0);
    tracep->declArray(c+884,"y", false,-1, 127,0);
    tracep->declArray(c+888,"z", false,-1, 127,0);
    tracep->declArray(c+892,"s", false,-1, 127,0);
    tracep->declArray(c+896,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_7 ");
    tracep->declArray(c+900,"x", false,-1, 127,0);
    tracep->declArray(c+904,"y", false,-1, 127,0);
    tracep->declArray(c+908,"z", false,-1, 127,0);
    tracep->declArray(c+912,"s", false,-1, 127,0);
    tracep->declArray(c+916,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_8 ");
    tracep->declArray(c+920,"x", false,-1, 127,0);
    tracep->declArray(c+924,"y", false,-1, 127,0);
    tracep->declArray(c+928,"z", false,-1, 127,0);
    tracep->declArray(c+932,"s", false,-1, 127,0);
    tracep->declArray(c+936,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l1_9 ");
    tracep->declArray(c+940,"x", false,-1, 127,0);
    tracep->declArray(c+944,"y", false,-1, 127,0);
    tracep->declArray(c+948,"z", false,-1, 127,0);
    tracep->declArray(c+952,"s", false,-1, 127,0);
    tracep->declArray(c+956,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_1 ");
    tracep->declArray(c+960,"x", false,-1, 127,0);
    tracep->declArray(c+964,"y", false,-1, 127,0);
    tracep->declArray(c+968,"z", false,-1, 127,0);
    tracep->declArray(c+972,"s", false,-1, 127,0);
    tracep->declArray(c+976,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_2 ");
    tracep->declArray(c+980,"x", false,-1, 127,0);
    tracep->declArray(c+984,"y", false,-1, 127,0);
    tracep->declArray(c+988,"z", false,-1, 127,0);
    tracep->declArray(c+992,"s", false,-1, 127,0);
    tracep->declArray(c+996,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_3 ");
    tracep->declArray(c+1000,"x", false,-1, 127,0);
    tracep->declArray(c+1004,"y", false,-1, 127,0);
    tracep->declArray(c+1008,"z", false,-1, 127,0);
    tracep->declArray(c+1012,"s", false,-1, 127,0);
    tracep->declArray(c+1016,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_4 ");
    tracep->declArray(c+1020,"x", false,-1, 127,0);
    tracep->declArray(c+1024,"y", false,-1, 127,0);
    tracep->declArray(c+1028,"z", false,-1, 127,0);
    tracep->declArray(c+1032,"s", false,-1, 127,0);
    tracep->declArray(c+1036,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_5 ");
    tracep->declArray(c+1040,"x", false,-1, 127,0);
    tracep->declArray(c+1044,"y", false,-1, 127,0);
    tracep->declArray(c+1048,"z", false,-1, 127,0);
    tracep->declArray(c+1052,"s", false,-1, 127,0);
    tracep->declArray(c+1056,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_6 ");
    tracep->declArray(c+1060,"x", false,-1, 127,0);
    tracep->declArray(c+1064,"y", false,-1, 127,0);
    tracep->declArray(c+1068,"z", false,-1, 127,0);
    tracep->declArray(c+1072,"s", false,-1, 127,0);
    tracep->declArray(c+1076,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l2_7 ");
    tracep->declArray(c+1080,"x", false,-1, 127,0);
    tracep->declArray(c+1084,"y", false,-1, 127,0);
    tracep->declArray(c+1088,"z", false,-1, 127,0);
    tracep->declArray(c+1092,"s", false,-1, 127,0);
    tracep->declArray(c+1096,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l3_1 ");
    tracep->declArray(c+1100,"x", false,-1, 127,0);
    tracep->declArray(c+1104,"y", false,-1, 127,0);
    tracep->declArray(c+1108,"z", false,-1, 127,0);
    tracep->declArray(c+1112,"s", false,-1, 127,0);
    tracep->declArray(c+1116,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l3_2 ");
    tracep->declArray(c+1120,"x", false,-1, 127,0);
    tracep->declArray(c+1124,"y", false,-1, 127,0);
    tracep->declArray(c+1128,"z", false,-1, 127,0);
    tracep->declArray(c+1132,"s", false,-1, 127,0);
    tracep->declArray(c+1136,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l3_3 ");
    tracep->declArray(c+1140,"x", false,-1, 127,0);
    tracep->declArray(c+1144,"y", false,-1, 127,0);
    tracep->declArray(c+1148,"z", false,-1, 127,0);
    tracep->declArray(c+1152,"s", false,-1, 127,0);
    tracep->declArray(c+1156,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l3_4 ");
    tracep->declArray(c+1160,"x", false,-1, 127,0);
    tracep->declArray(c+1164,"y", false,-1, 127,0);
    tracep->declArray(c+1168,"z", false,-1, 127,0);
    tracep->declArray(c+1172,"s", false,-1, 127,0);
    tracep->declArray(c+1176,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l3_5 ");
    tracep->declArray(c+1180,"x", false,-1, 127,0);
    tracep->declArray(c+1184,"y", false,-1, 127,0);
    tracep->declArray(c+1188,"z", false,-1, 127,0);
    tracep->declArray(c+1192,"s", false,-1, 127,0);
    tracep->declArray(c+1196,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l4_1 ");
    tracep->declArray(c+1200,"x", false,-1, 127,0);
    tracep->declArray(c+1204,"y", false,-1, 127,0);
    tracep->declArray(c+1208,"z", false,-1, 127,0);
    tracep->declArray(c+1212,"s", false,-1, 127,0);
    tracep->declArray(c+1216,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l4_2 ");
    tracep->declArray(c+1220,"x", false,-1, 127,0);
    tracep->declArray(c+1224,"y", false,-1, 127,0);
    tracep->declArray(c+1228,"z", false,-1, 127,0);
    tracep->declArray(c+1232,"s", false,-1, 127,0);
    tracep->declArray(c+1236,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l4_3 ");
    tracep->declArray(c+1240,"x", false,-1, 127,0);
    tracep->declArray(c+1244,"y", false,-1, 127,0);
    tracep->declArray(c+1248,"z", false,-1, 127,0);
    tracep->declArray(c+1252,"s", false,-1, 127,0);
    tracep->declArray(c+1256,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l5_1 ");
    tracep->declArray(c+1260,"x", false,-1, 127,0);
    tracep->declArray(c+1264,"y", false,-1, 127,0);
    tracep->declArray(c+1268,"z", false,-1, 127,0);
    tracep->declArray(c+1272,"s", false,-1, 127,0);
    tracep->declArray(c+1276,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l5_2 ");
    tracep->declArray(c+1280,"x", false,-1, 127,0);
    tracep->declArray(c+1284,"y", false,-1, 127,0);
    tracep->declArray(c+1288,"z", false,-1, 127,0);
    tracep->declArray(c+1292,"s", false,-1, 127,0);
    tracep->declArray(c+1296,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l6_1 ");
    tracep->declArray(c+1300,"x", false,-1, 127,0);
    tracep->declArray(c+1304,"y", false,-1, 127,0);
    tracep->declArray(c+1308,"z", false,-1, 127,0);
    tracep->declArray(c+1312,"s", false,-1, 127,0);
    tracep->declArray(c+1316,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l7_1 ");
    tracep->declArray(c+1320,"x", false,-1, 127,0);
    tracep->declArray(c+1324,"y", false,-1, 127,0);
    tracep->declArray(c+1328,"z", false,-1, 127,0);
    tracep->declArray(c+552,"s", false,-1, 127,0);
    tracep->declArray(c+556,"c", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("l8_1 ");
    tracep->declArray(c+552,"x", false,-1, 127,0);
    tracep->declArray(c+1332,"y", false,-1, 127,0);
    tracep->declArray(c+1336,"z", false,-1, 127,0);
    tracep->declArray(c+560,"s", false,-1, 127,0);
    tracep->declArray(c+564,"c", false,-1, 127,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declBit(c+1602,"mem_allowin", false,-1);
    tracep->declBit(c+1602,"wb_allowin", false,-1);
    tracep->declBit(c+63,"ex_to_mem_valid", false,-1);
    tracep->declBit(c+64,"mem_to_wb_valid", false,-1);
    tracep->declArray(c+78,"ex_to_mem_bus", false,-1, 261,0);
    tracep->declArray(c+87,"mem_to_wb_bus", false,-1, 320,0);
    tracep->declQuad(c+98,"mem_alu_output", false,-1, 63,0);
    tracep->declQuad(c+101,"mem_final_rdata", false,-1, 63,0);
    tracep->declBit(c+100,"mem_memread", false,-1);
    tracep->declBit(c+67,"ex_flush", false,-1);
    tracep->declBit(c+59,"ex_ready_go", false,-1);
    tracep->declBit(c+68,"mem_flush", false,-1);
    tracep->declBit(c+60,"cache_pipelinehit", false,-1);
    tracep->declBus(c+112,"cache_state", false,-1, 2,0);
    tracep->declBit(c+1340,"mem_memwrite", false,-1);
    tracep->declQuad(c+1341,"mem_diff_addr", false,-1, 63,0);
    tracep->declQuad(c+1343,"mem_diff_data", false,-1, 63,0);
    tracep->declBus(c+1345,"mem_memop", false,-1, 2,0);
    tracep->declBus(c+1346,"ex_memop", false,-1, 2,0);
    tracep->declQuad(c+1347,"mem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+1349,"lb", false,-1);
    tracep->declBit(c+1350,"lh", false,-1);
    tracep->declBit(c+1351,"lw", false,-1);
    tracep->declBit(c+1352,"ld", false,-1);
    tracep->declBit(c+1353,"lbu", false,-1);
    tracep->declBit(c+1354,"lhu", false,-1);
    tracep->declBit(c+1355,"lwu", false,-1);
    tracep->declBit(c+1356,"sb", false,-1);
    tracep->declBit(c+1357,"sh", false,-1);
    tracep->declBit(c+1358,"sw", false,-1);
    tracep->declBit(c+1359,"sd", false,-1);
    tracep->declBit(c+1602,"mem_ready_go", false,-1);
    tracep->declBit(c+1360,"mem_reg_wen", false,-1);
    tracep->declBus(c+1361,"mem_rs1", false,-1, 4,0);
    tracep->declQuad(c+1362,"mem_alu_input1", false,-1, 63,0);
    tracep->declBus(c+1364,"mem_des_csr", false,-1, 11,0);
    tracep->declBus(c+1365,"mem_rd", false,-1, 4,0);
    tracep->declBus(c+1366,"mem_pc", false,-1, 31,0);
    tracep->declBit(c+1367,"mem_jalr", false,-1);
    tracep->declQuad(c+1368,"mem_wdata_tmp", false,-1, 63,0);
    tracep->declQuad(c+1663,"mem_wdata", false,-1, 63,0);
    tracep->declBit(c+64,"mem_valid", false,-1);
    tracep->declBit(c+1370,"mem_mret", false,-1);
    tracep->declBit(c+1371,"mem_ecall", false,-1);
    tracep->declBit(c+1372,"mem_csrrw", false,-1);
    tracep->declBit(c+1373,"mem_csrrs", false,-1);
    tracep->declBit(c+1374,"mem_csrrc", false,-1);
    tracep->declBit(c+1375,"mem_csrrwi", false,-1);
    tracep->declBit(c+1376,"mem_csrrsi", false,-1);
    tracep->declBit(c+1377,"mem_csrrci", false,-1);
    tracep->declBit(c+1378,"mem_csr_we", false,-1);
    tracep->declBit(c+1379,"ex_lb", false,-1);
    tracep->declBit(c+1380,"ex_lh", false,-1);
    tracep->declBit(c+1381,"ex_lw", false,-1);
    tracep->declBit(c+1382,"ex_ld", false,-1);
    tracep->declBit(c+1383,"ex_lbu", false,-1);
    tracep->declBit(c+1384,"ex_lhu", false,-1);
    tracep->declBit(c+1385,"ex_lwu", false,-1);
    tracep->declBit(c+1386,"ex_sb", false,-1);
    tracep->declBit(c+1387,"ex_sh", false,-1);
    tracep->declBit(c+1388,"ex_sw", false,-1);
    tracep->declBit(c+1389,"ex_sd", false,-1);
    tracep->declArray(c+1390,"ex_to_mem_bus_reg", false,-1, 261,0);
    tracep->declQuad(c+1399,"doubly_aligned_data", false,-1, 63,0);
    tracep->declQuad(c+1401,"rawdata", false,-1, 63,0);
    tracep->declBus(c+1403,"ex_addr_lowmask", false,-1, 7,0);
    tracep->declBus(c+1404,"mem_addr_lowmask", false,-1, 7,0);
    tracep->declBus(c+1405,"ex_wmask", false,-1, 7,0);
    tracep->declBus(c+1665,"ex_size", false,-1, 1,0);
    tracep->pushNamePrefix("dcache ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declQuad(c+115,"input_addr", false,-1, 63,0);
    tracep->declQuad(c+1406,"input_wdata", false,-1, 63,0);
    tracep->declBit(c+1408,"input_memwrite", false,-1);
    tracep->declBit(c+117,"input_memread", false,-1);
    tracep->declBit(c+1409,"input_valid", false,-1);
    tracep->declBus(c+1410,"input_size", false,-1, 1,0);
    tracep->declBus(c+1405,"input_strb", false,-1, 7,0);
    tracep->declQuad(c+1399,"output_data", false,-1, 63,0);
    tracep->declBit(c+60,"cache_pipelinehit", false,-1);
    tracep->declBus(c+112,"cache_state", false,-1, 2,0);
    tracep->declQuad(c+1343,"diff_data", false,-1, 63,0);
    tracep->declQuad(c+1341,"diff_addr", false,-1, 63,0);
    tracep->declBus(c+1411,"input_size_reg", false,-1, 1,0);
    tracep->declBus(c+1412,"input_offset_reg", false,-1, 3,0);
    tracep->declBit(c+1413,"cache_way0hit_reg", false,-1);
    tracep->declBit(c+1414,"cache_way1hit_reg", false,-1);
    tracep->declBus(c+1666,"mem_addr", false,-1, 31,0);
    tracep->declArray(c+1415,"axi_req_data", false,-1, 127,0);
    tracep->declBit(c+1667,"mem_wen", false,-1);
    tracep->declBus(c+1668,"mem_strb", false,-1, 7,0);
    tracep->declBit(c+1419,"axi_res_valid", false,-1);
    tracep->declBit(c+1420,"axi_req_wen", false,-1);
    tracep->declBus(c+1421,"axi_req_strb", false,-1, 7,0);
    tracep->declBit(c+1422,"axi_req_valid", false,-1);
    tracep->declQuad(c+1423,"axi_req_addr", false,-1, 63,0);
    tracep->declArray(c+1425,"axi_mrdata", false,-1, 127,0);
    tracep->declBus(c+1603,"IDLE", false,-1, 2,0);
    tracep->declBus(c+1604,"LOOKUP", false,-1, 2,0);
    tracep->declBus(c+1605,"MISS", false,-1, 2,0);
    tracep->declBus(c+1606,"REPLACE", false,-1, 2,0);
    tracep->declBus(c+1607,"REFILL", false,-1, 2,0);
    tracep->declBus(c+1608,"MISS_STALL", false,-1, 2,0);
    tracep->declBus(c+1609,"REFILL_STALL", false,-1, 2,0);
    tracep->declBus(c+1669,"DUNJIAO", false,-1, 2,0);
    tracep->declBus(c+1670,"SETS", false,-1, 31,0);
    tracep->declBus(c+1429,"input_tag", false,-1, 20,0);
    tracep->declBus(c+1430,"input_index", false,-1, 6,0);
    tracep->declBus(c+1431,"input_offset", false,-1, 3,0);
    tracep->declBus(c+1432,"cache_index_reg", false,-1, 6,0);
    tracep->declBus(c+1433,"cache_offset_reg", false,-1, 3,0);
    tracep->declArray(c+1434,"cache_strb", false,-1, 127,0);
    tracep->declBit(c+1438,"cache_wen_way0", false,-1);
    tracep->declBit(c+1439,"cache_wen_way1", false,-1);
    tracep->declArray(c+1440,"cache_wdata", false,-1, 127,0);
    tracep->declBit(c+1444,"cache_miss", false,-1);
    tracep->declBit(c+1445,"cache_wen_way0_reg", false,-1);
    tracep->declBit(c+1446,"cache_wen_way1_reg", false,-1);
    tracep->declQuad(c+1447,"ex_cache_strb", false,-1, 63,0);
    tracep->declArray(c+1449,"cache_rdata_way0", false,-1, 127,0);
    tracep->declArray(c+1453,"cache_rdata_way1", false,-1, 127,0);
    tracep->declBit(c+1457,"cache_way0hit", false,-1);
    tracep->declBit(c+1458,"cache_way1hit", false,-1);
    tracep->declBit(c+1459,"cache_way0dirty", false,-1);
    tracep->declBit(c+1460,"cache_way1dirty", false,-1);
    tracep->declBit(c+1461,"cache_way0valid", false,-1);
    tracep->declBit(c+1462,"cache_way1valid", false,-1);
    tracep->declQuad(c+1463,"output_data_way0", false,-1, 63,0);
    tracep->declQuad(c+1465,"output_data_way1", false,-1, 63,0);
    tracep->declQuad(c+1467,"ex_cache_wdata", false,-1, 63,0);
    tracep->declBit(c+1469,"cache_raw_way0", false,-1);
    tracep->declBit(c+1470,"cache_raw_way1", false,-1);
    tracep->declBit(c+1471,"cache_raw", false,-1);
    tracep->declBit(c+1472,"cnt", false,-1);
    tracep->pushNamePrefix("dcache_way1 ");
    tracep->declBus(c+1670,"Bits", false,-1, 31,0);
    tracep->declBus(c+1670,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+1611,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+1670,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+1449,"Q", false,-1, 127,0);
    tracep->declBit(c+1569,"CLK", false,-1);
    tracep->declBit(c+1473,"CEN", false,-1);
    tracep->declBit(c+1438,"WEN", false,-1);
    tracep->declArray(c+1434,"BWEN", false,-1, 127,0);
    tracep->declBus(c+1430,"A", false,-1, 6,0);
    tracep->declArray(c+1440,"D", false,-1, 127,0);
    tracep->declBit(c+1473,"cen", false,-1);
    tracep->declBit(c+1438,"wen", false,-1);
    tracep->declArray(c+1434,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache_way2 ");
    tracep->declBus(c+1670,"Bits", false,-1, 31,0);
    tracep->declBus(c+1670,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+1611,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+1670,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+1453,"Q", false,-1, 127,0);
    tracep->declBit(c+1569,"CLK", false,-1);
    tracep->declBit(c+1473,"CEN", false,-1);
    tracep->declBit(c+1439,"WEN", false,-1);
    tracep->declArray(c+1434,"BWEN", false,-1, 127,0);
    tracep->declBus(c+1430,"A", false,-1, 6,0);
    tracep->declArray(c+1440,"D", false,-1, 127,0);
    tracep->declBit(c+1473,"cen", false,-1);
    tracep->declBit(c+1439,"wen", false,-1);
    tracep->declArray(c+1434,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1474,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+1475,"in", false,-1, 2,0);
    tracep->declBus(c+1403,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb ");
    tracep->declBit(c+1569,"clk", false,-1);
    tracep->declBit(c+1570,"rst", false,-1);
    tracep->declBit(c+1602,"wb_allowin", false,-1);
    tracep->declBit(c+64,"mem_to_wb_valid", false,-1);
    tracep->declArray(c+87,"mem_to_wb_bus", false,-1, 320,0);
    tracep->declBus(c+50,"raddr1", false,-1, 4,0);
    tracep->declBus(c+51,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+52,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+54,"rdata2", false,-1, 63,0);
    tracep->declBus(c+110,"wb_rd", false,-1, 4,0);
    tracep->declQuad(c+103,"wb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+1572,"wb_valid", false,-1);
    tracep->declBus(c+1573,"wb_pc", false,-1, 31,0);
    tracep->declBit(c+111,"wb_reg_wen", false,-1);
    tracep->declQuad(c+105,"wb_csrwdata", false,-1, 63,0);
    tracep->declQuad(c+107,"wb_csrrdata", false,-1, 63,0);
    tracep->declBit(c+65,"wb_mret", false,-1);
    tracep->declBit(c+109,"wb_csr_we", false,-1);
    tracep->declQuad(c+1574,"csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+1576,"csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+1578,"csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+1580,"csr_mcause", false,-1, 63,0);
    tracep->declQuad(c+1582,"csr_mie", false,-1, 63,0);
    tracep->declQuad(c+1584,"csr_mip", false,-1, 63,0);
    tracep->declQuad(c+1586,"csr_mscratch", false,-1, 63,0);
    tracep->declQuad(c+37,"csr_mhartid", false,-1, 63,0);
    tracep->declBit(c+1590,"wb_memwrite", false,-1);
    tracep->declQuad(c+1593,"wb_diff_data", false,-1, 63,0);
    tracep->declQuad(c+1591,"wb_diff_addr", false,-1, 63,0);
    tracep->declBit(c+68,"mem_flush", false,-1);
    tracep->declBus(c+1671,"MTVEC", false,-1, 11,0);
    tracep->declBus(c+1672,"MCAUSE", false,-1, 11,0);
    tracep->declBus(c+1673,"MSTATUS", false,-1, 11,0);
    tracep->declBus(c+1674,"MEPC", false,-1, 11,0);
    tracep->declBus(c+1675,"MIE", false,-1, 11,0);
    tracep->declBus(c+1676,"MIP", false,-1, 11,0);
    tracep->declBus(c+1677,"MSCRATCH", false,-1, 11,0);
    tracep->declBus(c+1678,"MHARTID", false,-1, 11,0);
    tracep->declBus(c+1476,"wb_des_csr", false,-1, 11,0);
    tracep->declQuad(c+1477,"wb_reg_wdata_tmp", false,-1, 63,0);
    tracep->declBus(c+1479,"mstatus_mpp", false,-1, 1,0);
    tracep->declBit(c+1480,"mstatus_mpie", false,-1);
    tracep->declBit(c+1481,"mstatus_mie", false,-1);
    tracep->declBit(c+1482,"wb_flush", false,-1);
    tracep->declBus(c+1483,"wb_rs1", false,-1, 4,0);
    tracep->declBit(c+1484,"wb_ecall", false,-1);
    tracep->declBit(c+1485,"wb_csrrw", false,-1);
    tracep->declBit(c+1486,"wb_csrrs", false,-1);
    tracep->declBit(c+1487,"wb_csrrc", false,-1);
    tracep->declBit(c+1488,"wb_csrrwi", false,-1);
    tracep->declBit(c+1489,"wb_csrrsi", false,-1);
    tracep->declBit(c+1490,"wb_csrrci", false,-1);
    tracep->declQuad(c+1491,"wb_alu_input1", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1493+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declArray(c+1557,"mem_to_wb_bus_reg", false,-1, 320,0);
    tracep->declBit(c+1568,"non_zerow", false,-1);
    tracep->declBit(c+1602,"wb_ready_go", false,-1);
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
    VlWide<9>/*287:0*/ __Vtemp_h6ae3444b__0;
    VlWide<4>/*127:0*/ __Vtemp_h1fdd8292__0;
    VlWide<4>/*127:0*/ __Vtemp_h5a241144__0;
    VlWide<4>/*127:0*/ __Vtemp_h76c294e2__0;
    VlWide<4>/*127:0*/ __Vtemp_hc42eddb7__0;
    VlWide<4>/*127:0*/ __Vtemp_h1fdd8292__1;
    VlWide<4>/*127:0*/ __Vtemp_h522dbf0a__0;
    VlWide<4>/*127:0*/ __Vtemp_h1a534702__0;
    VlWide<4>/*127:0*/ __Vtemp_h5a241144__2;
    VlWide<4>/*127:0*/ __Vtemp_hc0fdef7e__0;
    VlWide<4>/*127:0*/ __Vtemp_h21d0374a__0;
    VlWide<3>/*95:0*/ __Vtemp_h5e726cb9__0;
    VlWide<3>/*95:0*/ __Vtemp_h2024e4e5__0;
    VlWide<3>/*95:0*/ __Vtemp_hdab1d851__0;
    VlWide<3>/*95:0*/ __Vtemp_h9fb190ff__0;
    VlWide<4>/*127:0*/ __Vtemp_ha2f4aa87__0;
    VlWide<4>/*127:0*/ __Vtemp_h84c11fea__0;
    VlWide<4>/*127:0*/ __Vtemp_ha13feb02__0;
    VlWide<4>/*127:0*/ __Vtemp_h05f44798__0;
    VlWide<4>/*127:0*/ __Vtemp_he62c9636__0;
    VlWide<4>/*127:0*/ __Vtemp_hcbf1bc4f__0;
    VlWide<4>/*127:0*/ __Vtemp_he15e0589__0;
    VlWide<4>/*127:0*/ __Vtemp_h56daa6d4__0;
    VlWide<4>/*127:0*/ __Vtemp_h4595720e__0;
    VlWide<4>/*127:0*/ __Vtemp_h4ee7a19f__0;
    VlWide<4>/*127:0*/ __Vtemp_h59366efe__0;
    VlWide<4>/*127:0*/ __Vtemp_he7eaeb27__0;
    VlWide<4>/*127:0*/ __Vtemp_h04be3098__0;
    VlWide<4>/*127:0*/ __Vtemp_h2ad69785__0;
    VlWide<4>/*127:0*/ __Vtemp_h0254ffe9__0;
    VlWide<4>/*127:0*/ __Vtemp_hb73adfb5__0;
    VlWide<4>/*127:0*/ __Vtemp_h2e174758__0;
    VlWide<4>/*127:0*/ __Vtemp_h69355225__0;
    VlWide<4>/*127:0*/ __Vtemp_hc43fb470__0;
    VlWide<4>/*127:0*/ __Vtemp_h30ce69e9__0;
    VlWide<4>/*127:0*/ __Vtemp_h6208bde2__0;
    VlWide<4>/*127:0*/ __Vtemp_h49da03eb__0;
    VlWide<4>/*127:0*/ __Vtemp_had93eb43__0;
    VlWide<4>/*127:0*/ __Vtemp_h3c043eb5__0;
    VlWide<4>/*127:0*/ __Vtemp_ha924c5a8__0;
    VlWide<4>/*127:0*/ __Vtemp_h6241e666__0;
    VlWide<4>/*127:0*/ __Vtemp_hc7598cf0__0;
    VlWide<4>/*127:0*/ __Vtemp_h818b2e10__0;
    VlWide<4>/*127:0*/ __Vtemp_he11f6c98__0;
    VlWide<4>/*127:0*/ __Vtemp_h544cee01__0;
    VlWide<4>/*127:0*/ __Vtemp_h604618a7__0;
    VlWide<4>/*127:0*/ __Vtemp_h0011670c__0;
    VlWide<4>/*127:0*/ __Vtemp_h456941c4__0;
    VlWide<4>/*127:0*/ __Vtemp_he78eae4f__0;
    VlWide<4>/*127:0*/ __Vtemp_hea00f9ba__0;
    VlWide<4>/*127:0*/ __Vtemp_h3407a5e1__0;
    VlWide<4>/*127:0*/ __Vtemp_h8015b798__0;
    VlWide<4>/*127:0*/ __Vtemp_hf57249c8__0;
    VlWide<4>/*127:0*/ __Vtemp_hef724dde__0;
    VlWide<4>/*127:0*/ __Vtemp_h1ab3a480__0;
    VlWide<4>/*127:0*/ __Vtemp_he7ec8c7e__0;
    VlWide<4>/*127:0*/ __Vtemp_h2629b991__0;
    VlWide<4>/*127:0*/ __Vtemp_h3aac0a00__0;
    VlWide<4>/*127:0*/ __Vtemp_hb732e964__0;
    VlWide<4>/*127:0*/ __Vtemp_h046a7832__0;
    VlWide<4>/*127:0*/ __Vtemp_h6d418be5__0;
    VlWide<4>/*127:0*/ __Vtemp_h0182840a__0;
    VlWide<4>/*127:0*/ __Vtemp_hb214662e__0;
    VlWide<4>/*127:0*/ __Vtemp_h5146fe53__0;
    VlWide<4>/*127:0*/ __Vtemp_h1cac1abb__0;
    VlWide<4>/*127:0*/ __Vtemp_h86d60f8f__0;
    VlWide<4>/*127:0*/ __Vtemp_h7f006057__0;
    VlWide<4>/*127:0*/ __Vtemp_h2e51ecc1__0;
    VlWide<4>/*127:0*/ __Vtemp_hc633255e__0;
    VlWide<4>/*127:0*/ __Vtemp_h5f7d747f__0;
    VlWide<4>/*127:0*/ __Vtemp_h7f9cc2a2__0;
    VlWide<4>/*127:0*/ __Vtemp_h2ecbf711__0;
    VlWide<4>/*127:0*/ __Vtemp_haf5dff14__0;
    VlWide<4>/*127:0*/ __Vtemp_h9f8a9bcc__0;
    VlWide<4>/*127:0*/ __Vtemp_h65fcf2e9__0;
    VlWide<4>/*127:0*/ __Vtemp_h6b5a749e__0;
    VlWide<4>/*127:0*/ __Vtemp_hbc51cd3a__0;
    VlWide<4>/*127:0*/ __Vtemp_hbe7230a4__0;
    VlWide<4>/*127:0*/ __Vtemp_h5e80b166__0;
    VlWide<4>/*127:0*/ __Vtemp_hf17187cd__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1718a09__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1718856__0;
    VlWide<4>/*127:0*/ __Vtemp_h92c348b0__0;
    VlWide<4>/*127:0*/ __Vtemp_h173af8c6__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1718a91__0;
    VlWide<4>/*127:0*/ __Vtemp_hf17188d4__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1718b12__0;
    VlWide<4>/*127:0*/ __Vtemp_h7152695f__0;
    VlWide<4>/*127:0*/ __Vtemp_h41363071__0;
    VlWide<4>/*127:0*/ __Vtemp_hf17195a5__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1718b8a__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1718a27__0;
    VlWide<4>/*127:0*/ __Vtemp_hae126eed__0;
    VlWide<4>/*127:0*/ __Vtemp_hc13907b7__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1719407__0;
    VlWide<4>/*127:0*/ __Vtemp_hf1718a4c__0;
    VlWide<4>/*127:0*/ __Vtemp_h07c4056d__0;
    VlWide<4>/*127:0*/ __Vtemp_hb0af998d__0;
    VlWide<4>/*127:0*/ __Vtemp_hf5d7ba4d__0;
    VlWide<4>/*127:0*/ __Vtemp_h00f21e9e__0;
    VlWide<4>/*127:0*/ __Vtemp_h7ce663a5__0;
    VlWide<4>/*127:0*/ __Vtemp_hac2a4a9e__0;
    VlWide<4>/*127:0*/ __Vtemp_hfcaac4cd__0;
    VlWide<4>/*127:0*/ __Vtemp_h3c616819__0;
    VlWide<4>/*127:0*/ __Vtemp_hb6585417__0;
    VlWide<4>/*127:0*/ __Vtemp_hf5531076__0;
    VlWide<4>/*127:0*/ __Vtemp_h57954f3d__0;
    VlWide<4>/*127:0*/ __Vtemp_h7f281be0__0;
    VlWide<4>/*127:0*/ __Vtemp_h2e2ac58e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd7c89330__0;
    VlWide<4>/*127:0*/ __Vtemp_h2e9ce97d__0;
    VlWide<4>/*127:0*/ __Vtemp_h1527ddb5__0;
    VlWide<4>/*127:0*/ __Vtemp_h75d709c3__0;
    VlWide<4>/*127:0*/ __Vtemp_h779da789__0;
    VlWide<4>/*127:0*/ __Vtemp_h9354c33b__0;
    VlWide<4>/*127:0*/ __Vtemp_h4b9ad8a3__0;
    VlWide<4>/*127:0*/ __Vtemp_h631ff6d7__0;
    VlWide<4>/*127:0*/ __Vtemp_hf43c4642__0;
    VlWide<4>/*127:0*/ __Vtemp_hf43c4783__0;
    VlWide<4>/*127:0*/ __Vtemp_hf43c46c8__0;
    VlWide<4>/*127:0*/ __Vtemp_hd011b6c0__0;
    VlWide<4>/*127:0*/ __Vtemp_h010b5776__0;
    VlWide<4>/*127:0*/ __Vtemp_hf43c43fb__0;
    VlWide<4>/*127:0*/ __Vtemp_hf43c473f__0;
    VlWide<4>/*127:0*/ __Vtemp_hf43c447e__0;
    VlWide<4>/*127:0*/ __Vtemp_h32f509e6__0;
    VlWide<4>/*127:0*/ __Vtemp_h3692e320__0;
    VlWide<4>/*127:0*/ __Vtemp_hf43c43bd__0;
    VlWide<4>/*127:0*/ __Vtemp_hdbcd2375__0;
    VlWide<4>/*127:0*/ __Vtemp_he45c737d__0;
    VlWide<4>/*127:0*/ __Vtemp_h7097f915__0;
    VlWide<4>/*127:0*/ __Vtemp_h27c1727b__0;
    VlWide<4>/*127:0*/ __Vtemp_hb3ce6205__0;
    VlWide<4>/*127:0*/ __Vtemp_h4c5c1491__0;
    VlWide<4>/*127:0*/ __Vtemp_hb3ce6544__0;
    VlWide<4>/*127:0*/ __Vtemp_h062ec0c0__0;
    VlWide<4>/*127:0*/ __Vtemp_hb3ce647d__0;
    VlWide<4>/*127:0*/ __Vtemp_h434bb540__0;
    VlWide<4>/*127:0*/ __Vtemp_hc42eda11__0;
    VlWide<4>/*127:0*/ __Vtemp_h69bc9e05__0;
    VlWide<4>/*127:0*/ __Vtemp_had8bdbe8__0;
    VlWide<4>/*127:0*/ __Vtemp_h2a7b3d93__0;
    VlWide<4>/*127:0*/ __Vtemp_hb3ce61b9__0;
    VlWide<4>/*127:0*/ __Vtemp_ha582bfc5__0;
    VlWide<4>/*127:0*/ __Vtemp_hb3ce64fa__0;
    VlWide<4>/*127:0*/ __Vtemp_h97d19be7__0;
    VlWide<4>/*127:0*/ __Vtemp_hb3ce6447__0;
    VlWide<4>/*127:0*/ __Vtemp_h9782f714__0;
    VlWide<4>/*127:0*/ __Vtemp_h977c8557__0;
    VlWide<4>/*127:0*/ __Vtemp_h43107266__0;
    VlWide<4>/*127:0*/ __Vtemp_h8816b1a8__0;
    VlWide<4>/*127:0*/ __Vtemp_hc21668af__0;
    VlWide<4>/*127:0*/ __Vtemp_h7aa39406__0;
    VlWide<4>/*127:0*/ __Vtemp_h7aa38ec3__0;
    VlWide<4>/*127:0*/ __Vtemp_h7aa38f88__0;
    VlWide<4>/*127:0*/ __Vtemp_h8eaa5fe3__0;
    VlWide<4>/*127:0*/ __Vtemp_hed7aab57__0;
    VlWide<4>/*127:0*/ __Vtemp_h7aa38e4b__0;
    VlWide<4>/*127:0*/ __Vtemp_h7aa38f0f__0;
    VlWide<4>/*127:0*/ __Vtemp_h02d88ba1__0;
    VlWide<4>/*127:0*/ __Vtemp_h17db7681__0;
    VlWide<4>/*127:0*/ __Vtemp_h02d88ba1__1;
    VlWide<4>/*127:0*/ __Vtemp_hae07de05__0;
    VlWide<4>/*127:0*/ __Vtemp_h5868981e__0;
    VlWide<4>/*127:0*/ __Vtemp_h02d88ba1__2;
    VlWide<4>/*127:0*/ __Vtemp_hf351dc3d__0;
    VlWide<4>/*127:0*/ __Vtemp_h02d88ba1__3;
    VlWide<4>/*127:0*/ __Vtemp_h7de6b44b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc9a0e09f__0;
    VlWide<4>/*127:0*/ __Vtemp_h02d889e4__0;
    VlWide<4>/*127:0*/ __Vtemp_hf4d9a659__0;
    VlWide<4>/*127:0*/ __Vtemp_h02d88d27__0;
    VlWide<4>/*127:0*/ __Vtemp_h3baf7741__0;
    VlWide<4>/*127:0*/ __Vtemp_h02d88d5c__0;
    VlWide<4>/*127:0*/ __Vtemp_hbda4f3d7__0;
    VlWide<4>/*127:0*/ __Vtemp_he90a56f4__0;
    VlWide<4>/*127:0*/ __Vtemp_h105cd53d__0;
    VlWide<4>/*127:0*/ __Vtemp_h733eaa06__0;
    VlWide<4>/*127:0*/ __Vtemp_h1c934518__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a1cf969__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a1cf635__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a1cf8ec__0;
    VlWide<4>/*127:0*/ __Vtemp_h8bd31a77__0;
    VlWide<4>/*127:0*/ __Vtemp_h04764766__0;
    VlWide<4>/*127:0*/ __Vtemp_h389af2c0__0;
    VlWide<4>/*127:0*/ __Vtemp_h27ad1993__0;
    VlWide<4>/*127:0*/ __Vtemp_h389ae07c__0;
    VlWide<4>/*127:0*/ __Vtemp_h2fe70ba8__0;
    VlWide<4>/*127:0*/ __Vtemp_h389af339__0;
    VlWide<4>/*127:0*/ __Vtemp_h2505e54d__0;
    VlWide<4>/*127:0*/ __Vtemp_hf4b4c777__0;
    VlWide<4>/*127:0*/ __Vtemp_hb4268308__0;
    VlWide<4>/*127:0*/ __Vtemp_hc256cb40__0;
    VlWide<4>/*127:0*/ __Vtemp_hfb626bf9__0;
    VlWide<4>/*127:0*/ __Vtemp_hafce953c__0;
    VlWide<4>/*127:0*/ __Vtemp_hafce9280__0;
    VlWide<4>/*127:0*/ __Vtemp_h1f409a06__0;
    VlWide<4>/*127:0*/ __Vtemp_he96a18d8__0;
    VlWide<4>/*127:0*/ __Vtemp_h1f409a06__1;
    VlWide<4>/*127:0*/ __Vtemp_hcf17f604__0;
    VlWide<4>/*127:0*/ __Vtemp_h338341c3__0;
    VlWide<4>/*127:0*/ __Vtemp_h1f409a06__2;
    VlWide<4>/*127:0*/ __Vtemp_he78ee9ec__0;
    VlWide<4>/*127:0*/ __Vtemp_h1f409a06__3;
    VlWide<4>/*127:0*/ __Vtemp_h34003953__0;
    VlWide<4>/*127:0*/ __Vtemp_hc0bfc1cd__0;
    VlWide<4>/*127:0*/ __Vtemp_hb135bb7f__0;
    VlWide<4>/*127:0*/ __Vtemp_hb135b9bb__0;
    VlWide<4>/*127:0*/ __Vtemp_h5a241080__0;
    VlWide<4>/*127:0*/ __Vtemp_h2e2480e7__0;
    VlWide<4>/*127:0*/ __Vtemp_h1fdd8292__2;
    VlWide<4>/*127:0*/ __Vtemp_h5a241144__3;
    VlWide<4>/*127:0*/ __Vtemp_h0866dee8__0;
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
    tracep->fullQData(oldp+37,(vlSelf->ysyx_22040127_top__DOT__mhartid),64);
    tracep->fullQData(oldp+39,(vlSelf->ysyx_22040127_top__DOT__if_pcdata),64);
    tracep->fullIData(oldp+41,(vlSelf->ysyx_22040127_top__DOT__if_instruction),32);
    tracep->fullBit(oldp+42,(((IData)((0x100073U == 
                                       (0x10007fU & vlSelf->ysyx_22040127_top__DOT__if_instruction))) 
                              & (~ (IData)((0U != (0xffefff80U 
                                                   & vlSelf->ysyx_22040127_top__DOT__if_instruction)))))));
    tracep->fullBit(oldp+43,((0x7bU == (0x7fU & vlSelf->ysyx_22040127_top__DOT__if_instruction))));
    tracep->fullBit(oldp+44,(vlSelf->ysyx_22040127_top__DOT__id_ebreak));
    tracep->fullBit(oldp+45,(vlSelf->ysyx_22040127_top__DOT__ex_ebreak));
    tracep->fullBit(oldp+46,(vlSelf->ysyx_22040127_top__DOT__mem_ebreak));
    tracep->fullBit(oldp+47,(vlSelf->ysyx_22040127_top__DOT__wb_ebreak));
    tracep->fullIData(oldp+48,(((((- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken))) 
                                  & ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg) 
                                     + (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm))) 
                                 | (0xfffffffeU & (
                                                   (- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr))) 
                                                   & ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final) 
                                                      + 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                               >> 0x3fU))))) 
                                                        << 0xcU) 
                                                       | (0xfffU 
                                                          & (IData)(
                                                                    (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                     >> 0x34U)))))))) 
                                | ((- (IData)((3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                                   & ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg) 
                                      + (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1))))),32);
    tracep->fullBit(oldp+49,(vlSelf->ysyx_22040127_top__DOT__id_branch_taken));
    tracep->fullCData(oldp+50,((0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                 >> 0x2fU)))),5);
    tracep->fullCData(oldp+51,((0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                 >> 0x34U)))),5);
    tracep->fullQData(oldp+52,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf
                               [(0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                  >> 0x2fU)))]),64);
    tracep->fullQData(oldp+54,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf
                               [(0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                  >> 0x34U)))]),64);
    tracep->fullBit(oldp+56,(vlSelf->ysyx_22040127_top__DOT__if_allowin));
    tracep->fullBit(oldp+57,(vlSelf->ysyx_22040127_top__DOT__id_allowin));
    tracep->fullBit(oldp+58,(vlSelf->ysyx_22040127_top__DOT__ex_allowin));
    tracep->fullBit(oldp+59,(vlSelf->ysyx_22040127_top__DOT__ex_ready_go));
    tracep->fullBit(oldp+60,((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state)) 
                               & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0hit) 
                                  | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1hit))) 
                              | ((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__cache_state)) 
                                 & ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_raw)) 
                                    & ((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0hit) 
                                       | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1hit)))))));
    tracep->fullBit(oldp+61,(vlSelf->ysyx_22040127_top__DOT__if_valid));
    tracep->fullBit(oldp+62,(vlSelf->ysyx_22040127_top__DOT__id_to_ex_valid));
    tracep->fullBit(oldp+63,(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_valid));
    tracep->fullBit(oldp+64,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_valid));
    tracep->fullBit(oldp+65,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                    >> 0xdU))));
    tracep->fullBit(oldp+66,(vlSelf->ysyx_22040127_top__DOT__id_flush));
    tracep->fullBit(oldp+67,(vlSelf->ysyx_22040127_top__DOT__ex_flush));
    tracep->fullBit(oldp+68,(vlSelf->ysyx_22040127_top__DOT__mem_flush));
    __Vtemp_h6ae3444b__0[0U] = (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final);
    __Vtemp_h6ae3444b__0[1U] = (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final 
                                        >> 0x20U));
    __Vtemp_h6ae3444b__0[2U] = (IData)((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                         | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                         ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                         : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final));
    __Vtemp_h6ae3444b__0[3U] = (IData)(((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                          | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                          ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                          : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final) 
                                        >> 0x20U));
    __Vtemp_h6ae3444b__0[4U] = (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1);
    __Vtemp_h6ae3444b__0[5U] = (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1 
                                        >> 0x20U));
    __Vtemp_h6ae3444b__0[6U] = (((IData)((((QData)((IData)(
                                                           (0xfffU 
                                                            & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm)))) 
                                           << 0x34U) 
                                          | (((QData)((IData)(
                                                              ((0x3020000000000000ULL 
                                                                == 
                                                                (0xffffff8000000000ULL 
                                                                 & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                               & (6U 
                                                                  == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                              << 0x33U) 
                                             | (((QData)((IData)(
                                                                 ((~ (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x1ffffffU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x27U)))))) 
                                                                  & (6U 
                                                                     == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    ((0x100000000000ULL 
                                                                      == 
                                                                      (0x700000000000ULL 
                                                                       & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                     & (6U 
                                                                        == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(
                                                                       ((0x200000000000ULL 
                                                                         == 
                                                                         (0x700000000000ULL 
                                                                          & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                        & (6U 
                                                                           == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          ((0x300000000000ULL 
                                                                            == 
                                                                            (0x700000000000ULL 
                                                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                           & (6U 
                                                                              == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             ((0x500000000000ULL 
                                                                               == 
                                                                               (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                              & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                ((0x600000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                << 0x2dU) 
                                                               | (((QData)((IData)(
                                                                                ((0x700000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x3eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x39U)) 
                                                                                << 0xaU)) 
                                                                                | (0x3c0U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x23U)) 
                                                                                << 6U)))) 
                                                                                | ((0x38U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
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
                                                                                << 2U)) 
                                                                                | (((2U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0x300000000ULL 
                                                                                == 
                                                                                (0x7f00000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)))))))))))))))))))) 
                                 << 0x13U) | ((0x7c000U 
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
                                                       | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr))))));
    __Vtemp_h6ae3444b__0[7U] = (((IData)((((QData)((IData)(
                                                           (0xfffU 
                                                            & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm)))) 
                                           << 0x34U) 
                                          | (((QData)((IData)(
                                                              ((0x3020000000000000ULL 
                                                                == 
                                                                (0xffffff8000000000ULL 
                                                                 & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                               & (6U 
                                                                  == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                              << 0x33U) 
                                             | (((QData)((IData)(
                                                                 ((~ (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x1ffffffU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x27U)))))) 
                                                                  & (6U 
                                                                     == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    ((0x100000000000ULL 
                                                                      == 
                                                                      (0x700000000000ULL 
                                                                       & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                     & (6U 
                                                                        == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(
                                                                       ((0x200000000000ULL 
                                                                         == 
                                                                         (0x700000000000ULL 
                                                                          & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                        & (6U 
                                                                           == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          ((0x300000000000ULL 
                                                                            == 
                                                                            (0x700000000000ULL 
                                                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                           & (6U 
                                                                              == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             ((0x500000000000ULL 
                                                                               == 
                                                                               (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                              & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                ((0x600000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                << 0x2dU) 
                                                               | (((QData)((IData)(
                                                                                ((0x700000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x3eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x39U)) 
                                                                                << 0xaU)) 
                                                                                | (0x3c0U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x23U)) 
                                                                                << 6U)))) 
                                                                                | ((0x38U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
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
                                                                                << 2U)) 
                                                                                | (((2U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0x300000000ULL 
                                                                                == 
                                                                                (0x7f00000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)))))))))))))))))))) 
                                 >> 0xdU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm)))) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(
                                                                           ((0x3020000000000000ULL 
                                                                             == 
                                                                             (0xffffff8000000000ULL 
                                                                              & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                            & (6U 
                                                                               == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(
                                                                              ((~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1ffffffU 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x27U)))))) 
                                                                               & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                              << 0x32U) 
                                                             | (((QData)((IData)(
                                                                                ((0x100000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                 << 0x31U) 
                                                                | (((QData)((IData)(
                                                                                ((0x200000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                    << 0x30U) 
                                                                   | (((QData)((IData)(
                                                                                ((0x300000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                       << 0x2fU) 
                                                                      | (((QData)((IData)(
                                                                                ((0x500000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                          << 0x2eU) 
                                                                         | (((QData)((IData)(
                                                                                ((0x600000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                             << 0x2dU) 
                                                                            | (((QData)((IData)(
                                                                                ((0x700000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                                << 0x2cU) 
                                                                               | (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                << 0xcU) 
                                                                                | (QData)((IData)(
                                                                                (((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x3eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x39U)) 
                                                                                << 0xaU)) 
                                                                                | (0x3c0U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x23U)) 
                                                                                << 6U)))) 
                                                                                | ((0x38U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
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
                                                                                << 2U)) 
                                                                                | (((2U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0x300000000ULL 
                                                                                == 
                                                                                (0x7f00000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg))))))))))))))))))) 
                                                      >> 0x20U)) 
                                             << 0x13U));
    __Vtemp_h6ae3444b__0[8U] = ((IData)(((((QData)((IData)(
                                                           (0xfffU 
                                                            & (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm)))) 
                                           << 0x34U) 
                                          | (((QData)((IData)(
                                                              ((0x3020000000000000ULL 
                                                                == 
                                                                (0xffffff8000000000ULL 
                                                                 & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                               & (6U 
                                                                  == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                              << 0x33U) 
                                             | (((QData)((IData)(
                                                                 ((~ (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x1ffffffU 
                                                                               & (IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x27U)))))) 
                                                                  & (6U 
                                                                     == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                 << 0x32U) 
                                                | (((QData)((IData)(
                                                                    ((0x100000000000ULL 
                                                                      == 
                                                                      (0x700000000000ULL 
                                                                       & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                     & (6U 
                                                                        == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                    << 0x31U) 
                                                   | (((QData)((IData)(
                                                                       ((0x200000000000ULL 
                                                                         == 
                                                                         (0x700000000000ULL 
                                                                          & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                        & (6U 
                                                                           == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(
                                                                          ((0x300000000000ULL 
                                                                            == 
                                                                            (0x700000000000ULL 
                                                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                           & (6U 
                                                                              == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                          << 0x2fU) 
                                                         | (((QData)((IData)(
                                                                             ((0x500000000000ULL 
                                                                               == 
                                                                               (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                              & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                             << 0x2eU) 
                                                            | (((QData)((IData)(
                                                                                ((0x600000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                << 0x2dU) 
                                                               | (((QData)((IData)(
                                                                                ((0x700000000000ULL 
                                                                                == 
                                                                                (0x700000000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                   << 0x2cU) 
                                                                  | (((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                      << 0xcU) 
                                                                     | (QData)((IData)(
                                                                                (((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x3eU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x39U)) 
                                                                                << 0xaU)) 
                                                                                | (0x3c0U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x23U)) 
                                                                                << 6U)))) 
                                                                                | ((0x38U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
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
                                                                                << 2U)) 
                                                                                | (((2U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0x300000000ULL 
                                                                                == 
                                                                                (0x7f00000000ULL 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg))))))))))))))))))) 
                                         >> 0x20U)) 
                                >> 0xdU);
    tracep->fullWData(oldp+69,(__Vtemp_h6ae3444b__0),275);
    tracep->fullWData(oldp+78,(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus),262);
    tracep->fullWData(oldp+87,(vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus),321);
    tracep->fullQData(oldp+98,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])))),64);
    tracep->fullBit(oldp+100,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                     >> 5U))));
    tracep->fullQData(oldp+101,(vlSelf->ysyx_22040127_top__DOT__mem_final_rdata),64);
    tracep->fullQData(oldp+103,(vlSelf->ysyx_22040127_top__DOT__wb_reg_wdata),64);
    tracep->fullQData(oldp+105,(vlSelf->ysyx_22040127_top__DOT__wb_csrwdata),64);
    tracep->fullQData(oldp+107,(vlSelf->ysyx_22040127_top__DOT__wb_csrrdata),64);
    tracep->fullBit(oldp+109,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                     >> 0xeU))));
    tracep->fullCData(oldp+110,((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])),5);
    tracep->fullBit(oldp+111,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                     >> 5U))));
    tracep->fullCData(oldp+112,(vlSelf->ysyx_22040127_top__DOT__cache_state),3);
    tracep->fullCData(oldp+113,((0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])),5);
    tracep->fullCData(oldp+114,((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U])),5);
    tracep->fullQData(oldp+115,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])))),64);
    tracep->fullBit(oldp+117,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                     >> 5U))));
    tracep->fullBit(oldp+118,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                     >> 7U))));
    tracep->fullBit(oldp+119,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U] 
                                     >> 5U))));
    tracep->fullBit(oldp+120,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
                                     >> 0xdU))));
    tracep->fullBit(oldp+121,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[5U] 
                                     >> 0x14U))));
    tracep->fullBit(oldp+122,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
                                     >> 0xeU))));
    tracep->fullBit(oldp+123,((1U & (~ (IData)((0U 
                                                != 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                            >> 0x2cU)))))))));
    tracep->fullBit(oldp+124,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                             >> 0x2dU)))))) 
                                     & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                >> 0x2cU))))));
    tracep->fullBit(oldp+125,((4U == (7U & (IData)(
                                                   (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                    >> 0x2cU))))));
    tracep->fullBit(oldp+126,((6U == (7U & (IData)(
                                                   (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                    >> 0x2cU))))));
    tracep->fullBit(oldp+127,((5U == (7U & (IData)(
                                                   (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                    >> 0x2cU))))));
    tracep->fullBit(oldp+128,((7U == (7U & (IData)(
                                                   (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                    >> 0x2cU))))));
    tracep->fullBit(oldp+129,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken));
    tracep->fullBit(oldp+130,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                               | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
    tracep->fullBit(oldp+131,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                               | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
    tracep->fullCData(oldp+132,(((0x20U & ((IData)(
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
    tracep->fullCData(oldp+133,((7U & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                               >> 0x2cU)))),3);
    tracep->fullCData(oldp+134,((0x1fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                  >> 0x27U)))),5);
    tracep->fullBit(oldp+135,((1U & (((((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                                        | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                       | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                      | (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                     | (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+136,((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))));
    tracep->fullBit(oldp+137,((IData)((0x300000000ULL 
                                       == (0x7f00000000ULL 
                                           & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)))));
    tracep->fullCData(oldp+138,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type),3);
    tracep->fullQData(oldp+139,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm),64);
    tracep->fullBit(oldp+141,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr));
    tracep->fullQData(oldp+142,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1),64);
    tracep->fullQData(oldp+144,((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                  | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                  ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                  : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final)),64);
    tracep->fullQData(oldp+146,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final),64);
    tracep->fullQData(oldp+148,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final),64);
    tracep->fullBit(oldp+150,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard1));
    tracep->fullBit(oldp+151,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard2));
    tracep->fullBit(oldp+152,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard1));
    tracep->fullBit(oldp+153,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard2));
    tracep->fullBit(oldp+154,((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                                & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                                   == (0x1fU & (IData)(
                                                       (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                        >> 0x2fU))))) 
                               & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                  >> 5U))));
    tracep->fullBit(oldp+155,((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                                & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                                   == (0x1fU & (IData)(
                                                       (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                        >> 0x34U))))) 
                               & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                  >> 5U))));
    tracep->fullBit(oldp+156,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard1));
    tracep->fullBit(oldp+157,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard2));
    tracep->fullBit(oldp+158,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1_tmp));
    tracep->fullBit(oldp+159,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2_tmp));
    tracep->fullBit(oldp+160,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1));
    tracep->fullBit(oldp+161,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2));
    tracep->fullBit(oldp+162,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard1_tmp));
    tracep->fullBit(oldp+163,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard2_tmp));
    tracep->fullBit(oldp+164,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_ready_go));
    tracep->fullBit(oldp+165,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_valid));
    tracep->fullQData(oldp+166,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg),64);
    tracep->fullIData(oldp+168,((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)),32);
    tracep->fullIData(oldp+169,((IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                         >> 0x20U))),32);
    tracep->fullBit(oldp+170,((IData)(((0x3020000000000000ULL 
                                        == (0xffffff8000000000ULL 
                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+171,(((~ (IData)((0U != (0x1ffffffU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                             >> 0x27U)))))) 
                               & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
    tracep->fullBit(oldp+172,((IData)(((0x100000000000ULL 
                                        == (0x700000000000ULL 
                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+173,((IData)(((0x200000000000ULL 
                                        == (0x700000000000ULL 
                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+174,((IData)(((0x300000000000ULL 
                                        == (0x700000000000ULL 
                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+175,((IData)(((0x500000000000ULL 
                                        == (0x700000000000ULL 
                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+176,((IData)(((0x600000000000ULL 
                                        == (0x700000000000ULL 
                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+177,((IData)(((0x700000000000ULL 
                                        == (0x700000000000ULL 
                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullCData(oldp+178,((0x7fU & (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                  >> 0x20U)))),7);
    tracep->fullCData(oldp+179,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out),3);
    tracep->fullBit(oldp+180,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit));
    tracep->fullQData(oldp+181,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_calc_result),64);
    tracep->fullQData(oldp+183,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_calc_result),64);
    tracep->fullQData(oldp+185,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op),64);
    tracep->fullIData(oldp+187,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op),32);
    tracep->fullQData(oldp+188,(((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                 - (((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))))),64);
    tracep->fullIData(oldp+190,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__addw_result),32);
    tracep->fullIData(oldp+191,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result),32);
    tracep->fullIData(oldp+192,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U]),32);
    tracep->fullIData(oldp+193,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U]),32);
    tracep->fullIData(oldp+194,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                  << 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                               >> 1U))),32);
    tracep->fullQData(oldp+195,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_addw_result),64);
    tracep->fullQData(oldp+197,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result)))),64);
    tracep->fullQData(oldp+199,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U] 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U])))),64);
    tracep->fullQData(oldp+201,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U] 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U])))),64);
    tracep->fullQData(oldp+203,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U]))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                                                << 0x1fU) 
                                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                                                  >> 1U)))))),64);
    tracep->fullIData(oldp+205,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_sllw),32);
    tracep->fullIData(oldp+206,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_srlw),32);
    tracep->fullCData(oldp+207,((0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])),6);
    tracep->fullQData(oldp+208,((0xffffffff00000000ULL 
                                 | (QData)((IData)(
                                                   (~ 
                                                    ((0x1fU 
                                                      >= 
                                                      (0x3fU 
                                                       & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))
                                                      ? 
                                                     (0xffffffffU 
                                                      >> 
                                                      (0x3fU 
                                                       & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))
                                                      : 0U)))))),64);
    tracep->fullQData(oldp+210,((~ (0xffffffffffffffffULL 
                                    >> (0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))),64);
    tracep->fullQData(oldp+212,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sraw),64);
    tracep->fullQData(oldp+214,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sllw),64);
    tracep->fullQData(oldp+216,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_srlw),64);
    tracep->fullQData(oldp+218,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[0U])))),64);
    tracep->fullIData(oldp+220,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                  << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                            >> 0x1fU))),32);
    tracep->fullCData(oldp+221,((0x3fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 0x19U))),6);
    tracep->fullCData(oldp+222,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                       >> 0x16U))),3);
    tracep->fullBit(oldp+223,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x14U))));
    tracep->fullBit(oldp+224,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x13U))));
    tracep->fullCData(oldp+225,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 0xeU))),5);
    tracep->fullCData(oldp+226,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                       >> 1U))),3);
    tracep->fullBit(oldp+227,((1U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])));
    tracep->fullQData(oldp+228,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])))),64);
    tracep->fullQData(oldp+230,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))),64);
    tracep->fullCData(oldp+232,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 9U))),5);
    tracep->fullCData(oldp+233,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 4U))),5);
    tracep->fullBit(oldp+234,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x15U))));
    tracep->fullBit(oldp+235,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_type));
    tracep->fullBit(oldp+236,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_type));
    tracep->fullBit(oldp+237,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_sign));
    tracep->fullBit(oldp+238,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_stage2));
    tracep->fullBit(oldp+239,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_ok));
    tracep->fullBit(oldp+240,((1U & (~ (IData)((0xc00000U 
                                                == 
                                                (0xc00000U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])))))));
    tracep->fullBit(oldp+241,((1U & (~ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                        >> 0x17U)))));
    tracep->fullQData(oldp+242,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[2U])))),64);
    tracep->fullQData(oldp+244,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U])))),64);
    tracep->fullBit(oldp+246,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__ex_valid));
    tracep->fullWData(oldp+247,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg),275);
    tracep->fullQData(oldp+256,(((8U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
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
                                              : ((((QData)((IData)(
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
    tracep->fullBit(oldp+258,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_ready));
    tracep->fullCData(oldp+259,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_state),2);
    tracep->fullQData(oldp+260,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U])))),64);
    tracep->fullQData(oldp+262,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[4U])) 
                                  << 0x3fU) | (((QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U])) 
                                                  >> 1U)))),64);
    tracep->fullBit(oldp+264,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 6U))));
    tracep->fullBit(oldp+265,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 5U))));
    tracep->fullBit(oldp+266,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 4U))));
    tracep->fullBit(oldp+267,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 3U))));
    tracep->fullBit(oldp+268,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 2U))));
    tracep->fullBit(oldp+269,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 1U))));
    tracep->fullBit(oldp+270,((1U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])));
    tracep->fullBit(oldp+271,((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                               >> 0x1fU)));
    tracep->fullBit(oldp+272,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                >> 0x1fU) | (0U != 
                                             (0x7fU 
                                              & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])))));
    tracep->fullSData(oldp+273,((0xfffU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                           >> 7U))),12);
    tracep->fullBit(oldp+274,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__cache_readygo));
    tracep->fullQData(oldp+275,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sra),64);
    tracep->fullQData(oldp+277,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_srl),64);
    tracep->fullQData(oldp+279,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sll),64);
    tracep->fullCData(oldp+281,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 0x16U))),5);
    tracep->fullCData(oldp+282,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in),6);
    tracep->fullQData(oldp+283,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber3),64);
    tracep->fullQData(oldp+285,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber4),64);
    tracep->fullCData(oldp+287,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__cnt),7);
    tracep->fullWData(oldp+288,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend),129);
    tracep->fullQData(oldp+293,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__divisor),64);
    tracep->fullWData(oldp+295,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__subres),65);
    tracep->fullWData(oldp+298,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext),65);
    tracep->fullWData(oldp+301,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext),67);
    tracep->fullWData(oldp+304,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[0]),128);
    tracep->fullWData(oldp+308,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[1]),128);
    tracep->fullWData(oldp+312,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[2]),128);
    tracep->fullWData(oldp+316,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[3]),128);
    tracep->fullWData(oldp+320,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[4]),128);
    tracep->fullWData(oldp+324,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[5]),128);
    tracep->fullWData(oldp+328,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[6]),128);
    tracep->fullWData(oldp+332,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[7]),128);
    tracep->fullWData(oldp+336,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[8]),128);
    tracep->fullWData(oldp+340,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[9]),128);
    tracep->fullWData(oldp+344,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s[10]),128);
    tracep->fullWData(oldp+348,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[0]),128);
    tracep->fullWData(oldp+352,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[1]),128);
    tracep->fullWData(oldp+356,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[2]),128);
    tracep->fullWData(oldp+360,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[3]),128);
    tracep->fullWData(oldp+364,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[4]),128);
    tracep->fullWData(oldp+368,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[5]),128);
    tracep->fullWData(oldp+372,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[6]),128);
    tracep->fullWData(oldp+376,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[7]),128);
    tracep->fullWData(oldp+380,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[8]),128);
    tracep->fullWData(oldp+384,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[9]),128);
    tracep->fullWData(oldp+388,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c[10]),128);
    tracep->fullWData(oldp+392,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[0]),128);
    tracep->fullWData(oldp+396,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[1]),128);
    tracep->fullWData(oldp+400,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[2]),128);
    tracep->fullWData(oldp+404,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[3]),128);
    tracep->fullWData(oldp+408,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[4]),128);
    tracep->fullWData(oldp+412,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[5]),128);
    tracep->fullWData(oldp+416,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s[6]),128);
    tracep->fullWData(oldp+420,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[0]),128);
    tracep->fullWData(oldp+424,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[1]),128);
    tracep->fullWData(oldp+428,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[2]),128);
    tracep->fullWData(oldp+432,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[3]),128);
    tracep->fullWData(oldp+436,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[4]),128);
    tracep->fullWData(oldp+440,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[5]),128);
    tracep->fullWData(oldp+444,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c[6]),128);
    tracep->fullWData(oldp+448,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[0]),128);
    tracep->fullWData(oldp+452,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[1]),128);
    tracep->fullWData(oldp+456,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[2]),128);
    tracep->fullWData(oldp+460,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[3]),128);
    tracep->fullWData(oldp+464,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s[4]),128);
    tracep->fullWData(oldp+468,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[0]),128);
    tracep->fullWData(oldp+472,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[1]),128);
    tracep->fullWData(oldp+476,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[2]),128);
    tracep->fullWData(oldp+480,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[3]),128);
    tracep->fullWData(oldp+484,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c[4]),128);
    tracep->fullWData(oldp+488,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[0]),128);
    tracep->fullWData(oldp+492,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[1]),128);
    tracep->fullWData(oldp+496,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s[2]),128);
    tracep->fullWData(oldp+500,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[0]),128);
    tracep->fullWData(oldp+504,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[1]),128);
    tracep->fullWData(oldp+508,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c[2]),128);
    tracep->fullWData(oldp+512,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s[0]),128);
    tracep->fullWData(oldp+516,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s[1]),128);
    tracep->fullWData(oldp+520,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s[2]),128);
    tracep->fullWData(oldp+524,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c[0]),128);
    tracep->fullWData(oldp+528,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c[1]),128);
    tracep->fullWData(oldp+532,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c[2]),128);
    tracep->fullWData(oldp+536,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s[0]),128);
    tracep->fullWData(oldp+540,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s[1]),128);
    tracep->fullWData(oldp+544,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c[0]),128);
    tracep->fullWData(oldp+548,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c[1]),128);
    tracep->fullWData(oldp+552,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s),128);
    tracep->fullWData(oldp+556,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c),128);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h1fdd8292__0, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c, 1U);
    __Vtemp_h5a241144__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][0U];
    __Vtemp_h5a241144__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][1U];
    __Vtemp_h5a241144__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][2U];
    __Vtemp_h5a241144__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h76c294e2__0, __Vtemp_h5a241144__0, 1U);
    __Vtemp_hc42eddb7__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[0U] 
                                 ^ __Vtemp_h1fdd8292__0[0U]) 
                                ^ __Vtemp_h76c294e2__0[0U]);
    __Vtemp_hc42eddb7__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[1U] 
                                 ^ __Vtemp_h1fdd8292__0[1U]) 
                                ^ __Vtemp_h76c294e2__0[1U]);
    __Vtemp_hc42eddb7__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[2U] 
                                 ^ __Vtemp_h1fdd8292__0[2U]) 
                                ^ __Vtemp_h76c294e2__0[2U]);
    __Vtemp_hc42eddb7__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[3U] 
                                 ^ __Vtemp_h1fdd8292__0[3U]) 
                                ^ __Vtemp_h76c294e2__0[3U]);
    tracep->fullWData(oldp+560,(__Vtemp_hc42eddb7__0),128);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h1fdd8292__1, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c, 1U);
    __Vtemp_h522dbf0a__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c[0U] 
                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
                                [1U][0U]);
    __Vtemp_h522dbf0a__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c[1U] 
                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
                                [1U][1U]);
    __Vtemp_h522dbf0a__0[2U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c[2U] 
                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
                                [1U][2U]);
    __Vtemp_h522dbf0a__0[3U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c[3U] 
                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
                                [1U][3U]);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h1a534702__0, __Vtemp_h522dbf0a__0, 1U);
    __Vtemp_h5a241144__2[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][0U];
    __Vtemp_h5a241144__2[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][1U];
    __Vtemp_h5a241144__2[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][2U];
    __Vtemp_h5a241144__2[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hc0fdef7e__0, __Vtemp_h5a241144__2, 1U);
    __Vtemp_h21d0374a__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[0U] 
                                  & __Vtemp_h1fdd8292__1[0U]) 
                                 | __Vtemp_h1a534702__0[0U]) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[0U] 
                                   & __Vtemp_hc0fdef7e__0[0U]));
    __Vtemp_h21d0374a__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[1U] 
                                  & __Vtemp_h1fdd8292__1[1U]) 
                                 | __Vtemp_h1a534702__0[1U]) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[1U] 
                                   & __Vtemp_hc0fdef7e__0[1U]));
    __Vtemp_h21d0374a__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[2U] 
                                  & __Vtemp_h1fdd8292__1[2U]) 
                                 | __Vtemp_h1a534702__0[2U]) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[2U] 
                                   & __Vtemp_hc0fdef7e__0[2U]));
    __Vtemp_h21d0374a__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[3U] 
                                  & __Vtemp_h1fdd8292__1[3U]) 
                                 | __Vtemp_h1a534702__0[3U]) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7s[3U] 
                                   & __Vtemp_hc0fdef7e__0[3U]));
    tracep->fullWData(oldp+564,(__Vtemp_h21d0374a__0),128);
    tracep->fullWData(oldp+568,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res),128);
    tracep->fullCData(oldp+572,((6U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       << 1U))),3);
    tracep->fullWData(oldp+573,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b0____pinNumber5),128);
    __Vtemp_h5e726cb9__0[0U] = 1U;
    __Vtemp_h5e726cb9__0[1U] = 0U;
    __Vtemp_h5e726cb9__0[2U] = 0U;
    __Vtemp_h2024e4e5__0[0U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext[0U]);
    __Vtemp_h2024e4e5__0[1U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext[1U]);
    __Vtemp_h2024e4e5__0[2U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext[2U]);
    VL_ADD_W(3, __Vtemp_hdab1d851__0, __Vtemp_h5e726cb9__0, __Vtemp_h2024e4e5__0);
    __Vtemp_h9fb190ff__0[0U] = __Vtemp_hdab1d851__0[0U];
    __Vtemp_h9fb190ff__0[1U] = __Vtemp_hdab1d851__0[1U];
    __Vtemp_h9fb190ff__0[2U] = (1U & __Vtemp_hdab1d851__0[2U]);
    tracep->fullWData(oldp+577,(__Vtemp_h9fb190ff__0),65);
    tracep->fullCData(oldp+580,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 1U))),3);
    tracep->fullWData(oldp+581,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b1____pinNumber5),128);
    tracep->fullCData(oldp+585,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0x13U))),3);
    tracep->fullWData(oldp+586,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b10____pinNumber5),128);
    tracep->fullCData(oldp+590,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0x15U))),3);
    tracep->fullWData(oldp+591,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b11____pinNumber5),128);
    tracep->fullCData(oldp+595,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0x17U))),3);
    tracep->fullWData(oldp+596,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b12____pinNumber5),128);
    tracep->fullCData(oldp+600,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0x19U))),3);
    tracep->fullWData(oldp+601,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b13____pinNumber5),128);
    tracep->fullCData(oldp+605,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0x1bU))),3);
    tracep->fullWData(oldp+606,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b14____pinNumber5),128);
    tracep->fullCData(oldp+610,((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                 >> 0x1dU)),3);
    tracep->fullWData(oldp+611,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b15____pinNumber5),128);
    tracep->fullCData(oldp+615,((7U & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                        << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                                  >> 0x1fU)))),3);
    tracep->fullWData(oldp+616,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b16____pinNumber5),128);
    tracep->fullCData(oldp+620,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 1U))),3);
    tracep->fullWData(oldp+621,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b17____pinNumber5),128);
    tracep->fullCData(oldp+625,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 3U))),3);
    tracep->fullWData(oldp+626,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b18____pinNumber5),128);
    tracep->fullCData(oldp+630,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 5U))),3);
    tracep->fullWData(oldp+631,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b19____pinNumber5),128);
    tracep->fullCData(oldp+635,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 3U))),3);
    tracep->fullWData(oldp+636,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b2____pinNumber5),128);
    tracep->fullCData(oldp+640,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 7U))),3);
    tracep->fullWData(oldp+641,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b20____pinNumber5),128);
    tracep->fullCData(oldp+645,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 9U))),3);
    tracep->fullWData(oldp+646,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b21____pinNumber5),128);
    tracep->fullCData(oldp+650,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0xbU))),3);
    tracep->fullWData(oldp+651,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b22____pinNumber5),128);
    tracep->fullCData(oldp+655,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0xdU))),3);
    tracep->fullWData(oldp+656,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b23____pinNumber5),128);
    tracep->fullCData(oldp+660,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0xfU))),3);
    tracep->fullWData(oldp+661,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b24____pinNumber5),128);
    tracep->fullCData(oldp+665,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0x11U))),3);
    tracep->fullWData(oldp+666,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b25____pinNumber5),128);
    tracep->fullCData(oldp+670,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0x13U))),3);
    tracep->fullWData(oldp+671,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b26____pinNumber5),128);
    tracep->fullCData(oldp+675,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0x15U))),3);
    tracep->fullWData(oldp+676,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b27____pinNumber5),128);
    tracep->fullCData(oldp+680,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0x17U))),3);
    tracep->fullWData(oldp+681,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b28____pinNumber5),128);
    tracep->fullCData(oldp+685,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0x19U))),3);
    tracep->fullWData(oldp+686,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b29____pinNumber5),128);
    tracep->fullCData(oldp+690,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 5U))),3);
    tracep->fullWData(oldp+691,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b3____pinNumber5),128);
    tracep->fullCData(oldp+695,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                       >> 0x1bU))),3);
    tracep->fullWData(oldp+696,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b30____pinNumber5),128);
    tracep->fullCData(oldp+700,((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                 >> 0x1dU)),3);
    tracep->fullWData(oldp+701,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b31____pinNumber5),128);
    tracep->fullCData(oldp+705,((7U & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[2U] 
                                        << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[1U] 
                                                  >> 0x1fU)))),3);
    tracep->fullWData(oldp+706,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b32____pinNumber5),128);
    tracep->fullCData(oldp+710,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 7U))),3);
    tracep->fullWData(oldp+711,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b4____pinNumber5),128);
    tracep->fullCData(oldp+715,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 9U))),3);
    tracep->fullWData(oldp+716,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b5____pinNumber5),128);
    tracep->fullCData(oldp+720,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0xbU))),3);
    tracep->fullWData(oldp+721,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b6____pinNumber5),128);
    tracep->fullCData(oldp+725,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0xdU))),3);
    tracep->fullWData(oldp+726,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b7____pinNumber5),128);
    tracep->fullCData(oldp+730,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0xfU))),3);
    tracep->fullWData(oldp+731,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b8____pinNumber5),128);
    tracep->fullCData(oldp+735,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__y_ext[0U] 
                                       >> 0x11U))),3);
    tracep->fullWData(oldp+736,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT____Vcellout__b9____pinNumber5),128);
    __Vtemp_ha2f4aa87__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0U][0U];
    __Vtemp_ha2f4aa87__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0U][1U];
    __Vtemp_ha2f4aa87__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0U][2U];
    __Vtemp_ha2f4aa87__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0U][3U];
    tracep->fullWData(oldp+740,(__Vtemp_ha2f4aa87__0),128);
    __Vtemp_h84c11fea__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [1U][0U] << 2U);
    __Vtemp_h84c11fea__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [1U][0U] >> 0x1eU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [1U][1U] << 2U));
    __Vtemp_h84c11fea__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [1U][1U] >> 0x1eU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [1U][2U] << 2U));
    __Vtemp_h84c11fea__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [1U][2U] >> 0x1eU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [1U][3U] << 2U));
    tracep->fullWData(oldp+744,(__Vtemp_h84c11fea__0),128);
    __Vtemp_ha13feb02__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [2U][0U] << 4U);
    __Vtemp_ha13feb02__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [2U][0U] >> 0x1cU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [2U][1U] << 4U));
    __Vtemp_ha13feb02__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [2U][1U] >> 0x1cU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [2U][2U] << 4U));
    __Vtemp_ha13feb02__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [2U][2U] >> 0x1cU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [2U][3U] << 4U));
    tracep->fullWData(oldp+748,(__Vtemp_ha13feb02__0),128);
    __Vtemp_h05f44798__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0U][0U] ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                             [1U][0U] 
                                             << 2U)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [2U][0U] << 4U));
    __Vtemp_h05f44798__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0U][1U] ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                              [1U][0U] 
                                              >> 0x1eU) 
                                             | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                [1U][1U] 
                                                << 2U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [2U][0U] >> 0x1cU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [2U][1U] << 4U)));
    __Vtemp_h05f44798__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0U][2U] ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                              [1U][1U] 
                                              >> 0x1eU) 
                                             | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                [1U][2U] 
                                                << 2U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [2U][1U] >> 0x1cU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [2U][2U] << 4U)));
    __Vtemp_h05f44798__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0U][3U] ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                              [1U][2U] 
                                              >> 0x1eU) 
                                             | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                [1U][3U] 
                                                << 2U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [2U][2U] >> 0x1cU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [2U][3U] << 4U)));
    tracep->fullWData(oldp+752,(__Vtemp_h05f44798__0),128);
    __Vtemp_he62c9636__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0U][0U] & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                              [1U][0U] 
                                              << 2U)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [1U][0U] << 2U) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [2U][0U] << 4U))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0U][0U] & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                               [2U][0U] 
                                               << 4U)));
    __Vtemp_he62c9636__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0U][1U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                               [1U][0U] 
                                               >> 0x1eU) 
                                              | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                 [1U][1U] 
                                                 << 2U))) 
                                 | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [1U][0U] >> 0x1eU) 
                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [1U][1U] << 2U)) 
                                    & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [2U][0U] >> 0x1cU) 
                                       | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                          [2U][1U] 
                                          << 4U)))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0U][1U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                [2U][0U] 
                                                >> 0x1cU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                  [2U][1U] 
                                                  << 4U))));
    __Vtemp_he62c9636__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0U][2U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                               [1U][1U] 
                                               >> 0x1eU) 
                                              | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                 [1U][2U] 
                                                 << 2U))) 
                                 | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [1U][1U] >> 0x1eU) 
                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [1U][2U] << 2U)) 
                                    & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [2U][1U] >> 0x1cU) 
                                       | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                          [2U][2U] 
                                          << 4U)))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0U][2U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                [2U][1U] 
                                                >> 0x1cU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                  [2U][2U] 
                                                  << 4U))));
    __Vtemp_he62c9636__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0U][3U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                               [1U][2U] 
                                               >> 0x1eU) 
                                              | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                 [1U][3U] 
                                                 << 2U))) 
                                 | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [1U][2U] >> 0x1eU) 
                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [1U][3U] << 2U)) 
                                    & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                        [2U][2U] >> 0x1cU) 
                                       | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                          [2U][3U] 
                                          << 4U)))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0U][3U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                [2U][2U] 
                                                >> 0x1cU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                  [2U][3U] 
                                                  << 4U))));
    tracep->fullWData(oldp+756,(__Vtemp_he62c9636__0),128);
    __Vtemp_hcbf1bc4f__0[0U] = 0U;
    __Vtemp_hcbf1bc4f__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x1bU][0U] << 0x16U);
    __Vtemp_hcbf1bc4f__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1bU][0U] >> 0xaU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1bU][1U] << 0x16U));
    __Vtemp_hcbf1bc4f__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1bU][1U] >> 0xaU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1bU][2U] << 0x16U));
    tracep->fullWData(oldp+760,(__Vtemp_hcbf1bc4f__0),128);
    __Vtemp_he15e0589__0[0U] = 0U;
    __Vtemp_he15e0589__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x1cU][0U] << 0x18U);
    __Vtemp_he15e0589__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1cU][0U] >> 8U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1cU][1U] << 0x18U));
    __Vtemp_he15e0589__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1cU][1U] >> 8U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1cU][2U] << 0x18U));
    tracep->fullWData(oldp+764,(__Vtemp_he15e0589__0),128);
    __Vtemp_h56daa6d4__0[0U] = 0U;
    __Vtemp_h56daa6d4__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x1dU][0U] << 0x1aU);
    __Vtemp_h56daa6d4__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1dU][0U] >> 6U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1dU][1U] << 0x1aU));
    __Vtemp_h56daa6d4__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1dU][1U] >> 6U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1dU][2U] << 0x1aU));
    tracep->fullWData(oldp+768,(__Vtemp_h56daa6d4__0),128);
    __Vtemp_h4595720e__0[0U] = 0U;
    __Vtemp_h4595720e__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x1bU][0U] << 0x16U) 
                                 ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x1cU][0U] << 0x18U)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1dU][0U] << 0x1aU));
    __Vtemp_h4595720e__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1bU][0U] >> 0xaU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1bU][1U] << 0x16U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1cU][0U] >> 8U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1cU][1U] 
                                       << 0x18U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x1dU][0U] >> 6U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1dU][1U] << 0x1aU)));
    __Vtemp_h4595720e__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1bU][1U] >> 0xaU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1bU][2U] << 0x16U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1cU][1U] >> 8U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1cU][2U] 
                                       << 0x18U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x1dU][1U] >> 6U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1dU][2U] << 0x1aU)));
    tracep->fullWData(oldp+772,(__Vtemp_h4595720e__0),128);
    __Vtemp_h4ee7a19f__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1bU][0U] >> 0xaU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1bU][1U] << 0x16U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1cU][0U] >> 8U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1cU][1U] 
                                       << 0x18U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1cU][0U] >> 8U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1cU][1U] 
                                       << 0x18U)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1dU][0U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1dU][1U] 
                                       << 0x1aU))));
    __Vtemp_h4ee7a19f__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1bU][1U] >> 0xaU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1bU][2U] << 0x16U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1cU][1U] >> 8U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1cU][2U] 
                                       << 0x18U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1cU][1U] >> 8U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1cU][2U] 
                                       << 0x18U)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1dU][1U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1dU][2U] 
                                       << 0x1aU))));
    __Vtemp_h59366efe__0[0U] = 0U;
    __Vtemp_h59366efe__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1bU][0U] << 0x16U) 
                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1cU][0U] << 0x18U)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1cU][0U] << 0x18U) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1dU][0U] 
                                       << 0x1aU))) 
                                | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x1bU][0U] << 0x16U) 
                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1dU][0U] << 0x1aU)));
    __Vtemp_h59366efe__0[2U] = (__Vtemp_h4ee7a19f__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1bU][0U] >> 0xaU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1bU][1U] 
                                       << 0x16U)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1dU][0U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1dU][1U] 
                                       << 0x1aU))));
    __Vtemp_h59366efe__0[3U] = (__Vtemp_h4ee7a19f__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1bU][1U] >> 0xaU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1bU][2U] 
                                       << 0x16U)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1dU][1U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1dU][2U] 
                                       << 0x1aU))));
    tracep->fullWData(oldp+776,(__Vtemp_h59366efe__0),128);
    __Vtemp_he7eaeb27__0[0U] = 0U;
    __Vtemp_he7eaeb27__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x1eU][0U] << 0x1cU);
    __Vtemp_he7eaeb27__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1eU][0U] >> 4U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1eU][1U] << 0x1cU));
    __Vtemp_he7eaeb27__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1eU][1U] >> 4U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1eU][2U] << 0x1cU));
    tracep->fullWData(oldp+780,(__Vtemp_he7eaeb27__0),128);
    __Vtemp_h04be3098__0[0U] = 0U;
    __Vtemp_h04be3098__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x1fU][0U] << 0x1eU);
    __Vtemp_h04be3098__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1fU][0U] >> 2U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1fU][1U] << 0x1eU));
    __Vtemp_h04be3098__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1fU][1U] >> 2U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1fU][2U] << 0x1eU));
    tracep->fullWData(oldp+784,(__Vtemp_h04be3098__0),128);
    __Vtemp_h2ad69785__0[0U] = 0U;
    __Vtemp_h2ad69785__0[1U] = 0U;
    __Vtemp_h2ad69785__0[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                         [0x20U][1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                          [0x20U][0U]))));
    __Vtemp_h2ad69785__0[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                          [0x20U][1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                           [0x20U][0U]))) 
                                        >> 0x20U));
    tracep->fullWData(oldp+788,(__Vtemp_h2ad69785__0),128);
    __Vtemp_h0254ffe9__0[0U] = 0U;
    __Vtemp_h0254ffe9__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1eU][0U] << 0x1cU) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1fU][0U] << 0x1eU));
    __Vtemp_h0254ffe9__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1eU][0U] >> 4U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1eU][1U] << 0x1cU)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1fU][0U] >> 2U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1fU][1U] 
                                       << 0x1eU))) 
                                ^ (IData)((((QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                            [0x20U][1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                             [0x20U][0U])))));
    __Vtemp_h0254ffe9__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1eU][1U] >> 4U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1eU][2U] << 0x1cU)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1fU][1U] >> 2U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1fU][2U] 
                                       << 0x1eU))) 
                                ^ (IData)(((((QData)((IData)(
                                                             vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                             [0x20U][1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                              [0x20U][0U]))) 
                                           >> 0x20U)));
    tracep->fullWData(oldp+792,(__Vtemp_h0254ffe9__0),128);
    __Vtemp_hb73adfb5__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1eU][0U] >> 4U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1eU][1U] << 0x1cU)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1fU][0U] >> 2U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1fU][1U] 
                                       << 0x1eU))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1fU][0U] >> 2U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1fU][1U] 
                                       << 0x1eU)) & (IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                              [0x20U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                               [0x20U][0U]))))));
    __Vtemp_hb73adfb5__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1eU][1U] >> 4U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1eU][2U] << 0x1cU)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1fU][1U] >> 2U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1fU][2U] 
                                       << 0x1eU))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1fU][1U] >> 2U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1fU][2U] 
                                       << 0x1eU)) & (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                               [0x20U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                                [0x20U][0U]))) 
                                                             >> 0x20U))));
    __Vtemp_h2e174758__0[0U] = 0U;
    __Vtemp_h2e174758__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1eU][0U] << 0x1cU) 
                                & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1fU][0U] << 0x1eU));
    __Vtemp_h2e174758__0[2U] = (__Vtemp_hb73adfb5__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1eU][0U] >> 4U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1eU][1U] 
                                       << 0x1cU)) & (IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                              [0x20U][1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                               [0x20U][0U]))))));
    __Vtemp_h2e174758__0[3U] = (__Vtemp_hb73adfb5__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1eU][1U] >> 4U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1eU][2U] 
                                       << 0x1cU)) & (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                               [0x20U][1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                                                [0x20U][0U]))) 
                                                             >> 0x20U))));
    tracep->fullWData(oldp+796,(__Vtemp_h2e174758__0),128);
    __Vtemp_h69355225__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [3U][0U] << 6U);
    __Vtemp_h69355225__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [3U][0U] >> 0x1aU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][1U] << 6U));
    __Vtemp_h69355225__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [3U][1U] >> 0x1aU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][2U] << 6U));
    __Vtemp_h69355225__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [3U][2U] >> 0x1aU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][3U] << 6U));
    tracep->fullWData(oldp+800,(__Vtemp_h69355225__0),128);
    __Vtemp_hc43fb470__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [4U][0U] << 8U);
    __Vtemp_hc43fb470__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [4U][0U] >> 0x18U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [4U][1U] << 8U));
    __Vtemp_hc43fb470__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [4U][1U] >> 0x18U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [4U][2U] << 8U));
    __Vtemp_hc43fb470__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [4U][2U] >> 0x18U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [4U][3U] << 8U));
    tracep->fullWData(oldp+804,(__Vtemp_hc43fb470__0),128);
    __Vtemp_h30ce69e9__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [5U][0U] << 0xaU);
    __Vtemp_h30ce69e9__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [5U][0U] >> 0x16U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [5U][1U] << 0xaU));
    __Vtemp_h30ce69e9__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [5U][1U] >> 0x16U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [5U][2U] << 0xaU));
    __Vtemp_h30ce69e9__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [5U][2U] >> 0x16U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [5U][3U] << 0xaU));
    tracep->fullWData(oldp+808,(__Vtemp_h30ce69e9__0),128);
    __Vtemp_h6208bde2__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [3U][0U] << 6U) ^ 
                                 (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [4U][0U] << 8U)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [5U][0U] << 0xaU));
    __Vtemp_h6208bde2__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][0U] >> 0x1aU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [3U][1U] << 6U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][0U] >> 0x18U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [4U][1U] << 8U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [5U][0U] >> 0x16U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [5U][1U] << 0xaU)));
    __Vtemp_h6208bde2__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][1U] >> 0x1aU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [3U][2U] << 6U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][1U] >> 0x18U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [4U][2U] << 8U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [5U][1U] >> 0x16U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [5U][2U] << 0xaU)));
    __Vtemp_h6208bde2__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][2U] >> 0x1aU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [3U][3U] << 6U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][2U] >> 0x18U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [4U][3U] << 8U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [5U][2U] >> 0x16U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [5U][3U] << 0xaU)));
    tracep->fullWData(oldp+812,(__Vtemp_h6208bde2__0),128);
    __Vtemp_h49da03eb__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][0U] >> 0x1aU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [3U][1U] << 6U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][0U] >> 0x18U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [4U][1U] << 8U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][0U] >> 0x18U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [4U][1U] << 8U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [5U][0U] >> 0x16U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [5U][1U] << 0xaU))));
    __Vtemp_h49da03eb__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][1U] >> 0x1aU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [3U][2U] << 6U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][1U] >> 0x18U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [4U][2U] << 8U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][1U] >> 0x18U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [4U][2U] << 8U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [5U][1U] >> 0x16U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [5U][2U] << 0xaU))));
    __Vtemp_h49da03eb__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][2U] >> 0x1aU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [3U][3U] << 6U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][2U] >> 0x18U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [4U][3U] << 8U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][2U] >> 0x18U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [4U][3U] << 8U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [5U][2U] >> 0x16U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [5U][3U] << 0xaU))));
    __Vtemp_had93eb43__0[0U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [3U][0U] << 6U) 
                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][0U] << 8U)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [4U][0U] << 8U) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [5U][0U] << 0xaU))) 
                                | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [3U][0U] << 6U) 
                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [5U][0U] << 0xaU)));
    __Vtemp_had93eb43__0[1U] = (__Vtemp_h49da03eb__0[1U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [3U][0U] >> 0x1aU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [3U][1U] << 6U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [5U][0U] >> 0x16U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [5U][1U] << 0xaU))));
    __Vtemp_had93eb43__0[2U] = (__Vtemp_h49da03eb__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [3U][1U] >> 0x1aU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [3U][2U] << 6U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [5U][1U] >> 0x16U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [5U][2U] << 0xaU))));
    __Vtemp_had93eb43__0[3U] = (__Vtemp_h49da03eb__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [3U][2U] >> 0x1aU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [3U][3U] << 6U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [5U][2U] >> 0x16U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [5U][3U] << 0xaU))));
    tracep->fullWData(oldp+816,(__Vtemp_had93eb43__0),128);
    __Vtemp_h3c043eb5__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [6U][0U] << 0xcU);
    __Vtemp_h3c043eb5__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [6U][0U] >> 0x14U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][1U] << 0xcU));
    __Vtemp_h3c043eb5__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [6U][1U] >> 0x14U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][2U] << 0xcU));
    __Vtemp_h3c043eb5__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [6U][2U] >> 0x14U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][3U] << 0xcU));
    tracep->fullWData(oldp+820,(__Vtemp_h3c043eb5__0),128);
    __Vtemp_ha924c5a8__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [7U][0U] << 0xeU);
    __Vtemp_ha924c5a8__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [7U][0U] >> 0x12U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [7U][1U] << 0xeU));
    __Vtemp_ha924c5a8__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [7U][1U] >> 0x12U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [7U][2U] << 0xeU));
    __Vtemp_ha924c5a8__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [7U][2U] >> 0x12U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [7U][3U] << 0xeU));
    tracep->fullWData(oldp+824,(__Vtemp_ha924c5a8__0),128);
    __Vtemp_h6241e666__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [8U][0U] << 0x10U);
    __Vtemp_h6241e666__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [8U][0U] >> 0x10U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [8U][1U] << 0x10U));
    __Vtemp_h6241e666__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [8U][1U] >> 0x10U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [8U][2U] << 0x10U));
    __Vtemp_h6241e666__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [8U][2U] >> 0x10U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [8U][3U] << 0x10U));
    tracep->fullWData(oldp+828,(__Vtemp_h6241e666__0),128);
    __Vtemp_hc7598cf0__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [6U][0U] << 0xcU) 
                                 ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [7U][0U] << 0xeU)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [8U][0U] << 0x10U));
    __Vtemp_hc7598cf0__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][0U] >> 0x14U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [6U][1U] << 0xcU)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][0U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [7U][1U] << 0xeU))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [8U][0U] >> 0x10U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [8U][1U] << 0x10U)));
    __Vtemp_hc7598cf0__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][1U] >> 0x14U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [6U][2U] << 0xcU)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][1U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [7U][2U] << 0xeU))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [8U][1U] >> 0x10U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [8U][2U] << 0x10U)));
    __Vtemp_hc7598cf0__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][2U] >> 0x14U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [6U][3U] << 0xcU)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][2U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [7U][3U] << 0xeU))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [8U][2U] >> 0x10U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [8U][3U] << 0x10U)));
    tracep->fullWData(oldp+832,(__Vtemp_hc7598cf0__0),128);
    __Vtemp_h818b2e10__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][0U] >> 0x14U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [6U][1U] << 0xcU)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][0U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [7U][1U] << 0xeU))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][0U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [7U][1U] << 0xeU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [8U][0U] >> 0x10U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [8U][1U] << 0x10U))));
    __Vtemp_h818b2e10__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][1U] >> 0x14U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [6U][2U] << 0xcU)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][1U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [7U][2U] << 0xeU))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][1U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [7U][2U] << 0xeU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [8U][1U] >> 0x10U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [8U][2U] << 0x10U))));
    __Vtemp_h818b2e10__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][2U] >> 0x14U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [6U][3U] << 0xcU)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][2U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [7U][3U] << 0xeU))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][2U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [7U][3U] << 0xeU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [8U][2U] >> 0x10U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [8U][3U] << 0x10U))));
    __Vtemp_he11f6c98__0[0U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [6U][0U] << 0xcU) 
                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][0U] << 0xeU)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [7U][0U] << 0xeU) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [8U][0U] << 0x10U))) 
                                | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [6U][0U] << 0xcU) 
                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [8U][0U] << 0x10U)));
    __Vtemp_he11f6c98__0[1U] = (__Vtemp_h818b2e10__0[1U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [6U][0U] >> 0x14U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [6U][1U] << 0xcU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [8U][0U] >> 0x10U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [8U][1U] << 0x10U))));
    __Vtemp_he11f6c98__0[2U] = (__Vtemp_h818b2e10__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [6U][1U] >> 0x14U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [6U][2U] << 0xcU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [8U][1U] >> 0x10U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [8U][2U] << 0x10U))));
    __Vtemp_he11f6c98__0[3U] = (__Vtemp_h818b2e10__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [6U][2U] >> 0x14U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [6U][3U] << 0xcU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [8U][2U] >> 0x10U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [8U][3U] << 0x10U))));
    tracep->fullWData(oldp+836,(__Vtemp_he11f6c98__0),128);
    __Vtemp_h544cee01__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [9U][0U] << 0x12U);
    __Vtemp_h544cee01__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [9U][0U] >> 0xeU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][1U] << 0x12U));
    __Vtemp_h544cee01__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [9U][1U] >> 0xeU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][2U] << 0x12U));
    __Vtemp_h544cee01__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [9U][2U] >> 0xeU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][3U] << 0x12U));
    tracep->fullWData(oldp+840,(__Vtemp_h544cee01__0),128);
    __Vtemp_h604618a7__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0xaU][0U] << 0x14U);
    __Vtemp_h604618a7__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xaU][0U] >> 0xcU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xaU][1U] << 0x14U));
    __Vtemp_h604618a7__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xaU][1U] >> 0xcU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xaU][2U] << 0x14U));
    __Vtemp_h604618a7__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xaU][2U] >> 0xcU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xaU][3U] << 0x14U));
    tracep->fullWData(oldp+844,(__Vtemp_h604618a7__0),128);
    __Vtemp_h0011670c__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0xbU][0U] << 0x16U);
    __Vtemp_h0011670c__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xbU][0U] >> 0xaU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xbU][1U] << 0x16U));
    __Vtemp_h0011670c__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xbU][1U] >> 0xaU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xbU][2U] << 0x16U));
    __Vtemp_h0011670c__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xbU][2U] >> 0xaU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xbU][3U] << 0x16U));
    tracep->fullWData(oldp+848,(__Vtemp_h0011670c__0),128);
    __Vtemp_h456941c4__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [9U][0U] << 0x12U) 
                                 ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xaU][0U] << 0x14U)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xbU][0U] << 0x16U));
    __Vtemp_h456941c4__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][0U] >> 0xeU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [9U][1U] << 0x12U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][0U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][1U] << 0x14U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xbU][0U] >> 0xaU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xbU][1U] << 0x16U)));
    __Vtemp_h456941c4__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][1U] >> 0xeU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [9U][2U] << 0x12U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][1U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][2U] << 0x14U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xbU][1U] >> 0xaU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xbU][2U] << 0x16U)));
    __Vtemp_h456941c4__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][2U] >> 0xeU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [9U][3U] << 0x12U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][2U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][3U] << 0x14U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xbU][2U] >> 0xaU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xbU][3U] << 0x16U)));
    tracep->fullWData(oldp+852,(__Vtemp_h456941c4__0),128);
    __Vtemp_he78eae4f__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][0U] >> 0xeU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [9U][1U] << 0x12U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][0U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][1U] << 0x14U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][0U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][1U] << 0x14U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xbU][0U] >> 0xaU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xbU][1U] 
                                         << 0x16U))));
    __Vtemp_he78eae4f__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][1U] >> 0xeU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [9U][2U] << 0x12U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][1U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][2U] << 0x14U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][1U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][2U] << 0x14U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xbU][1U] >> 0xaU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xbU][2U] 
                                         << 0x16U))));
    __Vtemp_he78eae4f__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][2U] >> 0xeU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [9U][3U] << 0x12U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][2U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][3U] << 0x14U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][2U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xaU][3U] << 0x14U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xbU][2U] >> 0xaU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xbU][3U] 
                                         << 0x16U))));
    __Vtemp_hea00f9ba__0[0U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [9U][0U] << 0x12U) 
                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][0U] << 0x14U)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xaU][0U] << 0x14U) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xbU][0U] << 0x16U))) 
                                | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [9U][0U] << 0x12U) 
                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xbU][0U] << 0x16U)));
    __Vtemp_hea00f9ba__0[1U] = (__Vtemp_he78eae4f__0[1U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [9U][0U] >> 0xeU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [9U][1U] << 0x12U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xbU][0U] >> 0xaU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xbU][1U] 
                                         << 0x16U))));
    __Vtemp_hea00f9ba__0[2U] = (__Vtemp_he78eae4f__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [9U][1U] >> 0xeU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [9U][2U] << 0x12U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xbU][1U] >> 0xaU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xbU][2U] 
                                         << 0x16U))));
    __Vtemp_hea00f9ba__0[3U] = (__Vtemp_he78eae4f__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [9U][2U] >> 0xeU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [9U][3U] << 0x12U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xbU][2U] >> 0xaU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xbU][3U] 
                                         << 0x16U))));
    tracep->fullWData(oldp+856,(__Vtemp_hea00f9ba__0),128);
    __Vtemp_h3407a5e1__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0xcU][0U] << 0x18U);
    __Vtemp_h3407a5e1__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xcU][0U] >> 8U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][1U] << 0x18U));
    __Vtemp_h3407a5e1__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xcU][1U] >> 8U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][2U] << 0x18U));
    __Vtemp_h3407a5e1__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xcU][2U] >> 8U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][3U] << 0x18U));
    tracep->fullWData(oldp+860,(__Vtemp_h3407a5e1__0),128);
    __Vtemp_h8015b798__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0xdU][0U] << 0x1aU);
    __Vtemp_h8015b798__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xdU][0U] >> 6U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xdU][1U] << 0x1aU));
    __Vtemp_h8015b798__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xdU][1U] >> 6U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xdU][2U] << 0x1aU));
    __Vtemp_h8015b798__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xdU][2U] >> 6U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xdU][3U] << 0x1aU));
    tracep->fullWData(oldp+864,(__Vtemp_h8015b798__0),128);
    __Vtemp_hf57249c8__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0xeU][0U] << 0x1cU);
    __Vtemp_hf57249c8__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xeU][0U] >> 4U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xeU][1U] << 0x1cU));
    __Vtemp_hf57249c8__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xeU][1U] >> 4U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xeU][2U] << 0x1cU));
    __Vtemp_hf57249c8__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xeU][2U] >> 4U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xeU][3U] << 0x1cU));
    tracep->fullWData(oldp+868,(__Vtemp_hf57249c8__0),128);
    __Vtemp_hef724dde__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0xcU][0U] << 0x18U) 
                                 ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xdU][0U] << 0x1aU)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xeU][0U] << 0x1cU));
    __Vtemp_hef724dde__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][0U] >> 8U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xcU][1U] << 0x18U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][0U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xdU][1U] << 0x1aU))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xeU][0U] >> 4U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xeU][1U] << 0x1cU)));
    __Vtemp_hef724dde__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][1U] >> 8U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xcU][2U] << 0x18U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][1U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xdU][2U] << 0x1aU))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xeU][1U] >> 4U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xeU][2U] << 0x1cU)));
    __Vtemp_hef724dde__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][2U] >> 8U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xcU][3U] << 0x18U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][2U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xdU][3U] << 0x1aU))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xeU][2U] >> 4U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xeU][3U] << 0x1cU)));
    tracep->fullWData(oldp+872,(__Vtemp_hef724dde__0),128);
    __Vtemp_h1ab3a480__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][0U] >> 8U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xcU][1U] << 0x18U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][0U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xdU][1U] << 0x1aU))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][0U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xdU][1U] << 0x1aU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xeU][0U] >> 4U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xeU][1U] 
                                         << 0x1cU))));
    __Vtemp_h1ab3a480__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][1U] >> 8U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xcU][2U] << 0x18U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][1U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xdU][2U] << 0x1aU))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][1U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xdU][2U] << 0x1aU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xeU][1U] >> 4U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xeU][2U] 
                                         << 0x1cU))));
    __Vtemp_h1ab3a480__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][2U] >> 8U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xcU][3U] << 0x18U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][2U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xdU][3U] << 0x1aU))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][2U] >> 6U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xdU][3U] << 0x1aU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xeU][2U] >> 4U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xeU][3U] 
                                         << 0x1cU))));
    __Vtemp_he7ec8c7e__0[0U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xcU][0U] << 0x18U) 
                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][0U] << 0x1aU)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xdU][0U] << 0x1aU) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xeU][0U] << 0x1cU))) 
                                | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xcU][0U] << 0x18U) 
                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xeU][0U] << 0x1cU)));
    __Vtemp_he7ec8c7e__0[1U] = (__Vtemp_h1ab3a480__0[1U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xcU][0U] >> 8U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xcU][1U] << 0x18U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xeU][0U] >> 4U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xeU][1U] 
                                         << 0x1cU))));
    __Vtemp_he7ec8c7e__0[2U] = (__Vtemp_h1ab3a480__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xcU][1U] >> 8U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xcU][2U] << 0x18U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xeU][1U] >> 4U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xeU][2U] 
                                         << 0x1cU))));
    __Vtemp_he7ec8c7e__0[3U] = (__Vtemp_h1ab3a480__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xcU][2U] >> 8U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xcU][3U] << 0x18U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xeU][2U] >> 4U) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                         [0xeU][3U] 
                                         << 0x1cU))));
    tracep->fullWData(oldp+876,(__Vtemp_he7ec8c7e__0),128);
    __Vtemp_h2629b991__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0xfU][0U] << 0x1eU);
    __Vtemp_h2629b991__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xfU][0U] >> 2U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xfU][1U] << 0x1eU));
    __Vtemp_h2629b991__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xfU][1U] >> 2U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xfU][2U] << 0x1eU));
    __Vtemp_h2629b991__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0xfU][2U] >> 2U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xfU][3U] << 0x1eU));
    tracep->fullWData(oldp+880,(__Vtemp_h2629b991__0),128);
    __Vtemp_h3aac0a00__0[0U] = 0U;
    __Vtemp_h3aac0a00__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0x10U][0U];
    __Vtemp_h3aac0a00__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0x10U][1U];
    __Vtemp_h3aac0a00__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
        [0x10U][2U];
    tracep->fullWData(oldp+884,(__Vtemp_h3aac0a00__0),128);
    __Vtemp_hb732e964__0[0U] = 0U;
    __Vtemp_hb732e964__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x11U][0U] << 2U);
    __Vtemp_hb732e964__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x11U][0U] >> 0x1eU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x11U][1U] << 2U));
    __Vtemp_hb732e964__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x11U][1U] >> 0x1eU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x11U][2U] << 2U));
    tracep->fullWData(oldp+888,(__Vtemp_hb732e964__0),128);
    __Vtemp_h046a7832__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0xfU][0U] << 0x1eU);
    __Vtemp_h046a7832__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xfU][0U] >> 2U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xfU][1U] << 0x1eU)) 
                                 ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x10U][0U]) ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                 [0x11U][0U] 
                                                 << 2U));
    __Vtemp_h046a7832__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xfU][1U] >> 2U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xfU][2U] << 0x1eU)) 
                                 ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x10U][1U]) ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                  [0x11U][0U] 
                                                  >> 0x1eU) 
                                                 | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                    [0x11U][1U] 
                                                    << 2U)));
    __Vtemp_h046a7832__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0xfU][2U] >> 2U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xfU][3U] << 0x1eU)) 
                                 ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x10U][2U]) ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                  [0x11U][1U] 
                                                  >> 0x1eU) 
                                                 | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                    [0x11U][2U] 
                                                    << 2U)));
    tracep->fullWData(oldp+892,(__Vtemp_h046a7832__0),128);
    __Vtemp_h6d418be5__0[0U] = 0U;
    __Vtemp_h6d418be5__0[1U] = (((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xfU][0U] >> 2U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xfU][1U] << 0x1eU)) 
                                  & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x10U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                  [0x10U][0U] 
                                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                     [0x11U][0U] 
                                                     << 2U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xfU][0U] >> 2U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xfU][1U] << 0x1eU)) 
                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x11U][0U] << 2U)));
    __Vtemp_h6d418be5__0[2U] = (((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xfU][1U] >> 2U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xfU][2U] << 0x1eU)) 
                                  & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x10U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                  [0x10U][1U] 
                                                  & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                      [0x11U][0U] 
                                                      >> 0x1eU) 
                                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                        [0x11U][1U] 
                                                        << 2U)))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xfU][1U] >> 2U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xfU][2U] << 0x1eU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x11U][0U] 
                                       >> 0x1eU) | 
                                      (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x11U][1U] 
                                       << 2U))));
    __Vtemp_h6d418be5__0[3U] = (((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0xfU][2U] >> 2U) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0xfU][3U] << 0x1eU)) 
                                  & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x10U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                  [0x10U][2U] 
                                                  & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                      [0x11U][1U] 
                                                      >> 0x1eU) 
                                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                        [0x11U][2U] 
                                                        << 2U)))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0xfU][2U] >> 2U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0xfU][3U] << 0x1eU)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x11U][1U] 
                                       >> 0x1eU) | 
                                      (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x11U][2U] 
                                       << 2U))));
    tracep->fullWData(oldp+896,(__Vtemp_h6d418be5__0),128);
    __Vtemp_h0182840a__0[0U] = 0U;
    __Vtemp_h0182840a__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x12U][0U] << 4U);
    __Vtemp_h0182840a__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x12U][0U] >> 0x1cU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x12U][1U] << 4U));
    __Vtemp_h0182840a__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x12U][1U] >> 0x1cU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x12U][2U] << 4U));
    tracep->fullWData(oldp+900,(__Vtemp_h0182840a__0),128);
    __Vtemp_hb214662e__0[0U] = 0U;
    __Vtemp_hb214662e__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x13U][0U] << 6U);
    __Vtemp_hb214662e__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x13U][0U] >> 0x1aU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x13U][1U] << 6U));
    __Vtemp_hb214662e__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x13U][1U] >> 0x1aU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x13U][2U] << 6U));
    tracep->fullWData(oldp+904,(__Vtemp_hb214662e__0),128);
    __Vtemp_h5146fe53__0[0U] = 0U;
    __Vtemp_h5146fe53__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x14U][0U] << 8U);
    __Vtemp_h5146fe53__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x14U][0U] >> 0x18U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x14U][1U] << 8U));
    __Vtemp_h5146fe53__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x14U][1U] >> 0x18U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x14U][2U] << 8U));
    tracep->fullWData(oldp+908,(__Vtemp_h5146fe53__0),128);
    __Vtemp_h1cac1abb__0[0U] = 0U;
    __Vtemp_h1cac1abb__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x12U][0U] << 4U) 
                                 ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x13U][0U] << 6U)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x14U][0U] << 8U));
    __Vtemp_h1cac1abb__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x12U][0U] >> 0x1cU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x12U][1U] << 4U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x13U][0U] >> 0x1aU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x13U][1U] 
                                       << 6U))) ^ (
                                                   (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                    [0x14U][0U] 
                                                    >> 0x18U) 
                                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                      [0x14U][1U] 
                                                      << 8U)));
    __Vtemp_h1cac1abb__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x12U][1U] >> 0x1cU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x12U][2U] << 4U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x13U][1U] >> 0x1aU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x13U][2U] 
                                       << 6U))) ^ (
                                                   (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                    [0x14U][1U] 
                                                    >> 0x18U) 
                                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                      [0x14U][2U] 
                                                      << 8U)));
    tracep->fullWData(oldp+912,(__Vtemp_h1cac1abb__0),128);
    __Vtemp_h86d60f8f__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x12U][0U] >> 0x1cU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x12U][1U] << 4U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x13U][0U] >> 0x1aU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x13U][1U] 
                                       << 6U))) | (
                                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                     [0x13U][0U] 
                                                     >> 0x1aU) 
                                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                       [0x13U][1U] 
                                                       << 6U)) 
                                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                       [0x14U][0U] 
                                                       >> 0x18U) 
                                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                         [0x14U][1U] 
                                                         << 8U))));
    __Vtemp_h86d60f8f__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x12U][1U] >> 0x1cU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x12U][2U] << 4U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x13U][1U] >> 0x1aU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x13U][2U] 
                                       << 6U))) | (
                                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                     [0x13U][1U] 
                                                     >> 0x1aU) 
                                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                       [0x13U][2U] 
                                                       << 6U)) 
                                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                       [0x14U][1U] 
                                                       >> 0x18U) 
                                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                         [0x14U][2U] 
                                                         << 8U))));
    __Vtemp_h7f006057__0[0U] = 0U;
    __Vtemp_h7f006057__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x12U][0U] << 4U) 
                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x13U][0U] << 6U)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x13U][0U] << 6U) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x14U][0U] 
                                       << 8U))) | (
                                                   (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                    [0x12U][0U] 
                                                    << 4U) 
                                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                      [0x14U][0U] 
                                                      << 8U)));
    __Vtemp_h7f006057__0[2U] = (__Vtemp_h86d60f8f__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x12U][0U] >> 0x1cU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x12U][1U] 
                                       << 4U)) & ((
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                   [0x14U][0U] 
                                                   >> 0x18U) 
                                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                     [0x14U][1U] 
                                                     << 8U))));
    __Vtemp_h7f006057__0[3U] = (__Vtemp_h86d60f8f__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x12U][1U] >> 0x1cU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x12U][2U] 
                                       << 4U)) & ((
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                   [0x14U][1U] 
                                                   >> 0x18U) 
                                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                                     [0x14U][2U] 
                                                     << 8U))));
    tracep->fullWData(oldp+916,(__Vtemp_h7f006057__0),128);
    __Vtemp_h2e51ecc1__0[0U] = 0U;
    __Vtemp_h2e51ecc1__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x15U][0U] << 0xaU);
    __Vtemp_h2e51ecc1__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x15U][0U] >> 0x16U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x15U][1U] << 0xaU));
    __Vtemp_h2e51ecc1__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x15U][1U] >> 0x16U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x15U][2U] << 0xaU));
    tracep->fullWData(oldp+920,(__Vtemp_h2e51ecc1__0),128);
    __Vtemp_hc633255e__0[0U] = 0U;
    __Vtemp_hc633255e__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x16U][0U] << 0xcU);
    __Vtemp_hc633255e__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x16U][0U] >> 0x14U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x16U][1U] << 0xcU));
    __Vtemp_hc633255e__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x16U][1U] >> 0x14U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x16U][2U] << 0xcU));
    tracep->fullWData(oldp+924,(__Vtemp_hc633255e__0),128);
    __Vtemp_h5f7d747f__0[0U] = 0U;
    __Vtemp_h5f7d747f__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x17U][0U] << 0xeU);
    __Vtemp_h5f7d747f__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x17U][0U] >> 0x12U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x17U][1U] << 0xeU));
    __Vtemp_h5f7d747f__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x17U][1U] >> 0x12U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x17U][2U] << 0xeU));
    tracep->fullWData(oldp+928,(__Vtemp_h5f7d747f__0),128);
    __Vtemp_h7f9cc2a2__0[0U] = 0U;
    __Vtemp_h7f9cc2a2__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x15U][0U] << 0xaU) 
                                 ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x16U][0U] << 0xcU)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x17U][0U] << 0xeU));
    __Vtemp_h7f9cc2a2__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x15U][0U] >> 0x16U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x15U][1U] << 0xaU)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x16U][0U] >> 0x14U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x16U][1U] 
                                       << 0xcU))) ^ 
                                ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x17U][0U] >> 0x12U) 
                                 | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x17U][1U] << 0xeU)));
    __Vtemp_h7f9cc2a2__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x15U][1U] >> 0x16U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x15U][2U] << 0xaU)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x16U][1U] >> 0x14U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x16U][2U] 
                                       << 0xcU))) ^ 
                                ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x17U][1U] >> 0x12U) 
                                 | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x17U][2U] << 0xeU)));
    tracep->fullWData(oldp+932,(__Vtemp_h7f9cc2a2__0),128);
    __Vtemp_h2ecbf711__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x15U][0U] >> 0x16U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x15U][1U] << 0xaU)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x16U][0U] >> 0x14U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x16U][1U] 
                                       << 0xcU))) | 
                                (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x16U][0U] >> 0x14U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x16U][1U] << 0xcU)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x17U][0U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x17U][1U] 
                                       << 0xeU))));
    __Vtemp_h2ecbf711__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x15U][1U] >> 0x16U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x15U][2U] << 0xaU)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x16U][1U] >> 0x14U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x16U][2U] 
                                       << 0xcU))) | 
                                (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x16U][1U] >> 0x14U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x16U][2U] << 0xcU)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x17U][1U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x17U][2U] 
                                       << 0xeU))));
    __Vtemp_haf5dff14__0[0U] = 0U;
    __Vtemp_haf5dff14__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x15U][0U] << 0xaU) 
                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x16U][0U] << 0xcU)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x16U][0U] << 0xcU) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x17U][0U] 
                                       << 0xeU))) | 
                                ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x15U][0U] << 0xaU) 
                                 & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x17U][0U] << 0xeU)));
    __Vtemp_haf5dff14__0[2U] = (__Vtemp_h2ecbf711__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x15U][0U] >> 0x16U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x15U][1U] 
                                       << 0xaU)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x17U][0U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x17U][1U] 
                                       << 0xeU))));
    __Vtemp_haf5dff14__0[3U] = (__Vtemp_h2ecbf711__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x15U][1U] >> 0x16U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x15U][2U] 
                                       << 0xaU)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x17U][1U] >> 0x12U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x17U][2U] 
                                       << 0xeU))));
    tracep->fullWData(oldp+936,(__Vtemp_haf5dff14__0),128);
    __Vtemp_h9f8a9bcc__0[0U] = 0U;
    __Vtemp_h9f8a9bcc__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x18U][0U] << 0x10U);
    __Vtemp_h9f8a9bcc__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x18U][0U] >> 0x10U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x18U][1U] << 0x10U));
    __Vtemp_h9f8a9bcc__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x18U][1U] >> 0x10U) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x18U][2U] << 0x10U));
    tracep->fullWData(oldp+940,(__Vtemp_h9f8a9bcc__0),128);
    __Vtemp_h65fcf2e9__0[0U] = 0U;
    __Vtemp_h65fcf2e9__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x19U][0U] << 0x12U);
    __Vtemp_h65fcf2e9__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x19U][0U] >> 0xeU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x19U][1U] << 0x12U));
    __Vtemp_h65fcf2e9__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x19U][1U] >> 0xeU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x19U][2U] << 0x12U));
    tracep->fullWData(oldp+944,(__Vtemp_h65fcf2e9__0),128);
    __Vtemp_h6b5a749e__0[0U] = 0U;
    __Vtemp_h6b5a749e__0[1U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                [0x1aU][0U] << 0x14U);
    __Vtemp_h6b5a749e__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1aU][0U] >> 0xcU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1aU][1U] << 0x14U));
    __Vtemp_h6b5a749e__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                 [0x1aU][1U] >> 0xcU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1aU][2U] << 0x14U));
    tracep->fullWData(oldp+948,(__Vtemp_h6b5a749e__0),128);
    __Vtemp_hbc51cd3a__0[0U] = 0U;
    __Vtemp_hbc51cd3a__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                  [0x18U][0U] << 0x10U) 
                                 ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x19U][0U] << 0x12U)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x1aU][0U] << 0x14U));
    __Vtemp_hbc51cd3a__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x18U][0U] >> 0x10U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x18U][1U] << 0x10U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x19U][0U] >> 0xeU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x19U][1U] 
                                       << 0x12U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x1aU][0U] >> 0xcU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1aU][1U] << 0x14U)));
    __Vtemp_hbc51cd3a__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x18U][1U] >> 0x10U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x18U][2U] << 0x10U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x19U][1U] >> 0xeU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x19U][2U] 
                                       << 0x12U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x1aU][1U] >> 0xcU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1aU][2U] << 0x14U)));
    tracep->fullWData(oldp+952,(__Vtemp_hbc51cd3a__0),128);
    __Vtemp_hbe7230a4__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x18U][0U] >> 0x10U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x18U][1U] << 0x10U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x19U][0U] >> 0xeU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x19U][1U] 
                                       << 0x12U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x19U][0U] >> 0xeU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x19U][1U] 
                                       << 0x12U)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1aU][0U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1aU][1U] 
                                       << 0x14U))));
    __Vtemp_hbe7230a4__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x18U][1U] >> 0x10U) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x18U][2U] << 0x10U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x19U][1U] >> 0xeU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x19U][2U] 
                                       << 0x12U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x19U][1U] >> 0xeU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x19U][2U] 
                                       << 0x12U)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1aU][1U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1aU][2U] 
                                       << 0x14U))));
    __Vtemp_h5e80b166__0[0U] = 0U;
    __Vtemp_h5e80b166__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                   [0x18U][0U] << 0x10U) 
                                  & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x19U][0U] << 0x12U)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x19U][0U] << 0x12U) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1aU][0U] 
                                       << 0x14U))) 
                                | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                    [0x18U][0U] << 0x10U) 
                                   & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                      [0x1aU][0U] << 0x14U)));
    __Vtemp_h5e80b166__0[2U] = (__Vtemp_hbe7230a4__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x18U][0U] >> 0x10U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x18U][1U] 
                                       << 0x10U)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1aU][0U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1aU][1U] 
                                       << 0x14U))));
    __Vtemp_h5e80b166__0[3U] = (__Vtemp_hbe7230a4__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x18U][1U] >> 0x10U) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x18U][2U] 
                                       << 0x10U)) & 
                                   ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                     [0x1aU][1U] >> 0xcU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__psum
                                       [0x1aU][2U] 
                                       << 0x14U))));
    tracep->fullWData(oldp+956,(__Vtemp_h5e80b166__0),128);
    __Vtemp_hf17187cd__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0U][0U];
    __Vtemp_hf17187cd__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0U][1U];
    __Vtemp_hf17187cd__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0U][2U];
    __Vtemp_hf17187cd__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0U][3U];
    tracep->fullWData(oldp+960,(__Vtemp_hf17187cd__0),128);
    __Vtemp_hf1718a09__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [1U][0U];
    __Vtemp_hf1718a09__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [1U][1U];
    __Vtemp_hf1718a09__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [1U][2U];
    __Vtemp_hf1718a09__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [1U][3U];
    tracep->fullWData(oldp+964,(__Vtemp_hf1718a09__0),128);
    __Vtemp_hf1718856__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [2U][0U];
    __Vtemp_hf1718856__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [2U][1U];
    __Vtemp_hf1718856__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [2U][2U];
    __Vtemp_hf1718856__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [2U][3U];
    tracep->fullWData(oldp+968,(__Vtemp_hf1718856__0),128);
    __Vtemp_h92c348b0__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [1U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [2U][0U]);
    __Vtemp_h92c348b0__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [1U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [2U][1U]);
    __Vtemp_h92c348b0__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [1U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [2U][2U]);
    __Vtemp_h92c348b0__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [1U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [2U][3U]);
    tracep->fullWData(oldp+972,(__Vtemp_h92c348b0__0),128);
    __Vtemp_h173af8c6__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [1U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [2U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [2U][0U]));
    __Vtemp_h173af8c6__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [1U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [2U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [2U][1U]));
    __Vtemp_h173af8c6__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [1U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [2U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [2U][2U]));
    __Vtemp_h173af8c6__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [1U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [2U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [2U][3U]));
    tracep->fullWData(oldp+976,(__Vtemp_h173af8c6__0),128);
    __Vtemp_hf1718a91__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [3U][0U];
    __Vtemp_hf1718a91__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [3U][1U];
    __Vtemp_hf1718a91__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [3U][2U];
    __Vtemp_hf1718a91__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [3U][3U];
    tracep->fullWData(oldp+980,(__Vtemp_hf1718a91__0),128);
    __Vtemp_hf17188d4__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [4U][0U];
    __Vtemp_hf17188d4__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [4U][1U];
    __Vtemp_hf17188d4__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [4U][2U];
    __Vtemp_hf17188d4__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [4U][3U];
    tracep->fullWData(oldp+984,(__Vtemp_hf17188d4__0),128);
    __Vtemp_hf1718b12__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [5U][0U];
    __Vtemp_hf1718b12__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [5U][1U];
    __Vtemp_hf1718b12__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [5U][2U];
    __Vtemp_hf1718b12__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [5U][3U];
    tracep->fullWData(oldp+988,(__Vtemp_hf1718b12__0),128);
    __Vtemp_h7152695f__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [3U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [4U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [5U][0U]);
    __Vtemp_h7152695f__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [3U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [4U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [5U][1U]);
    __Vtemp_h7152695f__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [3U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [4U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [5U][2U]);
    __Vtemp_h7152695f__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [3U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [4U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [5U][3U]);
    tracep->fullWData(oldp+992,(__Vtemp_h7152695f__0),128);
    __Vtemp_h41363071__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [3U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [4U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [4U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [5U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [3U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [5U][0U]));
    __Vtemp_h41363071__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [3U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [4U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [4U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [5U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [3U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [5U][1U]));
    __Vtemp_h41363071__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [3U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [4U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [4U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [5U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [3U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [5U][2U]));
    __Vtemp_h41363071__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [3U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [4U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [4U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [5U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [3U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [5U][3U]));
    tracep->fullWData(oldp+996,(__Vtemp_h41363071__0),128);
    __Vtemp_hf17195a5__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [6U][0U];
    __Vtemp_hf17195a5__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [6U][1U];
    __Vtemp_hf17195a5__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [6U][2U];
    __Vtemp_hf17195a5__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [6U][3U];
    tracep->fullWData(oldp+1000,(__Vtemp_hf17195a5__0),128);
    __Vtemp_hf1718b8a__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [7U][0U];
    __Vtemp_hf1718b8a__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [7U][1U];
    __Vtemp_hf1718b8a__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [7U][2U];
    __Vtemp_hf1718b8a__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [7U][3U];
    tracep->fullWData(oldp+1004,(__Vtemp_hf1718b8a__0),128);
    __Vtemp_hf1718a27__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [8U][0U];
    __Vtemp_hf1718a27__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [8U][1U];
    __Vtemp_hf1718a27__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [8U][2U];
    __Vtemp_hf1718a27__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [8U][3U];
    tracep->fullWData(oldp+1008,(__Vtemp_hf1718a27__0),128);
    __Vtemp_hae126eed__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [6U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [7U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [8U][0U]);
    __Vtemp_hae126eed__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [6U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [7U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [8U][1U]);
    __Vtemp_hae126eed__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [6U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [7U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [8U][2U]);
    __Vtemp_hae126eed__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [6U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [7U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                [8U][3U]);
    tracep->fullWData(oldp+1012,(__Vtemp_hae126eed__0),128);
    __Vtemp_hc13907b7__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [6U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [7U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [7U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [8U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [6U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [8U][0U]));
    __Vtemp_hc13907b7__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [6U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [7U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [7U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [8U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [6U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [8U][1U]));
    __Vtemp_hc13907b7__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [6U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [7U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [7U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [8U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [6U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [8U][2U]));
    __Vtemp_hc13907b7__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [6U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [7U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [7U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                               [8U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [6U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [8U][3U]));
    tracep->fullWData(oldp+1016,(__Vtemp_hc13907b7__0),128);
    __Vtemp_hf1719407__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [9U][0U];
    __Vtemp_hf1719407__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [9U][1U];
    __Vtemp_hf1719407__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [9U][2U];
    __Vtemp_hf1719407__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [9U][3U];
    tracep->fullWData(oldp+1020,(__Vtemp_hf1719407__0),128);
    __Vtemp_hf1718a4c__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0xaU][0U];
    __Vtemp_hf1718a4c__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0xaU][1U];
    __Vtemp_hf1718a4c__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0xaU][2U];
    __Vtemp_hf1718a4c__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
        [0xaU][3U];
    tracep->fullWData(oldp+1024,(__Vtemp_hf1718a4c__0),128);
    __Vtemp_h07c4056d__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [0U][0U] << 1U);
    __Vtemp_h07c4056d__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [0U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [0U][1U] << 1U));
    __Vtemp_h07c4056d__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [0U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [0U][2U] << 1U));
    __Vtemp_h07c4056d__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [0U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [0U][3U] << 1U));
    tracep->fullWData(oldp+1028,(__Vtemp_h07c4056d__0),128);
    __Vtemp_hb0af998d__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [9U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [0xaU][0U]) ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [0U][0U] 
                                                << 1U));
    __Vtemp_hb0af998d__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [9U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [0xaU][1U]) ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                 [0U][0U] 
                                                 >> 0x1fU) 
                                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                   [0U][1U] 
                                                   << 1U)));
    __Vtemp_hb0af998d__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [9U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [0xaU][2U]) ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                 [0U][1U] 
                                                 >> 0x1fU) 
                                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                   [0U][2U] 
                                                   << 1U)));
    __Vtemp_hb0af998d__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [9U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                 [0xaU][3U]) ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                 [0U][2U] 
                                                 >> 0x1fU) 
                                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                   [0U][3U] 
                                                   << 1U)));
    tracep->fullWData(oldp+1032,(__Vtemp_hb0af998d__0),128);
    __Vtemp_hf5d7ba4d__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [9U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [0xaU][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                                 [0xaU][0U] 
                                                 & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                    [0U][0U] 
                                                    << 1U))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [9U][0U] & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                               [0U][0U] 
                                               << 1U)));
    __Vtemp_hf5d7ba4d__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [9U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [0xaU][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                                 [0xaU][1U] 
                                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                     [0U][0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                       [0U][1U] 
                                                       << 1U)))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [9U][1U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [0U][0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                  [0U][1U] 
                                                  << 1U))));
    __Vtemp_hf5d7ba4d__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [9U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [0xaU][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                                 [0xaU][2U] 
                                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                     [0U][1U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                       [0U][2U] 
                                                       << 1U)))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [9U][2U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [0U][1U] 
                                                >> 0x1fU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                  [0U][2U] 
                                                  << 1U))));
    __Vtemp_hf5d7ba4d__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [9U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                  [0xaU][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                                 [0xaU][3U] 
                                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                     [0U][2U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                       [0U][3U] 
                                                       << 1U)))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1s
                                   [9U][3U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [0U][2U] 
                                                >> 0x1fU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                  [0U][3U] 
                                                  << 1U))));
    tracep->fullWData(oldp+1036,(__Vtemp_hf5d7ba4d__0),128);
    __Vtemp_h00f21e9e__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [1U][0U] << 1U);
    __Vtemp_h00f21e9e__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [1U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][1U] << 1U));
    __Vtemp_h00f21e9e__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [1U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][2U] << 1U));
    __Vtemp_h00f21e9e__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [1U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][3U] << 1U));
    tracep->fullWData(oldp+1040,(__Vtemp_h00f21e9e__0),128);
    __Vtemp_h7ce663a5__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [2U][0U] << 1U);
    __Vtemp_h7ce663a5__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [2U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [2U][1U] << 1U));
    __Vtemp_h7ce663a5__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [2U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [2U][2U] << 1U));
    __Vtemp_h7ce663a5__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [2U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [2U][3U] << 1U));
    tracep->fullWData(oldp+1044,(__Vtemp_h7ce663a5__0),128);
    __Vtemp_hac2a4a9e__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [3U][0U] << 1U);
    __Vtemp_hac2a4a9e__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [3U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [3U][1U] << 1U));
    __Vtemp_hac2a4a9e__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [3U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [3U][2U] << 1U));
    __Vtemp_hac2a4a9e__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [3U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [3U][3U] << 1U));
    tracep->fullWData(oldp+1048,(__Vtemp_hac2a4a9e__0),128);
    __Vtemp_hfcaac4cd__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                  [1U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                  [2U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [3U][0U]) << 1U);
    __Vtemp_hfcaac4cd__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][0U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [1U][1U] << 1U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [2U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [2U][1U] << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [3U][0U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [3U][1U] << 1U)));
    __Vtemp_hfcaac4cd__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][1U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [1U][2U] << 1U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [2U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [2U][2U] << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [3U][1U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [3U][2U] << 1U)));
    __Vtemp_hfcaac4cd__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][2U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [1U][3U] << 1U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [2U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [2U][3U] << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [3U][2U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [3U][3U] << 1U)));
    tracep->fullWData(oldp+1052,(__Vtemp_hfcaac4cd__0),128);
    __Vtemp_h3c616819__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][0U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [1U][1U] << 1U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [2U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [2U][1U] << 1U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [2U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [2U][1U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [3U][0U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [3U][1U] << 1U))));
    __Vtemp_h3c616819__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][1U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [1U][2U] << 1U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [2U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [2U][2U] << 1U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [2U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [2U][2U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [3U][1U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [3U][2U] << 1U))));
    __Vtemp_h3c616819__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][2U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [1U][3U] << 1U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [2U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [2U][3U] << 1U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [2U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [2U][3U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [3U][2U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [3U][3U] << 1U))));
    __Vtemp_hb6585417__0[0U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [2U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [2U][0U] 
                                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [3U][0U])) 
                                 | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [3U][0U])) << 1U);
    __Vtemp_hb6585417__0[1U] = (__Vtemp_h3c616819__0[1U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [1U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [1U][1U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [3U][0U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [3U][1U] << 1U))));
    __Vtemp_hb6585417__0[2U] = (__Vtemp_h3c616819__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [1U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [1U][2U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [3U][1U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [3U][2U] << 1U))));
    __Vtemp_hb6585417__0[3U] = (__Vtemp_h3c616819__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [1U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [1U][3U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [3U][2U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [3U][3U] << 1U))));
    tracep->fullWData(oldp+1056,(__Vtemp_hb6585417__0),128);
    __Vtemp_hf5531076__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [4U][0U] << 1U);
    __Vtemp_hf5531076__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [4U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][1U] << 1U));
    __Vtemp_hf5531076__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [4U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][2U] << 1U));
    __Vtemp_hf5531076__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [4U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][3U] << 1U));
    tracep->fullWData(oldp+1060,(__Vtemp_hf5531076__0),128);
    __Vtemp_h57954f3d__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [5U][0U] << 1U);
    __Vtemp_h57954f3d__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [5U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [5U][1U] << 1U));
    __Vtemp_h57954f3d__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [5U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [5U][2U] << 1U));
    __Vtemp_h57954f3d__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [5U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [5U][3U] << 1U));
    tracep->fullWData(oldp+1064,(__Vtemp_h57954f3d__0),128);
    __Vtemp_h7f281be0__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [6U][0U] << 1U);
    __Vtemp_h7f281be0__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [6U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [6U][1U] << 1U));
    __Vtemp_h7f281be0__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [6U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [6U][2U] << 1U));
    __Vtemp_h7f281be0__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [6U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [6U][3U] << 1U));
    tracep->fullWData(oldp+1068,(__Vtemp_h7f281be0__0),128);
    __Vtemp_h2e2ac58e__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                  [4U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                  [5U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [6U][0U]) << 1U);
    __Vtemp_h2e2ac58e__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][0U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [4U][1U] << 1U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [5U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [5U][1U] << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [6U][0U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [6U][1U] << 1U)));
    __Vtemp_h2e2ac58e__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][1U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [4U][2U] << 1U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [5U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [5U][2U] << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [6U][1U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [6U][2U] << 1U)));
    __Vtemp_h2e2ac58e__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][2U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [4U][3U] << 1U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [5U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [5U][3U] << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [6U][2U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [6U][3U] << 1U)));
    tracep->fullWData(oldp+1072,(__Vtemp_h2e2ac58e__0),128);
    __Vtemp_hd7c89330__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][0U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [4U][1U] << 1U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [5U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [5U][1U] << 1U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [5U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [5U][1U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [6U][0U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [6U][1U] << 1U))));
    __Vtemp_hd7c89330__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][1U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [4U][2U] << 1U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [5U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [5U][2U] << 1U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [5U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [5U][2U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [6U][1U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [6U][2U] << 1U))));
    __Vtemp_hd7c89330__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][2U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [4U][3U] << 1U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [5U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [5U][3U] << 1U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [5U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [5U][3U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [6U][2U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [6U][3U] << 1U))));
    __Vtemp_h2e9ce97d__0[0U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [4U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [5U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [5U][0U] 
                                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [6U][0U])) 
                                 | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [4U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [6U][0U])) << 1U);
    __Vtemp_h2e9ce97d__0[1U] = (__Vtemp_hd7c89330__0[1U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [4U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [4U][1U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [6U][0U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [6U][1U] << 1U))));
    __Vtemp_h2e9ce97d__0[2U] = (__Vtemp_hd7c89330__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [4U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [4U][2U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [6U][1U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [6U][2U] << 1U))));
    __Vtemp_h2e9ce97d__0[3U] = (__Vtemp_hd7c89330__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [4U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [4U][3U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [6U][2U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [6U][3U] << 1U))));
    tracep->fullWData(oldp+1076,(__Vtemp_h2e9ce97d__0),128);
    __Vtemp_h1527ddb5__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [7U][0U] << 1U);
    __Vtemp_h1527ddb5__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [7U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][1U] << 1U));
    __Vtemp_h1527ddb5__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [7U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][2U] << 1U));
    __Vtemp_h1527ddb5__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [7U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][3U] << 1U));
    tracep->fullWData(oldp+1080,(__Vtemp_h1527ddb5__0),128);
    __Vtemp_h75d709c3__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [8U][0U] << 1U);
    __Vtemp_h75d709c3__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [8U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [8U][1U] << 1U));
    __Vtemp_h75d709c3__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [8U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [8U][2U] << 1U));
    __Vtemp_h75d709c3__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [8U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [8U][3U] << 1U));
    tracep->fullWData(oldp+1084,(__Vtemp_h75d709c3__0),128);
    __Vtemp_h779da789__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [9U][0U] << 1U);
    __Vtemp_h779da789__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [9U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [9U][1U] << 1U));
    __Vtemp_h779da789__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [9U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [9U][2U] << 1U));
    __Vtemp_h779da789__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [9U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [9U][3U] << 1U));
    tracep->fullWData(oldp+1088,(__Vtemp_h779da789__0),128);
    __Vtemp_h9354c33b__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                  [7U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                  [8U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [9U][0U]) << 1U);
    __Vtemp_h9354c33b__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][0U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [7U][1U] << 1U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [8U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [8U][1U] << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [9U][0U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [9U][1U] << 1U)));
    __Vtemp_h9354c33b__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][1U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [7U][2U] << 1U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [8U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [8U][2U] << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [9U][1U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [9U][2U] << 1U)));
    __Vtemp_h9354c33b__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][2U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [7U][3U] << 1U)) 
                                 ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [8U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [8U][3U] << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [9U][2U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [9U][3U] << 1U)));
    tracep->fullWData(oldp+1092,(__Vtemp_h9354c33b__0),128);
    __Vtemp_h4b9ad8a3__0[1U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][0U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [7U][1U] << 1U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [8U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [8U][1U] << 1U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [8U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [8U][1U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [9U][0U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [9U][1U] << 1U))));
    __Vtemp_h4b9ad8a3__0[2U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][1U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [7U][2U] << 1U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [8U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [8U][2U] << 1U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [8U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [8U][2U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [9U][1U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [9U][2U] << 1U))));
    __Vtemp_h4b9ad8a3__0[3U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][2U] >> 0x1fU) 
                                  | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [7U][3U] << 1U)) 
                                 & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [8U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [8U][3U] << 1U))) 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [8U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [8U][3U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [9U][2U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [9U][3U] << 1U))));
    __Vtemp_h631ff6d7__0[0U] = ((((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [7U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [8U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [8U][0U] 
                                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [9U][0U])) 
                                 | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [7U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                    [9U][0U])) << 1U);
    __Vtemp_h631ff6d7__0[1U] = (__Vtemp_h4b9ad8a3__0[1U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [7U][0U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [7U][1U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [9U][0U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [9U][1U] << 1U))));
    __Vtemp_h631ff6d7__0[2U] = (__Vtemp_h4b9ad8a3__0[2U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [7U][1U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [7U][2U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [9U][1U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [9U][2U] << 1U))));
    __Vtemp_h631ff6d7__0[3U] = (__Vtemp_h4b9ad8a3__0[3U] 
                                | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [7U][2U] >> 0x1fU) 
                                    | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [7U][3U] << 1U)) 
                                   & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                       [9U][2U] >> 0x1fU) 
                                      | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                         [9U][3U] << 1U))));
    tracep->fullWData(oldp+1096,(__Vtemp_h631ff6d7__0),128);
    __Vtemp_hf43c4642__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [0U][0U];
    __Vtemp_hf43c4642__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [0U][1U];
    __Vtemp_hf43c4642__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [0U][2U];
    __Vtemp_hf43c4642__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [0U][3U];
    tracep->fullWData(oldp+1100,(__Vtemp_hf43c4642__0),128);
    __Vtemp_hf43c4783__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [1U][0U];
    __Vtemp_hf43c4783__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [1U][1U];
    __Vtemp_hf43c4783__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [1U][2U];
    __Vtemp_hf43c4783__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [1U][3U];
    tracep->fullWData(oldp+1104,(__Vtemp_hf43c4783__0),128);
    __Vtemp_hf43c46c8__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [2U][0U];
    __Vtemp_hf43c46c8__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [2U][1U];
    __Vtemp_hf43c46c8__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [2U][2U];
    __Vtemp_hf43c46c8__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [2U][3U];
    tracep->fullWData(oldp+1108,(__Vtemp_hf43c46c8__0),128);
    __Vtemp_hd011b6c0__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [1U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                [2U][0U]);
    __Vtemp_hd011b6c0__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [1U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                [2U][1U]);
    __Vtemp_hd011b6c0__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [1U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                [2U][2U]);
    __Vtemp_hd011b6c0__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [1U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                [2U][3U]);
    tracep->fullWData(oldp+1112,(__Vtemp_hd011b6c0__0),128);
    __Vtemp_h010b5776__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [1U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [2U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [2U][0U]));
    __Vtemp_h010b5776__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [1U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [2U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [2U][1U]));
    __Vtemp_h010b5776__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [1U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [2U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [2U][2U]));
    __Vtemp_h010b5776__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [1U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [2U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [2U][3U]));
    tracep->fullWData(oldp+1116,(__Vtemp_h010b5776__0),128);
    __Vtemp_hf43c43fb__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [3U][0U];
    __Vtemp_hf43c43fb__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [3U][1U];
    __Vtemp_hf43c43fb__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [3U][2U];
    __Vtemp_hf43c43fb__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [3U][3U];
    tracep->fullWData(oldp+1120,(__Vtemp_hf43c43fb__0),128);
    __Vtemp_hf43c473f__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [4U][0U];
    __Vtemp_hf43c473f__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [4U][1U];
    __Vtemp_hf43c473f__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [4U][2U];
    __Vtemp_hf43c473f__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [4U][3U];
    tracep->fullWData(oldp+1124,(__Vtemp_hf43c473f__0),128);
    __Vtemp_hf43c447e__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [5U][0U];
    __Vtemp_hf43c447e__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [5U][1U];
    __Vtemp_hf43c447e__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [5U][2U];
    __Vtemp_hf43c447e__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [5U][3U];
    tracep->fullWData(oldp+1128,(__Vtemp_hf43c447e__0),128);
    __Vtemp_h32f509e6__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [3U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [4U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                [5U][0U]);
    __Vtemp_h32f509e6__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [3U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [4U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                [5U][1U]);
    __Vtemp_h32f509e6__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [3U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [4U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                [5U][2U]);
    __Vtemp_h32f509e6__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [3U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [4U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                [5U][3U]);
    tracep->fullWData(oldp+1132,(__Vtemp_h32f509e6__0),128);
    __Vtemp_h3692e320__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [3U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [4U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [4U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [5U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [3U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [5U][0U]));
    __Vtemp_h3692e320__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [3U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [4U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [4U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [5U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [3U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [5U][1U]));
    __Vtemp_h3692e320__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [3U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [4U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [4U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [5U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [3U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [5U][2U]));
    __Vtemp_h3692e320__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [3U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [4U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [4U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                               [5U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [3U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [5U][3U]));
    tracep->fullWData(oldp+1136,(__Vtemp_h3692e320__0),128);
    __Vtemp_hf43c43bd__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [6U][0U];
    __Vtemp_hf43c43bd__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [6U][1U];
    __Vtemp_hf43c43bd__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [6U][2U];
    __Vtemp_hf43c43bd__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
        [6U][3U];
    tracep->fullWData(oldp+1140,(__Vtemp_hf43c43bd__0),128);
    __Vtemp_hdbcd2375__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                [0xaU][0U] << 1U);
    __Vtemp_hdbcd2375__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [0xaU][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [0xaU][1U] << 1U));
    __Vtemp_hdbcd2375__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [0xaU][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [0xaU][2U] << 1U));
    __Vtemp_hdbcd2375__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                 [0xaU][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                   [0xaU][3U] << 1U));
    tracep->fullWData(oldp+1144,(__Vtemp_hdbcd2375__0),128);
    __Vtemp_he45c737d__0[0U] = (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [0U][0U] << 1U);
    __Vtemp_he45c737d__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [0U][0U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [0U][1U] << 1U));
    __Vtemp_he45c737d__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [0U][1U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [0U][2U] << 1U));
    __Vtemp_he45c737d__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [0U][2U] >> 0x1fU) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [0U][3U] << 1U));
    tracep->fullWData(oldp+1148,(__Vtemp_he45c737d__0),128);
    __Vtemp_h7097f915__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [6U][0U] ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                             [0xaU][0U] 
                                             << 1U)) 
                                ^ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [0U][0U] << 1U));
    __Vtemp_h7097f915__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [6U][1U] ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                              [0xaU][0U] 
                                              >> 0x1fU) 
                                             | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [0xaU][1U] 
                                                << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                    [0U][0U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                      [0U][1U] << 1U)));
    __Vtemp_h7097f915__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [6U][2U] ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                              [0xaU][1U] 
                                              >> 0x1fU) 
                                             | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [0xaU][2U] 
                                                << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                    [0U][1U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                      [0U][2U] << 1U)));
    __Vtemp_h7097f915__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                 [6U][3U] ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                              [0xaU][2U] 
                                              >> 0x1fU) 
                                             | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                [0xaU][3U] 
                                                << 1U))) 
                                ^ ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                    [0U][2U] >> 0x1fU) 
                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                      [0U][3U] << 1U)));
    tracep->fullWData(oldp+1152,(__Vtemp_h7097f915__0),128);
    __Vtemp_h27c1727b__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [6U][0U] & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                              [0xaU][0U] 
                                              << 1U)) 
                                 | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                     [0xaU][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                     [0U][0U]) << 1U)) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [6U][0U] & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [0U][0U] 
                                               << 1U)));
    __Vtemp_h27c1727b__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [6U][1U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                               [0xaU][0U] 
                                               >> 0x1fU) 
                                              | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                 [0xaU][1U] 
                                                 << 1U))) 
                                 | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [0xaU][0U] >> 0x1fU) 
                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                        [0xaU][1U] 
                                        << 1U)) & (
                                                   (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                    [0U][0U] 
                                                    >> 0x1fU) 
                                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                      [0U][1U] 
                                                      << 1U)))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [6U][1U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                [0U][0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                  [0U][1U] 
                                                  << 1U))));
    __Vtemp_h27c1727b__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [6U][2U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                               [0xaU][1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                 [0xaU][2U] 
                                                 << 1U))) 
                                 | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [0xaU][1U] >> 0x1fU) 
                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                        [0xaU][2U] 
                                        << 1U)) & (
                                                   (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                    [0U][1U] 
                                                    >> 0x1fU) 
                                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                      [0U][2U] 
                                                      << 1U)))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [6U][2U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                [0U][1U] 
                                                >> 0x1fU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                  [0U][2U] 
                                                  << 1U))));
    __Vtemp_h27c1727b__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                  [6U][3U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                               [0xaU][2U] 
                                               >> 0x1fU) 
                                              | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                                 [0xaU][3U] 
                                                 << 1U))) 
                                 | (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                      [0xaU][2U] >> 0x1fU) 
                                     | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l1c
                                        [0xaU][3U] 
                                        << 1U)) & (
                                                   (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                    [0U][2U] 
                                                    >> 0x1fU) 
                                                   | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                      [0U][3U] 
                                                      << 1U)))) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2s
                                   [6U][3U] & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                [0U][2U] 
                                                >> 0x1fU) 
                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                                  [0U][3U] 
                                                  << 1U))));
    tracep->fullWData(oldp+1156,(__Vtemp_h27c1727b__0),128);
    __Vtemp_hb3ce6205__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [1U][0U];
    __Vtemp_hb3ce6205__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [1U][1U];
    __Vtemp_hb3ce6205__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [1U][2U];
    __Vtemp_hb3ce6205__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [1U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h4c5c1491__0, __Vtemp_hb3ce6205__0, 1U);
    tracep->fullWData(oldp+1160,(__Vtemp_h4c5c1491__0),128);
    __Vtemp_hb3ce6544__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [2U][0U];
    __Vtemp_hb3ce6544__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [2U][1U];
    __Vtemp_hb3ce6544__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [2U][2U];
    __Vtemp_hb3ce6544__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [2U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h062ec0c0__0, __Vtemp_hb3ce6544__0, 1U);
    tracep->fullWData(oldp+1164,(__Vtemp_h062ec0c0__0),128);
    __Vtemp_hb3ce647d__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [3U][0U];
    __Vtemp_hb3ce647d__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [3U][1U];
    __Vtemp_hb3ce647d__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [3U][2U];
    __Vtemp_hb3ce647d__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [3U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h434bb540__0, __Vtemp_hb3ce647d__0, 1U);
    tracep->fullWData(oldp+1168,(__Vtemp_h434bb540__0),128);
    __Vtemp_hc42eda11__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [1U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [2U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [3U][0U]);
    __Vtemp_hc42eda11__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [1U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [2U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [3U][1U]);
    __Vtemp_hc42eda11__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [1U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [2U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [3U][2U]);
    __Vtemp_hc42eda11__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [1U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [2U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [3U][3U]);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h69bc9e05__0, __Vtemp_hc42eda11__0, 1U);
    tracep->fullWData(oldp+1172,(__Vtemp_h69bc9e05__0),128);
    __Vtemp_had8bdbe8__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [2U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [2U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [3U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [3U][0U]));
    __Vtemp_had8bdbe8__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [1U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [2U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [2U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [3U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [1U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [3U][1U]));
    __Vtemp_had8bdbe8__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [1U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [2U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [2U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [3U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [1U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [3U][2U]));
    __Vtemp_had8bdbe8__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [1U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [2U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [2U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [3U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [1U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [3U][3U]));
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h2a7b3d93__0, __Vtemp_had8bdbe8__0, 1U);
    tracep->fullWData(oldp+1176,(__Vtemp_h2a7b3d93__0),128);
    __Vtemp_hb3ce61b9__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [4U][0U];
    __Vtemp_hb3ce61b9__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [4U][1U];
    __Vtemp_hb3ce61b9__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [4U][2U];
    __Vtemp_hb3ce61b9__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [4U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_ha582bfc5__0, __Vtemp_hb3ce61b9__0, 1U);
    tracep->fullWData(oldp+1180,(__Vtemp_ha582bfc5__0),128);
    __Vtemp_hb3ce64fa__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [5U][0U];
    __Vtemp_hb3ce64fa__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [5U][1U];
    __Vtemp_hb3ce64fa__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [5U][2U];
    __Vtemp_hb3ce64fa__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [5U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h97d19be7__0, __Vtemp_hb3ce64fa__0, 1U);
    tracep->fullWData(oldp+1184,(__Vtemp_h97d19be7__0),128);
    __Vtemp_hb3ce6447__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [6U][0U];
    __Vtemp_hb3ce6447__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [6U][1U];
    __Vtemp_hb3ce6447__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [6U][2U];
    __Vtemp_hb3ce6447__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
        [6U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h9782f714__0, __Vtemp_hb3ce6447__0, 1U);
    tracep->fullWData(oldp+1188,(__Vtemp_h9782f714__0),128);
    __Vtemp_h977c8557__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [4U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [5U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [6U][0U]);
    __Vtemp_h977c8557__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [4U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [5U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [6U][1U]);
    __Vtemp_h977c8557__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [4U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [5U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [6U][2U]);
    __Vtemp_h977c8557__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [4U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                 [5U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                [6U][3U]);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h43107266__0, __Vtemp_h977c8557__0, 1U);
    tracep->fullWData(oldp+1192,(__Vtemp_h43107266__0),128);
    __Vtemp_h8816b1a8__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [4U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [5U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [5U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [6U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [4U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [6U][0U]));
    __Vtemp_h8816b1a8__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [4U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [5U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [5U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [6U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [4U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [6U][1U]));
    __Vtemp_h8816b1a8__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [4U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [5U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [5U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [6U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [4U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [6U][2U]));
    __Vtemp_h8816b1a8__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [4U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                  [5U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [5U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                               [6U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [4U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l2c
                                   [6U][3U]));
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hc21668af__0, __Vtemp_h8816b1a8__0, 1U);
    tracep->fullWData(oldp+1196,(__Vtemp_hc21668af__0),128);
    __Vtemp_h7aa39406__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [0U][0U];
    __Vtemp_h7aa39406__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [0U][1U];
    __Vtemp_h7aa39406__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [0U][2U];
    __Vtemp_h7aa39406__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [0U][3U];
    tracep->fullWData(oldp+1200,(__Vtemp_h7aa39406__0),128);
    __Vtemp_h7aa38ec3__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [1U][0U];
    __Vtemp_h7aa38ec3__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [1U][1U];
    __Vtemp_h7aa38ec3__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [1U][2U];
    __Vtemp_h7aa38ec3__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [1U][3U];
    tracep->fullWData(oldp+1204,(__Vtemp_h7aa38ec3__0),128);
    __Vtemp_h7aa38f88__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [2U][0U];
    __Vtemp_h7aa38f88__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [2U][1U];
    __Vtemp_h7aa38f88__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [2U][2U];
    __Vtemp_h7aa38f88__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [2U][3U];
    tracep->fullWData(oldp+1208,(__Vtemp_h7aa38f88__0),128);
    __Vtemp_h8eaa5fe3__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [1U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                [2U][0U]);
    __Vtemp_h8eaa5fe3__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [1U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                [2U][1U]);
    __Vtemp_h8eaa5fe3__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [1U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                [2U][2U]);
    __Vtemp_h8eaa5fe3__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [1U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                [2U][3U]);
    tracep->fullWData(oldp+1212,(__Vtemp_h8eaa5fe3__0),128);
    __Vtemp_hed7aab57__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [1U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [2U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [2U][0U]));
    __Vtemp_hed7aab57__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [1U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [2U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [2U][1U]));
    __Vtemp_hed7aab57__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [1U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [2U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [2U][2U]));
    __Vtemp_hed7aab57__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [1U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [2U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [2U][3U]));
    tracep->fullWData(oldp+1216,(__Vtemp_hed7aab57__0),128);
    __Vtemp_h7aa38e4b__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [3U][0U];
    __Vtemp_h7aa38e4b__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [3U][1U];
    __Vtemp_h7aa38e4b__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [3U][2U];
    __Vtemp_h7aa38e4b__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [3U][3U];
    tracep->fullWData(oldp+1220,(__Vtemp_h7aa38e4b__0),128);
    __Vtemp_h7aa38f0f__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [4U][0U];
    __Vtemp_h7aa38f0f__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [4U][1U];
    __Vtemp_h7aa38f0f__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [4U][2U];
    __Vtemp_h7aa38f0f__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
        [4U][3U];
    tracep->fullWData(oldp+1224,(__Vtemp_h7aa38f0f__0),128);
    __Vtemp_h02d88ba1__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][0U];
    __Vtemp_h02d88ba1__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][1U];
    __Vtemp_h02d88ba1__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][2U];
    __Vtemp_h02d88ba1__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h17db7681__0, __Vtemp_h02d88ba1__0, 1U);
    tracep->fullWData(oldp+1228,(__Vtemp_h17db7681__0),128);
    __Vtemp_h02d88ba1__1[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][0U];
    __Vtemp_h02d88ba1__1[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][1U];
    __Vtemp_h02d88ba1__1[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][2U];
    __Vtemp_h02d88ba1__1[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hae07de05__0, __Vtemp_h02d88ba1__1, 1U);
    __Vtemp_h5868981e__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [3U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [4U][0U]) ^ __Vtemp_hae07de05__0[0U]);
    __Vtemp_h5868981e__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [3U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [4U][1U]) ^ __Vtemp_hae07de05__0[1U]);
    __Vtemp_h5868981e__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [3U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [4U][2U]) ^ __Vtemp_hae07de05__0[2U]);
    __Vtemp_h5868981e__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [3U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                 [4U][3U]) ^ __Vtemp_hae07de05__0[3U]);
    tracep->fullWData(oldp+1232,(__Vtemp_h5868981e__0),128);
    __Vtemp_h02d88ba1__2[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][0U];
    __Vtemp_h02d88ba1__2[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][1U];
    __Vtemp_h02d88ba1__2[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][2U];
    __Vtemp_h02d88ba1__2[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hf351dc3d__0, __Vtemp_h02d88ba1__2, 1U);
    __Vtemp_h02d88ba1__3[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][0U];
    __Vtemp_h02d88ba1__3[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][1U];
    __Vtemp_h02d88ba1__3[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][2U];
    __Vtemp_h02d88ba1__3[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h7de6b44b__0, __Vtemp_h02d88ba1__3, 1U);
    __Vtemp_hc9a0e09f__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [3U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [4U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [4U][0U] 
                                               & __Vtemp_hf351dc3d__0[0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [3U][0U] & __Vtemp_h7de6b44b__0[0U]));
    __Vtemp_hc9a0e09f__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [3U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [4U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [4U][1U] 
                                               & __Vtemp_hf351dc3d__0[1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [3U][1U] & __Vtemp_h7de6b44b__0[1U]));
    __Vtemp_hc9a0e09f__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [3U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [4U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [4U][2U] 
                                               & __Vtemp_hf351dc3d__0[2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [3U][2U] & __Vtemp_h7de6b44b__0[2U]));
    __Vtemp_hc9a0e09f__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [3U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                  [4U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                               [4U][3U] 
                                               & __Vtemp_hf351dc3d__0[3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3s
                                   [3U][3U] & __Vtemp_h7de6b44b__0[3U]));
    tracep->fullWData(oldp+1236,(__Vtemp_hc9a0e09f__0),128);
    __Vtemp_h02d889e4__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [1U][0U];
    __Vtemp_h02d889e4__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [1U][1U];
    __Vtemp_h02d889e4__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [1U][2U];
    __Vtemp_h02d889e4__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [1U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hf4d9a659__0, __Vtemp_h02d889e4__0, 1U);
    tracep->fullWData(oldp+1240,(__Vtemp_hf4d9a659__0),128);
    __Vtemp_h02d88d27__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [2U][0U];
    __Vtemp_h02d88d27__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [2U][1U];
    __Vtemp_h02d88d27__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [2U][2U];
    __Vtemp_h02d88d27__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [2U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h3baf7741__0, __Vtemp_h02d88d27__0, 1U);
    tracep->fullWData(oldp+1244,(__Vtemp_h3baf7741__0),128);
    __Vtemp_h02d88d5c__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [3U][0U];
    __Vtemp_h02d88d5c__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [3U][1U];
    __Vtemp_h02d88d5c__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [3U][2U];
    __Vtemp_h02d88d5c__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
        [3U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hbda4f3d7__0, __Vtemp_h02d88d5c__0, 1U);
    tracep->fullWData(oldp+1248,(__Vtemp_hbda4f3d7__0),128);
    __Vtemp_he90a56f4__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [1U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [2U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [3U][0U]);
    __Vtemp_he90a56f4__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [1U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [2U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [3U][1U]);
    __Vtemp_he90a56f4__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [1U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [2U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [3U][2U]);
    __Vtemp_he90a56f4__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [1U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                 [2U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                [3U][3U]);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h105cd53d__0, __Vtemp_he90a56f4__0, 1U);
    tracep->fullWData(oldp+1252,(__Vtemp_h105cd53d__0),128);
    __Vtemp_h733eaa06__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [2U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [2U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [3U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [1U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [3U][0U]));
    __Vtemp_h733eaa06__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [1U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [2U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [2U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [3U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [1U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [3U][1U]));
    __Vtemp_h733eaa06__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [1U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [2U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [2U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [3U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [1U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [3U][2U]));
    __Vtemp_h733eaa06__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [1U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                  [2U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [2U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                               [3U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [1U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l3c
                                   [3U][3U]));
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h1c934518__0, __Vtemp_h733eaa06__0, 1U);
    tracep->fullWData(oldp+1256,(__Vtemp_h1c934518__0),128);
    __Vtemp_h8a1cf969__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [0U][0U];
    __Vtemp_h8a1cf969__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [0U][1U];
    __Vtemp_h8a1cf969__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [0U][2U];
    __Vtemp_h8a1cf969__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [0U][3U];
    tracep->fullWData(oldp+1260,(__Vtemp_h8a1cf969__0),128);
    __Vtemp_h8a1cf635__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [1U][0U];
    __Vtemp_h8a1cf635__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [1U][1U];
    __Vtemp_h8a1cf635__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [1U][2U];
    __Vtemp_h8a1cf635__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [1U][3U];
    tracep->fullWData(oldp+1264,(__Vtemp_h8a1cf635__0),128);
    __Vtemp_h8a1cf8ec__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [2U][0U];
    __Vtemp_h8a1cf8ec__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [2U][1U];
    __Vtemp_h8a1cf8ec__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [2U][2U];
    __Vtemp_h8a1cf8ec__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
        [2U][3U];
    tracep->fullWData(oldp+1268,(__Vtemp_h8a1cf8ec__0),128);
    __Vtemp_h8bd31a77__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                 [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                 [1U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                [2U][0U]);
    __Vtemp_h8bd31a77__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                 [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                 [1U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                [2U][1U]);
    __Vtemp_h8bd31a77__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                 [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                 [1U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                [2U][2U]);
    __Vtemp_h8bd31a77__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                 [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                 [1U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                [2U][3U]);
    tracep->fullWData(oldp+1272,(__Vtemp_h8bd31a77__0),128);
    __Vtemp_h04764766__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                  [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                  [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                               [1U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                               [2U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                   [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                   [2U][0U]));
    __Vtemp_h04764766__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                  [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                  [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                               [1U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                               [2U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                   [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                   [2U][1U]));
    __Vtemp_h04764766__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                  [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                  [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                               [1U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                               [2U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                   [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                   [2U][2U]));
    __Vtemp_h04764766__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                  [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                  [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                               [1U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                               [2U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                   [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4s
                                   [2U][3U]));
    tracep->fullWData(oldp+1276,(__Vtemp_h04764766__0),128);
    __Vtemp_h389af2c0__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [0U][0U];
    __Vtemp_h389af2c0__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [0U][1U];
    __Vtemp_h389af2c0__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [0U][2U];
    __Vtemp_h389af2c0__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h27ad1993__0, __Vtemp_h389af2c0__0, 1U);
    tracep->fullWData(oldp+1280,(__Vtemp_h27ad1993__0),128);
    __Vtemp_h389ae07c__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [1U][0U];
    __Vtemp_h389ae07c__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [1U][1U];
    __Vtemp_h389ae07c__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [1U][2U];
    __Vtemp_h389ae07c__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [1U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h2fe70ba8__0, __Vtemp_h389ae07c__0, 1U);
    tracep->fullWData(oldp+1284,(__Vtemp_h2fe70ba8__0),128);
    __Vtemp_h389af339__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [2U][0U];
    __Vtemp_h389af339__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [2U][1U];
    __Vtemp_h389af339__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [2U][2U];
    __Vtemp_h389af339__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
        [2U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h2505e54d__0, __Vtemp_h389af339__0, 1U);
    tracep->fullWData(oldp+1288,(__Vtemp_h2505e54d__0),128);
    __Vtemp_hf4b4c777__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [1U][0U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                [2U][0U]);
    __Vtemp_hf4b4c777__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [1U][1U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                [2U][1U]);
    __Vtemp_hf4b4c777__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [1U][2U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                [2U][2U]);
    __Vtemp_hf4b4c777__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                 [1U][3U]) ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                [2U][3U]);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hb4268308__0, __Vtemp_hf4b4c777__0, 1U);
    tracep->fullWData(oldp+1292,(__Vtemp_hb4268308__0),128);
    __Vtemp_hc256cb40__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [1U][0U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [2U][0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [2U][0U]));
    __Vtemp_hc256cb40__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [1U][1U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [2U][1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [2U][1U]));
    __Vtemp_hc256cb40__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [1U][2U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [2U][2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [2U][2U]));
    __Vtemp_hc256cb40__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                  [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [1U][3U] 
                                               & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                               [2U][3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l4c
                                   [2U][3U]));
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hfb626bf9__0, __Vtemp_hc256cb40__0, 1U);
    tracep->fullWData(oldp+1296,(__Vtemp_hfb626bf9__0),128);
    __Vtemp_hafce953c__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [0U][0U];
    __Vtemp_hafce953c__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [0U][1U];
    __Vtemp_hafce953c__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [0U][2U];
    __Vtemp_hafce953c__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [0U][3U];
    tracep->fullWData(oldp+1300,(__Vtemp_hafce953c__0),128);
    __Vtemp_hafce9280__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [1U][0U];
    __Vtemp_hafce9280__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [1U][1U];
    __Vtemp_hafce9280__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [1U][2U];
    __Vtemp_hafce9280__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
        [1U][3U];
    tracep->fullWData(oldp+1304,(__Vtemp_hafce9280__0),128);
    __Vtemp_h1f409a06__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][0U];
    __Vtemp_h1f409a06__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][1U];
    __Vtemp_h1f409a06__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][2U];
    __Vtemp_h1f409a06__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_he96a18d8__0, __Vtemp_h1f409a06__0, 1U);
    tracep->fullWData(oldp+1308,(__Vtemp_he96a18d8__0),128);
    __Vtemp_h1f409a06__1[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][0U];
    __Vtemp_h1f409a06__1[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][1U];
    __Vtemp_h1f409a06__1[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][2U];
    __Vtemp_h1f409a06__1[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hcf17f604__0, __Vtemp_h1f409a06__1, 1U);
    __Vtemp_h338341c3__0[0U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                 [0U][0U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                 [1U][0U]) ^ __Vtemp_hcf17f604__0[0U]);
    __Vtemp_h338341c3__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                 [0U][1U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                 [1U][1U]) ^ __Vtemp_hcf17f604__0[1U]);
    __Vtemp_h338341c3__0[2U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                 [0U][2U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                 [1U][2U]) ^ __Vtemp_hcf17f604__0[2U]);
    __Vtemp_h338341c3__0[3U] = ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                 [0U][3U] ^ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                 [1U][3U]) ^ __Vtemp_hcf17f604__0[3U]);
    tracep->fullWData(oldp+1312,(__Vtemp_h338341c3__0),128);
    __Vtemp_h1f409a06__2[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][0U];
    __Vtemp_h1f409a06__2[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][1U];
    __Vtemp_h1f409a06__2[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][2U];
    __Vtemp_h1f409a06__2[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_he78ee9ec__0, __Vtemp_h1f409a06__2, 1U);
    __Vtemp_h1f409a06__3[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][0U];
    __Vtemp_h1f409a06__3[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][1U];
    __Vtemp_h1f409a06__3[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][2U];
    __Vtemp_h1f409a06__3[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h34003953__0, __Vtemp_h1f409a06__3, 1U);
    __Vtemp_hc0bfc1cd__0[0U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                  [0U][0U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                  [1U][0U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                               [1U][0U] 
                                               & __Vtemp_he78ee9ec__0[0U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                   [0U][0U] & __Vtemp_h34003953__0[0U]));
    __Vtemp_hc0bfc1cd__0[1U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                  [0U][1U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                  [1U][1U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                               [1U][1U] 
                                               & __Vtemp_he78ee9ec__0[1U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                   [0U][1U] & __Vtemp_h34003953__0[1U]));
    __Vtemp_hc0bfc1cd__0[2U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                  [0U][2U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                  [1U][2U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                               [1U][2U] 
                                               & __Vtemp_he78ee9ec__0[2U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                   [0U][2U] & __Vtemp_h34003953__0[2U]));
    __Vtemp_hc0bfc1cd__0[3U] = (((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                  [0U][3U] & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                  [1U][3U]) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                               [1U][3U] 
                                               & __Vtemp_he78ee9ec__0[3U])) 
                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l5s
                                   [0U][3U] & __Vtemp_h34003953__0[3U]));
    tracep->fullWData(oldp+1316,(__Vtemp_hc0bfc1cd__0),128);
    __Vtemp_hb135bb7f__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [0U][0U];
    __Vtemp_hb135bb7f__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [0U][1U];
    __Vtemp_hb135bb7f__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [0U][2U];
    __Vtemp_hb135bb7f__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [0U][3U];
    tracep->fullWData(oldp+1320,(__Vtemp_hb135bb7f__0),128);
    __Vtemp_hb135b9bb__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [1U][0U];
    __Vtemp_hb135b9bb__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [1U][1U];
    __Vtemp_hb135b9bb__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [1U][2U];
    __Vtemp_hb135b9bb__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6s
        [1U][3U];
    tracep->fullWData(oldp+1324,(__Vtemp_hb135b9bb__0),128);
    __Vtemp_h5a241080__0[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][0U];
    __Vtemp_h5a241080__0[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][1U];
    __Vtemp_h5a241080__0[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][2U];
    __Vtemp_h5a241080__0[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [0U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h2e2480e7__0, __Vtemp_h5a241080__0, 1U);
    tracep->fullWData(oldp+1328,(__Vtemp_h2e2480e7__0),128);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h1fdd8292__2, vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l7c, 1U);
    tracep->fullWData(oldp+1332,(__Vtemp_h1fdd8292__2),128);
    __Vtemp_h5a241144__3[0U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][0U];
    __Vtemp_h5a241144__3[1U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][1U];
    __Vtemp_h5a241144__3[2U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][2U];
    __Vtemp_h5a241144__3[3U] = vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__l6c
        [1U][3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h0866dee8__0, __Vtemp_h5a241144__3, 1U);
    tracep->fullWData(oldp+1336,(__Vtemp_h0866dee8__0),128);
    tracep->fullBit(oldp+1340,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                      >> 6U))));
    tracep->fullQData(oldp+1341,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_diff_addr),64);
    tracep->fullQData(oldp+1343,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_diff_data),64);
    tracep->fullCData(oldp+1345,((7U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                        >> 8U))),3);
    tracep->fullCData(oldp+1346,((7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                        >> 8U))),3);
    tracep->fullQData(oldp+1347,(((0x20U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])
                                   ? vlSelf->ysyx_22040127_top__DOT__mem_final_rdata
                                   : (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U]))))),64);
    tracep->fullBit(oldp+1349,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lb));
    tracep->fullBit(oldp+1350,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lh));
    tracep->fullBit(oldp+1351,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lw));
    tracep->fullBit(oldp+1352,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ld));
    tracep->fullBit(oldp+1353,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lbu));
    tracep->fullBit(oldp+1354,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lhu));
    tracep->fullBit(oldp+1355,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lwu));
    tracep->fullBit(oldp+1356,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sb));
    tracep->fullBit(oldp+1357,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sh));
    tracep->fullBit(oldp+1358,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sw));
    tracep->fullBit(oldp+1359,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sd));
    tracep->fullBit(oldp+1360,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                      >> 7U))));
    tracep->fullCData(oldp+1361,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                           >> 0x15U))),5);
    tracep->fullQData(oldp+1362,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U])) 
                                   << 0x26U) | (((QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[6U])) 
                                                 << 6U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U])) 
                                                   >> 0x1aU)))),64);
    tracep->fullSData(oldp+1364,((0xfffU & ((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                             << 6U) 
                                            | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U] 
                                               >> 0x1aU)))),12);
    tracep->fullCData(oldp+1365,((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])),5);
    tracep->fullIData(oldp+1366,(((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                   << 0x15U) | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                >> 0xbU))),32);
    tracep->fullBit(oldp+1367,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xbU))));
    tracep->fullQData(oldp+1368,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U])))),64);
    tracep->fullBit(oldp+1370,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x13U))));
    tracep->fullBit(oldp+1371,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x12U))));
    tracep->fullBit(oldp+1372,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x11U))));
    tracep->fullBit(oldp+1373,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x10U))));
    tracep->fullBit(oldp+1374,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xfU))));
    tracep->fullBit(oldp+1375,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xeU))));
    tracep->fullBit(oldp+1376,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xdU))));
    tracep->fullBit(oldp+1377,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0xcU))));
    tracep->fullBit(oldp+1378,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                      >> 0x14U))));
    tracep->fullBit(oldp+1379,((0U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1380,((1U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1381,((2U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1382,((3U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1383,((4U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1384,((5U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1385,((6U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1386,((0U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1387,((1U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1388,((2U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullBit(oldp+1389,((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U)))));
    tracep->fullWData(oldp+1390,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg),262);
    tracep->fullQData(oldp+1399,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__doubly_aligned_data),64);
    tracep->fullQData(oldp+1401,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata),64);
    tracep->fullCData(oldp+1403,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask),8);
    tracep->fullCData(oldp+1404,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask),8);
    tracep->fullCData(oldp+1405,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_wmask),8);
    tracep->fullQData(oldp+1406,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U])))),64);
    tracep->fullBit(oldp+1408,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                      >> 6U))));
    tracep->fullBit(oldp+1409,(vlSelf->ysyx_22040127_top__DOT__mem__DOT____Vcellinp__dcache__input_valid));
    tracep->fullCData(oldp+1410,((3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                        >> 8U))),2);
    tracep->fullCData(oldp+1411,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__input_size_reg),2);
    tracep->fullCData(oldp+1412,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__input_offset_reg),4);
    tracep->fullBit(oldp+1413,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0hit_reg));
    tracep->fullBit(oldp+1414,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1hit_reg));
    tracep->fullWData(oldp+1415,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_req_data),128);
    tracep->fullBit(oldp+1419,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_res_valid));
    tracep->fullBit(oldp+1420,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_req_wen));
    tracep->fullCData(oldp+1421,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_req_strb),8);
    tracep->fullBit(oldp+1422,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_req_valid));
    tracep->fullQData(oldp+1423,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_req_addr),64);
    tracep->fullWData(oldp+1425,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__axi_mrdata),128);
    tracep->fullIData(oldp+1429,((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                  >> 0xbU)),21);
    tracep->fullCData(oldp+1430,((0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                           >> 4U))),7);
    tracep->fullCData(oldp+1431,((0xfU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])),4);
    tracep->fullCData(oldp+1432,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_index_reg),7);
    tracep->fullCData(oldp+1433,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_offset_reg),4);
    tracep->fullWData(oldp+1434,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_strb),128);
    tracep->fullBit(oldp+1438,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_wen_way0));
    tracep->fullBit(oldp+1439,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_wen_way1));
    tracep->fullWData(oldp+1440,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_wdata),128);
    tracep->fullBit(oldp+1444,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_miss));
    tracep->fullBit(oldp+1445,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_wen_way0_reg));
    tracep->fullBit(oldp+1446,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_wen_way1_reg));
    tracep->fullQData(oldp+1447,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__ex_cache_strb),64);
    tracep->fullWData(oldp+1449,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_rdata_way0),128);
    tracep->fullWData(oldp+1453,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_rdata_way1),128);
    tracep->fullBit(oldp+1457,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0hit));
    tracep->fullBit(oldp+1458,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1hit));
    tracep->fullBit(oldp+1459,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0dirty));
    tracep->fullBit(oldp+1460,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1dirty));
    tracep->fullBit(oldp+1461,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way0valid));
    tracep->fullBit(oldp+1462,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_way1valid));
    tracep->fullQData(oldp+1463,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__input_offset_reg))
                                   ? (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_rdata_way0[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_rdata_way0[2U])))
                                   : (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_rdata_way0[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_rdata_way0[0U]))))),64);
    tracep->fullQData(oldp+1465,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__input_offset_reg))
                                   ? (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_rdata_way1[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_rdata_way1[2U])))
                                   : (((QData)((IData)(
                                                       vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_rdata_way1[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_rdata_way1[0U]))))),64);
    tracep->fullQData(oldp+1467,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__ex_cache_wdata),64);
    tracep->fullBit(oldp+1469,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_raw_way0));
    tracep->fullBit(oldp+1470,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_raw_way1));
    tracep->fullBit(oldp+1471,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_raw));
    tracep->fullBit(oldp+1472,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cnt));
    tracep->fullBit(oldp+1473,((1U & ((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                       >> 5U) | (IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__cache_miss)))));
    tracep->fullIData(oldp+1474,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__unnamedblk1__DOT__i),32);
    tracep->fullCData(oldp+1475,((7U & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])),3);
    tracep->fullSData(oldp+1476,((vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                  >> 0x14U)),12);
    tracep->fullQData(oldp+1477,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0U])))),64);
    tracep->fullCData(oldp+1479,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpp),2);
    tracep->fullBit(oldp+1480,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpie));
    tracep->fullBit(oldp+1481,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mie));
    tracep->fullBit(oldp+1482,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__wb_flush));
    tracep->fullCData(oldp+1483,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                           >> 0xfU))),5);
    tracep->fullBit(oldp+1484,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 0xcU))));
    tracep->fullBit(oldp+1485,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 0xbU))));
    tracep->fullBit(oldp+1486,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 0xaU))));
    tracep->fullBit(oldp+1487,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 9U))));
    tracep->fullBit(oldp+1488,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 8U))));
    tracep->fullBit(oldp+1489,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 7U))));
    tracep->fullBit(oldp+1490,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 6U))));
    tracep->fullQData(oldp+1491,((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U])) 
                                   << 0x2cU) | (((QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[4U])) 
                                                 << 0xcU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U])) 
                                                   >> 0x14U)))),64);
    tracep->fullQData(oldp+1493,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[0]),64);
    tracep->fullQData(oldp+1495,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[1]),64);
    tracep->fullQData(oldp+1497,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[2]),64);
    tracep->fullQData(oldp+1499,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[3]),64);
    tracep->fullQData(oldp+1501,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[4]),64);
    tracep->fullQData(oldp+1503,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[5]),64);
    tracep->fullQData(oldp+1505,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[6]),64);
    tracep->fullQData(oldp+1507,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[7]),64);
    tracep->fullQData(oldp+1509,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[8]),64);
    tracep->fullQData(oldp+1511,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[9]),64);
    tracep->fullQData(oldp+1513,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[10]),64);
    tracep->fullQData(oldp+1515,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[11]),64);
    tracep->fullQData(oldp+1517,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[12]),64);
    tracep->fullQData(oldp+1519,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[13]),64);
    tracep->fullQData(oldp+1521,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[14]),64);
    tracep->fullQData(oldp+1523,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[15]),64);
    tracep->fullQData(oldp+1525,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[16]),64);
    tracep->fullQData(oldp+1527,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[17]),64);
    tracep->fullQData(oldp+1529,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[18]),64);
    tracep->fullQData(oldp+1531,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[19]),64);
    tracep->fullQData(oldp+1533,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[20]),64);
    tracep->fullQData(oldp+1535,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[21]),64);
    tracep->fullQData(oldp+1537,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[22]),64);
    tracep->fullQData(oldp+1539,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[23]),64);
    tracep->fullQData(oldp+1541,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[24]),64);
    tracep->fullQData(oldp+1543,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[25]),64);
    tracep->fullQData(oldp+1545,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[26]),64);
    tracep->fullQData(oldp+1547,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[27]),64);
    tracep->fullQData(oldp+1549,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[28]),64);
    tracep->fullQData(oldp+1551,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[29]),64);
    tracep->fullQData(oldp+1553,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[30]),64);
    tracep->fullQData(oldp+1555,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[31]),64);
    tracep->fullWData(oldp+1557,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg),321);
    tracep->fullBit(oldp+1568,((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]))));
    tracep->fullBit(oldp+1569,(vlSelf->clk));
    tracep->fullBit(oldp+1570,(vlSelf->rst));
    tracep->fullIData(oldp+1571,(vlSelf->if_pc),32);
    tracep->fullBit(oldp+1572,(vlSelf->wb_valid));
    tracep->fullIData(oldp+1573,(vlSelf->wb_pc),32);
    tracep->fullQData(oldp+1574,(vlSelf->mepc),64);
    tracep->fullQData(oldp+1576,(vlSelf->mtvec),64);
    tracep->fullQData(oldp+1578,(vlSelf->mstatus),64);
    tracep->fullQData(oldp+1580,(vlSelf->mcause),64);
    tracep->fullQData(oldp+1582,(vlSelf->mie),64);
    tracep->fullQData(oldp+1584,(vlSelf->mip),64);
    tracep->fullQData(oldp+1586,(vlSelf->mscratch),64);
    tracep->fullQData(oldp+1588,(vlSelf->mtval),64);
    tracep->fullBit(oldp+1590,(vlSelf->wb_memwrite));
    tracep->fullQData(oldp+1591,(vlSelf->wb_diff_addr),64);
    tracep->fullQData(oldp+1593,(vlSelf->wb_diff_data),64);
    tracep->fullQData(oldp+1595,((((QData)((IData)(
                                                   ((1U 
                                                     & (((IData)(vlSelf->ysyx_22040127_top__DOT__id_branch_taken) 
                                                         | (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                                            >> 0xdU)) 
                                                        | (0x7bU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->ysyx_22040127_top__DOT__if_instruction))))
                                                     ? 0U
                                                     : vlSelf->ysyx_22040127_top__DOT__if_instruction))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->if_pc)))),64);
    tracep->fullQData(oldp+1597,(vlSelf->ysyx_22040127_top__DOT__reg_wdata),64);
    tracep->fullQData(oldp+1599,(vlSelf->ysyx_22040127_top__DOT__alu_output),64);
    tracep->fullBit(oldp+1601,(vlSelf->ysyx_22040127_top__DOT__id_jalr));
    tracep->fullBit(oldp+1602,(1U));
    tracep->fullCData(oldp+1603,(0U),3);
    tracep->fullCData(oldp+1604,(1U),3);
    tracep->fullCData(oldp+1605,(2U),3);
    tracep->fullCData(oldp+1606,(3U),3);
    tracep->fullCData(oldp+1607,(4U),3);
    tracep->fullCData(oldp+1608,(5U),3);
    tracep->fullCData(oldp+1609,(6U),3);
    tracep->fullIData(oldp+1610,(0xcU),32);
    tracep->fullIData(oldp+1611,(7U),32);
    tracep->fullIData(oldp+1612,(3U),32);
    __Vtemp_hdbbc8edc__0[0U] = 0x39e46b1dU;
    __Vtemp_hdbbc8edc__0[1U] = 0x8deddc67U;
    __Vtemp_hdbbc8edc__0[2U] = 0x60980633U;
    __Vtemp_hdbbc8edc__0[3U] = 0x2e5b93U;
    tracep->fullWData(oldp+1613,(__Vtemp_hdbbc8edc__0),120);
    tracep->fullIData(oldp+1617,(1U),32);
    tracep->fullIData(oldp+1618,(0xaU),32);
    tracep->fullIData(oldp+1619,(0xcU),32);
    tracep->fullCData(oldp+1620,(0U),6);
    tracep->fullCData(oldp+1621,(0x10U),6);
    tracep->fullCData(oldp+1622,(0x20U),6);
    tracep->fullCData(oldp+1623,(1U),6);
    tracep->fullCData(oldp+1624,(0xcU),6);
    tracep->fullCData(oldp+1625,(8U),6);
    tracep->fullCData(oldp+1626,(2U),6);
    tracep->fullCData(oldp+1627,(4U),6);
    tracep->fullCData(oldp+1628,(6U),6);
    tracep->fullCData(oldp+1629,(0xeU),6);
    tracep->fullCData(oldp+1630,(0x18U),6);
    tracep->fullCData(oldp+1631,(0x1aU),6);
    tracep->fullCData(oldp+1632,(0x1eU),6);
    tracep->fullCData(oldp+1633,(0x1cU),6);
    tracep->fullCData(oldp+1634,(0x21U),6);
    tracep->fullCData(oldp+1635,(0x11U),6);
    tracep->fullCData(oldp+1636,(3U),6);
    tracep->fullCData(oldp+1637,(0xaU),6);
    tracep->fullCData(oldp+1638,(0x2aU),6);
    tracep->fullCData(oldp+1639,(0x19U),6);
    tracep->fullCData(oldp+1640,(0xbU),6);
    tracep->fullCData(oldp+1641,(0x2bU),6);
    tracep->fullCData(oldp+1642,(0x1bU),6);
    tracep->fullCData(oldp+1643,(0x1dU),6);
    tracep->fullCData(oldp+1644,(0x1fU),6);
    tracep->fullCData(oldp+1645,(0x16U),6);
    tracep->fullCData(oldp+1646,(0x12U),6);
    tracep->fullCData(oldp+1647,(0x14U),6);
    tracep->fullCData(oldp+1648,(0x10U),5);
    tracep->fullCData(oldp+1649,(0x17U),5);
    tracep->fullCData(oldp+1650,(0x16U),5);
    tracep->fullCData(oldp+1651,(0x14U),5);
    tracep->fullCData(oldp+1652,(0x13U),5);
    tracep->fullCData(oldp+1653,(0x15U),5);
    tracep->fullCData(oldp+1654,(0x11U),5);
    tracep->fullCData(oldp+1655,(0x18U),5);
    tracep->fullCData(oldp+1656,(0x19U),5);
    tracep->fullCData(oldp+1657,(0x1dU),5);
    tracep->fullCData(oldp+1658,(0x12U),5);
    tracep->fullCData(oldp+1659,(0U),2);
    tracep->fullCData(oldp+1660,(1U),2);
    tracep->fullCData(oldp+1661,(3U),2);
    tracep->fullCData(oldp+1662,(2U),2);
    tracep->fullQData(oldp+1663,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_wdata),64);
    tracep->fullCData(oldp+1665,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_size),2);
    tracep->fullIData(oldp+1666,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__mem_addr),32);
    tracep->fullBit(oldp+1667,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__mem_wen));
    tracep->fullCData(oldp+1668,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__dcache__DOT__mem_strb),8);
    tracep->fullCData(oldp+1669,(7U),3);
    tracep->fullIData(oldp+1670,(0x80U),32);
    tracep->fullSData(oldp+1671,(0x305U),12);
    tracep->fullSData(oldp+1672,(0x342U),12);
    tracep->fullSData(oldp+1673,(0x300U),12);
    tracep->fullSData(oldp+1674,(0x341U),12);
    tracep->fullSData(oldp+1675,(0x304U),12);
    tracep->fullSData(oldp+1676,(0x344U),12);
    tracep->fullSData(oldp+1677,(0x340U),12);
    tracep->fullSData(oldp+1678,(0xf14U),12);
}
