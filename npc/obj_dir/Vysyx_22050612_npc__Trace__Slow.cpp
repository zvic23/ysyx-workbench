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
        tracep->declBit(c+1263,"clk", false,-1);
        tracep->declBit(c+1264,"rst", false,-1);
        tracep->declQuad(c+1265,"pc", false,-1, 63,0);
        tracep->declBit(c+1263,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+1264,"ysyx_22050612_npc rst", false,-1);
        tracep->declQuad(c+1265,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declBus(c+184,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+185,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+187,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declQuad(c+189,"ysyx_22050612_npc imm_U", false,-1, 63,0);
        tracep->declQuad(c+191,"ysyx_22050612_npc imm_J", false,-1, 63,0);
        tracep->declQuad(c+193,"ysyx_22050612_npc imm_B", false,-1, 63,0);
        tracep->declQuad(c+195,"ysyx_22050612_npc imm_S", false,-1, 63,0);
        tracep->declBus(c+197,"ysyx_22050612_npc shamt", false,-1, 5,0);
        tracep->declBus(c+198,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+199,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+200,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBus(c+201,"ysyx_22050612_npc opcode", false,-1, 19,0);
        tracep->declBit(c+1263,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+1264,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+185,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+1265,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+184,"ysyx_22050612_npc ifu inst", false,-1, 31,0);
        tracep->declQuad(c+202,"ysyx_22050612_npc ifu inst_mix", false,-1, 63,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1270,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1263,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+1264,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+185,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+1265,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+1272,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+1263,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+184,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+187,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declQuad(c+189,"ysyx_22050612_npc idu imm_U", false,-1, 63,0);
        tracep->declQuad(c+191,"ysyx_22050612_npc idu imm_J", false,-1, 63,0);
        tracep->declQuad(c+193,"ysyx_22050612_npc idu imm_B", false,-1, 63,0);
        tracep->declQuad(c+195,"ysyx_22050612_npc idu imm_S", false,-1, 63,0);
        tracep->declBus(c+197,"ysyx_22050612_npc idu shamt", false,-1, 5,0);
        tracep->declBus(c+198,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+199,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+200,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBus(c+201,"ysyx_22050612_npc idu opcode", false,-1, 19,0);
        tracep->declBus(c+1273,"ysyx_22050612_npc idu decode0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1274,"ysyx_22050612_npc idu decode0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1275,"ysyx_22050612_npc idu decode0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+204,"ysyx_22050612_npc idu decode0 out", false,-1, 6,0);
        tracep->declBus(c+205,"ysyx_22050612_npc idu decode0 key", false,-1, 9,0);
        tracep->declArray(c+1276,"ysyx_22050612_npc idu decode0 lut", false,-1, 356,0);
        tracep->declBus(c+1273,"ysyx_22050612_npc idu decode0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1274,"ysyx_22050612_npc idu decode0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1275,"ysyx_22050612_npc idu decode0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc idu decode0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+204,"ysyx_22050612_npc idu decode0 i0 out", false,-1, 6,0);
        tracep->declBus(c+205,"ysyx_22050612_npc idu decode0 i0 key", false,-1, 9,0);
        tracep->declBus(c+1289,"ysyx_22050612_npc idu decode0 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+1276,"ysyx_22050612_npc idu decode0 i0 lut", false,-1, 356,0);
        tracep->declBus(c+1290,"ysyx_22050612_npc idu decode0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<21; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22050612_npc idu decode0 i0 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<21; i++) {
                tracep->declBus(c+22+i*1,"ysyx_22050612_npc idu decode0 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<21; i++) {
                tracep->declBus(c+43+i*1,"ysyx_22050612_npc idu decode0 i0 data_list", true,(i+0), 6,0);}}
        tracep->declBus(c+206,"ysyx_22050612_npc idu decode0 i0 lut_out", false,-1, 6,0);
        tracep->declBit(c+207,"ysyx_22050612_npc idu decode0 i0 hit", false,-1);
        tracep->declBus(c+1291,"ysyx_22050612_npc idu decode0 i0 i", false,-1, 31,0);
        tracep->declBus(c+1292,"ysyx_22050612_npc idu decode1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1275,"ysyx_22050612_npc idu decode1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1293,"ysyx_22050612_npc idu decode1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+208,"ysyx_22050612_npc idu decode1 out", false,-1, 1,0);
        tracep->declBus(c+209,"ysyx_22050612_npc idu decode1 key", false,-1, 6,0);
        tracep->declBus(c+1294,"ysyx_22050612_npc idu decode1 lut", false,-1, 26,0);
        tracep->declBus(c+1292,"ysyx_22050612_npc idu decode1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1275,"ysyx_22050612_npc idu decode1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1293,"ysyx_22050612_npc idu decode1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc idu decode1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+208,"ysyx_22050612_npc idu decode1 i0 out", false,-1, 1,0);
        tracep->declBus(c+209,"ysyx_22050612_npc idu decode1 i0 key", false,-1, 6,0);
        tracep->declBus(c+1295,"ysyx_22050612_npc idu decode1 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1294,"ysyx_22050612_npc idu decode1 i0 lut", false,-1, 26,0);
        tracep->declBus(c+1296,"ysyx_22050612_npc idu decode1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+64+i*1,"ysyx_22050612_npc idu decode1 i0 pair_list", true,(i+0), 8,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+67+i*1,"ysyx_22050612_npc idu decode1 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+70+i*1,"ysyx_22050612_npc idu decode1 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+210,"ysyx_22050612_npc idu decode1 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+211,"ysyx_22050612_npc idu decode1 i0 hit", false,-1);
        tracep->declBus(c+1297,"ysyx_22050612_npc idu decode1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1298,"ysyx_22050612_npc idu decode2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1290,"ysyx_22050612_npc idu decode2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc idu decode2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+212,"ysyx_22050612_npc idu decode2 out", false,-1, 7,0);
        tracep->declBus(c+213,"ysyx_22050612_npc idu decode2 key", false,-1, 16,0);
        tracep->declArray(c+1300,"ysyx_22050612_npc idu decode2 lut", false,-1, 474,0);
        tracep->declBus(c+1298,"ysyx_22050612_npc idu decode2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1290,"ysyx_22050612_npc idu decode2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc idu decode2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc idu decode2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+212,"ysyx_22050612_npc idu decode2 i0 out", false,-1, 7,0);
        tracep->declBus(c+213,"ysyx_22050612_npc idu decode2 i0 key", false,-1, 16,0);
        tracep->declBus(c+1315,"ysyx_22050612_npc idu decode2 i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1300,"ysyx_22050612_npc idu decode2 i0 lut", false,-1, 474,0);
        tracep->declBus(c+1316,"ysyx_22050612_npc idu decode2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<19; i++) {
                tracep->declBus(c+73+i*1,"ysyx_22050612_npc idu decode2 i0 pair_list", true,(i+0), 24,0);}}
        {int i; for (i=0; i<19; i++) {
                tracep->declBus(c+92+i*1,"ysyx_22050612_npc idu decode2 i0 key_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<19; i++) {
                tracep->declBus(c+111+i*1,"ysyx_22050612_npc idu decode2 i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+214,"ysyx_22050612_npc idu decode2 i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+215,"ysyx_22050612_npc idu decode2 i0 hit", false,-1);
        tracep->declBus(c+1317,"ysyx_22050612_npc idu decode2 i0 i", false,-1, 31,0);
        tracep->declBus(c+1292,"ysyx_22050612_npc idu decode3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1318,"ysyx_22050612_npc idu decode3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1293,"ysyx_22050612_npc idu decode3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+216,"ysyx_22050612_npc idu decode3 out", false,-1, 1,0);
        tracep->declBus(c+217,"ysyx_22050612_npc idu decode3 key", false,-1, 15,0);
        tracep->declQuad(c+1319,"ysyx_22050612_npc idu decode3 lut", false,-1, 53,0);
        tracep->declBus(c+1292,"ysyx_22050612_npc idu decode3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1318,"ysyx_22050612_npc idu decode3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1293,"ysyx_22050612_npc idu decode3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc idu decode3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+216,"ysyx_22050612_npc idu decode3 i0 out", false,-1, 1,0);
        tracep->declBus(c+217,"ysyx_22050612_npc idu decode3 i0 key", false,-1, 15,0);
        tracep->declBus(c+1295,"ysyx_22050612_npc idu decode3 i0 default_out", false,-1, 1,0);
        tracep->declQuad(c+1319,"ysyx_22050612_npc idu decode3 i0 lut", false,-1, 53,0);
        tracep->declBus(c+1321,"ysyx_22050612_npc idu decode3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+130+i*1,"ysyx_22050612_npc idu decode3 i0 pair_list", true,(i+0), 17,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+133+i*1,"ysyx_22050612_npc idu decode3 i0 key_list", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+136+i*1,"ysyx_22050612_npc idu decode3 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+218,"ysyx_22050612_npc idu decode3 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+219,"ysyx_22050612_npc idu decode3 i0 hit", false,-1);
        tracep->declBus(c+1297,"ysyx_22050612_npc idu decode3 i0 i", false,-1, 31,0);
        tracep->declBit(c+1263,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+187,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declQuad(c+189,"ysyx_22050612_npc exu imm_U", false,-1, 63,0);
        tracep->declQuad(c+191,"ysyx_22050612_npc exu imm_J", false,-1, 63,0);
        tracep->declQuad(c+193,"ysyx_22050612_npc exu imm_B", false,-1, 63,0);
        tracep->declQuad(c+195,"ysyx_22050612_npc exu imm_S", false,-1, 63,0);
        tracep->declBus(c+197,"ysyx_22050612_npc exu shamt", false,-1, 5,0);
        tracep->declBus(c+198,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+199,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+200,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu opcode", false,-1, 19,0);
        tracep->declQuad(c+1265,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+185,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+220,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+222,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+224,"ysyx_22050612_npc exu wdata_reg", false,-1, 63,0);
        tracep->declBit(c+226,"ysyx_22050612_npc exu wen", false,-1);
        tracep->declBit(c+227,"ysyx_22050612_npc exu wen_fix", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+228+i*2,"ysyx_22050612_npc exu gpr", true,(i+0), 63,0);}}
        tracep->declQuad(c+1267,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declBus(c+292,"ysyx_22050612_npc exu mode", false,-1, 7,0);
        tracep->declQuad(c+293,"ysyx_22050612_npc exu operator_a", false,-1, 63,0);
        tracep->declQuad(c+295,"ysyx_22050612_npc exu operator_b", false,-1, 63,0);
        tracep->declQuad(c+297,"ysyx_22050612_npc exu result_alu0", false,-1, 63,0);
        tracep->declQuad(c+299,"ysyx_22050612_npc exu result_mul0", false,-1, 63,0);
        tracep->declQuad(c+301,"ysyx_22050612_npc exu result_divu0", false,-1, 63,0);
        tracep->declQuad(c+303,"ysyx_22050612_npc exu result_remu0", false,-1, 63,0);
        tracep->declQuad(c+305,"ysyx_22050612_npc exu result_mulw0", false,-1, 63,0);
        tracep->declBus(c+307,"ysyx_22050612_npc exu result_divw0", false,-1, 31,0);
        tracep->declBus(c+308,"ysyx_22050612_npc exu result_remw0", false,-1, 31,0);
        tracep->declBus(c+309,"ysyx_22050612_npc exu wmask_1byte", false,-1, 7,0);
        tracep->declQuad(c+310,"ysyx_22050612_npc exu wdata_1byte", false,-1, 63,0);
        tracep->declBus(c+312,"ysyx_22050612_npc exu wmask_2byte", false,-1, 7,0);
        tracep->declQuad(c+313,"ysyx_22050612_npc exu wdata_2byte", false,-1, 63,0);
        tracep->declQuad(c+315,"ysyx_22050612_npc exu raddr", false,-1, 63,0);
        tracep->declQuad(c+317,"ysyx_22050612_npc exu rdata", false,-1, 63,0);
        tracep->declQuad(c+319,"ysyx_22050612_npc exu waddr", false,-1, 63,0);
        tracep->declQuad(c+321,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBus(c+323,"ysyx_22050612_npc exu wmask", false,-1, 7,0);
        tracep->declQuad(c+324,"ysyx_22050612_npc exu rdata_fix", false,-1, 63,0);
        tracep->declBus(c+326,"ysyx_22050612_npc exu rdata_1byte", false,-1, 7,0);
        tracep->declBus(c+327,"ysyx_22050612_npc exu rdata_2byte", false,-1, 15,0);
        tracep->declBus(c+1322,"ysyx_22050612_npc exu cpu_gpr_group ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu cpu_gpr_group DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1263,"ysyx_22050612_npc exu cpu_gpr_group clk", false,-1);
        tracep->declQuad(c+224,"ysyx_22050612_npc exu cpu_gpr_group wdata", false,-1, 63,0);
        tracep->declBus(c+198,"ysyx_22050612_npc exu cpu_gpr_group waddr", false,-1, 4,0);
        tracep->declBit(c+227,"ysyx_22050612_npc exu cpu_gpr_group wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+328+i*2,"ysyx_22050612_npc exu cpu_gpr_group rf", true,(i+0), 63,0);}}
        tracep->declBus(c+1323,"ysyx_22050612_npc exu gpr_write_enable NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu gpr_write_enable KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1325,"ysyx_22050612_npc exu gpr_write_enable DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+226,"ysyx_22050612_npc exu gpr_write_enable out", false,-1, 0,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu gpr_write_enable key", false,-1, 19,0);
        tracep->declArray(c+1326,"ysyx_22050612_npc exu gpr_write_enable lut", false,-1, 755,0);
        tracep->declBus(c+1323,"ysyx_22050612_npc exu gpr_write_enable i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu gpr_write_enable i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1325,"ysyx_22050612_npc exu gpr_write_enable i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc exu gpr_write_enable i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+226,"ysyx_22050612_npc exu gpr_write_enable i0 out", false,-1, 0,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu gpr_write_enable i0 key", false,-1, 19,0);
        tracep->declBus(c+1350,"ysyx_22050612_npc exu gpr_write_enable i0 default_out", false,-1, 0,0);
        tracep->declArray(c+1326,"ysyx_22050612_npc exu gpr_write_enable i0 lut", false,-1, 755,0);
        tracep->declBus(c+1273,"ysyx_22050612_npc exu gpr_write_enable i0 PAIR_LEN", false,-1, 31,0);
        tracep->declBus(c+392,"ysyx_22050612_npc exu gpr_write_enable i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+393,"ysyx_22050612_npc exu gpr_write_enable i0 hit", false,-1);
        tracep->declBus(c+1351,"ysyx_22050612_npc exu gpr_write_enable i0 i", false,-1, 31,0);
        tracep->declBus(c+1323,"ysyx_22050612_npc exu gpr_write_data NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu gpr_write_data KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu gpr_write_data DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+224,"ysyx_22050612_npc exu gpr_write_data out", false,-1, 63,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu gpr_write_data key", false,-1, 19,0);
        tracep->declArray(c+394,"ysyx_22050612_npc exu gpr_write_data lut", false,-1, 3023,0);
        tracep->declBus(c+1323,"ysyx_22050612_npc exu gpr_write_data i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu gpr_write_data i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu gpr_write_data i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc exu gpr_write_data i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+224,"ysyx_22050612_npc exu gpr_write_data i0 out", false,-1, 63,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu gpr_write_data i0 key", false,-1, 19,0);
        tracep->declQuad(c+1352,"ysyx_22050612_npc exu gpr_write_data i0 default_out", false,-1, 63,0);
        tracep->declArray(c+394,"ysyx_22050612_npc exu gpr_write_data i0 lut", false,-1, 3023,0);
        tracep->declBus(c+1354,"ysyx_22050612_npc exu gpr_write_data i0 PAIR_LEN", false,-1, 31,0);
        tracep->declQuad(c+489,"ysyx_22050612_npc exu gpr_write_data i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+491,"ysyx_22050612_npc exu gpr_write_data i0 hit", false,-1);
        tracep->declBus(c+1351,"ysyx_22050612_npc exu gpr_write_data i0 i", false,-1, 31,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu cpu_pc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu cpu_pc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu cpu_pc DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+185,"ysyx_22050612_npc exu cpu_pc out", false,-1, 63,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu cpu_pc key", false,-1, 19,0);
        tracep->declQuad(c+1267,"ysyx_22050612_npc exu cpu_pc default_out", false,-1, 63,0);
        tracep->declArray(c+492,"ysyx_22050612_npc exu cpu_pc lut", false,-1, 671,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu cpu_pc i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu cpu_pc i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu cpu_pc i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1325,"ysyx_22050612_npc exu cpu_pc i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+185,"ysyx_22050612_npc exu cpu_pc i0 out", false,-1, 63,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu cpu_pc i0 key", false,-1, 19,0);
        tracep->declQuad(c+1267,"ysyx_22050612_npc exu cpu_pc i0 default_out", false,-1, 63,0);
        tracep->declArray(c+492,"ysyx_22050612_npc exu cpu_pc i0 lut", false,-1, 671,0);
        tracep->declBus(c+1354,"ysyx_22050612_npc exu cpu_pc i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+513+i*3,"ysyx_22050612_npc exu cpu_pc i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+537+i*1,"ysyx_22050612_npc exu cpu_pc i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+545+i*2,"ysyx_22050612_npc exu cpu_pc i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+561,"ysyx_22050612_npc exu cpu_pc i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+563,"ysyx_22050612_npc exu cpu_pc i0 hit", false,-1);
        tracep->declBus(c+1355,"ysyx_22050612_npc exu cpu_pc i0 i", false,-1, 31,0);
        tracep->declBus(c+1356,"ysyx_22050612_npc exu operator0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu operator0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu operator0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+293,"ysyx_22050612_npc exu operator0 out", false,-1, 63,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu operator0 key", false,-1, 19,0);
        tracep->declArray(c+564,"ysyx_22050612_npc exu operator0 lut", false,-1, 3275,0);
        tracep->declBus(c+1356,"ysyx_22050612_npc exu operator0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu operator0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu operator0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc exu operator0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+293,"ysyx_22050612_npc exu operator0 i0 out", false,-1, 63,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu operator0 i0 key", false,-1, 19,0);
        tracep->declQuad(c+1352,"ysyx_22050612_npc exu operator0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+564,"ysyx_22050612_npc exu operator0 i0 lut", false,-1, 3275,0);
        tracep->declBus(c+1354,"ysyx_22050612_npc exu operator0 i0 PAIR_LEN", false,-1, 31,0);
        tracep->declQuad(c+667,"ysyx_22050612_npc exu operator0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+669,"ysyx_22050612_npc exu operator0 i0 hit", false,-1);
        tracep->declBus(c+1357,"ysyx_22050612_npc exu operator0 i0 i", false,-1, 31,0);
        tracep->declBus(c+1356,"ysyx_22050612_npc exu operator1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu operator1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu operator1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+295,"ysyx_22050612_npc exu operator1 out", false,-1, 63,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu operator1 key", false,-1, 19,0);
        tracep->declArray(c+670,"ysyx_22050612_npc exu operator1 lut", false,-1, 3275,0);
        tracep->declBus(c+1356,"ysyx_22050612_npc exu operator1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu operator1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu operator1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc exu operator1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+295,"ysyx_22050612_npc exu operator1 i0 out", false,-1, 63,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu operator1 i0 key", false,-1, 19,0);
        tracep->declQuad(c+1352,"ysyx_22050612_npc exu operator1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+670,"ysyx_22050612_npc exu operator1 i0 lut", false,-1, 3275,0);
        tracep->declBus(c+1354,"ysyx_22050612_npc exu operator1 i0 PAIR_LEN", false,-1, 31,0);
        tracep->declQuad(c+773,"ysyx_22050612_npc exu operator1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+775,"ysyx_22050612_npc exu operator1 i0 hit", false,-1);
        tracep->declBus(c+1357,"ysyx_22050612_npc exu operator1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1356,"ysyx_22050612_npc exu alumode NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu alumode KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu alumode DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+292,"ysyx_22050612_npc exu alumode out", false,-1, 7,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu alumode key", false,-1, 19,0);
        tracep->declArray(c+1358,"ysyx_22050612_npc exu alumode lut", false,-1, 1091,0);
        tracep->declBus(c+1356,"ysyx_22050612_npc exu alumode i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu alumode i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu alumode i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc exu alumode i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+292,"ysyx_22050612_npc exu alumode i0 out", false,-1, 7,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu alumode i0 key", false,-1, 19,0);
        tracep->declBus(c+1315,"ysyx_22050612_npc exu alumode i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1358,"ysyx_22050612_npc exu alumode i0 lut", false,-1, 1091,0);
        tracep->declBus(c+1393,"ysyx_22050612_npc exu alumode i0 PAIR_LEN", false,-1, 31,0);
        tracep->declBus(c+776,"ysyx_22050612_npc exu alumode i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+777,"ysyx_22050612_npc exu alumode i0 hit", false,-1);
        tracep->declBus(c+1357,"ysyx_22050612_npc exu alumode i0 i", false,-1, 31,0);
        tracep->declBus(c+292,"ysyx_22050612_npc exu alu0 mode", false,-1, 7,0);
        tracep->declQuad(c+293,"ysyx_22050612_npc exu alu0 A", false,-1, 63,0);
        tracep->declQuad(c+295,"ysyx_22050612_npc exu alu0 B", false,-1, 63,0);
        tracep->declQuad(c+297,"ysyx_22050612_npc exu alu0 Z", false,-1, 63,0);
        tracep->declQuad(c+778,"ysyx_22050612_npc exu alu0 add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+780,"ysyx_22050612_npc exu alu0 and_result", false,-1, 63,0);
        tracep->declQuad(c+782,"ysyx_22050612_npc exu alu0 or_result", false,-1, 63,0);
        tracep->declQuad(c+784,"ysyx_22050612_npc exu alu0 xor_result", false,-1, 63,0);
        tracep->declQuad(c+786,"ysyx_22050612_npc exu alu0 slt_result", false,-1, 63,0);
        tracep->declQuad(c+788,"ysyx_22050612_npc exu alu0 sltu_result", false,-1, 63,0);
        tracep->declQuad(c+790,"ysyx_22050612_npc exu alu0 sll_result", false,-1, 63,0);
        tracep->declQuad(c+792,"ysyx_22050612_npc exu alu0 srl_result", false,-1, 63,0);
        tracep->declQuad(c+794,"ysyx_22050612_npc exu alu0 sra_result", false,-1, 63,0);
        tracep->declQuad(c+796,"ysyx_22050612_npc exu alu0 C", false,-1, 63,0);
        tracep->declBus(c+1274,"ysyx_22050612_npc exu alu0 alu_result_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu alu0 alu_result_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu alu0 alu_result_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+297,"ysyx_22050612_npc exu alu0 alu_result_select out", false,-1, 63,0);
        tracep->declBus(c+292,"ysyx_22050612_npc exu alu0 alu_result_select key", false,-1, 7,0);
        tracep->declArray(c+798,"ysyx_22050612_npc exu alu0 alu_result_select lut", false,-1, 719,0);
        tracep->declBus(c+1274,"ysyx_22050612_npc exu alu0 alu_result_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu alu0 alu_result_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu alu0 alu_result_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc exu alu0 alu_result_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+297,"ysyx_22050612_npc exu alu0 alu_result_select i0 out", false,-1, 63,0);
        tracep->declBus(c+292,"ysyx_22050612_npc exu alu0 alu_result_select i0 key", false,-1, 7,0);
        tracep->declQuad(c+1352,"ysyx_22050612_npc exu alu0 alu_result_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+798,"ysyx_22050612_npc exu alu0 alu_result_select i0 lut", false,-1, 719,0);
        tracep->declBus(c+1394,"ysyx_22050612_npc exu alu0 alu_result_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<10; i++) {
                tracep->declArray(c+821+i*3,"ysyx_22050612_npc exu alu0 alu_result_select i0 pair_list", true,(i+0), 71,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+851+i*1,"ysyx_22050612_npc exu alu0 alu_result_select i0 key_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declQuad(c+861+i*2,"ysyx_22050612_npc exu alu0 alu_result_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+881,"ysyx_22050612_npc exu alu0 alu_result_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+883,"ysyx_22050612_npc exu alu0 alu_result_select i0 hit", false,-1);
        tracep->declBus(c+1395,"ysyx_22050612_npc exu alu0 alu_result_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu wdata_onebyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1292,"ysyx_22050612_npc exu wdata_onebyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu wdata_onebyte DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+310,"ysyx_22050612_npc exu wdata_onebyte out", false,-1, 63,0);
        tracep->declBus(c+884,"ysyx_22050612_npc exu wdata_onebyte key", false,-1, 2,0);
        tracep->declArray(c+885,"ysyx_22050612_npc exu wdata_onebyte lut", false,-1, 535,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu wdata_onebyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1292,"ysyx_22050612_npc exu wdata_onebyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu wdata_onebyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc exu wdata_onebyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+310,"ysyx_22050612_npc exu wdata_onebyte i0 out", false,-1, 63,0);
        tracep->declBus(c+884,"ysyx_22050612_npc exu wdata_onebyte i0 key", false,-1, 2,0);
        tracep->declQuad(c+1352,"ysyx_22050612_npc exu wdata_onebyte i0 default_out", false,-1, 63,0);
        tracep->declArray(c+885,"ysyx_22050612_npc exu wdata_onebyte i0 lut", false,-1, 535,0);
        tracep->declBus(c+1396,"ysyx_22050612_npc exu wdata_onebyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+902+i*3,"ysyx_22050612_npc exu wdata_onebyte i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+926+i*1,"ysyx_22050612_npc exu wdata_onebyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+934+i*2,"ysyx_22050612_npc exu wdata_onebyte i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+950,"ysyx_22050612_npc exu wdata_onebyte i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+952,"ysyx_22050612_npc exu wdata_onebyte i0 hit", false,-1);
        tracep->declBus(c+1355,"ysyx_22050612_npc exu wdata_onebyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu wmask_onebyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1292,"ysyx_22050612_npc exu wmask_onebyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu wmask_onebyte DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+309,"ysyx_22050612_npc exu wmask_onebyte out", false,-1, 7,0);
        tracep->declBus(c+884,"ysyx_22050612_npc exu wmask_onebyte key", false,-1, 2,0);
        tracep->declArray(c+1397,"ysyx_22050612_npc exu wmask_onebyte lut", false,-1, 87,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu wmask_onebyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1292,"ysyx_22050612_npc exu wmask_onebyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu wmask_onebyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc exu wmask_onebyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+309,"ysyx_22050612_npc exu wmask_onebyte i0 out", false,-1, 7,0);
        tracep->declBus(c+884,"ysyx_22050612_npc exu wmask_onebyte i0 key", false,-1, 2,0);
        tracep->declBus(c+1315,"ysyx_22050612_npc exu wmask_onebyte i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1397,"ysyx_22050612_npc exu wmask_onebyte i0 lut", false,-1, 87,0);
        tracep->declBus(c+1400,"ysyx_22050612_npc exu wmask_onebyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+139+i*1,"ysyx_22050612_npc exu wmask_onebyte i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+147+i*1,"ysyx_22050612_npc exu wmask_onebyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+155+i*1,"ysyx_22050612_npc exu wmask_onebyte i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+953,"ysyx_22050612_npc exu wmask_onebyte i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+954,"ysyx_22050612_npc exu wmask_onebyte i0 hit", false,-1);
        tracep->declBus(c+1355,"ysyx_22050612_npc exu wmask_onebyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1275,"ysyx_22050612_npc exu wdata_twobyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1292,"ysyx_22050612_npc exu wdata_twobyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu wdata_twobyte DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+313,"ysyx_22050612_npc exu wdata_twobyte out", false,-1, 63,0);
        tracep->declBus(c+884,"ysyx_22050612_npc exu wdata_twobyte key", false,-1, 2,0);
        tracep->declArray(c+955,"ysyx_22050612_npc exu wdata_twobyte lut", false,-1, 468,0);
        tracep->declBus(c+1275,"ysyx_22050612_npc exu wdata_twobyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1292,"ysyx_22050612_npc exu wdata_twobyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu wdata_twobyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc exu wdata_twobyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+313,"ysyx_22050612_npc exu wdata_twobyte i0 out", false,-1, 63,0);
        tracep->declBus(c+884,"ysyx_22050612_npc exu wdata_twobyte i0 key", false,-1, 2,0);
        tracep->declQuad(c+1352,"ysyx_22050612_npc exu wdata_twobyte i0 default_out", false,-1, 63,0);
        tracep->declArray(c+955,"ysyx_22050612_npc exu wdata_twobyte i0 lut", false,-1, 468,0);
        tracep->declBus(c+1396,"ysyx_22050612_npc exu wdata_twobyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+970+i*3,"ysyx_22050612_npc exu wdata_twobyte i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+991+i*1,"ysyx_22050612_npc exu wdata_twobyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+998+i*2,"ysyx_22050612_npc exu wdata_twobyte i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1012,"ysyx_22050612_npc exu wdata_twobyte i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1014,"ysyx_22050612_npc exu wdata_twobyte i0 hit", false,-1);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu wdata_twobyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1275,"ysyx_22050612_npc exu wmask_twobyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1292,"ysyx_22050612_npc exu wmask_twobyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu wmask_twobyte DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+312,"ysyx_22050612_npc exu wmask_twobyte out", false,-1, 7,0);
        tracep->declBus(c+884,"ysyx_22050612_npc exu wmask_twobyte key", false,-1, 2,0);
        tracep->declArray(c+1402,"ysyx_22050612_npc exu wmask_twobyte lut", false,-1, 76,0);
        tracep->declBus(c+1275,"ysyx_22050612_npc exu wmask_twobyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1292,"ysyx_22050612_npc exu wmask_twobyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu wmask_twobyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc exu wmask_twobyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+312,"ysyx_22050612_npc exu wmask_twobyte i0 out", false,-1, 7,0);
        tracep->declBus(c+884,"ysyx_22050612_npc exu wmask_twobyte i0 key", false,-1, 2,0);
        tracep->declBus(c+1315,"ysyx_22050612_npc exu wmask_twobyte i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1402,"ysyx_22050612_npc exu wmask_twobyte i0 lut", false,-1, 76,0);
        tracep->declBus(c+1400,"ysyx_22050612_npc exu wmask_twobyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+163+i*1,"ysyx_22050612_npc exu wmask_twobyte i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+170+i*1,"ysyx_22050612_npc exu wmask_twobyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+177+i*1,"ysyx_22050612_npc exu wmask_twobyte i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1015,"ysyx_22050612_npc exu wmask_twobyte i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1016,"ysyx_22050612_npc exu wmask_twobyte i0 hit", false,-1);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu wmask_twobyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1322,"ysyx_22050612_npc exu raddr_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu raddr_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu raddr_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+315,"ysyx_22050612_npc exu raddr_select out", false,-1, 63,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu raddr_select key", false,-1, 19,0);
        tracep->declArray(c+1017,"ysyx_22050612_npc exu raddr_select lut", false,-1, 419,0);
        tracep->declBus(c+1322,"ysyx_22050612_npc exu raddr_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu raddr_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu raddr_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc exu raddr_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+315,"ysyx_22050612_npc exu raddr_select i0 out", false,-1, 63,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu raddr_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+1352,"ysyx_22050612_npc exu raddr_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1017,"ysyx_22050612_npc exu raddr_select i0 lut", false,-1, 419,0);
        tracep->declBus(c+1354,"ysyx_22050612_npc exu raddr_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+1031+i*3,"ysyx_22050612_npc exu raddr_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1046+i*1,"ysyx_22050612_npc exu raddr_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+1051+i*2,"ysyx_22050612_npc exu raddr_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1061,"ysyx_22050612_npc exu raddr_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1063,"ysyx_22050612_npc exu raddr_select i0 hit", false,-1);
        tracep->declBus(c+1405,"ysyx_22050612_npc exu raddr_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu waddr_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu waddr_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu waddr_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+319,"ysyx_22050612_npc exu waddr_select out", false,-1, 63,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu waddr_select key", false,-1, 19,0);
        tracep->declArray(c+1064,"ysyx_22050612_npc exu waddr_select lut", false,-1, 335,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu waddr_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu waddr_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu waddr_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc exu waddr_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+319,"ysyx_22050612_npc exu waddr_select i0 out", false,-1, 63,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu waddr_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+1352,"ysyx_22050612_npc exu waddr_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1064,"ysyx_22050612_npc exu waddr_select i0 lut", false,-1, 335,0);
        tracep->declBus(c+1354,"ysyx_22050612_npc exu waddr_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+1075+i*3,"ysyx_22050612_npc exu waddr_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1087+i*1,"ysyx_22050612_npc exu waddr_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1091+i*2,"ysyx_22050612_npc exu waddr_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1099,"ysyx_22050612_npc exu waddr_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1101,"ysyx_22050612_npc exu waddr_select i0 hit", false,-1);
        tracep->declBus(c+1407,"ysyx_22050612_npc exu waddr_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu wdata_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu wdata_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu wdata_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+321,"ysyx_22050612_npc exu wdata_select out", false,-1, 63,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu wdata_select key", false,-1, 19,0);
        tracep->declArray(c+1102,"ysyx_22050612_npc exu wdata_select lut", false,-1, 335,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu wdata_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu wdata_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu wdata_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc exu wdata_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+321,"ysyx_22050612_npc exu wdata_select i0 out", false,-1, 63,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu wdata_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+1352,"ysyx_22050612_npc exu wdata_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1102,"ysyx_22050612_npc exu wdata_select i0 lut", false,-1, 335,0);
        tracep->declBus(c+1354,"ysyx_22050612_npc exu wdata_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+1113+i*3,"ysyx_22050612_npc exu wdata_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1125+i*1,"ysyx_22050612_npc exu wdata_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1129+i*2,"ysyx_22050612_npc exu wdata_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1137,"ysyx_22050612_npc exu wdata_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1139,"ysyx_22050612_npc exu wdata_select i0 hit", false,-1);
        tracep->declBus(c+1407,"ysyx_22050612_npc exu wdata_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu wmask_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu wmask_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu wmask_select DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+323,"ysyx_22050612_npc exu wmask_select out", false,-1, 7,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu wmask_select key", false,-1, 19,0);
        tracep->declArray(c+1140,"ysyx_22050612_npc exu wmask_select lut", false,-1, 111,0);
        tracep->declBus(c+1406,"ysyx_22050612_npc exu wmask_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu wmask_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu wmask_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc exu wmask_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+323,"ysyx_22050612_npc exu wmask_select i0 out", false,-1, 7,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu wmask_select i0 key", false,-1, 19,0);
        tracep->declBus(c+1315,"ysyx_22050612_npc exu wmask_select i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1140,"ysyx_22050612_npc exu wmask_select i0 lut", false,-1, 111,0);
        tracep->declBus(c+1393,"ysyx_22050612_npc exu wmask_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1144+i*1,"ysyx_22050612_npc exu wmask_select i0 pair_list", true,(i+0), 27,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1148+i*1,"ysyx_22050612_npc exu wmask_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1152+i*1,"ysyx_22050612_npc exu wmask_select i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1156,"ysyx_22050612_npc exu wmask_select i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1157,"ysyx_22050612_npc exu wmask_select i0 hit", false,-1);
        tracep->declBus(c+1407,"ysyx_22050612_npc exu wmask_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1322,"ysyx_22050612_npc exu rdata_fixing NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu rdata_fixing KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu rdata_fixing DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+324,"ysyx_22050612_npc exu rdata_fixing out", false,-1, 63,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu rdata_fixing key", false,-1, 19,0);
        tracep->declArray(c+1158,"ysyx_22050612_npc exu rdata_fixing lut", false,-1, 419,0);
        tracep->declBus(c+1322,"ysyx_22050612_npc exu rdata_fixing i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1324,"ysyx_22050612_npc exu rdata_fixing i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1269,"ysyx_22050612_npc exu rdata_fixing i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc exu rdata_fixing i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+324,"ysyx_22050612_npc exu rdata_fixing i0 out", false,-1, 63,0);
        tracep->declBus(c+201,"ysyx_22050612_npc exu rdata_fixing i0 key", false,-1, 19,0);
        tracep->declQuad(c+1352,"ysyx_22050612_npc exu rdata_fixing i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1158,"ysyx_22050612_npc exu rdata_fixing i0 lut", false,-1, 419,0);
        tracep->declBus(c+1354,"ysyx_22050612_npc exu rdata_fixing i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+1172+i*3,"ysyx_22050612_npc exu rdata_fixing i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+1187+i*1,"ysyx_22050612_npc exu rdata_fixing i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+1192+i*2,"ysyx_22050612_npc exu rdata_fixing i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1202,"ysyx_22050612_npc exu rdata_fixing i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1204,"ysyx_22050612_npc exu rdata_fixing i0 hit", false,-1);
        tracep->declBus(c+1405,"ysyx_22050612_npc exu rdata_fixing i0 i", false,-1, 31,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu rdata_onebyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1292,"ysyx_22050612_npc exu rdata_onebyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu rdata_onebyte DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+326,"ysyx_22050612_npc exu rdata_onebyte out", false,-1, 7,0);
        tracep->declBus(c+1205,"ysyx_22050612_npc exu rdata_onebyte key", false,-1, 2,0);
        tracep->declArray(c+1206,"ysyx_22050612_npc exu rdata_onebyte lut", false,-1, 87,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu rdata_onebyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1292,"ysyx_22050612_npc exu rdata_onebyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1299,"ysyx_22050612_npc exu rdata_onebyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc exu rdata_onebyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+326,"ysyx_22050612_npc exu rdata_onebyte i0 out", false,-1, 7,0);
        tracep->declBus(c+1205,"ysyx_22050612_npc exu rdata_onebyte i0 key", false,-1, 2,0);
        tracep->declBus(c+1315,"ysyx_22050612_npc exu rdata_onebyte i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1206,"ysyx_22050612_npc exu rdata_onebyte i0 lut", false,-1, 87,0);
        tracep->declBus(c+1400,"ysyx_22050612_npc exu rdata_onebyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1209+i*1,"ysyx_22050612_npc exu rdata_onebyte i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1217+i*1,"ysyx_22050612_npc exu rdata_onebyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1225+i*1,"ysyx_22050612_npc exu rdata_onebyte i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1233,"ysyx_22050612_npc exu rdata_onebyte i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1234,"ysyx_22050612_npc exu rdata_onebyte i0 hit", false,-1);
        tracep->declBus(c+1355,"ysyx_22050612_npc exu rdata_onebyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1275,"ysyx_22050612_npc exu rdata_twobyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1292,"ysyx_22050612_npc exu rdata_twobyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1318,"ysyx_22050612_npc exu rdata_twobyte DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+327,"ysyx_22050612_npc exu rdata_twobyte out", false,-1, 15,0);
        tracep->declBus(c+1205,"ysyx_22050612_npc exu rdata_twobyte key", false,-1, 2,0);
        tracep->declArray(c+1235,"ysyx_22050612_npc exu rdata_twobyte lut", false,-1, 132,0);
        tracep->declBus(c+1275,"ysyx_22050612_npc exu rdata_twobyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1292,"ysyx_22050612_npc exu rdata_twobyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1318,"ysyx_22050612_npc exu rdata_twobyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1288,"ysyx_22050612_npc exu rdata_twobyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+327,"ysyx_22050612_npc exu rdata_twobyte i0 out", false,-1, 15,0);
        tracep->declBus(c+1205,"ysyx_22050612_npc exu rdata_twobyte i0 key", false,-1, 2,0);
        tracep->declBus(c+1408,"ysyx_22050612_npc exu rdata_twobyte i0 default_out", false,-1, 15,0);
        tracep->declArray(c+1235,"ysyx_22050612_npc exu rdata_twobyte i0 lut", false,-1, 132,0);
        tracep->declBus(c+1298,"ysyx_22050612_npc exu rdata_twobyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+1240+i*1,"ysyx_22050612_npc exu rdata_twobyte i0 pair_list", true,(i+0), 18,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+1247+i*1,"ysyx_22050612_npc exu rdata_twobyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+1254+i*1,"ysyx_22050612_npc exu rdata_twobyte i0 data_list", true,(i+0), 15,0);}}
        tracep->declBus(c+1261,"ysyx_22050612_npc exu rdata_twobyte i0 lut_out", false,-1, 15,0);
        tracep->declBit(c+1262,"ysyx_22050612_npc exu rdata_twobyte i0 hit", false,-1);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu rdata_twobyte i0 i", false,-1, 31,0);
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

extern const VlWide<12>/*383:0*/ Vysyx_22050612_npc__ConstPool__CONST_655c0287_0;
extern const VlWide<15>/*479:0*/ Vysyx_22050612_npc__ConstPool__CONST_867024fc_0;
extern const VlWide<24>/*767:0*/ Vysyx_22050612_npc__ConstPool__CONST_dac84abe_0;
extern const VlWide<35>/*1119:0*/ Vysyx_22050612_npc__ConstPool__CONST_223430c5_0;

void Vysyx_22050612_npc___024root__traceFullSub0(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp3507;
    VlWide<3>/*95:0*/ __Vtemp3508;
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
        tracep->fullSData(oldp+22,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+24,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[2]),10);
        tracep->fullSData(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[3]),10);
        tracep->fullSData(oldp+26,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[4]),10);
        tracep->fullSData(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[5]),10);
        tracep->fullSData(oldp+28,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[6]),10);
        tracep->fullSData(oldp+29,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[7]),10);
        tracep->fullSData(oldp+30,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[8]),10);
        tracep->fullSData(oldp+31,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[9]),10);
        tracep->fullSData(oldp+32,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[10]),10);
        tracep->fullSData(oldp+33,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[11]),10);
        tracep->fullSData(oldp+34,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[12]),10);
        tracep->fullSData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[13]),10);
        tracep->fullSData(oldp+36,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[14]),10);
        tracep->fullSData(oldp+37,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[15]),10);
        tracep->fullSData(oldp+38,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[16]),10);
        tracep->fullSData(oldp+39,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[17]),10);
        tracep->fullSData(oldp+40,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[18]),10);
        tracep->fullSData(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[19]),10);
        tracep->fullSData(oldp+42,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[20]),10);
        tracep->fullCData(oldp+43,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0]),7);
        tracep->fullCData(oldp+44,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[1]),7);
        tracep->fullCData(oldp+45,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[2]),7);
        tracep->fullCData(oldp+46,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[3]),7);
        tracep->fullCData(oldp+47,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[4]),7);
        tracep->fullCData(oldp+48,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[5]),7);
        tracep->fullCData(oldp+49,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[6]),7);
        tracep->fullCData(oldp+50,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[7]),7);
        tracep->fullCData(oldp+51,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[8]),7);
        tracep->fullCData(oldp+52,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[9]),7);
        tracep->fullCData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[10]),7);
        tracep->fullCData(oldp+54,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[11]),7);
        tracep->fullCData(oldp+55,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[12]),7);
        tracep->fullCData(oldp+56,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[13]),7);
        tracep->fullCData(oldp+57,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[14]),7);
        tracep->fullCData(oldp+58,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[15]),7);
        tracep->fullCData(oldp+59,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[16]),7);
        tracep->fullCData(oldp+60,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[17]),7);
        tracep->fullCData(oldp+61,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[18]),7);
        tracep->fullCData(oldp+62,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[19]),7);
        tracep->fullCData(oldp+63,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[20]),7);
        tracep->fullSData(oldp+64,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[0]),9);
        tracep->fullSData(oldp+65,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[1]),9);
        tracep->fullSData(oldp+66,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[2]),9);
        tracep->fullCData(oldp+67,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+68,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+69,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+70,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+72,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[2]),2);
        tracep->fullIData(oldp+73,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0]),25);
        tracep->fullIData(oldp+74,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[1]),25);
        tracep->fullIData(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[2]),25);
        tracep->fullIData(oldp+76,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[3]),25);
        tracep->fullIData(oldp+77,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[4]),25);
        tracep->fullIData(oldp+78,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[5]),25);
        tracep->fullIData(oldp+79,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[6]),25);
        tracep->fullIData(oldp+80,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[7]),25);
        tracep->fullIData(oldp+81,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[8]),25);
        tracep->fullIData(oldp+82,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[9]),25);
        tracep->fullIData(oldp+83,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[10]),25);
        tracep->fullIData(oldp+84,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[11]),25);
        tracep->fullIData(oldp+85,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[12]),25);
        tracep->fullIData(oldp+86,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[13]),25);
        tracep->fullIData(oldp+87,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[14]),25);
        tracep->fullIData(oldp+88,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[15]),25);
        tracep->fullIData(oldp+89,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[16]),25);
        tracep->fullIData(oldp+90,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[17]),25);
        tracep->fullIData(oldp+91,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[18]),25);
        tracep->fullIData(oldp+92,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0]),17);
        tracep->fullIData(oldp+93,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[1]),17);
        tracep->fullIData(oldp+94,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[2]),17);
        tracep->fullIData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[3]),17);
        tracep->fullIData(oldp+96,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[4]),17);
        tracep->fullIData(oldp+97,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[5]),17);
        tracep->fullIData(oldp+98,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[6]),17);
        tracep->fullIData(oldp+99,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[7]),17);
        tracep->fullIData(oldp+100,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[8]),17);
        tracep->fullIData(oldp+101,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[9]),17);
        tracep->fullIData(oldp+102,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[10]),17);
        tracep->fullIData(oldp+103,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[11]),17);
        tracep->fullIData(oldp+104,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[12]),17);
        tracep->fullIData(oldp+105,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[13]),17);
        tracep->fullIData(oldp+106,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[14]),17);
        tracep->fullIData(oldp+107,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[15]),17);
        tracep->fullIData(oldp+108,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[16]),17);
        tracep->fullIData(oldp+109,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[17]),17);
        tracep->fullIData(oldp+110,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[18]),17);
        tracep->fullCData(oldp+111,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+112,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+113,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+114,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+115,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+116,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+117,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+118,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+119,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[8]),8);
        tracep->fullCData(oldp+120,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[9]),8);
        tracep->fullCData(oldp+121,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[10]),8);
        tracep->fullCData(oldp+122,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[11]),8);
        tracep->fullCData(oldp+123,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[12]),8);
        tracep->fullCData(oldp+124,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[13]),8);
        tracep->fullCData(oldp+125,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[14]),8);
        tracep->fullCData(oldp+126,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[15]),8);
        tracep->fullCData(oldp+127,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[16]),8);
        tracep->fullCData(oldp+128,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[17]),8);
        tracep->fullCData(oldp+129,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[18]),8);
        tracep->fullIData(oldp+130,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list[0]),18);
        tracep->fullIData(oldp+131,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list[1]),18);
        tracep->fullIData(oldp+132,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list[2]),18);
        tracep->fullSData(oldp+133,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[0]),16);
        tracep->fullSData(oldp+134,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[1]),16);
        tracep->fullSData(oldp+135,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[2]),16);
        tracep->fullCData(oldp+136,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+137,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+138,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[2]),2);
        tracep->fullSData(oldp+139,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+140,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+141,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+142,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+143,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+144,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+145,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullSData(oldp+146,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[7]),11);
        tracep->fullCData(oldp+147,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+148,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+149,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+150,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+151,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+152,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+153,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+154,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[7]),3);
        tracep->fullCData(oldp+155,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+156,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+157,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+158,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+159,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+160,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+161,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+162,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[7]),8);
        tracep->fullSData(oldp+163,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+164,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+165,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+166,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+167,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+168,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+169,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullCData(oldp+170,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+171,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+172,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+173,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+174,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+175,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+176,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+177,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+178,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+179,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+180,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+181,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+182,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+183,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[6]),8);
        tracep->fullIData(oldp+184,(vlSelf->ysyx_22050612_npc__DOT__inst),32);
        tracep->fullQData(oldp+185,(vlSelf->ysyx_22050612_npc__DOT__dnpc),64);
        tracep->fullQData(oldp+187,(vlSelf->ysyx_22050612_npc__DOT__imm_I),64);
        tracep->fullQData(oldp+189,(vlSelf->ysyx_22050612_npc__DOT__imm_U),64);
        tracep->fullQData(oldp+191,(((vlSelf->ysyx_22050612_npc__DOT__inst 
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
        tracep->fullQData(oldp+193,(vlSelf->ysyx_22050612_npc__DOT__imm_B),64);
        tracep->fullQData(oldp+195,(vlSelf->ysyx_22050612_npc__DOT__imm_S),64);
        tracep->fullCData(oldp+197,((0x3fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0x14U))),6);
        tracep->fullCData(oldp+198,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+199,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+200,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+201,(vlSelf->ysyx_22050612_npc__DOT__opcode),20);
        tracep->fullQData(oldp+202,(vlSelf->ysyx_22050612_npc__DOT__ifu__DOT__inst_mix),64);
        tracep->fullCData(oldp+204,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode0____pinNumber1),7);
        tracep->fullSData(oldp+205,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2),10);
        tracep->fullCData(oldp+206,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out),7);
        tracep->fullBit(oldp+207,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+208,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode1____pinNumber1),2);
        tracep->fullCData(oldp+209,((0x7fU & vlSelf->ysyx_22050612_npc__DOT__inst)),7);
        tracep->fullCData(oldp+210,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+211,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+212,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode2____pinNumber1),8);
        tracep->fullIData(oldp+213,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2),17);
        tracep->fullCData(oldp+214,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+215,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+216,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode3____pinNumber1),2);
        tracep->fullSData(oldp+217,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2),16);
        tracep->fullCData(oldp+218,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+219,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+220,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1),64);
        tracep->fullQData(oldp+222,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2),64);
        tracep->fullQData(oldp+224,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_reg),64);
        tracep->fullBit(oldp+226,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
        tracep->fullBit(oldp+227,(((0U != (0x1fU & 
                                           (vlSelf->ysyx_22050612_npc__DOT__inst 
                                            >> 7U))) 
                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen))));
        tracep->fullQData(oldp+228,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
        tracep->fullQData(oldp+230,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
        tracep->fullQData(oldp+232,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
        tracep->fullQData(oldp+234,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
        tracep->fullQData(oldp+236,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
        tracep->fullQData(oldp+238,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
        tracep->fullQData(oldp+240,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
        tracep->fullQData(oldp+242,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
        tracep->fullQData(oldp+244,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
        tracep->fullQData(oldp+246,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
        tracep->fullQData(oldp+248,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
        tracep->fullQData(oldp+250,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
        tracep->fullQData(oldp+252,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
        tracep->fullQData(oldp+254,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
        tracep->fullQData(oldp+256,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
        tracep->fullQData(oldp+258,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
        tracep->fullQData(oldp+260,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
        tracep->fullQData(oldp+262,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
        tracep->fullQData(oldp+264,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
        tracep->fullQData(oldp+266,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
        tracep->fullQData(oldp+268,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
        tracep->fullQData(oldp+270,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
        tracep->fullQData(oldp+272,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
        tracep->fullQData(oldp+274,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
        tracep->fullQData(oldp+276,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
        tracep->fullQData(oldp+278,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
        tracep->fullQData(oldp+280,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
        tracep->fullQData(oldp+282,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
        tracep->fullQData(oldp+284,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
        tracep->fullQData(oldp+286,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
        tracep->fullQData(oldp+288,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
        tracep->fullQData(oldp+290,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
        tracep->fullCData(oldp+292,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode),8);
        tracep->fullQData(oldp+293,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a),64);
        tracep->fullQData(oldp+295,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b),64);
        tracep->fullQData(oldp+297,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0),64);
        tracep->fullQData(oldp+299,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1 
                                     * vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)),64);
        tracep->fullQData(oldp+301,(VL_DIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)),64);
        tracep->fullQData(oldp+303,(VL_MODDIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)),64);
        tracep->fullQData(oldp+305,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0),64);
        tracep->fullIData(oldp+307,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0),32);
        tracep->fullIData(oldp+308,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0),32);
        tracep->fullCData(oldp+309,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte),8);
        tracep->fullQData(oldp+310,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte),64);
        tracep->fullCData(oldp+312,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte),8);
        tracep->fullQData(oldp+313,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte),64);
        tracep->fullQData(oldp+315,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr),64);
        tracep->fullQData(oldp+317,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata),64);
        tracep->fullQData(oldp+319,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr),64);
        tracep->fullQData(oldp+321,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
        tracep->fullCData(oldp+323,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask),8);
        tracep->fullQData(oldp+324,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix),64);
        tracep->fullCData(oldp+326,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte),8);
        tracep->fullSData(oldp+327,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_2byte),16);
        tracep->fullQData(oldp+328,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[0]),64);
        tracep->fullQData(oldp+330,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[1]),64);
        tracep->fullQData(oldp+332,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[2]),64);
        tracep->fullQData(oldp+334,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[3]),64);
        tracep->fullQData(oldp+336,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[4]),64);
        tracep->fullQData(oldp+338,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[5]),64);
        tracep->fullQData(oldp+340,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[6]),64);
        tracep->fullQData(oldp+342,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[7]),64);
        tracep->fullQData(oldp+344,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[8]),64);
        tracep->fullQData(oldp+346,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[9]),64);
        tracep->fullQData(oldp+348,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[10]),64);
        tracep->fullQData(oldp+350,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[11]),64);
        tracep->fullQData(oldp+352,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[12]),64);
        tracep->fullQData(oldp+354,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[13]),64);
        tracep->fullQData(oldp+356,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[14]),64);
        tracep->fullQData(oldp+358,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[15]),64);
        tracep->fullQData(oldp+360,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[16]),64);
        tracep->fullQData(oldp+362,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[17]),64);
        tracep->fullQData(oldp+364,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[18]),64);
        tracep->fullQData(oldp+366,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[19]),64);
        tracep->fullQData(oldp+368,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[20]),64);
        tracep->fullQData(oldp+370,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[21]),64);
        tracep->fullQData(oldp+372,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[22]),64);
        tracep->fullQData(oldp+374,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[23]),64);
        tracep->fullQData(oldp+376,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[24]),64);
        tracep->fullQData(oldp+378,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[25]),64);
        tracep->fullQData(oldp+380,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[26]),64);
        tracep->fullQData(oldp+382,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[27]),64);
        tracep->fullQData(oldp+384,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[28]),64);
        tracep->fullQData(oldp+386,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[29]),64);
        tracep->fullQData(oldp+388,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[30]),64);
        tracep->fullQData(oldp+390,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[31]),64);
        tracep->fullBit(oldp+392,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+393,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+394,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3),3024);
        tracep->fullQData(oldp+489,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+491,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+492,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4),672);
        tracep->fullWData(oldp+513,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+516,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+519,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+522,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+525,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+528,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+531,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullWData(oldp+534,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[7]),84);
        tracep->fullIData(oldp+537,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+538,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+539,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+540,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+541,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+542,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+543,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+544,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[7]),20);
        tracep->fullQData(oldp+545,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+547,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+549,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+551,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+553,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+555,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+557,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+559,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+561,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+563,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+564,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3),3276);
        tracep->fullQData(oldp+667,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+669,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+670,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3),3276);
        tracep->fullQData(oldp+773,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+775,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+776,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+777,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+778,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result),64);
        tracep->fullQData(oldp+780,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                     & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+782,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                     | vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+784,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                     ^ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+786,((VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                      ? 1ULL : 0ULL)),64);
        tracep->fullQData(oldp+788,(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                      < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                      ? 1ULL : 0ULL)),64);
        tracep->fullQData(oldp+790,(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+792,(VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+794,(VL_SHIFTRS_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+796,(((1U == (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode))
                                      ? (1ULL + (~ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b))
                                      : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullWData(oldp+798,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3),720);
        tracep->fullWData(oldp+821,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[0]),72);
        tracep->fullWData(oldp+824,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[1]),72);
        tracep->fullWData(oldp+827,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[2]),72);
        tracep->fullWData(oldp+830,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[3]),72);
        tracep->fullWData(oldp+833,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[4]),72);
        tracep->fullWData(oldp+836,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[5]),72);
        tracep->fullWData(oldp+839,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[6]),72);
        tracep->fullWData(oldp+842,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[7]),72);
        tracep->fullWData(oldp+845,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[8]),72);
        tracep->fullWData(oldp+848,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[9]),72);
        tracep->fullCData(oldp+851,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[0]),8);
        tracep->fullCData(oldp+852,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[1]),8);
        tracep->fullCData(oldp+853,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[2]),8);
        tracep->fullCData(oldp+854,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[3]),8);
        tracep->fullCData(oldp+855,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[4]),8);
        tracep->fullCData(oldp+856,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[5]),8);
        tracep->fullCData(oldp+857,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[6]),8);
        tracep->fullCData(oldp+858,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[7]),8);
        tracep->fullCData(oldp+859,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[8]),8);
        tracep->fullCData(oldp+860,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[9]),8);
        tracep->fullQData(oldp+861,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+863,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+865,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+867,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+869,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+871,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+873,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+875,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+877,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+879,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+881,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+883,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+884,((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))),3);
        tracep->fullWData(oldp+885,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3),536);
        tracep->fullWData(oldp+902,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+905,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+908,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+911,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+914,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+917,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[5]),67);
        tracep->fullWData(oldp+920,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[6]),67);
        tracep->fullWData(oldp+923,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[7]),67);
        tracep->fullCData(oldp+926,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+927,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+928,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+929,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+930,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+931,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+932,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+933,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[7]),3);
        tracep->fullQData(oldp+934,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+936,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+938,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+940,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+942,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+944,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+946,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+948,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+950,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+952,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+953,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+954,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+955,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3),469);
        tracep->fullWData(oldp+970,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+973,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+976,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+979,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+982,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+985,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[5]),67);
        tracep->fullWData(oldp+988,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[6]),67);
        tracep->fullCData(oldp+991,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+992,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+993,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+994,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+995,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+996,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+997,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullQData(oldp+998,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1000,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1002,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1004,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1006,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1008,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1010,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1012,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1014,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1015,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1016,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1017,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3),420);
        tracep->fullWData(oldp+1031,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1034,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1037,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+1040,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+1043,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullIData(oldp+1046,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1047,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1048,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+1049,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+1050,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[4]),20);
        tracep->fullQData(oldp+1051,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1053,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1055,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1057,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1059,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1061,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1063,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1064,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3),336);
        tracep->fullWData(oldp+1075,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1078,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1081,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+1084,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullIData(oldp+1087,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1088,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1089,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+1090,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[3]),20);
        tracep->fullQData(oldp+1091,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1093,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1095,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1097,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1099,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1101,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1102,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3),336);
        tracep->fullWData(oldp+1113,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1116,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1119,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+1122,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullIData(oldp+1125,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1126,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1127,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+1128,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[3]),20);
        tracep->fullQData(oldp+1129,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1131,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1133,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1135,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1137,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1139,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1140,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3),112);
        tracep->fullIData(oldp+1144,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[0]),28);
        tracep->fullIData(oldp+1145,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[1]),28);
        tracep->fullIData(oldp+1146,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[2]),28);
        tracep->fullIData(oldp+1147,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[3]),28);
        tracep->fullIData(oldp+1148,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1149,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1150,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+1151,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[3]),20);
        tracep->fullCData(oldp+1152,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+1153,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+1154,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+1155,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+1156,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1157,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1158,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3),420);
        tracep->fullWData(oldp+1172,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1175,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1178,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+1181,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+1184,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullIData(oldp+1187,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1188,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1189,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+1190,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+1191,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[4]),20);
        tracep->fullQData(oldp+1192,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1194,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1196,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1198,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1200,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1202,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1204,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1205,((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr))),3);
        tracep->fullWData(oldp+1206,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_onebyte____pinNumber3),88);
        tracep->fullSData(oldp+1209,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+1210,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+1211,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+1212,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+1213,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+1214,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+1215,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullSData(oldp+1216,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__pair_list[7]),11);
        tracep->fullCData(oldp+1217,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1218,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1219,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1220,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+1221,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+1222,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+1223,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+1224,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__key_list[7]),3);
        tracep->fullCData(oldp+1225,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+1226,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+1227,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+1228,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+1229,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+1230,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+1231,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+1232,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+1233,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1234,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_onebyte__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1235,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_twobyte____pinNumber3),133);
        tracep->fullIData(oldp+1240,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[0]),19);
        tracep->fullIData(oldp+1241,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[1]),19);
        tracep->fullIData(oldp+1242,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[2]),19);
        tracep->fullIData(oldp+1243,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[3]),19);
        tracep->fullIData(oldp+1244,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[4]),19);
        tracep->fullIData(oldp+1245,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[5]),19);
        tracep->fullIData(oldp+1246,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__pair_list[6]),19);
        tracep->fullCData(oldp+1247,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1248,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1249,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1250,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+1251,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+1252,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+1253,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullSData(oldp+1254,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[0]),16);
        tracep->fullSData(oldp+1255,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[1]),16);
        tracep->fullSData(oldp+1256,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[2]),16);
        tracep->fullSData(oldp+1257,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[3]),16);
        tracep->fullSData(oldp+1258,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[4]),16);
        tracep->fullSData(oldp+1259,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[5]),16);
        tracep->fullSData(oldp+1260,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__data_list[6]),16);
        tracep->fullSData(oldp+1261,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__lut_out),16);
        tracep->fullBit(oldp+1262,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_twobyte__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+1263,(vlSelf->clk));
        tracep->fullBit(oldp+1264,(vlSelf->rst));
        tracep->fullQData(oldp+1265,(vlSelf->pc),64);
        tracep->fullQData(oldp+1267,((4ULL + vlSelf->pc)),64);
        tracep->fullIData(oldp+1269,(0x40U),32);
        tracep->fullQData(oldp+1270,(0x80000000ULL),64);
        tracep->fullBit(oldp+1272,(1U));
        tracep->fullIData(oldp+1273,(0x15U),32);
        tracep->fullIData(oldp+1274,(0xaU),32);
        tracep->fullIData(oldp+1275,(7U),32);
        tracep->fullWData(oldp+1276,(Vysyx_22050612_npc__ConstPool__CONST_655c0287_0),357);
        tracep->fullIData(oldp+1288,(0U),32);
        tracep->fullCData(oldp+1289,(0U),7);
        tracep->fullIData(oldp+1290,(0x11U),32);
        tracep->fullIData(oldp+1291,(0x15U),32);
        tracep->fullIData(oldp+1292,(3U),32);
        tracep->fullIData(oldp+1293,(2U),32);
        tracep->fullIData(oldp+1294,(0x374bdbfU),27);
        tracep->fullCData(oldp+1295,(0U),2);
        tracep->fullIData(oldp+1296,(9U),32);
        tracep->fullIData(oldp+1297,(3U),32);
        tracep->fullIData(oldp+1298,(0x13U),32);
        tracep->fullIData(oldp+1299,(8U),32);
        tracep->fullWData(oldp+1300,(Vysyx_22050612_npc__ConstPool__CONST_867024fc_0),475);
        tracep->fullCData(oldp+1315,(0U),8);
        tracep->fullIData(oldp+1316,(0x19U),32);
        tracep->fullIData(oldp+1317,(0x13U),32);
        tracep->fullIData(oldp+1318,(0x10U),32);
        tracep->fullQData(oldp+1319,(0x24d029390a4fULL),54);
        tracep->fullIData(oldp+1321,(0x12U),32);
        tracep->fullIData(oldp+1322,(5U),32);
        tracep->fullIData(oldp+1323,(0x24U),32);
        tracep->fullIData(oldp+1324,(0x14U),32);
        tracep->fullIData(oldp+1325,(1U),32);
        tracep->fullWData(oldp+1326,(Vysyx_22050612_npc__ConstPool__CONST_dac84abe_0),756);
        tracep->fullBit(oldp+1350,(0U));
        tracep->fullIData(oldp+1351,(0x24U),32);
        tracep->fullQData(oldp+1352,(0ULL),64);
        tracep->fullIData(oldp+1354,(0x54U),32);
        tracep->fullIData(oldp+1355,(8U),32);
        tracep->fullIData(oldp+1356,(0x27U),32);
        tracep->fullIData(oldp+1357,(0x27U),32);
        tracep->fullWData(oldp+1358,(Vysyx_22050612_npc__ConstPool__CONST_223430c5_0),1092);
        tracep->fullIData(oldp+1393,(0x1cU),32);
        tracep->fullIData(oldp+1394,(0x48U),32);
        tracep->fullIData(oldp+1395,(0xaU),32);
        tracep->fullIData(oldp+1396,(0x43U),32);
        __Vtemp3507[0U] = 0x48320780U;
        __Vtemp3507[1U] = 0x2308821U;
        __Vtemp3507[2U] = 0x2409U;
        tracep->fullWData(oldp+1397,(__Vtemp3507),88);
        tracep->fullIData(oldp+1400,(0xbU),32);
        tracep->fullIData(oldp+1401,(7U),32);
        __Vtemp3508[0U] = 0x4698660U;
        __Vtemp3508[1U] = 0x8320c611U;
        __Vtemp3508[2U] = 0xcU;
        tracep->fullWData(oldp+1402,(__Vtemp3508),77);
        tracep->fullIData(oldp+1405,(5U),32);
        tracep->fullIData(oldp+1406,(4U),32);
        tracep->fullIData(oldp+1407,(4U),32);
        tracep->fullSData(oldp+1408,(0U),16);
    }
}
