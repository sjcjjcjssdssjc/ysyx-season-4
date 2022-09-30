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
    tracep->declBit(c+733,"clk", false,-1);
    tracep->declBit(c+734,"rst", false,-1);
    tracep->declBus(c+735,"if_pc", false,-1, 31,0);
    tracep->declBit(c+736,"wb_valid", false,-1);
    tracep->declBus(c+737,"wb_pc", false,-1, 31,0);
    tracep->declQuad(c+738,"mepc", false,-1, 63,0);
    tracep->declQuad(c+740,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+742,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+744,"mcause", false,-1, 63,0);
    tracep->declQuad(c+746,"mie", false,-1, 63,0);
    tracep->declQuad(c+748,"mip", false,-1, 63,0);
    tracep->declQuad(c+750,"mscratch", false,-1, 63,0);
    tracep->declQuad(c+752,"mtval", false,-1, 63,0);
    tracep->declBit(c+754,"wb_memwrite", false,-1);
    tracep->declBus(c+755,"wb_instruction", false,-1, 31,0);
    tracep->declBit(c+756,"cmt_skip", false,-1);
    tracep->declQuad(c+757,"wb_diff_addr", false,-1, 63,0);
    tracep->declQuad(c+759,"wb_diff_data", false,-1, 63,0);
    tracep->declBit(c+761,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+762,"axi_aw_valid_o", false,-1);
    tracep->declQuad(c+763,"axi_aw_addr_o", false,-1, 63,0);
    tracep->declBus(c+765,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+766,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+767,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+768,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+769,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+770,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+771,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+772,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+773,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+774,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+775,"axi_w_ready_i", false,-1);
    tracep->declBit(c+776,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+777,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+779,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+780,"axi_w_last_o", false,-1);
    tracep->declBus(c+781,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+782,"axi_b_ready_o", false,-1);
    tracep->declBit(c+783,"axi_b_valid_i", false,-1);
    tracep->declBus(c+784,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+785,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+786,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+787,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+788,"axi_ar_valid_o", false,-1);
    tracep->declQuad(c+789,"axi_ar_addr_o", false,-1, 63,0);
    tracep->declBus(c+791,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+792,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+793,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+794,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+795,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+796,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+797,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+798,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+799,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+800,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+801,"axi_r_ready_o", false,-1);
    tracep->declBit(c+802,"axi_r_valid_i", false,-1);
    tracep->declBus(c+803,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+804,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+806,"axi_r_last_i", false,-1);
    tracep->declBus(c+807,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+808,"axi_r_user_i", false,-1, 0,0);
    tracep->pushNamePrefix("ysyx_22040127_top ");
    tracep->declBus(c+816,"RW_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+816,"RW_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+816,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+816,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+817,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+818,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+819,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+733,"clk", false,-1);
    tracep->declBit(c+734,"rst", false,-1);
    tracep->declBus(c+735,"if_pc", false,-1, 31,0);
    tracep->declBit(c+736,"wb_valid", false,-1);
    tracep->declBus(c+737,"wb_pc", false,-1, 31,0);
    tracep->declQuad(c+738,"mepc", false,-1, 63,0);
    tracep->declQuad(c+740,"mtvec", false,-1, 63,0);
    tracep->declQuad(c+742,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+744,"mcause", false,-1, 63,0);
    tracep->declQuad(c+746,"mie", false,-1, 63,0);
    tracep->declQuad(c+748,"mip", false,-1, 63,0);
    tracep->declQuad(c+750,"mscratch", false,-1, 63,0);
    tracep->declQuad(c+752,"mtval", false,-1, 63,0);
    tracep->declBit(c+754,"wb_memwrite", false,-1);
    tracep->declBus(c+755,"wb_instruction", false,-1, 31,0);
    tracep->declBit(c+756,"cmt_skip", false,-1);
    tracep->declQuad(c+757,"wb_diff_addr", false,-1, 63,0);
    tracep->declQuad(c+759,"wb_diff_data", false,-1, 63,0);
    tracep->declBit(c+761,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+762,"axi_aw_valid_o", false,-1);
    tracep->declQuad(c+763,"axi_aw_addr_o", false,-1, 63,0);
    tracep->declBus(c+765,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+766,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+767,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+768,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+769,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+770,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+771,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+772,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+773,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+774,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+775,"axi_w_ready_i", false,-1);
    tracep->declBit(c+776,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+777,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+779,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+780,"axi_w_last_o", false,-1);
    tracep->declBus(c+781,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+782,"axi_b_ready_o", false,-1);
    tracep->declBit(c+783,"axi_b_valid_i", false,-1);
    tracep->declBus(c+784,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+785,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+786,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+787,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+788,"axi_ar_valid_o", false,-1);
    tracep->declQuad(c+789,"axi_ar_addr_o", false,-1, 63,0);
    tracep->declBus(c+791,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+792,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+793,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+794,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+795,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+796,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+797,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+798,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+799,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+800,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+801,"axi_r_ready_o", false,-1);
    tracep->declBit(c+802,"axi_r_valid_i", false,-1);
    tracep->declBus(c+803,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+804,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+806,"axi_r_last_i", false,-1);
    tracep->declBus(c+807,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+808,"axi_r_user_i", false,-1, 0,0);
    tracep->declQuad(c+40,"mhartid", false,-1, 63,0);
    tracep->declQuad(c+820,"if_pcdata", false,-1, 63,0);
    tracep->declBit(c+42,"if_valid", false,-1);
    tracep->declBus(c+43,"if_instruction", false,-1, 31,0);
    tracep->declBit(c+44,"if_ebreak", false,-1);
    tracep->declBit(c+45,"if_uart", false,-1);
    tracep->declBit(c+46,"if_flush", false,-1);
    tracep->declBit(c+822,"if_ready_go", false,-1);
    tracep->declBit(c+47,"if_allowin", false,-1);
    tracep->declBit(c+42,"if_to_id_valid", false,-1);
    tracep->declQuad(c+823,"reg_wdata", false,-1, 63,0);
    tracep->declBus(c+48,"id_branch_result", false,-1, 31,0);
    tracep->declBit(c+49,"id_branch_taken", false,-1);
    tracep->declBus(c+50,"id_rs1", false,-1, 4,0);
    tracep->declBus(c+51,"id_rs2", false,-1, 4,0);
    tracep->declBit(c+825,"id_jalr", false,-1);
    tracep->declBit(c+52,"id_flush", false,-1);
    tracep->declBit(c+53,"id_allowin", false,-1);
    tracep->declQuad(c+54,"id_regdata1", false,-1, 63,0);
    tracep->declQuad(c+56,"id_regdata2", false,-1, 63,0);
    tracep->declBit(c+58,"id_to_ex_valid", false,-1);
    tracep->declBit(c+59,"id_ecall", false,-1);
    tracep->declBit(c+60,"id_mret", false,-1);
    tracep->declBit(c+61,"load_branch", false,-1);
    tracep->declBus(c+62,"ex_pc", false,-1, 31,0);
    tracep->declBus(c+63,"ex_memop", false,-1, 2,0);
    tracep->declBus(c+64,"ex_wmask", false,-1, 7,0);
    tracep->declBit(c+65,"ex_flush", false,-1);
    tracep->declBit(c+66,"ex_allowin", false,-1);
    tracep->declBit(c+67,"ex_ready_go", false,-1);
    tracep->declBit(c+68,"ex_to_mem_valid", false,-1);
    tracep->declBit(c+69,"ex_ecall", false,-1);
    tracep->declBit(c+70,"ex_mret", false,-1);
    tracep->declBit(c+71,"ex_mmio", false,-1);
    tracep->declBit(c+72,"ex_fencei", false,-1);
    tracep->declBit(c+73,"ecallmret_on", false,-1);
    tracep->declBit(c+74,"dcache_pipelinehit", false,-1);
    tracep->declBit(c+75,"mem_ecall", false,-1);
    tracep->declBit(c+822,"mem_allowin", false,-1);
    tracep->declBit(c+76,"mem_to_wb_valid", false,-1);
    tracep->declBit(c+77,"mem_flush", false,-1);
    tracep->declQuad(c+78,"mem_alu_output", false,-1, 63,0);
    tracep->declBit(c+80,"mem_memread", false,-1);
    tracep->declQuad(c+81,"mem_final_rdata", false,-1, 63,0);
    tracep->declQuad(c+83,"mem_doubly_aligned_data", false,-1, 63,0);
    tracep->declQuad(c+85,"mem_diff_addr", false,-1, 63,0);
    tracep->declQuad(c+87,"mem_diff_data", false,-1, 63,0);
    tracep->declBus(c+89,"mem_pc", false,-1, 31,0);
    tracep->declArray(c+90,"if_to_id_bus", false,-1, 64,0);
    tracep->declArray(c+93,"id_to_ex_bus", false,-1, 309,0);
    tracep->declArray(c+103,"ex_to_mem_bus", false,-1, 295,0);
    tracep->declArray(c+113,"mem_to_wb_bus", false,-1, 355,0);
    tracep->declQuad(c+125,"d_req_addr", false,-1, 63,0);
    tracep->declBus(c+127,"d_req_strb", false,-1, 7,0);
    tracep->declArray(c+128,"d_req_data", false,-1, 127,0);
    tracep->declBit(c+132,"d_req_wen", false,-1);
    tracep->declBit(c+133,"d_req_valid", false,-1);
    tracep->declBit(c+134,"d_res_valid", false,-1);
    tracep->declArray(c+135,"d_mrdata", false,-1, 127,0);
    tracep->declQuad(c+139,"i_req_addr", false,-1, 63,0);
    tracep->declBit(c+141,"i_req_valid", false,-1);
    tracep->declBit(c+142,"i_res_valid", false,-1);
    tracep->declArray(c+143,"i_mrdata", false,-1, 127,0);
    tracep->declBit(c+822,"wb_allowin", false,-1);
    tracep->declQuad(c+147,"wb_reg_wdata", false,-1, 63,0);
    tracep->declQuad(c+149,"wb_csrwdata", false,-1, 63,0);
    tracep->declQuad(c+151,"wb_csrrdata", false,-1, 63,0);
    tracep->declBit(c+153,"wb_mret", false,-1);
    tracep->declBit(c+154,"wb_csr_we", false,-1);
    tracep->declBus(c+155,"wb_rd", false,-1, 4,0);
    tracep->declBit(c+156,"wb_reg_wen", false,-1);
    tracep->declBit(c+157,"wb_ebreak", false,-1);
    tracep->declBit(c+158,"wb_ecall", false,-1);
    tracep->declBit(c+159,"wb_timer_int", false,-1);
    tracep->declBit(c+160,"ecall_stuck", false,-1);
    tracep->declBit(c+161,"mret_stuck", false,-1);
    tracep->declBus(c+162,"dcache_state", false,-1, 2,0);
    tracep->declBus(c+163,"icache_state", false,-1, 2,0);
    tracep->declBus(c+164,"next_pc", false,-1, 31,0);
    tracep->declBit(c+165,"icache_pipieline_hit", false,-1);
    tracep->declBus(c+164,"icache_addr", false,-1, 31,0);
    tracep->declBit(c+166,"icache_valid", false,-1);
    tracep->declBit(c+167,"preif_valid", false,-1);
    tracep->declBit(c+168,"preif_ready_go_reg", false,-1);
    tracep->declBit(c+169,"preif_ready_go", false,-1);
    tracep->declBit(c+170,"preif_allowin", false,-1);
    tracep->declBit(c+826,"preif_timer_int", false,-1);
    tracep->declQuad(c+171,"icache_data", false,-1, 63,0);
    tracep->declBit(c+173,"timer_blocked", false,-1);
    tracep->declBit(c+826,"timer_int", false,-1);
    tracep->declBit(c+174,"if_timer_blocked", false,-1);
    tracep->declBit(c+175,"if_timer_int_tmp", false,-1);
    tracep->declBit(c+175,"if_timer_int", false,-1);
    tracep->declBus(c+176,"next_pc_reg", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+177+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBus(c+241,"if_instruction_reg", false,-1, 31,0);
    tracep->declBit(c+242,"if_instruction_blocked", false,-1);
    tracep->declBus(c+827,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+828,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+829,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+830,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+831,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+832,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+833,"TYPE_N", false,-1, 2,0);
    tracep->pushNamePrefix("axi ");
    tracep->declBus(c+816,"RW_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+816,"RW_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+816,"AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+816,"AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+817,"AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+818,"AXI_STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+819,"AXI_USER_WIDTH", false,-1, 31,0);
    tracep->declBit(c+733,"clk", false,-1);
    tracep->declBit(c+734,"rst", false,-1);
    tracep->declQuad(c+125,"d_req_addr", false,-1, 63,0);
    tracep->declBus(c+127,"d_req_strb", false,-1, 7,0);
    tracep->declArray(c+128,"d_req_data", false,-1, 127,0);
    tracep->declBit(c+132,"d_req_wen", false,-1);
    tracep->declBit(c+133,"d_req_valid", false,-1);
    tracep->declBit(c+134,"d_res_valid", false,-1);
    tracep->declArray(c+135,"d_mrdata", false,-1, 127,0);
    tracep->declQuad(c+139,"i_req_addr", false,-1, 63,0);
    tracep->declBit(c+141,"i_req_valid", false,-1);
    tracep->declBit(c+142,"i_res_valid", false,-1);
    tracep->declArray(c+143,"i_mrdata", false,-1, 127,0);
    tracep->declBit(c+761,"axi_aw_ready_i", false,-1);
    tracep->declBit(c+762,"axi_aw_valid_o", false,-1);
    tracep->declQuad(c+763,"axi_aw_addr_o", false,-1, 63,0);
    tracep->declBus(c+765,"axi_aw_prot_o", false,-1, 2,0);
    tracep->declBus(c+766,"axi_aw_id_o", false,-1, 3,0);
    tracep->declBus(c+767,"axi_aw_user_o", false,-1, 0,0);
    tracep->declBus(c+768,"axi_aw_len_o", false,-1, 7,0);
    tracep->declBus(c+769,"axi_aw_size_o", false,-1, 2,0);
    tracep->declBus(c+770,"axi_aw_burst_o", false,-1, 1,0);
    tracep->declBit(c+771,"axi_aw_lock_o", false,-1);
    tracep->declBus(c+772,"axi_aw_cache_o", false,-1, 3,0);
    tracep->declBus(c+773,"axi_aw_qos_o", false,-1, 3,0);
    tracep->declBus(c+774,"axi_aw_region_o", false,-1, 3,0);
    tracep->declBit(c+775,"axi_w_ready_i", false,-1);
    tracep->declBit(c+776,"axi_w_valid_o", false,-1);
    tracep->declQuad(c+777,"axi_w_data_o", false,-1, 63,0);
    tracep->declBus(c+779,"axi_w_strb_o", false,-1, 7,0);
    tracep->declBit(c+780,"axi_w_last_o", false,-1);
    tracep->declBus(c+781,"axi_w_user_o", false,-1, 0,0);
    tracep->declBit(c+782,"axi_b_ready_o", false,-1);
    tracep->declBit(c+783,"axi_b_valid_i", false,-1);
    tracep->declBus(c+784,"axi_b_resp_i", false,-1, 1,0);
    tracep->declBus(c+785,"axi_b_id_i", false,-1, 3,0);
    tracep->declBus(c+786,"axi_b_user_i", false,-1, 0,0);
    tracep->declBit(c+787,"axi_ar_ready_i", false,-1);
    tracep->declBit(c+788,"axi_ar_valid_o", false,-1);
    tracep->declQuad(c+789,"axi_ar_addr_o", false,-1, 63,0);
    tracep->declBus(c+791,"axi_ar_prot_o", false,-1, 2,0);
    tracep->declBus(c+792,"axi_ar_id_o", false,-1, 3,0);
    tracep->declBus(c+793,"axi_ar_user_o", false,-1, 0,0);
    tracep->declBus(c+794,"axi_ar_len_o", false,-1, 7,0);
    tracep->declBus(c+795,"axi_ar_size_o", false,-1, 2,0);
    tracep->declBus(c+796,"axi_ar_burst_o", false,-1, 1,0);
    tracep->declBit(c+797,"axi_ar_lock_o", false,-1);
    tracep->declBus(c+798,"axi_ar_cache_o", false,-1, 3,0);
    tracep->declBus(c+799,"axi_ar_qos_o", false,-1, 3,0);
    tracep->declBus(c+800,"axi_ar_region_o", false,-1, 3,0);
    tracep->declBit(c+801,"axi_r_ready_o", false,-1);
    tracep->declBit(c+802,"axi_r_valid_i", false,-1);
    tracep->declBus(c+803,"axi_r_resp_i", false,-1, 1,0);
    tracep->declQuad(c+804,"axi_r_data_i", false,-1, 63,0);
    tracep->declBit(c+806,"axi_r_last_i", false,-1);
    tracep->declBus(c+807,"axi_r_id_i", false,-1, 3,0);
    tracep->declBus(c+808,"axi_r_user_i", false,-1, 0,0);
    tracep->declBus(c+827,"W_IDLE", false,-1, 2,0);
    tracep->declBus(c+828,"W_ADDR", false,-1, 2,0);
    tracep->declBus(c+829,"W_WRITE", false,-1, 2,0);
    tracep->declBus(c+832,"W_WRITE_WAIT", false,-1, 2,0);
    tracep->declBus(c+830,"W_RESP", false,-1, 2,0);
    tracep->declBus(c+831,"W_DONE", false,-1, 2,0);
    tracep->declBus(c+827,"R_IDLE", false,-1, 2,0);
    tracep->declBus(c+828,"R_INST_ADDR", false,-1, 2,0);
    tracep->declBus(c+829,"R_INST_READ", false,-1, 2,0);
    tracep->declBus(c+830,"R_DATA_ADDR", false,-1, 2,0);
    tracep->declBus(c+831,"R_DATA_READ", false,-1, 2,0);
    tracep->declBus(c+832,"R_INST_DONE", false,-1, 2,0);
    tracep->declBus(c+833,"R_DATA_DONE", false,-1, 2,0);
    tracep->declBit(c+822,"r_trans", false,-1);
    tracep->declBit(c+243,"w_valid", false,-1);
    tracep->declBit(c+244,"r_valid", false,-1);
    tracep->declBit(c+245,"data_read", false,-1);
    tracep->declBit(c+141,"inst_read", false,-1);
    tracep->declBit(c+809,"aw_hs", false,-1);
    tracep->declBit(c+810,"ar_hs", false,-1);
    tracep->declBit(c+729,"w_hs", false,-1);
    tracep->declBit(c+730,"b_hs", false,-1);
    tracep->declBit(c+731,"r_hs", false,-1);
    tracep->declBit(c+729,"w_done_first", false,-1);
    tracep->declBit(c+811,"w_done_last", false,-1);
    tracep->declBit(c+732,"r_done", false,-1);
    tracep->declBit(c+812,"trans_done", false,-1);
    tracep->declQuad(c+246,"r_addr", false,-1, 63,0);
    tracep->declBus(c+248,"w_state", false,-1, 2,0);
    tracep->declBus(c+249,"r_state", false,-1, 2,0);
    tracep->declBit(c+250,"w_state_addr", false,-1);
    tracep->declBit(c+822,"w_state_resp", false,-1);
    tracep->declBit(c+251,"w_state_write", false,-1);
    tracep->declBit(c+252,"r_state_addr", false,-1);
    tracep->declBit(c+253,"r_state_read", false,-1);
    tracep->declBus(c+834,"AXI_SIZE", false,-1, 31,0);
    tracep->declBus(c+835,"axi_id", false,-1, 3,0);
    tracep->declBus(c+826,"axi_user", false,-1, 0,0);
    tracep->declBus(c+836,"axi_wlen", false,-1, 7,0);
    tracep->declBus(c+836,"axi_rlen", false,-1, 7,0);
    tracep->declBus(c+830,"axi_size", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache ");
    tracep->declBit(c+733,"clk", false,-1);
    tracep->declBit(c+734,"rst", false,-1);
    tracep->declBit(c+72,"fencei", false,-1);
    tracep->declQuad(c+254,"input_addr", false,-1, 63,0);
    tracep->declQuad(c+256,"input_wdata", false,-1, 63,0);
    tracep->declBit(c+258,"input_memwrite", false,-1);
    tracep->declBit(c+259,"input_memread", false,-1);
    tracep->declBit(c+260,"input_valid", false,-1);
    tracep->declBus(c+261,"input_size", false,-1, 1,0);
    tracep->declBus(c+64,"input_strb", false,-1, 7,0);
    tracep->declQuad(c+83,"output_data", false,-1, 63,0);
    tracep->declBit(c+74,"cache_pipelinehit", false,-1);
    tracep->declBus(c+162,"cache_state", false,-1, 2,0);
    tracep->declQuad(c+87,"diff_data", false,-1, 63,0);
    tracep->declQuad(c+85,"diff_addr", false,-1, 63,0);
    tracep->declQuad(c+125,"axi_req_addr", false,-1, 63,0);
    tracep->declBus(c+127,"axi_req_strb", false,-1, 7,0);
    tracep->declArray(c+128,"axi_req_data", false,-1, 127,0);
    tracep->declBit(c+132,"axi_req_wen", false,-1);
    tracep->declBit(c+133,"axi_req_valid", false,-1);
    tracep->declBit(c+71,"mmio", false,-1);
    tracep->declBit(c+134,"axi_res_valid", false,-1);
    tracep->declArray(c+135,"axi_mrdata", false,-1, 127,0);
    tracep->declBus(c+262,"input_size_reg", false,-1, 1,0);
    tracep->declBus(c+263,"input_offset_reg", false,-1, 3,0);
    tracep->declBit(c+264,"cache_way0hit_reg", false,-1);
    tracep->declBit(c+265,"cache_way1hit_reg", false,-1);
    tracep->declBus(c+837,"mem_addr", false,-1, 31,0);
    tracep->declBit(c+838,"mem_wen", false,-1);
    tracep->declBus(c+827,"IDLE", false,-1, 2,0);
    tracep->declBus(c+828,"LOOKUP", false,-1, 2,0);
    tracep->declBus(c+829,"MISS", false,-1, 2,0);
    tracep->declBus(c+831,"REFILL", false,-1, 2,0);
    tracep->declBus(c+832,"MISS_STALL", false,-1, 2,0);
    tracep->declBus(c+833,"REFILL_STALL", false,-1, 2,0);
    tracep->declBus(c+830,"FENCEI", false,-1, 2,0);
    tracep->declBus(c+839,"FENCEI_STALL", false,-1, 2,0);
    tracep->declBus(c+840,"SETS", false,-1, 31,0);
    tracep->declBus(c+266,"input_tag", false,-1, 20,0);
    tracep->declBus(c+267,"input_index", false,-1, 6,0);
    tracep->declBus(c+268,"input_offset", false,-1, 3,0);
    tracep->declBus(c+269,"cache_index_reg", false,-1, 6,0);
    tracep->declBus(c+270,"cache_offset_reg", false,-1, 3,0);
    tracep->declArray(c+271,"cache_strb", false,-1, 127,0);
    tracep->declBit(c+275,"cache_wen_way0", false,-1);
    tracep->declBit(c+276,"cache_wen_way1", false,-1);
    tracep->declArray(c+277,"cache_wdata", false,-1, 127,0);
    tracep->declBit(c+281,"cache_miss", false,-1);
    tracep->declBus(c+282,"fencei_cnt", false,-1, 6,0);
    tracep->declBit(c+283,"fencei_ok", false,-1);
    tracep->declBit(c+284,"cache_wen_way0_reg", false,-1);
    tracep->declBit(c+285,"cache_wen_way1_reg", false,-1);
    tracep->declQuad(c+286,"ex_cache_strb", false,-1, 63,0);
    tracep->declArray(c+288,"cache_rdata_way0", false,-1, 127,0);
    tracep->declArray(c+292,"cache_rdata_way1", false,-1, 127,0);
    tracep->declBit(c+296,"cache_way0hit", false,-1);
    tracep->declBit(c+297,"cache_way1hit", false,-1);
    tracep->declBit(c+298,"cache_way0dirty", false,-1);
    tracep->declBit(c+299,"cache_way1dirty", false,-1);
    tracep->declBit(c+300,"cache_way0valid", false,-1);
    tracep->declBit(c+301,"cache_way1valid", false,-1);
    tracep->declQuad(c+302,"output_data_way0", false,-1, 63,0);
    tracep->declQuad(c+304,"output_data_way1", false,-1, 63,0);
    tracep->declQuad(c+306,"ex_cache_wdata", false,-1, 63,0);
    tracep->declBit(c+308,"cache_raw_way0", false,-1);
    tracep->declBit(c+309,"cache_raw_way1", false,-1);
    tracep->declBit(c+310,"cache_raw", false,-1);
    tracep->declBit(c+311,"mmio_reg", false,-1);
    tracep->declQuad(c+312,"mmio_rdata", false,-1, 63,0);
    tracep->declQuad(c+314,"mmio_rdata_reg", false,-1, 63,0);
    tracep->declBit(c+316,"cache_way0fencev", false,-1);
    tracep->declBit(c+317,"cache_way0fenced", false,-1);
    tracep->declBit(c+318,"cache_way1fencev", false,-1);
    tracep->declBit(c+319,"cache_way1fenced", false,-1);
    tracep->declBit(c+320,"cnt", false,-1);
    tracep->pushNamePrefix("dcache_way1 ");
    tracep->declBus(c+840,"Bits", false,-1, 31,0);
    tracep->declBus(c+840,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+841,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+840,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+288,"Q", false,-1, 127,0);
    tracep->declBit(c+733,"CLK", false,-1);
    tracep->declBit(c+321,"CEN", false,-1);
    tracep->declBit(c+275,"WEN", false,-1);
    tracep->declArray(c+271,"BWEN", false,-1, 127,0);
    tracep->declBus(c+322,"A", false,-1, 6,0);
    tracep->declArray(c+277,"D", false,-1, 127,0);
    tracep->declBit(c+321,"cen", false,-1);
    tracep->declBit(c+275,"wen", false,-1);
    tracep->declArray(c+271,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache_way2 ");
    tracep->declBus(c+840,"Bits", false,-1, 31,0);
    tracep->declBus(c+840,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+841,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+840,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+292,"Q", false,-1, 127,0);
    tracep->declBit(c+733,"CLK", false,-1);
    tracep->declBit(c+321,"CEN", false,-1);
    tracep->declBit(c+276,"WEN", false,-1);
    tracep->declArray(c+271,"BWEN", false,-1, 127,0);
    tracep->declBus(c+323,"A", false,-1, 6,0);
    tracep->declArray(c+277,"D", false,-1, 127,0);
    tracep->declBit(c+321,"cen", false,-1);
    tracep->declBit(c+276,"wen", false,-1);
    tracep->declArray(c+271,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+324,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dec ");
    tracep->declBit(c+733,"clk", false,-1);
    tracep->declBit(c+734,"rst", false,-1);
    tracep->declBit(c+53,"id_allowin", false,-1);
    tracep->declBit(c+66,"ex_allowin", false,-1);
    tracep->declBit(c+42,"if_to_id_valid", false,-1);
    tracep->declBit(c+58,"id_to_ex_valid", false,-1);
    tracep->declArray(c+93,"id_to_ex_bus", false,-1, 309,0);
    tracep->declArray(c+90,"if_to_id_bus", false,-1, 64,0);
    tracep->declBit(c+175,"if_timer_int", false,-1);
    tracep->declBus(c+50,"id_rs1", false,-1, 4,0);
    tracep->declBus(c+51,"id_rs2", false,-1, 4,0);
    tracep->declQuad(c+54,"id_regdata1_tmp", false,-1, 63,0);
    tracep->declQuad(c+56,"id_regdata2_tmp", false,-1, 63,0);
    tracep->declBus(c+48,"id_branch_result", false,-1, 31,0);
    tracep->declBit(c+49,"id_branch_taken", false,-1);
    tracep->declBus(c+325,"ex_rd", false,-1, 4,0);
    tracep->declBus(c+326,"mem_rd", false,-1, 4,0);
    tracep->declBus(c+155,"wb_rd", false,-1, 4,0);
    tracep->declQuad(c+254,"ex_alu_output", false,-1, 63,0);
    tracep->declQuad(c+78,"mem_alu_output", false,-1, 63,0);
    tracep->declQuad(c+147,"wb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+259,"ex_memread", false,-1);
    tracep->declBit(c+80,"mem_memread", false,-1);
    tracep->declQuad(c+81,"mem_final_rdata", false,-1, 63,0);
    tracep->declBit(c+327,"ex_reg_wen", false,-1);
    tracep->declBit(c+328,"mem_reg_wen", false,-1);
    tracep->declBit(c+156,"wb_reg_wen", false,-1);
    tracep->declBit(c+329,"mem_mret", false,-1);
    tracep->declBit(c+330,"ex_csr_we", false,-1);
    tracep->declBit(c+331,"mem_csr_we", false,-1);
    tracep->declBit(c+154,"wb_csr_we", false,-1);
    tracep->declBus(c+62,"ex_pc", false,-1, 31,0);
    tracep->declBus(c+813,"mepc_low", false,-1, 31,0);
    tracep->declBit(c+170,"preif_allowin", false,-1);
    tracep->declBit(c+46,"if_flush", false,-1);
    tracep->declBus(c+241,"if_instruction_reg", false,-1, 31,0);
    tracep->declBit(c+242,"if_instruction_blocked", false,-1);
    tracep->declBit(c+52,"id_flush", false,-1);
    tracep->declBit(c+59,"id_ecall", false,-1);
    tracep->declBit(c+60,"id_mret", false,-1);
    tracep->declBit(c+61,"load_branch", false,-1);
    tracep->declBit(c+73,"ecallmret_on", false,-1);
    tracep->declBit(c+69,"ex_ecall", false,-1);
    tracep->declBit(c+70,"ex_mret", false,-1);
    tracep->declBus(c+89,"mem_pc", false,-1, 31,0);
    tracep->declBit(c+75,"mem_ecall", false,-1);
    tracep->declBit(c+158,"wb_ecall", false,-1);
    tracep->declBit(c+153,"wb_mret", false,-1);
    tracep->declBus(c+737,"wb_pc", false,-1, 31,0);
    tracep->declBus(c+163,"icache_state", false,-1, 2,0);
    tracep->declBus(c+827,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+828,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+829,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+830,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+831,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+832,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+833,"TYPE_N", false,-1, 2,0);
    tracep->declBit(c+332,"beq", false,-1);
    tracep->declBit(c+333,"bne", false,-1);
    tracep->declBit(c+334,"blt", false,-1);
    tracep->declBit(c+335,"bltu", false,-1);
    tracep->declBit(c+336,"bge", false,-1);
    tracep->declBit(c+337,"bgeu", false,-1);
    tracep->declBit(c+338,"btype_taken", false,-1);
    tracep->declBit(c+339,"imm_src1", false,-1);
    tracep->declBit(c+340,"imm_src2", false,-1);
    tracep->declBus(c+341,"id_aluop", false,-1, 5,0);
    tracep->declBus(c+342,"id_memop", false,-1, 2,0);
    tracep->declBus(c+343,"id_rd", false,-1, 4,0);
    tracep->declBit(c+344,"id_reg_wen", false,-1);
    tracep->declBit(c+345,"id_memwrite", false,-1);
    tracep->declBit(c+346,"id_memread", false,-1);
    tracep->declBus(c+347,"id_inst_type", false,-1, 2,0);
    tracep->declQuad(c+348,"id_imm", false,-1, 63,0);
    tracep->declBit(c+350,"id_jalr", false,-1);
    tracep->declQuad(c+351,"id_alu_input1", false,-1, 63,0);
    tracep->declQuad(c+353,"id_alu_input2", false,-1, 63,0);
    tracep->declQuad(c+355,"id_regdata1_final", false,-1, 63,0);
    tracep->declQuad(c+357,"id_regdata2_final", false,-1, 63,0);
    tracep->declQuad(c+357,"id_mem_wdata", false,-1, 63,0);
    tracep->declBit(c+359,"id_ebreak", false,-1);
    tracep->declBit(c+360,"exid_raw_hazard1", false,-1);
    tracep->declBit(c+361,"exid_raw_hazard2", false,-1);
    tracep->declBit(c+362,"memid_raw_hazard1", false,-1);
    tracep->declBit(c+363,"memid_raw_hazard2", false,-1);
    tracep->declBit(c+814,"wbid_raw_hazard1", false,-1);
    tracep->declBit(c+815,"wbid_raw_hazard2", false,-1);
    tracep->declBit(c+364,"load_use_hazard1", false,-1);
    tracep->declBit(c+365,"load_use_hazard2", false,-1);
    tracep->declBit(c+366,"mem_load_use_hazard1_tmp", false,-1);
    tracep->declBit(c+367,"mem_load_use_hazard2_tmp", false,-1);
    tracep->declBit(c+368,"mem_load_use_hazard1", false,-1);
    tracep->declBit(c+369,"mem_load_use_hazard2", false,-1);
    tracep->declBit(c+370,"wb_load_use_hazard1_tmp", false,-1);
    tracep->declBit(c+371,"wb_load_use_hazard2_tmp", false,-1);
    tracep->declBit(c+370,"wb_load_use_hazard1", false,-1);
    tracep->declBit(c+371,"wb_load_use_hazard2", false,-1);
    tracep->declBit(c+372,"id_ready_go", false,-1);
    tracep->declBit(c+373,"id_valid", false,-1);
    tracep->declArray(c+374,"if_to_id_bus_reg", false,-1, 64,0);
    tracep->declBus(c+377,"id_pc", false,-1, 31,0);
    tracep->declBus(c+378,"id_instruction", false,-1, 31,0);
    tracep->declBit(c+379,"id_csrrw", false,-1);
    tracep->declBit(c+380,"id_csrrs", false,-1);
    tracep->declBit(c+381,"id_csrrc", false,-1);
    tracep->declBit(c+382,"id_csrrwi", false,-1);
    tracep->declBit(c+383,"id_csrrsi", false,-1);
    tracep->declBit(c+384,"id_csrrci", false,-1);
    tracep->declBit(c+385,"id_timer_int_tmp", false,-1);
    tracep->declBit(c+386,"id_jalr_stuck", false,-1);
    tracep->declBit(c+387,"id_jalr_stuck_reg", false,-1);
    tracep->declBus(c+388,"stuck_jalr_result", false,-1, 31,0);
    tracep->declBit(c+826,"timer_int", false,-1);
    tracep->declBit(c+385,"id_timer_int", false,-1);
    tracep->declBit(c+389,"id_fencei", false,-1);
    tracep->pushNamePrefix("inst_mux ");
    tracep->declBus(c+842,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+841,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+834,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+347,"out", false,-1, 2,0);
    tracep->declBus(c+390,"key", false,-1, 6,0);
    tracep->declBus(c+827,"default_out", false,-1, 2,0);
    tracep->declArray(c+843,"lut", false,-1, 129,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+842,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+841,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+834,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+819,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+347,"out", false,-1, 2,0);
    tracep->declBus(c+390,"key", false,-1, 6,0);
    tracep->declBus(c+827,"default_out", false,-1, 2,0);
    tracep->declArray(c+843,"lut", false,-1, 129,0);
    tracep->declBus(c+848,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 13; ++i) {
        tracep->declBus(c+1+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 13; ++i) {
        tracep->declBus(c+14+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 13; ++i) {
        tracep->declBus(c+27+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+391,"lut_out", false,-1, 2,0);
    tracep->declBit(c+392,"hit", false,-1);
    tracep->declBus(c+849,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("exe ");
    tracep->declBit(c+733,"clk", false,-1);
    tracep->declBit(c+734,"rst", false,-1);
    tracep->declBit(c+66,"ex_allowin", false,-1);
    tracep->declBit(c+822,"mem_allowin", false,-1);
    tracep->declBit(c+58,"id_to_ex_valid", false,-1);
    tracep->declBit(c+68,"ex_to_mem_valid", false,-1);
    tracep->declArray(c+93,"id_to_ex_bus", false,-1, 309,0);
    tracep->declArray(c+103,"ex_to_mem_bus", false,-1, 295,0);
    tracep->declBit(c+329,"mem_mret", false,-1);
    tracep->declBit(c+52,"id_flush", false,-1);
    tracep->declBit(c+74,"cache_pipelinehit", false,-1);
    tracep->declBus(c+162,"cache_state", false,-1, 2,0);
    tracep->declBit(c+65,"ex_flush", false,-1);
    tracep->declBus(c+62,"ex_pc", false,-1, 31,0);
    tracep->declBit(c+69,"ex_ecall", false,-1);
    tracep->declBit(c+70,"ex_mret", false,-1);
    tracep->declBit(c+67,"ex_ready_go", false,-1);
    tracep->declBit(c+72,"ex_fencei", false,-1);
    tracep->declBit(c+75,"mem_ecall", false,-1);
    tracep->declQuad(c+393,"rtype_calc_result", false,-1, 63,0);
    tracep->declQuad(c+395,"itype_calc_result", false,-1, 63,0);
    tracep->declQuad(c+397,"rtype_alu_op", false,-1, 63,0);
    tracep->declBus(c+399,"itype_alu_op", false,-1, 31,0);
    tracep->declBus(c+400,"addw_result", false,-1, 31,0);
    tracep->declBus(c+401,"subw_result", false,-1, 31,0);
    tracep->declBus(c+402,"mulw_result", false,-1, 31,0);
    tracep->declBus(c+403,"divw_result", false,-1, 31,0);
    tracep->declBus(c+403,"divuw_result", false,-1, 31,0);
    tracep->declBus(c+404,"remw_result", false,-1, 31,0);
    tracep->declBus(c+404,"remuw_result", false,-1, 31,0);
    tracep->declQuad(c+405,"sext_addw_result", false,-1, 63,0);
    tracep->declQuad(c+407,"sext_subw_result", false,-1, 63,0);
    tracep->declQuad(c+409,"sext_mulw_result", false,-1, 63,0);
    tracep->declQuad(c+411,"sext_divw_result", false,-1, 63,0);
    tracep->declQuad(c+411,"sext_divuw_result", false,-1, 63,0);
    tracep->declQuad(c+413,"sext_remw_result", false,-1, 63,0);
    tracep->declQuad(c+413,"sext_remuw_result", false,-1, 63,0);
    tracep->declBus(c+415,"src1_sllw", false,-1, 31,0);
    tracep->declBus(c+416,"src1_srlw", false,-1, 31,0);
    tracep->declBus(c+417,"sft_input2", false,-1, 5,0);
    tracep->declQuad(c+418,"sra_mask_64", false,-1, 63,0);
    tracep->declQuad(c+420,"sraw_mask_32", false,-1, 63,0);
    tracep->declQuad(c+422,"sext_src1_sraw", false,-1, 63,0);
    tracep->declQuad(c+424,"sext_src1_sllw", false,-1, 63,0);
    tracep->declQuad(c+426,"sext_src1_srlw", false,-1, 63,0);
    tracep->declQuad(c+428,"ex_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+430,"ex_aluop", false,-1, 5,0);
    tracep->declBus(c+431,"ex_memop", false,-1, 2,0);
    tracep->declBit(c+432,"ex_memwrite", false,-1);
    tracep->declBit(c+433,"ex_memread", false,-1);
    tracep->declBus(c+434,"ex_rd", false,-1, 4,0);
    tracep->declBus(c+435,"ex_inst_type", false,-1, 2,0);
    tracep->declBit(c+436,"ex_jalr", false,-1);
    tracep->declQuad(c+437,"ex_alu_input1", false,-1, 63,0);
    tracep->declQuad(c+439,"ex_alu_input2", false,-1, 63,0);
    tracep->declBus(c+441,"ex_rs1", false,-1, 4,0);
    tracep->declBus(c+442,"ex_rs2", false,-1, 4,0);
    tracep->declBit(c+443,"ex_reg_wen", false,-1);
    tracep->declBus(c+444,"ex_instruction", false,-1, 31,0);
    tracep->declBit(c+445,"mul_type", false,-1);
    tracep->declBit(c+446,"div_type", false,-1);
    tracep->declBit(c+447,"div_sign", false,-1);
    tracep->declBit(c+448,"mul_ok", false,-1);
    tracep->declBit(c+449,"sign1", false,-1);
    tracep->declBit(c+450,"sign2", false,-1);
    tracep->declQuad(c+451,"mul_res_high", false,-1, 63,0);
    tracep->declQuad(c+453,"mul_res_low", false,-1, 63,0);
    tracep->declBit(c+455,"ex_valid", false,-1);
    tracep->declArray(c+456,"id_to_ex_bus_reg", false,-1, 309,0);
    tracep->declQuad(c+466,"ex_alu_output", false,-1, 63,0);
    tracep->declBit(c+468,"div_ready", false,-1);
    tracep->declBus(c+469,"div_state", false,-1, 1,0);
    tracep->declQuad(c+470,"quo", false,-1, 63,0);
    tracep->declQuad(c+472,"rem", false,-1, 63,0);
    tracep->declBit(c+474,"ex_csrrw", false,-1);
    tracep->declBit(c+475,"ex_csrrs", false,-1);
    tracep->declBit(c+476,"ex_csrrc", false,-1);
    tracep->declBit(c+477,"ex_csrrwi", false,-1);
    tracep->declBit(c+478,"ex_csrrsi", false,-1);
    tracep->declBit(c+479,"ex_csrrci", false,-1);
    tracep->declBit(c+480,"ex_csr_we", false,-1);
    tracep->declBus(c+481,"ex_des_csr", false,-1, 11,0);
    tracep->declBit(c+482,"ex_ebreak", false,-1);
    tracep->declBit(c+483,"ex_timer_int", false,-1);
    tracep->declBit(c+484,"ex_excptions", false,-1);
    tracep->declBit(c+485,"cache_readygo", false,-1);
    tracep->declBit(c+486,"mul_stuck", false,-1);
    tracep->declBit(c+487,"div_stuck", false,-1);
    tracep->declBus(c+850,"op_add", false,-1, 5,0);
    tracep->declBus(c+851,"op_mul", false,-1, 5,0);
    tracep->declBus(c+852,"op_sub", false,-1, 5,0);
    tracep->declBus(c+853,"op_addw", false,-1, 5,0);
    tracep->declBus(c+854,"op_or", false,-1, 5,0);
    tracep->declBus(c+855,"op_xor", false,-1, 5,0);
    tracep->declBus(c+856,"op_sll", false,-1, 5,0);
    tracep->declBus(c+857,"op_slt", false,-1, 5,0);
    tracep->declBus(c+858,"op_sltu", false,-1, 5,0);
    tracep->declBus(c+859,"op_and", false,-1, 5,0);
    tracep->declBus(c+860,"op_div", false,-1, 5,0);
    tracep->declBus(c+861,"op_divu", false,-1, 5,0);
    tracep->declBus(c+862,"op_remu", false,-1, 5,0);
    tracep->declBus(c+863,"op_rem", false,-1, 5,0);
    tracep->declBus(c+864,"op_subw", false,-1, 5,0);
    tracep->declBus(c+865,"op_mulw", false,-1, 5,0);
    tracep->declBus(c+866,"op_sllw", false,-1, 5,0);
    tracep->declBus(c+867,"op_srl", false,-1, 5,0);
    tracep->declBus(c+868,"op_sra", false,-1, 5,0);
    tracep->declBus(c+869,"op_divw", false,-1, 5,0);
    tracep->declBus(c+870,"op_srlw", false,-1, 5,0);
    tracep->declBus(c+871,"op_sraw", false,-1, 5,0);
    tracep->declBus(c+872,"op_divuw", false,-1, 5,0);
    tracep->declBus(c+873,"op_remw", false,-1, 5,0);
    tracep->declBus(c+874,"op_remuw", false,-1, 5,0);
    tracep->declBus(c+875,"op_mulhu", false,-1, 5,0);
    tracep->declBus(c+876,"op_mulh", false,-1, 5,0);
    tracep->declBus(c+877,"op_mulhsu", false,-1, 5,0);
    tracep->declBus(c+878,"op_addi", false,-1, 4,0);
    tracep->declBus(c+879,"op_andi", false,-1, 4,0);
    tracep->declBus(c+880,"op_ori", false,-1, 4,0);
    tracep->declBus(c+881,"op_xori", false,-1, 4,0);
    tracep->declBus(c+882,"op_sltiu", false,-1, 4,0);
    tracep->declBus(c+883,"op_sri", false,-1, 4,0);
    tracep->declBus(c+884,"op_slli", false,-1, 4,0);
    tracep->declBus(c+885,"op_addiw", false,-1, 4,0);
    tracep->declBus(c+886,"op_slliw", false,-1, 4,0);
    tracep->declBus(c+887,"op_sriw", false,-1, 4,0);
    tracep->declBus(c+888,"op_slti", false,-1, 4,0);
    tracep->declQuad(c+488,"res_sra", false,-1, 63,0);
    tracep->declQuad(c+490,"res_srl", false,-1, 63,0);
    tracep->declQuad(c+492,"res_sll", false,-1, 63,0);
    tracep->declBus(c+827,"TYPE_I", false,-1, 2,0);
    tracep->declBus(c+828,"TYPE_U", false,-1, 2,0);
    tracep->declBus(c+829,"TYPE_S", false,-1, 2,0);
    tracep->declBus(c+830,"TYPE_J", false,-1, 2,0);
    tracep->declBus(c+831,"TYPE_R", false,-1, 2,0);
    tracep->declBus(c+832,"TYPE_B", false,-1, 2,0);
    tracep->declBus(c+833,"TYPE_N", false,-1, 2,0);
    tracep->pushNamePrefix("dec_itype ");
    tracep->declBus(c+494,"in", false,-1, 4,0);
    tracep->declBus(c+399,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec_rtype ");
    tracep->declBus(c+495,"in", false,-1, 5,0);
    tracep->declQuad(c+397,"out", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+733,"clk", false,-1);
    tracep->declBit(c+734,"rst", false,-1);
    tracep->declQuad(c+496,"x", false,-1, 63,0);
    tracep->declQuad(c+498,"y", false,-1, 63,0);
    tracep->declBit(c+447,"s", false,-1);
    tracep->declBit(c+446,"is_div", false,-1);
    tracep->declBit(c+487,"div_stuck", false,-1);
    tracep->declBit(c+468,"ready", false,-1);
    tracep->declBus(c+469,"state", false,-1, 1,0);
    tracep->declQuad(c+470,"quo", false,-1, 63,0);
    tracep->declQuad(c+472,"rem", false,-1, 63,0);
    tracep->declBus(c+889,"IDLE", false,-1, 1,0);
    tracep->declBus(c+890,"DIV_ON", false,-1, 1,0);
    tracep->declBus(c+891,"DIV_ZERO", false,-1, 1,0);
    tracep->declBus(c+892,"DIV_END", false,-1, 1,0);
    tracep->declBus(c+500,"cnt", false,-1, 6,0);
    tracep->declArray(c+501,"dividend", false,-1, 128,0);
    tracep->declQuad(c+506,"divisor", false,-1, 63,0);
    tracep->declArray(c+508,"subres", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBit(c+733,"clk", false,-1);
    tracep->declBit(c+734,"rst", false,-1);
    tracep->declQuad(c+437,"x", false,-1, 63,0);
    tracep->declQuad(c+439,"y", false,-1, 63,0);
    tracep->declBit(c+449,"xs", false,-1);
    tracep->declBit(c+450,"ys", false,-1);
    tracep->declQuad(c+451,"high", false,-1, 63,0);
    tracep->declQuad(c+453,"low", false,-1, 63,0);
    tracep->declBit(c+445,"mul_type", false,-1);
    tracep->declBit(c+486,"mul_stuck", false,-1);
    tracep->declBit(c+448,"ready", false,-1);
    tracep->declArray(c+511,"x_ext", false,-1, 64,0);
    tracep->declArray(c+514,"y_ext", false,-1, 66,0);
    tracep->declArray(c+517,"res", false,-1, 127,0);
    tracep->declBus(c+521,"cnt", false,-1, 4,0);
    tracep->declArray(c+522,"multiplier", false,-1, 127,0);
    tracep->declArray(c+526,"multiplied", false,-1, 66,0);
    tracep->declBus(c+529,"mul_state", false,-1, 1,0);
    tracep->declBus(c+889,"IDLE", false,-1, 1,0);
    tracep->declBus(c+890,"MUL_ON", false,-1, 1,0);
    tracep->declBus(c+892,"MUL_QUIT", false,-1, 1,0);
    tracep->declBus(c+891,"MUL_OK", false,-1, 1,0);
    tracep->declArray(c+530,"x_comp", false,-1, 127,0);
    tracep->declArray(c+534,"z", false,-1, 127,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("icache ");
    tracep->declBit(c+733,"clk", false,-1);
    tracep->declBit(c+734,"rst", false,-1);
    tracep->declQuad(c+538,"input_addr", false,-1, 63,0);
    tracep->declQuad(c+893,"input_wdata", false,-1, 63,0);
    tracep->declBit(c+826,"input_memwrite", false,-1);
    tracep->declBit(c+822,"input_memread", false,-1);
    tracep->declBit(c+166,"input_valid", false,-1);
    tracep->declBit(c+61,"load_branch", false,-1);
    tracep->declBit(c+53,"id_allowin", false,-1);
    tracep->declQuad(c+171,"output_data", false,-1, 63,0);
    tracep->declBit(c+165,"cache_pipelinehit", false,-1);
    tracep->declBus(c+163,"cache_state", false,-1, 2,0);
    tracep->declBit(c+160,"ecall_stuck", false,-1);
    tracep->declBit(c+161,"mret_stuck", false,-1);
    tracep->declBit(c+158,"wb_ecall", false,-1);
    tracep->declBit(c+153,"wb_mret", false,-1);
    tracep->declQuad(c+139,"axi_req_addr", false,-1, 63,0);
    tracep->declBit(c+141,"axi_req_valid", false,-1);
    tracep->declBit(c+142,"axi_res_valid", false,-1);
    tracep->declArray(c+143,"axi_mrdata", false,-1, 127,0);
    tracep->declBus(c+540,"input_offset_reg", false,-1, 3,0);
    tracep->declBit(c+541,"cache_way0hit_reg", false,-1);
    tracep->declBit(c+542,"cache_way1hit_reg", false,-1);
    tracep->declBus(c+895,"mem_addr", false,-1, 31,0);
    tracep->declBit(c+896,"mem_wen", false,-1);
    tracep->declBus(c+897,"mem_strb", false,-1, 7,0);
    tracep->declBus(c+827,"IDLE", false,-1, 2,0);
    tracep->declBus(c+828,"LOOKUP", false,-1, 2,0);
    tracep->declBus(c+829,"MISS", false,-1, 2,0);
    tracep->declBus(c+830,"REPLACE", false,-1, 2,0);
    tracep->declBus(c+831,"REFILL", false,-1, 2,0);
    tracep->declBus(c+832,"MISS_STALL", false,-1, 2,0);
    tracep->declBus(c+833,"REFILL_STALL", false,-1, 2,0);
    tracep->declBus(c+839,"DUNJIAO", false,-1, 2,0);
    tracep->declBus(c+840,"SETS", false,-1, 31,0);
    tracep->declBus(c+543,"input_tag", false,-1, 20,0);
    tracep->declBus(c+544,"input_index", false,-1, 6,0);
    tracep->declBus(c+545,"input_offset", false,-1, 3,0);
    tracep->declBus(c+898,"cache_index_reg", false,-1, 6,0);
    tracep->declBit(c+546,"cache_wen_way0", false,-1);
    tracep->declBit(c+547,"cache_wen_way1", false,-1);
    tracep->declArray(c+548,"cache_strb", false,-1, 127,0);
    tracep->declArray(c+552,"cache_wdata", false,-1, 127,0);
    tracep->declArray(c+556,"cache_rdata_way0", false,-1, 127,0);
    tracep->declArray(c+560,"cache_rdata_way1", false,-1, 127,0);
    tracep->declBit(c+564,"cache_way0hit", false,-1);
    tracep->declBit(c+565,"cache_way1hit", false,-1);
    tracep->declBit(c+566,"cache_way0valid", false,-1);
    tracep->declBit(c+567,"cache_way1valid", false,-1);
    tracep->declQuad(c+568,"output_data_way0", false,-1, 63,0);
    tracep->declQuad(c+570,"output_data_way1", false,-1, 63,0);
    tracep->declQuad(c+899,"ex_cache_wdata", false,-1, 63,0);
    tracep->declBit(c+572,"cnt", false,-1);
    tracep->pushNamePrefix("dcache_way1 ");
    tracep->declBus(c+840,"Bits", false,-1, 31,0);
    tracep->declBus(c+840,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+841,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+840,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+556,"Q", false,-1, 127,0);
    tracep->declBit(c+733,"CLK", false,-1);
    tracep->declBit(c+822,"CEN", false,-1);
    tracep->declBit(c+546,"WEN", false,-1);
    tracep->declArray(c+548,"BWEN", false,-1, 127,0);
    tracep->declBus(c+544,"A", false,-1, 6,0);
    tracep->declArray(c+552,"D", false,-1, 127,0);
    tracep->declBit(c+822,"cen", false,-1);
    tracep->declBit(c+546,"wen", false,-1);
    tracep->declArray(c+548,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache_way2 ");
    tracep->declBus(c+840,"Bits", false,-1, 31,0);
    tracep->declBus(c+840,"Word_Depth", false,-1, 31,0);
    tracep->declBus(c+841,"Add_Width", false,-1, 31,0);
    tracep->declBus(c+840,"Wen_Width", false,-1, 31,0);
    tracep->declArray(c+560,"Q", false,-1, 127,0);
    tracep->declBit(c+733,"CLK", false,-1);
    tracep->declBit(c+822,"CEN", false,-1);
    tracep->declBit(c+547,"WEN", false,-1);
    tracep->declArray(c+548,"BWEN", false,-1, 127,0);
    tracep->declBus(c+544,"A", false,-1, 6,0);
    tracep->declArray(c+552,"D", false,-1, 127,0);
    tracep->declBit(c+822,"cen", false,-1);
    tracep->declBit(c+547,"wen", false,-1);
    tracep->declArray(c+548,"bwen", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+573,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+733,"clk", false,-1);
    tracep->declBit(c+734,"rst", false,-1);
    tracep->declBit(c+822,"mem_allowin", false,-1);
    tracep->declBit(c+822,"wb_allowin", false,-1);
    tracep->declBit(c+68,"ex_to_mem_valid", false,-1);
    tracep->declBit(c+76,"mem_to_wb_valid", false,-1);
    tracep->declArray(c+103,"ex_to_mem_bus", false,-1, 295,0);
    tracep->declBit(c+71,"ex_mmio", false,-1);
    tracep->declArray(c+113,"mem_to_wb_bus", false,-1, 355,0);
    tracep->declQuad(c+78,"mem_alu_output", false,-1, 63,0);
    tracep->declQuad(c+81,"mem_final_rdata", false,-1, 63,0);
    tracep->declBit(c+80,"mem_memread", false,-1);
    tracep->declBit(c+65,"ex_flush", false,-1);
    tracep->declBit(c+67,"ex_ready_go", false,-1);
    tracep->declBus(c+63,"ex_memop", false,-1, 2,0);
    tracep->declBus(c+64,"ex_wmask", false,-1, 7,0);
    tracep->declBit(c+77,"mem_flush", false,-1);
    tracep->declQuad(c+83,"mem_doubly_aligned_data", false,-1, 63,0);
    tracep->declQuad(c+85,"mem_diff_addr", false,-1, 63,0);
    tracep->declQuad(c+87,"mem_diff_data", false,-1, 63,0);
    tracep->declBit(c+75,"mem_ecall", false,-1);
    tracep->declBus(c+89,"mem_pc", false,-1, 31,0);
    tracep->declBus(c+162,"cache_state", false,-1, 2,0);
    tracep->declBit(c+574,"mem_memwrite", false,-1);
    tracep->declBus(c+575,"mem_memop", false,-1, 2,0);
    tracep->declQuad(c+576,"mem_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+578,"mem_mret", false,-1);
    tracep->declBit(c+579,"mem_mmio", false,-1);
    tracep->declBit(c+580,"lb", false,-1);
    tracep->declBit(c+581,"lh", false,-1);
    tracep->declBit(c+582,"lw", false,-1);
    tracep->declBit(c+583,"ld", false,-1);
    tracep->declBit(c+584,"lbu", false,-1);
    tracep->declBit(c+585,"lhu", false,-1);
    tracep->declBit(c+586,"lwu", false,-1);
    tracep->declBit(c+901,"sh", false,-1);
    tracep->declBit(c+902,"sw", false,-1);
    tracep->declBit(c+903,"sd", false,-1);
    tracep->declBit(c+822,"mem_ready_go", false,-1);
    tracep->declBit(c+587,"mem_reg_wen", false,-1);
    tracep->declBus(c+588,"mem_rs1", false,-1, 4,0);
    tracep->declQuad(c+589,"mem_alu_input1", false,-1, 63,0);
    tracep->declBus(c+591,"mem_des_csr", false,-1, 11,0);
    tracep->declBus(c+592,"mem_rd", false,-1, 4,0);
    tracep->declBit(c+593,"mem_jalr", false,-1);
    tracep->declQuad(c+594,"mem_wdata_tmp", false,-1, 63,0);
    tracep->declQuad(c+904,"mem_wdata", false,-1, 63,0);
    tracep->declBit(c+76,"mem_valid", false,-1);
    tracep->declBit(c+596,"mem_csrrw", false,-1);
    tracep->declBit(c+597,"mem_csrrs", false,-1);
    tracep->declBit(c+598,"mem_csrrc", false,-1);
    tracep->declBit(c+599,"mem_csrrwi", false,-1);
    tracep->declBit(c+600,"mem_csrrsi", false,-1);
    tracep->declBit(c+601,"mem_csrrci", false,-1);
    tracep->declBit(c+602,"mem_csr_we", false,-1);
    tracep->declBit(c+603,"mem_ebreak", false,-1);
    tracep->declBit(c+604,"mem_timer_int", false,-1);
    tracep->declBus(c+605,"mem_instruction", false,-1, 31,0);
    tracep->declBit(c+606,"ex_lb", false,-1);
    tracep->declBit(c+607,"ex_lh", false,-1);
    tracep->declBit(c+608,"ex_lw", false,-1);
    tracep->declBit(c+609,"ex_ld", false,-1);
    tracep->declBit(c+610,"ex_lbu", false,-1);
    tracep->declBit(c+611,"ex_lhu", false,-1);
    tracep->declBit(c+612,"ex_lwu", false,-1);
    tracep->declBit(c+613,"ex_sh", false,-1);
    tracep->declBit(c+614,"ex_sw", false,-1);
    tracep->declBit(c+615,"ex_sd", false,-1);
    tracep->declArray(c+616,"ex_to_mem_bus_reg", false,-1, 296,0);
    tracep->declQuad(c+626,"rawdata", false,-1, 63,0);
    tracep->declBus(c+628,"ex_addr_lowmask", false,-1, 7,0);
    tracep->declBus(c+629,"mem_addr_lowmask", false,-1, 7,0);
    tracep->declBus(c+906,"ex_size", false,-1, 1,0);
    tracep->pushNamePrefix("dec ");
    tracep->declBus(c+630,"in", false,-1, 2,0);
    tracep->declBus(c+628,"out", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb ");
    tracep->declBit(c+733,"clk", false,-1);
    tracep->declBit(c+734,"rst", false,-1);
    tracep->declBit(c+822,"wb_allowin", false,-1);
    tracep->declBit(c+76,"mem_to_wb_valid", false,-1);
    tracep->declArray(c+113,"mem_to_wb_bus", false,-1, 355,0);
    tracep->declBus(c+50,"raddr1", false,-1, 4,0);
    tracep->declBus(c+51,"raddr2", false,-1, 4,0);
    tracep->declQuad(c+54,"rdata1", false,-1, 63,0);
    tracep->declQuad(c+56,"rdata2", false,-1, 63,0);
    tracep->declBus(c+155,"wb_rd", false,-1, 4,0);
    tracep->declQuad(c+147,"wb_reg_wdata", false,-1, 63,0);
    tracep->declBit(c+736,"wb_valid", false,-1);
    tracep->declBus(c+737,"wb_pc", false,-1, 31,0);
    tracep->declBit(c+156,"wb_reg_wen", false,-1);
    tracep->declQuad(c+149,"wb_csrwdata", false,-1, 63,0);
    tracep->declQuad(c+151,"wb_csrrdata", false,-1, 63,0);
    tracep->declBit(c+153,"wb_mret", false,-1);
    tracep->declBit(c+154,"wb_csr_we", false,-1);
    tracep->declBit(c+158,"wb_ecall", false,-1);
    tracep->declQuad(c+738,"csr_mepc", false,-1, 63,0);
    tracep->declQuad(c+740,"csr_mtvec", false,-1, 63,0);
    tracep->declQuad(c+742,"csr_mstatus", false,-1, 63,0);
    tracep->declQuad(c+744,"csr_mcause", false,-1, 63,0);
    tracep->declQuad(c+746,"csr_mie", false,-1, 63,0);
    tracep->declQuad(c+748,"csr_mip", false,-1, 63,0);
    tracep->declQuad(c+750,"csr_mscratch", false,-1, 63,0);
    tracep->declQuad(c+40,"csr_mhartid", false,-1, 63,0);
    tracep->declBit(c+754,"wb_memwrite", false,-1);
    tracep->declQuad(c+759,"wb_diff_data", false,-1, 63,0);
    tracep->declQuad(c+757,"wb_diff_addr", false,-1, 63,0);
    tracep->declBit(c+159,"wb_timer_int", false,-1);
    tracep->declBit(c+157,"wb_ebreak", false,-1);
    tracep->declBus(c+755,"wb_instruction", false,-1, 31,0);
    tracep->declBit(c+756,"cmt_skip", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+631+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->declBit(c+77,"mem_flush", false,-1);
    tracep->declBus(c+907,"MTVEC", false,-1, 11,0);
    tracep->declBus(c+908,"MCAUSE", false,-1, 11,0);
    tracep->declBus(c+909,"MSTATUS", false,-1, 11,0);
    tracep->declBus(c+910,"MEPC", false,-1, 11,0);
    tracep->declBus(c+911,"MIE", false,-1, 11,0);
    tracep->declBus(c+912,"MIP", false,-1, 11,0);
    tracep->declBus(c+913,"MSCRATCH", false,-1, 11,0);
    tracep->declBus(c+914,"MHARTID", false,-1, 11,0);
    tracep->declBus(c+915,"MCYCLE", false,-1, 11,0);
    tracep->declQuad(c+695,"csr_mcycle", false,-1, 63,0);
    tracep->declBus(c+697,"wb_des_csr", false,-1, 11,0);
    tracep->declQuad(c+698,"wb_reg_wdata_tmp", false,-1, 63,0);
    tracep->declBus(c+700,"mstatus_mpp", false,-1, 1,0);
    tracep->declBit(c+701,"mstatus_mpie", false,-1);
    tracep->declBit(c+702,"mstatus_mie", false,-1);
    tracep->declBit(c+703,"wb_flush", false,-1);
    tracep->declBus(c+704,"wb_rs1", false,-1, 4,0);
    tracep->declBit(c+705,"wb_csrrw", false,-1);
    tracep->declBit(c+706,"wb_csrrs", false,-1);
    tracep->declBit(c+707,"wb_csrrc", false,-1);
    tracep->declBit(c+708,"wb_csrrwi", false,-1);
    tracep->declBit(c+709,"wb_csrrsi", false,-1);
    tracep->declBit(c+710,"wb_csrrci", false,-1);
    tracep->declQuad(c+711,"wb_alu_input1", false,-1, 63,0);
    tracep->declBit(c+713,"wb_rmcycle", false,-1);
    tracep->declBit(c+714,"wb_skip", false,-1);
    tracep->declBit(c+715,"wb_mmio", false,-1);
    tracep->declArray(c+716,"mem_to_wb_bus_reg", false,-1, 355,0);
    tracep->declBit(c+728,"non_zerow", false,-1);
    tracep->declBit(c+822,"wb_ready_go", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_init_top(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_22040127_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_22040127_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
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

VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_full_sub_0(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_22040127_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22040127_top___024root*>(voidSelf);
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_22040127_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_22040127_top___024root__trace_full_sub_0(Vysyx_22040127_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040127_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040127_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_he9b50b26__0;
    VlWide<7>/*223:0*/ __Vtemp_h0dc078f0__0;
    VlWide<10>/*319:0*/ __Vtemp_h5298b0fa__0;
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
    VlWide<5>/*159:0*/ __Vtemp_hee7c191f__0;
    // Body
    bufp->fullSData(oldp+1,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+2,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+3,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+4,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+5,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+6,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+7,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[6]),10);
    bufp->fullSData(oldp+8,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[7]),10);
    bufp->fullSData(oldp+9,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[8]),10);
    bufp->fullSData(oldp+10,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[9]),10);
    bufp->fullSData(oldp+11,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[10]),10);
    bufp->fullSData(oldp+12,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[11]),10);
    bufp->fullSData(oldp+13,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[12]),10);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+21,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+22,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[8]),7);
    bufp->fullCData(oldp+23,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[9]),7);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[10]),7);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[11]),7);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[12]),7);
    bufp->fullCData(oldp+27,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+28,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+29,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+30,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+31,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+32,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+33,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+34,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[7]),3);
    bufp->fullCData(oldp+35,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[8]),3);
    bufp->fullCData(oldp+36,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[9]),3);
    bufp->fullCData(oldp+37,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[10]),3);
    bufp->fullCData(oldp+38,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[11]),3);
    bufp->fullCData(oldp+39,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[12]),3);
    bufp->fullQData(oldp+40,(vlSelf->ysyx_22040127_top__DOT__mhartid),64);
    bufp->fullBit(oldp+42,(vlSelf->ysyx_22040127_top__DOT__if_valid));
    bufp->fullIData(oldp+43,(vlSelf->ysyx_22040127_top__DOT__if_instruction),32);
    bufp->fullBit(oldp+44,(((IData)((0x100073U == (0x10007fU 
                                                   & vlSelf->ysyx_22040127_top__DOT__if_instruction))) 
                            & (~ (IData)((0U != (0xffefff80U 
                                                 & vlSelf->ysyx_22040127_top__DOT__if_instruction)))))));
    bufp->fullBit(oldp+45,((0x7bU == (0x7fU & vlSelf->ysyx_22040127_top__DOT__if_instruction))));
    bufp->fullBit(oldp+46,((IData)((0U != (0x3000U 
                                           & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U])))));
    bufp->fullBit(oldp+47,(vlSelf->ysyx_22040127_top__DOT__if_allowin));
    bufp->fullIData(oldp+48,(vlSelf->ysyx_22040127_top__DOT__id_branch_result),32);
    bufp->fullBit(oldp+49,(vlSelf->ysyx_22040127_top__DOT__id_branch_taken));
    bufp->fullCData(oldp+50,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+51,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+52,(vlSelf->ysyx_22040127_top__DOT__id_flush));
    bufp->fullBit(oldp+53,(vlSelf->ysyx_22040127_top__DOT__id_allowin));
    bufp->fullQData(oldp+54,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
                             [(0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                        >> 0xfU))]),64);
    bufp->fullQData(oldp+56,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf
                             [(0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                        >> 0x14U))]),64);
    bufp->fullBit(oldp+58,(vlSelf->ysyx_22040127_top__DOT__id_to_ex_valid));
    bufp->fullBit(oldp+59,(vlSelf->ysyx_22040127_top__DOT__id_ecall));
    bufp->fullBit(oldp+60,(vlSelf->ysyx_22040127_top__DOT__id_mret));
    bufp->fullBit(oldp+61,(vlSelf->ysyx_22040127_top__DOT__load_branch));
    bufp->fullIData(oldp+62,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                               << 1U) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                         >> 0x1fU))),32);
    bufp->fullCData(oldp+63,((7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                    >> 8U))),3);
    bufp->fullCData(oldp+64,(vlSelf->ysyx_22040127_top__DOT__ex_wmask),8);
    bufp->fullBit(oldp+65,(vlSelf->ysyx_22040127_top__DOT__ex_flush));
    bufp->fullBit(oldp+66,(vlSelf->ysyx_22040127_top__DOT__ex_allowin));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_22040127_top__DOT__ex_ready_go));
    bufp->fullBit(oldp+68,(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_valid));
    bufp->fullBit(oldp+69,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                  >> 5U))));
    bufp->fullBit(oldp+70,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                  >> 6U))));
    bufp->fullBit(oldp+71,((0xaU == (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                     >> 0x1cU))));
    bufp->fullBit(oldp+72,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
                                  >> 0x15U))));
    bufp->fullBit(oldp+73,(vlSelf->ysyx_22040127_top__DOT__ecallmret_on));
    bufp->fullBit(oldp+74,((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                             & ((((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                  | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit)) 
                                 | (0xaU == (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                             >> 0x1cU))) 
                                | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_ok))) 
                            | ((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dcache_state)) 
                               & ((((~ (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw)) 
                                    & ((IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit) 
                                       | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit))) 
                                   | (0xaU == (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                               >> 0x1cU))) 
                                  | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_ok))))));
    bufp->fullBit(oldp+75,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                  >> 0x12U))));
    bufp->fullBit(oldp+76,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_valid));
    bufp->fullBit(oldp+77,(vlSelf->ysyx_22040127_top__DOT__mem_flush));
    bufp->fullQData(oldp+78,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])))),64);
    bufp->fullBit(oldp+80,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                  >> 5U))));
    bufp->fullQData(oldp+81,(vlSelf->ysyx_22040127_top__DOT__mem_final_rdata),64);
    bufp->fullQData(oldp+83,(vlSelf->ysyx_22040127_top__DOT__mem_doubly_aligned_data),64);
    bufp->fullQData(oldp+85,(vlSelf->ysyx_22040127_top__DOT__mem_diff_addr),64);
    bufp->fullQData(oldp+87,(vlSelf->ysyx_22040127_top__DOT__mem_diff_data),64);
    bufp->fullIData(oldp+89,(((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                               << 0x15U) | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                            >> 0xbU))),32);
    bufp->fullWData(oldp+90,(vlSelf->ysyx_22040127_top__DOT__if_to_id_bus),65);
    __Vtemp_he9b50b26__0[0U] = (IData)((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_timer_int_tmp)) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[2U]))) 
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
                                                                        ((0x1000U 
                                                                          == 
                                                                          (0x7000U 
                                                                           & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                         & (6U 
                                                                            == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                        << 0x2eU) 
                                                       | (((QData)((IData)(
                                                                           ((0x2000U 
                                                                             == 
                                                                             (0x7000U 
                                                                              & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                            & (6U 
                                                                               == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                           << 0x2dU) 
                                                          | (((QData)((IData)(
                                                                              ((0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                               & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                              << 0x2cU) 
                                                             | (((QData)((IData)(
                                                                                ((0x5000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                 << 0x2bU) 
                                                                | (((QData)((IData)(
                                                                                ((0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                    << 0x2aU) 
                                                                   | (((QData)((IData)(
                                                                                ((0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                       << 0x29U) 
                                                                      | (((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U])) 
                                                                          << 9U) 
                                                                         | (QData)((IData)(
                                                                                ((0x100U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x78U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U]) 
                                                                                | (7U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0xcU))))))))))))))))))));
    __Vtemp_he9b50b26__0[1U] = ((vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                 << 0x1fU) | (IData)(
                                                     ((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_timer_int_tmp)) 
                                                        << 0x3eU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[2U]))) 
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
                                                                                ((0x1000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                       << 0x2eU) 
                                                                      | (((QData)((IData)(
                                                                                ((0x2000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                          << 0x2dU) 
                                                                         | (((QData)((IData)(
                                                                                ((0x3000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                             << 0x2cU) 
                                                                            | (((QData)((IData)(
                                                                                ((0x5000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                                << 0x2bU) 
                                                                               | (((QData)((IData)(
                                                                                ((0x6000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                ((0x7000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U])) 
                                                                                << 9U) 
                                                                                | (QData)((IData)(
                                                                                ((0x100U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x16U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0x12U)) 
                                                                                | ((0x78U 
                                                                                & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U]) 
                                                                                | (7U 
                                                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                                >> 0xcU))))))))))))))))))) 
                                                      >> 0x20U)));
    __Vtemp_h0dc078f0__0[6U] = ((0x200000U & ((((((~ (IData)(
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
                                                             | (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr))))))));
    __Vtemp_h5298b0fa__0[0U] = (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final);
    __Vtemp_h5298b0fa__0[1U] = (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final 
                                        >> 0x20U));
    __Vtemp_h5298b0fa__0[2U] = (IData)((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                         | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                         ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                         : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final));
    __Vtemp_h5298b0fa__0[3U] = (IData)(((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                          | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                          ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                          : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final) 
                                        >> 0x20U));
    __Vtemp_h5298b0fa__0[4U] = (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1);
    __Vtemp_h5298b0fa__0[5U] = (IData)((vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1 
                                        >> 0x20U));
    __Vtemp_h5298b0fa__0[6U] = ((__Vtemp_he9b50b26__0[0U] 
                                 << 0x16U) | __Vtemp_h0dc078f0__0[6U]);
    __Vtemp_h5298b0fa__0[7U] = ((__Vtemp_he9b50b26__0[0U] 
                                 >> 0xaU) | (__Vtemp_he9b50b26__0[1U] 
                                             << 0x16U));
    __Vtemp_h5298b0fa__0[8U] = ((__Vtemp_he9b50b26__0[1U] 
                                 >> 0xaU) | (0xffc00000U 
                                             & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                << 0x15U)));
    __Vtemp_h5298b0fa__0[9U] = ((0x200000U & (((IData)(
                                                       ((0x1000U 
                                                         == 
                                                         (0x7f80U 
                                                          & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                                       >> 0xfU)))))) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                              << 0x15U)) 
                                | (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                   >> 0xbU));
    bufp->fullWData(oldp+93,(__Vtemp_h5298b0fa__0),310);
    bufp->fullWData(oldp+103,(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus),296);
    bufp->fullWData(oldp+113,(vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus),356);
    bufp->fullQData(oldp+125,(vlSelf->ysyx_22040127_top__DOT__d_req_addr),64);
    bufp->fullCData(oldp+127,(vlSelf->ysyx_22040127_top__DOT__d_req_strb),8);
    bufp->fullWData(oldp+128,(vlSelf->ysyx_22040127_top__DOT__d_req_data),128);
    bufp->fullBit(oldp+132,(vlSelf->ysyx_22040127_top__DOT__d_req_wen));
    bufp->fullBit(oldp+133,(vlSelf->ysyx_22040127_top__DOT__d_req_valid));
    bufp->fullBit(oldp+134,(vlSelf->ysyx_22040127_top__DOT__d_res_valid));
    bufp->fullWData(oldp+135,(vlSelf->ysyx_22040127_top__DOT__d_mrdata),128);
    bufp->fullQData(oldp+139,(vlSelf->ysyx_22040127_top__DOT__i_req_addr),64);
    bufp->fullBit(oldp+141,(vlSelf->ysyx_22040127_top__DOT__i_req_valid));
    bufp->fullBit(oldp+142,((5U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state))));
    bufp->fullWData(oldp+143,(vlSelf->ysyx_22040127_top__DOT__i_mrdata),128);
    bufp->fullQData(oldp+147,(vlSelf->ysyx_22040127_top__DOT__wb_reg_wdata),64);
    bufp->fullQData(oldp+149,(vlSelf->ysyx_22040127_top__DOT__wb_csrwdata),64);
    bufp->fullQData(oldp+151,(vlSelf->ysyx_22040127_top__DOT__wb_csrrdata),64);
    bufp->fullBit(oldp+153,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+154,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                   >> 0xeU))));
    bufp->fullCData(oldp+155,((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])),5);
    bufp->fullBit(oldp+156,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                   >> 5U))));
    bufp->fullBit(oldp+157,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                   >> 1U))));
    bufp->fullBit(oldp+158,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+159,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                   >> 2U))));
    bufp->fullBit(oldp+160,(vlSelf->ysyx_22040127_top__DOT__ecall_stuck));
    bufp->fullBit(oldp+161,(vlSelf->ysyx_22040127_top__DOT__mret_stuck));
    bufp->fullCData(oldp+162,(vlSelf->ysyx_22040127_top__DOT__dcache_state),3);
    bufp->fullCData(oldp+163,(vlSelf->ysyx_22040127_top__DOT__icache_state),3);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_22040127_top__DOT__next_pc),32);
    bufp->fullBit(oldp+165,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__icache_state)) 
                             & ((IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit) 
                                | (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit)))));
    bufp->fullBit(oldp+166,(vlSelf->ysyx_22040127_top__DOT__icache_valid));
    bufp->fullBit(oldp+167,(vlSelf->ysyx_22040127_top__DOT__preif_valid));
    bufp->fullBit(oldp+168,(vlSelf->ysyx_22040127_top__DOT__preif_ready_go_reg));
    bufp->fullBit(oldp+169,(vlSelf->ysyx_22040127_top__DOT__preif_ready_go));
    bufp->fullBit(oldp+170,(vlSelf->ysyx_22040127_top__DOT__preif_allowin));
    bufp->fullQData(oldp+171,(vlSelf->ysyx_22040127_top__DOT__icache_data),64);
    bufp->fullBit(oldp+173,(vlSelf->ysyx_22040127_top__DOT__timer_blocked));
    bufp->fullBit(oldp+174,(vlSelf->ysyx_22040127_top__DOT__if_timer_blocked));
    bufp->fullBit(oldp+175,(vlSelf->ysyx_22040127_top__DOT__if_timer_int_tmp));
    bufp->fullIData(oldp+176,(vlSelf->ysyx_22040127_top__DOT__next_pc_reg),32);
    bufp->fullQData(oldp+177,(vlSelf->ysyx_22040127_top__DOT__rf[0]),64);
    bufp->fullQData(oldp+179,(vlSelf->ysyx_22040127_top__DOT__rf[1]),64);
    bufp->fullQData(oldp+181,(vlSelf->ysyx_22040127_top__DOT__rf[2]),64);
    bufp->fullQData(oldp+183,(vlSelf->ysyx_22040127_top__DOT__rf[3]),64);
    bufp->fullQData(oldp+185,(vlSelf->ysyx_22040127_top__DOT__rf[4]),64);
    bufp->fullQData(oldp+187,(vlSelf->ysyx_22040127_top__DOT__rf[5]),64);
    bufp->fullQData(oldp+189,(vlSelf->ysyx_22040127_top__DOT__rf[6]),64);
    bufp->fullQData(oldp+191,(vlSelf->ysyx_22040127_top__DOT__rf[7]),64);
    bufp->fullQData(oldp+193,(vlSelf->ysyx_22040127_top__DOT__rf[8]),64);
    bufp->fullQData(oldp+195,(vlSelf->ysyx_22040127_top__DOT__rf[9]),64);
    bufp->fullQData(oldp+197,(vlSelf->ysyx_22040127_top__DOT__rf[10]),64);
    bufp->fullQData(oldp+199,(vlSelf->ysyx_22040127_top__DOT__rf[11]),64);
    bufp->fullQData(oldp+201,(vlSelf->ysyx_22040127_top__DOT__rf[12]),64);
    bufp->fullQData(oldp+203,(vlSelf->ysyx_22040127_top__DOT__rf[13]),64);
    bufp->fullQData(oldp+205,(vlSelf->ysyx_22040127_top__DOT__rf[14]),64);
    bufp->fullQData(oldp+207,(vlSelf->ysyx_22040127_top__DOT__rf[15]),64);
    bufp->fullQData(oldp+209,(vlSelf->ysyx_22040127_top__DOT__rf[16]),64);
    bufp->fullQData(oldp+211,(vlSelf->ysyx_22040127_top__DOT__rf[17]),64);
    bufp->fullQData(oldp+213,(vlSelf->ysyx_22040127_top__DOT__rf[18]),64);
    bufp->fullQData(oldp+215,(vlSelf->ysyx_22040127_top__DOT__rf[19]),64);
    bufp->fullQData(oldp+217,(vlSelf->ysyx_22040127_top__DOT__rf[20]),64);
    bufp->fullQData(oldp+219,(vlSelf->ysyx_22040127_top__DOT__rf[21]),64);
    bufp->fullQData(oldp+221,(vlSelf->ysyx_22040127_top__DOT__rf[22]),64);
    bufp->fullQData(oldp+223,(vlSelf->ysyx_22040127_top__DOT__rf[23]),64);
    bufp->fullQData(oldp+225,(vlSelf->ysyx_22040127_top__DOT__rf[24]),64);
    bufp->fullQData(oldp+227,(vlSelf->ysyx_22040127_top__DOT__rf[25]),64);
    bufp->fullQData(oldp+229,(vlSelf->ysyx_22040127_top__DOT__rf[26]),64);
    bufp->fullQData(oldp+231,(vlSelf->ysyx_22040127_top__DOT__rf[27]),64);
    bufp->fullQData(oldp+233,(vlSelf->ysyx_22040127_top__DOT__rf[28]),64);
    bufp->fullQData(oldp+235,(vlSelf->ysyx_22040127_top__DOT__rf[29]),64);
    bufp->fullQData(oldp+237,(vlSelf->ysyx_22040127_top__DOT__rf[30]),64);
    bufp->fullQData(oldp+239,(vlSelf->ysyx_22040127_top__DOT__rf[31]),64);
    bufp->fullIData(oldp+241,(vlSelf->ysyx_22040127_top__DOT__if_instruction_reg),32);
    bufp->fullBit(oldp+242,(vlSelf->ysyx_22040127_top__DOT__if_instruction_blocked));
    bufp->fullBit(oldp+243,(((IData)(vlSelf->ysyx_22040127_top__DOT__d_req_wen) 
                             & (IData)(vlSelf->ysyx_22040127_top__DOT__d_req_valid))));
    bufp->fullBit(oldp+244,(((IData)(vlSelf->ysyx_22040127_top__DOT__i_req_valid) 
                             | (IData)(vlSelf->ysyx_22040127_top__DOT__d_req_valid))));
    bufp->fullBit(oldp+245,(((IData)(vlSelf->ysyx_22040127_top__DOT__d_req_valid) 
                             & (~ (IData)(vlSelf->ysyx_22040127_top__DOT__d_req_wen)))));
    bufp->fullQData(oldp+246,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state))
                                ? (0xfffffffffffffff0ULL 
                                   & vlSelf->ysyx_22040127_top__DOT__i_req_addr)
                                : ((3U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state))
                                    ? (0xfffffffffffffff0ULL 
                                       & vlSelf->ysyx_22040127_top__DOT__d_req_addr)
                                    : 0ULL))),64);
    bufp->fullCData(oldp+248,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state),3);
    bufp->fullCData(oldp+249,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state),3);
    bufp->fullBit(oldp+250,((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state))));
    bufp->fullBit(oldp+251,(((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state)) 
                             | (5U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_state)))));
    bufp->fullBit(oldp+252,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)) 
                             | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)))));
    bufp->fullBit(oldp+253,(((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)) 
                             | (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_state)))));
    bufp->fullQData(oldp+254,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])))),64);
    bufp->fullQData(oldp+256,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[0U])))),64);
    bufp->fullBit(oldp+258,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                   >> 6U))));
    bufp->fullBit(oldp+259,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                   >> 5U))));
    bufp->fullBit(oldp+260,(vlSelf->ysyx_22040127_top__DOT____Vcellinp__dcache__input_valid));
    bufp->fullCData(oldp+261,((3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                     >> 8U))),2);
    bufp->fullCData(oldp+262,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_size_reg),2);
    bufp->fullCData(oldp+263,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_offset_reg),4);
    bufp->fullBit(oldp+264,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit_reg));
    bufp->fullBit(oldp+265,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit_reg));
    bufp->fullIData(oldp+266,((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                               >> 0xbU)),21);
    bufp->fullCData(oldp+267,((0x7fU & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U] 
                                        >> 4U))),7);
    bufp->fullCData(oldp+268,((0xfU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])),4);
    bufp->fullCData(oldp+269,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_index_reg),7);
    bufp->fullCData(oldp+270,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_offset_reg),4);
    bufp->fullWData(oldp+271,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_strb),128);
    bufp->fullBit(oldp+275,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way0));
    bufp->fullBit(oldp+276,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way1));
    bufp->fullWData(oldp+277,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wdata),128);
    bufp->fullBit(oldp+281,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_miss));
    bufp->fullCData(oldp+282,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_cnt),7);
    bufp->fullBit(oldp+283,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_ok));
    bufp->fullBit(oldp+284,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way0_reg));
    bufp->fullBit(oldp+285,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_wen_way1_reg));
    bufp->fullQData(oldp+286,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_strb),64);
    bufp->fullWData(oldp+288,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0),128);
    bufp->fullWData(oldp+292,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1),128);
    bufp->fullBit(oldp+296,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0hit));
    bufp->fullBit(oldp+297,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1hit));
    bufp->fullBit(oldp+298,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0dirty));
    bufp->fullBit(oldp+299,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1dirty));
    bufp->fullBit(oldp+300,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0valid));
    bufp->fullBit(oldp+301,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1valid));
    bufp->fullQData(oldp+302,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_offset_reg))
                                ? (((QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way0[0U]))))),64);
    bufp->fullQData(oldp+304,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__input_offset_reg))
                                ? (((QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_rdata_way1[0U]))))),64);
    bufp->fullQData(oldp+306,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__ex_cache_wdata),64);
    bufp->fullBit(oldp+308,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way0));
    bufp->fullBit(oldp+309,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw_way1));
    bufp->fullBit(oldp+310,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_raw));
    bufp->fullBit(oldp+311,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mmio_reg));
    bufp->fullQData(oldp+312,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mmio_rdata),64);
    bufp->fullQData(oldp+314,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mmio_rdata_reg),64);
    bufp->fullBit(oldp+316,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0fencev));
    bufp->fullBit(oldp+317,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way0fenced));
    bufp->fullBit(oldp+318,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1fencev));
    bufp->fullBit(oldp+319,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_way1fenced));
    bufp->fullBit(oldp+320,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cnt));
    bufp->fullBit(oldp+321,((1U & (((vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                     >> 5U) | (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__cache_miss)) 
                                   | ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
                                       >> 0x15U) & 
                                      (~ (IData)(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__fencei_ok)))))));
    bufp->fullCData(oldp+322,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT____Vcellinp__dcache_way1__A),7);
    bufp->fullCData(oldp+323,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT____Vcellinp__dcache_way2__A),7);
    bufp->fullIData(oldp+324,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+325,((0x1fU & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U])),5);
    bufp->fullCData(oldp+326,((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U])),5);
    bufp->fullBit(oldp+327,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                   >> 7U))));
    bufp->fullBit(oldp+328,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[2U] 
                                   >> 5U))));
    bufp->fullBit(oldp+329,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+330,((1U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[5U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+331,((1U & (vlSelf->ysyx_22040127_top__DOT__mem_to_wb_bus[3U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+332,((1U & (~ (IData)((0U != 
                                              (7U & 
                                               (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                >> 0xcU))))))));
    bufp->fullBit(oldp+333,((1U & ((~ (IData)((0U != 
                                               (3U 
                                                & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                   >> 0xdU))))) 
                                   & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+334,((4U == (7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+335,((6U == (7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+336,((5U == (7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+337,((7U == (7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+338,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__btype_taken));
    bufp->fullBit(oldp+339,(((1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                             | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
    bufp->fullBit(oldp+340,(((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                             | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
    bufp->fullCData(oldp+341,(((0x20U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                         >> 0x19U)) 
                               | ((0x10U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                            >> 0x15U)) 
                                  | (0xfU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                             >> 3U))))),6);
    bufp->fullCData(oldp+342,((7U & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+343,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                        >> 7U))),5);
    bufp->fullBit(oldp+344,((1U & (((((~ (IData)((0U 
                                                  != (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))) 
                                      | (1U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                     | (3U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                    | (4U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))) 
                                   | (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    bufp->fullBit(oldp+345,((2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))));
    bufp->fullBit(oldp+346,((IData)((3U == (0x7fU & 
                                            vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])))));
    bufp->fullCData(oldp+347,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type),3);
    bufp->fullQData(oldp+348,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm),64);
    bufp->fullBit(oldp+350,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr));
    bufp->fullQData(oldp+351,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_alu_input1),64);
    bufp->fullQData(oldp+353,((((0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)) 
                                | (2U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))
                                ? vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_imm
                                : vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final)),64);
    bufp->fullQData(oldp+355,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata1_final),64);
    bufp->fullQData(oldp+357,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_regdata2_final),64);
    bufp->fullBit(oldp+359,((1U & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[2U])));
    bufp->fullBit(oldp+360,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard1));
    bufp->fullBit(oldp+361,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__exid_raw_hazard2));
    bufp->fullBit(oldp+362,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard1));
    bufp->fullBit(oldp+363,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__memid_raw_hazard2));
    bufp->fullBit(oldp+364,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard1));
    bufp->fullBit(oldp+365,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__load_use_hazard2));
    bufp->fullBit(oldp+366,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1_tmp));
    bufp->fullBit(oldp+367,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2_tmp));
    bufp->fullBit(oldp+368,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard1));
    bufp->fullBit(oldp+369,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__mem_load_use_hazard2));
    bufp->fullBit(oldp+370,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard1_tmp));
    bufp->fullBit(oldp+371,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__wb_load_use_hazard2_tmp));
    bufp->fullBit(oldp+372,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_ready_go));
    bufp->fullBit(oldp+373,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_valid));
    bufp->fullWData(oldp+374,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg),65);
    bufp->fullIData(oldp+377,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U]),32);
    bufp->fullIData(oldp+378,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U]),32);
    bufp->fullBit(oldp+379,((IData)(((0x1000U == (0x7000U 
                                                  & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                     & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    bufp->fullBit(oldp+380,((IData)(((0x2000U == (0x7000U 
                                                  & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                     & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    bufp->fullBit(oldp+381,((IData)(((0x3000U == (0x7000U 
                                                  & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                     & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    bufp->fullBit(oldp+382,((IData)(((0x5000U == (0x7000U 
                                                  & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                     & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    bufp->fullBit(oldp+383,((IData)(((0x6000U == (0x7000U 
                                                  & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                     & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    bufp->fullBit(oldp+384,((IData)(((0x7000U == (0x7000U 
                                                  & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                     & (6U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type))))));
    bufp->fullBit(oldp+385,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_timer_int_tmp));
    bufp->fullBit(oldp+386,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr_stuck));
    bufp->fullBit(oldp+387,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_jalr_stuck_reg));
    bufp->fullIData(oldp+388,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__stuck_jalr_result),32);
    bufp->fullBit(oldp+389,(((IData)(((0x1000U == (0x7f80U 
                                                   & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                                     >> 0xfU)))))) 
                             & (0U == (IData)(vlSelf->ysyx_22040127_top__DOT__dec__DOT__id_inst_type)))));
    bufp->fullCData(oldp+390,((0x7fU & vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U])),7);
    bufp->fullCData(oldp+391,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+392,(vlSelf->ysyx_22040127_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+393,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_calc_result),64);
    bufp->fullQData(oldp+395,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_calc_result),64);
    bufp->fullQData(oldp+397,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__rtype_alu_op),64);
    bufp->fullIData(oldp+399,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_alu_op),32);
    bufp->fullIData(oldp+400,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__addw_result),32);
    bufp->fullIData(oldp+401,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result),32);
    bufp->fullIData(oldp+402,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U]),32);
    bufp->fullIData(oldp+403,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U]),32);
    bufp->fullIData(oldp+404,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                << 0x1fU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                             >> 1U))),32);
    bufp->fullQData(oldp+405,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_addw_result),64);
    bufp->fullQData(oldp+407,((((QData)((IData)((- (IData)(
                                                           (vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__subw_result)))),64);
    bufp->fullQData(oldp+409,((((QData)((IData)((- (IData)(
                                                           (vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U] 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U])))),64);
    bufp->fullQData(oldp+411,((((QData)((IData)((- (IData)(
                                                           (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U] 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U])))),64);
    bufp->fullQData(oldp+413,((((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U]))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                                              << 0x1fU) 
                                                             | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                                                >> 1U)))))),64);
    bufp->fullIData(oldp+415,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_sllw),32);
    bufp->fullIData(oldp+416,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__src1_srlw),32);
    bufp->fullCData(oldp+417,((0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])),6);
    bufp->fullQData(oldp+418,((~ (0xffffffffffffffffULL 
                                  >> (0x3fU & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))),64);
    bufp->fullQData(oldp+420,((0xffffffff00000000ULL 
                               | (QData)((IData)((~ 
                                                  (0xffffffffU 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))))))),64);
    bufp->fullQData(oldp+422,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sraw),64);
    bufp->fullQData(oldp+424,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_sllw),64);
    bufp->fullQData(oldp+426,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__sext_src1_srlw),64);
    bufp->fullQData(oldp+428,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[0U])))),64);
    bufp->fullCData(oldp+430,((0x3fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                        >> 0x19U))),6);
    bufp->fullCData(oldp+431,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 0x16U))),3);
    bufp->fullBit(oldp+432,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+433,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                   >> 0x13U))));
    bufp->fullCData(oldp+434,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                        >> 0xeU))),5);
    bufp->fullCData(oldp+435,((7U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                     >> 1U))),3);
    bufp->fullBit(oldp+436,((1U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])));
    bufp->fullQData(oldp+437,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])))),64);
    bufp->fullQData(oldp+439,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))),64);
    bufp->fullCData(oldp+441,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                        >> 9U))),5);
    bufp->fullCData(oldp+442,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                        >> 4U))),5);
    bufp->fullBit(oldp+443,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                   >> 0x15U))));
    bufp->fullIData(oldp+444,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
                                << 0xbU) | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                            >> 0x15U))),32);
    bufp->fullBit(oldp+445,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_type));
    bufp->fullBit(oldp+446,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_type));
    bufp->fullBit(oldp+447,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_sign));
    bufp->fullBit(oldp+448,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_ok));
    bufp->fullBit(oldp+449,((1U & (~ (IData)((0xc00000U 
                                              == (0xc00000U 
                                                  & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])))))));
    bufp->fullBit(oldp+450,((1U & (~ (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                      >> 0x17U)))));
    bufp->fullQData(oldp+451,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[2U])))),64);
    bufp->fullQData(oldp+453,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res[0U])))),64);
    bufp->fullBit(oldp+455,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__ex_valid));
    bufp->fullWData(oldp+456,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg),310);
    bufp->fullQData(oldp+466,(((8U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                ? ((4U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                    ? 0ULL : ((2U & 
                                               vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
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
                                        : ((1U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                            ? (QData)((IData)(
                                                              ((IData)(4U) 
                                                               + 
                                                               ((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                 << 1U) 
                                                                | (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                   >> 0x1fU)))))
                                            : vlSelf->ysyx_22040127_top__DOT__exe__DOT__itype_calc_result))))),64);
    bufp->fullBit(oldp+468,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_ready));
    bufp->fullCData(oldp+469,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_state),2);
    bufp->fullQData(oldp+470,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[0U])))),64);
    bufp->fullQData(oldp+472,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[4U])) 
                                << 0x3fU) | (((QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[3U])) 
                                              << 0x1fU) 
                                             | ((QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend[2U])) 
                                                >> 1U)))),64);
    bufp->fullBit(oldp+474,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                   >> 4U))));
    bufp->fullBit(oldp+475,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                   >> 3U))));
    bufp->fullBit(oldp+476,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                   >> 2U))));
    bufp->fullBit(oldp+477,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                   >> 1U))));
    bufp->fullBit(oldp+478,((1U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])));
    bufp->fullBit(oldp+479,((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+480,(((vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                              >> 0x1fU) | (0U != (0x1fU 
                                                  & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])))));
    bufp->fullSData(oldp+481,((0xfffU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                         >> 7U))),12);
    bufp->fullBit(oldp+482,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+483,((1U & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+484,((IData)((0U != (0x100060U 
                                            & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])))));
    bufp->fullBit(oldp+485,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__cache_readygo));
    bufp->fullBit(oldp+486,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul_stuck));
    bufp->fullBit(oldp+487,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div_stuck));
    bufp->fullQData(oldp+488,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sra),64);
    bufp->fullQData(oldp+490,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_srl),64);
    bufp->fullQData(oldp+492,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__res_sll),64);
    bufp->fullCData(oldp+494,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                        >> 0x16U))),5);
    bufp->fullCData(oldp+495,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__dec_rtype__in),6);
    bufp->fullQData(oldp+496,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber3),64);
    bufp->fullQData(oldp+498,(vlSelf->ysyx_22040127_top__DOT__exe__DOT____Vcellinp__div____pinNumber4),64);
    bufp->fullCData(oldp+500,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__cnt),7);
    bufp->fullWData(oldp+501,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__dividend),129);
    bufp->fullQData(oldp+506,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__divisor),64);
    bufp->fullWData(oldp+508,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__div__DOT__subres),65);
    bufp->fullWData(oldp+511,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__x_ext),65);
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
    __Vtemp_h22fc65f5__0[2U] = ((((0x800000U & vlSelf->ysyx_22040127_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
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
    bufp->fullWData(oldp+514,(__Vtemp_h22fc65f5__0),67);
    bufp->fullWData(oldp+517,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__res),128);
    bufp->fullCData(oldp+521,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__cnt),5);
    bufp->fullWData(oldp+522,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier),128);
    bufp->fullWData(oldp+526,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplied),67);
    bufp->fullCData(oldp+529,(vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__mul_state),2);
    __Vtemp_hc961d23f__0[0U] = 1U;
    __Vtemp_hc961d23f__0[1U] = 0U;
    __Vtemp_hc961d23f__0[2U] = 0U;
    __Vtemp_hc961d23f__0[3U] = 0U;
    __Vtemp_h938fe951__0[0U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[0U]);
    __Vtemp_h938fe951__0[1U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[1U]);
    __Vtemp_h938fe951__0[2U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[2U]);
    __Vtemp_h938fe951__0[3U] = (~ vlSelf->ysyx_22040127_top__DOT__exe__DOT__mul__DOT__multiplier[3U]);
    VL_ADD_W(4, __Vtemp_h133872f3__0, __Vtemp_hc961d23f__0, __Vtemp_h938fe951__0);
    bufp->fullWData(oldp+530,(__Vtemp_h133872f3__0),128);
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
    __Vtemp_h07b6cc8f__0[0U] = (((((- (IData)(((1U 
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
                                     & __Vtemp_hd58ee9b8__0[0U])) 
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
                                                   & (__Vtemp_h5f54cd54__0[0U] 
                                                      << 1U)));
    __Vtemp_h07b6cc8f__0[1U] = (((((- (IData)(((1U 
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
                                     & __Vtemp_hd58ee9b8__0[1U])) 
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
                                 & ((__Vtemp_h5f54cd54__0[0U] 
                                     >> 0x1fU) | (__Vtemp_h5f54cd54__0[1U] 
                                                  << 1U))));
    __Vtemp_h07b6cc8f__0[2U] = (((((- (IData)(((1U 
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
                                     & __Vtemp_hd58ee9b8__0[2U])) 
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
                                 & ((__Vtemp_h5f54cd54__0[1U] 
                                     >> 0x1fU) | (__Vtemp_h5f54cd54__0[2U] 
                                                  << 1U))));
    __Vtemp_h07b6cc8f__0[3U] = (((((- (IData)(((1U 
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
                                     & __Vtemp_hd58ee9b8__0[3U])) 
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
                                 & ((__Vtemp_h5f54cd54__0[2U] 
                                     >> 0x1fU) | (__Vtemp_h5f54cd54__0[3U] 
                                                  << 1U))));
    bufp->fullWData(oldp+534,(__Vtemp_h07b6cc8f__0),128);
    bufp->fullQData(oldp+538,((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc))),64);
    bufp->fullCData(oldp+540,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__input_offset_reg),4);
    bufp->fullBit(oldp+541,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit_reg));
    bufp->fullBit(oldp+542,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit_reg));
    bufp->fullIData(oldp+543,((0x1fffffU & (IData)(
                                                   ((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc)) 
                                                    >> 0xbU)))),21);
    bufp->fullCData(oldp+544,((0x7fU & (IData)(((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc)) 
                                                >> 4U)))),7);
    bufp->fullCData(oldp+545,((0xfU & (IData)((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__next_pc))))),4);
    bufp->fullBit(oldp+546,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wen_way0));
    bufp->fullBit(oldp+547,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wen_way1));
    bufp->fullWData(oldp+548,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_strb),128);
    bufp->fullWData(oldp+552,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_wdata),128);
    bufp->fullWData(oldp+556,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0),128);
    bufp->fullWData(oldp+560,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1),128);
    bufp->fullBit(oldp+564,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0hit));
    bufp->fullBit(oldp+565,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1hit));
    bufp->fullBit(oldp+566,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way0valid));
    bufp->fullBit(oldp+567,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_way1valid));
    bufp->fullQData(oldp+568,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__input_offset_reg))
                                ? (((QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way0[0U]))))),64);
    bufp->fullQData(oldp+570,(((8U & (IData)(vlSelf->ysyx_22040127_top__DOT__icache__DOT__input_offset_reg))
                                ? (((QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_rdata_way1[0U]))))),64);
    bufp->fullBit(oldp+572,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cnt));
    bufp->fullIData(oldp+573,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+574,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                   >> 6U))));
    bufp->fullCData(oldp+575,((7U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                     >> 8U))),3);
    bufp->fullQData(oldp+576,(((0x20U & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])
                                ? vlSelf->ysyx_22040127_top__DOT__mem_final_rdata
                                : (((QData)((IData)(
                                                    vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U]))))),64);
    bufp->fullBit(oldp+578,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+579,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                   >> 8U))));
    bufp->fullBit(oldp+580,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lb));
    bufp->fullBit(oldp+581,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lh));
    bufp->fullBit(oldp+582,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lw));
    bufp->fullBit(oldp+583,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ld));
    bufp->fullBit(oldp+584,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lbu));
    bufp->fullBit(oldp+585,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lhu));
    bufp->fullBit(oldp+586,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__lwu));
    bufp->fullBit(oldp+587,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                   >> 7U))));
    bufp->fullCData(oldp+588,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                        >> 0x15U))),5);
    bufp->fullQData(oldp+589,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U])) 
                                << 0x26U) | (((QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[6U])) 
                                              << 6U) 
                                             | ((QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U])) 
                                                >> 0x1aU)))),64);
    bufp->fullSData(oldp+591,((0xfffU & ((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                          << 6U) | 
                                         (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U] 
                                          >> 0x1aU)))),12);
    bufp->fullCData(oldp+592,((0x1fU & vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])),5);
    bufp->fullBit(oldp+593,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                   >> 0xbU))));
    bufp->fullQData(oldp+594,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U])))),64);
    bufp->fullBit(oldp+596,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+597,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+598,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+599,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+600,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+601,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+602,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+603,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                   >> 6U))));
    bufp->fullBit(oldp+604,((1U & (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                   >> 7U))));
    bufp->fullIData(oldp+605,(((vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[9U] 
                                << 0x17U) | (vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                             >> 9U))),32);
    bufp->fullBit(oldp+606,((0U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                          >> 8U)))));
    bufp->fullBit(oldp+607,((1U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                          >> 8U)))));
    bufp->fullBit(oldp+608,((2U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                          >> 8U)))));
    bufp->fullBit(oldp+609,((3U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                          >> 8U)))));
    bufp->fullBit(oldp+610,((4U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                          >> 8U)))));
    bufp->fullBit(oldp+611,((5U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                          >> 8U)))));
    bufp->fullBit(oldp+612,((6U == (7U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                          >> 8U)))));
    bufp->fullBit(oldp+613,((1U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                          >> 8U)))));
    bufp->fullBit(oldp+614,((2U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                          >> 8U)))));
    bufp->fullBit(oldp+615,((3U == (3U & (vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[4U] 
                                          >> 8U)))));
    bufp->fullWData(oldp+616,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_to_mem_bus_reg),297);
    bufp->fullQData(oldp+626,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__rawdata),64);
    bufp->fullCData(oldp+628,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_addr_lowmask),8);
    bufp->fullCData(oldp+629,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_addr_lowmask),8);
    bufp->fullCData(oldp+630,((7U & vlSelf->ysyx_22040127_top__DOT__ex_to_mem_bus[2U])),3);
    bufp->fullQData(oldp+631,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[0]),64);
    bufp->fullQData(oldp+633,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[1]),64);
    bufp->fullQData(oldp+635,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[2]),64);
    bufp->fullQData(oldp+637,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[3]),64);
    bufp->fullQData(oldp+639,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[4]),64);
    bufp->fullQData(oldp+641,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[5]),64);
    bufp->fullQData(oldp+643,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[6]),64);
    bufp->fullQData(oldp+645,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[7]),64);
    bufp->fullQData(oldp+647,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[8]),64);
    bufp->fullQData(oldp+649,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[9]),64);
    bufp->fullQData(oldp+651,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[10]),64);
    bufp->fullQData(oldp+653,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[11]),64);
    bufp->fullQData(oldp+655,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[12]),64);
    bufp->fullQData(oldp+657,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[13]),64);
    bufp->fullQData(oldp+659,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[14]),64);
    bufp->fullQData(oldp+661,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[15]),64);
    bufp->fullQData(oldp+663,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[16]),64);
    bufp->fullQData(oldp+665,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[17]),64);
    bufp->fullQData(oldp+667,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[18]),64);
    bufp->fullQData(oldp+669,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[19]),64);
    bufp->fullQData(oldp+671,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[20]),64);
    bufp->fullQData(oldp+673,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[21]),64);
    bufp->fullQData(oldp+675,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[22]),64);
    bufp->fullQData(oldp+677,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[23]),64);
    bufp->fullQData(oldp+679,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[24]),64);
    bufp->fullQData(oldp+681,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[25]),64);
    bufp->fullQData(oldp+683,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[26]),64);
    bufp->fullQData(oldp+685,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[27]),64);
    bufp->fullQData(oldp+687,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[28]),64);
    bufp->fullQData(oldp+689,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[29]),64);
    bufp->fullQData(oldp+691,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[30]),64);
    bufp->fullQData(oldp+693,(vlSelf->ysyx_22040127_top__DOT____Vcellout__wb__rf[31]),64);
    bufp->fullQData(oldp+695,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__csr_mcycle),64);
    bufp->fullSData(oldp+697,((vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                               >> 0x14U)),12);
    bufp->fullQData(oldp+698,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0U])))),64);
    bufp->fullCData(oldp+700,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpp),2);
    bufp->fullBit(oldp+701,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mpie));
    bufp->fullBit(oldp+702,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mstatus_mie));
    bufp->fullBit(oldp+703,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__wb_flush));
    bufp->fullCData(oldp+704,((0x1fU & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                        >> 0xfU))),5);
    bufp->fullBit(oldp+705,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+706,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+707,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                   >> 9U))));
    bufp->fullBit(oldp+708,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                   >> 8U))));
    bufp->fullBit(oldp+709,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                   >> 7U))));
    bufp->fullBit(oldp+710,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                   >> 6U))));
    bufp->fullQData(oldp+711,((((QData)((IData)(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U])) 
                                << 0x2cU) | (((QData)((IData)(
                                                              vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[4U])) 
                                              << 0xcU) 
                                             | ((QData)((IData)(
                                                                vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U])) 
                                                >> 0x14U)))),64);
    bufp->fullBit(oldp+713,(((0xb00U == (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                         >> 0x14U)) 
                             & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                >> 0xaU))));
    bufp->fullBit(oldp+714,((1U & (((0xb00U == (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                                >> 0x14U)) 
                                    & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                       >> 0xaU)) | 
                                   (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                    >> 3U)))));
    bufp->fullBit(oldp+715,((1U & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                   >> 3U))));
    bufp->fullWData(oldp+716,(vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg),356);
    bufp->fullBit(oldp+728,((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]))));
    bufp->fullBit(oldp+729,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_hs));
    bufp->fullBit(oldp+730,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__b_hs));
    bufp->fullBit(oldp+731,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_hs));
    bufp->fullBit(oldp+732,(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_done));
    bufp->fullBit(oldp+733,(vlSelf->clk));
    bufp->fullBit(oldp+734,(vlSelf->rst));
    bufp->fullIData(oldp+735,(vlSelf->if_pc),32);
    bufp->fullBit(oldp+736,(vlSelf->wb_valid));
    bufp->fullIData(oldp+737,(vlSelf->wb_pc),32);
    bufp->fullQData(oldp+738,(vlSelf->mepc),64);
    bufp->fullQData(oldp+740,(vlSelf->mtvec),64);
    bufp->fullQData(oldp+742,(vlSelf->mstatus),64);
    bufp->fullQData(oldp+744,(vlSelf->mcause),64);
    bufp->fullQData(oldp+746,(vlSelf->mie),64);
    bufp->fullQData(oldp+748,(vlSelf->mip),64);
    bufp->fullQData(oldp+750,(vlSelf->mscratch),64);
    bufp->fullQData(oldp+752,(vlSelf->mtval),64);
    bufp->fullBit(oldp+754,(vlSelf->wb_memwrite));
    bufp->fullIData(oldp+755,(vlSelf->wb_instruction),32);
    bufp->fullBit(oldp+756,(vlSelf->cmt_skip));
    bufp->fullQData(oldp+757,(vlSelf->wb_diff_addr),64);
    bufp->fullQData(oldp+759,(vlSelf->wb_diff_data),64);
    bufp->fullBit(oldp+761,(vlSelf->axi_aw_ready_i));
    bufp->fullBit(oldp+762,(vlSelf->axi_aw_valid_o));
    bufp->fullQData(oldp+763,(vlSelf->axi_aw_addr_o),64);
    bufp->fullCData(oldp+765,(vlSelf->axi_aw_prot_o),3);
    bufp->fullCData(oldp+766,(vlSelf->axi_aw_id_o),4);
    bufp->fullBit(oldp+767,(vlSelf->axi_aw_user_o));
    bufp->fullCData(oldp+768,(vlSelf->axi_aw_len_o),8);
    bufp->fullCData(oldp+769,(vlSelf->axi_aw_size_o),3);
    bufp->fullCData(oldp+770,(vlSelf->axi_aw_burst_o),2);
    bufp->fullBit(oldp+771,(vlSelf->axi_aw_lock_o));
    bufp->fullCData(oldp+772,(vlSelf->axi_aw_cache_o),4);
    bufp->fullCData(oldp+773,(vlSelf->axi_aw_qos_o),4);
    bufp->fullCData(oldp+774,(vlSelf->axi_aw_region_o),4);
    bufp->fullBit(oldp+775,(vlSelf->axi_w_ready_i));
    bufp->fullBit(oldp+776,(vlSelf->axi_w_valid_o));
    bufp->fullQData(oldp+777,(vlSelf->axi_w_data_o),64);
    bufp->fullCData(oldp+779,(vlSelf->axi_w_strb_o),8);
    bufp->fullBit(oldp+780,(vlSelf->axi_w_last_o));
    bufp->fullBit(oldp+781,(vlSelf->axi_w_user_o));
    bufp->fullBit(oldp+782,(vlSelf->axi_b_ready_o));
    bufp->fullBit(oldp+783,(vlSelf->axi_b_valid_i));
    bufp->fullCData(oldp+784,(vlSelf->axi_b_resp_i),2);
    bufp->fullCData(oldp+785,(vlSelf->axi_b_id_i),4);
    bufp->fullBit(oldp+786,(vlSelf->axi_b_user_i));
    bufp->fullBit(oldp+787,(vlSelf->axi_ar_ready_i));
    bufp->fullBit(oldp+788,(vlSelf->axi_ar_valid_o));
    bufp->fullQData(oldp+789,(vlSelf->axi_ar_addr_o),64);
    bufp->fullCData(oldp+791,(vlSelf->axi_ar_prot_o),3);
    bufp->fullCData(oldp+792,(vlSelf->axi_ar_id_o),4);
    bufp->fullBit(oldp+793,(vlSelf->axi_ar_user_o));
    bufp->fullCData(oldp+794,(vlSelf->axi_ar_len_o),8);
    bufp->fullCData(oldp+795,(vlSelf->axi_ar_size_o),3);
    bufp->fullCData(oldp+796,(vlSelf->axi_ar_burst_o),2);
    bufp->fullBit(oldp+797,(vlSelf->axi_ar_lock_o));
    bufp->fullCData(oldp+798,(vlSelf->axi_ar_cache_o),4);
    bufp->fullCData(oldp+799,(vlSelf->axi_ar_qos_o),4);
    bufp->fullCData(oldp+800,(vlSelf->axi_ar_region_o),4);
    bufp->fullBit(oldp+801,(vlSelf->axi_r_ready_o));
    bufp->fullBit(oldp+802,(vlSelf->axi_r_valid_i));
    bufp->fullCData(oldp+803,(vlSelf->axi_r_resp_i),2);
    bufp->fullQData(oldp+804,(vlSelf->axi_r_data_i),64);
    bufp->fullBit(oldp+806,(vlSelf->axi_r_last_i));
    bufp->fullCData(oldp+807,(vlSelf->axi_r_id_i),4);
    bufp->fullBit(oldp+808,(vlSelf->axi_r_user_i));
    bufp->fullBit(oldp+809,(((IData)(vlSelf->axi_aw_ready_i) 
                             & (IData)(vlSelf->axi_aw_valid_o))));
    bufp->fullBit(oldp+810,(((IData)(vlSelf->axi_ar_ready_i) 
                             & (IData)(vlSelf->axi_ar_valid_o))));
    bufp->fullBit(oldp+811,(((IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__w_hs) 
                             & (IData)(vlSelf->axi_w_last_o))));
    bufp->fullBit(oldp+812,(((IData)(vlSelf->ysyx_22040127_top__DOT__d_req_wen)
                              ? (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__b_hs)
                              : (IData)(vlSelf->ysyx_22040127_top__DOT__axi__DOT__r_done))));
    bufp->fullIData(oldp+813,((IData)(vlSelf->mepc)),32);
    bufp->fullBit(oldp+814,(((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                               & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                                  == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                               >> 0xfU)))) 
                              & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                 >> 5U)) & (vlSelf->wb_pc 
                                            != vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U]))));
    bufp->fullBit(oldp+815,(((((0U != (0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                               & ((0x1fU & vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                                  == (0x1fU & (vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[1U] 
                                               >> 0x14U)))) 
                              & (vlSelf->ysyx_22040127_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                 >> 5U)) & (vlSelf->wb_pc 
                                            != vlSelf->ysyx_22040127_top__DOT__dec__DOT__if_to_id_bus_reg[0U]))));
    bufp->fullIData(oldp+816,(0x40U),32);
    bufp->fullIData(oldp+817,(4U),32);
    bufp->fullIData(oldp+818,(8U),32);
    bufp->fullIData(oldp+819,(1U),32);
    bufp->fullQData(oldp+820,(vlSelf->ysyx_22040127_top__DOT__if_pcdata),64);
    bufp->fullBit(oldp+822,(1U));
    bufp->fullQData(oldp+823,(vlSelf->ysyx_22040127_top__DOT__reg_wdata),64);
    bufp->fullBit(oldp+825,(vlSelf->ysyx_22040127_top__DOT__id_jalr));
    bufp->fullBit(oldp+826,(0U));
    bufp->fullCData(oldp+827,(0U),3);
    bufp->fullCData(oldp+828,(1U),3);
    bufp->fullCData(oldp+829,(2U),3);
    bufp->fullCData(oldp+830,(3U),3);
    bufp->fullCData(oldp+831,(4U),3);
    bufp->fullCData(oldp+832,(5U),3);
    bufp->fullCData(oldp+833,(6U),3);
    bufp->fullIData(oldp+834,(3U),32);
    bufp->fullCData(oldp+835,(0U),4);
    bufp->fullCData(oldp+836,(1U),8);
    bufp->fullIData(oldp+837,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mem_addr),32);
    bufp->fullBit(oldp+838,(vlSelf->ysyx_22040127_top__DOT__dcache__DOT__mem_wen));
    bufp->fullCData(oldp+839,(7U),3);
    bufp->fullIData(oldp+840,(0x80U),32);
    bufp->fullIData(oldp+841,(7U),32);
    bufp->fullIData(oldp+842,(0xdU),32);
    __Vtemp_hee7c191f__0[0U] = 0x39e46b1dU;
    __Vtemp_hee7c191f__0[1U] = 0x8deddc67U;
    __Vtemp_hee7c191f__0[2U] = 0x6018ce07U;
    __Vtemp_hee7c191f__0[3U] = 0xb96e4d82U;
    __Vtemp_hee7c191f__0[4U] = 0U;
    bufp->fullWData(oldp+843,(__Vtemp_hee7c191f__0),130);
    bufp->fullIData(oldp+848,(0xaU),32);
    bufp->fullIData(oldp+849,(0xdU),32);
    bufp->fullCData(oldp+850,(0U),6);
    bufp->fullCData(oldp+851,(0x10U),6);
    bufp->fullCData(oldp+852,(0x20U),6);
    bufp->fullCData(oldp+853,(1U),6);
    bufp->fullCData(oldp+854,(0xcU),6);
    bufp->fullCData(oldp+855,(8U),6);
    bufp->fullCData(oldp+856,(2U),6);
    bufp->fullCData(oldp+857,(4U),6);
    bufp->fullCData(oldp+858,(6U),6);
    bufp->fullCData(oldp+859,(0xeU),6);
    bufp->fullCData(oldp+860,(0x18U),6);
    bufp->fullCData(oldp+861,(0x1aU),6);
    bufp->fullCData(oldp+862,(0x1eU),6);
    bufp->fullCData(oldp+863,(0x1cU),6);
    bufp->fullCData(oldp+864,(0x21U),6);
    bufp->fullCData(oldp+865,(0x11U),6);
    bufp->fullCData(oldp+866,(3U),6);
    bufp->fullCData(oldp+867,(0xaU),6);
    bufp->fullCData(oldp+868,(0x2aU),6);
    bufp->fullCData(oldp+869,(0x19U),6);
    bufp->fullCData(oldp+870,(0xbU),6);
    bufp->fullCData(oldp+871,(0x2bU),6);
    bufp->fullCData(oldp+872,(0x1bU),6);
    bufp->fullCData(oldp+873,(0x1dU),6);
    bufp->fullCData(oldp+874,(0x1fU),6);
    bufp->fullCData(oldp+875,(0x16U),6);
    bufp->fullCData(oldp+876,(0x12U),6);
    bufp->fullCData(oldp+877,(0x14U),6);
    bufp->fullCData(oldp+878,(0x10U),5);
    bufp->fullCData(oldp+879,(0x17U),5);
    bufp->fullCData(oldp+880,(0x16U),5);
    bufp->fullCData(oldp+881,(0x14U),5);
    bufp->fullCData(oldp+882,(0x13U),5);
    bufp->fullCData(oldp+883,(0x15U),5);
    bufp->fullCData(oldp+884,(0x11U),5);
    bufp->fullCData(oldp+885,(0x18U),5);
    bufp->fullCData(oldp+886,(0x19U),5);
    bufp->fullCData(oldp+887,(0x1dU),5);
    bufp->fullCData(oldp+888,(0x12U),5);
    bufp->fullCData(oldp+889,(0U),2);
    bufp->fullCData(oldp+890,(1U),2);
    bufp->fullCData(oldp+891,(3U),2);
    bufp->fullCData(oldp+892,(2U),2);
    bufp->fullQData(oldp+893,(0ULL),64);
    bufp->fullIData(oldp+895,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__mem_addr),32);
    bufp->fullBit(oldp+896,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__mem_wen));
    bufp->fullCData(oldp+897,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__mem_strb),8);
    bufp->fullCData(oldp+898,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__cache_index_reg),7);
    bufp->fullQData(oldp+899,(vlSelf->ysyx_22040127_top__DOT__icache__DOT__ex_cache_wdata),64);
    bufp->fullBit(oldp+901,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sh));
    bufp->fullBit(oldp+902,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sw));
    bufp->fullBit(oldp+903,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__sd));
    bufp->fullQData(oldp+904,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__mem_wdata),64);
    bufp->fullCData(oldp+906,(vlSelf->ysyx_22040127_top__DOT__mem__DOT__ex_size),2);
    bufp->fullSData(oldp+907,(0x305U),12);
    bufp->fullSData(oldp+908,(0x342U),12);
    bufp->fullSData(oldp+909,(0x300U),12);
    bufp->fullSData(oldp+910,(0x341U),12);
    bufp->fullSData(oldp+911,(0x304U),12);
    bufp->fullSData(oldp+912,(0x344U),12);
    bufp->fullSData(oldp+913,(0x340U),12);
    bufp->fullSData(oldp+914,(0xf14U),12);
    bufp->fullSData(oldp+915,(0xb00U),12);
}
