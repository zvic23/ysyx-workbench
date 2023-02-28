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
        tracep->declBit(c+282,"clk", false,-1);
        tracep->declBit(c+283,"rst", false,-1);
        tracep->declBus(c+284,"inst", false,-1, 31,0);
        tracep->declQuad(c+285,"pc", false,-1, 63,0);
        tracep->declBit(c+282,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+283,"ysyx_22050612_npc rst", false,-1);
        tracep->declBus(c+284,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+285,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+287,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_22050612_npc imm_U", false,-1, 63,0);
        tracep->declQuad(c+289,"ysyx_22050612_npc imm_J", false,-1, 63,0);
        tracep->declBus(c+291,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+292,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+293,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBus(c+32,"ysyx_22050612_npc opcode", false,-1, 9,0);
        tracep->declBit(c+282,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+283,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+28,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+285,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+301,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+302,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+282,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+283,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+28,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+285,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+304,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+282,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+284,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+287,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_22050612_npc idu imm_U", false,-1, 63,0);
        tracep->declQuad(c+289,"ysyx_22050612_npc idu imm_J", false,-1, 63,0);
        tracep->declBus(c+291,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+292,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+293,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBus(c+32,"ysyx_22050612_npc idu opcode", false,-1, 9,0);
        tracep->declBus(c+305,"ysyx_22050612_npc idu decode0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+306,"ysyx_22050612_npc idu decode0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22050612_npc idu decode0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+32,"ysyx_22050612_npc idu decode0 out", false,-1, 9,0);
        tracep->declBus(c+294,"ysyx_22050612_npc idu decode0 key", false,-1, 6,0);
        tracep->declArray(c+308,"ysyx_22050612_npc idu decode0 lut", false,-1, 67,0);
        tracep->declBus(c+305,"ysyx_22050612_npc idu decode0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+306,"ysyx_22050612_npc idu decode0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22050612_npc idu decode0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+311,"ysyx_22050612_npc idu decode0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+32,"ysyx_22050612_npc idu decode0 i0 out", false,-1, 9,0);
        tracep->declBus(c+294,"ysyx_22050612_npc idu decode0 i0 key", false,-1, 6,0);
        tracep->declBus(c+312,"ysyx_22050612_npc idu decode0 i0 default_out", false,-1, 9,0);
        tracep->declArray(c+308,"ysyx_22050612_npc idu decode0 i0 lut", false,-1, 67,0);
        tracep->declBus(c+313,"ysyx_22050612_npc idu decode0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22050612_npc idu decode0 i0 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+5+i*1,"ysyx_22050612_npc idu decode0 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+9+i*1,"ysyx_22050612_npc idu decode0 i0 data_list", true,(i+0), 9,0);}}
        tracep->declBus(c+33,"ysyx_22050612_npc idu decode0 i0 lut_out", false,-1, 9,0);
        tracep->declBit(c+34,"ysyx_22050612_npc idu decode0 i0 hit", false,-1);
        tracep->declBus(c+314,"ysyx_22050612_npc idu decode0 i0 i", false,-1, 31,0);
        tracep->declBus(c+315,"ysyx_22050612_npc idu decode1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22050612_npc idu decode1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22050612_npc idu decode1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+32,"ysyx_22050612_npc idu decode1 out", false,-1, 9,0);
        tracep->declBus(c+35,"ysyx_22050612_npc idu decode1 key", false,-1, 9,0);
        tracep->declBus(c+316,"ysyx_22050612_npc idu decode1 lut", false,-1, 19,0);
        tracep->declBus(c+315,"ysyx_22050612_npc idu decode1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22050612_npc idu decode1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22050612_npc idu decode1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+311,"ysyx_22050612_npc idu decode1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+32,"ysyx_22050612_npc idu decode1 i0 out", false,-1, 9,0);
        tracep->declBus(c+35,"ysyx_22050612_npc idu decode1 i0 key", false,-1, 9,0);
        tracep->declBus(c+312,"ysyx_22050612_npc idu decode1 i0 default_out", false,-1, 9,0);
        tracep->declBus(c+316,"ysyx_22050612_npc idu decode1 i0 lut", false,-1, 19,0);
        tracep->declBus(c+317,"ysyx_22050612_npc idu decode1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+13+i*1,"ysyx_22050612_npc idu decode1 i0 pair_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+14+i*1,"ysyx_22050612_npc idu decode1 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+15+i*1,"ysyx_22050612_npc idu decode1 i0 data_list", true,(i+0), 9,0);}}
        tracep->declBus(c+36,"ysyx_22050612_npc idu decode1 i0 lut_out", false,-1, 9,0);
        tracep->declBit(c+37,"ysyx_22050612_npc idu decode1 i0 hit", false,-1);
        tracep->declBus(c+318,"ysyx_22050612_npc idu decode1 i0 i", false,-1, 31,0);
        tracep->declBit(c+282,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+287,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declQuad(c+30,"ysyx_22050612_npc exu imm_U", false,-1, 63,0);
        tracep->declQuad(c+289,"ysyx_22050612_npc exu imm_J", false,-1, 63,0);
        tracep->declBus(c+291,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+292,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+293,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBus(c+32,"ysyx_22050612_npc exu opcode", false,-1, 9,0);
        tracep->declQuad(c+285,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+28,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+295,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+297,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+38,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBit(c+40,"ysyx_22050612_npc exu wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+154+i*2,"ysyx_22050612_npc exu gpr", true,(i+0), 63,0);}}
        tracep->declQuad(c+299,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declQuad(c+41,"ysyx_22050612_npc exu addend_a", false,-1, 63,0);
        tracep->declQuad(c+43,"ysyx_22050612_npc exu addend_b", false,-1, 63,0);
        tracep->declQuad(c+45,"ysyx_22050612_npc exu sum_add0", false,-1, 63,0);
        tracep->declBus(c+319,"ysyx_22050612_npc exu cpu_gpr_group ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu cpu_gpr_group DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+282,"ysyx_22050612_npc exu cpu_gpr_group clk", false,-1);
        tracep->declQuad(c+38,"ysyx_22050612_npc exu cpu_gpr_group wdata", false,-1, 63,0);
        tracep->declBus(c+291,"ysyx_22050612_npc exu cpu_gpr_group waddr", false,-1, 4,0);
        tracep->declBit(c+40,"ysyx_22050612_npc exu cpu_gpr_group wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+218+i*2,"ysyx_22050612_npc exu cpu_gpr_group rf", true,(i+0), 63,0);}}
        tracep->declBus(c+305,"ysyx_22050612_npc exu gpr_write_enable NR_KEY", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22050612_npc exu gpr_write_enable KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+315,"ysyx_22050612_npc exu gpr_write_enable DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+40,"ysyx_22050612_npc exu gpr_write_enable out", false,-1, 0,0);
        tracep->declBus(c+32,"ysyx_22050612_npc exu gpr_write_enable key", false,-1, 9,0);
        tracep->declQuad(c+320,"ysyx_22050612_npc exu gpr_write_enable lut", false,-1, 43,0);
        tracep->declBus(c+305,"ysyx_22050612_npc exu gpr_write_enable i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22050612_npc exu gpr_write_enable i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+315,"ysyx_22050612_npc exu gpr_write_enable i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+311,"ysyx_22050612_npc exu gpr_write_enable i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+40,"ysyx_22050612_npc exu gpr_write_enable i0 out", false,-1, 0,0);
        tracep->declBus(c+32,"ysyx_22050612_npc exu gpr_write_enable i0 key", false,-1, 9,0);
        tracep->declBus(c+322,"ysyx_22050612_npc exu gpr_write_enable i0 default_out", false,-1, 0,0);
        tracep->declQuad(c+320,"ysyx_22050612_npc exu gpr_write_enable i0 lut", false,-1, 43,0);
        tracep->declBus(c+323,"ysyx_22050612_npc exu gpr_write_enable i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+16+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+20+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+24+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+47,"ysyx_22050612_npc exu gpr_write_enable i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+48,"ysyx_22050612_npc exu gpr_write_enable i0 hit", false,-1);
        tracep->declBus(c+314,"ysyx_22050612_npc exu gpr_write_enable i0 i", false,-1, 31,0);
        tracep->declBus(c+305,"ysyx_22050612_npc exu gpr_write_data NR_KEY", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22050612_npc exu gpr_write_data KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu gpr_write_data DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+38,"ysyx_22050612_npc exu gpr_write_data out", false,-1, 63,0);
        tracep->declBus(c+32,"ysyx_22050612_npc exu gpr_write_data key", false,-1, 9,0);
        tracep->declArray(c+49,"ysyx_22050612_npc exu gpr_write_data lut", false,-1, 295,0);
        tracep->declBus(c+305,"ysyx_22050612_npc exu gpr_write_data i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22050612_npc exu gpr_write_data i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu gpr_write_data i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+311,"ysyx_22050612_npc exu gpr_write_data i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+38,"ysyx_22050612_npc exu gpr_write_data i0 out", false,-1, 63,0);
        tracep->declBus(c+32,"ysyx_22050612_npc exu gpr_write_data i0 key", false,-1, 9,0);
        tracep->declQuad(c+324,"ysyx_22050612_npc exu gpr_write_data i0 default_out", false,-1, 63,0);
        tracep->declArray(c+49,"ysyx_22050612_npc exu gpr_write_data i0 lut", false,-1, 295,0);
        tracep->declBus(c+326,"ysyx_22050612_npc exu gpr_write_data i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+59+i*3,"ysyx_22050612_npc exu gpr_write_data i0 pair_list", true,(i+0), 73,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+71+i*1,"ysyx_22050612_npc exu gpr_write_data i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+75+i*2,"ysyx_22050612_npc exu gpr_write_data i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+83,"ysyx_22050612_npc exu gpr_write_data i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+85,"ysyx_22050612_npc exu gpr_write_data i0 hit", false,-1);
        tracep->declBus(c+314,"ysyx_22050612_npc exu gpr_write_data i0 i", false,-1, 31,0);
        tracep->declBus(c+315,"ysyx_22050612_npc exu cpu_pc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22050612_npc exu cpu_pc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu cpu_pc DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+28,"ysyx_22050612_npc exu cpu_pc out", false,-1, 63,0);
        tracep->declBus(c+32,"ysyx_22050612_npc exu cpu_pc key", false,-1, 9,0);
        tracep->declQuad(c+299,"ysyx_22050612_npc exu cpu_pc default_out", false,-1, 63,0);
        tracep->declArray(c+86,"ysyx_22050612_npc exu cpu_pc lut", false,-1, 73,0);
        tracep->declBus(c+315,"ysyx_22050612_npc exu cpu_pc i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22050612_npc exu cpu_pc i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu cpu_pc i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+315,"ysyx_22050612_npc exu cpu_pc i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+28,"ysyx_22050612_npc exu cpu_pc i0 out", false,-1, 63,0);
        tracep->declBus(c+32,"ysyx_22050612_npc exu cpu_pc i0 key", false,-1, 9,0);
        tracep->declQuad(c+299,"ysyx_22050612_npc exu cpu_pc i0 default_out", false,-1, 63,0);
        tracep->declArray(c+86,"ysyx_22050612_npc exu cpu_pc i0 lut", false,-1, 73,0);
        tracep->declBus(c+326,"ysyx_22050612_npc exu cpu_pc i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declArray(c+89+i*3,"ysyx_22050612_npc exu cpu_pc i0 pair_list", true,(i+0), 73,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+92+i*1,"ysyx_22050612_npc exu cpu_pc i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declQuad(c+93+i*2,"ysyx_22050612_npc exu cpu_pc i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+95,"ysyx_22050612_npc exu cpu_pc i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+97,"ysyx_22050612_npc exu cpu_pc i0 hit", false,-1);
        tracep->declBus(c+318,"ysyx_22050612_npc exu cpu_pc i0 i", false,-1, 31,0);
        tracep->declBus(c+327,"ysyx_22050612_npc exu addend0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22050612_npc exu addend0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu addend0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+41,"ysyx_22050612_npc exu addend0 out", false,-1, 63,0);
        tracep->declBus(c+32,"ysyx_22050612_npc exu addend0 key", false,-1, 9,0);
        tracep->declArray(c+98,"ysyx_22050612_npc exu addend0 lut", false,-1, 221,0);
        tracep->declBus(c+327,"ysyx_22050612_npc exu addend0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22050612_npc exu addend0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu addend0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+311,"ysyx_22050612_npc exu addend0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+41,"ysyx_22050612_npc exu addend0 i0 out", false,-1, 63,0);
        tracep->declBus(c+32,"ysyx_22050612_npc exu addend0 i0 key", false,-1, 9,0);
        tracep->declQuad(c+324,"ysyx_22050612_npc exu addend0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+98,"ysyx_22050612_npc exu addend0 i0 lut", false,-1, 221,0);
        tracep->declBus(c+326,"ysyx_22050612_npc exu addend0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+105+i*3,"ysyx_22050612_npc exu addend0 i0 pair_list", true,(i+0), 73,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+114+i*1,"ysyx_22050612_npc exu addend0 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+117+i*2,"ysyx_22050612_npc exu addend0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+123,"ysyx_22050612_npc exu addend0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+125,"ysyx_22050612_npc exu addend0 i0 hit", false,-1);
        tracep->declBus(c+328,"ysyx_22050612_npc exu addend0 i0 i", false,-1, 31,0);
        tracep->declBus(c+327,"ysyx_22050612_npc exu addend1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22050612_npc exu addend1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu addend1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+43,"ysyx_22050612_npc exu addend1 out", false,-1, 63,0);
        tracep->declBus(c+32,"ysyx_22050612_npc exu addend1 key", false,-1, 9,0);
        tracep->declArray(c+126,"ysyx_22050612_npc exu addend1 lut", false,-1, 221,0);
        tracep->declBus(c+327,"ysyx_22050612_npc exu addend1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+307,"ysyx_22050612_npc exu addend1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu addend1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+311,"ysyx_22050612_npc exu addend1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+43,"ysyx_22050612_npc exu addend1 i0 out", false,-1, 63,0);
        tracep->declBus(c+32,"ysyx_22050612_npc exu addend1 i0 key", false,-1, 9,0);
        tracep->declQuad(c+324,"ysyx_22050612_npc exu addend1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+126,"ysyx_22050612_npc exu addend1 i0 lut", false,-1, 221,0);
        tracep->declBus(c+326,"ysyx_22050612_npc exu addend1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+133+i*3,"ysyx_22050612_npc exu addend1 i0 pair_list", true,(i+0), 73,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+142+i*1,"ysyx_22050612_npc exu addend1 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+145+i*2,"ysyx_22050612_npc exu addend1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+151,"ysyx_22050612_npc exu addend1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+153,"ysyx_22050612_npc exu addend1 i0 hit", false,-1);
        tracep->declBus(c+328,"ysyx_22050612_npc exu addend1 i0 i", false,-1, 31,0);
        tracep->declBus(c+301,"ysyx_22050612_npc exu add0 WIDTH", false,-1, 31,0);
        tracep->declQuad(c+41,"ysyx_22050612_npc exu add0 x", false,-1, 63,0);
        tracep->declQuad(c+43,"ysyx_22050612_npc exu add0 y", false,-1, 63,0);
        tracep->declQuad(c+45,"ysyx_22050612_npc exu add0 z", false,-1, 63,0);
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
        tracep->fullIData(oldp+1,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[0]),17);
        tracep->fullIData(oldp+2,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[1]),17);
        tracep->fullIData(oldp+3,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[2]),17);
        tracep->fullIData(oldp+4,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__pair_list[3]),17);
        tracep->fullCData(oldp+5,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+6,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+7,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+8,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[3]),7);
        tracep->fullSData(oldp+9,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0]),10);
        tracep->fullSData(oldp+10,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[1]),10);
        tracep->fullSData(oldp+11,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[2]),10);
        tracep->fullSData(oldp+12,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[3]),10);
        tracep->fullIData(oldp+13,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[0]),20);
        tracep->fullSData(oldp+14,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+15,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[0]),10);
        tracep->fullSData(oldp+16,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+17,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+18,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+19,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+20,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+22,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[2]),10);
        tracep->fullSData(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[3]),10);
        tracep->fullBit(oldp+24,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+26,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[2]));
        tracep->fullBit(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[3]));
        tracep->fullQData(oldp+28,(vlSelf->ysyx_22050612_npc__DOT__dnpc),64);
        tracep->fullQData(oldp+30,(vlSelf->ysyx_22050612_npc__DOT__imm_U),64);
        tracep->fullSData(oldp+32,(vlSelf->ysyx_22050612_npc__DOT__opcode),10);
        tracep->fullSData(oldp+33,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out),10);
        tracep->fullBit(oldp+34,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit));
        tracep->fullSData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode1____pinNumber2),10);
        tracep->fullSData(oldp+36,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out),10);
        tracep->fullBit(oldp+37,(((IData)(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode1____pinNumber2) 
                                  == vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list
                                  [0U])));
        tracep->fullQData(oldp+38,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
        tracep->fullBit(oldp+40,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
        tracep->fullQData(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_a),64);
        tracep->fullQData(oldp+43,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend_b),64);
        tracep->fullQData(oldp+45,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__sum_add0),64);
        tracep->fullBit(oldp+47,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+48,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+49,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3),296);
        tracep->fullWData(oldp+59,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0]),74);
        tracep->fullWData(oldp+62,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[1]),74);
        tracep->fullWData(oldp+65,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[2]),74);
        tracep->fullWData(oldp+68,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[3]),74);
        tracep->fullSData(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+72,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+73,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[2]),10);
        tracep->fullSData(oldp+74,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[3]),10);
        tracep->fullQData(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+77,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+79,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+81,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+83,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+85,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit));
        __Vtemp193[0U] = (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__sum_add0);
        __Vtemp193[1U] = (IData)((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__sum_add0 
                                  >> 0x20U));
        __Vtemp193[2U] = 3U;
        tracep->fullWData(oldp+86,(__Vtemp193),74);
        tracep->fullWData(oldp+89,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0]),74);
        tracep->fullSData(oldp+92,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[0]),10);
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+97,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+98,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__addend0____pinNumber3),222);
        tracep->fullWData(oldp+105,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[0]),74);
        tracep->fullWData(oldp+108,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[1]),74);
        tracep->fullWData(oldp+111,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__pair_list[2]),74);
        tracep->fullSData(oldp+114,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+115,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+116,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__key_list[2]),10);
        tracep->fullQData(oldp+117,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+119,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+121,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+123,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+125,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend0__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+126,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__addend1____pinNumber3),222);
        tracep->fullWData(oldp+133,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[0]),74);
        tracep->fullWData(oldp+136,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[1]),74);
        tracep->fullWData(oldp+139,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__pair_list[2]),74);
        tracep->fullSData(oldp+142,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+143,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+144,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__key_list[2]),10);
        tracep->fullQData(oldp+145,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+147,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+149,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+151,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+153,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__addend1__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+154,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
        tracep->fullQData(oldp+156,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
        tracep->fullQData(oldp+158,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
        tracep->fullQData(oldp+160,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
        tracep->fullQData(oldp+162,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
        tracep->fullQData(oldp+164,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
        tracep->fullQData(oldp+166,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
        tracep->fullQData(oldp+168,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
        tracep->fullQData(oldp+170,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
        tracep->fullQData(oldp+172,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
        tracep->fullQData(oldp+174,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
        tracep->fullQData(oldp+176,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
        tracep->fullQData(oldp+178,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
        tracep->fullQData(oldp+180,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
        tracep->fullQData(oldp+182,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
        tracep->fullQData(oldp+184,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
        tracep->fullQData(oldp+186,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
        tracep->fullQData(oldp+188,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
        tracep->fullQData(oldp+190,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
        tracep->fullQData(oldp+192,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
        tracep->fullQData(oldp+194,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
        tracep->fullQData(oldp+196,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
        tracep->fullQData(oldp+198,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
        tracep->fullQData(oldp+200,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
        tracep->fullQData(oldp+202,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
        tracep->fullQData(oldp+204,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
        tracep->fullQData(oldp+206,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
        tracep->fullQData(oldp+208,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
        tracep->fullQData(oldp+210,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
        tracep->fullQData(oldp+212,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
        tracep->fullQData(oldp+214,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
        tracep->fullQData(oldp+216,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
        tracep->fullQData(oldp+218,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[0]),64);
        tracep->fullQData(oldp+220,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[1]),64);
        tracep->fullQData(oldp+222,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[2]),64);
        tracep->fullQData(oldp+224,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[3]),64);
        tracep->fullQData(oldp+226,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[4]),64);
        tracep->fullQData(oldp+228,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[5]),64);
        tracep->fullQData(oldp+230,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[6]),64);
        tracep->fullQData(oldp+232,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[7]),64);
        tracep->fullQData(oldp+234,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[8]),64);
        tracep->fullQData(oldp+236,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[9]),64);
        tracep->fullQData(oldp+238,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[10]),64);
        tracep->fullQData(oldp+240,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[11]),64);
        tracep->fullQData(oldp+242,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[12]),64);
        tracep->fullQData(oldp+244,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[13]),64);
        tracep->fullQData(oldp+246,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[14]),64);
        tracep->fullQData(oldp+248,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[15]),64);
        tracep->fullQData(oldp+250,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[16]),64);
        tracep->fullQData(oldp+252,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[17]),64);
        tracep->fullQData(oldp+254,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[18]),64);
        tracep->fullQData(oldp+256,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[19]),64);
        tracep->fullQData(oldp+258,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[20]),64);
        tracep->fullQData(oldp+260,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[21]),64);
        tracep->fullQData(oldp+262,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[22]),64);
        tracep->fullQData(oldp+264,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[23]),64);
        tracep->fullQData(oldp+266,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[24]),64);
        tracep->fullQData(oldp+268,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[25]),64);
        tracep->fullQData(oldp+270,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[26]),64);
        tracep->fullQData(oldp+272,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[27]),64);
        tracep->fullQData(oldp+274,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[28]),64);
        tracep->fullQData(oldp+276,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[29]),64);
        tracep->fullQData(oldp+278,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[30]),64);
        tracep->fullQData(oldp+280,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[31]),64);
        tracep->fullBit(oldp+282,(vlSelf->clk));
        tracep->fullBit(oldp+283,(vlSelf->rst));
        tracep->fullIData(oldp+284,(vlSelf->inst),32);
        tracep->fullQData(oldp+285,(vlSelf->pc),64);
        tracep->fullQData(oldp+287,(((vlSelf->inst 
                                      >> 0x1fU) ? (0xfffffffffffff000ULL 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                      : (QData)((IData)(
                                                        (vlSelf->inst 
                                                         >> 0x14U))))),64);
        tracep->fullQData(oldp+289,(((vlSelf->inst 
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
        tracep->fullCData(oldp+291,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+292,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+293,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+294,((0x7fU & vlSelf->inst)),7);
        tracep->fullQData(oldp+295,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+297,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+299,((4ULL + vlSelf->pc)),64);
        tracep->fullIData(oldp+301,(0x40U),32);
        tracep->fullQData(oldp+302,(0x80000000ULL),64);
        tracep->fullBit(oldp+304,(1U));
        tracep->fullIData(oldp+305,(4U),32);
        tracep->fullIData(oldp+306,(7U),32);
        tracep->fullIData(oldp+307,(0xaU),32);
        __Vtemp194[0U] = 0x78064c13U;
        __Vtemp194[1U] = 0xe009700bU;
        __Vtemp194[2U] = 6U;
        tracep->fullWData(oldp+308,(__Vtemp194),68);
        tracep->fullIData(oldp+311,(0U),32);
        tracep->fullSData(oldp+312,(0U),10);
        tracep->fullIData(oldp+313,(0x11U),32);
        tracep->fullIData(oldp+314,(4U),32);
        tracep->fullIData(oldp+315,(1U),32);
        tracep->fullIData(oldp+316,(0xdc04U),20);
        tracep->fullIData(oldp+317,(0x14U),32);
        tracep->fullIData(oldp+318,(1U),32);
        tracep->fullIData(oldp+319,(5U),32);
        tracep->fullQData(oldp+320,(0x601403827ULL),44);
        tracep->fullBit(oldp+322,(0U));
        tracep->fullIData(oldp+323,(0xbU),32);
        tracep->fullQData(oldp+324,(0ULL),64);
        tracep->fullIData(oldp+326,(0x4aU),32);
        tracep->fullIData(oldp+327,(3U),32);
        tracep->fullIData(oldp+328,(3U),32);
    }
}
