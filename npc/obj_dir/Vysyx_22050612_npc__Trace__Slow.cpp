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
        tracep->declBit(c+1379,"clk", false,-1);
        tracep->declBit(c+1380,"rst", false,-1);
        tracep->declQuad(c+1381,"pc", false,-1, 63,0);
        tracep->declBit(c+1379,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+1380,"ysyx_22050612_npc rst", false,-1);
        tracep->declQuad(c+1381,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declBus(c+208,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+209,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+211,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declQuad(c+213,"ysyx_22050612_npc imm_U", false,-1, 63,0);
        tracep->declQuad(c+215,"ysyx_22050612_npc imm_J", false,-1, 63,0);
        tracep->declQuad(c+217,"ysyx_22050612_npc imm_B", false,-1, 63,0);
        tracep->declQuad(c+219,"ysyx_22050612_npc imm_S", false,-1, 63,0);
        tracep->declBus(c+221,"ysyx_22050612_npc shamt", false,-1, 5,0);
        tracep->declBus(c+222,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+223,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+224,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBus(c+225,"ysyx_22050612_npc opcode", false,-1, 19,0);
        tracep->declBit(c+1379,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+1380,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+209,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+1381,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+208,"ysyx_22050612_npc ifu inst", false,-1, 31,0);
        tracep->declQuad(c+226,"ysyx_22050612_npc ifu inst_mix", false,-1, 63,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1386,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1379,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+1380,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+209,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+1381,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+1388,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+1379,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+208,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+211,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declQuad(c+213,"ysyx_22050612_npc idu imm_U", false,-1, 63,0);
        tracep->declQuad(c+215,"ysyx_22050612_npc idu imm_J", false,-1, 63,0);
        tracep->declQuad(c+217,"ysyx_22050612_npc idu imm_B", false,-1, 63,0);
        tracep->declQuad(c+219,"ysyx_22050612_npc idu imm_S", false,-1, 63,0);
        tracep->declBus(c+221,"ysyx_22050612_npc idu shamt", false,-1, 5,0);
        tracep->declBus(c+222,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+223,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+224,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBus(c+225,"ysyx_22050612_npc idu opcode", false,-1, 19,0);
        tracep->declBus(c+1389,"ysyx_22050612_npc idu decode0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1390,"ysyx_22050612_npc idu decode0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1391,"ysyx_22050612_npc idu decode0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+228,"ysyx_22050612_npc idu decode0 out", false,-1, 6,0);
        tracep->declBus(c+229,"ysyx_22050612_npc idu decode0 key", false,-1, 9,0);
        tracep->declArray(c+1392,"ysyx_22050612_npc idu decode0 lut", false,-1, 424,0);
        tracep->declBus(c+1389,"ysyx_22050612_npc idu decode0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1390,"ysyx_22050612_npc idu decode0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1391,"ysyx_22050612_npc idu decode0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc idu decode0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+228,"ysyx_22050612_npc idu decode0 i0 out", false,-1, 6,0);
        tracep->declBus(c+229,"ysyx_22050612_npc idu decode0 i0 key", false,-1, 9,0);
        tracep->declBus(c+1407,"ysyx_22050612_npc idu decode0 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+1392,"ysyx_22050612_npc idu decode0 i0 lut", false,-1, 424,0);
        tracep->declBus(c+1408,"ysyx_22050612_npc idu decode0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<25; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22050612_npc idu decode0 i0 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<25; i++) {
                tracep->declBus(c+26+i*1,"ysyx_22050612_npc idu decode0 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<25; i++) {
                tracep->declBus(c+51+i*1,"ysyx_22050612_npc idu decode0 i0 data_list", true,(i+0), 6,0);}}
        tracep->declBus(c+230,"ysyx_22050612_npc idu decode0 i0 lut_out", false,-1, 6,0);
        tracep->declBit(c+231,"ysyx_22050612_npc idu decode0 i0 hit", false,-1);
        tracep->declBus(c+1409,"ysyx_22050612_npc idu decode0 i0 i", false,-1, 31,0);
        tracep->declBus(c+1410,"ysyx_22050612_npc idu decode1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1391,"ysyx_22050612_npc idu decode1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1411,"ysyx_22050612_npc idu decode1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+232,"ysyx_22050612_npc idu decode1 out", false,-1, 1,0);
        tracep->declBus(c+233,"ysyx_22050612_npc idu decode1 key", false,-1, 6,0);
        tracep->declBus(c+1412,"ysyx_22050612_npc idu decode1 lut", false,-1, 26,0);
        tracep->declBus(c+1410,"ysyx_22050612_npc idu decode1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1391,"ysyx_22050612_npc idu decode1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1411,"ysyx_22050612_npc idu decode1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc idu decode1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+232,"ysyx_22050612_npc idu decode1 i0 out", false,-1, 1,0);
        tracep->declBus(c+233,"ysyx_22050612_npc idu decode1 i0 key", false,-1, 6,0);
        tracep->declBus(c+1413,"ysyx_22050612_npc idu decode1 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1412,"ysyx_22050612_npc idu decode1 i0 lut", false,-1, 26,0);
        tracep->declBus(c+1414,"ysyx_22050612_npc idu decode1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+76+i*1,"ysyx_22050612_npc idu decode1 i0 pair_list", true,(i+0), 8,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+79+i*1,"ysyx_22050612_npc idu decode1 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+82+i*1,"ysyx_22050612_npc idu decode1 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+234,"ysyx_22050612_npc idu decode1 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+235,"ysyx_22050612_npc idu decode1 i0 hit", false,-1);
        tracep->declBus(c+1415,"ysyx_22050612_npc idu decode1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1416,"ysyx_22050612_npc idu decode2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1408,"ysyx_22050612_npc idu decode2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc idu decode2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+236,"ysyx_22050612_npc idu decode2 out", false,-1, 7,0);
        tracep->declBus(c+237,"ysyx_22050612_npc idu decode2 key", false,-1, 16,0);
        tracep->declArray(c+1418,"ysyx_22050612_npc idu decode2 lut", false,-1, 574,0);
        tracep->declBus(c+1416,"ysyx_22050612_npc idu decode2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1408,"ysyx_22050612_npc idu decode2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc idu decode2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc idu decode2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+236,"ysyx_22050612_npc idu decode2 i0 out", false,-1, 7,0);
        tracep->declBus(c+237,"ysyx_22050612_npc idu decode2 i0 key", false,-1, 16,0);
        tracep->declBus(c+1436,"ysyx_22050612_npc idu decode2 i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1418,"ysyx_22050612_npc idu decode2 i0 lut", false,-1, 574,0);
        tracep->declBus(c+1389,"ysyx_22050612_npc idu decode2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<23; i++) {
                tracep->declBus(c+85+i*1,"ysyx_22050612_npc idu decode2 i0 pair_list", true,(i+0), 24,0);}}
        {int i; for (i=0; i<23; i++) {
                tracep->declBus(c+108+i*1,"ysyx_22050612_npc idu decode2 i0 key_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<23; i++) {
                tracep->declBus(c+131+i*1,"ysyx_22050612_npc idu decode2 i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+238,"ysyx_22050612_npc idu decode2 i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+239,"ysyx_22050612_npc idu decode2 i0 hit", false,-1);
        tracep->declBus(c+1437,"ysyx_22050612_npc idu decode2 i0 i", false,-1, 31,0);
        tracep->declBus(c+1410,"ysyx_22050612_npc idu decode3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1438,"ysyx_22050612_npc idu decode3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1411,"ysyx_22050612_npc idu decode3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+240,"ysyx_22050612_npc idu decode3 out", false,-1, 1,0);
        tracep->declBus(c+241,"ysyx_22050612_npc idu decode3 key", false,-1, 15,0);
        tracep->declQuad(c+1439,"ysyx_22050612_npc idu decode3 lut", false,-1, 53,0);
        tracep->declBus(c+1410,"ysyx_22050612_npc idu decode3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1438,"ysyx_22050612_npc idu decode3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1411,"ysyx_22050612_npc idu decode3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc idu decode3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+240,"ysyx_22050612_npc idu decode3 i0 out", false,-1, 1,0);
        tracep->declBus(c+241,"ysyx_22050612_npc idu decode3 i0 key", false,-1, 15,0);
        tracep->declBus(c+1413,"ysyx_22050612_npc idu decode3 i0 default_out", false,-1, 1,0);
        tracep->declQuad(c+1439,"ysyx_22050612_npc idu decode3 i0 lut", false,-1, 53,0);
        tracep->declBus(c+1441,"ysyx_22050612_npc idu decode3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+154+i*1,"ysyx_22050612_npc idu decode3 i0 pair_list", true,(i+0), 17,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+157+i*1,"ysyx_22050612_npc idu decode3 i0 key_list", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+160+i*1,"ysyx_22050612_npc idu decode3 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+242,"ysyx_22050612_npc idu decode3 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+243,"ysyx_22050612_npc idu decode3 i0 hit", false,-1);
        tracep->declBus(c+1415,"ysyx_22050612_npc idu decode3 i0 i", false,-1, 31,0);
        tracep->declBit(c+1379,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+211,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declQuad(c+213,"ysyx_22050612_npc exu imm_U", false,-1, 63,0);
        tracep->declQuad(c+215,"ysyx_22050612_npc exu imm_J", false,-1, 63,0);
        tracep->declQuad(c+217,"ysyx_22050612_npc exu imm_B", false,-1, 63,0);
        tracep->declQuad(c+219,"ysyx_22050612_npc exu imm_S", false,-1, 63,0);
        tracep->declBus(c+221,"ysyx_22050612_npc exu shamt", false,-1, 5,0);
        tracep->declBus(c+222,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+223,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+224,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu opcode", false,-1, 19,0);
        tracep->declQuad(c+1381,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+209,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+244,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+246,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+248,"ysyx_22050612_npc exu wdata_reg", false,-1, 63,0);
        tracep->declBit(c+250,"ysyx_22050612_npc exu wen", false,-1);
        tracep->declBit(c+251,"ysyx_22050612_npc exu wen_fix", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+252+i*2,"ysyx_22050612_npc exu gpr", true,(i+0), 63,0);}}
        tracep->declQuad(c+1383,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declBus(c+316,"ysyx_22050612_npc exu mode", false,-1, 7,0);
        tracep->declQuad(c+317,"ysyx_22050612_npc exu operator_a", false,-1, 63,0);
        tracep->declQuad(c+319,"ysyx_22050612_npc exu operator_b", false,-1, 63,0);
        tracep->declQuad(c+321,"ysyx_22050612_npc exu result_alu0", false,-1, 63,0);
        tracep->declQuad(c+323,"ysyx_22050612_npc exu result_mul0", false,-1, 63,0);
        tracep->declQuad(c+325,"ysyx_22050612_npc exu result_divu0", false,-1, 63,0);
        tracep->declQuad(c+327,"ysyx_22050612_npc exu result_remu0", false,-1, 63,0);
        tracep->declQuad(c+329,"ysyx_22050612_npc exu result_mulw0", false,-1, 63,0);
        tracep->declBus(c+331,"ysyx_22050612_npc exu result_divw0", false,-1, 31,0);
        tracep->declBus(c+332,"ysyx_22050612_npc exu result_remw0", false,-1, 31,0);
        tracep->declBus(c+333,"ysyx_22050612_npc exu result_divuw0", false,-1, 31,0);
        tracep->declBus(c+334,"ysyx_22050612_npc exu wmask_1byte", false,-1, 7,0);
        tracep->declQuad(c+335,"ysyx_22050612_npc exu wdata_1byte", false,-1, 63,0);
        tracep->declBus(c+337,"ysyx_22050612_npc exu wmask_2byte", false,-1, 7,0);
        tracep->declQuad(c+338,"ysyx_22050612_npc exu wdata_2byte", false,-1, 63,0);
        tracep->declQuad(c+340,"ysyx_22050612_npc exu raddr", false,-1, 63,0);
        tracep->declQuad(c+342,"ysyx_22050612_npc exu rdata", false,-1, 63,0);
        tracep->declQuad(c+344,"ysyx_22050612_npc exu waddr", false,-1, 63,0);
        tracep->declQuad(c+346,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBus(c+348,"ysyx_22050612_npc exu wmask", false,-1, 7,0);
        tracep->declQuad(c+349,"ysyx_22050612_npc exu rdata_fix", false,-1, 63,0);
        tracep->declBus(c+351,"ysyx_22050612_npc exu rdata_1byte", false,-1, 7,0);
        tracep->declBus(c+352,"ysyx_22050612_npc exu rdata_2byte", false,-1, 15,0);
        tracep->declBus(c+1442,"ysyx_22050612_npc exu cpu_gpr_group ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu cpu_gpr_group DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1379,"ysyx_22050612_npc exu cpu_gpr_group clk", false,-1);
        tracep->declQuad(c+248,"ysyx_22050612_npc exu cpu_gpr_group wdata", false,-1, 63,0);
        tracep->declBus(c+222,"ysyx_22050612_npc exu cpu_gpr_group waddr", false,-1, 4,0);
        tracep->declBit(c+251,"ysyx_22050612_npc exu cpu_gpr_group wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+353+i*2,"ysyx_22050612_npc exu cpu_gpr_group rf", true,(i+0), 63,0);}}
        tracep->declBus(c+1443,"ysyx_22050612_npc exu gpr_write_enable NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu gpr_write_enable KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1445,"ysyx_22050612_npc exu gpr_write_enable DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+250,"ysyx_22050612_npc exu gpr_write_enable out", false,-1, 0,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu gpr_write_enable key", false,-1, 19,0);
        tracep->declArray(c+1446,"ysyx_22050612_npc exu gpr_write_enable lut", false,-1, 923,0);
        tracep->declBus(c+1443,"ysyx_22050612_npc exu gpr_write_enable i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu gpr_write_enable i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1445,"ysyx_22050612_npc exu gpr_write_enable i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu gpr_write_enable i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+250,"ysyx_22050612_npc exu gpr_write_enable i0 out", false,-1, 0,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu gpr_write_enable i0 key", false,-1, 19,0);
        tracep->declBus(c+1475,"ysyx_22050612_npc exu gpr_write_enable i0 default_out", false,-1, 0,0);
        tracep->declArray(c+1446,"ysyx_22050612_npc exu gpr_write_enable i0 lut", false,-1, 923,0);
        tracep->declBus(c+1476,"ysyx_22050612_npc exu gpr_write_enable i0 PAIR_LEN", false,-1, 31,0);
        tracep->declBus(c+417,"ysyx_22050612_npc exu gpr_write_enable i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+418,"ysyx_22050612_npc exu gpr_write_enable i0 hit", false,-1);
        tracep->declBus(c+1477,"ysyx_22050612_npc exu gpr_write_enable i0 i", false,-1, 31,0);
        tracep->declBus(c+1443,"ysyx_22050612_npc exu gpr_write_data NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu gpr_write_data KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu gpr_write_data DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+248,"ysyx_22050612_npc exu gpr_write_data out", false,-1, 63,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu gpr_write_data key", false,-1, 19,0);
        tracep->declArray(c+419,"ysyx_22050612_npc exu gpr_write_data lut", false,-1, 3695,0);
        tracep->declBus(c+1443,"ysyx_22050612_npc exu gpr_write_data i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu gpr_write_data i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu gpr_write_data i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu gpr_write_data i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+248,"ysyx_22050612_npc exu gpr_write_data i0 out", false,-1, 63,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu gpr_write_data i0 key", false,-1, 19,0);
        tracep->declQuad(c+1478,"ysyx_22050612_npc exu gpr_write_data i0 default_out", false,-1, 63,0);
        tracep->declArray(c+419,"ysyx_22050612_npc exu gpr_write_data i0 lut", false,-1, 3695,0);
        tracep->declBus(c+1480,"ysyx_22050612_npc exu gpr_write_data i0 PAIR_LEN", false,-1, 31,0);
        tracep->declQuad(c+535,"ysyx_22050612_npc exu gpr_write_data i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+537,"ysyx_22050612_npc exu gpr_write_data i0 hit", false,-1);
        tracep->declBus(c+1477,"ysyx_22050612_npc exu gpr_write_data i0 i", false,-1, 31,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu cpu_pc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu cpu_pc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu cpu_pc DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+209,"ysyx_22050612_npc exu cpu_pc out", false,-1, 63,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu cpu_pc key", false,-1, 19,0);
        tracep->declQuad(c+1383,"ysyx_22050612_npc exu cpu_pc default_out", false,-1, 63,0);
        tracep->declArray(c+538,"ysyx_22050612_npc exu cpu_pc lut", false,-1, 671,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu cpu_pc i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu cpu_pc i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu cpu_pc i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1445,"ysyx_22050612_npc exu cpu_pc i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+209,"ysyx_22050612_npc exu cpu_pc i0 out", false,-1, 63,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu cpu_pc i0 key", false,-1, 19,0);
        tracep->declQuad(c+1383,"ysyx_22050612_npc exu cpu_pc i0 default_out", false,-1, 63,0);
        tracep->declArray(c+538,"ysyx_22050612_npc exu cpu_pc i0 lut", false,-1, 671,0);
        tracep->declBus(c+1480,"ysyx_22050612_npc exu cpu_pc i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+559+i*3,"ysyx_22050612_npc exu cpu_pc i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+583+i*1,"ysyx_22050612_npc exu cpu_pc i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+591+i*2,"ysyx_22050612_npc exu cpu_pc i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+607,"ysyx_22050612_npc exu cpu_pc i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+609,"ysyx_22050612_npc exu cpu_pc i0 hit", false,-1);
        tracep->declBus(c+1481,"ysyx_22050612_npc exu cpu_pc i0 i", false,-1, 31,0);
        tracep->declBus(c+1482,"ysyx_22050612_npc exu operator0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu operator0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu operator0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+317,"ysyx_22050612_npc exu operator0 out", false,-1, 63,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu operator0 key", false,-1, 19,0);
        tracep->declArray(c+610,"ysyx_22050612_npc exu operator0 lut", false,-1, 3863,0);
        tracep->declBus(c+1482,"ysyx_22050612_npc exu operator0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu operator0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu operator0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu operator0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+317,"ysyx_22050612_npc exu operator0 i0 out", false,-1, 63,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu operator0 i0 key", false,-1, 19,0);
        tracep->declQuad(c+1478,"ysyx_22050612_npc exu operator0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+610,"ysyx_22050612_npc exu operator0 i0 lut", false,-1, 3863,0);
        tracep->declBus(c+1480,"ysyx_22050612_npc exu operator0 i0 PAIR_LEN", false,-1, 31,0);
        tracep->declQuad(c+731,"ysyx_22050612_npc exu operator0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+733,"ysyx_22050612_npc exu operator0 i0 hit", false,-1);
        tracep->declBus(c+1483,"ysyx_22050612_npc exu operator0 i0 i", false,-1, 31,0);
        tracep->declBus(c+1482,"ysyx_22050612_npc exu operator1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu operator1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu operator1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+319,"ysyx_22050612_npc exu operator1 out", false,-1, 63,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu operator1 key", false,-1, 19,0);
        tracep->declArray(c+734,"ysyx_22050612_npc exu operator1 lut", false,-1, 3863,0);
        tracep->declBus(c+1482,"ysyx_22050612_npc exu operator1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu operator1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu operator1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu operator1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+319,"ysyx_22050612_npc exu operator1 i0 out", false,-1, 63,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu operator1 i0 key", false,-1, 19,0);
        tracep->declQuad(c+1478,"ysyx_22050612_npc exu operator1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+734,"ysyx_22050612_npc exu operator1 i0 lut", false,-1, 3863,0);
        tracep->declBus(c+1480,"ysyx_22050612_npc exu operator1 i0 PAIR_LEN", false,-1, 31,0);
        tracep->declQuad(c+855,"ysyx_22050612_npc exu operator1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+857,"ysyx_22050612_npc exu operator1 i0 hit", false,-1);
        tracep->declBus(c+1483,"ysyx_22050612_npc exu operator1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1482,"ysyx_22050612_npc exu alumode NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu alumode KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu alumode DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+316,"ysyx_22050612_npc exu alumode out", false,-1, 7,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu alumode key", false,-1, 19,0);
        tracep->declArray(c+1484,"ysyx_22050612_npc exu alumode lut", false,-1, 1287,0);
        tracep->declBus(c+1482,"ysyx_22050612_npc exu alumode i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu alumode i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu alumode i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu alumode i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+316,"ysyx_22050612_npc exu alumode i0 out", false,-1, 7,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu alumode i0 key", false,-1, 19,0);
        tracep->declBus(c+1436,"ysyx_22050612_npc exu alumode i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1484,"ysyx_22050612_npc exu alumode i0 lut", false,-1, 1287,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu alumode i0 PAIR_LEN", false,-1, 31,0);
        tracep->declBus(c+858,"ysyx_22050612_npc exu alumode i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+859,"ysyx_22050612_npc exu alumode i0 hit", false,-1);
        tracep->declBus(c+1483,"ysyx_22050612_npc exu alumode i0 i", false,-1, 31,0);
        tracep->declBus(c+316,"ysyx_22050612_npc exu alu0 mode", false,-1, 7,0);
        tracep->declQuad(c+317,"ysyx_22050612_npc exu alu0 A", false,-1, 63,0);
        tracep->declQuad(c+319,"ysyx_22050612_npc exu alu0 B", false,-1, 63,0);
        tracep->declQuad(c+321,"ysyx_22050612_npc exu alu0 Z", false,-1, 63,0);
        tracep->declQuad(c+860,"ysyx_22050612_npc exu alu0 add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+862,"ysyx_22050612_npc exu alu0 and_result", false,-1, 63,0);
        tracep->declQuad(c+864,"ysyx_22050612_npc exu alu0 or_result", false,-1, 63,0);
        tracep->declQuad(c+866,"ysyx_22050612_npc exu alu0 xor_result", false,-1, 63,0);
        tracep->declQuad(c+868,"ysyx_22050612_npc exu alu0 slt_result", false,-1, 63,0);
        tracep->declQuad(c+870,"ysyx_22050612_npc exu alu0 sltu_result", false,-1, 63,0);
        tracep->declQuad(c+872,"ysyx_22050612_npc exu alu0 sll_result", false,-1, 63,0);
        tracep->declQuad(c+874,"ysyx_22050612_npc exu alu0 srl_result", false,-1, 63,0);
        tracep->declQuad(c+876,"ysyx_22050612_npc exu alu0 sra_result", false,-1, 63,0);
        tracep->declQuad(c+878,"ysyx_22050612_npc exu alu0 C", false,-1, 63,0);
        tracep->declBus(c+1390,"ysyx_22050612_npc exu alu0 alu_result_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu alu0 alu_result_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu alu0 alu_result_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+321,"ysyx_22050612_npc exu alu0 alu_result_select out", false,-1, 63,0);
        tracep->declBus(c+316,"ysyx_22050612_npc exu alu0 alu_result_select key", false,-1, 7,0);
        tracep->declArray(c+880,"ysyx_22050612_npc exu alu0 alu_result_select lut", false,-1, 719,0);
        tracep->declBus(c+1390,"ysyx_22050612_npc exu alu0 alu_result_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu alu0 alu_result_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu alu0 alu_result_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu alu0 alu_result_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+321,"ysyx_22050612_npc exu alu0 alu_result_select i0 out", false,-1, 63,0);
        tracep->declBus(c+316,"ysyx_22050612_npc exu alu0 alu_result_select i0 key", false,-1, 7,0);
        tracep->declQuad(c+1478,"ysyx_22050612_npc exu alu0 alu_result_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+880,"ysyx_22050612_npc exu alu0 alu_result_select i0 lut", false,-1, 719,0);
        tracep->declBus(c+1526,"ysyx_22050612_npc exu alu0 alu_result_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<10; i++) {
                tracep->declArray(c+903+i*3,"ysyx_22050612_npc exu alu0 alu_result_select i0 pair_list", true,(i+0), 71,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+933+i*1,"ysyx_22050612_npc exu alu0 alu_result_select i0 key_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declQuad(c+943+i*2,"ysyx_22050612_npc exu alu0 alu_result_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+963,"ysyx_22050612_npc exu alu0 alu_result_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+965,"ysyx_22050612_npc exu alu0 alu_result_select i0 hit", false,-1);
        tracep->declBus(c+1527,"ysyx_22050612_npc exu alu0 alu_result_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu wdata_onebyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1410,"ysyx_22050612_npc exu wdata_onebyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu wdata_onebyte DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+335,"ysyx_22050612_npc exu wdata_onebyte out", false,-1, 63,0);
        tracep->declBus(c+966,"ysyx_22050612_npc exu wdata_onebyte key", false,-1, 2,0);
        tracep->declArray(c+967,"ysyx_22050612_npc exu wdata_onebyte lut", false,-1, 535,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu wdata_onebyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1410,"ysyx_22050612_npc exu wdata_onebyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu wdata_onebyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu wdata_onebyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+335,"ysyx_22050612_npc exu wdata_onebyte i0 out", false,-1, 63,0);
        tracep->declBus(c+966,"ysyx_22050612_npc exu wdata_onebyte i0 key", false,-1, 2,0);
        tracep->declQuad(c+1478,"ysyx_22050612_npc exu wdata_onebyte i0 default_out", false,-1, 63,0);
        tracep->declArray(c+967,"ysyx_22050612_npc exu wdata_onebyte i0 lut", false,-1, 535,0);
        tracep->declBus(c+1528,"ysyx_22050612_npc exu wdata_onebyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+984+i*3,"ysyx_22050612_npc exu wdata_onebyte i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1008+i*1,"ysyx_22050612_npc exu wdata_onebyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+1016+i*2,"ysyx_22050612_npc exu wdata_onebyte i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1032,"ysyx_22050612_npc exu wdata_onebyte i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1034,"ysyx_22050612_npc exu wdata_onebyte i0 hit", false,-1);
        tracep->declBus(c+1481,"ysyx_22050612_npc exu wdata_onebyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu wmask_onebyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1410,"ysyx_22050612_npc exu wmask_onebyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu wmask_onebyte DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+334,"ysyx_22050612_npc exu wmask_onebyte out", false,-1, 7,0);
        tracep->declBus(c+966,"ysyx_22050612_npc exu wmask_onebyte key", false,-1, 2,0);
        tracep->declArray(c+1529,"ysyx_22050612_npc exu wmask_onebyte lut", false,-1, 87,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu wmask_onebyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1410,"ysyx_22050612_npc exu wmask_onebyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu wmask_onebyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu wmask_onebyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+334,"ysyx_22050612_npc exu wmask_onebyte i0 out", false,-1, 7,0);
        tracep->declBus(c+966,"ysyx_22050612_npc exu wmask_onebyte i0 key", false,-1, 2,0);
        tracep->declBus(c+1436,"ysyx_22050612_npc exu wmask_onebyte i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1529,"ysyx_22050612_npc exu wmask_onebyte i0 lut", false,-1, 87,0);
        tracep->declBus(c+1532,"ysyx_22050612_npc exu wmask_onebyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+163+i*1,"ysyx_22050612_npc exu wmask_onebyte i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+171+i*1,"ysyx_22050612_npc exu wmask_onebyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+179+i*1,"ysyx_22050612_npc exu wmask_onebyte i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1035,"ysyx_22050612_npc exu wmask_onebyte i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1036,"ysyx_22050612_npc exu wmask_onebyte i0 hit", false,-1);
        tracep->declBus(c+1481,"ysyx_22050612_npc exu wmask_onebyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1391,"ysyx_22050612_npc exu wdata_twobyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1410,"ysyx_22050612_npc exu wdata_twobyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu wdata_twobyte DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+338,"ysyx_22050612_npc exu wdata_twobyte out", false,-1, 63,0);
        tracep->declBus(c+966,"ysyx_22050612_npc exu wdata_twobyte key", false,-1, 2,0);
        tracep->declArray(c+1037,"ysyx_22050612_npc exu wdata_twobyte lut", false,-1, 468,0);
        tracep->declBus(c+1391,"ysyx_22050612_npc exu wdata_twobyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1410,"ysyx_22050612_npc exu wdata_twobyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu wdata_twobyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu wdata_twobyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+338,"ysyx_22050612_npc exu wdata_twobyte i0 out", false,-1, 63,0);
        tracep->declBus(c+966,"ysyx_22050612_npc exu wdata_twobyte i0 key", false,-1, 2,0);
        tracep->declQuad(c+1478,"ysyx_22050612_npc exu wdata_twobyte i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1037,"ysyx_22050612_npc exu wdata_twobyte i0 lut", false,-1, 468,0);
        tracep->declBus(c+1528,"ysyx_22050612_npc exu wdata_twobyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+1052+i*3,"ysyx_22050612_npc exu wdata_twobyte i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+1073+i*1,"ysyx_22050612_npc exu wdata_twobyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+1080+i*2,"ysyx_22050612_npc exu wdata_twobyte i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1094,"ysyx_22050612_npc exu wdata_twobyte i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1096,"ysyx_22050612_npc exu wdata_twobyte i0 hit", false,-1);
        tracep->declBus(c+1533,"ysyx_22050612_npc exu wdata_twobyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1391,"ysyx_22050612_npc exu wmask_twobyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1410,"ysyx_22050612_npc exu wmask_twobyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu wmask_twobyte DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+337,"ysyx_22050612_npc exu wmask_twobyte out", false,-1, 7,0);
        tracep->declBus(c+966,"ysyx_22050612_npc exu wmask_twobyte key", false,-1, 2,0);
        tracep->declArray(c+1534,"ysyx_22050612_npc exu wmask_twobyte lut", false,-1, 76,0);
        tracep->declBus(c+1391,"ysyx_22050612_npc exu wmask_twobyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1410,"ysyx_22050612_npc exu wmask_twobyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu wmask_twobyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu wmask_twobyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+337,"ysyx_22050612_npc exu wmask_twobyte i0 out", false,-1, 7,0);
        tracep->declBus(c+966,"ysyx_22050612_npc exu wmask_twobyte i0 key", false,-1, 2,0);
        tracep->declBus(c+1436,"ysyx_22050612_npc exu wmask_twobyte i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1534,"ysyx_22050612_npc exu wmask_twobyte i0 lut", false,-1, 76,0);
        tracep->declBus(c+1532,"ysyx_22050612_npc exu wmask_twobyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+187+i*1,"ysyx_22050612_npc exu wmask_twobyte i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+194+i*1,"ysyx_22050612_npc exu wmask_twobyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+201+i*1,"ysyx_22050612_npc exu wmask_twobyte i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1097,"ysyx_22050612_npc exu wmask_twobyte i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1098,"ysyx_22050612_npc exu wmask_twobyte i0 hit", false,-1);
        tracep->declBus(c+1533,"ysyx_22050612_npc exu wmask_twobyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1391,"ysyx_22050612_npc exu raddr_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu raddr_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu raddr_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+340,"ysyx_22050612_npc exu raddr_select out", false,-1, 63,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu raddr_select key", false,-1, 19,0);
        tracep->declArray(c+1099,"ysyx_22050612_npc exu raddr_select lut", false,-1, 587,0);
        tracep->declBus(c+1391,"ysyx_22050612_npc exu raddr_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu raddr_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu raddr_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu raddr_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+340,"ysyx_22050612_npc exu raddr_select i0 out", false,-1, 63,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu raddr_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+1478,"ysyx_22050612_npc exu raddr_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1099,"ysyx_22050612_npc exu raddr_select i0 lut", false,-1, 587,0);
        tracep->declBus(c+1480,"ysyx_22050612_npc exu raddr_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+1118+i*3,"ysyx_22050612_npc exu raddr_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+1139+i*1,"ysyx_22050612_npc exu raddr_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+1146+i*2,"ysyx_22050612_npc exu raddr_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1160,"ysyx_22050612_npc exu raddr_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1162,"ysyx_22050612_npc exu raddr_select i0 hit", false,-1);
        tracep->declBus(c+1533,"ysyx_22050612_npc exu raddr_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1537,"ysyx_22050612_npc exu waddr_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu waddr_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu waddr_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+344,"ysyx_22050612_npc exu waddr_select out", false,-1, 63,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu waddr_select key", false,-1, 19,0);
        tracep->declArray(c+1163,"ysyx_22050612_npc exu waddr_select lut", false,-1, 335,0);
        tracep->declBus(c+1537,"ysyx_22050612_npc exu waddr_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu waddr_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu waddr_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu waddr_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+344,"ysyx_22050612_npc exu waddr_select i0 out", false,-1, 63,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu waddr_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+1478,"ysyx_22050612_npc exu waddr_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1163,"ysyx_22050612_npc exu waddr_select i0 lut", false,-1, 335,0);
        tracep->declBus(c+1480,"ysyx_22050612_npc exu waddr_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+1174+i*3,"ysyx_22050612_npc exu waddr_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1186+i*1,"ysyx_22050612_npc exu waddr_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1190+i*2,"ysyx_22050612_npc exu waddr_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1198,"ysyx_22050612_npc exu waddr_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1200,"ysyx_22050612_npc exu waddr_select i0 hit", false,-1);
        tracep->declBus(c+1538,"ysyx_22050612_npc exu waddr_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1537,"ysyx_22050612_npc exu wdata_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu wdata_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu wdata_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+346,"ysyx_22050612_npc exu wdata_select out", false,-1, 63,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu wdata_select key", false,-1, 19,0);
        tracep->declArray(c+1201,"ysyx_22050612_npc exu wdata_select lut", false,-1, 335,0);
        tracep->declBus(c+1537,"ysyx_22050612_npc exu wdata_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu wdata_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu wdata_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu wdata_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+346,"ysyx_22050612_npc exu wdata_select i0 out", false,-1, 63,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu wdata_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+1478,"ysyx_22050612_npc exu wdata_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1201,"ysyx_22050612_npc exu wdata_select i0 lut", false,-1, 335,0);
        tracep->declBus(c+1480,"ysyx_22050612_npc exu wdata_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+1212+i*3,"ysyx_22050612_npc exu wdata_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1224+i*1,"ysyx_22050612_npc exu wdata_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1228+i*2,"ysyx_22050612_npc exu wdata_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1236,"ysyx_22050612_npc exu wdata_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1238,"ysyx_22050612_npc exu wdata_select i0 hit", false,-1);
        tracep->declBus(c+1538,"ysyx_22050612_npc exu wdata_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1537,"ysyx_22050612_npc exu wmask_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu wmask_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu wmask_select DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+348,"ysyx_22050612_npc exu wmask_select out", false,-1, 7,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu wmask_select key", false,-1, 19,0);
        tracep->declArray(c+1239,"ysyx_22050612_npc exu wmask_select lut", false,-1, 111,0);
        tracep->declBus(c+1537,"ysyx_22050612_npc exu wmask_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu wmask_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu wmask_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu wmask_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+348,"ysyx_22050612_npc exu wmask_select i0 out", false,-1, 7,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu wmask_select i0 key", false,-1, 19,0);
        tracep->declBus(c+1436,"ysyx_22050612_npc exu wmask_select i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1239,"ysyx_22050612_npc exu wmask_select i0 lut", false,-1, 111,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu wmask_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1243+i*1,"ysyx_22050612_npc exu wmask_select i0 pair_list", true,(i+0), 27,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1247+i*1,"ysyx_22050612_npc exu wmask_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1251+i*1,"ysyx_22050612_npc exu wmask_select i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1255,"ysyx_22050612_npc exu wmask_select i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1256,"ysyx_22050612_npc exu wmask_select i0 hit", false,-1);
        tracep->declBus(c+1538,"ysyx_22050612_npc exu wmask_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1391,"ysyx_22050612_npc exu rdata_fixing NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu rdata_fixing KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu rdata_fixing DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+349,"ysyx_22050612_npc exu rdata_fixing out", false,-1, 63,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu rdata_fixing key", false,-1, 19,0);
        tracep->declArray(c+1257,"ysyx_22050612_npc exu rdata_fixing lut", false,-1, 587,0);
        tracep->declBus(c+1391,"ysyx_22050612_npc exu rdata_fixing i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1444,"ysyx_22050612_npc exu rdata_fixing i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu rdata_fixing i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu rdata_fixing i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+349,"ysyx_22050612_npc exu rdata_fixing i0 out", false,-1, 63,0);
        tracep->declBus(c+225,"ysyx_22050612_npc exu rdata_fixing i0 key", false,-1, 19,0);
        tracep->declQuad(c+1478,"ysyx_22050612_npc exu rdata_fixing i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1257,"ysyx_22050612_npc exu rdata_fixing i0 lut", false,-1, 587,0);
        tracep->declBus(c+1480,"ysyx_22050612_npc exu rdata_fixing i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+1276+i*3,"ysyx_22050612_npc exu rdata_fixing i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+1297+i*1,"ysyx_22050612_npc exu rdata_fixing i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+1304+i*2,"ysyx_22050612_npc exu rdata_fixing i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1318,"ysyx_22050612_npc exu rdata_fixing i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1320,"ysyx_22050612_npc exu rdata_fixing i0 hit", false,-1);
        tracep->declBus(c+1533,"ysyx_22050612_npc exu rdata_fixing i0 i", false,-1, 31,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu rdata_onebyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1410,"ysyx_22050612_npc exu rdata_onebyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu rdata_onebyte DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+351,"ysyx_22050612_npc exu rdata_onebyte out", false,-1, 7,0);
        tracep->declBus(c+1321,"ysyx_22050612_npc exu rdata_onebyte key", false,-1, 2,0);
        tracep->declArray(c+1322,"ysyx_22050612_npc exu rdata_onebyte lut", false,-1, 87,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu rdata_onebyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1410,"ysyx_22050612_npc exu rdata_onebyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu rdata_onebyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu rdata_onebyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+351,"ysyx_22050612_npc exu rdata_onebyte i0 out", false,-1, 7,0);
        tracep->declBus(c+1321,"ysyx_22050612_npc exu rdata_onebyte i0 key", false,-1, 2,0);
        tracep->declBus(c+1436,"ysyx_22050612_npc exu rdata_onebyte i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1322,"ysyx_22050612_npc exu rdata_onebyte i0 lut", false,-1, 87,0);
        tracep->declBus(c+1532,"ysyx_22050612_npc exu rdata_onebyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1325+i*1,"ysyx_22050612_npc exu rdata_onebyte i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1333+i*1,"ysyx_22050612_npc exu rdata_onebyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1341+i*1,"ysyx_22050612_npc exu rdata_onebyte i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1349,"ysyx_22050612_npc exu rdata_onebyte i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1350,"ysyx_22050612_npc exu rdata_onebyte i0 hit", false,-1);
        tracep->declBus(c+1481,"ysyx_22050612_npc exu rdata_onebyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1391,"ysyx_22050612_npc exu rdata_twobyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1410,"ysyx_22050612_npc exu rdata_twobyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1438,"ysyx_22050612_npc exu rdata_twobyte DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+352,"ysyx_22050612_npc exu rdata_twobyte out", false,-1, 15,0);
        tracep->declBus(c+1321,"ysyx_22050612_npc exu rdata_twobyte key", false,-1, 2,0);
        tracep->declArray(c+1351,"ysyx_22050612_npc exu rdata_twobyte lut", false,-1, 132,0);
        tracep->declBus(c+1391,"ysyx_22050612_npc exu rdata_twobyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1410,"ysyx_22050612_npc exu rdata_twobyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1438,"ysyx_22050612_npc exu rdata_twobyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu rdata_twobyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+352,"ysyx_22050612_npc exu rdata_twobyte i0 out", false,-1, 15,0);
        tracep->declBus(c+1321,"ysyx_22050612_npc exu rdata_twobyte i0 key", false,-1, 2,0);
        tracep->declBus(c+1539,"ysyx_22050612_npc exu rdata_twobyte i0 default_out", false,-1, 15,0);
        tracep->declArray(c+1351,"ysyx_22050612_npc exu rdata_twobyte i0 lut", false,-1, 132,0);
        tracep->declBus(c+1540,"ysyx_22050612_npc exu rdata_twobyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+1356+i*1,"ysyx_22050612_npc exu rdata_twobyte i0 pair_list", true,(i+0), 18,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+1363+i*1,"ysyx_22050612_npc exu rdata_twobyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+1370+i*1,"ysyx_22050612_npc exu rdata_twobyte i0 data_list", true,(i+0), 15,0);}}
        tracep->declBus(c+1377,"ysyx_22050612_npc exu rdata_twobyte i0 lut_out", false,-1, 15,0);
        tracep->declBit(c+1378,"ysyx_22050612_npc exu rdata_twobyte i0 hit", false,-1);
        tracep->declBus(c+1533,"ysyx_22050612_npc exu rdata_twobyte i0 i", false,-1, 31,0);
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

extern const VlWide<14>/*447:0*/ Vysyx_22050612_npc__ConstPool__CONST_b6cff157_0;
extern const VlWide<18>/*575:0*/ Vysyx_22050612_npc__ConstPool__CONST_212d752e_0;
extern const VlWide<29>/*927:0*/ Vysyx_22050612_npc__ConstPool__CONST_d8c6a155_0;
extern const VlWide<41>/*1311:0*/ Vysyx_22050612_npc__ConstPool__CONST_362cba5b_0;

void Vysyx_22050612_npc___024root__traceFullSub0(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp4069;
    VlWide<3>/*95:0*/ __Vtemp4070;
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
        tracep->fullIData(oldp+9,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[8]),17);
        tracep->fullIData(oldp+10,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[9]),17);
        tracep->fullIData(oldp+11,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[10]),17);
        tracep->fullIData(oldp+12,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[11]),17);
        tracep->fullIData(oldp+13,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[12]),17);
        tracep->fullIData(oldp+14,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[13]),17);
        tracep->fullIData(oldp+15,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[14]),17);
        tracep->fullIData(oldp+16,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[15]),17);
        tracep->fullIData(oldp+17,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[16]),17);
        tracep->fullIData(oldp+18,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[17]),17);
        tracep->fullIData(oldp+19,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[18]),17);
        tracep->fullIData(oldp+20,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[19]),17);
        tracep->fullIData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[20]),17);
        tracep->fullIData(oldp+22,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[21]),17);
        tracep->fullIData(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[22]),17);
        tracep->fullIData(oldp+24,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[23]),17);
        tracep->fullIData(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[24]),17);
        tracep->fullSData(oldp+26,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+28,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[2]),10);
        tracep->fullSData(oldp+29,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[3]),10);
        tracep->fullSData(oldp+30,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[4]),10);
        tracep->fullSData(oldp+31,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[5]),10);
        tracep->fullSData(oldp+32,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[6]),10);
        tracep->fullSData(oldp+33,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[7]),10);
        tracep->fullSData(oldp+34,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[8]),10);
        tracep->fullSData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[9]),10);
        tracep->fullSData(oldp+36,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[10]),10);
        tracep->fullSData(oldp+37,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[11]),10);
        tracep->fullSData(oldp+38,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[12]),10);
        tracep->fullSData(oldp+39,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[13]),10);
        tracep->fullSData(oldp+40,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[14]),10);
        tracep->fullSData(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[15]),10);
        tracep->fullSData(oldp+42,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[16]),10);
        tracep->fullSData(oldp+43,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[17]),10);
        tracep->fullSData(oldp+44,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[18]),10);
        tracep->fullSData(oldp+45,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[19]),10);
        tracep->fullSData(oldp+46,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[20]),10);
        tracep->fullSData(oldp+47,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[21]),10);
        tracep->fullSData(oldp+48,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[22]),10);
        tracep->fullSData(oldp+49,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[23]),10);
        tracep->fullSData(oldp+50,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[24]),10);
        tracep->fullCData(oldp+51,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0]),7);
        tracep->fullCData(oldp+52,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[1]),7);
        tracep->fullCData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[2]),7);
        tracep->fullCData(oldp+54,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[3]),7);
        tracep->fullCData(oldp+55,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[4]),7);
        tracep->fullCData(oldp+56,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[5]),7);
        tracep->fullCData(oldp+57,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[6]),7);
        tracep->fullCData(oldp+58,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[7]),7);
        tracep->fullCData(oldp+59,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[8]),7);
        tracep->fullCData(oldp+60,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[9]),7);
        tracep->fullCData(oldp+61,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[10]),7);
        tracep->fullCData(oldp+62,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[11]),7);
        tracep->fullCData(oldp+63,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[12]),7);
        tracep->fullCData(oldp+64,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[13]),7);
        tracep->fullCData(oldp+65,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[14]),7);
        tracep->fullCData(oldp+66,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[15]),7);
        tracep->fullCData(oldp+67,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[16]),7);
        tracep->fullCData(oldp+68,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[17]),7);
        tracep->fullCData(oldp+69,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[18]),7);
        tracep->fullCData(oldp+70,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[19]),7);
        tracep->fullCData(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[20]),7);
        tracep->fullCData(oldp+72,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[21]),7);
        tracep->fullCData(oldp+73,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[22]),7);
        tracep->fullCData(oldp+74,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[23]),7);
        tracep->fullCData(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[24]),7);
        tracep->fullSData(oldp+76,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[0]),9);
        tracep->fullSData(oldp+77,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[1]),9);
        tracep->fullSData(oldp+78,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[2]),9);
        tracep->fullCData(oldp+79,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+80,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+81,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+82,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+83,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+84,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[2]),2);
        tracep->fullIData(oldp+85,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0]),25);
        tracep->fullIData(oldp+86,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[1]),25);
        tracep->fullIData(oldp+87,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[2]),25);
        tracep->fullIData(oldp+88,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[3]),25);
        tracep->fullIData(oldp+89,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[4]),25);
        tracep->fullIData(oldp+90,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[5]),25);
        tracep->fullIData(oldp+91,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[6]),25);
        tracep->fullIData(oldp+92,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[7]),25);
        tracep->fullIData(oldp+93,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[8]),25);
        tracep->fullIData(oldp+94,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[9]),25);
        tracep->fullIData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[10]),25);
        tracep->fullIData(oldp+96,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[11]),25);
        tracep->fullIData(oldp+97,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[12]),25);
        tracep->fullIData(oldp+98,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[13]),25);
        tracep->fullIData(oldp+99,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[14]),25);
        tracep->fullIData(oldp+100,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[15]),25);
        tracep->fullIData(oldp+101,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[16]),25);
        tracep->fullIData(oldp+102,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[17]),25);
        tracep->fullIData(oldp+103,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[18]),25);
        tracep->fullIData(oldp+104,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[19]),25);
        tracep->fullIData(oldp+105,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[20]),25);
        tracep->fullIData(oldp+106,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[21]),25);
        tracep->fullIData(oldp+107,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[22]),25);
        tracep->fullIData(oldp+108,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0]),17);
        tracep->fullIData(oldp+109,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[1]),17);
        tracep->fullIData(oldp+110,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[2]),17);
        tracep->fullIData(oldp+111,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[3]),17);
        tracep->fullIData(oldp+112,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[4]),17);
        tracep->fullIData(oldp+113,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[5]),17);
        tracep->fullIData(oldp+114,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[6]),17);
        tracep->fullIData(oldp+115,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[7]),17);
        tracep->fullIData(oldp+116,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[8]),17);
        tracep->fullIData(oldp+117,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[9]),17);
        tracep->fullIData(oldp+118,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[10]),17);
        tracep->fullIData(oldp+119,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[11]),17);
        tracep->fullIData(oldp+120,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[12]),17);
        tracep->fullIData(oldp+121,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[13]),17);
        tracep->fullIData(oldp+122,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[14]),17);
        tracep->fullIData(oldp+123,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[15]),17);
        tracep->fullIData(oldp+124,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[16]),17);
        tracep->fullIData(oldp+125,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[17]),17);
        tracep->fullIData(oldp+126,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[18]),17);
        tracep->fullIData(oldp+127,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[19]),17);
        tracep->fullIData(oldp+128,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[20]),17);
        tracep->fullIData(oldp+129,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[21]),17);
        tracep->fullIData(oldp+130,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[22]),17);
        tracep->fullCData(oldp+131,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+132,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+133,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+134,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+135,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+136,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+137,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+138,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+139,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[8]),8);
        tracep->fullCData(oldp+140,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[9]),8);
        tracep->fullCData(oldp+141,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[10]),8);
        tracep->fullCData(oldp+142,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[11]),8);
        tracep->fullCData(oldp+143,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[12]),8);
        tracep->fullCData(oldp+144,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[13]),8);
        tracep->fullCData(oldp+145,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[14]),8);
        tracep->fullCData(oldp+146,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[15]),8);
        tracep->fullCData(oldp+147,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[16]),8);
        tracep->fullCData(oldp+148,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[17]),8);
        tracep->fullCData(oldp+149,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[18]),8);
        tracep->fullCData(oldp+150,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[19]),8);
        tracep->fullCData(oldp+151,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[20]),8);
        tracep->fullCData(oldp+152,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[21]),8);
        tracep->fullCData(oldp+153,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[22]),8);
        tracep->fullIData(oldp+154,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list[0]),18);
        tracep->fullIData(oldp+155,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list[1]),18);
        tracep->fullIData(oldp+156,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list[2]),18);
        tracep->fullSData(oldp+157,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[0]),16);
        tracep->fullSData(oldp+158,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[1]),16);
        tracep->fullSData(oldp+159,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[2]),16);
        tracep->fullCData(oldp+160,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+161,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+162,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[2]),2);
        tracep->fullSData(oldp+163,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+164,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+165,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+166,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+167,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+168,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+169,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullSData(oldp+170,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[7]),11);
        tracep->fullCData(oldp+171,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+172,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+173,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+174,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+175,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+176,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+177,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+178,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[7]),3);
        tracep->fullCData(oldp+179,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+180,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+181,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+182,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+183,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+184,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+185,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+186,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[7]),8);
        tracep->fullSData(oldp+187,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+188,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+189,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+190,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+191,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+192,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+193,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullCData(oldp+194,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+195,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+196,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+197,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+198,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+199,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+200,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+201,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+202,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+203,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+204,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+205,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+206,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+207,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[6]),8);
        tracep->fullIData(oldp+208,(vlSelf->ysyx_22050612_npc__DOT__inst),32);
        tracep->fullQData(oldp+209,(vlSelf->ysyx_22050612_npc__DOT__dnpc),64);
        tracep->fullQData(oldp+211,(vlSelf->ysyx_22050612_npc__DOT__imm_I),64);
        tracep->fullQData(oldp+213,(vlSelf->ysyx_22050612_npc__DOT__imm_U),64);
        tracep->fullQData(oldp+215,(((vlSelf->ysyx_22050612_npc__DOT__inst 
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
        tracep->fullQData(oldp+217,(vlSelf->ysyx_22050612_npc__DOT__imm_B),64);
        tracep->fullQData(oldp+219,(vlSelf->ysyx_22050612_npc__DOT__imm_S),64);
        tracep->fullCData(oldp+221,((0x3fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0x14U))),6);
        tracep->fullCData(oldp+222,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+223,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+224,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+225,(vlSelf->ysyx_22050612_npc__DOT__opcode),20);
        tracep->fullQData(oldp+226,(vlSelf->ysyx_22050612_npc__DOT__ifu__DOT__inst_mix),64);
        tracep->fullCData(oldp+228,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode0____pinNumber1),7);
        tracep->fullSData(oldp+229,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2),10);
        tracep->fullCData(oldp+230,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out),7);
        tracep->fullBit(oldp+231,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+232,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode1____pinNumber1),2);
        tracep->fullCData(oldp+233,((0x7fU & vlSelf->ysyx_22050612_npc__DOT__inst)),7);
        tracep->fullCData(oldp+234,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+235,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+236,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode2____pinNumber1),8);
        tracep->fullIData(oldp+237,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2),17);
        tracep->fullCData(oldp+238,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+239,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+240,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode3____pinNumber1),2);
        tracep->fullSData(oldp+241,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2),16);
        tracep->fullCData(oldp+242,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+243,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+244,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1),64);
        tracep->fullQData(oldp+246,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2),64);
        tracep->fullQData(oldp+248,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_reg),64);
        tracep->fullBit(oldp+250,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
        tracep->fullBit(oldp+251,(((0U != (0x1fU & 
                                           (vlSelf->ysyx_22050612_npc__DOT__inst 
                                            >> 7U))) 
                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen))));
        tracep->fullQData(oldp+252,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
        tracep->fullQData(oldp+254,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
        tracep->fullQData(oldp+256,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
        tracep->fullQData(oldp+258,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
        tracep->fullQData(oldp+260,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
        tracep->fullQData(oldp+262,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
        tracep->fullQData(oldp+264,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
        tracep->fullQData(oldp+266,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
        tracep->fullQData(oldp+268,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
        tracep->fullQData(oldp+270,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
        tracep->fullQData(oldp+272,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
        tracep->fullQData(oldp+274,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
        tracep->fullQData(oldp+276,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
        tracep->fullQData(oldp+278,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
        tracep->fullQData(oldp+280,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
        tracep->fullQData(oldp+282,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
        tracep->fullQData(oldp+284,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
        tracep->fullQData(oldp+286,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
        tracep->fullQData(oldp+288,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
        tracep->fullQData(oldp+290,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
        tracep->fullQData(oldp+292,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
        tracep->fullQData(oldp+294,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
        tracep->fullQData(oldp+296,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
        tracep->fullQData(oldp+298,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
        tracep->fullQData(oldp+300,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
        tracep->fullQData(oldp+302,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
        tracep->fullQData(oldp+304,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
        tracep->fullQData(oldp+306,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
        tracep->fullQData(oldp+308,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
        tracep->fullQData(oldp+310,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
        tracep->fullQData(oldp+312,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
        tracep->fullQData(oldp+314,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
        tracep->fullCData(oldp+316,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode),8);
        tracep->fullQData(oldp+317,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a),64);
        tracep->fullQData(oldp+319,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b),64);
        tracep->fullQData(oldp+321,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0),64);
        tracep->fullQData(oldp+323,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                     * vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)),64);
        tracep->fullQData(oldp+325,(VL_DIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)),64);
        tracep->fullQData(oldp+327,(VL_MODDIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)),64);
        tracep->fullQData(oldp+329,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0),64);
        tracep->fullIData(oldp+331,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0),32);
        tracep->fullIData(oldp+332,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0),32);
        tracep->fullIData(oldp+333,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divuw0),32);
        tracep->fullCData(oldp+334,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte),8);
        tracep->fullQData(oldp+335,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte),64);
        tracep->fullCData(oldp+337,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte),8);
        tracep->fullQData(oldp+338,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte),64);
        tracep->fullQData(oldp+340,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr),64);
        tracep->fullQData(oldp+342,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata),64);
        tracep->fullQData(oldp+344,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr),64);
        tracep->fullQData(oldp+346,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
        tracep->fullCData(oldp+348,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask),8);
        tracep->fullQData(oldp+349,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix),64);
        tracep->fullCData(oldp+351,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte),8);
        tracep->fullSData(oldp+352,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte),16);
        tracep->fullQData(oldp+353,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[0]),64);
        tracep->fullQData(oldp+355,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[1]),64);
        tracep->fullQData(oldp+357,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[2]),64);
        tracep->fullQData(oldp+359,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[3]),64);
        tracep->fullQData(oldp+361,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[4]),64);
        tracep->fullQData(oldp+363,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[5]),64);
        tracep->fullQData(oldp+365,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[6]),64);
        tracep->fullQData(oldp+367,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[7]),64);
        tracep->fullQData(oldp+369,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[8]),64);
        tracep->fullQData(oldp+371,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[9]),64);
        tracep->fullQData(oldp+373,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[10]),64);
        tracep->fullQData(oldp+375,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[11]),64);
        tracep->fullQData(oldp+377,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[12]),64);
        tracep->fullQData(oldp+379,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[13]),64);
        tracep->fullQData(oldp+381,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[14]),64);
        tracep->fullQData(oldp+383,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[15]),64);
        tracep->fullQData(oldp+385,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[16]),64);
        tracep->fullQData(oldp+387,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[17]),64);
        tracep->fullQData(oldp+389,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[18]),64);
        tracep->fullQData(oldp+391,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[19]),64);
        tracep->fullQData(oldp+393,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[20]),64);
        tracep->fullQData(oldp+395,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[21]),64);
        tracep->fullQData(oldp+397,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[22]),64);
        tracep->fullQData(oldp+399,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[23]),64);
        tracep->fullQData(oldp+401,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[24]),64);
        tracep->fullQData(oldp+403,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[25]),64);
        tracep->fullQData(oldp+405,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[26]),64);
        tracep->fullQData(oldp+407,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[27]),64);
        tracep->fullQData(oldp+409,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[28]),64);
        tracep->fullQData(oldp+411,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[29]),64);
        tracep->fullQData(oldp+413,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[30]),64);
        tracep->fullQData(oldp+415,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[31]),64);
        tracep->fullBit(oldp+417,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+418,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+419,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3),3696);
        tracep->fullQData(oldp+535,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+537,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+538,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4),672);
        tracep->fullWData(oldp+559,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+562,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+565,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+568,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+571,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+574,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+577,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullWData(oldp+580,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[7]),84);
        tracep->fullIData(oldp+583,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+584,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+585,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+586,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+587,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+588,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+589,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+590,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[7]),20);
        tracep->fullQData(oldp+591,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+593,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+595,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+597,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+599,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+601,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+603,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+605,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+607,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+609,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+610,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3),3864);
        tracep->fullQData(oldp+731,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+733,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+734,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3),3864);
        tracep->fullQData(oldp+855,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+857,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+858,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+859,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+860,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result),64);
        tracep->fullQData(oldp+862,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                     & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+864,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                     | vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+866,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                     ^ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+868,((VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                      ? 1ULL : 0ULL)),64);
        tracep->fullQData(oldp+870,(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                      < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                      ? 1ULL : 0ULL)),64);
        tracep->fullQData(oldp+872,(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+874,(VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+876,(VL_SHIFTRS_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+878,(((1U == (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode))
                                      ? (1ULL + (~ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b))
                                      : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullWData(oldp+880,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3),720);
        tracep->fullWData(oldp+903,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[0]),72);
        tracep->fullWData(oldp+906,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[1]),72);
        tracep->fullWData(oldp+909,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[2]),72);
        tracep->fullWData(oldp+912,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[3]),72);
        tracep->fullWData(oldp+915,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[4]),72);
        tracep->fullWData(oldp+918,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[5]),72);
        tracep->fullWData(oldp+921,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[6]),72);
        tracep->fullWData(oldp+924,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[7]),72);
        tracep->fullWData(oldp+927,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[8]),72);
        tracep->fullWData(oldp+930,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[9]),72);
        tracep->fullCData(oldp+933,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[0]),8);
        tracep->fullCData(oldp+934,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[1]),8);
        tracep->fullCData(oldp+935,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[2]),8);
        tracep->fullCData(oldp+936,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[3]),8);
        tracep->fullCData(oldp+937,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[4]),8);
        tracep->fullCData(oldp+938,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[5]),8);
        tracep->fullCData(oldp+939,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[6]),8);
        tracep->fullCData(oldp+940,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[7]),8);
        tracep->fullCData(oldp+941,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[8]),8);
        tracep->fullCData(oldp+942,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[9]),8);
        tracep->fullQData(oldp+943,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+945,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+947,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+949,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+951,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+953,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+955,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+957,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+959,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+961,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+963,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+965,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+966,((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))),3);
        tracep->fullWData(oldp+967,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3),536);
        tracep->fullWData(oldp+984,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+987,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+990,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+993,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+996,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+999,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[5]),67);
        tracep->fullWData(oldp+1002,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[6]),67);
        tracep->fullWData(oldp+1005,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[7]),67);
        tracep->fullCData(oldp+1008,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1009,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1010,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1011,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+1012,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+1013,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+1014,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+1015,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[7]),3);
        tracep->fullQData(oldp+1016,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1018,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1020,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1022,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1024,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1026,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1028,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1030,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+1032,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1034,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1035,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1036,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1037,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3),469);
        tracep->fullWData(oldp+1052,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+1055,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+1058,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+1061,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+1064,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+1067,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[5]),67);
        tracep->fullWData(oldp+1070,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[6]),67);
        tracep->fullCData(oldp+1073,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1074,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1075,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1076,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+1077,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+1078,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+1079,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullQData(oldp+1080,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1082,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1084,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1086,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1088,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1090,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1092,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1094,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1096,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1097,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1098,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1099,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3),588);
        tracep->fullWData(oldp+1118,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1121,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1124,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+1127,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+1130,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+1133,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+1136,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullIData(oldp+1139,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1140,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1141,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+1142,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+1143,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+1144,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+1145,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[6]),20);
        tracep->fullQData(oldp+1146,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1148,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1150,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1152,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1154,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1156,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1158,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1160,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1162,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1163,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3),336);
        tracep->fullWData(oldp+1174,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1177,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1180,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+1183,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullIData(oldp+1186,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1187,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1188,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+1189,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[3]),20);
        tracep->fullQData(oldp+1190,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1192,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1194,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1196,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1198,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1200,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1201,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3),336);
        tracep->fullWData(oldp+1212,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1215,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1218,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+1221,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullIData(oldp+1224,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1225,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1226,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+1227,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[3]),20);
        tracep->fullQData(oldp+1228,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1230,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1232,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1234,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1236,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1238,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1239,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3),112);
        tracep->fullIData(oldp+1243,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[0]),28);
        tracep->fullIData(oldp+1244,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[1]),28);
        tracep->fullIData(oldp+1245,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[2]),28);
        tracep->fullIData(oldp+1246,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[3]),28);
        tracep->fullIData(oldp+1247,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1248,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1249,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+1250,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[3]),20);
        tracep->fullCData(oldp+1251,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+1252,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+1253,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+1254,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+1255,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1256,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1257,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3),588);
        tracep->fullWData(oldp+1276,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1279,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1282,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+1285,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+1288,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+1291,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+1294,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullIData(oldp+1297,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1298,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1299,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+1300,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+1301,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+1302,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+1303,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[6]),20);
        tracep->fullQData(oldp+1304,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1306,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1308,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1310,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1312,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1314,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1316,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1318,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1320,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1321,((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr))),3);
        tracep->fullWData(oldp+1322,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3),88);
        tracep->fullSData(oldp+1325,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+1326,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+1327,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+1328,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+1329,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+1330,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+1331,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullSData(oldp+1332,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[7]),11);
        tracep->fullCData(oldp+1333,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1334,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1335,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1336,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+1337,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+1338,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+1339,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+1340,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[7]),3);
        tracep->fullCData(oldp+1341,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+1342,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+1343,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+1344,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+1345,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+1346,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+1347,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+1348,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+1349,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1350,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1351,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3),133);
        tracep->fullIData(oldp+1356,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[0]),19);
        tracep->fullIData(oldp+1357,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[1]),19);
        tracep->fullIData(oldp+1358,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[2]),19);
        tracep->fullIData(oldp+1359,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[3]),19);
        tracep->fullIData(oldp+1360,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[4]),19);
        tracep->fullIData(oldp+1361,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[5]),19);
        tracep->fullIData(oldp+1362,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[6]),19);
        tracep->fullCData(oldp+1363,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1364,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1365,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1366,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+1367,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+1368,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+1369,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullSData(oldp+1370,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[0]),16);
        tracep->fullSData(oldp+1371,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[1]),16);
        tracep->fullSData(oldp+1372,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[2]),16);
        tracep->fullSData(oldp+1373,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[3]),16);
        tracep->fullSData(oldp+1374,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[4]),16);
        tracep->fullSData(oldp+1375,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[5]),16);
        tracep->fullSData(oldp+1376,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[6]),16);
        tracep->fullSData(oldp+1377,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out),16);
        tracep->fullBit(oldp+1378,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+1379,(vlSelf->clk));
        tracep->fullBit(oldp+1380,(vlSelf->rst));
        tracep->fullQData(oldp+1381,(vlSelf->pc),64);
        tracep->fullQData(oldp+1383,((4ULL + vlSelf->pc)),64);
        tracep->fullIData(oldp+1385,(0x40U),32);
        tracep->fullQData(oldp+1386,(0x80000000ULL),64);
        tracep->fullBit(oldp+1388,(1U));
        tracep->fullIData(oldp+1389,(0x19U),32);
        tracep->fullIData(oldp+1390,(0xaU),32);
        tracep->fullIData(oldp+1391,(7U),32);
        tracep->fullWData(oldp+1392,(Vysyx_22050612_npc__ConstPool__CONST_b6cff157_0),425);
        tracep->fullIData(oldp+1406,(0U),32);
        tracep->fullCData(oldp+1407,(0U),7);
        tracep->fullIData(oldp+1408,(0x11U),32);
        tracep->fullIData(oldp+1409,(0x19U),32);
        tracep->fullIData(oldp+1410,(3U),32);
        tracep->fullIData(oldp+1411,(2U),32);
        tracep->fullIData(oldp+1412,(0x374bdbfU),27);
        tracep->fullCData(oldp+1413,(0U),2);
        tracep->fullIData(oldp+1414,(9U),32);
        tracep->fullIData(oldp+1415,(3U),32);
        tracep->fullIData(oldp+1416,(0x17U),32);
        tracep->fullIData(oldp+1417,(8U),32);
        tracep->fullWData(oldp+1418,(Vysyx_22050612_npc__ConstPool__CONST_212d752e_0),575);
        tracep->fullCData(oldp+1436,(0U),8);
        tracep->fullIData(oldp+1437,(0x17U),32);
        tracep->fullIData(oldp+1438,(0x10U),32);
        tracep->fullQData(oldp+1439,(0x24d029390a4fULL),54);
        tracep->fullIData(oldp+1441,(0x12U),32);
        tracep->fullIData(oldp+1442,(5U),32);
        tracep->fullIData(oldp+1443,(0x2cU),32);
        tracep->fullIData(oldp+1444,(0x14U),32);
        tracep->fullIData(oldp+1445,(1U),32);
        tracep->fullWData(oldp+1446,(Vysyx_22050612_npc__ConstPool__CONST_d8c6a155_0),924);
        tracep->fullBit(oldp+1475,(0U));
        tracep->fullIData(oldp+1476,(0x15U),32);
        tracep->fullIData(oldp+1477,(0x2cU),32);
        tracep->fullQData(oldp+1478,(0ULL),64);
        tracep->fullIData(oldp+1480,(0x54U),32);
        tracep->fullIData(oldp+1481,(8U),32);
        tracep->fullIData(oldp+1482,(0x2eU),32);
        tracep->fullIData(oldp+1483,(0x2eU),32);
        tracep->fullWData(oldp+1484,(Vysyx_22050612_npc__ConstPool__CONST_362cba5b_0),1288);
        tracep->fullIData(oldp+1525,(0x1cU),32);
        tracep->fullIData(oldp+1526,(0x48U),32);
        tracep->fullIData(oldp+1527,(0xaU),32);
        tracep->fullIData(oldp+1528,(0x43U),32);
        __Vtemp4069[0U] = 0x48320780U;
        __Vtemp4069[1U] = 0x2308821U;
        __Vtemp4069[2U] = 0x2409U;
        tracep->fullWData(oldp+1529,(__Vtemp4069),88);
        tracep->fullIData(oldp+1532,(0xbU),32);
        tracep->fullIData(oldp+1533,(7U),32);
        __Vtemp4070[0U] = 0x4698660U;
        __Vtemp4070[1U] = 0x8320c611U;
        __Vtemp4070[2U] = 0xcU;
        tracep->fullWData(oldp+1534,(__Vtemp4070),77);
        tracep->fullIData(oldp+1537,(4U),32);
        tracep->fullIData(oldp+1538,(4U),32);
        tracep->fullSData(oldp+1539,(0U),16);
        tracep->fullIData(oldp+1540,(0x13U),32);
    }
}
