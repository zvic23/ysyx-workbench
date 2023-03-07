// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050612_npc__Syms.h"


void Vysyx_22050612_npc___024root__traceInitSub0(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050612_npc___024root__traceInitTop(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050612_npc___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22050612_npc___024root__traceInitSub0(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+765,"clk", false,-1);
        tracep->declBit(c+766,"rst", false,-1);
        tracep->declQuad(c+767,"pc", false,-1, 63,0);
        tracep->declBit(c+765,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+766,"ysyx_22050612_npc rst", false,-1);
        tracep->declQuad(c+767,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declBus(c+124,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+125,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+127,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declQuad(c+129,"ysyx_22050612_npc imm_U", false,-1, 63,0);
        tracep->declQuad(c+131,"ysyx_22050612_npc imm_J", false,-1, 63,0);
        tracep->declQuad(c+133,"ysyx_22050612_npc imm_B", false,-1, 63,0);
        tracep->declQuad(c+135,"ysyx_22050612_npc imm_S", false,-1, 63,0);
        tracep->declBus(c+137,"ysyx_22050612_npc shamt", false,-1, 5,0);
        tracep->declBus(c+138,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+139,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+140,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBus(c+141,"ysyx_22050612_npc opcode", false,-1, 19,0);
        tracep->declBit(c+765,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+766,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+125,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+767,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+124,"ysyx_22050612_npc ifu inst", false,-1, 31,0);
        tracep->declQuad(c+142,"ysyx_22050612_npc ifu inst_mix", false,-1, 63,0);
        tracep->declBus(c+771,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+772,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+765,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+766,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+125,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+767,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+774,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+765,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+124,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+127,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declQuad(c+129,"ysyx_22050612_npc idu imm_U", false,-1, 63,0);
        tracep->declQuad(c+131,"ysyx_22050612_npc idu imm_J", false,-1, 63,0);
        tracep->declQuad(c+133,"ysyx_22050612_npc idu imm_B", false,-1, 63,0);
        tracep->declQuad(c+135,"ysyx_22050612_npc idu imm_S", false,-1, 63,0);
        tracep->declBus(c+137,"ysyx_22050612_npc idu shamt", false,-1, 5,0);
        tracep->declBus(c+138,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+139,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+140,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBus(c+141,"ysyx_22050612_npc idu opcode", false,-1, 19,0);
        tracep->declBus(c+775,"ysyx_22050612_npc idu decode0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+776,"ysyx_22050612_npc idu decode0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+777,"ysyx_22050612_npc idu decode0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+144,"ysyx_22050612_npc idu decode0 out", false,-1, 6,0);
        tracep->declBus(c+145,"ysyx_22050612_npc idu decode0 key", false,-1, 9,0);
        tracep->declArray(c+778,"ysyx_22050612_npc idu decode0 lut", false,-1, 135,0);
        tracep->declBus(c+775,"ysyx_22050612_npc idu decode0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+776,"ysyx_22050612_npc idu decode0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+777,"ysyx_22050612_npc idu decode0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+783,"ysyx_22050612_npc idu decode0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+144,"ysyx_22050612_npc idu decode0 i0 out", false,-1, 6,0);
        tracep->declBus(c+145,"ysyx_22050612_npc idu decode0 i0 key", false,-1, 9,0);
        tracep->declBus(c+784,"ysyx_22050612_npc idu decode0 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+778,"ysyx_22050612_npc idu decode0 i0 lut", false,-1, 135,0);
        tracep->declBus(c+785,"ysyx_22050612_npc idu decode0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22050612_npc idu decode0 i0 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+9+i*1,"ysyx_22050612_npc idu decode0 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+17+i*1,"ysyx_22050612_npc idu decode0 i0 data_list", true,(i+0), 6,0);}}
        tracep->declBus(c+146,"ysyx_22050612_npc idu decode0 i0 lut_out", false,-1, 6,0);
        tracep->declBit(c+147,"ysyx_22050612_npc idu decode0 i0 hit", false,-1);
        tracep->declBus(c+786,"ysyx_22050612_npc idu decode0 i0 i", false,-1, 31,0);
        tracep->declBus(c+787,"ysyx_22050612_npc idu decode1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+777,"ysyx_22050612_npc idu decode1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+788,"ysyx_22050612_npc idu decode1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+148,"ysyx_22050612_npc idu decode1 out", false,-1, 1,0);
        tracep->declBus(c+149,"ysyx_22050612_npc idu decode1 key", false,-1, 6,0);
        tracep->declBus(c+789,"ysyx_22050612_npc idu decode1 lut", false,-1, 26,0);
        tracep->declBus(c+787,"ysyx_22050612_npc idu decode1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+777,"ysyx_22050612_npc idu decode1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+788,"ysyx_22050612_npc idu decode1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+783,"ysyx_22050612_npc idu decode1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+148,"ysyx_22050612_npc idu decode1 i0 out", false,-1, 1,0);
        tracep->declBus(c+149,"ysyx_22050612_npc idu decode1 i0 key", false,-1, 6,0);
        tracep->declBus(c+790,"ysyx_22050612_npc idu decode1 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+789,"ysyx_22050612_npc idu decode1 i0 lut", false,-1, 26,0);
        tracep->declBus(c+791,"ysyx_22050612_npc idu decode1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+25+i*1,"ysyx_22050612_npc idu decode1 i0 pair_list", true,(i+0), 8,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+28+i*1,"ysyx_22050612_npc idu decode1 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+31+i*1,"ysyx_22050612_npc idu decode1 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+150,"ysyx_22050612_npc idu decode1 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+151,"ysyx_22050612_npc idu decode1 i0 hit", false,-1);
        tracep->declBus(c+792,"ysyx_22050612_npc idu decode1 i0 i", false,-1, 31,0);
        tracep->declBus(c+787,"ysyx_22050612_npc idu decode2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+785,"ysyx_22050612_npc idu decode2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+775,"ysyx_22050612_npc idu decode2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+152,"ysyx_22050612_npc idu decode2 out", false,-1, 7,0);
        tracep->declBus(c+153,"ysyx_22050612_npc idu decode2 key", false,-1, 16,0);
        tracep->declArray(c+793,"ysyx_22050612_npc idu decode2 lut", false,-1, 74,0);
        tracep->declBus(c+787,"ysyx_22050612_npc idu decode2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+785,"ysyx_22050612_npc idu decode2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+775,"ysyx_22050612_npc idu decode2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+783,"ysyx_22050612_npc idu decode2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+152,"ysyx_22050612_npc idu decode2 i0 out", false,-1, 7,0);
        tracep->declBus(c+153,"ysyx_22050612_npc idu decode2 i0 key", false,-1, 16,0);
        tracep->declBus(c+796,"ysyx_22050612_npc idu decode2 i0 default_out", false,-1, 7,0);
        tracep->declArray(c+793,"ysyx_22050612_npc idu decode2 i0 lut", false,-1, 74,0);
        tracep->declBus(c+797,"ysyx_22050612_npc idu decode2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+34+i*1,"ysyx_22050612_npc idu decode2 i0 pair_list", true,(i+0), 24,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+37+i*1,"ysyx_22050612_npc idu decode2 i0 key_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+40+i*1,"ysyx_22050612_npc idu decode2 i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+154,"ysyx_22050612_npc idu decode2 i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+155,"ysyx_22050612_npc idu decode2 i0 hit", false,-1);
        tracep->declBus(c+792,"ysyx_22050612_npc idu decode2 i0 i", false,-1, 31,0);
        tracep->declBus(c+798,"ysyx_22050612_npc idu decode3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+799,"ysyx_22050612_npc idu decode3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+788,"ysyx_22050612_npc idu decode3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+156,"ysyx_22050612_npc idu decode3 out", false,-1, 1,0);
        tracep->declBus(c+157,"ysyx_22050612_npc idu decode3 key", false,-1, 15,0);
        tracep->declBus(c+800,"ysyx_22050612_npc idu decode3 lut", false,-1, 17,0);
        tracep->declBus(c+798,"ysyx_22050612_npc idu decode3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+799,"ysyx_22050612_npc idu decode3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+788,"ysyx_22050612_npc idu decode3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+783,"ysyx_22050612_npc idu decode3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+156,"ysyx_22050612_npc idu decode3 i0 out", false,-1, 1,0);
        tracep->declBus(c+157,"ysyx_22050612_npc idu decode3 i0 key", false,-1, 15,0);
        tracep->declBus(c+790,"ysyx_22050612_npc idu decode3 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+800,"ysyx_22050612_npc idu decode3 i0 lut", false,-1, 17,0);
        tracep->declBus(c+801,"ysyx_22050612_npc idu decode3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+43+i*1,"ysyx_22050612_npc idu decode3 i0 pair_list", true,(i+0), 17,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+44+i*1,"ysyx_22050612_npc idu decode3 i0 key_list", true,(i+0), 15,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+45+i*1,"ysyx_22050612_npc idu decode3 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+158,"ysyx_22050612_npc idu decode3 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+159,"ysyx_22050612_npc idu decode3 i0 hit", false,-1);
        tracep->declBus(c+802,"ysyx_22050612_npc idu decode3 i0 i", false,-1, 31,0);
        tracep->declBit(c+765,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+127,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declQuad(c+129,"ysyx_22050612_npc exu imm_U", false,-1, 63,0);
        tracep->declQuad(c+131,"ysyx_22050612_npc exu imm_J", false,-1, 63,0);
        tracep->declQuad(c+133,"ysyx_22050612_npc exu imm_B", false,-1, 63,0);
        tracep->declQuad(c+135,"ysyx_22050612_npc exu imm_S", false,-1, 63,0);
        tracep->declBus(c+137,"ysyx_22050612_npc exu shamt", false,-1, 5,0);
        tracep->declBus(c+138,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+139,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+140,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu opcode", false,-1, 19,0);
        tracep->declQuad(c+767,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+125,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+160,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+162,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+164,"ysyx_22050612_npc exu wdata_reg", false,-1, 63,0);
        tracep->declBit(c+166,"ysyx_22050612_npc exu wen", false,-1);
        tracep->declBit(c+167,"ysyx_22050612_npc exu wen_fix", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+168+i*2,"ysyx_22050612_npc exu gpr", true,(i+0), 63,0);}}
        tracep->declQuad(c+769,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declBus(c+232,"ysyx_22050612_npc exu mode", false,-1, 7,0);
        tracep->declQuad(c+233,"ysyx_22050612_npc exu operator_a", false,-1, 63,0);
        tracep->declQuad(c+235,"ysyx_22050612_npc exu operator_b", false,-1, 63,0);
        tracep->declQuad(c+237,"ysyx_22050612_npc exu result_alu0", false,-1, 63,0);
        tracep->declQuad(c+239,"ysyx_22050612_npc exu raddr", false,-1, 63,0);
        tracep->declQuad(c+241,"ysyx_22050612_npc exu rdata", false,-1, 63,0);
        tracep->declQuad(c+243,"ysyx_22050612_npc exu waddr", false,-1, 63,0);
        tracep->declQuad(c+245,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBus(c+247,"ysyx_22050612_npc exu wmask", false,-1, 7,0);
        tracep->declBus(c+803,"ysyx_22050612_npc exu cpu_gpr_group ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+771,"ysyx_22050612_npc exu cpu_gpr_group DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+765,"ysyx_22050612_npc exu cpu_gpr_group clk", false,-1);
        tracep->declQuad(c+164,"ysyx_22050612_npc exu cpu_gpr_group wdata", false,-1, 63,0);
        tracep->declBus(c+138,"ysyx_22050612_npc exu cpu_gpr_group waddr", false,-1, 4,0);
        tracep->declBit(c+167,"ysyx_22050612_npc exu cpu_gpr_group wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+248+i*2,"ysyx_22050612_npc exu cpu_gpr_group rf", true,(i+0), 63,0);}}
        tracep->declBus(c+804,"ysyx_22050612_npc exu gpr_write_enable NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu gpr_write_enable KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+798,"ysyx_22050612_npc exu gpr_write_enable DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+166,"ysyx_22050612_npc exu gpr_write_enable out", false,-1, 0,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu gpr_write_enable key", false,-1, 19,0);
        tracep->declArray(c+806,"ysyx_22050612_npc exu gpr_write_enable lut", false,-1, 251,0);
        tracep->declBus(c+804,"ysyx_22050612_npc exu gpr_write_enable i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu gpr_write_enable i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+798,"ysyx_22050612_npc exu gpr_write_enable i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+783,"ysyx_22050612_npc exu gpr_write_enable i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+166,"ysyx_22050612_npc exu gpr_write_enable i0 out", false,-1, 0,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu gpr_write_enable i0 key", false,-1, 19,0);
        tracep->declBus(c+814,"ysyx_22050612_npc exu gpr_write_enable i0 default_out", false,-1, 0,0);
        tracep->declArray(c+806,"ysyx_22050612_npc exu gpr_write_enable i0 lut", false,-1, 251,0);
        tracep->declBus(c+815,"ysyx_22050612_npc exu gpr_write_enable i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+46+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 pair_list", true,(i+0), 20,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+58+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+70+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+312,"ysyx_22050612_npc exu gpr_write_enable i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+313,"ysyx_22050612_npc exu gpr_write_enable i0 hit", false,-1);
        tracep->declBus(c+816,"ysyx_22050612_npc exu gpr_write_enable i0 i", false,-1, 31,0);
        tracep->declBus(c+804,"ysyx_22050612_npc exu gpr_write_data NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu gpr_write_data KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+771,"ysyx_22050612_npc exu gpr_write_data DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+164,"ysyx_22050612_npc exu gpr_write_data out", false,-1, 63,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu gpr_write_data key", false,-1, 19,0);
        tracep->declArray(c+314,"ysyx_22050612_npc exu gpr_write_data lut", false,-1, 1007,0);
        tracep->declBus(c+804,"ysyx_22050612_npc exu gpr_write_data i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu gpr_write_data i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+771,"ysyx_22050612_npc exu gpr_write_data i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+783,"ysyx_22050612_npc exu gpr_write_data i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+164,"ysyx_22050612_npc exu gpr_write_data i0 out", false,-1, 63,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu gpr_write_data i0 key", false,-1, 19,0);
        tracep->declQuad(c+817,"ysyx_22050612_npc exu gpr_write_data i0 default_out", false,-1, 63,0);
        tracep->declArray(c+314,"ysyx_22050612_npc exu gpr_write_data i0 lut", false,-1, 1007,0);
        tracep->declBus(c+819,"ysyx_22050612_npc exu gpr_write_data i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<12; i++) {
                tracep->declArray(c+346+i*3,"ysyx_22050612_npc exu gpr_write_data i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declBus(c+382+i*1,"ysyx_22050612_npc exu gpr_write_data i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<12; i++) {
                tracep->declQuad(c+394+i*2,"ysyx_22050612_npc exu gpr_write_data i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+418,"ysyx_22050612_npc exu gpr_write_data i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+420,"ysyx_22050612_npc exu gpr_write_data i0 hit", false,-1);
        tracep->declBus(c+816,"ysyx_22050612_npc exu gpr_write_data i0 i", false,-1, 31,0);
        tracep->declBus(c+787,"ysyx_22050612_npc exu cpu_pc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu cpu_pc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+771,"ysyx_22050612_npc exu cpu_pc DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+125,"ysyx_22050612_npc exu cpu_pc out", false,-1, 63,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu cpu_pc key", false,-1, 19,0);
        tracep->declQuad(c+769,"ysyx_22050612_npc exu cpu_pc default_out", false,-1, 63,0);
        tracep->declArray(c+421,"ysyx_22050612_npc exu cpu_pc lut", false,-1, 251,0);
        tracep->declBus(c+787,"ysyx_22050612_npc exu cpu_pc i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu cpu_pc i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+771,"ysyx_22050612_npc exu cpu_pc i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+798,"ysyx_22050612_npc exu cpu_pc i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+125,"ysyx_22050612_npc exu cpu_pc i0 out", false,-1, 63,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu cpu_pc i0 key", false,-1, 19,0);
        tracep->declQuad(c+769,"ysyx_22050612_npc exu cpu_pc i0 default_out", false,-1, 63,0);
        tracep->declArray(c+421,"ysyx_22050612_npc exu cpu_pc i0 lut", false,-1, 251,0);
        tracep->declBus(c+819,"ysyx_22050612_npc exu cpu_pc i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+429+i*3,"ysyx_22050612_npc exu cpu_pc i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+438+i*1,"ysyx_22050612_npc exu cpu_pc i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+441+i*2,"ysyx_22050612_npc exu cpu_pc i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+447,"ysyx_22050612_npc exu cpu_pc i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+449,"ysyx_22050612_npc exu cpu_pc i0 hit", false,-1);
        tracep->declBus(c+792,"ysyx_22050612_npc exu cpu_pc i0 i", false,-1, 31,0);
        tracep->declBus(c+820,"ysyx_22050612_npc exu operator0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu operator0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+771,"ysyx_22050612_npc exu operator0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+233,"ysyx_22050612_npc exu operator0 out", false,-1, 63,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu operator0 key", false,-1, 19,0);
        tracep->declArray(c+450,"ysyx_22050612_npc exu operator0 lut", false,-1, 1091,0);
        tracep->declBus(c+820,"ysyx_22050612_npc exu operator0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu operator0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+771,"ysyx_22050612_npc exu operator0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+783,"ysyx_22050612_npc exu operator0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+233,"ysyx_22050612_npc exu operator0 i0 out", false,-1, 63,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu operator0 i0 key", false,-1, 19,0);
        tracep->declQuad(c+817,"ysyx_22050612_npc exu operator0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+450,"ysyx_22050612_npc exu operator0 i0 lut", false,-1, 1091,0);
        tracep->declBus(c+819,"ysyx_22050612_npc exu operator0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<13; i++) {
                tracep->declArray(c+485+i*3,"ysyx_22050612_npc exu operator0 i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+524+i*1,"ysyx_22050612_npc exu operator0 i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declQuad(c+537+i*2,"ysyx_22050612_npc exu operator0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+563,"ysyx_22050612_npc exu operator0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+565,"ysyx_22050612_npc exu operator0 i0 hit", false,-1);
        tracep->declBus(c+821,"ysyx_22050612_npc exu operator0 i0 i", false,-1, 31,0);
        tracep->declBus(c+820,"ysyx_22050612_npc exu operator1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu operator1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+771,"ysyx_22050612_npc exu operator1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+235,"ysyx_22050612_npc exu operator1 out", false,-1, 63,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu operator1 key", false,-1, 19,0);
        tracep->declArray(c+566,"ysyx_22050612_npc exu operator1 lut", false,-1, 1091,0);
        tracep->declBus(c+820,"ysyx_22050612_npc exu operator1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu operator1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+771,"ysyx_22050612_npc exu operator1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+783,"ysyx_22050612_npc exu operator1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+235,"ysyx_22050612_npc exu operator1 i0 out", false,-1, 63,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu operator1 i0 key", false,-1, 19,0);
        tracep->declQuad(c+817,"ysyx_22050612_npc exu operator1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+566,"ysyx_22050612_npc exu operator1 i0 lut", false,-1, 1091,0);
        tracep->declBus(c+819,"ysyx_22050612_npc exu operator1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<13; i++) {
                tracep->declArray(c+601+i*3,"ysyx_22050612_npc exu operator1 i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+640+i*1,"ysyx_22050612_npc exu operator1 i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declQuad(c+653+i*2,"ysyx_22050612_npc exu operator1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+679,"ysyx_22050612_npc exu operator1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+681,"ysyx_22050612_npc exu operator1 i0 hit", false,-1);
        tracep->declBus(c+821,"ysyx_22050612_npc exu operator1 i0 i", false,-1, 31,0);
        tracep->declBus(c+820,"ysyx_22050612_npc exu alumode NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu alumode KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+775,"ysyx_22050612_npc exu alumode DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+232,"ysyx_22050612_npc exu alumode out", false,-1, 7,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu alumode key", false,-1, 19,0);
        tracep->declArray(c+822,"ysyx_22050612_npc exu alumode lut", false,-1, 363,0);
        tracep->declBus(c+820,"ysyx_22050612_npc exu alumode i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu alumode i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+775,"ysyx_22050612_npc exu alumode i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+783,"ysyx_22050612_npc exu alumode i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+232,"ysyx_22050612_npc exu alumode i0 out", false,-1, 7,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu alumode i0 key", false,-1, 19,0);
        tracep->declBus(c+796,"ysyx_22050612_npc exu alumode i0 default_out", false,-1, 7,0);
        tracep->declArray(c+822,"ysyx_22050612_npc exu alumode i0 lut", false,-1, 363,0);
        tracep->declBus(c+834,"ysyx_22050612_npc exu alumode i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+82+i*1,"ysyx_22050612_npc exu alumode i0 pair_list", true,(i+0), 27,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+95+i*1,"ysyx_22050612_npc exu alumode i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+108+i*1,"ysyx_22050612_npc exu alumode i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+682,"ysyx_22050612_npc exu alumode i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+683,"ysyx_22050612_npc exu alumode i0 hit", false,-1);
        tracep->declBus(c+821,"ysyx_22050612_npc exu alumode i0 i", false,-1, 31,0);
        tracep->declBus(c+232,"ysyx_22050612_npc exu alu0 mode", false,-1, 7,0);
        tracep->declQuad(c+233,"ysyx_22050612_npc exu alu0 A", false,-1, 63,0);
        tracep->declQuad(c+235,"ysyx_22050612_npc exu alu0 B", false,-1, 63,0);
        tracep->declQuad(c+237,"ysyx_22050612_npc exu alu0 Z", false,-1, 63,0);
        tracep->declQuad(c+684,"ysyx_22050612_npc exu alu0 add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+686,"ysyx_22050612_npc exu alu0 slt_result", false,-1, 63,0);
        tracep->declQuad(c+688,"ysyx_22050612_npc exu alu0 C", false,-1, 63,0);
        tracep->declBus(c+787,"ysyx_22050612_npc exu alu0 alu_result_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+775,"ysyx_22050612_npc exu alu0 alu_result_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+771,"ysyx_22050612_npc exu alu0 alu_result_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+237,"ysyx_22050612_npc exu alu0 alu_result_select out", false,-1, 63,0);
        tracep->declBus(c+232,"ysyx_22050612_npc exu alu0 alu_result_select key", false,-1, 7,0);
        tracep->declArray(c+690,"ysyx_22050612_npc exu alu0 alu_result_select lut", false,-1, 215,0);
        tracep->declBus(c+787,"ysyx_22050612_npc exu alu0 alu_result_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+775,"ysyx_22050612_npc exu alu0 alu_result_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+771,"ysyx_22050612_npc exu alu0 alu_result_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+783,"ysyx_22050612_npc exu alu0 alu_result_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+237,"ysyx_22050612_npc exu alu0 alu_result_select i0 out", false,-1, 63,0);
        tracep->declBus(c+232,"ysyx_22050612_npc exu alu0 alu_result_select i0 key", false,-1, 7,0);
        tracep->declQuad(c+817,"ysyx_22050612_npc exu alu0 alu_result_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+690,"ysyx_22050612_npc exu alu0 alu_result_select i0 lut", false,-1, 215,0);
        tracep->declBus(c+835,"ysyx_22050612_npc exu alu0 alu_result_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+697+i*3,"ysyx_22050612_npc exu alu0 alu_result_select i0 pair_list", true,(i+0), 71,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+706+i*1,"ysyx_22050612_npc exu alu0 alu_result_select i0 key_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+709+i*2,"ysyx_22050612_npc exu alu0 alu_result_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+715,"ysyx_22050612_npc exu alu0 alu_result_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+717,"ysyx_22050612_npc exu alu0 alu_result_select i0 hit", false,-1);
        tracep->declBus(c+792,"ysyx_22050612_npc exu alu0 alu_result_select i0 i", false,-1, 31,0);
        tracep->declBus(c+788,"ysyx_22050612_npc exu raddr_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu raddr_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+771,"ysyx_22050612_npc exu raddr_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+239,"ysyx_22050612_npc exu raddr_select out", false,-1, 63,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu raddr_select key", false,-1, 19,0);
        tracep->declArray(c+718,"ysyx_22050612_npc exu raddr_select lut", false,-1, 167,0);
        tracep->declBus(c+788,"ysyx_22050612_npc exu raddr_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu raddr_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+771,"ysyx_22050612_npc exu raddr_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+783,"ysyx_22050612_npc exu raddr_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+239,"ysyx_22050612_npc exu raddr_select i0 out", false,-1, 63,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu raddr_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+817,"ysyx_22050612_npc exu raddr_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+718,"ysyx_22050612_npc exu raddr_select i0 lut", false,-1, 167,0);
        tracep->declBus(c+819,"ysyx_22050612_npc exu raddr_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+724+i*3,"ysyx_22050612_npc exu raddr_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+730+i*1,"ysyx_22050612_npc exu raddr_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+732+i*2,"ysyx_22050612_npc exu raddr_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+736,"ysyx_22050612_npc exu raddr_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+738,"ysyx_22050612_npc exu raddr_select i0 hit", false,-1);
        tracep->declBus(c+836,"ysyx_22050612_npc exu raddr_select i0 i", false,-1, 31,0);
        tracep->declBus(c+798,"ysyx_22050612_npc exu waddr_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu waddr_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+771,"ysyx_22050612_npc exu waddr_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+243,"ysyx_22050612_npc exu waddr_select out", false,-1, 63,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu waddr_select key", false,-1, 19,0);
        tracep->declArray(c+739,"ysyx_22050612_npc exu waddr_select lut", false,-1, 83,0);
        tracep->declBus(c+798,"ysyx_22050612_npc exu waddr_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu waddr_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+771,"ysyx_22050612_npc exu waddr_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+783,"ysyx_22050612_npc exu waddr_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+243,"ysyx_22050612_npc exu waddr_select i0 out", false,-1, 63,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu waddr_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+817,"ysyx_22050612_npc exu waddr_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+739,"ysyx_22050612_npc exu waddr_select i0 lut", false,-1, 83,0);
        tracep->declBus(c+819,"ysyx_22050612_npc exu waddr_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+742+i*3,"ysyx_22050612_npc exu waddr_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+745+i*1,"ysyx_22050612_npc exu waddr_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+746+i*2,"ysyx_22050612_npc exu waddr_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+748,"ysyx_22050612_npc exu waddr_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+750,"ysyx_22050612_npc exu waddr_select i0 hit", false,-1);
        tracep->declBus(c+802,"ysyx_22050612_npc exu waddr_select i0 i", false,-1, 31,0);
        tracep->declBus(c+798,"ysyx_22050612_npc exu wdata_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu wdata_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+771,"ysyx_22050612_npc exu wdata_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+245,"ysyx_22050612_npc exu wdata_select out", false,-1, 63,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu wdata_select key", false,-1, 19,0);
        tracep->declArray(c+751,"ysyx_22050612_npc exu wdata_select lut", false,-1, 83,0);
        tracep->declBus(c+798,"ysyx_22050612_npc exu wdata_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu wdata_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+771,"ysyx_22050612_npc exu wdata_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+783,"ysyx_22050612_npc exu wdata_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+245,"ysyx_22050612_npc exu wdata_select i0 out", false,-1, 63,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu wdata_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+817,"ysyx_22050612_npc exu wdata_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+751,"ysyx_22050612_npc exu wdata_select i0 lut", false,-1, 83,0);
        tracep->declBus(c+819,"ysyx_22050612_npc exu wdata_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+754+i*3,"ysyx_22050612_npc exu wdata_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+757+i*1,"ysyx_22050612_npc exu wdata_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+758+i*2,"ysyx_22050612_npc exu wdata_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+760,"ysyx_22050612_npc exu wdata_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+762,"ysyx_22050612_npc exu wdata_select i0 hit", false,-1);
        tracep->declBus(c+802,"ysyx_22050612_npc exu wdata_select i0 i", false,-1, 31,0);
        tracep->declBus(c+798,"ysyx_22050612_npc exu wmask_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu wmask_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+775,"ysyx_22050612_npc exu wmask_select DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+247,"ysyx_22050612_npc exu wmask_select out", false,-1, 7,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu wmask_select key", false,-1, 19,0);
        tracep->declBus(c+837,"ysyx_22050612_npc exu wmask_select lut", false,-1, 27,0);
        tracep->declBus(c+798,"ysyx_22050612_npc exu wmask_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+805,"ysyx_22050612_npc exu wmask_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+775,"ysyx_22050612_npc exu wmask_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+783,"ysyx_22050612_npc exu wmask_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+247,"ysyx_22050612_npc exu wmask_select i0 out", false,-1, 7,0);
        tracep->declBus(c+141,"ysyx_22050612_npc exu wmask_select i0 key", false,-1, 19,0);
        tracep->declBus(c+796,"ysyx_22050612_npc exu wmask_select i0 default_out", false,-1, 7,0);
        tracep->declBus(c+837,"ysyx_22050612_npc exu wmask_select i0 lut", false,-1, 27,0);
        tracep->declBus(c+834,"ysyx_22050612_npc exu wmask_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+121+i*1,"ysyx_22050612_npc exu wmask_select i0 pair_list", true,(i+0), 27,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+122+i*1,"ysyx_22050612_npc exu wmask_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+123+i*1,"ysyx_22050612_npc exu wmask_select i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+763,"ysyx_22050612_npc exu wmask_select i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+764,"ysyx_22050612_npc exu wmask_select i0 hit", false,-1);
        tracep->declBus(c+802,"ysyx_22050612_npc exu wmask_select i0 i", false,-1, 31,0);
    }
}

void Vysyx_22050612_npc___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22050612_npc___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22050612_npc___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22050612_npc___024root__traceRegister(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22050612_npc___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22050612_npc___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22050612_npc___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22050612_npc___024root__traceFullSub0(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050612_npc___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050612_npc___024root* const __restrict vlSelf = static_cast<Vysyx_22050612_npc___024root*>(voidSelf);
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050612_npc___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

extern const VlWide<8>/*255:0*/ Vysyx_22050612_npc__ConstPool__CONST_9e0208f0_0;
extern const VlWide<12>/*383:0*/ Vysyx_22050612_npc__ConstPool__CONST_232720d5_0;

void Vysyx_22050612_npc___024root__traceFullSub0(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp941;
    VlWide<3>/*95:0*/ __Vtemp942;
    VlWide<5>/*159:0*/ __Vtemp943;
    VlWide<3>/*95:0*/ __Vtemp944;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[0]),17);
        tracep->fullIData(oldp+2,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[1]),17);
        tracep->fullIData(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[2]),17);
        tracep->fullIData(oldp+4,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[3]),17);
        tracep->fullIData(oldp+5,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[4]),17);
        tracep->fullIData(oldp+6,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[5]),17);
        tracep->fullIData(oldp+7,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[6]),17);
        tracep->fullIData(oldp+8,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[7]),17);
        tracep->fullSData(oldp+9,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+10,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+11,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[2]),10);
        tracep->fullSData(oldp+12,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[3]),10);
        tracep->fullSData(oldp+13,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[4]),10);
        tracep->fullSData(oldp+14,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[5]),10);
        tracep->fullSData(oldp+15,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[6]),10);
        tracep->fullSData(oldp+16,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[7]),10);
        tracep->fullCData(oldp+17,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0]),7);
        tracep->fullCData(oldp+18,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[1]),7);
        tracep->fullCData(oldp+19,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[2]),7);
        tracep->fullCData(oldp+20,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[3]),7);
        tracep->fullCData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[4]),7);
        tracep->fullCData(oldp+22,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[5]),7);
        tracep->fullCData(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[6]),7);
        tracep->fullCData(oldp+24,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[7]),7);
        tracep->fullSData(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[0]),9);
        tracep->fullSData(oldp+26,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[1]),9);
        tracep->fullSData(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[2]),9);
        tracep->fullCData(oldp+28,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+29,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+30,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+31,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+32,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+33,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[2]),2);
        tracep->fullIData(oldp+34,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0]),25);
        tracep->fullIData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[1]),25);
        tracep->fullIData(oldp+36,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[2]),25);
        tracep->fullIData(oldp+37,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0]),17);
        tracep->fullIData(oldp+38,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[1]),17);
        tracep->fullIData(oldp+39,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[2]),17);
        tracep->fullCData(oldp+40,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+42,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[2]),8);
        tracep->fullIData(oldp+43,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list[0]),18);
        tracep->fullSData(oldp+44,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[0]),16);
        tracep->fullCData(oldp+45,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[0]),2);
        tracep->fullIData(oldp+46,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0]),21);
        tracep->fullIData(oldp+47,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[1]),21);
        tracep->fullIData(oldp+48,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[2]),21);
        tracep->fullIData(oldp+49,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[3]),21);
        tracep->fullIData(oldp+50,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[4]),21);
        tracep->fullIData(oldp+51,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[5]),21);
        tracep->fullIData(oldp+52,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[6]),21);
        tracep->fullIData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[7]),21);
        tracep->fullIData(oldp+54,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[8]),21);
        tracep->fullIData(oldp+55,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[9]),21);
        tracep->fullIData(oldp+56,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[10]),21);
        tracep->fullIData(oldp+57,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[11]),21);
        tracep->fullIData(oldp+58,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+59,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+60,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+61,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+62,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+63,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+64,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+65,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+66,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+67,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+68,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+69,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[11]),20);
        tracep->fullBit(oldp+70,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+72,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[2]));
        tracep->fullBit(oldp+73,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[3]));
        tracep->fullBit(oldp+74,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[4]));
        tracep->fullBit(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[5]));
        tracep->fullBit(oldp+76,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[6]));
        tracep->fullBit(oldp+77,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[7]));
        tracep->fullBit(oldp+78,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[8]));
        tracep->fullBit(oldp+79,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[9]));
        tracep->fullBit(oldp+80,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[10]));
        tracep->fullBit(oldp+81,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[11]));
        tracep->fullIData(oldp+82,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0]),28);
        tracep->fullIData(oldp+83,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[1]),28);
        tracep->fullIData(oldp+84,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[2]),28);
        tracep->fullIData(oldp+85,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[3]),28);
        tracep->fullIData(oldp+86,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[4]),28);
        tracep->fullIData(oldp+87,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[5]),28);
        tracep->fullIData(oldp+88,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[6]),28);
        tracep->fullIData(oldp+89,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[7]),28);
        tracep->fullIData(oldp+90,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[8]),28);
        tracep->fullIData(oldp+91,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[9]),28);
        tracep->fullIData(oldp+92,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[10]),28);
        tracep->fullIData(oldp+93,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[11]),28);
        tracep->fullIData(oldp+94,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[12]),28);
        tracep->fullIData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+96,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+97,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+98,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+99,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+100,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+101,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+102,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+103,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+104,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+105,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+106,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[11]),20);
        tracep->fullIData(oldp+107,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[12]),20);
        tracep->fullCData(oldp+108,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+109,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+110,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+111,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+112,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+113,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+114,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+115,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+116,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[8]),8);
        tracep->fullCData(oldp+117,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[9]),8);
        tracep->fullCData(oldp+118,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[10]),8);
        tracep->fullCData(oldp+119,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[11]),8);
        tracep->fullCData(oldp+120,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[12]),8);
        tracep->fullIData(oldp+121,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[0]),28);
        tracep->fullIData(oldp+122,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullCData(oldp+123,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[0]),8);
        tracep->fullIData(oldp+124,(vlSelf->ysyx_22050612_npc__DOT__inst),32);
        tracep->fullQData(oldp+125,(vlSelf->ysyx_22050612_npc__DOT__dnpc),64);
        tracep->fullQData(oldp+127,(vlSelf->ysyx_22050612_npc__DOT__imm_I),64);
        tracep->fullQData(oldp+129,(vlSelf->ysyx_22050612_npc__DOT__imm_U),64);
        tracep->fullQData(oldp+131,(((vlSelf->ysyx_22050612_npc__DOT__inst 
                                      >> 0x1fU) ? (0xffffffffffe00000ULL 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                          >> 0xbU)) 
                                                                      | ((0xff000U 
                                                                          & vlSelf->ysyx_22050612_npc__DOT__inst) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                                >> 9U)) 
                                                                            | (0x7feU 
                                                                               & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                                >> 0x14U))))))))
                                      : (((QData)((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                           >> 0x1fU))) 
                                          << 0x14U) 
                                         | (QData)((IData)(
                                                           ((0xff000U 
                                                             & vlSelf->ysyx_22050612_npc__DOT__inst) 
                                                            | ((0x800U 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 9U)) 
                                                               | (0x7feU 
                                                                  & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                     >> 0x14U))))))))),64);
        tracep->fullQData(oldp+133,(((0x1000U & vlSelf->ysyx_22050612_npc__DOT__inst)
                                      ? (0xffffffffffffe000ULL 
                                         | (QData)((IData)(
                                                           ((0x1000U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                >> 0x13U)) 
                                                            | ((0x800U 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   << 4U)) 
                                                               | ((0x7e0U 
                                                                   & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1eU 
                                                                     & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                        >> 7U))))))))
                                      : (((QData)((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                           >> 0x1fU))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           ((0x800U 
                                                             & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                << 4U)) 
                                                            | ((0x7e0U 
                                                                & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                   >> 0x14U)) 
                                                               | (0x1eU 
                                                                  & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                     >> 7U))))))))),64);
        tracep->fullQData(oldp+135,(((vlSelf->ysyx_22050612_npc__DOT__inst 
                                      >> 0x1fU) ? (0xfffffffffffff000ULL 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                          >> 0x14U)) 
                                                                      | (0x1fU 
                                                                         & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                            >> 7U))))))
                                      : (((QData)((IData)(
                                                          (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                           >> 0x19U))) 
                                          << 5U) | (QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                                                       >> 7U))))))),64);
        tracep->fullCData(oldp+137,((0x3fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0x14U))),6);
        tracep->fullCData(oldp+138,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+139,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+140,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+141,(vlSelf->ysyx_22050612_npc__DOT__opcode),20);
        tracep->fullQData(oldp+142,(vlSelf->ysyx_22050612_npc__DOT__ifu__DOT__inst_mix),64);
        tracep->fullCData(oldp+144,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode0____pinNumber1),7);
        tracep->fullSData(oldp+145,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2),10);
        tracep->fullCData(oldp+146,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out),7);
        tracep->fullBit(oldp+147,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+148,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode1____pinNumber1),2);
        tracep->fullCData(oldp+149,((0x7fU & vlSelf->ysyx_22050612_npc__DOT__inst)),7);
        tracep->fullCData(oldp+150,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+151,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+152,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode2____pinNumber1),8);
        tracep->fullIData(oldp+153,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2),17);
        tracep->fullCData(oldp+154,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+155,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+156,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode3____pinNumber1),2);
        tracep->fullSData(oldp+157,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2),16);
        tracep->fullCData(oldp+158,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+159,(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2) 
                                   == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list
                                   [0U])));
        tracep->fullQData(oldp+160,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1),64);
        tracep->fullQData(oldp+162,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2),64);
        tracep->fullQData(oldp+164,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_reg),64);
        tracep->fullBit(oldp+166,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
        tracep->fullBit(oldp+167,(((0U != (0x1fU & 
                                           (vlSelf->ysyx_22050612_npc__DOT__inst 
                                            >> 7U))) 
                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen))));
        tracep->fullQData(oldp+168,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
        tracep->fullQData(oldp+170,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
        tracep->fullQData(oldp+172,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
        tracep->fullQData(oldp+174,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
        tracep->fullQData(oldp+176,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
        tracep->fullQData(oldp+178,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
        tracep->fullQData(oldp+180,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
        tracep->fullQData(oldp+182,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
        tracep->fullQData(oldp+184,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
        tracep->fullQData(oldp+186,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
        tracep->fullQData(oldp+188,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
        tracep->fullQData(oldp+190,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
        tracep->fullQData(oldp+192,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
        tracep->fullQData(oldp+194,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
        tracep->fullQData(oldp+196,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
        tracep->fullQData(oldp+198,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
        tracep->fullQData(oldp+200,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
        tracep->fullQData(oldp+202,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
        tracep->fullQData(oldp+204,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
        tracep->fullQData(oldp+206,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
        tracep->fullQData(oldp+208,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
        tracep->fullQData(oldp+210,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
        tracep->fullQData(oldp+212,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
        tracep->fullQData(oldp+214,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
        tracep->fullQData(oldp+216,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
        tracep->fullQData(oldp+218,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
        tracep->fullQData(oldp+220,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
        tracep->fullQData(oldp+222,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
        tracep->fullQData(oldp+224,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
        tracep->fullQData(oldp+226,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
        tracep->fullQData(oldp+228,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
        tracep->fullQData(oldp+230,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
        tracep->fullCData(oldp+232,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode),8);
        tracep->fullQData(oldp+233,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a),64);
        tracep->fullQData(oldp+235,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b),64);
        tracep->fullQData(oldp+237,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0),64);
        tracep->fullQData(oldp+239,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr),64);
        tracep->fullQData(oldp+241,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata),64);
        tracep->fullQData(oldp+243,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr),64);
        tracep->fullQData(oldp+245,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
        tracep->fullCData(oldp+247,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask),8);
        tracep->fullQData(oldp+248,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[0]),64);
        tracep->fullQData(oldp+250,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[1]),64);
        tracep->fullQData(oldp+252,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[2]),64);
        tracep->fullQData(oldp+254,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[3]),64);
        tracep->fullQData(oldp+256,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[4]),64);
        tracep->fullQData(oldp+258,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[5]),64);
        tracep->fullQData(oldp+260,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[6]),64);
        tracep->fullQData(oldp+262,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[7]),64);
        tracep->fullQData(oldp+264,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[8]),64);
        tracep->fullQData(oldp+266,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[9]),64);
        tracep->fullQData(oldp+268,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[10]),64);
        tracep->fullQData(oldp+270,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[11]),64);
        tracep->fullQData(oldp+272,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[12]),64);
        tracep->fullQData(oldp+274,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[13]),64);
        tracep->fullQData(oldp+276,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[14]),64);
        tracep->fullQData(oldp+278,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[15]),64);
        tracep->fullQData(oldp+280,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[16]),64);
        tracep->fullQData(oldp+282,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[17]),64);
        tracep->fullQData(oldp+284,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[18]),64);
        tracep->fullQData(oldp+286,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[19]),64);
        tracep->fullQData(oldp+288,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[20]),64);
        tracep->fullQData(oldp+290,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[21]),64);
        tracep->fullQData(oldp+292,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[22]),64);
        tracep->fullQData(oldp+294,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[23]),64);
        tracep->fullQData(oldp+296,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[24]),64);
        tracep->fullQData(oldp+298,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[25]),64);
        tracep->fullQData(oldp+300,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[26]),64);
        tracep->fullQData(oldp+302,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[27]),64);
        tracep->fullQData(oldp+304,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[28]),64);
        tracep->fullQData(oldp+306,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[29]),64);
        tracep->fullQData(oldp+308,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[30]),64);
        tracep->fullQData(oldp+310,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[31]),64);
        tracep->fullBit(oldp+312,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+313,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+314,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3),1008);
        tracep->fullWData(oldp+346,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+349,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+352,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+355,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+358,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+361,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+364,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullWData(oldp+367,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[7]),84);
        tracep->fullWData(oldp+370,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[8]),84);
        tracep->fullWData(oldp+373,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[9]),84);
        tracep->fullWData(oldp+376,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[10]),84);
        tracep->fullWData(oldp+379,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[11]),84);
        tracep->fullIData(oldp+382,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+383,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+384,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+385,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+386,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+387,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+388,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+389,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+390,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+391,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+392,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+393,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[11]),20);
        tracep->fullQData(oldp+394,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+396,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+398,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+400,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+402,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+404,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+406,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+408,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+410,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+412,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+414,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+416,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+418,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+420,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+421,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4),252);
        tracep->fullWData(oldp+429,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+432,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+435,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullIData(oldp+438,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+439,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+440,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[2]),20);
        tracep->fullQData(oldp+441,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+443,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+445,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+447,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+449,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+450,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3),1092);
        tracep->fullWData(oldp+485,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+488,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+491,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+494,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+497,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+500,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+503,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullWData(oldp+506,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[7]),84);
        tracep->fullWData(oldp+509,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[8]),84);
        tracep->fullWData(oldp+512,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[9]),84);
        tracep->fullWData(oldp+515,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[10]),84);
        tracep->fullWData(oldp+518,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[11]),84);
        tracep->fullWData(oldp+521,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[12]),84);
        tracep->fullIData(oldp+524,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+525,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+526,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+527,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+528,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+529,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+530,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+531,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+532,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+533,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+534,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+535,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[11]),20);
        tracep->fullIData(oldp+536,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[12]),20);
        tracep->fullQData(oldp+537,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+539,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+541,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+543,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+545,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+547,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+549,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+551,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+553,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+555,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+557,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+559,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+561,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+563,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+565,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+566,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3),1092);
        tracep->fullWData(oldp+601,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+604,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+607,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+610,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+613,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+616,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+619,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullWData(oldp+622,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[7]),84);
        tracep->fullWData(oldp+625,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[8]),84);
        tracep->fullWData(oldp+628,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[9]),84);
        tracep->fullWData(oldp+631,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[10]),84);
        tracep->fullWData(oldp+634,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[11]),84);
        tracep->fullWData(oldp+637,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[12]),84);
        tracep->fullIData(oldp+640,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+641,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+642,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+643,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+644,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+645,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+646,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+647,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+648,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+649,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+650,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+651,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[11]),20);
        tracep->fullIData(oldp+652,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[12]),20);
        tracep->fullQData(oldp+653,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+655,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+657,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+659,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+661,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+663,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+665,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+667,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+669,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+671,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+673,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+675,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+677,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+679,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+681,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+682,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+683,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+684,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result),64);
        tracep->fullQData(oldp+686,(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                      < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                      ? 1ULL : 0ULL)),64);
        tracep->fullQData(oldp+688,(((1U == (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode))
                                      ? (1ULL + (~ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b))
                                      : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullWData(oldp+690,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3),216);
        tracep->fullWData(oldp+697,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[0]),72);
        tracep->fullWData(oldp+700,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[1]),72);
        tracep->fullWData(oldp+703,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[2]),72);
        tracep->fullCData(oldp+706,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[0]),8);
        tracep->fullCData(oldp+707,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[1]),8);
        tracep->fullCData(oldp+708,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[2]),8);
        tracep->fullQData(oldp+709,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+711,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+713,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+715,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+717,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+718,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3),168);
        tracep->fullWData(oldp+724,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+727,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullIData(oldp+730,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+731,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullQData(oldp+732,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+734,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+736,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+738,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit));
        __Vtemp941[0U] = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0);
        __Vtemp941[1U] = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                  >> 0x20U));
        __Vtemp941[2U] = 0x2bU;
        tracep->fullWData(oldp+739,(__Vtemp941),84);
        tracep->fullWData(oldp+742,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullIData(oldp+745,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullQData(oldp+746,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+748,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+750,((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                   == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list
                                   [0U])));
        __Vtemp942[0U] = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2);
        __Vtemp942[1U] = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2 
                                  >> 0x20U));
        __Vtemp942[2U] = 0x2bU;
        tracep->fullWData(oldp+751,(__Vtemp942),84);
        tracep->fullWData(oldp+754,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullIData(oldp+757,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullQData(oldp+758,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+760,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+762,((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                   == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list
                                   [0U])));
        tracep->fullCData(oldp+763,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+764,((vlSelf->ysyx_22050612_npc__DOT__opcode 
                                   == vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list
                                   [0U])));
        tracep->fullBit(oldp+765,(vlSelf->clk));
        tracep->fullBit(oldp+766,(vlSelf->rst));
        tracep->fullQData(oldp+767,(vlSelf->pc),64);
        tracep->fullQData(oldp+769,((4ULL + vlSelf->pc)),64);
        tracep->fullIData(oldp+771,(0x40U),32);
        tracep->fullQData(oldp+772,(0x80000000ULL),64);
        tracep->fullBit(oldp+774,(1U));
        tracep->fullIData(oldp+775,(8U),32);
        tracep->fullIData(oldp+776,(0xaU),32);
        tracep->fullIData(oldp+777,(7U),32);
        __Vtemp943[0U] = 0xa3560dafU;
        __Vtemp943[1U] = 0x4cab06a9U;
        __Vtemp943[2U] = 0x31a09936U;
        __Vtemp943[3U] = 0xc21c6190U;
        __Vtemp943[4U] = 0x19U;
        tracep->fullWData(oldp+778,(__Vtemp943),136);
        tracep->fullIData(oldp+783,(0U),32);
        tracep->fullCData(oldp+784,(0U),7);
        tracep->fullIData(oldp+785,(0x11U),32);
        tracep->fullIData(oldp+786,(8U),32);
        tracep->fullIData(oldp+787,(3U),32);
        tracep->fullIData(oldp+788,(2U),32);
        tracep->fullIData(oldp+789,(0x374bdbfU),27);
        tracep->fullCData(oldp+790,(0U),2);
        tracep->fullIData(oldp+791,(9U),32);
        tracep->fullIData(oldp+792,(3U),32);
        __Vtemp944[0U] = 0xa003b11U;
        __Vtemp944[1U] = 0xcc110066U;
        __Vtemp944[2U] = 0U;
        tracep->fullWData(oldp+793,(__Vtemp944),75);
        tracep->fullCData(oldp+796,(0U),8);
        tracep->fullIData(oldp+797,(0x19U),32);
        tracep->fullIData(oldp+798,(1U),32);
        tracep->fullIData(oldp+799,(0x10U),32);
        tracep->fullIData(oldp+800,(0x100cfU),18);
        tracep->fullIData(oldp+801,(0x12U),32);
        tracep->fullIData(oldp+802,(1U),32);
        tracep->fullIData(oldp+803,(5U),32);
        tracep->fullIData(oldp+804,(0xcU),32);
        tracep->fullIData(oldp+805,(0x14U),32);
        tracep->fullWData(oldp+806,(Vysyx_22050612_npc__ConstPool__CONST_9e0208f0_0),252);
        tracep->fullBit(oldp+814,(0U));
        tracep->fullIData(oldp+815,(0x15U),32);
        tracep->fullIData(oldp+816,(0xcU),32);
        tracep->fullQData(oldp+817,(0ULL),64);
        tracep->fullIData(oldp+819,(0x54U),32);
        tracep->fullIData(oldp+820,(0xdU),32);
        tracep->fullIData(oldp+821,(0xdU),32);
        tracep->fullWData(oldp+822,(Vysyx_22050612_npc__ConstPool__CONST_232720d5_0),364);
        tracep->fullIData(oldp+834,(0x1cU),32);
        tracep->fullIData(oldp+835,(0x48U),32);
        tracep->fullIData(oldp+836,(2U),32);
        tracep->fullIData(oldp+837,(0x2bffU),28);
    }
}
