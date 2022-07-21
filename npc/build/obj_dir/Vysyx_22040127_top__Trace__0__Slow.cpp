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
    tracep->declBit(c+629,"clk", false,-1);
    tracep->declBit(c+630,"rst", false,-1);
    tracep->declBus(c+631,"if_pc", false,-1, 31,0);
    tracep->declBit(c+632,"wb_valid", false,-1);
    tracep->declBus(c+633,"wb_pc", false,-1, 31,0);
    tracep->declQuad(c+634,"mepc", false,-1, 63,0);
    tracep->declQuad(c+636,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+638,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+640,"mcause", false,-1, 63,0);
    tracep->declQuad(c+642,"mie", false,-1, 63,0);
    tracep->declQuad(c+644,"mip", false,-1, 63,0);
    tracep->declQuad(c+646,"mscratch", false,-1, 63,0);
    tracep->declQuad(c+648,"mtval", false,-1, 63,0);
    tracep->declBit(c+650,"wb_memwrite", false,-1);
    tracep->declQuad(c+651,"wb_diff_addr", false,-1, 63,0);
    tracep->declQuad(c+653,"wb_diff_data", false,-1, 63,0);
    tracep->declBit(c+655,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+656,"axi_aw_valid_o", false,-1);
    tracep->declQuad(c+657,"axi_aw_addr_o", false,-1, 63,0);
    tracep->declBus(c+659,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+660,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+661,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+662,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+663,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+664,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+665,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+666,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+667,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+668,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+669,"axi_w_ready_i", false,-1);
    tracep->declBit(c+670,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+671,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+673,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+674,"axi_w_last_o", false,-1);
    tracep->declBus(c+675,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+676,"axi_b_ready_o", false,-1);
    tracep->declBit(c+677,"axi_b_valid_i", false,-1);
    tracep->declBus(c+678,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+679,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+680,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+681,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+682,"axi_ar_valid_o", false,-1);
    tracep->declQuad(c+683,"axi_ar_addr_o", false,-1, 63,0);
    tracep->declBus(c+685,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+686,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+687,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+688,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+689,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+690,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+691,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+692,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+693,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+694,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+695,"axi_r_ready_o", false,-1);
    tracep->declBit(c+696,"axi_r_valid_i", false,-1);
    tracep->declBus(c+697,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+698,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+700,"axi_r_last_i", false,-1);
    tracep->declBus(c+701,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+702,"axi_r_user_i", false,-1, 0,0);
    tracep->pushNamePrefix("ysyx_22040127_top ");
    tracep->declBus(c+707,"RW_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+707,"RW_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+707,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+707,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+708,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+709,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+710,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+629,"clk", false,-1);
    tracep->declBit(c+630,"rst", false,-1);
    tracep->declBus(c+631,"if_pc", false,-1, 31,0);
    tracep->declBit(c+632,"wb_valid", false,-1);
    tracep->declBus(c+633,"wb_pc", false,-1, 31,0);
    tracep->declQuad(c+634,"mepc", false,-1, 63,0);
    tracep->declQuad(c+636,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+638,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+640,"mcause", false,-1, 63,0);
    tracep->declQuad(c+642,"mie", false,-1, 63,0);
    tracep->declQuad(c+644,"mip", false,-1, 63,0);
    tracep->declQuad(c+646,"mscratch", false,-1, 63,0);
    tracep->declQuad(c+648,"mtval", false,-1, 63,0);
    tracep->declBit(c+650,"wb_memwrite", false,-1);
    tracep->declQuad(c+651,"wb_diff_addr", false,-1, 63,0);
    tracep->declQuad(c+653,"wb_diff_data", false,-1, 63,0);
    tracep->declBit(c+655,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+656,"axi_aw_valid_o", false,-1);
    tracep->declQuad(c+657,"axi_aw_addr_o", false,-1, 63,0);
    tracep->declBus(c+659,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+660,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+661,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+662,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+663,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+664,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+665,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+666,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+667,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+668,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+669,"axi_w_ready_i", false,-1);
    tracep->declBit(c+670,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+671,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+673,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+674,"axi_w_last_o", false,-1);
    tracep->declBus(c+675,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+676,"axi_b_ready_o", false,-1);
    tracep->declBit(c+677,"axi_b_valid_i", false,-1);
    tracep->declBus(c+678,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+679,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+680,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+681,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+682,"axi_ar_valid_o", false,-1);
    tracep->declQuad(c+683,"axi_ar_addr_o", false,-1, 63,0);
    tracep->declBus(c+685,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+686,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+687,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+688,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+689,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+690,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+691,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+692,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+693,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+694,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+695,"axi_r_ready_o", false,-1);
    tracep->declBit(c+696,"axi_r_valid_i", false,-1);
    tracep->declBus(c+697,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+698,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+700,"axi_r_last_i", false,-1);
    tracep->declBus(c+701,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+702,"axi_r_user_i", false,-1, 0,0);
    tracep->declQuad(c+37,"mhartid", false,-1, 63,0);
    tracep->declQuad(c+711,"if_pcdata", false,-1, 63,0);
    tracep->declBus(c+39,"if_instruction", false,-1, 31,0);
    tracep->declBit(c+40,"if_ebreak", false,-1);
    tracep->declBit(c+41,"if_uart", false,-1);
    tracep->declBit(c+42,"if_flush", false,-1);
    tracep->declBit(c+43,"if_valid", false,-1);
    tracep->declBit(c+713,"if_ready_go", false,-1);
    tracep->declBit(c+44,"if_allowin", false,-1);
    tracep->declBit(c+43,"if_to_id_valid", false,-1);
    tracep->declQuad(c+714,"reg_wdata", false,-1, 63,0);
    tracep->declBus(c+45,"id_branch_result", false,-1, 31,0);
    tracep->declBit(c+46,"id_branch_taken", false,-1);
    tracep->declBus(c+47,"id_rs1", false,-1, 4,0);
    tracep->declBus(c+48,"id_rs2", false,-1, 4,0);
    tracep->declBit(c+716,"id_jalr", false,-1);
    tracep->declBit(c+49,"id_flush", false,-1);
    tracep->declBit(c+50,"id_allowin", false,-1);
    tracep->declQuad(c+51,"id_regdata1", false,-1, 63,0);
    tracep->declQuad(c+53,"id_regdata2", false,-1, 63,0);
    tracep->declBit(c+55,"id_to_ex_valid", false,-1);
    tracep->declBus(c+56,"ex_pc", false,-1, 31,0);
    tracep->declBus(c+57,"ex_memop", false,-1, 2,0);
    tracep->declBus(c+58,"ex_wmask", false,-1, 7,0);
    tracep->declBit(c+59,"ex_flush", false,-1);
    tracep->declBit(c+60,"ex_allowin", false,-1);
    tracep->declBit(c+61,"ex_ready_go", false,-1);
    tracep->declBit(c+62,"ex_to_mem_valid", false,-1);
    tracep->declBit(c+63,"dcache_pipelinehit", false,-1);
    tracep->declBit(c+713,"mem_allowin", false,-1);
    tracep->declBit(c+64,"mem_to_wb_valid", false,-1);
    tracep->declBit(c+65,"mem_flush", false,-1);
    tracep->declQuad(c+66,"mem_alu_output", false,-1, 63,0);
    tracep->declBit(c+68,"mem_memread", false,-1);
    tracep->declQuad(c+69,"mem_final_rdata", false,-1, 63,0);
    tracep->declQuad(c+71,"mem_doubly_aligned_data", false,-1, 63,0);
    tracep->declQuad(c+73,"mem_diff_addr", false,-1, 63,0);
    tracep->declQuad(c+75,"mem_diff_data", false,-1, 63,0);
    tracep->declArray(c+77,"if_to_id_bus", false,-1, 64,0);
    tracep->declArray(c+80,"id_to_ex_bus", false,-1, 275,0);
    tracep->declArray(c+89,"ex_to_mem_bus", false,-1, 262,0);
    tracep->declArray(c+98,"mem_to_wb_bus", false,-1, 321,0);
    tracep->declQuad(c+109,"d_req_addr", false,-1, 63,0);
    tracep->declBus(c+111,"d_req_strb", false,-1, 7,0);
    tracep->declArray(c+112,"d_req_data", false,-1, 127,0);
    tracep->declBit(c+116,"d_req_wen", false,-1);
    tracep->declBit(c+117,"d_req_valid", false,-1);
    tracep->declBit(c+118,"d_res_valid", false,-1);
    tracep->declArray(c+119,"d_mrdata", false,-1, 127,0);
    tracep->declQuad(c+123,"i_req_addr", false,-1, 63,0);
    tracep->declBit(c+125,"i_req_valid", false,-1);
    tracep->declBit(c+126,"i_res_valid", false,-1);
    tracep->declArray(c+127,"i_mrdata", false,-1, 127,0);
    tracep->declBit(c+713,"wb_allowin", false,-1);
    tracep->declQuad(c+131,"wb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+133,"wb_csrwdata", false,-1, 63,0);
    tracep->declQuad(c+135,"wb_csrrdata", false,-1, 63,0);
    tracep->declBit(c+42,"wb_mret", false,-1);
    tracep->declBit(c+137,"wb_csr_we", false,-1);
    tracep->declBus(c+138,"wb_rd", false,-1, 4,0);
    tracep->declBit(c+139,"wb_reg_wen", false,-1);
    tracep->declBit(c+140,"wb_ebreak", false,-1);
    tracep->declBus(c+141,"dcache_state", false,-1, 2,0);
    tracep->declBus(c+142,"icache_state", false,-1, 2,0);
    tracep->declBus(c+143,"next_pc", false,-1, 31,0);
    tracep->declBus(c+144,"next_pc_delayed", false,-1, 31,0);
    tracep->declBit(c+145,"icache_pipieline_hit", false,-1);
    tracep->declBus(c+143,"icache_addr", false,-1, 31,0);
    tracep->declBit(c+146,"icache_valid", false,-1);
    tracep->declBit(c+147,"preif_valid", false,-1);
    tracep->declBit(c+148,"preif_ready_go_delayed", false,-1);
    tracep->declBit(c+149,"preif_ready_go", false,-1);
    tracep->declBit(c+150,"preif_allowin", false,-1);
    tracep->declQuad(c+151,"icache_data", false,-1, 63,0);
    tracep->declBus(c+153,"if_instruction_reg", false,-1, 31,0);
    tracep->declBit(c+154,"if_instruction_blocked", false,-1);
    tracep->declBus(c+717,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+718,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+719,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+720,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+721,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+722,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+723,"TYPE_N", false,-1, 2,0);
    tracep->pushNamePrefix("axi ");
    tracep->declBus(c+707,"RW_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+707,"RW_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+707,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+707,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+708,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+709,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+710,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+629,"clk", false,-1);
    tracep->declBit(c+630,"rst", false,-1);
    tracep->declQuad(c+109,"d_req_addr", false,-1, 63,0);
    tracep->declBus(c+111,"d_req_strb", false,-1, 7,0);
    tracep->declArray(c+112,"d_req_data", false,-1, 127,0);
    tracep->declBit(c+116,"d_req_wen", false,-1);
    tracep->declBit(c+117,"d_req_valid", false,-1);
    tracep->declBit(c+118,"d_res_valid", false,-1);
    tracep->declArray(c+119,"d_mrdata", false,-1, 127,0);
    tracep->declQuad(c+123,"i_req_addr", false,-1, 63,0);
    tracep->declBit(c+125,"i_req_valid", false,-1);
    tracep->declBit(c+126,"i_res_valid", false,-1);
    tracep->declArray(c+127,"i_mrdata", false,-1, 127,0);
    tracep->declBit(c+655,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+656,"axi_aw_valid_o", false,-1);
    tracep->declQuad(c+657,"axi_aw_addr_o", false,-1, 63,0);
    tracep->declBus(c+659,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+660,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+661,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+662,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+663,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+664,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+665,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+666,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+667,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+668,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+669,"axi_w_ready_i", false,-1);
    tracep->declBit(c+670,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+671,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+673,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+674,"axi_w_last_o", false,-1);
    tracep->declBus(c+675,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+676,"axi_b_ready_o", false,-1);
    tracep->declBit(c+677,"axi_b_valid_i", false,-1);
    tracep->declBus(c+678,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+679,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+680,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+681,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+682,"axi_ar_valid_o", false,-1);
    tracep->declQuad(c+683,"axi_ar_addr_o", false,-1, 63,0);
    tracep->declBus(c+685,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+686,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+687,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+688,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+689,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+690,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+691,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+692,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+693,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+694,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+695,"axi_r_ready_o", false,-1);
    tracep->declBit(c+696,"axi_r_valid_i", false,-1);
    tracep->declBus(c+697,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+698,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+700,"axi_r_last_i", false,-1);
    tracep->declBus(c+701,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+702,"axi_r_user_i", false,-1, 0,0);
    tracep->declBus(c+717,"W_IDLE", false,-1, 2,0);
    tracep->declBus(c+718,"W_ADDR", false,-1, 2,0);
    tracep->declBus(c+719,"W_WRITE", false,-1, 2,0);
    tracep->declBus(c+722,"W_WRITE_WAIT", false,-1, 2,0);
    tracep->declBus(c+720,"W_RESP", false,-1, 2,0);
    tracep->declBus(c+721,"W_DONE", false,-1, 2,0);
    tracep->declBus(c+717,"R_IDLE", false,-1, 2,0);
    tracep->declBus(c+718,"R_INST_ADDR", false,-1, 2,0);
    tracep->declBus(c+719,"R_INST_READ", false,-1, 2,0);
    tracep->declBus(c+720,"R_DATA_ADDR", false,-1, 2,0);
    tracep->declBus(c+721,"R_DATA_READ", false,-1, 2,0);
    tracep->declBus(c+722,"R_INST_DONE", false,-1, 2,0);
    tracep->declBus(c+723,"R_DATA_DONE", false,-1, 2,0);
    tracep->declBit(c+713,"r_trans", false,-1);
    tracep->declBit(c+155,"w_valid", false,-1);
    tracep->declBit(c+156,"r_valid", false,-1);
    tracep->declBit(c+157,"data_read", false,-1);
    tracep->declBit(c+125,"inst_read", false,-1);
    tracep->declBit(c+703,"aw_hs", false,-1);
    tracep->declBit(c+704,"ar_hs", false,-1);
    tracep->declBit(c+625,"w_hs", false,-1);
    tracep->declBit(c+626,"b_hs", false,-1);
    tracep->declBit(c+627,"r_hs", false,-1);
    tracep->declBit(c+625,"w_done_first", false,-1);
    tracep->declBit(c+705,"w_done_last", false,-1);
    tracep->declBit(c+628,"r_done", false,-1);
    tracep->declBit(c+706,"trans_done", false,-1);
    tracep->declQuad(c+158,"r_addr", false,-1, 63,0);
    tracep->declBus(c+160,"w_state", false,-1, 2,0);
    tracep->declBus(c+161,"r_state", false,-1, 2,0);
    tracep->declBit(c+162,"w_state_addr", false,-1);
    tracep->declBit(c+713,"w_state_resp", false,-1);
    tracep->declBit(c+163,"w_state_write", false,-1);
    tracep->declBit(c+164,"r_state_addr", false,-1);
    tracep->declBit(c+165,"r_state_read", false,-1);
    tracep->declBus(c+724,"AXI_SIZE", false,-1, 31,0);
    tracep->declBus(c+725,"axi_id", false,-1, 3,0);
    tracep->declBus(c+726,"axi_user", false,-1, 0,0);
    tracep->declBus(c+727,"axi_wlen", false,-1, 7,0);
    tracep->declBus(c+727,"axi_rlen", false,-1, 7,0);
    tracep->declBus(c+720,"axi_size", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache ");
    tracep->declBit(c+629,"clk", false,-1);
    tracep->declBit(c+630,"rst", false,-1);
    tracep->declQuad(c+166,"input_addr", false,-1, 63,0);
    tracep->declQuad(c+168,"input_wdata", false,-1, 63,0);
    tracep->declBit(c+170,"input_memwrite", false,-1);
    tracep->declBit(c+171,"input_memread", false,-1);
    tracep->declBit(c+172,"input_valid", false,-1);
    tracep->declBus(c+173,"input_size", false,-1, 1,0);
    tracep->declBus(c+58,"input_strb", false,-1, 7,0);
    tracep->declQuad(c+71,"output_data", false,-1, 63,0);
    tracep->declBit(c+63,"cache_pipelinehit", false,-1);
    tracep->declBus(c+141,"cache_state", false,-1, 2,0);
    tracep->declQuad(c+75,"diff_data", false,-1, 63,0);
    tracep->declQuad(c+73,"diff_addr", false,-1, 63,0);
    tracep->declQuad(c+109,"axi_req_addr", false,-1, 63,0);
    tracep->declBus(c+111,"axi_req_strb", false,-1, 7,0);
    tracep->declArray(c+112,"axi_req_data", false,-1, 127,0);
    tracep->declBit(c+116,"axi_req_wen", false,-1);
    tracep->declBit(c+117,"axi_req_valid", false,-1);
    tracep->declBit(c+118,"axi_res_valid", false,-1);
    tracep->declArray(c+119,"axi_mrdata", false,-1, 127,0);
    tracep->declBus(c+174,"input_size_reg", false,-1, 1,0);
    tracep->declBus(c+175,"input_offset_reg", false,-1, 3,0);
    tracep->declBit(c+176,"cache_way0hit_reg", false,-1);
    tracep->declBit(c+177,"cache_way1hit_reg", false,-1);
    tracep->declBus(c+728,"mem_addr", false,-1, 31,0);
    tracep->declBit(c+729,"mem_wen", false,-1);
    tracep->declBus(c+730,"mem_strb", false,-1, 7,0);
    tracep->declBus(c+717,"IDLE", false,-1, 2,0);
    tracep->declBus(c+718,"LOOKUP", false,-1, 2,0);
    tracep->declBus(c+719,"MISS", false,-1, 2,0);
    tracep->declBus(c+720,"REPLACE", false,-1, 2,0);
    tracep->declBus(c+721,"REFILL", false,-1, 2,0);
    tracep->declBus(c+722,"MISS_STALL", false,-1, 2,0);
    tracep->declBus(c+723,"REFILL_STALL", false,-1, 2,0);
    tracep->declBus(c+731,"DUNJIAO", false,-1, 2,0);
    tracep->declBus(c+732,"SETS", false,-1, 31,0);
    tracep->declBus(c+178,"input_tag", false,-1, 20,0);
    tracep->declBus(c+179,"input_index", false,-1, 6,0);
    tracep->declBus(c+180,"input_offset", false,-1, 3,0);
    tracep->declBus(c+181,"cache_index_reg", false,-1, 6,0);
    tracep->declBus(c+182,"cache_offset_reg", false,-1, 3,0);
    tracep->declArray(c+183,"cache_strb", false,-1, 127,0);
    tracep->declBit(c+187,"cache_wen_way0", false,-1);
    tracep->declBit(c+188,"cache_wen_way1", false,-1);
    tracep->declArray(c+189,"cache_wdata", false,-1, 127,0);
    tracep->declBit(c+193,"cache_miss", false,-1);
    tracep->declBit(c+194,"cache_wen_way0_reg", false,-1);
    tracep->declBit(c+195,"cache_wen_way1_reg", false,-1);
    tracep->declQuad(c+196,"ex_cache_strb", false,-1, 63,0);
    tracep->declArray(c+198,"cache_rdata_way0", false,-1, 127,0);
    tracep->declArray(c+202,"cache_rdata_way1", false,-1, 127,0);
    tracep->declBit(c+206,"cache_way0hit", false,-1);
    tracep->declBit(c+207,"cache_way1hit", false,-1);
    tracep->declBit(c+208,"cache_way0dirty", false,-1);
    tracep->declBit(c+209,"cache_way1dirty", false,-1);
    tracep->declBit(c+210,"cache_way0valid", false,-1);
    tracep->declBit(c+211,"cache_way1valid", false,-1);
    tracep->declQuad(c+212,"output_data_way0", false,-1, 63,0);
    tracep->declQuad(c+214,"output_data_way1", false,-1, 63,0);
    tracep->declQuad(c+216,"ex_cache_wdata", false,-1, 63,0);
    tracep->declBit(c+218,"cache_raw_way0", false,-1);
    tracep->declBit(c+219,"cache_raw_way1", false,-1);
    tracep->declBit(c+220,"cache_raw", false,-1);
    tracep->declBit(c+221,"cnt", false,-1);
    tracep->pushNamePrefix("dcache_way1 ");
    tracep->declBus(c+732,"Bits", false,-1, 31,0);
    tracep->declBus(c+732,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+733,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+732,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+198,"Q", false,-1, 127,0);
    tracep->declBit(c+629,"CLK", false,-1);
    tracep->declBit(c+222,"CEN", false,-1);
    tracep->declBit(c+187,"WEN", false,-1);
    tracep->declArray(c+183,"BWEN", false,-1, 127,0);
    tracep->declBus(c+179,"A", false,-1, 6,0);
    tracep->declArray(c+189,"D", false,-1, 127,0);
    tracep->declBit(c+222,"cen", false,-1);
    tracep->declBit(c+187,"wen", false,-1);
    tracep->declArray(c+183,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache_way2 ");
    tracep->declBus(c+732,"Bits", false,-1, 31,0);
    tracep->declBus(c+732,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+733,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+732,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+202,"Q", false,-1, 127,0);
    tracep->declBit(c+629,"CLK", false,-1);
    tracep->declBit(c+222,"CEN", false,-1);
    tracep->declBit(c+188,"WEN", false,-1);
    tracep->declArray(c+183,"BWEN", false,-1, 127,0);
    tracep->declBus(c+179,"A", false,-1, 6,0);
    tracep->declArray(c+189,"D", false,-1, 127,0);
    tracep->declBit(c+222,"cen", false,-1);
    tracep->declBit(c+188,"wen", false,-1);
    tracep->declArray(c+183,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+223,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dec ");
    tracep->declBit(c+629,"clk", false,-1);
    tracep->declBit(c+630,"rst", false,-1);
    tracep->declBit(c+50,"id_allowin", false,-1);
    tracep->declBit(c+60,"ex_allowin", false,-1);
    tracep->declBit(c+43,"if_to_id_valid", false,-1);
    tracep->declBit(c+55,"id_to_ex_valid", false,-1);
    tracep->declArray(c+80,"id_to_ex_bus", false,-1, 275,0);
    tracep->declArray(c+77,"if_to_id_bus", false,-1, 64,0);
    tracep->declBus(c+47,"id_rs1", false,-1, 4,0);
    tracep->declBus(c+48,"id_rs2", false,-1, 4,0);
    tracep->declQuad(c+51,"id_regdata1_tmp", false,-1, 63,0);
    tracep->declQuad(c+53,"id_regdata2_tmp", false,-1, 63,0);
    tracep->declBus(c+45,"id_branch_result", false,-1, 31,0);
    tracep->declBit(c+46,"id_branch_taken", false,-1);
    tracep->declBus(c+224,"ex_rd", false,-1, 4,0);
    tracep->declBus(c+225,"mem_rd", false,-1, 4,0);
    tracep->declBus(c+138,"wb_rd", false,-1, 4,0);
    tracep->declQuad(c+166,"ex_alu_output", false,-1, 63,0);
    tracep->declQuad(c+66,"mem_alu_output", false,-1, 63,0);
    tracep->declQuad(c+131,"wb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+171,"ex_memread", false,-1);
    tracep->declBit(c+68,"mem_memread", false,-1);
    tracep->declQuad(c+69,"mem_final_rdata", false,-1, 63,0);
    tracep->declBit(c+226,"ex_reg_wen", false,-1);
    tracep->declBit(c+227,"mem_reg_wen", false,-1);
    tracep->declBit(c+139,"wb_reg_wen", false,-1);
    tracep->declBit(c+228,"mem_mret", false,-1);
    tracep->declBit(c+229,"ex_csr_we", false,-1);
    tracep->declBit(c+230,"mem_csr_we", false,-1);
    tracep->declBit(c+137,"wb_csr_we", false,-1);
    tracep->declBus(c+56,"ex_pc", false,-1, 31,0);
    tracep->declBit(c+42,"if_flush", false,-1);
    tracep->declBus(c+153,"if_instruction_reg", false,-1, 31,0);
    tracep->declBit(c+154,"if_instruction_blocked", false,-1);
    tracep->declBit(c+49,"id_flush", false,-1);
    tracep->declBus(c+717,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+718,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+719,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+720,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+721,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+722,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+723,"TYPE_N", false,-1, 2,0);
    tracep->declBit(c+231,"beq", false,-1);
    tracep->declBit(c+232,"bne", false,-1);
    tracep->declBit(c+233,"blt", false,-1);
    tracep->declBit(c+234,"bltu", false,-1);
    tracep->declBit(c+235,"bge", false,-1);
    tracep->declBit(c+236,"bgeu", false,-1);
    tracep->declBit(c+237,"btype_taken", false,-1);
    tracep->declBit(c+238,"imm_src1", false,-1);
    tracep->declBit(c+239,"imm_src2", false,-1);
    tracep->declBus(c+240,"id_aluop", false,-1, 5,0);
    tracep->declBus(c+241,"id_memop", false,-1, 2,0);
    tracep->declBus(c+242,"id_rd", false,-1, 4,0);
    tracep->declBit(c+243,"id_reg_wen", false,-1);
    tracep->declBit(c+244,"id_memwrite", false,-1);
    tracep->declBit(c+245,"id_memread", false,-1);
    tracep->declBus(c+246,"id_inst_type", false,-1, 2,0);
    tracep->declQuad(c+247,"id_imm", false,-1, 63,0);
    tracep->declBit(c+249,"id_jalr", false,-1);
    tracep->declQuad(c+250,"id_alu_input1", false,-1, 63,0);
    tracep->declQuad(c+252,"id_alu_input2", false,-1, 63,0);
    tracep->declQuad(c+254,"id_regdata1_final", false,-1, 63,0);
    tracep->declQuad(c+256,"id_regdata2_final", false,-1, 63,0);
    tracep->declQuad(c+256,"id_mem_wdata", false,-1, 63,0);
    tracep->declBit(c+258,"id_ebreak", false,-1);
    tracep->declBit(c+259,"exid_raw_hazard1", false,-1);
    tracep->declBit(c+260,"exid_raw_hazard2", false,-1);
    tracep->declBit(c+261,"memid_raw_hazard1", false,-1);
    tracep->declBit(c+262,"memid_raw_hazard2", false,-1);
    tracep->declBit(c+263,"wbid_raw_hazard1", false,-1);
    tracep->declBit(c+264,"wbid_raw_hazard2", false,-1);
    tracep->declBit(c+265,"load_use_hazard1", false,-1);
    tracep->declBit(c+266,"load_use_hazard2", false,-1);
    tracep->declBit(c+267,"mem_load_use_hazard1_tmp", false,-1);
    tracep->declBit(c+268,"mem_load_use_hazard2_tmp", false,-1);
    tracep->declBit(c+269,"mem_load_use_hazard1", false,-1);
    tracep->declBit(c+270,"mem_load_use_hazard2", false,-1);
    tracep->declBit(c+271,"wb_load_use_hazard1_tmp", false,-1);
    tracep->declBit(c+272,"wb_load_use_hazard2_tmp", false,-1);
    tracep->declBit(c+271,"wb_load_use_hazard1", false,-1);
    tracep->declBit(c+272,"wb_load_use_hazard2", false,-1);
    tracep->declBit(c+273,"id_ready_go", false,-1);
    tracep->declBit(c+274,"id_valid", false,-1);
    tracep->declArray(c+275,"if_to_id_bus_reg", false,-1, 64,0);
    tracep->declBus(c+278,"id_pc", false,-1, 31,0);
    tracep->declBus(c+279,"id_instruction", false,-1, 31,0);
    tracep->declBit(c+280,"id_mret", false,-1);
    tracep->declBit(c+281,"id_ecall", false,-1);
    tracep->declBit(c+282,"id_csrrw", false,-1);
    tracep->declBit(c+283,"id_csrrs", false,-1);
    tracep->declBit(c+284,"id_csrrc", false,-1);
    tracep->declBit(c+285,"id_csrrwi", false,-1);
    tracep->declBit(c+286,"id_csrrsi", false,-1);
    tracep->declBit(c+287,"id_csrrci", false,-1);
    tracep->pushNamePrefix("inst_mux ");
    tracep->declBus(c+734,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+733,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+724,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+246,"out", false,-1, 2,0);
    tracep->declBus(c+288,"key", false,-1, 6,0);
    tracep->declBus(c+717,"default_out", false,-1, 2,0);
    tracep->declArray(c+735,"lut", false,-1, 119,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+734,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+733,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+724,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+710,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+246,"out", false,-1, 2,0);
    tracep->declBus(c+288,"key", false,-1, 6,0);
    tracep->declBus(c+717,"default_out", false,-1, 2,0);
    tracep->declArray(c+735,"lut", false,-1, 119,0);
    tracep->declBus(c+739,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+13+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 12; ++i) {
        tracep->declBus(c+25+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+289,"lut_out", false,-1, 2,0);
    tracep->declBit(c+290,"hit", false,-1);
    tracep->declBus(c+740,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("exe ");
    tracep->declBit(c+629,"clk", false,-1);
    tracep->declBit(c+630,"rst", false,-1);
    tracep->declBit(c+60,"ex_allowin", false,-1);
    tracep->declBit(c+713,"mem_allowin", false,-1);
    tracep->declBit(c+55,"id_to_ex_valid", false,-1);
    tracep->declBit(c+62,"ex_to_mem_valid", false,-1);
    tracep->declArray(c+80,"id_to_ex_bus", false,-1, 275,0);
    tracep->declArray(c+89,"ex_to_mem_bus", false,-1, 262,0);
    tracep->declBit(c+228,"mem_mret", false,-1);
    tracep->declBit(c+49,"id_flush", false,-1);
    tracep->declBit(c+63,"cache_pipelinehit", false,-1);
    tracep->declBus(c+141,"cache_state", false,-1, 2,0);
    tracep->declBit(c+59,"ex_flush", false,-1);
    tracep->declBus(c+56,"ex_pc", false,-1, 31,0);
    tracep->declBit(c+61,"ex_ready_go", false,-1);
    tracep->declQuad(c+291,"rtype_calc_result", false,-1, 63,0);
    tracep->declQuad(c+293,"itype_calc_result", false,-1, 63,0);
    tracep->declQuad(c+295,"rtype_alu_op", false,-1, 63,0);
    tracep->declBus(c+297,"itype_alu_op", false,-1, 31,0);
    tracep->declQuad(c+298,"sub", false,-1, 63,0);
    tracep->declBus(c+300,"addw_result", false,-1, 31,0);
    tracep->declBus(c+301,"subw_result", false,-1, 31,0);
    tracep->declBus(c+302,"mulw_result", false,-1, 31,0);
    tracep->declBus(c+303,"divw_result", false,-1, 31,0);
    tracep->declBus(c+303,"divuw_result", false,-1, 31,0);
    tracep->declBus(c+304,"remw_result", false,-1, 31,0);
    tracep->declBus(c+304,"remuw_result", false,-1, 31,0);
    tracep->declQuad(c+305,"sext_addw_result", false,-1, 63,0);
    tracep->declQuad(c+307,"sext_subw_result", false,-1, 63,0);
    tracep->declQuad(c+309,"sext_mulw_result", false,-1, 63,0);
    tracep->declQuad(c+311,"sext_divw_result", false,-1, 63,0);
    tracep->declQuad(c+311,"sext_divuw_result", false,-1, 63,0);
    tracep->declQuad(c+313,"sext_remw_result", false,-1, 63,0);
    tracep->declQuad(c+313,"sext_remuw_result", false,-1, 63,0);
    tracep->declBus(c+315,"src1_sllw", false,-1, 31,0);
    tracep->declBus(c+316,"src1_srlw", false,-1, 31,0);
    tracep->declBus(c+317,"sft_input2", false,-1, 5,0);
    tracep->declQuad(c+318,"sra_mask_64", false,-1, 63,0);
    tracep->declQuad(c+320,"sraw_mask_32", false,-1, 63,0);
    tracep->declQuad(c+322,"sext_src1_sraw", false,-1, 63,0);
    tracep->declQuad(c+324,"sext_src1_sllw", false,-1, 63,0);
    tracep->declQuad(c+326,"sext_src1_srlw", false,-1, 63,0);
    tracep->declQuad(c+328,"ex_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+330,"ex_aluop", false,-1, 5,0);
    tracep->declBus(c+331,"ex_memop", false,-1, 2,0);
    tracep->declBit(c+332,"ex_memwrite", false,-1);
    tracep->declBit(c+333,"ex_memread", false,-1);
    tracep->declBus(c+334,"ex_rd", false,-1, 4,0);
    tracep->declBus(c+335,"ex_inst_type", false,-1, 2,0);
    tracep->declBit(c+336,"ex_jalr", false,-1);
    tracep->declQuad(c+337,"ex_alu_input1", false,-1, 63,0);
    tracep->declQuad(c+339,"ex_alu_input2", false,-1, 63,0);
    tracep->declBus(c+341,"ex_rs1", false,-1, 4,0);
    tracep->declBus(c+342,"ex_rs2", false,-1, 4,0);
    tracep->declBit(c+343,"ex_reg_wen", false,-1);
    tracep->declBit(c+344,"mul_type", false,-1);
    tracep->declBit(c+345,"div_type", false,-1);
    tracep->declBit(c+346,"div_sign", false,-1);
    tracep->declBit(c+347,"mul_ok", false,-1);
    tracep->declBit(c+348,"sign1", false,-1);
    tracep->declBit(c+349,"sign2", false,-1);
    tracep->declQuad(c+350,"mul_res_high", false,-1, 63,0);
    tracep->declQuad(c+352,"mul_res_low", false,-1, 63,0);
    tracep->declBit(c+354,"ex_valid", false,-1);
    tracep->declArray(c+355,"id_to_ex_bus_reg", false,-1, 275,0);
    tracep->declQuad(c+364,"ex_alu_output", false,-1, 63,0);
    tracep->declBit(c+366,"div_ready", false,-1);
    tracep->declBus(c+367,"div_state", false,-1, 1,0);
    tracep->declQuad(c+368,"quo", false,-1, 63,0);
    tracep->declQuad(c+370,"rem", false,-1, 63,0);
    tracep->declBit(c+372,"ex_mret", false,-1);
    tracep->declBit(c+373,"ex_ecall", false,-1);
    tracep->declBit(c+374,"ex_csrrw", false,-1);
    tracep->declBit(c+375,"ex_csrrs", false,-1);
    tracep->declBit(c+376,"ex_csrrc", false,-1);
    tracep->declBit(c+377,"ex_csrrwi", false,-1);
    tracep->declBit(c+378,"ex_csrrsi", false,-1);
    tracep->declBit(c+379,"ex_csrrci", false,-1);
    tracep->declBit(c+380,"ex_csr_we", false,-1);
    tracep->declBus(c+381,"ex_des_csr", false,-1, 11,0);
    tracep->declBit(c+382,"ex_ebreak", false,-1);
    tracep->declBit(c+383,"cache_readygo", false,-1);
    tracep->declBit(c+741,"ex_result_blocked", false,-1);
    tracep->declBus(c+742,"op_add", false,-1, 5,0);
    tracep->declBus(c+743,"op_mul", false,-1, 5,0);
    tracep->declBus(c+744,"op_sub", false,-1, 5,0);
    tracep->declBus(c+745,"op_addw", false,-1, 5,0);
    tracep->declBus(c+746,"op_or", false,-1, 5,0);
    tracep->declBus(c+747,"op_xor", false,-1, 5,0);
    tracep->declBus(c+748,"op_sll", false,-1, 5,0);
    tracep->declBus(c+749,"op_slt", false,-1, 5,0);
    tracep->declBus(c+750,"op_sltu", false,-1, 5,0);
    tracep->declBus(c+751,"op_and", false,-1, 5,0);
    tracep->declBus(c+752,"op_div", false,-1, 5,0);
    tracep->declBus(c+753,"op_divu", false,-1, 5,0);
    tracep->declBus(c+754,"op_remu", false,-1, 5,0);
    tracep->declBus(c+755,"op_rem", false,-1, 5,0);
    tracep->declBus(c+756,"op_subw", false,-1, 5,0);
    tracep->declBus(c+757,"op_mulw", false,-1, 5,0);
    tracep->declBus(c+758,"op_sllw", false,-1, 5,0);
    tracep->declBus(c+759,"op_srl", false,-1, 5,0);
    tracep->declBus(c+760,"op_sra", false,-1, 5,0);
    tracep->declBus(c+761,"op_divw", false,-1, 5,0);
    tracep->declBus(c+762,"op_srlw", false,-1, 5,0);
    tracep->declBus(c+763,"op_sraw", false,-1, 5,0);
    tracep->declBus(c+764,"op_divuw", false,-1, 5,0);
    tracep->declBus(c+765,"op_remw", false,-1, 5,0);
    tracep->declBus(c+766,"op_remuw", false,-1, 5,0);
    tracep->declBus(c+767,"op_mulhu", false,-1, 5,0);
    tracep->declBus(c+768,"op_mulh", false,-1, 5,0);
    tracep->declBus(c+769,"op_mulhsu", false,-1, 5,0);
    tracep->declBus(c+770,"op_addi", false,-1, 4,0);
    tracep->declBus(c+771,"op_andi", false,-1, 4,0);
    tracep->declBus(c+772,"op_ori", false,-1, 4,0);
    tracep->declBus(c+773,"op_xori", false,-1, 4,0);
    tracep->declBus(c+774,"op_sltiu", false,-1, 4,0);
    tracep->declBus(c+775,"op_sri", false,-1, 4,0);
    tracep->declBus(c+776,"op_slli", false,-1, 4,0);
    tracep->declBus(c+777,"op_addiw", false,-1, 4,0);
    tracep->declBus(c+778,"op_slliw", false,-1, 4,0);
    tracep->declBus(c+779,"op_sriw", false,-1, 4,0);
    tracep->declBus(c+780,"op_slti", false,-1, 4,0);
    tracep->declQuad(c+384,"res_sra", false,-1, 63,0);
    tracep->declQuad(c+386,"res_srl", false,-1, 63,0);
    tracep->declQuad(c+388,"res_sll", false,-1, 63,0);
    tracep->declBus(c+717,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+718,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+719,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+720,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+721,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+722,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+723,"TYPE_N", false,-1, 2,0);
    tracep->pushNamePrefix("dec_itype ");
    tracep->declBus(c+390,"in", false,-1, 4,0);
    tracep->declBus(c+297,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec_rtype ");
    tracep->declBus(c+391,"in", false,-1, 5,0);
    tracep->declQuad(c+295,"out", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+629,"clk", false,-1);
    tracep->declBit(c+630,"rst", false,-1);
    tracep->declQuad(c+392,"x", false,-1, 63,0);
    tracep->declQuad(c+394,"y", false,-1, 63,0);
    tracep->declBit(c+346,"s", false,-1);
    tracep->declBit(c+345,"is_div", false,-1);
    tracep->declBit(c+366,"ready", false,-1);
    tracep->declBus(c+367,"state", false,-1, 1,0);
    tracep->declQuad(c+368,"quo", false,-1, 63,0);
    tracep->declQuad(c+370,"rem", false,-1, 63,0);
    tracep->declBus(c+781,"IDLE", false,-1, 1,0);
    tracep->declBus(c+782,"DIV_ON", false,-1, 1,0);
    tracep->declBus(c+783,"DIV_ZERO", false,-1, 1,0);
    tracep->declBus(c+784,"DIV_END", false,-1, 1,0);
    tracep->declBus(c+396,"cnt", false,-1, 6,0);
    tracep->declArray(c+397,"dividend", false,-1, 128,0);
    tracep->declQuad(c+402,"divisor", false,-1, 63,0);
    tracep->declArray(c+404,"subres", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+629,"clk", false,-1);
    tracep->declBit(c+630,"rst", false,-1);
    tracep->declQuad(c+337,"x", false,-1, 63,0);
    tracep->declQuad(c+339,"y", false,-1, 63,0);
    tracep->declBit(c+348,"xs", false,-1);
    tracep->declBit(c+349,"ys", false,-1);
    tracep->declQuad(c+350,"high", false,-1, 63,0);
    tracep->declQuad(c+352,"low", false,-1, 63,0);
    tracep->declBit(c+344,"mul_type", false,-1);
    tracep->declBit(c+347,"ready", false,-1);
    tracep->declArray(c+407,"x_ext", false,-1, 64,0);
    tracep->declArray(c+410,"y_ext", false,-1, 66,0);
    tracep->declArray(c+413,"res", false,-1, 127,0);
    tracep->declBus(c+417,"cnt", false,-1, 4,0);
    tracep->declArray(c+418,"multiplier", false,-1, 127,0);
    tracep->declArray(c+422,"multiplied", false,-1, 66,0);
    tracep->declBus(c+425,"mul_state", false,-1, 1,0);
    tracep->declBus(c+781,"IDLE", false,-1, 1,0);
    tracep->declBus(c+782,"MUL_ON", false,-1, 1,0);
    tracep->declBus(c+784,"MUL_QUIT", false,-1, 1,0);
    tracep->declBus(c+783,"MUL_OK", false,-1, 1,0);
    tracep->declArray(c+426,"x_comp", false,-1, 127,0);
    tracep->declArray(c+430,"z", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("icache ");
    tracep->declBit(c+629,"clk", false,-1);
    tracep->declBit(c+630,"rst", false,-1);
    tracep->declQuad(c+434,"input_addr", false,-1, 63,0);
    tracep->declQuad(c+785,"input_wdata", false,-1, 63,0);
    tracep->declBit(c+726,"input_memwrite", false,-1);
    tracep->declBit(c+713,"input_memread", false,-1);
    tracep->declBit(c+146,"input_valid", false,-1);
    tracep->declQuad(c+151,"output_data", false,-1, 63,0);
    tracep->declBit(c+145,"cache_pipelinehit", false,-1);
    tracep->declBus(c+142,"cache_state", false,-1, 2,0);
    tracep->declQuad(c+123,"axi_req_addr", false,-1, 63,0);
    tracep->declBit(c+125,"axi_req_valid", false,-1);
    tracep->declBit(c+126,"axi_res_valid", false,-1);
    tracep->declArray(c+127,"axi_mrdata", false,-1, 127,0);
    tracep->declBus(c+436,"input_offset_reg", false,-1, 3,0);
    tracep->declBit(c+437,"cache_way0hit_reg", false,-1);
    tracep->declBit(c+438,"cache_way1hit_reg", false,-1);
    tracep->declBus(c+787,"mem_addr", false,-1, 31,0);
    tracep->declBit(c+788,"mem_wen", false,-1);
    tracep->declBus(c+789,"mem_strb", false,-1, 7,0);
    tracep->declBus(c+717,"IDLE", false,-1, 2,0);
    tracep->declBus(c+718,"LOOKUP", false,-1, 2,0);
    tracep->declBus(c+719,"MISS", false,-1, 2,0);
    tracep->declBus(c+720,"REPLACE", false,-1, 2,0);
    tracep->declBus(c+721,"REFILL", false,-1, 2,0);
    tracep->declBus(c+722,"MISS_STALL", false,-1, 2,0);
    tracep->declBus(c+723,"REFILL_STALL", false,-1, 2,0);
    tracep->declBus(c+731,"DUNJIAO", false,-1, 2,0);
    tracep->declBus(c+732,"SETS", false,-1, 31,0);
    tracep->declBus(c+439,"input_tag", false,-1, 20,0);
    tracep->declBus(c+440,"input_index", false,-1, 6,0);
    tracep->declBus(c+441,"input_offset", false,-1, 3,0);
    tracep->declBus(c+790,"cache_index_reg", false,-1, 6,0);
    tracep->declBus(c+442,"cache_offset_reg", false,-1, 3,0);
    tracep->declBit(c+443,"cache_wen_way0", false,-1);
    tracep->declBit(c+444,"cache_wen_way1", false,-1);
    tracep->declBit(c+445,"cache_miss", false,-1);
    tracep->declArray(c+446,"cache_strb", false,-1, 127,0);
    tracep->declArray(c+450,"cache_wdata", false,-1, 127,0);
    tracep->declArray(c+454,"cache_rdata_way0", false,-1, 127,0);
    tracep->declArray(c+458,"cache_rdata_way1", false,-1, 127,0);
    tracep->declBit(c+462,"cache_way0hit", false,-1);
    tracep->declBit(c+463,"cache_way1hit", false,-1);
    tracep->declBit(c+464,"cache_way0valid", false,-1);
    tracep->declBit(c+465,"cache_way1valid", false,-1);
    tracep->declQuad(c+466,"output_data_way0", false,-1, 63,0);
    tracep->declQuad(c+468,"output_data_way1", false,-1, 63,0);
    tracep->declQuad(c+791,"ex_cache_wdata", false,-1, 63,0);
    tracep->declBit(c+470,"cnt", false,-1);
    tracep->pushNamePrefix("dcache_way1 ");
    tracep->declBus(c+732,"Bits", false,-1, 31,0);
    tracep->declBus(c+732,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+733,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+732,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+454,"Q", false,-1, 127,0);
    tracep->declBit(c+629,"CLK", false,-1);
    tracep->declBit(c+713,"CEN", false,-1);
    tracep->declBit(c+443,"WEN", false,-1);
    tracep->declArray(c+446,"BWEN", false,-1, 127,0);
    tracep->declBus(c+440,"A", false,-1, 6,0);
    tracep->declArray(c+450,"D", false,-1, 127,0);
    tracep->declBit(c+713,"cen", false,-1);
    tracep->declBit(c+443,"wen", false,-1);
    tracep->declArray(c+446,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache_way2 ");
    tracep->declBus(c+732,"Bits", false,-1, 31,0);
    tracep->declBus(c+732,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+733,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+732,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+458,"Q", false,-1, 127,0);
    tracep->declBit(c+629,"CLK", false,-1);
    tracep->declBit(c+713,"CEN", false,-1);
    tracep->declBit(c+444,"WEN", false,-1);
    tracep->declArray(c+446,"BWEN", false,-1, 127,0);
    tracep->declBus(c+440,"A", false,-1, 6,0);
    tracep->declArray(c+450,"D", false,-1, 127,0);
    tracep->declBit(c+713,"cen", false,-1);
    tracep->declBit(c+444,"wen", false,-1);
    tracep->declArray(c+446,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+471,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+629,"clk", false,-1);
    tracep->declBit(c+630,"rst", false,-1);
    tracep->declBit(c+713,"mem_allowin", false,-1);
    tracep->declBit(c+713,"wb_allowin", false,-1);
    tracep->declBit(c+62,"ex_to_mem_valid", false,-1);
    tracep->declBit(c+64,"mem_to_wb_valid", false,-1);
    tracep->declArray(c+89,"ex_to_mem_bus", false,-1, 262,0);
    tracep->declArray(c+98,"mem_to_wb_bus", false,-1, 321,0);
    tracep->declQuad(c+66,"mem_alu_output", false,-1, 63,0);
    tracep->declQuad(c+69,"mem_final_rdata", false,-1, 63,0);
    tracep->declBit(c+68,"mem_memread", false,-1);
    tracep->declBit(c+59,"ex_flush", false,-1);
    tracep->declBit(c+61,"ex_ready_go", false,-1);
    tracep->declBus(c+57,"ex_memop", false,-1, 2,0);
    tracep->declBus(c+58,"ex_wmask", false,-1, 7,0);
    tracep->declBit(c+65,"mem_flush", false,-1);
    tracep->declQuad(c+71,"mem_doubly_aligned_data", false,-1, 63,0);
    tracep->declQuad(c+73,"mem_diff_addr", false,-1, 63,0);
    tracep->declQuad(c+75,"mem_diff_data", false,-1, 63,0);
    tracep->declBus(c+141,"cache_state", false,-1, 2,0);
    tracep->declBit(c+472,"mem_memwrite", false,-1);
    tracep->declBus(c+473,"mem_memop", false,-1, 2,0);
    tracep->declQuad(c+474,"mem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+476,"lb", false,-1);
    tracep->declBit(c+477,"lh", false,-1);
    tracep->declBit(c+478,"lw", false,-1);
    tracep->declBit(c+479,"ld", false,-1);
    tracep->declBit(c+480,"lbu", false,-1);
    tracep->declBit(c+481,"lhu", false,-1);
    tracep->declBit(c+482,"lwu", false,-1);
    tracep->declBit(c+483,"sb", false,-1);
    tracep->declBit(c+484,"sh", false,-1);
    tracep->declBit(c+485,"sw", false,-1);
    tracep->declBit(c+486,"sd", false,-1);
    tracep->declBit(c+713,"mem_ready_go", false,-1);
    tracep->declBit(c+487,"mem_reg_wen", false,-1);
    tracep->declBus(c+488,"mem_rs1", false,-1, 4,0);
    tracep->declQuad(c+489,"mem_alu_input1", false,-1, 63,0);
    tracep->declBus(c+491,"mem_des_csr", false,-1, 11,0);
    tracep->declBus(c+492,"mem_rd", false,-1, 4,0);
    tracep->declBus(c+493,"mem_pc", false,-1, 31,0);
    tracep->declBit(c+494,"mem_jalr", false,-1);
    tracep->declQuad(c+495,"mem_wdata_tmp", false,-1, 63,0);
    tracep->declQuad(c+793,"mem_wdata", false,-1, 63,0);
    tracep->declBit(c+64,"mem_valid", false,-1);
    tracep->declBit(c+497,"mem_mret", false,-1);
    tracep->declBit(c+498,"mem_ecall", false,-1);
    tracep->declBit(c+499,"mem_csrrw", false,-1);
    tracep->declBit(c+500,"mem_csrrs", false,-1);
    tracep->declBit(c+501,"mem_csrrc", false,-1);
    tracep->declBit(c+502,"mem_csrrwi", false,-1);
    tracep->declBit(c+503,"mem_csrrsi", false,-1);
    tracep->declBit(c+504,"mem_csrrci", false,-1);
    tracep->declBit(c+505,"mem_csr_we", false,-1);
    tracep->declBit(c+506,"mem_ebreak", false,-1);
    tracep->declBit(c+507,"ex_lb", false,-1);
    tracep->declBit(c+508,"ex_lh", false,-1);
    tracep->declBit(c+509,"ex_lw", false,-1);
    tracep->declBit(c+510,"ex_ld", false,-1);
    tracep->declBit(c+511,"ex_lbu", false,-1);
    tracep->declBit(c+512,"ex_lhu", false,-1);
    tracep->declBit(c+513,"ex_lwu", false,-1);
    tracep->declBit(c+514,"ex_sb", false,-1);
    tracep->declBit(c+515,"ex_sh", false,-1);
    tracep->declBit(c+516,"ex_sw", false,-1);
    tracep->declBit(c+517,"ex_sd", false,-1);
    tracep->declArray(c+518,"ex_to_mem_bus_reg", false,-1, 262,0);
    tracep->declQuad(c+527,"rawdata", false,-1, 63,0);
    tracep->declBus(c+529,"ex_addr_lowmask", false,-1, 7,0);
    tracep->declBus(c+530,"mem_addr_lowmask", false,-1, 7,0);
    tracep->declBus(c+795,"ex_size", false,-1, 1,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+531,"in", false,-1, 2,0);
    tracep->declBus(c+529,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb ");
    tracep->declBit(c+629,"clk", false,-1);
    tracep->declBit(c+630,"rst", false,-1);
    tracep->declBit(c+713,"wb_allowin", false,-1);
    tracep->declBit(c+64,"mem_to_wb_valid", false,-1);
    tracep->declArray(c+98,"mem_to_wb_bus", false,-1, 321,0);
    tracep->declBus(c+47,"raddr1", false,-1, 4,0);
    tracep->declBus(c+48,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+51,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+53,"rdata2", false,-1, 63,0);
    tracep->declBus(c+138,"wb_rd", false,-1, 4,0);
    tracep->declQuad(c+131,"wb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+632,"wb_valid", false,-1);
    tracep->declBus(c+633,"wb_pc", false,-1, 31,0);
    tracep->declBit(c+139,"wb_reg_wen", false,-1);
    tracep->declQuad(c+133,"wb_csrwdata", false,-1, 63,0);
    tracep->declQuad(c+135,"wb_csrrdata", false,-1, 63,0);
    tracep->declBit(c+42,"wb_mret", false,-1);
    tracep->declBit(c+137,"wb_csr_we", false,-1);
    tracep->declQuad(c+634,"csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+636,"csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+638,"csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+640,"csr_mcause", false,-1, 63,0);
    tracep->declQuad(c+642,"csr_mie", false,-1, 63,0);
    tracep->declQuad(c+644,"csr_mip", false,-1, 63,0);
    tracep->declQuad(c+646,"csr_mscratch", false,-1, 63,0);
    tracep->declQuad(c+37,"csr_mhartid", false,-1, 63,0);
    tracep->declBit(c+650,"wb_memwrite", false,-1);
    tracep->declQuad(c+653,"wb_diff_data", false,-1, 63,0);
    tracep->declQuad(c+651,"wb_diff_addr", false,-1, 63,0);
    tracep->declBit(c+140,"wb_ebreak", false,-1);
    tracep->declBit(c+65,"mem_flush", false,-1);
    tracep->declBus(c+796,"MTVEC", false,-1, 11,0);
    tracep->declBus(c+797,"MCAUSE", false,-1, 11,0);
    tracep->declBus(c+798,"MSTATUS", false,-1, 11,0);
    tracep->declBus(c+799,"MEPC", false,-1, 11,0);
    tracep->declBus(c+800,"MIE", false,-1, 11,0);
    tracep->declBus(c+801,"MIP", false,-1, 11,0);
    tracep->declBus(c+802,"MSCRATCH", false,-1, 11,0);
    tracep->declBus(c+803,"MHARTID", false,-1, 11,0);
    tracep->declBus(c+532,"wb_des_csr", false,-1, 11,0);
    tracep->declQuad(c+533,"wb_reg_wdata_tmp", false,-1, 63,0);
    tracep->declBus(c+535,"mstatus_mpp", false,-1, 1,0);
    tracep->declBit(c+536,"mstatus_mpie", false,-1);
    tracep->declBit(c+537,"mstatus_mie", false,-1);
    tracep->declBit(c+538,"wb_flush", false,-1);
    tracep->declBus(c+539,"wb_rs1", false,-1, 4,0);
    tracep->declBit(c+540,"wb_ecall", false,-1);
    tracep->declBit(c+541,"wb_csrrw", false,-1);
    tracep->declBit(c+542,"wb_csrrs", false,-1);
    tracep->declBit(c+543,"wb_csrrc", false,-1);
    tracep->declBit(c+544,"wb_csrrwi", false,-1);
    tracep->declBit(c+545,"wb_csrrsi", false,-1);
    tracep->declBit(c+546,"wb_csrrci", false,-1);
    tracep->declQuad(c+547,"wb_alu_input1", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+549+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declArray(c+613,"mem_to_wb_bus_reg", false,-1, 321,0);
    tracep->declBit(c+624,"non_zerow", false,-1);
    tracep->declBit(c+713,"wb_ready_go", false,-1);
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
    tracep->fullIData(oldp+39,(vlSelf->ysyx_22040127_top__DOT__if_instruction),32);
    tracep->fullBit(oldp+40,((((IData)((0x100073U == 
                                        (0x10007fU 
                                         & vlSelf->ysyx_22040127_top__DOT__if_instruction))) 
                               & (~ (IData)((0U != 
                                             (0xffefff80U 
                                              & vlSelf->ysyx_22040127_top__DOT__if_instruction))))) 
                              | (0x6bU == (0x7fU & vlSelf->ysyx_22040127_top__DOT__if_instruction)))));
    tracep->fullBit(oldp+41,((0x7bU == (0x7fU & vlSelf->ysyx_22040127_top__DOT__if_instruction))));
    tracep->fullBit(oldp+42,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                    >> 0xdU))));
    tracep->fullBit(oldp+43,(vlSelf->ysyx_22040127_top__DOT__if_valid));
    tracep->fullBit(oldp+44,(vlSelf->ysyx_22040127_top__DOT__if_allowin));
    tracep->fullIData(oldp+45,(((((- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken))) 
                                  & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U] 
                                     + (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm))) 
                                 | (0xfffffffeU & (
                                                   (- (IData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr))) 
                                                   & ((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final) 
                                                      + 
                                                      (((- (IData)(
                                                                   (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                          >> 0x14U)))))) 
                                | ((- (IData)((3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                                   & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U] 
                                      + (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1))))),32);
    tracep->fullBit(oldp+46,(vlSelf->ysyx_22040127_top__DOT__id_branch_taken));
    tracep->fullCData(oldp+47,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+48,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                         >> 0x14U))),5);
    tracep->fullBit(oldp+49,(vlSelf->ysyx_22040127_top__DOT__id_flush));
    tracep->fullBit(oldp+50,(vlSelf->ysyx_22040127_top__DOT__id_allowin));
    tracep->fullQData(oldp+51,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf
                               [(0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                          >> 0xfU))]),64);
    tracep->fullQData(oldp+53,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf
                               [(0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                          >> 0x14U))]),64);
    tracep->fullBit(oldp+55,(vlSelf->ysyx_22040127_top__DOT__id_to_ex_valid));
    tracep->fullIData(oldp+56,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                 << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                           >> 0x1fU))),32);
    tracep->fullCData(oldp+57,((7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                      >> 8U))),3);
    tracep->fullCData(oldp+58,(vlSelf->ysyx_22040127_top__DOT__ex_wmask),8);
    tracep->fullBit(oldp+59,(vlSelf->ysyx_22040127_top__DOT__ex_flush));
    tracep->fullBit(oldp+60,(vlSelf->ysyx_22040127_top__DOT__ex_allowin));
    tracep->fullBit(oldp+61,(vlSelf->ysyx_22040127_top__DOT__ex_ready_go));
    tracep->fullBit(oldp+62,(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_valid));
    tracep->fullBit(oldp+63,((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                               & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                  | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit))) 
                              | ((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                                 & ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw)) 
                                    & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                       | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit)))))));
    tracep->fullBit(oldp+64,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_valid));
    tracep->fullBit(oldp+65,(vlSelf->ysyx_22040127_top__DOT__mem_flush));
    tracep->fullQData(oldp+66,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])))),64);
    tracep->fullBit(oldp+68,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                    >> 5U))));
    tracep->fullQData(oldp+69,(vlSelf->ysyx_22040127_top__DOT__mem_final_rdata),64);
    tracep->fullQData(oldp+71,(vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data),64);
    tracep->fullQData(oldp+73,(vlSelf->ysyx_22040127_top__DOT__mem_diff_addr),64);
    tracep->fullQData(oldp+75,(vlSelf->ysyx_22040127_top__DOT__mem_diff_data),64);
    tracep->fullWData(oldp+77,(vlSelf->ysyx_22040127_top__DOT__if_to_id_bus),65);
    __Vtemp_h9bc57e54__0[0U] = (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final);
    __Vtemp_h9bc57e54__0[1U] = (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final 
                                        >> 0x20U));
    __Vtemp_h9bc57e54__0[2U] = (IData)((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                         | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                         ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                         : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final));
    __Vtemp_h9bc57e54__0[3U] = (IData)(((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                          | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
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
    tracep->fullWData(oldp+80,(__Vtemp_h9bc57e54__0),276);
    tracep->fullWData(oldp+89,(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus),263);
    tracep->fullWData(oldp+98,(vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus),322);
    tracep->fullQData(oldp+109,(vlSelf->ysyx_22040127_top__DOT__d_req_addr),64);
    tracep->fullCData(oldp+111,(vlSelf->ysyx_22040127_top__DOT__d_req_strb),8);
    tracep->fullWData(oldp+112,(vlSelf->ysyx_22040127_top__DOT__d_req_data),128);
    tracep->fullBit(oldp+116,(vlSelf->ysyx_22040127_top__DOT__d_req_wen));
    tracep->fullBit(oldp+117,(vlSelf->ysyx_22040127_top__DOT__d_req_valid));
    tracep->fullBit(oldp+118,(vlSelf->ysyx_22040127_top__DOT__d_res_valid));
    tracep->fullWData(oldp+119,(vlSelf->ysyx_22040127_top__DOT__d_mrdata),128);
    tracep->fullQData(oldp+123,(vlSelf->ysyx_22040127_top__DOT__i_req_addr),64);
    tracep->fullBit(oldp+125,(vlSelf->ysyx_22040127_top__DOT__i_req_valid));
    tracep->fullBit(oldp+126,((5U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state))));
    tracep->fullWData(oldp+127,(vlSelf->ysyx_22040127_top__DOT__i_mrdata),128);
    tracep->fullQData(oldp+131,(vlSelf->ysyx_22040127_top__DOT__wb_reg_wdata),64);
    tracep->fullQData(oldp+133,(vlSelf->ysyx_22040127_top__DOT__wb_csrwdata),64);
    tracep->fullQData(oldp+135,(vlSelf->ysyx_22040127_top__DOT__wb_csrrdata),64);
    tracep->fullBit(oldp+137,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                     >> 0xeU))));
    tracep->fullCData(oldp+138,((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])),5);
    tracep->fullBit(oldp+139,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                     >> 5U))));
    tracep->fullBit(oldp+140,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                     >> 1U))));
    tracep->fullCData(oldp+141,(vlSelf->ysyx_22040127_top__DOT__dcache_state),3);
    tracep->fullCData(oldp+142,(vlSelf->ysyx_22040127_top__DOT__icache_state),3);
    tracep->fullIData(oldp+143,(vlSelf->ysyx_22040127_top__DOT__next_pc),32);
    tracep->fullIData(oldp+144,(vlSelf->ysyx_22040127_top__DOT__next_pc_delayed),32);
    tracep->fullBit(oldp+145,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state)) 
                               & ((IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit) 
                                  | (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit)))));
    tracep->fullBit(oldp+146,(vlSelf->ysyx_22040127_top__DOT__icache_valid));
    tracep->fullBit(oldp+147,(vlSelf->ysyx_22040127_top__DOT__preif_valid));
    tracep->fullBit(oldp+148,(vlSelf->ysyx_22040127_top__DOT__preif_ready_go_delayed));
    tracep->fullBit(oldp+149,(vlSelf->ysyx_22040127_top__DOT__preif_ready_go));
    tracep->fullBit(oldp+150,((1U & ((~ (IData)(vlSelf->ysyx_22040127_top__DOT__preif_valid)) 
                                     | ((IData)(vlSelf->ysyx_22040127_top__DOT__preif_ready_go) 
                                        & (IData)(vlSelf->ysyx_22040127_top__DOT__if_allowin))))));
    tracep->fullQData(oldp+151,(vlSelf->ysyx_22040127_top__DOT__icache_data),64);
    tracep->fullIData(oldp+153,(vlSelf->ysyx_22040127_top__DOT__if_instruction_reg),32);
    tracep->fullBit(oldp+154,(vlSelf->ysyx_22040127_top__DOT__if_instruction_blocked));
    tracep->fullBit(oldp+155,(((IData)(vlSelf->ysyx_22040127_top__DOT__d_req_wen) 
                               & (IData)(vlSelf->ysyx_22040127_top__DOT__d_req_valid))));
    tracep->fullBit(oldp+156,(((IData)(vlSelf->ysyx_22040127_top__DOT__i_req_valid) 
                               | (IData)(vlSelf->ysyx_22040127_top__DOT__d_req_valid))));
    tracep->fullBit(oldp+157,(((IData)(vlSelf->ysyx_22040127_top__DOT__d_req_valid) 
                               & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__d_req_wen)))));
    tracep->fullQData(oldp+158,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state))
                                  ? (0xfffffffffffffff0ULL 
                                     & vlSelf->ysyx_22040127_top__DOT__i_req_addr)
                                  : ((3U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state))
                                      ? (0xfffffffffffffff0ULL 
                                         & vlSelf->ysyx_22040127_top__DOT__d_req_addr)
                                      : 0ULL))),64);
    tracep->fullCData(oldp+160,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state),3);
    tracep->fullCData(oldp+161,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state),3);
    tracep->fullBit(oldp+162,((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state))));
    tracep->fullBit(oldp+163,(((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state)) 
                               | (5U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state)))));
    tracep->fullBit(oldp+164,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)) 
                               | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)))));
    tracep->fullBit(oldp+165,(((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)) 
                               | (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)))));
    tracep->fullQData(oldp+166,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])))),64);
    tracep->fullQData(oldp+168,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U])))),64);
    tracep->fullBit(oldp+170,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                     >> 6U))));
    tracep->fullBit(oldp+171,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                     >> 5U))));
    tracep->fullBit(oldp+172,(vlSelf->ysyx_22040127_top__DOT____Vcellinp__dcache__input_valid));
    tracep->fullCData(oldp+173,((3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                       >> 8U))),2);
    tracep->fullCData(oldp+174,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_size_reg),2);
    tracep->fullCData(oldp+175,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_offset_reg),4);
    tracep->fullBit(oldp+176,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit_reg));
    tracep->fullBit(oldp+177,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit_reg));
    tracep->fullIData(oldp+178,((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                 >> 0xbU)),21);
    tracep->fullCData(oldp+179,((0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                          >> 4U))),7);
    tracep->fullCData(oldp+180,((0xfU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])),4);
    tracep->fullCData(oldp+181,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_index_reg),7);
    tracep->fullCData(oldp+182,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_offset_reg),4);
    tracep->fullWData(oldp+183,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_strb),128);
    tracep->fullBit(oldp+187,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way0));
    tracep->fullBit(oldp+188,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way1));
    tracep->fullWData(oldp+189,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wdata),128);
    tracep->fullBit(oldp+193,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_miss));
    tracep->fullBit(oldp+194,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way0_reg));
    tracep->fullBit(oldp+195,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way1_reg));
    tracep->fullQData(oldp+196,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_strb),64);
    tracep->fullWData(oldp+198,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0),128);
    tracep->fullWData(oldp+202,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1),128);
    tracep->fullBit(oldp+206,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit));
    tracep->fullBit(oldp+207,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit));
    tracep->fullBit(oldp+208,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0dirty));
    tracep->fullBit(oldp+209,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1dirty));
    tracep->fullBit(oldp+210,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0valid));
    tracep->fullBit(oldp+211,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1valid));
    tracep->fullQData(oldp+212,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_offset_reg))
                                  ? (((QData)((IData)(
                                                      vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[2U])))
                                  : (((QData)((IData)(
                                                      vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[0U]))))),64);
    tracep->fullQData(oldp+214,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_offset_reg))
                                  ? (((QData)((IData)(
                                                      vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[2U])))
                                  : (((QData)((IData)(
                                                      vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[0U]))))),64);
    tracep->fullQData(oldp+216,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_wdata),64);
    tracep->fullBit(oldp+218,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way0));
    tracep->fullBit(oldp+219,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way1));
    tracep->fullBit(oldp+220,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw));
    tracep->fullBit(oldp+221,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cnt));
    tracep->fullBit(oldp+222,((1U & ((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                      >> 5U) | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_miss)))));
    tracep->fullIData(oldp+223,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__unnamedblk1__DOT__i),32);
    tracep->fullCData(oldp+224,((0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])),5);
    tracep->fullCData(oldp+225,((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U])),5);
    tracep->fullBit(oldp+226,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                     >> 7U))));
    tracep->fullBit(oldp+227,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U] 
                                     >> 5U))));
    tracep->fullBit(oldp+228,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
                                     >> 0xdU))));
    tracep->fullBit(oldp+229,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[5U] 
                                     >> 0x14U))));
    tracep->fullBit(oldp+230,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
                                     >> 0xeU))));
    tracep->fullBit(oldp+231,((1U & (~ (IData)((0U 
                                                != 
                                                (7U 
                                                 & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                    >> 0xcU))))))));
    tracep->fullBit(oldp+232,((1U & ((~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                     >> 0xdU))))) 
                                     & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                        >> 0xcU)))));
    tracep->fullBit(oldp+233,((4U == (7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+234,((6U == (7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+235,((5U == (7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+236,((7U == (7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                            >> 0xcU)))));
    tracep->fullBit(oldp+237,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken));
    tracep->fullBit(oldp+238,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                               | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
    tracep->fullBit(oldp+239,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                               | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
    tracep->fullCData(oldp+240,(((0x20U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                           >> 0x19U)) 
                                 | ((0x10U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                              >> 0x15U)) 
                                    | (0xfU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                               >> 3U))))),6);
    tracep->fullCData(oldp+241,((7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+242,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                          >> 7U))),5);
    tracep->fullBit(oldp+243,((1U & (((((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                                        | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                       | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                      | (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                     | (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+244,((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))));
    tracep->fullBit(oldp+245,((IData)((3U == (0x7fU 
                                              & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])))));
    tracep->fullCData(oldp+246,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type),3);
    tracep->fullQData(oldp+247,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm),64);
    tracep->fullBit(oldp+249,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr));
    tracep->fullQData(oldp+250,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1),64);
    tracep->fullQData(oldp+252,((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                  | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                  ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                  : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final)),64);
    tracep->fullQData(oldp+254,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final),64);
    tracep->fullQData(oldp+256,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final),64);
    tracep->fullBit(oldp+258,((1U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[2U])));
    tracep->fullBit(oldp+259,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard1));
    tracep->fullBit(oldp+260,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard2));
    tracep->fullBit(oldp+261,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard1));
    tracep->fullBit(oldp+262,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard2));
    tracep->fullBit(oldp+263,((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                                & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                                   == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                >> 0xfU)))) 
                               & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                  >> 5U))));
    tracep->fullBit(oldp+264,((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                                & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                                   == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                >> 0x14U)))) 
                               & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                  >> 5U))));
    tracep->fullBit(oldp+265,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard1));
    tracep->fullBit(oldp+266,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard2));
    tracep->fullBit(oldp+267,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1_tmp));
    tracep->fullBit(oldp+268,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2_tmp));
    tracep->fullBit(oldp+269,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1));
    tracep->fullBit(oldp+270,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2));
    tracep->fullBit(oldp+271,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard1_tmp));
    tracep->fullBit(oldp+272,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard2_tmp));
    tracep->fullBit(oldp+273,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_ready_go));
    tracep->fullBit(oldp+274,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_valid));
    tracep->fullWData(oldp+275,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg),65);
    tracep->fullIData(oldp+278,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U]),32);
    tracep->fullIData(oldp+279,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U]),32);
    tracep->fullBit(oldp+280,(((0x604000U == (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                              >> 7U)) 
                               & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
    tracep->fullBit(oldp+281,(((~ (IData)((0U != (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                  >> 7U)))) 
                               & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
    tracep->fullBit(oldp+282,((IData)(((0x1000U == 
                                        (0x7000U & 
                                         vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+283,((IData)(((0x2000U == 
                                        (0x7000U & 
                                         vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+284,((IData)(((0x3000U == 
                                        (0x7000U & 
                                         vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+285,((IData)(((0x5000U == 
                                        (0x7000U & 
                                         vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+286,((IData)(((0x6000U == 
                                        (0x7000U & 
                                         vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullBit(oldp+287,((IData)(((0x7000U == 
                                        (0x7000U & 
                                         vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                       & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    tracep->fullCData(oldp+288,((0x7fU & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])),7);
    tracep->fullCData(oldp+289,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out),3);
    tracep->fullBit(oldp+290,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit));
    tracep->fullQData(oldp+291,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_calc_result),64);
    tracep->fullQData(oldp+293,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_calc_result),64);
    tracep->fullQData(oldp+295,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op),64);
    tracep->fullIData(oldp+297,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op),32);
    tracep->fullQData(oldp+298,(((((QData)((IData)(
                                                   vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                 - (((QData)((IData)(
                                                     vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))))),64);
    tracep->fullIData(oldp+300,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__addw_result),32);
    tracep->fullIData(oldp+301,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result),32);
    tracep->fullIData(oldp+302,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U]),32);
    tracep->fullIData(oldp+303,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U]),32);
    tracep->fullIData(oldp+304,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                  << 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                               >> 1U))),32);
    tracep->fullQData(oldp+305,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_addw_result),64);
    tracep->fullQData(oldp+307,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result)))),64);
    tracep->fullQData(oldp+309,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U] 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U])))),64);
    tracep->fullQData(oldp+311,((((QData)((IData)((- (IData)(
                                                             (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U] 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U])))),64);
    tracep->fullQData(oldp+313,((((QData)((IData)((- (IData)(
                                                             (1U 
                                                              & vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U]))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                                                << 0x1fU) 
                                                               | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                                                  >> 1U)))))),64);
    tracep->fullIData(oldp+315,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_sllw),32);
    tracep->fullIData(oldp+316,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_srlw),32);
    tracep->fullCData(oldp+317,((0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])),6);
    tracep->fullQData(oldp+318,((~ (0xffffffffffffffffULL 
                                    >> (0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))),64);
    tracep->fullQData(oldp+320,((0xffffffff00000000ULL 
                                 | (QData)((IData)(
                                                   (~ 
                                                    (0xffffffffU 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))))))),64);
    tracep->fullQData(oldp+322,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sraw),64);
    tracep->fullQData(oldp+324,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sllw),64);
    tracep->fullQData(oldp+326,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_srlw),64);
    tracep->fullQData(oldp+328,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[0U])))),64);
    tracep->fullCData(oldp+330,((0x3fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 0x19U))),6);
    tracep->fullCData(oldp+331,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                       >> 0x16U))),3);
    tracep->fullBit(oldp+332,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x14U))));
    tracep->fullBit(oldp+333,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x13U))));
    tracep->fullCData(oldp+334,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 0xeU))),5);
    tracep->fullCData(oldp+335,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                       >> 1U))),3);
    tracep->fullBit(oldp+336,((1U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])));
    tracep->fullQData(oldp+337,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])))),64);
    tracep->fullQData(oldp+339,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))),64);
    tracep->fullCData(oldp+341,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 9U))),5);
    tracep->fullCData(oldp+342,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 4U))),5);
    tracep->fullBit(oldp+343,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x15U))));
    tracep->fullBit(oldp+344,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_type));
    tracep->fullBit(oldp+345,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_type));
    tracep->fullBit(oldp+346,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_sign));
    tracep->fullBit(oldp+347,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_ok));
    tracep->fullBit(oldp+348,((1U & (~ (IData)((0xc00000U 
                                                == 
                                                (0xc00000U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])))))));
    tracep->fullBit(oldp+349,((1U & (~ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                        >> 0x17U)))));
    tracep->fullQData(oldp+350,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[3U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[2U])))),64);
    tracep->fullQData(oldp+352,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U])))),64);
    tracep->fullBit(oldp+354,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__ex_valid));
    tracep->fullWData(oldp+355,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg),276);
    tracep->fullQData(oldp+364,(((8U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
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
    tracep->fullBit(oldp+366,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_ready));
    tracep->fullCData(oldp+367,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_state),2);
    tracep->fullQData(oldp+368,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U])))),64);
    tracep->fullQData(oldp+370,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[4U])) 
                                  << 0x3fU) | (((QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U])) 
                                                << 0x1fU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U])) 
                                                  >> 1U)))),64);
    tracep->fullBit(oldp+372,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 6U))));
    tracep->fullBit(oldp+373,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 5U))));
    tracep->fullBit(oldp+374,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 4U))));
    tracep->fullBit(oldp+375,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 3U))));
    tracep->fullBit(oldp+376,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 2U))));
    tracep->fullBit(oldp+377,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 1U))));
    tracep->fullBit(oldp+378,((1U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])));
    tracep->fullBit(oldp+379,((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                               >> 0x1fU)));
    tracep->fullBit(oldp+380,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                >> 0x1fU) | (0U != 
                                             (0x7fU 
                                              & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])))));
    tracep->fullSData(oldp+381,((0xfffU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                           >> 7U))),12);
    tracep->fullBit(oldp+382,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                     >> 0x13U))));
    tracep->fullBit(oldp+383,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__cache_readygo));
    tracep->fullQData(oldp+384,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sra),64);
    tracep->fullQData(oldp+386,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_srl),64);
    tracep->fullQData(oldp+388,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sll),64);
    tracep->fullCData(oldp+390,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                          >> 0x16U))),5);
    tracep->fullCData(oldp+391,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in),6);
    tracep->fullQData(oldp+392,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber3),64);
    tracep->fullQData(oldp+394,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber4),64);
    tracep->fullCData(oldp+396,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__cnt),7);
    tracep->fullWData(oldp+397,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend),129);
    tracep->fullQData(oldp+402,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__divisor),64);
    tracep->fullWData(oldp+404,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__subres),65);
    tracep->fullWData(oldp+407,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext),65);
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
    __Vtemp_h9b9f996a__0[2U] = ((((0x800000U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                   ? 0U : (3U & (- (IData)(
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
    tracep->fullWData(oldp+410,(__Vtemp_h9b9f996a__0),67);
    tracep->fullWData(oldp+413,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res),128);
    tracep->fullCData(oldp+417,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__cnt),5);
    tracep->fullWData(oldp+418,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier),128);
    tracep->fullWData(oldp+422,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied),67);
    tracep->fullCData(oldp+425,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__mul_state),2);
    __Vtemp_hc961b8db__0[0U] = 1U;
    __Vtemp_hc961b8db__0[1U] = 0U;
    __Vtemp_hc961b8db__0[2U] = 0U;
    __Vtemp_hc961b8db__0[3U] = 0U;
    __Vtemp_h176995fd__0[0U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U]);
    __Vtemp_h176995fd__0[1U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U]);
    __Vtemp_h176995fd__0[2U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U]);
    __Vtemp_h176995fd__0[3U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[3U]);
    VL_ADD_W(4, __Vtemp_h105deb60__0, __Vtemp_hc961b8db__0, __Vtemp_h176995fd__0);
    tracep->fullWData(oldp+426,(__Vtemp_h105deb60__0),128);
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
    __Vtemp_he177c09e__0[0U] = (((((- (IData)(((1U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                               | (2U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U]) 
                                  | ((- (IData)(((5U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                                 | (6U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                     & __Vtemp_he0489fa6__0[0U])) 
                                 | ((- (IData)((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                    & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U] 
                                       << 1U))) | (
                                                   (- (IData)(
                                                              (4U 
                                                               == 
                                                               (7U 
                                                                & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                                   & (__Vtemp_hac0c18d9__0[0U] 
                                                      << 1U)));
    __Vtemp_he177c09e__0[1U] = (((((- (IData)(((1U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                               | (2U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U]) 
                                  | ((- (IData)(((5U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                                 | (6U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                     & __Vtemp_he0489fa6__0[1U])) 
                                 | ((- (IData)((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                    & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U] 
                                        >> 0x1fU) | 
                                       (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U] 
                                        << 1U)))) | 
                                ((- (IData)((4U == 
                                             (7U & 
                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                 & ((__Vtemp_hac0c18d9__0[0U] 
                                     >> 0x1fU) | (__Vtemp_hac0c18d9__0[1U] 
                                                  << 1U))));
    __Vtemp_he177c09e__0[2U] = (((((- (IData)(((1U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                               | (2U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U]) 
                                  | ((- (IData)(((5U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                                 | (6U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                     & __Vtemp_he0489fa6__0[2U])) 
                                 | ((- (IData)((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                    & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U] 
                                        >> 0x1fU) | 
                                       (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U] 
                                        << 1U)))) | 
                                ((- (IData)((4U == 
                                             (7U & 
                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                 & ((__Vtemp_hac0c18d9__0[1U] 
                                     >> 0x1fU) | (__Vtemp_hac0c18d9__0[2U] 
                                                  << 1U))));
    __Vtemp_he177c09e__0[3U] = (((((- (IData)(((1U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                               | (2U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[3U]) 
                                  | ((- (IData)(((5U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                                 | (6U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                     & __Vtemp_he0489fa6__0[3U])) 
                                 | ((- (IData)((3U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                    & ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U] 
                                        >> 0x1fU) | 
                                       (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[3U] 
                                        << 1U)))) | 
                                ((- (IData)((4U == 
                                             (7U & 
                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                 & ((__Vtemp_hac0c18d9__0[2U] 
                                     >> 0x1fU) | (__Vtemp_hac0c18d9__0[3U] 
                                                  << 1U))));
    tracep->fullWData(oldp+430,(__Vtemp_he177c09e__0),128);
    tracep->fullQData(oldp+434,((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc))),64);
    tracep->fullCData(oldp+436,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__input_offset_reg),4);
    tracep->fullBit(oldp+437,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit_reg));
    tracep->fullBit(oldp+438,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit_reg));
    tracep->fullIData(oldp+439,((0x1fffffU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc)) 
                                                      >> 0xbU)))),21);
    tracep->fullCData(oldp+440,((0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc)) 
                                                  >> 4U)))),7);
    tracep->fullCData(oldp+441,((0xfU & (IData)((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc))))),4);
    tracep->fullCData(oldp+442,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_offset_reg),4);
    tracep->fullBit(oldp+443,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wen_way0));
    tracep->fullBit(oldp+444,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wen_way1));
    tracep->fullBit(oldp+445,((((IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0valid) 
                                & (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1valid)) 
                               & ((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state)) 
                                  & (~ ((IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit) 
                                        | (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit)))))));
    tracep->fullWData(oldp+446,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_strb),128);
    tracep->fullWData(oldp+450,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wdata),128);
    tracep->fullWData(oldp+454,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0),128);
    tracep->fullWData(oldp+458,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1),128);
    tracep->fullBit(oldp+462,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit));
    tracep->fullBit(oldp+463,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit));
    tracep->fullBit(oldp+464,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0valid));
    tracep->fullBit(oldp+465,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1valid));
    tracep->fullQData(oldp+466,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__input_offset_reg))
                                  ? (((QData)((IData)(
                                                      vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[2U])))
                                  : (((QData)((IData)(
                                                      vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[0U]))))),64);
    tracep->fullQData(oldp+468,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__input_offset_reg))
                                  ? (((QData)((IData)(
                                                      vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[2U])))
                                  : (((QData)((IData)(
                                                      vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[0U]))))),64);
    tracep->fullBit(oldp+470,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cnt));
    tracep->fullIData(oldp+471,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__unnamedblk1__DOT__i),32);
    tracep->fullBit(oldp+472,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                     >> 6U))));
    tracep->fullCData(oldp+473,((7U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                       >> 8U))),3);
    tracep->fullQData(oldp+474,(((0x20U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])
                                  ? vlSelf->ysyx_22040127_top__DOT__mem_final_rdata
                                  : (((QData)((IData)(
                                                      vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U]))))),64);
    tracep->fullBit(oldp+476,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lb));
    tracep->fullBit(oldp+477,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lh));
    tracep->fullBit(oldp+478,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lw));
    tracep->fullBit(oldp+479,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ld));
    tracep->fullBit(oldp+480,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lbu));
    tracep->fullBit(oldp+481,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lhu));
    tracep->fullBit(oldp+482,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lwu));
    tracep->fullBit(oldp+483,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sb));
    tracep->fullBit(oldp+484,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sh));
    tracep->fullBit(oldp+485,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sw));
    tracep->fullBit(oldp+486,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sd));
    tracep->fullBit(oldp+487,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                     >> 7U))));
    tracep->fullCData(oldp+488,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                          >> 0x15U))),5);
    tracep->fullQData(oldp+489,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U])) 
                                  << 0x26U) | (((QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[6U])) 
                                                << 6U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U])) 
                                                  >> 0x1aU)))),64);
    tracep->fullSData(oldp+491,((0xfffU & ((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                            << 6U) 
                                           | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U] 
                                              >> 0x1aU)))),12);
    tracep->fullCData(oldp+492,((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])),5);
    tracep->fullIData(oldp+493,(((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                  << 0x15U) | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                               >> 0xbU))),32);
    tracep->fullBit(oldp+494,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                     >> 0xbU))));
    tracep->fullQData(oldp+495,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U])))),64);
    tracep->fullBit(oldp+497,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                     >> 0x13U))));
    tracep->fullBit(oldp+498,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                     >> 0x12U))));
    tracep->fullBit(oldp+499,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                     >> 0x11U))));
    tracep->fullBit(oldp+500,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                     >> 0x10U))));
    tracep->fullBit(oldp+501,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                     >> 0xfU))));
    tracep->fullBit(oldp+502,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                     >> 0xeU))));
    tracep->fullBit(oldp+503,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                     >> 0xdU))));
    tracep->fullBit(oldp+504,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                     >> 0xcU))));
    tracep->fullBit(oldp+505,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                     >> 0x14U))));
    tracep->fullBit(oldp+506,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                     >> 6U))));
    tracep->fullBit(oldp+507,((0U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                            >> 8U)))));
    tracep->fullBit(oldp+508,((1U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                            >> 8U)))));
    tracep->fullBit(oldp+509,((2U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                            >> 8U)))));
    tracep->fullBit(oldp+510,((3U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                            >> 8U)))));
    tracep->fullBit(oldp+511,((4U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                            >> 8U)))));
    tracep->fullBit(oldp+512,((5U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                            >> 8U)))));
    tracep->fullBit(oldp+513,((6U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                            >> 8U)))));
    tracep->fullBit(oldp+514,((0U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                            >> 8U)))));
    tracep->fullBit(oldp+515,((1U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                            >> 8U)))));
    tracep->fullBit(oldp+516,((2U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                            >> 8U)))));
    tracep->fullBit(oldp+517,((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                            >> 8U)))));
    tracep->fullWData(oldp+518,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg),263);
    tracep->fullQData(oldp+527,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata),64);
    tracep->fullCData(oldp+529,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask),8);
    tracep->fullCData(oldp+530,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask),8);
    tracep->fullCData(oldp+531,((7U & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])),3);
    tracep->fullSData(oldp+532,((vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                 >> 0x14U)),12);
    tracep->fullQData(oldp+533,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0U])))),64);
    tracep->fullCData(oldp+535,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpp),2);
    tracep->fullBit(oldp+536,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpie));
    tracep->fullBit(oldp+537,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mie));
    tracep->fullBit(oldp+538,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__wb_flush));
    tracep->fullCData(oldp+539,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                          >> 0xfU))),5);
    tracep->fullBit(oldp+540,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                     >> 0xcU))));
    tracep->fullBit(oldp+541,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                     >> 0xbU))));
    tracep->fullBit(oldp+542,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                     >> 0xaU))));
    tracep->fullBit(oldp+543,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                     >> 9U))));
    tracep->fullBit(oldp+544,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                     >> 8U))));
    tracep->fullBit(oldp+545,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                     >> 7U))));
    tracep->fullBit(oldp+546,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                     >> 6U))));
    tracep->fullQData(oldp+547,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U])) 
                                  << 0x2cU) | (((QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[4U])) 
                                                << 0xcU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U])) 
                                                  >> 0x14U)))),64);
    tracep->fullQData(oldp+549,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[0]),64);
    tracep->fullQData(oldp+551,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[1]),64);
    tracep->fullQData(oldp+553,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[2]),64);
    tracep->fullQData(oldp+555,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[3]),64);
    tracep->fullQData(oldp+557,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[4]),64);
    tracep->fullQData(oldp+559,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[5]),64);
    tracep->fullQData(oldp+561,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[6]),64);
    tracep->fullQData(oldp+563,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[7]),64);
    tracep->fullQData(oldp+565,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[8]),64);
    tracep->fullQData(oldp+567,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[9]),64);
    tracep->fullQData(oldp+569,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[10]),64);
    tracep->fullQData(oldp+571,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[11]),64);
    tracep->fullQData(oldp+573,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[12]),64);
    tracep->fullQData(oldp+575,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[13]),64);
    tracep->fullQData(oldp+577,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[14]),64);
    tracep->fullQData(oldp+579,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[15]),64);
    tracep->fullQData(oldp+581,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[16]),64);
    tracep->fullQData(oldp+583,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[17]),64);
    tracep->fullQData(oldp+585,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[18]),64);
    tracep->fullQData(oldp+587,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[19]),64);
    tracep->fullQData(oldp+589,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[20]),64);
    tracep->fullQData(oldp+591,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[21]),64);
    tracep->fullQData(oldp+593,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[22]),64);
    tracep->fullQData(oldp+595,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[23]),64);
    tracep->fullQData(oldp+597,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[24]),64);
    tracep->fullQData(oldp+599,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[25]),64);
    tracep->fullQData(oldp+601,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[26]),64);
    tracep->fullQData(oldp+603,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[27]),64);
    tracep->fullQData(oldp+605,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[28]),64);
    tracep->fullQData(oldp+607,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[29]),64);
    tracep->fullQData(oldp+609,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[30]),64);
    tracep->fullQData(oldp+611,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__rf[31]),64);
    tracep->fullWData(oldp+613,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg),322);
    tracep->fullBit(oldp+624,((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]))));
    tracep->fullBit(oldp+625,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_hs));
    tracep->fullBit(oldp+626,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__b_hs));
    tracep->fullBit(oldp+627,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_hs));
    tracep->fullBit(oldp+628,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_done));
    tracep->fullBit(oldp+629,(vlSelf->clk));
    tracep->fullBit(oldp+630,(vlSelf->rst));
    tracep->fullIData(oldp+631,(vlSelf->if_pc),32);
    tracep->fullBit(oldp+632,(vlSelf->wb_valid));
    tracep->fullIData(oldp+633,(vlSelf->wb_pc),32);
    tracep->fullQData(oldp+634,(vlSelf->mepc),64);
    tracep->fullQData(oldp+636,(vlSelf->mtvec),64);
    tracep->fullQData(oldp+638,(vlSelf->mstatus),64);
    tracep->fullQData(oldp+640,(vlSelf->mcause),64);
    tracep->fullQData(oldp+642,(vlSelf->mie),64);
    tracep->fullQData(oldp+644,(vlSelf->mip),64);
    tracep->fullQData(oldp+646,(vlSelf->mscratch),64);
    tracep->fullQData(oldp+648,(vlSelf->mtval),64);
    tracep->fullBit(oldp+650,(vlSelf->wb_memwrite));
    tracep->fullQData(oldp+651,(vlSelf->wb_diff_addr),64);
    tracep->fullQData(oldp+653,(vlSelf->wb_diff_data),64);
    tracep->fullBit(oldp+655,(vlSelf->axi_aw_ready_i));
    tracep->fullBit(oldp+656,(vlSelf->axi_aw_valid_o));
    tracep->fullQData(oldp+657,(vlSelf->axi_aw_addr_o),64);
    tracep->fullCData(oldp+659,(vlSelf->axi_aw_prot_o),3);
    tracep->fullCData(oldp+660,(vlSelf->axi_aw_id_o),4);
    tracep->fullBit(oldp+661,(vlSelf->axi_aw_user_o));
    tracep->fullCData(oldp+662,(vlSelf->axi_aw_len_o),8);
    tracep->fullCData(oldp+663,(vlSelf->axi_aw_size_o),3);
    tracep->fullCData(oldp+664,(vlSelf->axi_aw_burst_o),2);
    tracep->fullBit(oldp+665,(vlSelf->axi_aw_lock_o));
    tracep->fullCData(oldp+666,(vlSelf->axi_aw_cache_o),4);
    tracep->fullCData(oldp+667,(vlSelf->axi_aw_qos_o),4);
    tracep->fullCData(oldp+668,(vlSelf->axi_aw_region_o),4);
    tracep->fullBit(oldp+669,(vlSelf->axi_w_ready_i));
    tracep->fullBit(oldp+670,(vlSelf->axi_w_valid_o));
    tracep->fullQData(oldp+671,(vlSelf->axi_w_data_o),64);
    tracep->fullCData(oldp+673,(vlSelf->axi_w_strb_o),8);
    tracep->fullBit(oldp+674,(vlSelf->axi_w_last_o));
    tracep->fullBit(oldp+675,(vlSelf->axi_w_user_o));
    tracep->fullBit(oldp+676,(vlSelf->axi_b_ready_o));
    tracep->fullBit(oldp+677,(vlSelf->axi_b_valid_i));
    tracep->fullCData(oldp+678,(vlSelf->axi_b_resp_i),2);
    tracep->fullCData(oldp+679,(vlSelf->axi_b_id_i),4);
    tracep->fullBit(oldp+680,(vlSelf->axi_b_user_i));
    tracep->fullBit(oldp+681,(vlSelf->axi_ar_ready_i));
    tracep->fullBit(oldp+682,(vlSelf->axi_ar_valid_o));
    tracep->fullQData(oldp+683,(vlSelf->axi_ar_addr_o),64);
    tracep->fullCData(oldp+685,(vlSelf->axi_ar_prot_o),3);
    tracep->fullCData(oldp+686,(vlSelf->axi_ar_id_o),4);
    tracep->fullBit(oldp+687,(vlSelf->axi_ar_user_o));
    tracep->fullCData(oldp+688,(vlSelf->axi_ar_len_o),8);
    tracep->fullCData(oldp+689,(vlSelf->axi_ar_size_o),3);
    tracep->fullCData(oldp+690,(vlSelf->axi_ar_burst_o),2);
    tracep->fullBit(oldp+691,(vlSelf->axi_ar_lock_o));
    tracep->fullCData(oldp+692,(vlSelf->axi_ar_cache_o),4);
    tracep->fullCData(oldp+693,(vlSelf->axi_ar_qos_o),4);
    tracep->fullCData(oldp+694,(vlSelf->axi_ar_region_o),4);
    tracep->fullBit(oldp+695,(vlSelf->axi_r_ready_o));
    tracep->fullBit(oldp+696,(vlSelf->axi_r_valid_i));
    tracep->fullCData(oldp+697,(vlSelf->axi_r_resp_i),2);
    tracep->fullQData(oldp+698,(vlSelf->axi_r_data_i),64);
    tracep->fullBit(oldp+700,(vlSelf->axi_r_last_i));
    tracep->fullCData(oldp+701,(vlSelf->axi_r_id_i),4);
    tracep->fullBit(oldp+702,(vlSelf->axi_r_user_i));
    tracep->fullBit(oldp+703,(((IData)(vlSelf->axi_aw_ready_i) 
                               & (IData)(vlSelf->axi_aw_valid_o))));
    tracep->fullBit(oldp+704,(((IData)(vlSelf->axi_ar_ready_i) 
                               & (IData)(vlSelf->axi_ar_valid_o))));
    tracep->fullBit(oldp+705,(((IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_hs) 
                               & (IData)(vlSelf->axi_w_last_o))));
    tracep->fullBit(oldp+706,(((IData)(vlSelf->ysyx_22040127_top__DOT__d_req_wen)
                                ? (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__b_hs)
                                : (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_done))));
    tracep->fullIData(oldp+707,(0x40U),32);
    tracep->fullIData(oldp+708,(4U),32);
    tracep->fullIData(oldp+709,(8U),32);
    tracep->fullIData(oldp+710,(1U),32);
    tracep->fullQData(oldp+711,(vlSelf->ysyx_22040127_top__DOT__if_pcdata),64);
    tracep->fullBit(oldp+713,(1U));
    tracep->fullQData(oldp+714,(vlSelf->ysyx_22040127_top__DOT__reg_wdata),64);
    tracep->fullBit(oldp+716,(vlSelf->ysyx_22040127_top__DOT__id_jalr));
    tracep->fullCData(oldp+717,(0U),3);
    tracep->fullCData(oldp+718,(1U),3);
    tracep->fullCData(oldp+719,(2U),3);
    tracep->fullCData(oldp+720,(3U),3);
    tracep->fullCData(oldp+721,(4U),3);
    tracep->fullCData(oldp+722,(5U),3);
    tracep->fullCData(oldp+723,(6U),3);
    tracep->fullIData(oldp+724,(3U),32);
    tracep->fullCData(oldp+725,(0U),4);
    tracep->fullBit(oldp+726,(0U));
    tracep->fullCData(oldp+727,(1U),8);
    tracep->fullIData(oldp+728,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mem_addr),32);
    tracep->fullBit(oldp+729,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mem_wen));
    tracep->fullCData(oldp+730,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mem_strb),8);
    tracep->fullCData(oldp+731,(7U),3);
    tracep->fullIData(oldp+732,(0x80U),32);
    tracep->fullIData(oldp+733,(7U),32);
    tracep->fullIData(oldp+734,(0xcU),32);
    __Vtemp_hdbbc8edc__0[0U] = 0x39e46b1dU;
    __Vtemp_hdbbc8edc__0[1U] = 0x8deddc67U;
    __Vtemp_hdbbc8edc__0[2U] = 0x60980633U;
    __Vtemp_hdbbc8edc__0[3U] = 0x2e5b93U;
    tracep->fullWData(oldp+735,(__Vtemp_hdbbc8edc__0),120);
    tracep->fullIData(oldp+739,(0xaU),32);
    tracep->fullIData(oldp+740,(0xcU),32);
    tracep->fullBit(oldp+741,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__ex_result_blocked));
    tracep->fullCData(oldp+742,(0U),6);
    tracep->fullCData(oldp+743,(0x10U),6);
    tracep->fullCData(oldp+744,(0x20U),6);
    tracep->fullCData(oldp+745,(1U),6);
    tracep->fullCData(oldp+746,(0xcU),6);
    tracep->fullCData(oldp+747,(8U),6);
    tracep->fullCData(oldp+748,(2U),6);
    tracep->fullCData(oldp+749,(4U),6);
    tracep->fullCData(oldp+750,(6U),6);
    tracep->fullCData(oldp+751,(0xeU),6);
    tracep->fullCData(oldp+752,(0x18U),6);
    tracep->fullCData(oldp+753,(0x1aU),6);
    tracep->fullCData(oldp+754,(0x1eU),6);
    tracep->fullCData(oldp+755,(0x1cU),6);
    tracep->fullCData(oldp+756,(0x21U),6);
    tracep->fullCData(oldp+757,(0x11U),6);
    tracep->fullCData(oldp+758,(3U),6);
    tracep->fullCData(oldp+759,(0xaU),6);
    tracep->fullCData(oldp+760,(0x2aU),6);
    tracep->fullCData(oldp+761,(0x19U),6);
    tracep->fullCData(oldp+762,(0xbU),6);
    tracep->fullCData(oldp+763,(0x2bU),6);
    tracep->fullCData(oldp+764,(0x1bU),6);
    tracep->fullCData(oldp+765,(0x1dU),6);
    tracep->fullCData(oldp+766,(0x1fU),6);
    tracep->fullCData(oldp+767,(0x16U),6);
    tracep->fullCData(oldp+768,(0x12U),6);
    tracep->fullCData(oldp+769,(0x14U),6);
    tracep->fullCData(oldp+770,(0x10U),5);
    tracep->fullCData(oldp+771,(0x17U),5);
    tracep->fullCData(oldp+772,(0x16U),5);
    tracep->fullCData(oldp+773,(0x14U),5);
    tracep->fullCData(oldp+774,(0x13U),5);
    tracep->fullCData(oldp+775,(0x15U),5);
    tracep->fullCData(oldp+776,(0x11U),5);
    tracep->fullCData(oldp+777,(0x18U),5);
    tracep->fullCData(oldp+778,(0x19U),5);
    tracep->fullCData(oldp+779,(0x1dU),5);
    tracep->fullCData(oldp+780,(0x12U),5);
    tracep->fullCData(oldp+781,(0U),2);
    tracep->fullCData(oldp+782,(1U),2);
    tracep->fullCData(oldp+783,(3U),2);
    tracep->fullCData(oldp+784,(2U),2);
    tracep->fullQData(oldp+785,(0ULL),64);
    tracep->fullIData(oldp+787,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__mem_addr),32);
    tracep->fullBit(oldp+788,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__mem_wen));
    tracep->fullCData(oldp+789,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__mem_strb),8);
    tracep->fullCData(oldp+790,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_index_reg),7);
    tracep->fullQData(oldp+791,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__ex_cache_wdata),64);
    tracep->fullQData(oldp+793,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_wdata),64);
    tracep->fullCData(oldp+795,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_size),2);
    tracep->fullSData(oldp+796,(0x305U),12);
    tracep->fullSData(oldp+797,(0x342U),12);
    tracep->fullSData(oldp+798,(0x300U),12);
    tracep->fullSData(oldp+799,(0x341U),12);
    tracep->fullSData(oldp+800,(0x304U),12);
    tracep->fullSData(oldp+801,(0x344U),12);
    tracep->fullSData(oldp+802,(0x340U),12);
    tracep->fullSData(oldp+803,(0xf14U),12);
}
