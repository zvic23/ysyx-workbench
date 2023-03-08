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
        tracep->declBit(c+1355,"clk", false,-1);
        tracep->declBit(c+1356,"rst", false,-1);
        tracep->declQuad(c+1357,"pc", false,-1, 63,0);
        tracep->declBit(c+1355,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+1356,"ysyx_22050612_npc rst", false,-1);
        tracep->declQuad(c+1357,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declBus(c+235,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+236,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+238,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declQuad(c+240,"ysyx_22050612_npc imm_U", false,-1, 63,0);
        tracep->declQuad(c+242,"ysyx_22050612_npc imm_J", false,-1, 63,0);
        tracep->declQuad(c+244,"ysyx_22050612_npc imm_B", false,-1, 63,0);
        tracep->declQuad(c+246,"ysyx_22050612_npc imm_S", false,-1, 63,0);
        tracep->declBus(c+248,"ysyx_22050612_npc shamt", false,-1, 5,0);
        tracep->declBus(c+249,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+250,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+251,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBus(c+252,"ysyx_22050612_npc opcode", false,-1, 19,0);
        tracep->declBit(c+1355,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+1356,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+236,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+1357,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+235,"ysyx_22050612_npc ifu inst", false,-1, 31,0);
        tracep->declQuad(c+253,"ysyx_22050612_npc ifu inst_mix", false,-1, 63,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1362,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1355,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+1356,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+236,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+1357,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+1364,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+1355,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+235,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+238,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declQuad(c+240,"ysyx_22050612_npc idu imm_U", false,-1, 63,0);
        tracep->declQuad(c+242,"ysyx_22050612_npc idu imm_J", false,-1, 63,0);
        tracep->declQuad(c+244,"ysyx_22050612_npc idu imm_B", false,-1, 63,0);
        tracep->declQuad(c+246,"ysyx_22050612_npc idu imm_S", false,-1, 63,0);
        tracep->declBus(c+248,"ysyx_22050612_npc idu shamt", false,-1, 5,0);
        tracep->declBus(c+249,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+250,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+251,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBus(c+252,"ysyx_22050612_npc idu opcode", false,-1, 19,0);
        tracep->declBus(c+1365,"ysyx_22050612_npc idu decode0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1366,"ysyx_22050612_npc idu decode0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1367,"ysyx_22050612_npc idu decode0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+255,"ysyx_22050612_npc idu decode0 out", false,-1, 6,0);
        tracep->declBus(c+256,"ysyx_22050612_npc idu decode0 key", false,-1, 9,0);
        tracep->declArray(c+1368,"ysyx_22050612_npc idu decode0 lut", false,-1, 220,0);
        tracep->declBus(c+1365,"ysyx_22050612_npc idu decode0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1366,"ysyx_22050612_npc idu decode0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1367,"ysyx_22050612_npc idu decode0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1375,"ysyx_22050612_npc idu decode0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+255,"ysyx_22050612_npc idu decode0 i0 out", false,-1, 6,0);
        tracep->declBus(c+256,"ysyx_22050612_npc idu decode0 i0 key", false,-1, 9,0);
        tracep->declBus(c+1376,"ysyx_22050612_npc idu decode0 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+1368,"ysyx_22050612_npc idu decode0 i0 lut", false,-1, 220,0);
        tracep->declBus(c+1377,"ysyx_22050612_npc idu decode0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22050612_npc idu decode0 i0 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+14+i*1,"ysyx_22050612_npc idu decode0 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+27+i*1,"ysyx_22050612_npc idu decode0 i0 data_list", true,(i+0), 6,0);}}
        tracep->declBus(c+257,"ysyx_22050612_npc idu decode0 i0 lut_out", false,-1, 6,0);
        tracep->declBit(c+258,"ysyx_22050612_npc idu decode0 i0 hit", false,-1);
        tracep->declBus(c+1378,"ysyx_22050612_npc idu decode0 i0 i", false,-1, 31,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc idu decode1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1367,"ysyx_22050612_npc idu decode1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1380,"ysyx_22050612_npc idu decode1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+259,"ysyx_22050612_npc idu decode1 out", false,-1, 1,0);
        tracep->declBus(c+260,"ysyx_22050612_npc idu decode1 key", false,-1, 6,0);
        tracep->declBus(c+1381,"ysyx_22050612_npc idu decode1 lut", false,-1, 26,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc idu decode1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1367,"ysyx_22050612_npc idu decode1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1380,"ysyx_22050612_npc idu decode1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1375,"ysyx_22050612_npc idu decode1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+259,"ysyx_22050612_npc idu decode1 i0 out", false,-1, 1,0);
        tracep->declBus(c+260,"ysyx_22050612_npc idu decode1 i0 key", false,-1, 6,0);
        tracep->declBus(c+1382,"ysyx_22050612_npc idu decode1 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1381,"ysyx_22050612_npc idu decode1 i0 lut", false,-1, 26,0);
        tracep->declBus(c+1383,"ysyx_22050612_npc idu decode1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+40+i*1,"ysyx_22050612_npc idu decode1 i0 pair_list", true,(i+0), 8,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+43+i*1,"ysyx_22050612_npc idu decode1 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+46+i*1,"ysyx_22050612_npc idu decode1 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+261,"ysyx_22050612_npc idu decode1 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+262,"ysyx_22050612_npc idu decode1 i0 hit", false,-1);
        tracep->declBus(c+1384,"ysyx_22050612_npc idu decode1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1367,"ysyx_22050612_npc idu decode2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1377,"ysyx_22050612_npc idu decode2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc idu decode2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+263,"ysyx_22050612_npc idu decode2 out", false,-1, 7,0);
        tracep->declBus(c+264,"ysyx_22050612_npc idu decode2 key", false,-1, 16,0);
        tracep->declArray(c+1386,"ysyx_22050612_npc idu decode2 lut", false,-1, 174,0);
        tracep->declBus(c+1367,"ysyx_22050612_npc idu decode2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1377,"ysyx_22050612_npc idu decode2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc idu decode2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1375,"ysyx_22050612_npc idu decode2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+263,"ysyx_22050612_npc idu decode2 i0 out", false,-1, 7,0);
        tracep->declBus(c+264,"ysyx_22050612_npc idu decode2 i0 key", false,-1, 16,0);
        tracep->declBus(c+1392,"ysyx_22050612_npc idu decode2 i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1386,"ysyx_22050612_npc idu decode2 i0 lut", false,-1, 174,0);
        tracep->declBus(c+1393,"ysyx_22050612_npc idu decode2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+49+i*1,"ysyx_22050612_npc idu decode2 i0 pair_list", true,(i+0), 24,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+56+i*1,"ysyx_22050612_npc idu decode2 i0 key_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+63+i*1,"ysyx_22050612_npc idu decode2 i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+265,"ysyx_22050612_npc idu decode2 i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+266,"ysyx_22050612_npc idu decode2 i0 hit", false,-1);
        tracep->declBus(c+1394,"ysyx_22050612_npc idu decode2 i0 i", false,-1, 31,0);
        tracep->declBus(c+1395,"ysyx_22050612_npc idu decode3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1396,"ysyx_22050612_npc idu decode3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1380,"ysyx_22050612_npc idu decode3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+267,"ysyx_22050612_npc idu decode3 out", false,-1, 1,0);
        tracep->declBus(c+268,"ysyx_22050612_npc idu decode3 key", false,-1, 15,0);
        tracep->declBus(c+1397,"ysyx_22050612_npc idu decode3 lut", false,-1, 17,0);
        tracep->declBus(c+1395,"ysyx_22050612_npc idu decode3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1396,"ysyx_22050612_npc idu decode3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1380,"ysyx_22050612_npc idu decode3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1375,"ysyx_22050612_npc idu decode3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+267,"ysyx_22050612_npc idu decode3 i0 out", false,-1, 1,0);
        tracep->declBus(c+268,"ysyx_22050612_npc idu decode3 i0 key", false,-1, 15,0);
        tracep->declBus(c+1382,"ysyx_22050612_npc idu decode3 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1397,"ysyx_22050612_npc idu decode3 i0 lut", false,-1, 17,0);
        tracep->declBus(c+1398,"ysyx_22050612_npc idu decode3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+70+i*1,"ysyx_22050612_npc idu decode3 i0 pair_list", true,(i+0), 17,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+71+i*1,"ysyx_22050612_npc idu decode3 i0 key_list", true,(i+0), 15,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+72+i*1,"ysyx_22050612_npc idu decode3 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+269,"ysyx_22050612_npc idu decode3 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+270,"ysyx_22050612_npc idu decode3 i0 hit", false,-1);
        tracep->declBus(c+1399,"ysyx_22050612_npc idu decode3 i0 i", false,-1, 31,0);
        tracep->declBit(c+1355,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+238,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declQuad(c+240,"ysyx_22050612_npc exu imm_U", false,-1, 63,0);
        tracep->declQuad(c+242,"ysyx_22050612_npc exu imm_J", false,-1, 63,0);
        tracep->declQuad(c+244,"ysyx_22050612_npc exu imm_B", false,-1, 63,0);
        tracep->declQuad(c+246,"ysyx_22050612_npc exu imm_S", false,-1, 63,0);
        tracep->declBus(c+248,"ysyx_22050612_npc exu shamt", false,-1, 5,0);
        tracep->declBus(c+249,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+250,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+251,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu opcode", false,-1, 19,0);
        tracep->declQuad(c+1357,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+236,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+271,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+273,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+275,"ysyx_22050612_npc exu wdata_reg", false,-1, 63,0);
        tracep->declBit(c+277,"ysyx_22050612_npc exu wen", false,-1);
        tracep->declBit(c+278,"ysyx_22050612_npc exu wen_fix", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+279+i*2,"ysyx_22050612_npc exu gpr", true,(i+0), 63,0);}}
        tracep->declQuad(c+1359,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declBus(c+343,"ysyx_22050612_npc exu mode", false,-1, 7,0);
        tracep->declQuad(c+344,"ysyx_22050612_npc exu operator_a", false,-1, 63,0);
        tracep->declQuad(c+346,"ysyx_22050612_npc exu operator_b", false,-1, 63,0);
        tracep->declQuad(c+348,"ysyx_22050612_npc exu result_alu0", false,-1, 63,0);
        tracep->declBus(c+350,"ysyx_22050612_npc exu wmask_1byte", false,-1, 7,0);
        tracep->declQuad(c+351,"ysyx_22050612_npc exu wdata_1byte", false,-1, 63,0);
        tracep->declQuad(c+353,"ysyx_22050612_npc exu raddr", false,-1, 63,0);
        tracep->declQuad(c+355,"ysyx_22050612_npc exu rdata", false,-1, 63,0);
        tracep->declQuad(c+357,"ysyx_22050612_npc exu waddr", false,-1, 63,0);
        tracep->declQuad(c+359,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBus(c+361,"ysyx_22050612_npc exu wmask", false,-1, 7,0);
        tracep->declQuad(c+362,"ysyx_22050612_npc exu rdata_fix", false,-1, 63,0);
        tracep->declBus(c+364,"ysyx_22050612_npc exu rdata_1byte", false,-1, 7,0);
        tracep->declBus(c+1400,"ysyx_22050612_npc exu cpu_gpr_group ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu cpu_gpr_group DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1355,"ysyx_22050612_npc exu cpu_gpr_group clk", false,-1);
        tracep->declQuad(c+275,"ysyx_22050612_npc exu cpu_gpr_group wdata", false,-1, 63,0);
        tracep->declBus(c+249,"ysyx_22050612_npc exu cpu_gpr_group waddr", false,-1, 4,0);
        tracep->declBit(c+278,"ysyx_22050612_npc exu cpu_gpr_group wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+365+i*2,"ysyx_22050612_npc exu cpu_gpr_group rf", true,(i+0), 63,0);}}
        tracep->declBus(c+1401,"ysyx_22050612_npc exu gpr_write_enable NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu gpr_write_enable KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1395,"ysyx_22050612_npc exu gpr_write_enable DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+277,"ysyx_22050612_npc exu gpr_write_enable out", false,-1, 0,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu gpr_write_enable key", false,-1, 19,0);
        tracep->declArray(c+1402,"ysyx_22050612_npc exu gpr_write_enable lut", false,-1, 419,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu gpr_write_enable i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu gpr_write_enable i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1395,"ysyx_22050612_npc exu gpr_write_enable i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1375,"ysyx_22050612_npc exu gpr_write_enable i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+277,"ysyx_22050612_npc exu gpr_write_enable i0 out", false,-1, 0,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu gpr_write_enable i0 key", false,-1, 19,0);
        tracep->declBus(c+1416,"ysyx_22050612_npc exu gpr_write_enable i0 default_out", false,-1, 0,0);
        tracep->declArray(c+1402,"ysyx_22050612_npc exu gpr_write_enable i0 lut", false,-1, 419,0);
        tracep->declBus(c+1417,"ysyx_22050612_npc exu gpr_write_enable i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<20; i++) {
                tracep->declBus(c+73+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 pair_list", true,(i+0), 20,0);}}
        {int i; for (i=0; i<20; i++) {
                tracep->declBus(c+93+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<20; i++) {
                tracep->declBus(c+113+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+429,"ysyx_22050612_npc exu gpr_write_enable i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+430,"ysyx_22050612_npc exu gpr_write_enable i0 hit", false,-1);
        tracep->declBus(c+1418,"ysyx_22050612_npc exu gpr_write_enable i0 i", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu gpr_write_data NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu gpr_write_data KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu gpr_write_data DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+275,"ysyx_22050612_npc exu gpr_write_data out", false,-1, 63,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu gpr_write_data key", false,-1, 19,0);
        tracep->declArray(c+431,"ysyx_22050612_npc exu gpr_write_data lut", false,-1, 1679,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu gpr_write_data i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu gpr_write_data i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu gpr_write_data i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1375,"ysyx_22050612_npc exu gpr_write_data i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+275,"ysyx_22050612_npc exu gpr_write_data i0 out", false,-1, 63,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu gpr_write_data i0 key", false,-1, 19,0);
        tracep->declQuad(c+1419,"ysyx_22050612_npc exu gpr_write_data i0 default_out", false,-1, 63,0);
        tracep->declArray(c+431,"ysyx_22050612_npc exu gpr_write_data i0 lut", false,-1, 1679,0);
        tracep->declBus(c+1421,"ysyx_22050612_npc exu gpr_write_data i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<20; i++) {
                tracep->declArray(c+484+i*3,"ysyx_22050612_npc exu gpr_write_data i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<20; i++) {
                tracep->declBus(c+544+i*1,"ysyx_22050612_npc exu gpr_write_data i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<20; i++) {
                tracep->declQuad(c+564+i*2,"ysyx_22050612_npc exu gpr_write_data i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+604,"ysyx_22050612_npc exu gpr_write_data i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+606,"ysyx_22050612_npc exu gpr_write_data i0 hit", false,-1);
        tracep->declBus(c+1418,"ysyx_22050612_npc exu gpr_write_data i0 i", false,-1, 31,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc exu cpu_pc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu cpu_pc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu cpu_pc DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+236,"ysyx_22050612_npc exu cpu_pc out", false,-1, 63,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu cpu_pc key", false,-1, 19,0);
        tracep->declQuad(c+1359,"ysyx_22050612_npc exu cpu_pc default_out", false,-1, 63,0);
        tracep->declArray(c+607,"ysyx_22050612_npc exu cpu_pc lut", false,-1, 251,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc exu cpu_pc i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu cpu_pc i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu cpu_pc i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1395,"ysyx_22050612_npc exu cpu_pc i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+236,"ysyx_22050612_npc exu cpu_pc i0 out", false,-1, 63,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu cpu_pc i0 key", false,-1, 19,0);
        tracep->declQuad(c+1359,"ysyx_22050612_npc exu cpu_pc i0 default_out", false,-1, 63,0);
        tracep->declArray(c+607,"ysyx_22050612_npc exu cpu_pc i0 lut", false,-1, 251,0);
        tracep->declBus(c+1421,"ysyx_22050612_npc exu cpu_pc i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+615+i*3,"ysyx_22050612_npc exu cpu_pc i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+624+i*1,"ysyx_22050612_npc exu cpu_pc i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+627+i*2,"ysyx_22050612_npc exu cpu_pc i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+633,"ysyx_22050612_npc exu cpu_pc i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+635,"ysyx_22050612_npc exu cpu_pc i0 hit", false,-1);
        tracep->declBus(c+1384,"ysyx_22050612_npc exu cpu_pc i0 i", false,-1, 31,0);
        tracep->declBus(c+1422,"ysyx_22050612_npc exu operator0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu operator0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu operator0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+344,"ysyx_22050612_npc exu operator0 out", false,-1, 63,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu operator0 key", false,-1, 19,0);
        tracep->declArray(c+636,"ysyx_22050612_npc exu operator0 lut", false,-1, 1931,0);
        tracep->declBus(c+1422,"ysyx_22050612_npc exu operator0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu operator0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu operator0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1375,"ysyx_22050612_npc exu operator0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+344,"ysyx_22050612_npc exu operator0 i0 out", false,-1, 63,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu operator0 i0 key", false,-1, 19,0);
        tracep->declQuad(c+1419,"ysyx_22050612_npc exu operator0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+636,"ysyx_22050612_npc exu operator0 i0 lut", false,-1, 1931,0);
        tracep->declBus(c+1421,"ysyx_22050612_npc exu operator0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<23; i++) {
                tracep->declArray(c+697+i*3,"ysyx_22050612_npc exu operator0 i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<23; i++) {
                tracep->declBus(c+766+i*1,"ysyx_22050612_npc exu operator0 i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<23; i++) {
                tracep->declQuad(c+789+i*2,"ysyx_22050612_npc exu operator0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+835,"ysyx_22050612_npc exu operator0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+837,"ysyx_22050612_npc exu operator0 i0 hit", false,-1);
        tracep->declBus(c+1423,"ysyx_22050612_npc exu operator0 i0 i", false,-1, 31,0);
        tracep->declBus(c+1422,"ysyx_22050612_npc exu operator1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu operator1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu operator1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+346,"ysyx_22050612_npc exu operator1 out", false,-1, 63,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu operator1 key", false,-1, 19,0);
        tracep->declArray(c+838,"ysyx_22050612_npc exu operator1 lut", false,-1, 1931,0);
        tracep->declBus(c+1422,"ysyx_22050612_npc exu operator1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu operator1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu operator1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1375,"ysyx_22050612_npc exu operator1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+346,"ysyx_22050612_npc exu operator1 i0 out", false,-1, 63,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu operator1 i0 key", false,-1, 19,0);
        tracep->declQuad(c+1419,"ysyx_22050612_npc exu operator1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+838,"ysyx_22050612_npc exu operator1 i0 lut", false,-1, 1931,0);
        tracep->declBus(c+1421,"ysyx_22050612_npc exu operator1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<23; i++) {
                tracep->declArray(c+899+i*3,"ysyx_22050612_npc exu operator1 i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<23; i++) {
                tracep->declBus(c+968+i*1,"ysyx_22050612_npc exu operator1 i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<23; i++) {
                tracep->declQuad(c+991+i*2,"ysyx_22050612_npc exu operator1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1037,"ysyx_22050612_npc exu operator1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1039,"ysyx_22050612_npc exu operator1 i0 hit", false,-1);
        tracep->declBus(c+1423,"ysyx_22050612_npc exu operator1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1422,"ysyx_22050612_npc exu alumode NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu alumode KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu alumode DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+343,"ysyx_22050612_npc exu alumode out", false,-1, 7,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu alumode key", false,-1, 19,0);
        tracep->declArray(c+1424,"ysyx_22050612_npc exu alumode lut", false,-1, 643,0);
        tracep->declBus(c+1422,"ysyx_22050612_npc exu alumode i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu alumode i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu alumode i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1375,"ysyx_22050612_npc exu alumode i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+343,"ysyx_22050612_npc exu alumode i0 out", false,-1, 7,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu alumode i0 key", false,-1, 19,0);
        tracep->declBus(c+1392,"ysyx_22050612_npc exu alumode i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1424,"ysyx_22050612_npc exu alumode i0 lut", false,-1, 643,0);
        tracep->declBus(c+1445,"ysyx_22050612_npc exu alumode i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<23; i++) {
                tracep->declBus(c+133+i*1,"ysyx_22050612_npc exu alumode i0 pair_list", true,(i+0), 27,0);}}
        {int i; for (i=0; i<23; i++) {
                tracep->declBus(c+156+i*1,"ysyx_22050612_npc exu alumode i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<23; i++) {
                tracep->declBus(c+179+i*1,"ysyx_22050612_npc exu alumode i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1040,"ysyx_22050612_npc exu alumode i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1041,"ysyx_22050612_npc exu alumode i0 hit", false,-1);
        tracep->declBus(c+1423,"ysyx_22050612_npc exu alumode i0 i", false,-1, 31,0);
        tracep->declBus(c+343,"ysyx_22050612_npc exu alu0 mode", false,-1, 7,0);
        tracep->declQuad(c+344,"ysyx_22050612_npc exu alu0 A", false,-1, 63,0);
        tracep->declQuad(c+346,"ysyx_22050612_npc exu alu0 B", false,-1, 63,0);
        tracep->declQuad(c+348,"ysyx_22050612_npc exu alu0 Z", false,-1, 63,0);
        tracep->declQuad(c+1042,"ysyx_22050612_npc exu alu0 add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+1044,"ysyx_22050612_npc exu alu0 and_result", false,-1, 63,0);
        tracep->declQuad(c+1046,"ysyx_22050612_npc exu alu0 or_result", false,-1, 63,0);
        tracep->declQuad(c+1048,"ysyx_22050612_npc exu alu0 xor_result", false,-1, 63,0);
        tracep->declQuad(c+1050,"ysyx_22050612_npc exu alu0 slt_result", false,-1, 63,0);
        tracep->declQuad(c+1050,"ysyx_22050612_npc exu alu0 sltu_result", false,-1, 63,0);
        tracep->declQuad(c+1052,"ysyx_22050612_npc exu alu0 sll_result", false,-1, 63,0);
        tracep->declQuad(c+1054,"ysyx_22050612_npc exu alu0 sra_result", false,-1, 63,0);
        tracep->declQuad(c+1056,"ysyx_22050612_npc exu alu0 C", false,-1, 63,0);
        tracep->declBus(c+1383,"ysyx_22050612_npc exu alu0 alu_result_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu alu0 alu_result_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu alu0 alu_result_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+348,"ysyx_22050612_npc exu alu0 alu_result_select out", false,-1, 63,0);
        tracep->declBus(c+343,"ysyx_22050612_npc exu alu0 alu_result_select key", false,-1, 7,0);
        tracep->declArray(c+1058,"ysyx_22050612_npc exu alu0 alu_result_select lut", false,-1, 647,0);
        tracep->declBus(c+1383,"ysyx_22050612_npc exu alu0 alu_result_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu alu0 alu_result_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu alu0 alu_result_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1375,"ysyx_22050612_npc exu alu0 alu_result_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+348,"ysyx_22050612_npc exu alu0 alu_result_select i0 out", false,-1, 63,0);
        tracep->declBus(c+343,"ysyx_22050612_npc exu alu0 alu_result_select i0 key", false,-1, 7,0);
        tracep->declQuad(c+1419,"ysyx_22050612_npc exu alu0 alu_result_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1058,"ysyx_22050612_npc exu alu0 alu_result_select i0 lut", false,-1, 647,0);
        tracep->declBus(c+1446,"ysyx_22050612_npc exu alu0 alu_result_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<9; i++) {
                tracep->declArray(c+1079+i*3,"ysyx_22050612_npc exu alu0 alu_result_select i0 pair_list", true,(i+0), 71,0);}}
        {int i; for (i=0; i<9; i++) {
                tracep->declBus(c+1106+i*1,"ysyx_22050612_npc exu alu0 alu_result_select i0 key_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<9; i++) {
                tracep->declQuad(c+1115+i*2,"ysyx_22050612_npc exu alu0 alu_result_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1133,"ysyx_22050612_npc exu alu0 alu_result_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1135,"ysyx_22050612_npc exu alu0 alu_result_select i0 hit", false,-1);
        tracep->declBus(c+1447,"ysyx_22050612_npc exu alu0 alu_result_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu wdata_onebyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc exu wdata_onebyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu wdata_onebyte DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+351,"ysyx_22050612_npc exu wdata_onebyte out", false,-1, 63,0);
        tracep->declBus(c+1136,"ysyx_22050612_npc exu wdata_onebyte key", false,-1, 2,0);
        tracep->declArray(c+1137,"ysyx_22050612_npc exu wdata_onebyte lut", false,-1, 535,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu wdata_onebyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc exu wdata_onebyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu wdata_onebyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1375,"ysyx_22050612_npc exu wdata_onebyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+351,"ysyx_22050612_npc exu wdata_onebyte i0 out", false,-1, 63,0);
        tracep->declBus(c+1136,"ysyx_22050612_npc exu wdata_onebyte i0 key", false,-1, 2,0);
        tracep->declQuad(c+1419,"ysyx_22050612_npc exu wdata_onebyte i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1137,"ysyx_22050612_npc exu wdata_onebyte i0 lut", false,-1, 535,0);
        tracep->declBus(c+1448,"ysyx_22050612_npc exu wdata_onebyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+1154+i*3,"ysyx_22050612_npc exu wdata_onebyte i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1178+i*1,"ysyx_22050612_npc exu wdata_onebyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+1186+i*2,"ysyx_22050612_npc exu wdata_onebyte i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1202,"ysyx_22050612_npc exu wdata_onebyte i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1204,"ysyx_22050612_npc exu wdata_onebyte i0 hit", false,-1);
        tracep->declBus(c+1449,"ysyx_22050612_npc exu wdata_onebyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu wmask_onebyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc exu wmask_onebyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu wmask_onebyte DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+350,"ysyx_22050612_npc exu wmask_onebyte out", false,-1, 7,0);
        tracep->declBus(c+1136,"ysyx_22050612_npc exu wmask_onebyte key", false,-1, 2,0);
        tracep->declArray(c+1450,"ysyx_22050612_npc exu wmask_onebyte lut", false,-1, 87,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu wmask_onebyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc exu wmask_onebyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu wmask_onebyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1375,"ysyx_22050612_npc exu wmask_onebyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+350,"ysyx_22050612_npc exu wmask_onebyte i0 out", false,-1, 7,0);
        tracep->declBus(c+1136,"ysyx_22050612_npc exu wmask_onebyte i0 key", false,-1, 2,0);
        tracep->declBus(c+1392,"ysyx_22050612_npc exu wmask_onebyte i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1450,"ysyx_22050612_npc exu wmask_onebyte i0 lut", false,-1, 87,0);
        tracep->declBus(c+1453,"ysyx_22050612_npc exu wmask_onebyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+202+i*1,"ysyx_22050612_npc exu wmask_onebyte i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+210+i*1,"ysyx_22050612_npc exu wmask_onebyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+218+i*1,"ysyx_22050612_npc exu wmask_onebyte i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1205,"ysyx_22050612_npc exu wmask_onebyte i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1206,"ysyx_22050612_npc exu wmask_onebyte i0 hit", false,-1);
        tracep->declBus(c+1449,"ysyx_22050612_npc exu wmask_onebyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc exu raddr_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu raddr_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu raddr_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+353,"ysyx_22050612_npc exu raddr_select out", false,-1, 63,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu raddr_select key", false,-1, 19,0);
        tracep->declArray(c+1207,"ysyx_22050612_npc exu raddr_select lut", false,-1, 251,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc exu raddr_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu raddr_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu raddr_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1375,"ysyx_22050612_npc exu raddr_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+353,"ysyx_22050612_npc exu raddr_select i0 out", false,-1, 63,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu raddr_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+1419,"ysyx_22050612_npc exu raddr_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1207,"ysyx_22050612_npc exu raddr_select i0 lut", false,-1, 251,0);
        tracep->declBus(c+1421,"ysyx_22050612_npc exu raddr_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+1215+i*3,"ysyx_22050612_npc exu raddr_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1224+i*1,"ysyx_22050612_npc exu raddr_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+1227+i*2,"ysyx_22050612_npc exu raddr_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1233,"ysyx_22050612_npc exu raddr_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1235,"ysyx_22050612_npc exu raddr_select i0 hit", false,-1);
        tracep->declBus(c+1384,"ysyx_22050612_npc exu raddr_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc exu waddr_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu waddr_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu waddr_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+357,"ysyx_22050612_npc exu waddr_select out", false,-1, 63,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu waddr_select key", false,-1, 19,0);
        tracep->declArray(c+1236,"ysyx_22050612_npc exu waddr_select lut", false,-1, 251,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc exu waddr_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu waddr_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu waddr_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1375,"ysyx_22050612_npc exu waddr_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+357,"ysyx_22050612_npc exu waddr_select i0 out", false,-1, 63,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu waddr_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+1419,"ysyx_22050612_npc exu waddr_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1236,"ysyx_22050612_npc exu waddr_select i0 lut", false,-1, 251,0);
        tracep->declBus(c+1421,"ysyx_22050612_npc exu waddr_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+1244+i*3,"ysyx_22050612_npc exu waddr_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1253+i*1,"ysyx_22050612_npc exu waddr_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+1256+i*2,"ysyx_22050612_npc exu waddr_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1262,"ysyx_22050612_npc exu waddr_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1264,"ysyx_22050612_npc exu waddr_select i0 hit", false,-1);
        tracep->declBus(c+1384,"ysyx_22050612_npc exu waddr_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc exu wdata_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu wdata_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu wdata_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+359,"ysyx_22050612_npc exu wdata_select out", false,-1, 63,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu wdata_select key", false,-1, 19,0);
        tracep->declArray(c+1265,"ysyx_22050612_npc exu wdata_select lut", false,-1, 251,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc exu wdata_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu wdata_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu wdata_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1375,"ysyx_22050612_npc exu wdata_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+359,"ysyx_22050612_npc exu wdata_select i0 out", false,-1, 63,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu wdata_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+1419,"ysyx_22050612_npc exu wdata_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1265,"ysyx_22050612_npc exu wdata_select i0 lut", false,-1, 251,0);
        tracep->declBus(c+1421,"ysyx_22050612_npc exu wdata_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+1273+i*3,"ysyx_22050612_npc exu wdata_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1282+i*1,"ysyx_22050612_npc exu wdata_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+1285+i*2,"ysyx_22050612_npc exu wdata_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1291,"ysyx_22050612_npc exu wdata_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1293,"ysyx_22050612_npc exu wdata_select i0 hit", false,-1);
        tracep->declBus(c+1384,"ysyx_22050612_npc exu wdata_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc exu wmask_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu wmask_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu wmask_select DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+361,"ysyx_22050612_npc exu wmask_select out", false,-1, 7,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu wmask_select key", false,-1, 19,0);
        tracep->declArray(c+1454,"ysyx_22050612_npc exu wmask_select lut", false,-1, 83,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc exu wmask_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu wmask_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu wmask_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1375,"ysyx_22050612_npc exu wmask_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+361,"ysyx_22050612_npc exu wmask_select i0 out", false,-1, 7,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu wmask_select i0 key", false,-1, 19,0);
        tracep->declBus(c+1392,"ysyx_22050612_npc exu wmask_select i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1454,"ysyx_22050612_npc exu wmask_select i0 lut", false,-1, 83,0);
        tracep->declBus(c+1445,"ysyx_22050612_npc exu wmask_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+226+i*1,"ysyx_22050612_npc exu wmask_select i0 pair_list", true,(i+0), 27,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+229+i*1,"ysyx_22050612_npc exu wmask_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+232+i*1,"ysyx_22050612_npc exu wmask_select i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1294,"ysyx_22050612_npc exu wmask_select i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1295,"ysyx_22050612_npc exu wmask_select i0 hit", false,-1);
        tracep->declBus(c+1384,"ysyx_22050612_npc exu wmask_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc exu rdata_fixing NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu rdata_fixing KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu rdata_fixing DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+362,"ysyx_22050612_npc exu rdata_fixing out", false,-1, 63,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu rdata_fixing key", false,-1, 19,0);
        tracep->declArray(c+1296,"ysyx_22050612_npc exu rdata_fixing lut", false,-1, 251,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc exu rdata_fixing i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1401,"ysyx_22050612_npc exu rdata_fixing i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1361,"ysyx_22050612_npc exu rdata_fixing i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1375,"ysyx_22050612_npc exu rdata_fixing i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+362,"ysyx_22050612_npc exu rdata_fixing i0 out", false,-1, 63,0);
        tracep->declBus(c+252,"ysyx_22050612_npc exu rdata_fixing i0 key", false,-1, 19,0);
        tracep->declQuad(c+1419,"ysyx_22050612_npc exu rdata_fixing i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1296,"ysyx_22050612_npc exu rdata_fixing i0 lut", false,-1, 251,0);
        tracep->declBus(c+1421,"ysyx_22050612_npc exu rdata_fixing i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+1304+i*3,"ysyx_22050612_npc exu rdata_fixing i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1313+i*1,"ysyx_22050612_npc exu rdata_fixing i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+1316+i*2,"ysyx_22050612_npc exu rdata_fixing i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1322,"ysyx_22050612_npc exu rdata_fixing i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1324,"ysyx_22050612_npc exu rdata_fixing i0 hit", false,-1);
        tracep->declBus(c+1384,"ysyx_22050612_npc exu rdata_fixing i0 i", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu rdata_1byte_fix NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc exu rdata_1byte_fix KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu rdata_1byte_fix DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+364,"ysyx_22050612_npc exu rdata_1byte_fix out", false,-1, 7,0);
        tracep->declBus(c+1325,"ysyx_22050612_npc exu rdata_1byte_fix key", false,-1, 2,0);
        tracep->declArray(c+1326,"ysyx_22050612_npc exu rdata_1byte_fix lut", false,-1, 87,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu rdata_1byte_fix i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1379,"ysyx_22050612_npc exu rdata_1byte_fix i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1385,"ysyx_22050612_npc exu rdata_1byte_fix i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1375,"ysyx_22050612_npc exu rdata_1byte_fix i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+364,"ysyx_22050612_npc exu rdata_1byte_fix i0 out", false,-1, 7,0);
        tracep->declBus(c+1325,"ysyx_22050612_npc exu rdata_1byte_fix i0 key", false,-1, 2,0);
        tracep->declBus(c+1392,"ysyx_22050612_npc exu rdata_1byte_fix i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1326,"ysyx_22050612_npc exu rdata_1byte_fix i0 lut", false,-1, 87,0);
        tracep->declBus(c+1453,"ysyx_22050612_npc exu rdata_1byte_fix i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1329+i*1,"ysyx_22050612_npc exu rdata_1byte_fix i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1337+i*1,"ysyx_22050612_npc exu rdata_1byte_fix i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1345+i*1,"ysyx_22050612_npc exu rdata_1byte_fix i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1353,"ysyx_22050612_npc exu rdata_1byte_fix i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1354,"ysyx_22050612_npc exu rdata_1byte_fix i0 hit", false,-1);
        tracep->declBus(c+1449,"ysyx_22050612_npc exu rdata_1byte_fix i0 i", false,-1, 31,0);
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

extern const VlWide<14>/*447:0*/ Vysyx_22050612_npc__ConstPool__CONST_75b99efe_0;
extern const VlWide<21>/*671:0*/ Vysyx_22050612_npc__ConstPool__CONST_61ae12b2_0;

void Vysyx_22050612_npc___024root__traceFullSub0(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<8>/*255:0*/ __Vtemp2000;
    VlWide<7>/*223:0*/ __Vtemp2001;
    VlWide<6>/*191:0*/ __Vtemp2002;
    VlWide<3>/*95:0*/ __Vtemp2003;
    VlWide<3>/*95:0*/ __Vtemp2004;
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
        tracep->fullSData(oldp+14,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+15,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+16,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[2]),10);
        tracep->fullSData(oldp+17,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[3]),10);
        tracep->fullSData(oldp+18,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[4]),10);
        tracep->fullSData(oldp+19,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[5]),10);
        tracep->fullSData(oldp+20,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[6]),10);
        tracep->fullSData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[7]),10);
        tracep->fullSData(oldp+22,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[8]),10);
        tracep->fullSData(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[9]),10);
        tracep->fullSData(oldp+24,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[10]),10);
        tracep->fullSData(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[11]),10);
        tracep->fullSData(oldp+26,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[12]),10);
        tracep->fullCData(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0]),7);
        tracep->fullCData(oldp+28,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[1]),7);
        tracep->fullCData(oldp+29,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[2]),7);
        tracep->fullCData(oldp+30,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[3]),7);
        tracep->fullCData(oldp+31,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[4]),7);
        tracep->fullCData(oldp+32,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[5]),7);
        tracep->fullCData(oldp+33,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[6]),7);
        tracep->fullCData(oldp+34,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[7]),7);
        tracep->fullCData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[8]),7);
        tracep->fullCData(oldp+36,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[9]),7);
        tracep->fullCData(oldp+37,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[10]),7);
        tracep->fullCData(oldp+38,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[11]),7);
        tracep->fullCData(oldp+39,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[12]),7);
        tracep->fullSData(oldp+40,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[0]),9);
        tracep->fullSData(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[1]),9);
        tracep->fullSData(oldp+42,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[2]),9);
        tracep->fullCData(oldp+43,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+44,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+45,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+46,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+47,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+48,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[2]),2);
        tracep->fullIData(oldp+49,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0]),25);
        tracep->fullIData(oldp+50,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[1]),25);
        tracep->fullIData(oldp+51,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[2]),25);
        tracep->fullIData(oldp+52,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[3]),25);
        tracep->fullIData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[4]),25);
        tracep->fullIData(oldp+54,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[5]),25);
        tracep->fullIData(oldp+55,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[6]),25);
        tracep->fullIData(oldp+56,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0]),17);
        tracep->fullIData(oldp+57,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[1]),17);
        tracep->fullIData(oldp+58,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[2]),17);
        tracep->fullIData(oldp+59,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[3]),17);
        tracep->fullIData(oldp+60,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[4]),17);
        tracep->fullIData(oldp+61,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[5]),17);
        tracep->fullIData(oldp+62,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[6]),17);
        tracep->fullCData(oldp+63,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+64,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+65,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+66,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+67,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+68,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+69,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[6]),8);
        tracep->fullIData(oldp+70,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list[0]),18);
        tracep->fullSData(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[0]),16);
        tracep->fullCData(oldp+72,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[0]),2);
        tracep->fullIData(oldp+73,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0]),21);
        tracep->fullIData(oldp+74,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[1]),21);
        tracep->fullIData(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[2]),21);
        tracep->fullIData(oldp+76,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[3]),21);
        tracep->fullIData(oldp+77,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[4]),21);
        tracep->fullIData(oldp+78,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[5]),21);
        tracep->fullIData(oldp+79,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[6]),21);
        tracep->fullIData(oldp+80,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[7]),21);
        tracep->fullIData(oldp+81,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[8]),21);
        tracep->fullIData(oldp+82,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[9]),21);
        tracep->fullIData(oldp+83,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[10]),21);
        tracep->fullIData(oldp+84,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[11]),21);
        tracep->fullIData(oldp+85,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[12]),21);
        tracep->fullIData(oldp+86,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[13]),21);
        tracep->fullIData(oldp+87,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[14]),21);
        tracep->fullIData(oldp+88,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[15]),21);
        tracep->fullIData(oldp+89,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[16]),21);
        tracep->fullIData(oldp+90,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[17]),21);
        tracep->fullIData(oldp+91,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[18]),21);
        tracep->fullIData(oldp+92,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[19]),21);
        tracep->fullIData(oldp+93,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+94,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+96,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+97,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+98,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+99,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+100,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+101,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+102,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+103,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+104,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[11]),20);
        tracep->fullIData(oldp+105,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[12]),20);
        tracep->fullIData(oldp+106,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[13]),20);
        tracep->fullIData(oldp+107,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[14]),20);
        tracep->fullIData(oldp+108,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[15]),20);
        tracep->fullIData(oldp+109,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[16]),20);
        tracep->fullIData(oldp+110,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[17]),20);
        tracep->fullIData(oldp+111,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[18]),20);
        tracep->fullIData(oldp+112,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[19]),20);
        tracep->fullBit(oldp+113,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+114,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+115,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[2]));
        tracep->fullBit(oldp+116,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[3]));
        tracep->fullBit(oldp+117,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[4]));
        tracep->fullBit(oldp+118,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[5]));
        tracep->fullBit(oldp+119,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[6]));
        tracep->fullBit(oldp+120,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[7]));
        tracep->fullBit(oldp+121,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[8]));
        tracep->fullBit(oldp+122,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[9]));
        tracep->fullBit(oldp+123,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[10]));
        tracep->fullBit(oldp+124,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[11]));
        tracep->fullBit(oldp+125,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[12]));
        tracep->fullBit(oldp+126,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[13]));
        tracep->fullBit(oldp+127,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[14]));
        tracep->fullBit(oldp+128,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[15]));
        tracep->fullBit(oldp+129,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[16]));
        tracep->fullBit(oldp+130,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[17]));
        tracep->fullBit(oldp+131,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[18]));
        tracep->fullBit(oldp+132,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[19]));
        tracep->fullIData(oldp+133,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0]),28);
        tracep->fullIData(oldp+134,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[1]),28);
        tracep->fullIData(oldp+135,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[2]),28);
        tracep->fullIData(oldp+136,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[3]),28);
        tracep->fullIData(oldp+137,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[4]),28);
        tracep->fullIData(oldp+138,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[5]),28);
        tracep->fullIData(oldp+139,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[6]),28);
        tracep->fullIData(oldp+140,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[7]),28);
        tracep->fullIData(oldp+141,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[8]),28);
        tracep->fullIData(oldp+142,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[9]),28);
        tracep->fullIData(oldp+143,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[10]),28);
        tracep->fullIData(oldp+144,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[11]),28);
        tracep->fullIData(oldp+145,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[12]),28);
        tracep->fullIData(oldp+146,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[13]),28);
        tracep->fullIData(oldp+147,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[14]),28);
        tracep->fullIData(oldp+148,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[15]),28);
        tracep->fullIData(oldp+149,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[16]),28);
        tracep->fullIData(oldp+150,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[17]),28);
        tracep->fullIData(oldp+151,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[18]),28);
        tracep->fullIData(oldp+152,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[19]),28);
        tracep->fullIData(oldp+153,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[20]),28);
        tracep->fullIData(oldp+154,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[21]),28);
        tracep->fullIData(oldp+155,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[22]),28);
        tracep->fullIData(oldp+156,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+157,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+158,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+159,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+160,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+161,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+162,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+163,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+164,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+165,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+166,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+167,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[11]),20);
        tracep->fullIData(oldp+168,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[12]),20);
        tracep->fullIData(oldp+169,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[13]),20);
        tracep->fullIData(oldp+170,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[14]),20);
        tracep->fullIData(oldp+171,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[15]),20);
        tracep->fullIData(oldp+172,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[16]),20);
        tracep->fullIData(oldp+173,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[17]),20);
        tracep->fullIData(oldp+174,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[18]),20);
        tracep->fullIData(oldp+175,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[19]),20);
        tracep->fullIData(oldp+176,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[20]),20);
        tracep->fullIData(oldp+177,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[21]),20);
        tracep->fullIData(oldp+178,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[22]),20);
        tracep->fullCData(oldp+179,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+180,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+181,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+182,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+183,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+184,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+185,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+186,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+187,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[8]),8);
        tracep->fullCData(oldp+188,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[9]),8);
        tracep->fullCData(oldp+189,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[10]),8);
        tracep->fullCData(oldp+190,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[11]),8);
        tracep->fullCData(oldp+191,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[12]),8);
        tracep->fullCData(oldp+192,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[13]),8);
        tracep->fullCData(oldp+193,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[14]),8);
        tracep->fullCData(oldp+194,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[15]),8);
        tracep->fullCData(oldp+195,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[16]),8);
        tracep->fullCData(oldp+196,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[17]),8);
        tracep->fullCData(oldp+197,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[18]),8);
        tracep->fullCData(oldp+198,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[19]),8);
        tracep->fullCData(oldp+199,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[20]),8);
        tracep->fullCData(oldp+200,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[21]),8);
        tracep->fullCData(oldp+201,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[22]),8);
        tracep->fullSData(oldp+202,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+203,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+204,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+205,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+206,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+207,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+208,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullSData(oldp+209,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[7]),11);
        tracep->fullCData(oldp+210,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+211,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+212,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+213,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+214,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+215,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+216,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+217,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[7]),3);
        tracep->fullCData(oldp+218,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+219,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+220,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+221,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+222,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+223,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+224,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+225,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[7]),8);
        tracep->fullIData(oldp+226,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[0]),28);
        tracep->fullIData(oldp+227,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[1]),28);
        tracep->fullIData(oldp+228,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[2]),28);
        tracep->fullIData(oldp+229,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+230,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+231,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullCData(oldp+232,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+233,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+234,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[2]),8);
        tracep->fullIData(oldp+235,(vlSelf->ysyx_22050612_npc__DOT__inst),32);
        tracep->fullQData(oldp+236,(vlSelf->ysyx_22050612_npc__DOT__dnpc),64);
        tracep->fullQData(oldp+238,(vlSelf->ysyx_22050612_npc__DOT__imm_I),64);
        tracep->fullQData(oldp+240,(vlSelf->ysyx_22050612_npc__DOT__imm_U),64);
        tracep->fullQData(oldp+242,(((vlSelf->ysyx_22050612_npc__DOT__inst 
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
        tracep->fullQData(oldp+244,(((vlSelf->ysyx_22050612_npc__DOT__inst 
                                      >> 0x1fU) ? (0xffffffffffffe000ULL 
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
        tracep->fullQData(oldp+246,(vlSelf->ysyx_22050612_npc__DOT__imm_S),64);
        tracep->fullCData(oldp+248,((0x3fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0x14U))),6);
        tracep->fullCData(oldp+249,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+250,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+251,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+252,(vlSelf->ysyx_22050612_npc__DOT__opcode),20);
        tracep->fullQData(oldp+253,(vlSelf->ysyx_22050612_npc__DOT__ifu__DOT__inst_mix),64);
        tracep->fullCData(oldp+255,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode0____pinNumber1),7);
        tracep->fullSData(oldp+256,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2),10);
        tracep->fullCData(oldp+257,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out),7);
        tracep->fullBit(oldp+258,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+259,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode1____pinNumber1),2);
        tracep->fullCData(oldp+260,((0x7fU & vlSelf->ysyx_22050612_npc__DOT__inst)),7);
        tracep->fullCData(oldp+261,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+262,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+263,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode2____pinNumber1),8);
        tracep->fullIData(oldp+264,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2),17);
        tracep->fullCData(oldp+265,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+266,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+267,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode3____pinNumber1),2);
        tracep->fullSData(oldp+268,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2),16);
        tracep->fullCData(oldp+269,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+270,(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2) 
                                   == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list
                                   [0U])));
        tracep->fullQData(oldp+271,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1),64);
        tracep->fullQData(oldp+273,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2),64);
        tracep->fullQData(oldp+275,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_reg),64);
        tracep->fullBit(oldp+277,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
        tracep->fullBit(oldp+278,(((0U != (0x1fU & 
                                           (vlSelf->ysyx_22050612_npc__DOT__inst 
                                            >> 7U))) 
                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen))));
        tracep->fullQData(oldp+279,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
        tracep->fullQData(oldp+281,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
        tracep->fullQData(oldp+283,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
        tracep->fullQData(oldp+285,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
        tracep->fullQData(oldp+287,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
        tracep->fullQData(oldp+289,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
        tracep->fullQData(oldp+291,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
        tracep->fullQData(oldp+293,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
        tracep->fullQData(oldp+295,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
        tracep->fullQData(oldp+297,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
        tracep->fullQData(oldp+299,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
        tracep->fullQData(oldp+301,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
        tracep->fullQData(oldp+303,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
        tracep->fullQData(oldp+305,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
        tracep->fullQData(oldp+307,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
        tracep->fullQData(oldp+309,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
        tracep->fullQData(oldp+311,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
        tracep->fullQData(oldp+313,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
        tracep->fullQData(oldp+315,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
        tracep->fullQData(oldp+317,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
        tracep->fullQData(oldp+319,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
        tracep->fullQData(oldp+321,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
        tracep->fullQData(oldp+323,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
        tracep->fullQData(oldp+325,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
        tracep->fullQData(oldp+327,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
        tracep->fullQData(oldp+329,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
        tracep->fullQData(oldp+331,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
        tracep->fullQData(oldp+333,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
        tracep->fullQData(oldp+335,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
        tracep->fullQData(oldp+337,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
        tracep->fullQData(oldp+339,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
        tracep->fullQData(oldp+341,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
        tracep->fullCData(oldp+343,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode),8);
        tracep->fullQData(oldp+344,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a),64);
        tracep->fullQData(oldp+346,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b),64);
        tracep->fullQData(oldp+348,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0),64);
        tracep->fullCData(oldp+350,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte),8);
        tracep->fullQData(oldp+351,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte),64);
        tracep->fullQData(oldp+353,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr),64);
        tracep->fullQData(oldp+355,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata),64);
        tracep->fullQData(oldp+357,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr),64);
        tracep->fullQData(oldp+359,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
        tracep->fullCData(oldp+361,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask),8);
        tracep->fullQData(oldp+362,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix),64);
        tracep->fullCData(oldp+364,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte),8);
        tracep->fullQData(oldp+365,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[0]),64);
        tracep->fullQData(oldp+367,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[1]),64);
        tracep->fullQData(oldp+369,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[2]),64);
        tracep->fullQData(oldp+371,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[3]),64);
        tracep->fullQData(oldp+373,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[4]),64);
        tracep->fullQData(oldp+375,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[5]),64);
        tracep->fullQData(oldp+377,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[6]),64);
        tracep->fullQData(oldp+379,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[7]),64);
        tracep->fullQData(oldp+381,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[8]),64);
        tracep->fullQData(oldp+383,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[9]),64);
        tracep->fullQData(oldp+385,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[10]),64);
        tracep->fullQData(oldp+387,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[11]),64);
        tracep->fullQData(oldp+389,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[12]),64);
        tracep->fullQData(oldp+391,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[13]),64);
        tracep->fullQData(oldp+393,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[14]),64);
        tracep->fullQData(oldp+395,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[15]),64);
        tracep->fullQData(oldp+397,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[16]),64);
        tracep->fullQData(oldp+399,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[17]),64);
        tracep->fullQData(oldp+401,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[18]),64);
        tracep->fullQData(oldp+403,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[19]),64);
        tracep->fullQData(oldp+405,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[20]),64);
        tracep->fullQData(oldp+407,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[21]),64);
        tracep->fullQData(oldp+409,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[22]),64);
        tracep->fullQData(oldp+411,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[23]),64);
        tracep->fullQData(oldp+413,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[24]),64);
        tracep->fullQData(oldp+415,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[25]),64);
        tracep->fullQData(oldp+417,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[26]),64);
        tracep->fullQData(oldp+419,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[27]),64);
        tracep->fullQData(oldp+421,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[28]),64);
        tracep->fullQData(oldp+423,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[29]),64);
        tracep->fullQData(oldp+425,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[30]),64);
        tracep->fullQData(oldp+427,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[31]),64);
        tracep->fullBit(oldp+429,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+430,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+431,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3),1680);
        tracep->fullWData(oldp+484,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+487,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+490,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+493,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+496,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+499,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+502,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullWData(oldp+505,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[7]),84);
        tracep->fullWData(oldp+508,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[8]),84);
        tracep->fullWData(oldp+511,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[9]),84);
        tracep->fullWData(oldp+514,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[10]),84);
        tracep->fullWData(oldp+517,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[11]),84);
        tracep->fullWData(oldp+520,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[12]),84);
        tracep->fullWData(oldp+523,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[13]),84);
        tracep->fullWData(oldp+526,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[14]),84);
        tracep->fullWData(oldp+529,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[15]),84);
        tracep->fullWData(oldp+532,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[16]),84);
        tracep->fullWData(oldp+535,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[17]),84);
        tracep->fullWData(oldp+538,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[18]),84);
        tracep->fullWData(oldp+541,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[19]),84);
        tracep->fullIData(oldp+544,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+545,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+546,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+547,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+548,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+549,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+550,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+551,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+552,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+553,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+554,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+555,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[11]),20);
        tracep->fullIData(oldp+556,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[12]),20);
        tracep->fullIData(oldp+557,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[13]),20);
        tracep->fullIData(oldp+558,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[14]),20);
        tracep->fullIData(oldp+559,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[15]),20);
        tracep->fullIData(oldp+560,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[16]),20);
        tracep->fullIData(oldp+561,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[17]),20);
        tracep->fullIData(oldp+562,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[18]),20);
        tracep->fullIData(oldp+563,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[19]),20);
        tracep->fullQData(oldp+564,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+566,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+568,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+570,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+572,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+574,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+576,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+578,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+580,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+582,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+584,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+586,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+588,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+590,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+592,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+594,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+596,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+598,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+600,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+602,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+604,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+606,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+607,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4),252);
        tracep->fullWData(oldp+615,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+618,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+621,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullIData(oldp+624,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+625,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+626,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[2]),20);
        tracep->fullQData(oldp+627,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+629,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+631,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+633,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+635,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+636,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3),1932);
        tracep->fullWData(oldp+697,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+700,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+703,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+706,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+709,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+712,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+715,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullWData(oldp+718,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[7]),84);
        tracep->fullWData(oldp+721,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[8]),84);
        tracep->fullWData(oldp+724,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[9]),84);
        tracep->fullWData(oldp+727,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[10]),84);
        tracep->fullWData(oldp+730,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[11]),84);
        tracep->fullWData(oldp+733,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[12]),84);
        tracep->fullWData(oldp+736,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[13]),84);
        tracep->fullWData(oldp+739,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[14]),84);
        tracep->fullWData(oldp+742,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[15]),84);
        tracep->fullWData(oldp+745,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[16]),84);
        tracep->fullWData(oldp+748,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[17]),84);
        tracep->fullWData(oldp+751,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[18]),84);
        tracep->fullWData(oldp+754,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[19]),84);
        tracep->fullWData(oldp+757,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[20]),84);
        tracep->fullWData(oldp+760,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[21]),84);
        tracep->fullWData(oldp+763,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[22]),84);
        tracep->fullIData(oldp+766,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+767,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+768,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+769,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+770,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+771,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+772,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+773,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+774,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+775,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+776,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+777,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[11]),20);
        tracep->fullIData(oldp+778,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[12]),20);
        tracep->fullIData(oldp+779,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[13]),20);
        tracep->fullIData(oldp+780,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[14]),20);
        tracep->fullIData(oldp+781,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[15]),20);
        tracep->fullIData(oldp+782,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[16]),20);
        tracep->fullIData(oldp+783,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[17]),20);
        tracep->fullIData(oldp+784,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[18]),20);
        tracep->fullIData(oldp+785,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[19]),20);
        tracep->fullIData(oldp+786,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[20]),20);
        tracep->fullIData(oldp+787,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[21]),20);
        tracep->fullIData(oldp+788,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[22]),20);
        tracep->fullQData(oldp+789,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+791,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+793,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+795,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+797,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+799,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+801,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+803,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+805,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+807,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+809,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+811,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+813,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+815,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+817,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+819,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+821,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+823,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+825,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+827,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+829,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+831,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+833,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+835,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+837,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+838,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3),1932);
        tracep->fullWData(oldp+899,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+902,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+905,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+908,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+911,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+914,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+917,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullWData(oldp+920,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[7]),84);
        tracep->fullWData(oldp+923,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[8]),84);
        tracep->fullWData(oldp+926,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[9]),84);
        tracep->fullWData(oldp+929,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[10]),84);
        tracep->fullWData(oldp+932,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[11]),84);
        tracep->fullWData(oldp+935,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[12]),84);
        tracep->fullWData(oldp+938,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[13]),84);
        tracep->fullWData(oldp+941,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[14]),84);
        tracep->fullWData(oldp+944,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[15]),84);
        tracep->fullWData(oldp+947,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[16]),84);
        tracep->fullWData(oldp+950,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[17]),84);
        tracep->fullWData(oldp+953,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[18]),84);
        tracep->fullWData(oldp+956,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[19]),84);
        tracep->fullWData(oldp+959,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[20]),84);
        tracep->fullWData(oldp+962,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[21]),84);
        tracep->fullWData(oldp+965,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[22]),84);
        tracep->fullIData(oldp+968,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+969,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+970,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+971,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+972,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+973,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+974,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+975,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+976,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+977,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+978,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+979,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[11]),20);
        tracep->fullIData(oldp+980,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[12]),20);
        tracep->fullIData(oldp+981,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[13]),20);
        tracep->fullIData(oldp+982,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[14]),20);
        tracep->fullIData(oldp+983,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[15]),20);
        tracep->fullIData(oldp+984,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[16]),20);
        tracep->fullIData(oldp+985,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[17]),20);
        tracep->fullIData(oldp+986,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[18]),20);
        tracep->fullIData(oldp+987,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[19]),20);
        tracep->fullIData(oldp+988,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[20]),20);
        tracep->fullIData(oldp+989,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[21]),20);
        tracep->fullIData(oldp+990,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[22]),20);
        tracep->fullQData(oldp+991,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+993,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+995,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+997,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+999,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1001,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1003,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1005,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+1007,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+1009,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+1011,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+1013,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+1015,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+1017,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+1019,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+1021,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+1023,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+1025,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+1027,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+1029,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+1031,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+1033,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+1035,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+1037,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1039,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1040,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1041,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+1042,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result),64);
        tracep->fullQData(oldp+1044,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                      & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+1046,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                      | vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+1048,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                      ^ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+1050,(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                       < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                       ? 1ULL : 0ULL)),64);
        tracep->fullQData(oldp+1052,(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+1054,(VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+1056,(((1U == (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode))
                                       ? (1ULL + (~ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b))
                                       : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullWData(oldp+1058,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3),648);
        tracep->fullWData(oldp+1079,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[0]),72);
        tracep->fullWData(oldp+1082,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[1]),72);
        tracep->fullWData(oldp+1085,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[2]),72);
        tracep->fullWData(oldp+1088,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[3]),72);
        tracep->fullWData(oldp+1091,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[4]),72);
        tracep->fullWData(oldp+1094,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[5]),72);
        tracep->fullWData(oldp+1097,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[6]),72);
        tracep->fullWData(oldp+1100,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[7]),72);
        tracep->fullWData(oldp+1103,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[8]),72);
        tracep->fullCData(oldp+1106,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[0]),8);
        tracep->fullCData(oldp+1107,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[1]),8);
        tracep->fullCData(oldp+1108,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[2]),8);
        tracep->fullCData(oldp+1109,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[3]),8);
        tracep->fullCData(oldp+1110,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[4]),8);
        tracep->fullCData(oldp+1111,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[5]),8);
        tracep->fullCData(oldp+1112,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[6]),8);
        tracep->fullCData(oldp+1113,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[7]),8);
        tracep->fullCData(oldp+1114,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[8]),8);
        tracep->fullQData(oldp+1115,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1117,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1119,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1121,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1123,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1125,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1127,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1129,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+1131,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+1133,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1135,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1136,((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))),3);
        tracep->fullWData(oldp+1137,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3),536);
        tracep->fullWData(oldp+1154,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+1157,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+1160,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+1163,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+1166,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+1169,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[5]),67);
        tracep->fullWData(oldp+1172,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[6]),67);
        tracep->fullWData(oldp+1175,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[7]),67);
        tracep->fullCData(oldp+1178,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1179,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1180,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1181,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+1182,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+1183,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+1184,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+1185,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[7]),3);
        tracep->fullQData(oldp+1186,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1188,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1190,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1192,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1194,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1196,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1198,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1200,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+1202,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1204,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1205,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1206,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1207,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3),252);
        tracep->fullWData(oldp+1215,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1218,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1221,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullIData(oldp+1224,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1225,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1226,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullQData(oldp+1227,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1229,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1231,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1233,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1235,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit));
        __Vtemp2000[0U] = 0x80002000U;
        __Vtemp2000[1U] = 0U;
        __Vtemp2000[2U] = (0x2bU | ((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                                    << 0x14U));
        __Vtemp2000[3U] = (((IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0) 
                            >> 0xcU) | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                 >> 0x20U)) 
                                        << 0x14U));
        __Vtemp2000[4U] = (0x1100000U | ((IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0 
                                                  >> 0x20U)) 
                                         >> 0xcU));
        __Vtemp2000[5U] = 0x200000U;
        __Vtemp2000[6U] = 0x80U;
        __Vtemp2000[7U] = 0x1000U;
        tracep->fullWData(oldp+1236,(__Vtemp2000),252);
        tracep->fullWData(oldp+1244,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1247,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1250,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullIData(oldp+1253,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1254,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1255,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullQData(oldp+1256,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1258,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1260,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1262,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1264,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1265,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3),252);
        tracep->fullWData(oldp+1273,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1276,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1279,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullIData(oldp+1282,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1283,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1284,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullQData(oldp+1285,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1287,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1289,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1291,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1293,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1294,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1295,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1296,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3),252);
        tracep->fullWData(oldp+1304,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1307,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1310,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullIData(oldp+1313,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1314,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1315,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[2]),20);
        tracep->fullQData(oldp+1316,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1318,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1320,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1322,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1324,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1325,((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr))),3);
        tracep->fullWData(oldp+1326,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_1byte_fix____pinNumber3),88);
        tracep->fullSData(oldp+1329,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+1330,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+1331,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+1332,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+1333,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+1334,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+1335,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullSData(oldp+1336,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[7]),11);
        tracep->fullCData(oldp+1337,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1338,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1339,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1340,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+1341,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+1342,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+1343,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+1344,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[7]),3);
        tracep->fullCData(oldp+1345,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+1346,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+1347,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+1348,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+1349,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+1350,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+1351,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+1352,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+1353,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1354,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+1355,(vlSelf->clk));
        tracep->fullBit(oldp+1356,(vlSelf->rst));
        tracep->fullQData(oldp+1357,(vlSelf->pc),64);
        tracep->fullQData(oldp+1359,((4ULL + vlSelf->pc)),64);
        tracep->fullIData(oldp+1361,(0x40U),32);
        tracep->fullQData(oldp+1362,(0x80000000ULL),64);
        tracep->fullBit(oldp+1364,(1U));
        tracep->fullIData(oldp+1365,(0xdU),32);
        tracep->fullIData(oldp+1366,(0xaU),32);
        tracep->fullIData(oldp+1367,(7U),32);
        __Vtemp2001[0U] = 0xa3560dafU;
        __Vtemp2001[1U] = 0x4cc306a9U;
        __Vtemp2001[2U] = 0x32b0996eU;
        __Vtemp2001[3U] = 0xc88264d9U;
        __Vtemp2001[4U] = 0x1c118c28U;
        __Vtemp2001[5U] = 0x32063603U;
        __Vtemp2001[6U] = 0x338438cU;
        tracep->fullWData(oldp+1368,(__Vtemp2001),221);
        tracep->fullIData(oldp+1375,(0U),32);
        tracep->fullCData(oldp+1376,(0U),7);
        tracep->fullIData(oldp+1377,(0x11U),32);
        tracep->fullIData(oldp+1378,(0xdU),32);
        tracep->fullIData(oldp+1379,(3U),32);
        tracep->fullIData(oldp+1380,(2U),32);
        tracep->fullIData(oldp+1381,(0x374bdbfU),27);
        tracep->fullCData(oldp+1382,(0U),2);
        tracep->fullIData(oldp+1383,(9U),32);
        tracep->fullIData(oldp+1384,(3U),32);
        tracep->fullIData(oldp+1385,(8U),32);
        __Vtemp2002[0U] = 0x2e00bb19U;
        __Vtemp2002[1U] = 0xcc4c0076U;
        __Vtemp2002[2U] = 0x1998900eU;
        __Vtemp2002[3U] = 0xa01b3080U;
        __Vtemp2002[4U] = 0xc1100660U;
        __Vtemp2002[5U] = 0xcU;
        tracep->fullWData(oldp+1386,(__Vtemp2002),175);
        tracep->fullCData(oldp+1392,(0U),8);
        tracep->fullIData(oldp+1393,(0x19U),32);
        tracep->fullIData(oldp+1394,(7U),32);
        tracep->fullIData(oldp+1395,(1U),32);
        tracep->fullIData(oldp+1396,(0x10U),32);
        tracep->fullIData(oldp+1397,(0x10a4fU),18);
        tracep->fullIData(oldp+1398,(0x12U),32);
        tracep->fullIData(oldp+1399,(1U),32);
        tracep->fullIData(oldp+1400,(5U),32);
        tracep->fullIData(oldp+1401,(0x14U),32);
        tracep->fullWData(oldp+1402,(Vysyx_22050612_npc__ConstPool__CONST_75b99efe_0),420);
        tracep->fullBit(oldp+1416,(0U));
        tracep->fullIData(oldp+1417,(0x15U),32);
        tracep->fullIData(oldp+1418,(0x14U),32);
        tracep->fullQData(oldp+1419,(0ULL),64);
        tracep->fullIData(oldp+1421,(0x54U),32);
        tracep->fullIData(oldp+1422,(0x17U),32);
        tracep->fullIData(oldp+1423,(0x17U),32);
        tracep->fullWData(oldp+1424,(Vysyx_22050612_npc__ConstPool__CONST_61ae12b2_0),644);
        tracep->fullIData(oldp+1445,(0x1cU),32);
        tracep->fullIData(oldp+1446,(0x48U),32);
        tracep->fullIData(oldp+1447,(9U),32);
        tracep->fullIData(oldp+1448,(0x43U),32);
        tracep->fullIData(oldp+1449,(8U),32);
        __Vtemp2003[0U] = 0x48320780U;
        __Vtemp2003[1U] = 0x2308821U;
        __Vtemp2003[2U] = 0x2409U;
        tracep->fullWData(oldp+1450,(__Vtemp2003),88);
        tracep->fullIData(oldp+1453,(0xbU),32);
        __Vtemp2004[0U] = 0x30002bffU;
        __Vtemp2004[1U] = 0xff000110U;
        __Vtemp2004[2U] = 0x10U;
        tracep->fullWData(oldp+1454,(__Vtemp2004),84);
    }
}
