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
        tracep->declBit(c+276,"clk", false,-1);
        tracep->declBit(c+277,"rst", false,-1);
        tracep->declBus(c+278,"inst", false,-1, 31,0);
        tracep->declQuad(c+279,"pc", false,-1, 63,0);
        tracep->declBit(c+276,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+277,"ysyx_22050612_npc rst", false,-1);
        tracep->declBus(c+278,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+279,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declQuad(c+25,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+281,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declQuad(c+27,"ysyx_22050612_npc imm_U", false,-1, 63,0);
        tracep->declQuad(c+283,"ysyx_22050612_npc imm_J", false,-1, 63,0);
        tracep->declBus(c+285,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+286,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+287,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBus(c+29,"ysyx_22050612_npc opcode", false,-1, 9,0);
        tracep->declBit(c+276,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+277,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+25,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+279,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+295,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+296,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+276,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+277,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+25,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+279,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+298,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+276,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+278,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+281,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declQuad(c+27,"ysyx_22050612_npc idu imm_U", false,-1, 63,0);
        tracep->declQuad(c+283,"ysyx_22050612_npc idu imm_J", false,-1, 63,0);
        tracep->declBus(c+285,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+286,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+287,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBus(c+29,"ysyx_22050612_npc idu opcode", false,-1, 9,0);
        tracep->declBus(c+299,"ysyx_22050612_npc idu i5 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+300,"ysyx_22050612_npc idu i5 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc idu i5 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+29,"ysyx_22050612_npc idu i5 out", false,-1, 9,0);
        tracep->declBus(c+288,"ysyx_22050612_npc idu i5 key", false,-1, 6,0);
        tracep->declArray(c+302,"ysyx_22050612_npc idu i5 lut", false,-1, 67,0);
        tracep->declBus(c+299,"ysyx_22050612_npc idu i5 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+300,"ysyx_22050612_npc idu i5 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc idu i5 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+305,"ysyx_22050612_npc idu i5 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+29,"ysyx_22050612_npc idu i5 i0 out", false,-1, 9,0);
        tracep->declBus(c+288,"ysyx_22050612_npc idu i5 i0 key", false,-1, 6,0);
        tracep->declBus(c+306,"ysyx_22050612_npc idu i5 i0 default_out", false,-1, 9,0);
        tracep->declArray(c+302,"ysyx_22050612_npc idu i5 i0 lut", false,-1, 67,0);
        tracep->declBus(c+307,"ysyx_22050612_npc idu i5 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22050612_npc idu i5 i0 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+5+i*1,"ysyx_22050612_npc idu i5 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+9+i*1,"ysyx_22050612_npc idu i5 i0 data_list", true,(i+0), 9,0);}}
        tracep->declBus(c+30,"ysyx_22050612_npc idu i5 i0 lut_out", false,-1, 9,0);
        tracep->declBit(c+31,"ysyx_22050612_npc idu i5 i0 hit", false,-1);
        tracep->declBus(c+308,"ysyx_22050612_npc idu i5 i0 i", false,-1, 31,0);
        tracep->declBit(c+276,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+281,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declQuad(c+27,"ysyx_22050612_npc exu imm_U", false,-1, 63,0);
        tracep->declQuad(c+283,"ysyx_22050612_npc exu imm_J", false,-1, 63,0);
        tracep->declBus(c+285,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+286,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+287,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBus(c+29,"ysyx_22050612_npc exu opcode", false,-1, 9,0);
        tracep->declQuad(c+279,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+25,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+289,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+291,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+32,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBit(c+34,"ysyx_22050612_npc exu wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+148+i*2,"ysyx_22050612_npc exu gpr", true,(i+0), 63,0);}}
        tracep->declQuad(c+293,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declQuad(c+35,"ysyx_22050612_npc exu addend_a", false,-1, 63,0);
        tracep->declQuad(c+37,"ysyx_22050612_npc exu addend_b", false,-1, 63,0);
        tracep->declQuad(c+39,"ysyx_22050612_npc exu sum_add0", false,-1, 63,0);
        tracep->declBus(c+309,"ysyx_22050612_npc exu cpu_gpr_group ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+295,"ysyx_22050612_npc exu cpu_gpr_group DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+276,"ysyx_22050612_npc exu cpu_gpr_group clk", false,-1);
        tracep->declQuad(c+32,"ysyx_22050612_npc exu cpu_gpr_group wdata", false,-1, 63,0);
        tracep->declBus(c+285,"ysyx_22050612_npc exu cpu_gpr_group waddr", false,-1, 4,0);
        tracep->declBit(c+34,"ysyx_22050612_npc exu cpu_gpr_group wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+212+i*2,"ysyx_22050612_npc exu cpu_gpr_group rf", true,(i+0), 63,0);}}
        tracep->declBus(c+299,"ysyx_22050612_npc exu decode0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu decode0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+310,"ysyx_22050612_npc exu decode0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+34,"ysyx_22050612_npc exu decode0 out", false,-1, 0,0);
        tracep->declBus(c+29,"ysyx_22050612_npc exu decode0 key", false,-1, 9,0);
        tracep->declQuad(c+311,"ysyx_22050612_npc exu decode0 lut", false,-1, 43,0);
        tracep->declBus(c+299,"ysyx_22050612_npc exu decode0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu decode0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+310,"ysyx_22050612_npc exu decode0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+305,"ysyx_22050612_npc exu decode0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+34,"ysyx_22050612_npc exu decode0 i0 out", false,-1, 0,0);
        tracep->declBus(c+29,"ysyx_22050612_npc exu decode0 i0 key", false,-1, 9,0);
        tracep->declBus(c+313,"ysyx_22050612_npc exu decode0 i0 default_out", false,-1, 0,0);
        tracep->declQuad(c+311,"ysyx_22050612_npc exu decode0 i0 lut", false,-1, 43,0);
        tracep->declBus(c+314,"ysyx_22050612_npc exu decode0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+13+i*1,"ysyx_22050612_npc exu decode0 i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+17+i*1,"ysyx_22050612_npc exu decode0 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+21+i*1,"ysyx_22050612_npc exu decode0 i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+41,"ysyx_22050612_npc exu decode0 i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+42,"ysyx_22050612_npc exu decode0 i0 hit", false,-1);
        tracep->declBus(c+308,"ysyx_22050612_npc exu decode0 i0 i", false,-1, 31,0);
        tracep->declBus(c+299,"ysyx_22050612_npc exu decode1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu decode1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+295,"ysyx_22050612_npc exu decode1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+32,"ysyx_22050612_npc exu decode1 out", false,-1, 63,0);
        tracep->declBus(c+29,"ysyx_22050612_npc exu decode1 key", false,-1, 9,0);
        tracep->declArray(c+43,"ysyx_22050612_npc exu decode1 lut", false,-1, 295,0);
        tracep->declBus(c+299,"ysyx_22050612_npc exu decode1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu decode1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+295,"ysyx_22050612_npc exu decode1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+305,"ysyx_22050612_npc exu decode1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+32,"ysyx_22050612_npc exu decode1 i0 out", false,-1, 63,0);
        tracep->declBus(c+29,"ysyx_22050612_npc exu decode1 i0 key", false,-1, 9,0);
        tracep->declQuad(c+315,"ysyx_22050612_npc exu decode1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+43,"ysyx_22050612_npc exu decode1 i0 lut", false,-1, 295,0);
        tracep->declBus(c+317,"ysyx_22050612_npc exu decode1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+53+i*3,"ysyx_22050612_npc exu decode1 i0 pair_list", true,(i+0), 73,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+65+i*1,"ysyx_22050612_npc exu decode1 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+69+i*2,"ysyx_22050612_npc exu decode1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+77,"ysyx_22050612_npc exu decode1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+79,"ysyx_22050612_npc exu decode1 i0 hit", false,-1);
        tracep->declBus(c+308,"ysyx_22050612_npc exu decode1 i0 i", false,-1, 31,0);
        tracep->declBus(c+310,"ysyx_22050612_npc exu cpu_pc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu cpu_pc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+295,"ysyx_22050612_npc exu cpu_pc DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+25,"ysyx_22050612_npc exu cpu_pc out", false,-1, 63,0);
        tracep->declBus(c+29,"ysyx_22050612_npc exu cpu_pc key", false,-1, 9,0);
        tracep->declQuad(c+293,"ysyx_22050612_npc exu cpu_pc default_out", false,-1, 63,0);
        tracep->declArray(c+80,"ysyx_22050612_npc exu cpu_pc lut", false,-1, 73,0);
        tracep->declBus(c+310,"ysyx_22050612_npc exu cpu_pc i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu cpu_pc i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+295,"ysyx_22050612_npc exu cpu_pc i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+310,"ysyx_22050612_npc exu cpu_pc i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+25,"ysyx_22050612_npc exu cpu_pc i0 out", false,-1, 63,0);
        tracep->declBus(c+29,"ysyx_22050612_npc exu cpu_pc i0 key", false,-1, 9,0);
        tracep->declQuad(c+293,"ysyx_22050612_npc exu cpu_pc i0 default_out", false,-1, 63,0);
        tracep->declArray(c+80,"ysyx_22050612_npc exu cpu_pc i0 lut", false,-1, 73,0);
        tracep->declBus(c+317,"ysyx_22050612_npc exu cpu_pc i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+83+i*3,"ysyx_22050612_npc exu cpu_pc i0 pair_list", true,(i+0), 73,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+86+i*1,"ysyx_22050612_npc exu cpu_pc i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+87+i*2,"ysyx_22050612_npc exu cpu_pc i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+89,"ysyx_22050612_npc exu cpu_pc i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+91,"ysyx_22050612_npc exu cpu_pc i0 hit", false,-1);
        tracep->declBus(c+318,"ysyx_22050612_npc exu cpu_pc i0 i", false,-1, 31,0);
        tracep->declBus(c+319,"ysyx_22050612_npc exu addend0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu addend0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+295,"ysyx_22050612_npc exu addend0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+35,"ysyx_22050612_npc exu addend0 out", false,-1, 63,0);
        tracep->declBus(c+29,"ysyx_22050612_npc exu addend0 key", false,-1, 9,0);
        tracep->declArray(c+92,"ysyx_22050612_npc exu addend0 lut", false,-1, 221,0);
        tracep->declBus(c+319,"ysyx_22050612_npc exu addend0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu addend0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+295,"ysyx_22050612_npc exu addend0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+305,"ysyx_22050612_npc exu addend0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+35,"ysyx_22050612_npc exu addend0 i0 out", false,-1, 63,0);
        tracep->declBus(c+29,"ysyx_22050612_npc exu addend0 i0 key", false,-1, 9,0);
        tracep->declQuad(c+315,"ysyx_22050612_npc exu addend0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+92,"ysyx_22050612_npc exu addend0 i0 lut", false,-1, 221,0);
        tracep->declBus(c+317,"ysyx_22050612_npc exu addend0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+99+i*3,"ysyx_22050612_npc exu addend0 i0 pair_list", true,(i+0), 73,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+108+i*1,"ysyx_22050612_npc exu addend0 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+111+i*2,"ysyx_22050612_npc exu addend0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+117,"ysyx_22050612_npc exu addend0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+119,"ysyx_22050612_npc exu addend0 i0 hit", false,-1);
        tracep->declBus(c+320,"ysyx_22050612_npc exu addend0 i0 i", false,-1, 31,0);
        tracep->declBus(c+319,"ysyx_22050612_npc exu addend1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu addend1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+295,"ysyx_22050612_npc exu addend1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+37,"ysyx_22050612_npc exu addend1 out", false,-1, 63,0);
        tracep->declBus(c+29,"ysyx_22050612_npc exu addend1 key", false,-1, 9,0);
        tracep->declArray(c+120,"ysyx_22050612_npc exu addend1 lut", false,-1, 221,0);
        tracep->declBus(c+319,"ysyx_22050612_npc exu addend1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu addend1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+295,"ysyx_22050612_npc exu addend1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+305,"ysyx_22050612_npc exu addend1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+37,"ysyx_22050612_npc exu addend1 i0 out", false,-1, 63,0);
        tracep->declBus(c+29,"ysyx_22050612_npc exu addend1 i0 key", false,-1, 9,0);
        tracep->declQuad(c+315,"ysyx_22050612_npc exu addend1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+120,"ysyx_22050612_npc exu addend1 i0 lut", false,-1, 221,0);
        tracep->declBus(c+317,"ysyx_22050612_npc exu addend1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+127+i*3,"ysyx_22050612_npc exu addend1 i0 pair_list", true,(i+0), 73,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+136+i*1,"ysyx_22050612_npc exu addend1 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+139+i*2,"ysyx_22050612_npc exu addend1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+145,"ysyx_22050612_npc exu addend1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+147,"ysyx_22050612_npc exu addend1 i0 hit", false,-1);
        tracep->declBus(c+320,"ysyx_22050612_npc exu addend1 i0 i", false,-1, 31,0);
        tracep->declBus(c+295,"ysyx_22050612_npc exu add0 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+35,"ysyx_22050612_npc exu add0 x", false,-1, 63,0);
        tracep->declQuad(c+37,"ysyx_22050612_npc exu add0 y", false,-1, 63,0);
        tracep->declQuad(c+39,"ysyx_22050612_npc exu add0 z", false,-1, 63,0);
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

void Vysyx_22050612_npc___024root__traceFullSub0(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp193;
    VlWide<3>/*95:0*/ __Vtemp194;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list[0]),17);
        tracep->fullIData(oldp+2,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list[1]),17);
        tracep->fullIData(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list[2]),17);
        tracep->fullIData(oldp+4,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__pair_list[3]),17);
        tracep->fullCData(oldp+5,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+6,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+7,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+8,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__key_list[3]),7);
        tracep->fullSData(oldp+9,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__data_list[0]),10);
        tracep->fullSData(oldp+10,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__data_list[1]),10);
        tracep->fullSData(oldp+11,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__data_list[2]),10);
        tracep->fullSData(oldp+12,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__data_list[3]),10);
        tracep->fullSData(oldp+13,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+14,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+15,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+16,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+17,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+18,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+19,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__key_list[2]),10);
        tracep->fullSData(oldp+20,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__key_list[3]),10);
        tracep->fullBit(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+22,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__data_list[2]));
        tracep->fullBit(oldp+24,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__data_list[3]));
        tracep->fullQData(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__dnpc),64);
        tracep->fullQData(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__imm_U),64);
        tracep->fullSData(oldp+29,(vlSelf->ysyx_22050612_npc__DOT__opcode),10);
        tracep->fullSData(oldp+30,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__lut_out),10);
        tracep->fullBit(oldp+31,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__i5__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+32,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
        tracep->fullBit(oldp+34,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
        tracep->fullQData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_a),64);
        tracep->fullQData(oldp+37,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_b),64);
        tracep->fullQData(oldp+39,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__sum_add0),64);
        tracep->fullBit(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+42,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode0__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+43,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__decode1____pinNumber3),296);
        tracep->fullWData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__pair_list[0]),74);
        tracep->fullWData(oldp+56,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__pair_list[1]),74);
        tracep->fullWData(oldp+59,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__pair_list[2]),74);
        tracep->fullWData(oldp+62,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__pair_list[3]),74);
        tracep->fullSData(oldp+65,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+66,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+67,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__key_list[2]),10);
        tracep->fullSData(oldp+68,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__key_list[3]),10);
        tracep->fullQData(oldp+69,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+73,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+79,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__decode1__DOT__i0__DOT__hit));
        __Vtemp193[0U] = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__sum_add0);
        __Vtemp193[1U] = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__sum_add0 
                                  >> 0x20U));
        __Vtemp193[2U] = 3U;
        tracep->fullWData(oldp+80,(__Vtemp193),74);
        tracep->fullWData(oldp+83,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0]),74);
        tracep->fullSData(oldp+86,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[0]),10);
        tracep->fullQData(oldp+87,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+91,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+92,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__addend0____pinNumber3),222);
        tracep->fullWData(oldp+99,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[0]),74);
        tracep->fullWData(oldp+102,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[1]),74);
        tracep->fullWData(oldp+105,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[2]),74);
        tracep->fullSData(oldp+108,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+109,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+110,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[2]),10);
        tracep->fullQData(oldp+111,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+113,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+115,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+117,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+119,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+120,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__addend1____pinNumber3),222);
        tracep->fullWData(oldp+127,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[0]),74);
        tracep->fullWData(oldp+130,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[1]),74);
        tracep->fullWData(oldp+133,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[2]),74);
        tracep->fullSData(oldp+136,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+137,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+138,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[2]),10);
        tracep->fullQData(oldp+139,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+141,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+143,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+145,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+147,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+148,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
        tracep->fullQData(oldp+150,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
        tracep->fullQData(oldp+152,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
        tracep->fullQData(oldp+154,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
        tracep->fullQData(oldp+156,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
        tracep->fullQData(oldp+158,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
        tracep->fullQData(oldp+160,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
        tracep->fullQData(oldp+162,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
        tracep->fullQData(oldp+164,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
        tracep->fullQData(oldp+166,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
        tracep->fullQData(oldp+168,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
        tracep->fullQData(oldp+170,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
        tracep->fullQData(oldp+172,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
        tracep->fullQData(oldp+174,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
        tracep->fullQData(oldp+176,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
        tracep->fullQData(oldp+178,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
        tracep->fullQData(oldp+180,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
        tracep->fullQData(oldp+182,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
        tracep->fullQData(oldp+184,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
        tracep->fullQData(oldp+186,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
        tracep->fullQData(oldp+188,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
        tracep->fullQData(oldp+190,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
        tracep->fullQData(oldp+192,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
        tracep->fullQData(oldp+194,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
        tracep->fullQData(oldp+196,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
        tracep->fullQData(oldp+198,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
        tracep->fullQData(oldp+200,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
        tracep->fullQData(oldp+202,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
        tracep->fullQData(oldp+204,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
        tracep->fullQData(oldp+206,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
        tracep->fullQData(oldp+208,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
        tracep->fullQData(oldp+210,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
        tracep->fullQData(oldp+212,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[0]),64);
        tracep->fullQData(oldp+214,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[1]),64);
        tracep->fullQData(oldp+216,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[2]),64);
        tracep->fullQData(oldp+218,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[3]),64);
        tracep->fullQData(oldp+220,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[4]),64);
        tracep->fullQData(oldp+222,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[5]),64);
        tracep->fullQData(oldp+224,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[6]),64);
        tracep->fullQData(oldp+226,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[7]),64);
        tracep->fullQData(oldp+228,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[8]),64);
        tracep->fullQData(oldp+230,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[9]),64);
        tracep->fullQData(oldp+232,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[10]),64);
        tracep->fullQData(oldp+234,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[11]),64);
        tracep->fullQData(oldp+236,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[12]),64);
        tracep->fullQData(oldp+238,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[13]),64);
        tracep->fullQData(oldp+240,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[14]),64);
        tracep->fullQData(oldp+242,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[15]),64);
        tracep->fullQData(oldp+244,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[16]),64);
        tracep->fullQData(oldp+246,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[17]),64);
        tracep->fullQData(oldp+248,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[18]),64);
        tracep->fullQData(oldp+250,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[19]),64);
        tracep->fullQData(oldp+252,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[20]),64);
        tracep->fullQData(oldp+254,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[21]),64);
        tracep->fullQData(oldp+256,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[22]),64);
        tracep->fullQData(oldp+258,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[23]),64);
        tracep->fullQData(oldp+260,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[24]),64);
        tracep->fullQData(oldp+262,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[25]),64);
        tracep->fullQData(oldp+264,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[26]),64);
        tracep->fullQData(oldp+266,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[27]),64);
        tracep->fullQData(oldp+268,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[28]),64);
        tracep->fullQData(oldp+270,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[29]),64);
        tracep->fullQData(oldp+272,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[30]),64);
        tracep->fullQData(oldp+274,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[31]),64);
        tracep->fullBit(oldp+276,(vlSelf->clk));
        tracep->fullBit(oldp+277,(vlSelf->rst));
        tracep->fullIData(oldp+278,(vlSelf->inst),32);
        tracep->fullQData(oldp+279,(vlSelf->pc),64);
        tracep->fullQData(oldp+281,(((vlSelf->inst 
                                      >> 0x1fU) ? (0xfffffffffffff000ULL 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                      : (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x14U))))),64);
        tracep->fullQData(oldp+283,(((vlSelf->inst 
                                      >> 0x1fU) ? (0xffffffffffe00000ULL 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & (vlSelf->inst 
                                                                          >> 0xbU)) 
                                                                      | ((0xff000U 
                                                                          & vlSelf->inst) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->inst 
                                                                                >> 9U)) 
                                                                            | (0x7feU 
                                                                               & (vlSelf->inst 
                                                                                >> 0x14U))))))))
                                      : (((QData)((IData)(
                                                          (vlSelf->inst 
                                                           >> 0x1fU))) 
                                          << 0x14U) 
                                         | (QData)((IData)(
                                                           ((0xff000U 
                                                             & vlSelf->inst) 
                                                            | ((0x800U 
                                                                & (vlSelf->inst 
                                                                   >> 9U)) 
                                                               | (0x7feU 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U))))))))),64);
        tracep->fullCData(oldp+285,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+286,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+287,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+288,((0x7fU & vlSelf->inst)),7);
        tracep->fullQData(oldp+289,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+291,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+293,((4ULL + vlSelf->pc)),64);
        tracep->fullIData(oldp+295,(0x40U),32);
        tracep->fullQData(oldp+296,(0x80000000ULL),64);
        tracep->fullBit(oldp+298,(1U));
        tracep->fullIData(oldp+299,(4U),32);
        tracep->fullIData(oldp+300,(7U),32);
        tracep->fullIData(oldp+301,(0xaU),32);
        __Vtemp194[0U] = 0x78064c13U;
        __Vtemp194[1U] = 0xe009700bU;
        __Vtemp194[2U] = 6U;
        tracep->fullWData(oldp+302,(__Vtemp194),68);
        tracep->fullIData(oldp+305,(0U),32);
        tracep->fullSData(oldp+306,(0U),10);
        tracep->fullIData(oldp+307,(0x11U),32);
        tracep->fullIData(oldp+308,(4U),32);
        tracep->fullIData(oldp+309,(5U),32);
        tracep->fullIData(oldp+310,(1U),32);
        tracep->fullQData(oldp+311,(0x601403827ULL),44);
        tracep->fullBit(oldp+313,(0U));
        tracep->fullIData(oldp+314,(0xbU),32);
        tracep->fullQData(oldp+315,(0ULL),64);
        tracep->fullIData(oldp+317,(0x4aU),32);
        tracep->fullIData(oldp+318,(1U),32);
        tracep->fullIData(oldp+319,(3U),32);
        tracep->fullIData(oldp+320,(3U),32);
    }
}
