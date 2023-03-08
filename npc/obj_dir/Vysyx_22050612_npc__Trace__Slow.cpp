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
        tracep->declBit(c+1478,"clk", false,-1);
        tracep->declBit(c+1479,"rst", false,-1);
        tracep->declQuad(c+1480,"pc", false,-1, 63,0);
        tracep->declBit(c+1478,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+1479,"ysyx_22050612_npc rst", false,-1);
        tracep->declQuad(c+1480,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declBus(c+256,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+257,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+259,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declQuad(c+261,"ysyx_22050612_npc imm_U", false,-1, 63,0);
        tracep->declQuad(c+263,"ysyx_22050612_npc imm_J", false,-1, 63,0);
        tracep->declQuad(c+265,"ysyx_22050612_npc imm_B", false,-1, 63,0);
        tracep->declQuad(c+267,"ysyx_22050612_npc imm_S", false,-1, 63,0);
        tracep->declBus(c+269,"ysyx_22050612_npc shamt", false,-1, 5,0);
        tracep->declBus(c+270,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+271,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+272,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBus(c+273,"ysyx_22050612_npc opcode", false,-1, 19,0);
        tracep->declBit(c+1478,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+1479,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+257,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+1480,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+256,"ysyx_22050612_npc ifu inst", false,-1, 31,0);
        tracep->declQuad(c+274,"ysyx_22050612_npc ifu inst_mix", false,-1, 63,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1485,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1478,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+1479,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+257,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+1480,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+1487,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+1478,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+256,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+259,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declQuad(c+261,"ysyx_22050612_npc idu imm_U", false,-1, 63,0);
        tracep->declQuad(c+263,"ysyx_22050612_npc idu imm_J", false,-1, 63,0);
        tracep->declQuad(c+265,"ysyx_22050612_npc idu imm_B", false,-1, 63,0);
        tracep->declQuad(c+267,"ysyx_22050612_npc idu imm_S", false,-1, 63,0);
        tracep->declBus(c+269,"ysyx_22050612_npc idu shamt", false,-1, 5,0);
        tracep->declBus(c+270,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+271,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+272,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBus(c+273,"ysyx_22050612_npc idu opcode", false,-1, 19,0);
        tracep->declBus(c+1488,"ysyx_22050612_npc idu decode0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1489,"ysyx_22050612_npc idu decode0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1490,"ysyx_22050612_npc idu decode0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+276,"ysyx_22050612_npc idu decode0 out", false,-1, 6,0);
        tracep->declBus(c+277,"ysyx_22050612_npc idu decode0 key", false,-1, 9,0);
        tracep->declArray(c+1491,"ysyx_22050612_npc idu decode0 lut", false,-1, 220,0);
        tracep->declBus(c+1488,"ysyx_22050612_npc idu decode0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1489,"ysyx_22050612_npc idu decode0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1490,"ysyx_22050612_npc idu decode0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc idu decode0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+276,"ysyx_22050612_npc idu decode0 i0 out", false,-1, 6,0);
        tracep->declBus(c+277,"ysyx_22050612_npc idu decode0 i0 key", false,-1, 9,0);
        tracep->declBus(c+1499,"ysyx_22050612_npc idu decode0 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+1491,"ysyx_22050612_npc idu decode0 i0 lut", false,-1, 220,0);
        tracep->declBus(c+1500,"ysyx_22050612_npc idu decode0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22050612_npc idu decode0 i0 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+14+i*1,"ysyx_22050612_npc idu decode0 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+27+i*1,"ysyx_22050612_npc idu decode0 i0 data_list", true,(i+0), 6,0);}}
        tracep->declBus(c+278,"ysyx_22050612_npc idu decode0 i0 lut_out", false,-1, 6,0);
        tracep->declBit(c+279,"ysyx_22050612_npc idu decode0 i0 hit", false,-1);
        tracep->declBus(c+1501,"ysyx_22050612_npc idu decode0 i0 i", false,-1, 31,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc idu decode1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1490,"ysyx_22050612_npc idu decode1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1503,"ysyx_22050612_npc idu decode1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+280,"ysyx_22050612_npc idu decode1 out", false,-1, 1,0);
        tracep->declBus(c+281,"ysyx_22050612_npc idu decode1 key", false,-1, 6,0);
        tracep->declBus(c+1504,"ysyx_22050612_npc idu decode1 lut", false,-1, 26,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc idu decode1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1490,"ysyx_22050612_npc idu decode1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1503,"ysyx_22050612_npc idu decode1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc idu decode1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+280,"ysyx_22050612_npc idu decode1 i0 out", false,-1, 1,0);
        tracep->declBus(c+281,"ysyx_22050612_npc idu decode1 i0 key", false,-1, 6,0);
        tracep->declBus(c+1505,"ysyx_22050612_npc idu decode1 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1504,"ysyx_22050612_npc idu decode1 i0 lut", false,-1, 26,0);
        tracep->declBus(c+1506,"ysyx_22050612_npc idu decode1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+40+i*1,"ysyx_22050612_npc idu decode1 i0 pair_list", true,(i+0), 8,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+43+i*1,"ysyx_22050612_npc idu decode1 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+46+i*1,"ysyx_22050612_npc idu decode1 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+282,"ysyx_22050612_npc idu decode1 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+283,"ysyx_22050612_npc idu decode1 i0 hit", false,-1);
        tracep->declBus(c+1507,"ysyx_22050612_npc idu decode1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1490,"ysyx_22050612_npc idu decode2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1500,"ysyx_22050612_npc idu decode2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc idu decode2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+284,"ysyx_22050612_npc idu decode2 out", false,-1, 7,0);
        tracep->declBus(c+285,"ysyx_22050612_npc idu decode2 key", false,-1, 16,0);
        tracep->declArray(c+1509,"ysyx_22050612_npc idu decode2 lut", false,-1, 174,0);
        tracep->declBus(c+1490,"ysyx_22050612_npc idu decode2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1500,"ysyx_22050612_npc idu decode2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc idu decode2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc idu decode2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+284,"ysyx_22050612_npc idu decode2 i0 out", false,-1, 7,0);
        tracep->declBus(c+285,"ysyx_22050612_npc idu decode2 i0 key", false,-1, 16,0);
        tracep->declBus(c+1515,"ysyx_22050612_npc idu decode2 i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1509,"ysyx_22050612_npc idu decode2 i0 lut", false,-1, 174,0);
        tracep->declBus(c+1516,"ysyx_22050612_npc idu decode2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+49+i*1,"ysyx_22050612_npc idu decode2 i0 pair_list", true,(i+0), 24,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+56+i*1,"ysyx_22050612_npc idu decode2 i0 key_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+63+i*1,"ysyx_22050612_npc idu decode2 i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+286,"ysyx_22050612_npc idu decode2 i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+287,"ysyx_22050612_npc idu decode2 i0 hit", false,-1);
        tracep->declBus(c+1517,"ysyx_22050612_npc idu decode2 i0 i", false,-1, 31,0);
        tracep->declBus(c+1503,"ysyx_22050612_npc idu decode3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1518,"ysyx_22050612_npc idu decode3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1503,"ysyx_22050612_npc idu decode3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+288,"ysyx_22050612_npc idu decode3 out", false,-1, 1,0);
        tracep->declBus(c+289,"ysyx_22050612_npc idu decode3 key", false,-1, 15,0);
        tracep->declQuad(c+1519,"ysyx_22050612_npc idu decode3 lut", false,-1, 35,0);
        tracep->declBus(c+1503,"ysyx_22050612_npc idu decode3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1518,"ysyx_22050612_npc idu decode3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1503,"ysyx_22050612_npc idu decode3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc idu decode3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+288,"ysyx_22050612_npc idu decode3 i0 out", false,-1, 1,0);
        tracep->declBus(c+289,"ysyx_22050612_npc idu decode3 i0 key", false,-1, 15,0);
        tracep->declBus(c+1505,"ysyx_22050612_npc idu decode3 i0 default_out", false,-1, 1,0);
        tracep->declQuad(c+1519,"ysyx_22050612_npc idu decode3 i0 lut", false,-1, 35,0);
        tracep->declBus(c+1521,"ysyx_22050612_npc idu decode3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+70+i*1,"ysyx_22050612_npc idu decode3 i0 pair_list", true,(i+0), 17,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+72+i*1,"ysyx_22050612_npc idu decode3 i0 key_list", true,(i+0), 15,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+74+i*1,"ysyx_22050612_npc idu decode3 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+290,"ysyx_22050612_npc idu decode3 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+291,"ysyx_22050612_npc idu decode3 i0 hit", false,-1);
        tracep->declBus(c+1522,"ysyx_22050612_npc idu decode3 i0 i", false,-1, 31,0);
        tracep->declBit(c+1478,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+259,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declQuad(c+261,"ysyx_22050612_npc exu imm_U", false,-1, 63,0);
        tracep->declQuad(c+263,"ysyx_22050612_npc exu imm_J", false,-1, 63,0);
        tracep->declQuad(c+265,"ysyx_22050612_npc exu imm_B", false,-1, 63,0);
        tracep->declQuad(c+267,"ysyx_22050612_npc exu imm_S", false,-1, 63,0);
        tracep->declBus(c+269,"ysyx_22050612_npc exu shamt", false,-1, 5,0);
        tracep->declBus(c+270,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+271,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+272,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu opcode", false,-1, 19,0);
        tracep->declQuad(c+1480,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+257,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+292,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+294,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+296,"ysyx_22050612_npc exu wdata_reg", false,-1, 63,0);
        tracep->declBit(c+298,"ysyx_22050612_npc exu wen", false,-1);
        tracep->declBit(c+299,"ysyx_22050612_npc exu wen_fix", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+300+i*2,"ysyx_22050612_npc exu gpr", true,(i+0), 63,0);}}
        tracep->declQuad(c+1482,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declBus(c+364,"ysyx_22050612_npc exu mode", false,-1, 7,0);
        tracep->declQuad(c+365,"ysyx_22050612_npc exu operator_a", false,-1, 63,0);
        tracep->declQuad(c+367,"ysyx_22050612_npc exu operator_b", false,-1, 63,0);
        tracep->declQuad(c+369,"ysyx_22050612_npc exu result_alu0", false,-1, 63,0);
        tracep->declBus(c+371,"ysyx_22050612_npc exu wmask_1byte", false,-1, 7,0);
        tracep->declQuad(c+372,"ysyx_22050612_npc exu wdata_1byte", false,-1, 63,0);
        tracep->declBus(c+374,"ysyx_22050612_npc exu wmask_2byte", false,-1, 7,0);
        tracep->declQuad(c+375,"ysyx_22050612_npc exu wdata_2byte", false,-1, 63,0);
        tracep->declQuad(c+377,"ysyx_22050612_npc exu raddr", false,-1, 63,0);
        tracep->declQuad(c+379,"ysyx_22050612_npc exu rdata", false,-1, 63,0);
        tracep->declQuad(c+381,"ysyx_22050612_npc exu waddr", false,-1, 63,0);
        tracep->declQuad(c+383,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBus(c+385,"ysyx_22050612_npc exu wmask", false,-1, 7,0);
        tracep->declQuad(c+386,"ysyx_22050612_npc exu rdata_fix", false,-1, 63,0);
        tracep->declBus(c+388,"ysyx_22050612_npc exu rdata_1byte", false,-1, 7,0);
        tracep->declBus(c+1523,"ysyx_22050612_npc exu cpu_gpr_group ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu cpu_gpr_group DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1478,"ysyx_22050612_npc exu cpu_gpr_group clk", false,-1);
        tracep->declQuad(c+296,"ysyx_22050612_npc exu cpu_gpr_group wdata", false,-1, 63,0);
        tracep->declBus(c+270,"ysyx_22050612_npc exu cpu_gpr_group waddr", false,-1, 4,0);
        tracep->declBit(c+299,"ysyx_22050612_npc exu cpu_gpr_group wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+389+i*2,"ysyx_22050612_npc exu cpu_gpr_group rf", true,(i+0), 63,0);}}
        tracep->declBus(c+1524,"ysyx_22050612_npc exu gpr_write_enable NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu gpr_write_enable KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1526,"ysyx_22050612_npc exu gpr_write_enable DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+298,"ysyx_22050612_npc exu gpr_write_enable out", false,-1, 0,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu gpr_write_enable key", false,-1, 19,0);
        tracep->declArray(c+1527,"ysyx_22050612_npc exu gpr_write_enable lut", false,-1, 440,0);
        tracep->declBus(c+1524,"ysyx_22050612_npc exu gpr_write_enable i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu gpr_write_enable i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1526,"ysyx_22050612_npc exu gpr_write_enable i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc exu gpr_write_enable i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+298,"ysyx_22050612_npc exu gpr_write_enable i0 out", false,-1, 0,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu gpr_write_enable i0 key", false,-1, 19,0);
        tracep->declBus(c+1541,"ysyx_22050612_npc exu gpr_write_enable i0 default_out", false,-1, 0,0);
        tracep->declArray(c+1527,"ysyx_22050612_npc exu gpr_write_enable i0 lut", false,-1, 440,0);
        tracep->declBus(c+1524,"ysyx_22050612_npc exu gpr_write_enable i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<21; i++) {
                tracep->declBus(c+76+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 pair_list", true,(i+0), 20,0);}}
        {int i; for (i=0; i<21; i++) {
                tracep->declBus(c+97+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<21; i++) {
                tracep->declBus(c+118+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+453,"ysyx_22050612_npc exu gpr_write_enable i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+454,"ysyx_22050612_npc exu gpr_write_enable i0 hit", false,-1);
        tracep->declBus(c+1542,"ysyx_22050612_npc exu gpr_write_enable i0 i", false,-1, 31,0);
        tracep->declBus(c+1524,"ysyx_22050612_npc exu gpr_write_data NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu gpr_write_data KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu gpr_write_data DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+296,"ysyx_22050612_npc exu gpr_write_data out", false,-1, 63,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu gpr_write_data key", false,-1, 19,0);
        tracep->declArray(c+455,"ysyx_22050612_npc exu gpr_write_data lut", false,-1, 1763,0);
        tracep->declBus(c+1524,"ysyx_22050612_npc exu gpr_write_data i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu gpr_write_data i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu gpr_write_data i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc exu gpr_write_data i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+296,"ysyx_22050612_npc exu gpr_write_data i0 out", false,-1, 63,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu gpr_write_data i0 key", false,-1, 19,0);
        tracep->declQuad(c+1543,"ysyx_22050612_npc exu gpr_write_data i0 default_out", false,-1, 63,0);
        tracep->declArray(c+455,"ysyx_22050612_npc exu gpr_write_data i0 lut", false,-1, 1763,0);
        tracep->declBus(c+1545,"ysyx_22050612_npc exu gpr_write_data i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<21; i++) {
                tracep->declArray(c+511+i*3,"ysyx_22050612_npc exu gpr_write_data i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<21; i++) {
                tracep->declBus(c+574+i*1,"ysyx_22050612_npc exu gpr_write_data i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<21; i++) {
                tracep->declQuad(c+595+i*2,"ysyx_22050612_npc exu gpr_write_data i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+637,"ysyx_22050612_npc exu gpr_write_data i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+639,"ysyx_22050612_npc exu gpr_write_data i0 hit", false,-1);
        tracep->declBus(c+1542,"ysyx_22050612_npc exu gpr_write_data i0 i", false,-1, 31,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu cpu_pc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu cpu_pc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu cpu_pc DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+257,"ysyx_22050612_npc exu cpu_pc out", false,-1, 63,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu cpu_pc key", false,-1, 19,0);
        tracep->declQuad(c+1482,"ysyx_22050612_npc exu cpu_pc default_out", false,-1, 63,0);
        tracep->declArray(c+640,"ysyx_22050612_npc exu cpu_pc lut", false,-1, 251,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu cpu_pc i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu cpu_pc i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu cpu_pc i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1526,"ysyx_22050612_npc exu cpu_pc i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+257,"ysyx_22050612_npc exu cpu_pc i0 out", false,-1, 63,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu cpu_pc i0 key", false,-1, 19,0);
        tracep->declQuad(c+1482,"ysyx_22050612_npc exu cpu_pc i0 default_out", false,-1, 63,0);
        tracep->declArray(c+640,"ysyx_22050612_npc exu cpu_pc i0 lut", false,-1, 251,0);
        tracep->declBus(c+1545,"ysyx_22050612_npc exu cpu_pc i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+648+i*3,"ysyx_22050612_npc exu cpu_pc i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+657+i*1,"ysyx_22050612_npc exu cpu_pc i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+660+i*2,"ysyx_22050612_npc exu cpu_pc i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+666,"ysyx_22050612_npc exu cpu_pc i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+668,"ysyx_22050612_npc exu cpu_pc i0 hit", false,-1);
        tracep->declBus(c+1507,"ysyx_22050612_npc exu cpu_pc i0 i", false,-1, 31,0);
        tracep->declBus(c+1546,"ysyx_22050612_npc exu operator0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu operator0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu operator0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+365,"ysyx_22050612_npc exu operator0 out", false,-1, 63,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu operator0 key", false,-1, 19,0);
        tracep->declArray(c+669,"ysyx_22050612_npc exu operator0 lut", false,-1, 2015,0);
        tracep->declBus(c+1546,"ysyx_22050612_npc exu operator0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu operator0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu operator0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc exu operator0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+365,"ysyx_22050612_npc exu operator0 i0 out", false,-1, 63,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu operator0 i0 key", false,-1, 19,0);
        tracep->declQuad(c+1543,"ysyx_22050612_npc exu operator0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+669,"ysyx_22050612_npc exu operator0 i0 lut", false,-1, 2015,0);
        tracep->declBus(c+1545,"ysyx_22050612_npc exu operator0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<24; i++) {
                tracep->declArray(c+732+i*3,"ysyx_22050612_npc exu operator0 i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<24; i++) {
                tracep->declBus(c+804+i*1,"ysyx_22050612_npc exu operator0 i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<24; i++) {
                tracep->declQuad(c+828+i*2,"ysyx_22050612_npc exu operator0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+876,"ysyx_22050612_npc exu operator0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+878,"ysyx_22050612_npc exu operator0 i0 hit", false,-1);
        tracep->declBus(c+1547,"ysyx_22050612_npc exu operator0 i0 i", false,-1, 31,0);
        tracep->declBus(c+1546,"ysyx_22050612_npc exu operator1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu operator1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu operator1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+367,"ysyx_22050612_npc exu operator1 out", false,-1, 63,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu operator1 key", false,-1, 19,0);
        tracep->declArray(c+879,"ysyx_22050612_npc exu operator1 lut", false,-1, 2015,0);
        tracep->declBus(c+1546,"ysyx_22050612_npc exu operator1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu operator1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu operator1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc exu operator1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+367,"ysyx_22050612_npc exu operator1 i0 out", false,-1, 63,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu operator1 i0 key", false,-1, 19,0);
        tracep->declQuad(c+1543,"ysyx_22050612_npc exu operator1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+879,"ysyx_22050612_npc exu operator1 i0 lut", false,-1, 2015,0);
        tracep->declBus(c+1545,"ysyx_22050612_npc exu operator1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<24; i++) {
                tracep->declArray(c+942+i*3,"ysyx_22050612_npc exu operator1 i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<24; i++) {
                tracep->declBus(c+1014+i*1,"ysyx_22050612_npc exu operator1 i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<24; i++) {
                tracep->declQuad(c+1038+i*2,"ysyx_22050612_npc exu operator1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1086,"ysyx_22050612_npc exu operator1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1088,"ysyx_22050612_npc exu operator1 i0 hit", false,-1);
        tracep->declBus(c+1547,"ysyx_22050612_npc exu operator1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1546,"ysyx_22050612_npc exu alumode NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu alumode KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc exu alumode DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+364,"ysyx_22050612_npc exu alumode out", false,-1, 7,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu alumode key", false,-1, 19,0);
        tracep->declArray(c+1548,"ysyx_22050612_npc exu alumode lut", false,-1, 671,0);
        tracep->declBus(c+1546,"ysyx_22050612_npc exu alumode i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu alumode i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc exu alumode i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc exu alumode i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+364,"ysyx_22050612_npc exu alumode i0 out", false,-1, 7,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu alumode i0 key", false,-1, 19,0);
        tracep->declBus(c+1515,"ysyx_22050612_npc exu alumode i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1548,"ysyx_22050612_npc exu alumode i0 lut", false,-1, 671,0);
        tracep->declBus(c+1569,"ysyx_22050612_npc exu alumode i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<24; i++) {
                tracep->declBus(c+139+i*1,"ysyx_22050612_npc exu alumode i0 pair_list", true,(i+0), 27,0);}}
        {int i; for (i=0; i<24; i++) {
                tracep->declBus(c+163+i*1,"ysyx_22050612_npc exu alumode i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<24; i++) {
                tracep->declBus(c+187+i*1,"ysyx_22050612_npc exu alumode i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1089,"ysyx_22050612_npc exu alumode i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1090,"ysyx_22050612_npc exu alumode i0 hit", false,-1);
        tracep->declBus(c+1547,"ysyx_22050612_npc exu alumode i0 i", false,-1, 31,0);
        tracep->declBus(c+364,"ysyx_22050612_npc exu alu0 mode", false,-1, 7,0);
        tracep->declQuad(c+365,"ysyx_22050612_npc exu alu0 A", false,-1, 63,0);
        tracep->declQuad(c+367,"ysyx_22050612_npc exu alu0 B", false,-1, 63,0);
        tracep->declQuad(c+369,"ysyx_22050612_npc exu alu0 Z", false,-1, 63,0);
        tracep->declQuad(c+1091,"ysyx_22050612_npc exu alu0 add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+1093,"ysyx_22050612_npc exu alu0 and_result", false,-1, 63,0);
        tracep->declQuad(c+1095,"ysyx_22050612_npc exu alu0 or_result", false,-1, 63,0);
        tracep->declQuad(c+1097,"ysyx_22050612_npc exu alu0 xor_result", false,-1, 63,0);
        tracep->declQuad(c+1099,"ysyx_22050612_npc exu alu0 slt_result", false,-1, 63,0);
        tracep->declQuad(c+1099,"ysyx_22050612_npc exu alu0 sltu_result", false,-1, 63,0);
        tracep->declQuad(c+1101,"ysyx_22050612_npc exu alu0 sll_result", false,-1, 63,0);
        tracep->declQuad(c+1103,"ysyx_22050612_npc exu alu0 sra_result", false,-1, 63,0);
        tracep->declQuad(c+1105,"ysyx_22050612_npc exu alu0 C", false,-1, 63,0);
        tracep->declBus(c+1506,"ysyx_22050612_npc exu alu0 alu_result_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc exu alu0 alu_result_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu alu0 alu_result_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+369,"ysyx_22050612_npc exu alu0 alu_result_select out", false,-1, 63,0);
        tracep->declBus(c+364,"ysyx_22050612_npc exu alu0 alu_result_select key", false,-1, 7,0);
        tracep->declArray(c+1107,"ysyx_22050612_npc exu alu0 alu_result_select lut", false,-1, 647,0);
        tracep->declBus(c+1506,"ysyx_22050612_npc exu alu0 alu_result_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc exu alu0 alu_result_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu alu0 alu_result_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc exu alu0 alu_result_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+369,"ysyx_22050612_npc exu alu0 alu_result_select i0 out", false,-1, 63,0);
        tracep->declBus(c+364,"ysyx_22050612_npc exu alu0 alu_result_select i0 key", false,-1, 7,0);
        tracep->declQuad(c+1543,"ysyx_22050612_npc exu alu0 alu_result_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1107,"ysyx_22050612_npc exu alu0 alu_result_select i0 lut", false,-1, 647,0);
        tracep->declBus(c+1570,"ysyx_22050612_npc exu alu0 alu_result_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<9; i++) {
                tracep->declArray(c+1128+i*3,"ysyx_22050612_npc exu alu0 alu_result_select i0 pair_list", true,(i+0), 71,0);}}
        {int i; for (i=0; i<9; i++) {
                tracep->declBus(c+1155+i*1,"ysyx_22050612_npc exu alu0 alu_result_select i0 key_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<9; i++) {
                tracep->declQuad(c+1164+i*2,"ysyx_22050612_npc exu alu0 alu_result_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1182,"ysyx_22050612_npc exu alu0 alu_result_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1184,"ysyx_22050612_npc exu alu0 alu_result_select i0 hit", false,-1);
        tracep->declBus(c+1571,"ysyx_22050612_npc exu alu0 alu_result_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc exu wdata_onebyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu wdata_onebyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu wdata_onebyte DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+372,"ysyx_22050612_npc exu wdata_onebyte out", false,-1, 63,0);
        tracep->declBus(c+1185,"ysyx_22050612_npc exu wdata_onebyte key", false,-1, 2,0);
        tracep->declArray(c+1186,"ysyx_22050612_npc exu wdata_onebyte lut", false,-1, 535,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc exu wdata_onebyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu wdata_onebyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu wdata_onebyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc exu wdata_onebyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+372,"ysyx_22050612_npc exu wdata_onebyte i0 out", false,-1, 63,0);
        tracep->declBus(c+1185,"ysyx_22050612_npc exu wdata_onebyte i0 key", false,-1, 2,0);
        tracep->declQuad(c+1543,"ysyx_22050612_npc exu wdata_onebyte i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1186,"ysyx_22050612_npc exu wdata_onebyte i0 lut", false,-1, 535,0);
        tracep->declBus(c+1572,"ysyx_22050612_npc exu wdata_onebyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+1203+i*3,"ysyx_22050612_npc exu wdata_onebyte i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1227+i*1,"ysyx_22050612_npc exu wdata_onebyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+1235+i*2,"ysyx_22050612_npc exu wdata_onebyte i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1251,"ysyx_22050612_npc exu wdata_onebyte i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1253,"ysyx_22050612_npc exu wdata_onebyte i0 hit", false,-1);
        tracep->declBus(c+1573,"ysyx_22050612_npc exu wdata_onebyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc exu wmask_onebyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu wmask_onebyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc exu wmask_onebyte DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+371,"ysyx_22050612_npc exu wmask_onebyte out", false,-1, 7,0);
        tracep->declBus(c+1185,"ysyx_22050612_npc exu wmask_onebyte key", false,-1, 2,0);
        tracep->declArray(c+1574,"ysyx_22050612_npc exu wmask_onebyte lut", false,-1, 87,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc exu wmask_onebyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu wmask_onebyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc exu wmask_onebyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc exu wmask_onebyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+371,"ysyx_22050612_npc exu wmask_onebyte i0 out", false,-1, 7,0);
        tracep->declBus(c+1185,"ysyx_22050612_npc exu wmask_onebyte i0 key", false,-1, 2,0);
        tracep->declBus(c+1515,"ysyx_22050612_npc exu wmask_onebyte i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1574,"ysyx_22050612_npc exu wmask_onebyte i0 lut", false,-1, 87,0);
        tracep->declBus(c+1577,"ysyx_22050612_npc exu wmask_onebyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+211+i*1,"ysyx_22050612_npc exu wmask_onebyte i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+219+i*1,"ysyx_22050612_npc exu wmask_onebyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+227+i*1,"ysyx_22050612_npc exu wmask_onebyte i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1254,"ysyx_22050612_npc exu wmask_onebyte i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1255,"ysyx_22050612_npc exu wmask_onebyte i0 hit", false,-1);
        tracep->declBus(c+1573,"ysyx_22050612_npc exu wmask_onebyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1490,"ysyx_22050612_npc exu wdata_twobyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu wdata_twobyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu wdata_twobyte DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+375,"ysyx_22050612_npc exu wdata_twobyte out", false,-1, 63,0);
        tracep->declBus(c+1185,"ysyx_22050612_npc exu wdata_twobyte key", false,-1, 2,0);
        tracep->declArray(c+1256,"ysyx_22050612_npc exu wdata_twobyte lut", false,-1, 468,0);
        tracep->declBus(c+1490,"ysyx_22050612_npc exu wdata_twobyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu wdata_twobyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu wdata_twobyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc exu wdata_twobyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+375,"ysyx_22050612_npc exu wdata_twobyte i0 out", false,-1, 63,0);
        tracep->declBus(c+1185,"ysyx_22050612_npc exu wdata_twobyte i0 key", false,-1, 2,0);
        tracep->declQuad(c+1543,"ysyx_22050612_npc exu wdata_twobyte i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1256,"ysyx_22050612_npc exu wdata_twobyte i0 lut", false,-1, 468,0);
        tracep->declBus(c+1572,"ysyx_22050612_npc exu wdata_twobyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+1271+i*3,"ysyx_22050612_npc exu wdata_twobyte i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+1292+i*1,"ysyx_22050612_npc exu wdata_twobyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+1299+i*2,"ysyx_22050612_npc exu wdata_twobyte i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1313,"ysyx_22050612_npc exu wdata_twobyte i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1315,"ysyx_22050612_npc exu wdata_twobyte i0 hit", false,-1);
        tracep->declBus(c+1517,"ysyx_22050612_npc exu wdata_twobyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1490,"ysyx_22050612_npc exu wmask_twobyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu wmask_twobyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc exu wmask_twobyte DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+374,"ysyx_22050612_npc exu wmask_twobyte out", false,-1, 7,0);
        tracep->declBus(c+1185,"ysyx_22050612_npc exu wmask_twobyte key", false,-1, 2,0);
        tracep->declArray(c+1578,"ysyx_22050612_npc exu wmask_twobyte lut", false,-1, 76,0);
        tracep->declBus(c+1490,"ysyx_22050612_npc exu wmask_twobyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu wmask_twobyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc exu wmask_twobyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc exu wmask_twobyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+374,"ysyx_22050612_npc exu wmask_twobyte i0 out", false,-1, 7,0);
        tracep->declBus(c+1185,"ysyx_22050612_npc exu wmask_twobyte i0 key", false,-1, 2,0);
        tracep->declBus(c+1515,"ysyx_22050612_npc exu wmask_twobyte i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1578,"ysyx_22050612_npc exu wmask_twobyte i0 lut", false,-1, 76,0);
        tracep->declBus(c+1577,"ysyx_22050612_npc exu wmask_twobyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+235+i*1,"ysyx_22050612_npc exu wmask_twobyte i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+242+i*1,"ysyx_22050612_npc exu wmask_twobyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+249+i*1,"ysyx_22050612_npc exu wmask_twobyte i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1316,"ysyx_22050612_npc exu wmask_twobyte i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1317,"ysyx_22050612_npc exu wmask_twobyte i0 hit", false,-1);
        tracep->declBus(c+1517,"ysyx_22050612_npc exu wmask_twobyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu raddr_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu raddr_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu raddr_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+377,"ysyx_22050612_npc exu raddr_select out", false,-1, 63,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu raddr_select key", false,-1, 19,0);
        tracep->declArray(c+1318,"ysyx_22050612_npc exu raddr_select lut", false,-1, 251,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu raddr_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu raddr_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu raddr_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc exu raddr_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+377,"ysyx_22050612_npc exu raddr_select i0 out", false,-1, 63,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu raddr_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+1543,"ysyx_22050612_npc exu raddr_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1318,"ysyx_22050612_npc exu raddr_select i0 lut", false,-1, 251,0);
        tracep->declBus(c+1545,"ysyx_22050612_npc exu raddr_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+1326+i*3,"ysyx_22050612_npc exu raddr_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1335+i*1,"ysyx_22050612_npc exu raddr_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+1338+i*2,"ysyx_22050612_npc exu raddr_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1344,"ysyx_22050612_npc exu raddr_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1346,"ysyx_22050612_npc exu raddr_select i0 hit", false,-1);
        tracep->declBus(c+1507,"ysyx_22050612_npc exu raddr_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu waddr_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu waddr_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu waddr_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+381,"ysyx_22050612_npc exu waddr_select out", false,-1, 63,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu waddr_select key", false,-1, 19,0);
        tracep->declArray(c+1347,"ysyx_22050612_npc exu waddr_select lut", false,-1, 251,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu waddr_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu waddr_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu waddr_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc exu waddr_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+381,"ysyx_22050612_npc exu waddr_select i0 out", false,-1, 63,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu waddr_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+1543,"ysyx_22050612_npc exu waddr_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1347,"ysyx_22050612_npc exu waddr_select i0 lut", false,-1, 251,0);
        tracep->declBus(c+1545,"ysyx_22050612_npc exu waddr_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+1355+i*3,"ysyx_22050612_npc exu waddr_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1364+i*1,"ysyx_22050612_npc exu waddr_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+1367+i*2,"ysyx_22050612_npc exu waddr_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1373,"ysyx_22050612_npc exu waddr_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1375,"ysyx_22050612_npc exu waddr_select i0 hit", false,-1);
        tracep->declBus(c+1507,"ysyx_22050612_npc exu waddr_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu wdata_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu wdata_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu wdata_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+383,"ysyx_22050612_npc exu wdata_select out", false,-1, 63,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu wdata_select key", false,-1, 19,0);
        tracep->declArray(c+1376,"ysyx_22050612_npc exu wdata_select lut", false,-1, 251,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu wdata_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu wdata_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu wdata_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc exu wdata_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+383,"ysyx_22050612_npc exu wdata_select i0 out", false,-1, 63,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu wdata_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+1543,"ysyx_22050612_npc exu wdata_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1376,"ysyx_22050612_npc exu wdata_select i0 lut", false,-1, 251,0);
        tracep->declBus(c+1545,"ysyx_22050612_npc exu wdata_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+1384+i*3,"ysyx_22050612_npc exu wdata_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1393+i*1,"ysyx_22050612_npc exu wdata_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+1396+i*2,"ysyx_22050612_npc exu wdata_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1402,"ysyx_22050612_npc exu wdata_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1404,"ysyx_22050612_npc exu wdata_select i0 hit", false,-1);
        tracep->declBus(c+1507,"ysyx_22050612_npc exu wdata_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu wmask_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu wmask_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc exu wmask_select DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+385,"ysyx_22050612_npc exu wmask_select out", false,-1, 7,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu wmask_select key", false,-1, 19,0);
        tracep->declArray(c+1405,"ysyx_22050612_npc exu wmask_select lut", false,-1, 83,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu wmask_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu wmask_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc exu wmask_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc exu wmask_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+385,"ysyx_22050612_npc exu wmask_select i0 out", false,-1, 7,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu wmask_select i0 key", false,-1, 19,0);
        tracep->declBus(c+1515,"ysyx_22050612_npc exu wmask_select i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1405,"ysyx_22050612_npc exu wmask_select i0 lut", false,-1, 83,0);
        tracep->declBus(c+1569,"ysyx_22050612_npc exu wmask_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1408+i*1,"ysyx_22050612_npc exu wmask_select i0 pair_list", true,(i+0), 27,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1411+i*1,"ysyx_22050612_npc exu wmask_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1414+i*1,"ysyx_22050612_npc exu wmask_select i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1417,"ysyx_22050612_npc exu wmask_select i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1418,"ysyx_22050612_npc exu wmask_select i0 hit", false,-1);
        tracep->declBus(c+1507,"ysyx_22050612_npc exu wmask_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu rdata_fixing NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu rdata_fixing KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu rdata_fixing DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+386,"ysyx_22050612_npc exu rdata_fixing out", false,-1, 63,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu rdata_fixing key", false,-1, 19,0);
        tracep->declArray(c+1419,"ysyx_22050612_npc exu rdata_fixing lut", false,-1, 251,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu rdata_fixing i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1525,"ysyx_22050612_npc exu rdata_fixing i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1484,"ysyx_22050612_npc exu rdata_fixing i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc exu rdata_fixing i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+386,"ysyx_22050612_npc exu rdata_fixing i0 out", false,-1, 63,0);
        tracep->declBus(c+273,"ysyx_22050612_npc exu rdata_fixing i0 key", false,-1, 19,0);
        tracep->declQuad(c+1543,"ysyx_22050612_npc exu rdata_fixing i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1419,"ysyx_22050612_npc exu rdata_fixing i0 lut", false,-1, 251,0);
        tracep->declBus(c+1545,"ysyx_22050612_npc exu rdata_fixing i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+1427+i*3,"ysyx_22050612_npc exu rdata_fixing i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1436+i*1,"ysyx_22050612_npc exu rdata_fixing i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+1439+i*2,"ysyx_22050612_npc exu rdata_fixing i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1445,"ysyx_22050612_npc exu rdata_fixing i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1447,"ysyx_22050612_npc exu rdata_fixing i0 hit", false,-1);
        tracep->declBus(c+1507,"ysyx_22050612_npc exu rdata_fixing i0 i", false,-1, 31,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc exu rdata_1byte_fix NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu rdata_1byte_fix KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc exu rdata_1byte_fix DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+388,"ysyx_22050612_npc exu rdata_1byte_fix out", false,-1, 7,0);
        tracep->declBus(c+1448,"ysyx_22050612_npc exu rdata_1byte_fix key", false,-1, 2,0);
        tracep->declArray(c+1449,"ysyx_22050612_npc exu rdata_1byte_fix lut", false,-1, 87,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc exu rdata_1byte_fix i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1502,"ysyx_22050612_npc exu rdata_1byte_fix i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1508,"ysyx_22050612_npc exu rdata_1byte_fix i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1498,"ysyx_22050612_npc exu rdata_1byte_fix i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+388,"ysyx_22050612_npc exu rdata_1byte_fix i0 out", false,-1, 7,0);
        tracep->declBus(c+1448,"ysyx_22050612_npc exu rdata_1byte_fix i0 key", false,-1, 2,0);
        tracep->declBus(c+1515,"ysyx_22050612_npc exu rdata_1byte_fix i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1449,"ysyx_22050612_npc exu rdata_1byte_fix i0 lut", false,-1, 87,0);
        tracep->declBus(c+1577,"ysyx_22050612_npc exu rdata_1byte_fix i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1452+i*1,"ysyx_22050612_npc exu rdata_1byte_fix i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1460+i*1,"ysyx_22050612_npc exu rdata_1byte_fix i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1468+i*1,"ysyx_22050612_npc exu rdata_1byte_fix i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1476,"ysyx_22050612_npc exu rdata_1byte_fix i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1477,"ysyx_22050612_npc exu rdata_1byte_fix i0 hit", false,-1);
        tracep->declBus(c+1573,"ysyx_22050612_npc exu rdata_1byte_fix i0 i", false,-1, 31,0);
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

extern const VlWide<14>/*447:0*/ Vysyx_22050612_npc__ConstPool__CONST_8db3844d_0;
extern const VlWide<21>/*671:0*/ Vysyx_22050612_npc__ConstPool__CONST_3b07a837_0;

void Vysyx_22050612_npc___024root__traceFullSub0(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<7>/*223:0*/ __Vtemp2233;
    VlWide<6>/*191:0*/ __Vtemp2234;
    VlWide<3>/*95:0*/ __Vtemp2235;
    VlWide<3>/*95:0*/ __Vtemp2236;
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
        tracep->fullIData(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list[1]),18);
        tracep->fullSData(oldp+72,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[0]),16);
        tracep->fullSData(oldp+73,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[1]),16);
        tracep->fullCData(oldp+74,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[1]),2);
        tracep->fullIData(oldp+76,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0]),21);
        tracep->fullIData(oldp+77,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[1]),21);
        tracep->fullIData(oldp+78,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[2]),21);
        tracep->fullIData(oldp+79,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[3]),21);
        tracep->fullIData(oldp+80,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[4]),21);
        tracep->fullIData(oldp+81,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[5]),21);
        tracep->fullIData(oldp+82,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[6]),21);
        tracep->fullIData(oldp+83,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[7]),21);
        tracep->fullIData(oldp+84,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[8]),21);
        tracep->fullIData(oldp+85,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[9]),21);
        tracep->fullIData(oldp+86,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[10]),21);
        tracep->fullIData(oldp+87,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[11]),21);
        tracep->fullIData(oldp+88,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[12]),21);
        tracep->fullIData(oldp+89,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[13]),21);
        tracep->fullIData(oldp+90,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[14]),21);
        tracep->fullIData(oldp+91,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[15]),21);
        tracep->fullIData(oldp+92,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[16]),21);
        tracep->fullIData(oldp+93,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[17]),21);
        tracep->fullIData(oldp+94,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[18]),21);
        tracep->fullIData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[19]),21);
        tracep->fullIData(oldp+96,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[20]),21);
        tracep->fullIData(oldp+97,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+98,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+99,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+100,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+101,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+102,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+103,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+104,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+105,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+106,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+107,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+108,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[11]),20);
        tracep->fullIData(oldp+109,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[12]),20);
        tracep->fullIData(oldp+110,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[13]),20);
        tracep->fullIData(oldp+111,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[14]),20);
        tracep->fullIData(oldp+112,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[15]),20);
        tracep->fullIData(oldp+113,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[16]),20);
        tracep->fullIData(oldp+114,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[17]),20);
        tracep->fullIData(oldp+115,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[18]),20);
        tracep->fullIData(oldp+116,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[19]),20);
        tracep->fullIData(oldp+117,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[20]),20);
        tracep->fullBit(oldp+118,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+119,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+120,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[2]));
        tracep->fullBit(oldp+121,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[3]));
        tracep->fullBit(oldp+122,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[4]));
        tracep->fullBit(oldp+123,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[5]));
        tracep->fullBit(oldp+124,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[6]));
        tracep->fullBit(oldp+125,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[7]));
        tracep->fullBit(oldp+126,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[8]));
        tracep->fullBit(oldp+127,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[9]));
        tracep->fullBit(oldp+128,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[10]));
        tracep->fullBit(oldp+129,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[11]));
        tracep->fullBit(oldp+130,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[12]));
        tracep->fullBit(oldp+131,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[13]));
        tracep->fullBit(oldp+132,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[14]));
        tracep->fullBit(oldp+133,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[15]));
        tracep->fullBit(oldp+134,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[16]));
        tracep->fullBit(oldp+135,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[17]));
        tracep->fullBit(oldp+136,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[18]));
        tracep->fullBit(oldp+137,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[19]));
        tracep->fullBit(oldp+138,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[20]));
        tracep->fullIData(oldp+139,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0]),28);
        tracep->fullIData(oldp+140,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[1]),28);
        tracep->fullIData(oldp+141,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[2]),28);
        tracep->fullIData(oldp+142,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[3]),28);
        tracep->fullIData(oldp+143,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[4]),28);
        tracep->fullIData(oldp+144,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[5]),28);
        tracep->fullIData(oldp+145,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[6]),28);
        tracep->fullIData(oldp+146,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[7]),28);
        tracep->fullIData(oldp+147,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[8]),28);
        tracep->fullIData(oldp+148,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[9]),28);
        tracep->fullIData(oldp+149,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[10]),28);
        tracep->fullIData(oldp+150,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[11]),28);
        tracep->fullIData(oldp+151,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[12]),28);
        tracep->fullIData(oldp+152,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[13]),28);
        tracep->fullIData(oldp+153,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[14]),28);
        tracep->fullIData(oldp+154,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[15]),28);
        tracep->fullIData(oldp+155,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[16]),28);
        tracep->fullIData(oldp+156,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[17]),28);
        tracep->fullIData(oldp+157,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[18]),28);
        tracep->fullIData(oldp+158,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[19]),28);
        tracep->fullIData(oldp+159,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[20]),28);
        tracep->fullIData(oldp+160,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[21]),28);
        tracep->fullIData(oldp+161,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[22]),28);
        tracep->fullIData(oldp+162,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[23]),28);
        tracep->fullIData(oldp+163,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+164,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+165,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+166,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+167,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+168,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+169,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+170,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+171,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+172,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+173,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+174,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[11]),20);
        tracep->fullIData(oldp+175,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[12]),20);
        tracep->fullIData(oldp+176,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[13]),20);
        tracep->fullIData(oldp+177,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[14]),20);
        tracep->fullIData(oldp+178,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[15]),20);
        tracep->fullIData(oldp+179,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[16]),20);
        tracep->fullIData(oldp+180,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[17]),20);
        tracep->fullIData(oldp+181,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[18]),20);
        tracep->fullIData(oldp+182,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[19]),20);
        tracep->fullIData(oldp+183,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[20]),20);
        tracep->fullIData(oldp+184,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[21]),20);
        tracep->fullIData(oldp+185,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[22]),20);
        tracep->fullIData(oldp+186,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[23]),20);
        tracep->fullCData(oldp+187,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+188,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+189,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+190,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+191,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+192,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+193,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+194,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+195,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[8]),8);
        tracep->fullCData(oldp+196,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[9]),8);
        tracep->fullCData(oldp+197,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[10]),8);
        tracep->fullCData(oldp+198,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[11]),8);
        tracep->fullCData(oldp+199,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[12]),8);
        tracep->fullCData(oldp+200,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[13]),8);
        tracep->fullCData(oldp+201,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[14]),8);
        tracep->fullCData(oldp+202,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[15]),8);
        tracep->fullCData(oldp+203,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[16]),8);
        tracep->fullCData(oldp+204,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[17]),8);
        tracep->fullCData(oldp+205,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[18]),8);
        tracep->fullCData(oldp+206,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[19]),8);
        tracep->fullCData(oldp+207,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[20]),8);
        tracep->fullCData(oldp+208,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[21]),8);
        tracep->fullCData(oldp+209,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[22]),8);
        tracep->fullCData(oldp+210,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[23]),8);
        tracep->fullSData(oldp+211,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+212,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+213,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+214,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+215,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+216,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+217,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullSData(oldp+218,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[7]),11);
        tracep->fullCData(oldp+219,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+220,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+221,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+222,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+223,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+224,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+225,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+226,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[7]),3);
        tracep->fullCData(oldp+227,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+228,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+229,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+230,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+231,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+232,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+233,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+234,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[7]),8);
        tracep->fullSData(oldp+235,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+236,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+237,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+238,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+239,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+240,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+241,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullCData(oldp+242,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+243,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+244,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+245,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+246,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+247,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+248,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+249,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+250,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+251,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+252,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+253,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+254,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+255,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[6]),8);
        tracep->fullIData(oldp+256,(vlSelf->ysyx_22050612_npc__DOT__inst),32);
        tracep->fullQData(oldp+257,(vlSelf->ysyx_22050612_npc__DOT__dnpc),64);
        tracep->fullQData(oldp+259,(vlSelf->ysyx_22050612_npc__DOT__imm_I),64);
        tracep->fullQData(oldp+261,(vlSelf->ysyx_22050612_npc__DOT__imm_U),64);
        tracep->fullQData(oldp+263,(((vlSelf->ysyx_22050612_npc__DOT__inst 
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
        tracep->fullQData(oldp+265,(((vlSelf->ysyx_22050612_npc__DOT__inst 
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
        tracep->fullQData(oldp+267,(vlSelf->ysyx_22050612_npc__DOT__imm_S),64);
        tracep->fullCData(oldp+269,((0x3fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0x14U))),6);
        tracep->fullCData(oldp+270,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+271,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+272,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+273,(vlSelf->ysyx_22050612_npc__DOT__opcode),20);
        tracep->fullQData(oldp+274,(vlSelf->ysyx_22050612_npc__DOT__ifu__DOT__inst_mix),64);
        tracep->fullCData(oldp+276,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode0____pinNumber1),7);
        tracep->fullSData(oldp+277,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2),10);
        tracep->fullCData(oldp+278,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out),7);
        tracep->fullBit(oldp+279,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+280,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode1____pinNumber1),2);
        tracep->fullCData(oldp+281,((0x7fU & vlSelf->ysyx_22050612_npc__DOT__inst)),7);
        tracep->fullCData(oldp+282,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+283,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+284,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode2____pinNumber1),8);
        tracep->fullIData(oldp+285,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2),17);
        tracep->fullCData(oldp+286,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+287,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+288,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode3____pinNumber1),2);
        tracep->fullSData(oldp+289,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2),16);
        tracep->fullCData(oldp+290,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+291,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+292,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1),64);
        tracep->fullQData(oldp+294,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2),64);
        tracep->fullQData(oldp+296,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_reg),64);
        tracep->fullBit(oldp+298,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
        tracep->fullBit(oldp+299,(((0U != (0x1fU & 
                                           (vlSelf->ysyx_22050612_npc__DOT__inst 
                                            >> 7U))) 
                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen))));
        tracep->fullQData(oldp+300,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
        tracep->fullQData(oldp+302,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
        tracep->fullQData(oldp+304,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
        tracep->fullQData(oldp+306,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
        tracep->fullQData(oldp+308,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
        tracep->fullQData(oldp+310,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
        tracep->fullQData(oldp+312,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
        tracep->fullQData(oldp+314,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
        tracep->fullQData(oldp+316,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
        tracep->fullQData(oldp+318,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
        tracep->fullQData(oldp+320,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
        tracep->fullQData(oldp+322,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
        tracep->fullQData(oldp+324,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
        tracep->fullQData(oldp+326,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
        tracep->fullQData(oldp+328,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
        tracep->fullQData(oldp+330,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
        tracep->fullQData(oldp+332,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
        tracep->fullQData(oldp+334,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
        tracep->fullQData(oldp+336,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
        tracep->fullQData(oldp+338,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
        tracep->fullQData(oldp+340,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
        tracep->fullQData(oldp+342,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
        tracep->fullQData(oldp+344,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
        tracep->fullQData(oldp+346,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
        tracep->fullQData(oldp+348,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
        tracep->fullQData(oldp+350,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
        tracep->fullQData(oldp+352,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
        tracep->fullQData(oldp+354,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
        tracep->fullQData(oldp+356,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
        tracep->fullQData(oldp+358,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
        tracep->fullQData(oldp+360,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
        tracep->fullQData(oldp+362,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
        tracep->fullCData(oldp+364,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode),8);
        tracep->fullQData(oldp+365,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a),64);
        tracep->fullQData(oldp+367,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b),64);
        tracep->fullQData(oldp+369,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0),64);
        tracep->fullCData(oldp+371,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte),8);
        tracep->fullQData(oldp+372,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte),64);
        tracep->fullCData(oldp+374,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte),8);
        tracep->fullQData(oldp+375,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte),64);
        tracep->fullQData(oldp+377,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr),64);
        tracep->fullQData(oldp+379,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata),64);
        tracep->fullQData(oldp+381,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr),64);
        tracep->fullQData(oldp+383,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
        tracep->fullCData(oldp+385,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask),8);
        tracep->fullQData(oldp+386,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix),64);
        tracep->fullCData(oldp+388,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte),8);
        tracep->fullQData(oldp+389,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[0]),64);
        tracep->fullQData(oldp+391,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[1]),64);
        tracep->fullQData(oldp+393,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[2]),64);
        tracep->fullQData(oldp+395,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[3]),64);
        tracep->fullQData(oldp+397,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[4]),64);
        tracep->fullQData(oldp+399,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[5]),64);
        tracep->fullQData(oldp+401,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[6]),64);
        tracep->fullQData(oldp+403,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[7]),64);
        tracep->fullQData(oldp+405,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[8]),64);
        tracep->fullQData(oldp+407,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[9]),64);
        tracep->fullQData(oldp+409,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[10]),64);
        tracep->fullQData(oldp+411,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[11]),64);
        tracep->fullQData(oldp+413,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[12]),64);
        tracep->fullQData(oldp+415,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[13]),64);
        tracep->fullQData(oldp+417,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[14]),64);
        tracep->fullQData(oldp+419,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[15]),64);
        tracep->fullQData(oldp+421,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[16]),64);
        tracep->fullQData(oldp+423,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[17]),64);
        tracep->fullQData(oldp+425,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[18]),64);
        tracep->fullQData(oldp+427,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[19]),64);
        tracep->fullQData(oldp+429,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[20]),64);
        tracep->fullQData(oldp+431,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[21]),64);
        tracep->fullQData(oldp+433,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[22]),64);
        tracep->fullQData(oldp+435,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[23]),64);
        tracep->fullQData(oldp+437,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[24]),64);
        tracep->fullQData(oldp+439,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[25]),64);
        tracep->fullQData(oldp+441,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[26]),64);
        tracep->fullQData(oldp+443,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[27]),64);
        tracep->fullQData(oldp+445,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[28]),64);
        tracep->fullQData(oldp+447,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[29]),64);
        tracep->fullQData(oldp+449,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[30]),64);
        tracep->fullQData(oldp+451,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[31]),64);
        tracep->fullBit(oldp+453,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+454,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+455,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3),1764);
        tracep->fullWData(oldp+511,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+514,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+517,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+520,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+523,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+526,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+529,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullWData(oldp+532,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[7]),84);
        tracep->fullWData(oldp+535,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[8]),84);
        tracep->fullWData(oldp+538,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[9]),84);
        tracep->fullWData(oldp+541,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[10]),84);
        tracep->fullWData(oldp+544,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[11]),84);
        tracep->fullWData(oldp+547,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[12]),84);
        tracep->fullWData(oldp+550,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[13]),84);
        tracep->fullWData(oldp+553,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[14]),84);
        tracep->fullWData(oldp+556,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[15]),84);
        tracep->fullWData(oldp+559,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[16]),84);
        tracep->fullWData(oldp+562,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[17]),84);
        tracep->fullWData(oldp+565,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[18]),84);
        tracep->fullWData(oldp+568,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[19]),84);
        tracep->fullWData(oldp+571,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[20]),84);
        tracep->fullIData(oldp+574,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+575,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+576,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+577,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+578,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+579,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+580,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+581,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+582,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+583,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+584,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+585,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[11]),20);
        tracep->fullIData(oldp+586,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[12]),20);
        tracep->fullIData(oldp+587,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[13]),20);
        tracep->fullIData(oldp+588,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[14]),20);
        tracep->fullIData(oldp+589,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[15]),20);
        tracep->fullIData(oldp+590,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[16]),20);
        tracep->fullIData(oldp+591,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[17]),20);
        tracep->fullIData(oldp+592,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[18]),20);
        tracep->fullIData(oldp+593,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[19]),20);
        tracep->fullIData(oldp+594,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[20]),20);
        tracep->fullQData(oldp+595,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+597,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+599,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+601,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+603,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+605,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+607,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+609,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+611,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+613,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+615,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+617,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+619,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+621,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+623,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+625,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+627,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+629,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+631,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+633,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+635,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+637,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+639,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+640,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4),252);
        tracep->fullWData(oldp+648,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+651,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+654,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullIData(oldp+657,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+658,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+659,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[2]),20);
        tracep->fullQData(oldp+660,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+662,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+664,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+666,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+668,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+669,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3),2016);
        tracep->fullWData(oldp+732,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+735,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+738,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+741,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+744,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+747,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+750,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullWData(oldp+753,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[7]),84);
        tracep->fullWData(oldp+756,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[8]),84);
        tracep->fullWData(oldp+759,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[9]),84);
        tracep->fullWData(oldp+762,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[10]),84);
        tracep->fullWData(oldp+765,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[11]),84);
        tracep->fullWData(oldp+768,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[12]),84);
        tracep->fullWData(oldp+771,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[13]),84);
        tracep->fullWData(oldp+774,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[14]),84);
        tracep->fullWData(oldp+777,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[15]),84);
        tracep->fullWData(oldp+780,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[16]),84);
        tracep->fullWData(oldp+783,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[17]),84);
        tracep->fullWData(oldp+786,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[18]),84);
        tracep->fullWData(oldp+789,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[19]),84);
        tracep->fullWData(oldp+792,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[20]),84);
        tracep->fullWData(oldp+795,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[21]),84);
        tracep->fullWData(oldp+798,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[22]),84);
        tracep->fullWData(oldp+801,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[23]),84);
        tracep->fullIData(oldp+804,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+805,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+806,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+807,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+808,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+809,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+810,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+811,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+812,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+813,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+814,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+815,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[11]),20);
        tracep->fullIData(oldp+816,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[12]),20);
        tracep->fullIData(oldp+817,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[13]),20);
        tracep->fullIData(oldp+818,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[14]),20);
        tracep->fullIData(oldp+819,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[15]),20);
        tracep->fullIData(oldp+820,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[16]),20);
        tracep->fullIData(oldp+821,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[17]),20);
        tracep->fullIData(oldp+822,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[18]),20);
        tracep->fullIData(oldp+823,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[19]),20);
        tracep->fullIData(oldp+824,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[20]),20);
        tracep->fullIData(oldp+825,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[21]),20);
        tracep->fullIData(oldp+826,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[22]),20);
        tracep->fullIData(oldp+827,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[23]),20);
        tracep->fullQData(oldp+828,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+830,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+832,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+834,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+836,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+838,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+840,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+842,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+844,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+846,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+848,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+850,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+852,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+854,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+856,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+858,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+860,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+862,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+864,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+866,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+868,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+870,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+872,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+874,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+876,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+878,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+879,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3),2016);
        tracep->fullWData(oldp+942,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+945,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+948,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+951,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+954,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+957,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+960,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullWData(oldp+963,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[7]),84);
        tracep->fullWData(oldp+966,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[8]),84);
        tracep->fullWData(oldp+969,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[9]),84);
        tracep->fullWData(oldp+972,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[10]),84);
        tracep->fullWData(oldp+975,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[11]),84);
        tracep->fullWData(oldp+978,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[12]),84);
        tracep->fullWData(oldp+981,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[13]),84);
        tracep->fullWData(oldp+984,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[14]),84);
        tracep->fullWData(oldp+987,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[15]),84);
        tracep->fullWData(oldp+990,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[16]),84);
        tracep->fullWData(oldp+993,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[17]),84);
        tracep->fullWData(oldp+996,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[18]),84);
        tracep->fullWData(oldp+999,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[19]),84);
        tracep->fullWData(oldp+1002,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[20]),84);
        tracep->fullWData(oldp+1005,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[21]),84);
        tracep->fullWData(oldp+1008,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[22]),84);
        tracep->fullWData(oldp+1011,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[23]),84);
        tracep->fullIData(oldp+1014,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1015,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1016,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+1017,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+1018,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+1019,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+1020,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+1021,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+1022,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+1023,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+1024,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+1025,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[11]),20);
        tracep->fullIData(oldp+1026,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[12]),20);
        tracep->fullIData(oldp+1027,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[13]),20);
        tracep->fullIData(oldp+1028,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[14]),20);
        tracep->fullIData(oldp+1029,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[15]),20);
        tracep->fullIData(oldp+1030,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[16]),20);
        tracep->fullIData(oldp+1031,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[17]),20);
        tracep->fullIData(oldp+1032,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[18]),20);
        tracep->fullIData(oldp+1033,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[19]),20);
        tracep->fullIData(oldp+1034,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[20]),20);
        tracep->fullIData(oldp+1035,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[21]),20);
        tracep->fullIData(oldp+1036,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[22]),20);
        tracep->fullIData(oldp+1037,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[23]),20);
        tracep->fullQData(oldp+1038,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1040,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1042,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1044,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1046,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1048,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1050,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1052,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+1054,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+1056,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+1058,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+1060,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+1062,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+1064,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+1066,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+1068,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+1070,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+1072,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+1074,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+1076,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+1078,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+1080,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+1082,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+1084,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+1086,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1088,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1089,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1090,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+1091,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result),64);
        tracep->fullQData(oldp+1093,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                      & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+1095,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                      | vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+1097,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                      ^ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+1099,(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                       < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                       ? 1ULL : 0ULL)),64);
        tracep->fullQData(oldp+1101,(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+1103,(VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+1105,(((1U == (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode))
                                       ? (1ULL + (~ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b))
                                       : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullWData(oldp+1107,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3),648);
        tracep->fullWData(oldp+1128,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[0]),72);
        tracep->fullWData(oldp+1131,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[1]),72);
        tracep->fullWData(oldp+1134,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[2]),72);
        tracep->fullWData(oldp+1137,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[3]),72);
        tracep->fullWData(oldp+1140,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[4]),72);
        tracep->fullWData(oldp+1143,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[5]),72);
        tracep->fullWData(oldp+1146,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[6]),72);
        tracep->fullWData(oldp+1149,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[7]),72);
        tracep->fullWData(oldp+1152,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[8]),72);
        tracep->fullCData(oldp+1155,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[0]),8);
        tracep->fullCData(oldp+1156,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[1]),8);
        tracep->fullCData(oldp+1157,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[2]),8);
        tracep->fullCData(oldp+1158,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[3]),8);
        tracep->fullCData(oldp+1159,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[4]),8);
        tracep->fullCData(oldp+1160,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[5]),8);
        tracep->fullCData(oldp+1161,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[6]),8);
        tracep->fullCData(oldp+1162,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[7]),8);
        tracep->fullCData(oldp+1163,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[8]),8);
        tracep->fullQData(oldp+1164,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1166,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1168,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1170,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1172,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1174,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1176,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1178,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+1180,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+1182,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1184,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1185,((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))),3);
        tracep->fullWData(oldp+1186,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3),536);
        tracep->fullWData(oldp+1203,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+1206,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+1209,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+1212,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+1215,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+1218,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[5]),67);
        tracep->fullWData(oldp+1221,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[6]),67);
        tracep->fullWData(oldp+1224,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[7]),67);
        tracep->fullCData(oldp+1227,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1228,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1229,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1230,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+1231,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+1232,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+1233,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+1234,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[7]),3);
        tracep->fullQData(oldp+1235,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1237,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1239,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1241,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1243,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1245,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1247,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1249,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+1251,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1253,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1254,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1255,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1256,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3),469);
        tracep->fullWData(oldp+1271,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+1274,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+1277,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+1280,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+1283,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+1286,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[5]),67);
        tracep->fullWData(oldp+1289,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[6]),67);
        tracep->fullCData(oldp+1292,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1293,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1294,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1295,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+1296,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+1297,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+1298,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullQData(oldp+1299,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1301,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1303,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1305,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1307,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1309,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1311,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1313,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1315,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1316,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1317,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1318,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3),252);
        tracep->fullWData(oldp+1326,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1329,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1332,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullIData(oldp+1335,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1336,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1337,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullQData(oldp+1338,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1340,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1342,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1344,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1346,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1347,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3),252);
        tracep->fullWData(oldp+1355,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1358,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1361,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullIData(oldp+1364,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1365,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1366,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullQData(oldp+1367,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1369,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1371,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1373,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1375,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1376,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3),252);
        tracep->fullWData(oldp+1384,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1387,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1390,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullIData(oldp+1393,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1394,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1395,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullQData(oldp+1396,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1398,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1400,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1402,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1404,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1405,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3),84);
        tracep->fullIData(oldp+1408,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[0]),28);
        tracep->fullIData(oldp+1409,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[1]),28);
        tracep->fullIData(oldp+1410,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[2]),28);
        tracep->fullIData(oldp+1411,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1412,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1413,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullCData(oldp+1414,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+1415,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+1416,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+1417,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1418,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1419,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3),252);
        tracep->fullWData(oldp+1427,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1430,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1433,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullIData(oldp+1436,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1437,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1438,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[2]),20);
        tracep->fullQData(oldp+1439,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1441,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1443,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1445,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1447,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1448,((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr))),3);
        tracep->fullWData(oldp+1449,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_1byte_fix____pinNumber3),88);
        tracep->fullSData(oldp+1452,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+1453,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+1454,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+1455,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+1456,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+1457,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+1458,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullSData(oldp+1459,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[7]),11);
        tracep->fullCData(oldp+1460,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1461,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1462,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1463,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+1464,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+1465,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+1466,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+1467,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[7]),3);
        tracep->fullCData(oldp+1468,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+1469,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+1470,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+1471,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+1472,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+1473,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+1474,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+1475,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+1476,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1477,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+1478,(vlSelf->clk));
        tracep->fullBit(oldp+1479,(vlSelf->rst));
        tracep->fullQData(oldp+1480,(vlSelf->pc),64);
        tracep->fullQData(oldp+1482,((4ULL + vlSelf->pc)),64);
        tracep->fullIData(oldp+1484,(0x40U),32);
        tracep->fullQData(oldp+1485,(0x80000000ULL),64);
        tracep->fullBit(oldp+1487,(1U));
        tracep->fullIData(oldp+1488,(0xdU),32);
        tracep->fullIData(oldp+1489,(0xaU),32);
        tracep->fullIData(oldp+1490,(7U),32);
        __Vtemp2233[0U] = 0xa3560dafU;
        __Vtemp2233[1U] = 0x4cc306a9U;
        __Vtemp2233[2U] = 0x32b0996eU;
        __Vtemp2233[3U] = 0xc88264d9U;
        __Vtemp2233[4U] = 0x1c119028U;
        __Vtemp2233[5U] = 0x32063603U;
        __Vtemp2233[6U] = 0x338438cU;
        tracep->fullWData(oldp+1491,(__Vtemp2233),221);
        tracep->fullIData(oldp+1498,(0U),32);
        tracep->fullCData(oldp+1499,(0U),7);
        tracep->fullIData(oldp+1500,(0x11U),32);
        tracep->fullIData(oldp+1501,(0xdU),32);
        tracep->fullIData(oldp+1502,(3U),32);
        tracep->fullIData(oldp+1503,(2U),32);
        tracep->fullIData(oldp+1504,(0x374bdbfU),27);
        tracep->fullCData(oldp+1505,(0U),2);
        tracep->fullIData(oldp+1506,(9U),32);
        tracep->fullIData(oldp+1507,(3U),32);
        tracep->fullIData(oldp+1508,(8U),32);
        __Vtemp2234[0U] = 0x2e00bb19U;
        __Vtemp2234[1U] = 0xcc4c0076U;
        __Vtemp2234[2U] = 0x1998900eU;
        __Vtemp2234[3U] = 0xa01b3080U;
        __Vtemp2234[4U] = 0xc1100660U;
        __Vtemp2234[5U] = 0xcU;
        tracep->fullWData(oldp+1509,(__Vtemp2234),175);
        tracep->fullCData(oldp+1515,(0U),8);
        tracep->fullIData(oldp+1516,(0x19U),32);
        tracep->fullIData(oldp+1517,(7U),32);
        tracep->fullIData(oldp+1518,(0x10U),32);
        tracep->fullQData(oldp+1519,(0x9350a4fULL),36);
        tracep->fullIData(oldp+1521,(0x12U),32);
        tracep->fullIData(oldp+1522,(2U),32);
        tracep->fullIData(oldp+1523,(5U),32);
        tracep->fullIData(oldp+1524,(0x15U),32);
        tracep->fullIData(oldp+1525,(0x14U),32);
        tracep->fullIData(oldp+1526,(1U),32);
        tracep->fullWData(oldp+1527,(Vysyx_22050612_npc__ConstPool__CONST_8db3844d_0),441);
        tracep->fullBit(oldp+1541,(0U));
        tracep->fullIData(oldp+1542,(0x15U),32);
        tracep->fullQData(oldp+1543,(0ULL),64);
        tracep->fullIData(oldp+1545,(0x54U),32);
        tracep->fullIData(oldp+1546,(0x18U),32);
        tracep->fullIData(oldp+1547,(0x18U),32);
        tracep->fullWData(oldp+1548,(Vysyx_22050612_npc__ConstPool__CONST_3b07a837_0),672);
        tracep->fullIData(oldp+1569,(0x1cU),32);
        tracep->fullIData(oldp+1570,(0x48U),32);
        tracep->fullIData(oldp+1571,(9U),32);
        tracep->fullIData(oldp+1572,(0x43U),32);
        tracep->fullIData(oldp+1573,(8U),32);
        __Vtemp2235[0U] = 0x48320780U;
        __Vtemp2235[1U] = 0x2308821U;
        __Vtemp2235[2U] = 0x2409U;
        tracep->fullWData(oldp+1574,(__Vtemp2235),88);
        tracep->fullIData(oldp+1577,(0xbU),32);
        __Vtemp2236[0U] = 0x4698660U;
        __Vtemp2236[1U] = 0x8320c611U;
        __Vtemp2236[2U] = 0xcU;
        tracep->fullWData(oldp+1578,(__Vtemp2236),77);
    }
}
