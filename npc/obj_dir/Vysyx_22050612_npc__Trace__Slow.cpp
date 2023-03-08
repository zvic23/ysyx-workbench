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
        tracep->declBit(c+1843,"clk", false,-1);
        tracep->declBit(c+1844,"rst", false,-1);
        tracep->declQuad(c+1845,"pc", false,-1, 63,0);
        tracep->declBit(c+1843,"ysyx_22050612_npc clk", false,-1);
        tracep->declBit(c+1844,"ysyx_22050612_npc rst", false,-1);
        tracep->declQuad(c+1845,"ysyx_22050612_npc pc", false,-1, 63,0);
        tracep->declBus(c+340,"ysyx_22050612_npc inst", false,-1, 31,0);
        tracep->declQuad(c+341,"ysyx_22050612_npc dnpc", false,-1, 63,0);
        tracep->declQuad(c+343,"ysyx_22050612_npc imm_I", false,-1, 63,0);
        tracep->declQuad(c+345,"ysyx_22050612_npc imm_U", false,-1, 63,0);
        tracep->declQuad(c+347,"ysyx_22050612_npc imm_J", false,-1, 63,0);
        tracep->declQuad(c+349,"ysyx_22050612_npc imm_B", false,-1, 63,0);
        tracep->declQuad(c+351,"ysyx_22050612_npc imm_S", false,-1, 63,0);
        tracep->declBus(c+353,"ysyx_22050612_npc shamt", false,-1, 5,0);
        tracep->declBus(c+354,"ysyx_22050612_npc rd", false,-1, 4,0);
        tracep->declBus(c+355,"ysyx_22050612_npc rs1", false,-1, 4,0);
        tracep->declBus(c+356,"ysyx_22050612_npc rs2", false,-1, 4,0);
        tracep->declBus(c+357,"ysyx_22050612_npc opcode", false,-1, 19,0);
        tracep->declBit(c+1843,"ysyx_22050612_npc ifu clk", false,-1);
        tracep->declBit(c+1844,"ysyx_22050612_npc ifu rst", false,-1);
        tracep->declQuad(c+341,"ysyx_22050612_npc ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+1845,"ysyx_22050612_npc ifu pc", false,-1, 63,0);
        tracep->declBus(c+340,"ysyx_22050612_npc ifu inst", false,-1, 31,0);
        tracep->declQuad(c+358,"ysyx_22050612_npc ifu inst_mix", false,-1, 63,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc ifu pc_rg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1850,"ysyx_22050612_npc ifu pc_rg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+1843,"ysyx_22050612_npc ifu pc_rg clk", false,-1);
        tracep->declBit(c+1844,"ysyx_22050612_npc ifu pc_rg rst", false,-1);
        tracep->declQuad(c+341,"ysyx_22050612_npc ifu pc_rg din", false,-1, 63,0);
        tracep->declQuad(c+1845,"ysyx_22050612_npc ifu pc_rg dout", false,-1, 63,0);
        tracep->declBit(c+1852,"ysyx_22050612_npc ifu pc_rg wen", false,-1);
        tracep->declBit(c+1843,"ysyx_22050612_npc idu clk", false,-1);
        tracep->declBus(c+340,"ysyx_22050612_npc idu inst", false,-1, 31,0);
        tracep->declQuad(c+343,"ysyx_22050612_npc idu imm_I", false,-1, 63,0);
        tracep->declQuad(c+345,"ysyx_22050612_npc idu imm_U", false,-1, 63,0);
        tracep->declQuad(c+347,"ysyx_22050612_npc idu imm_J", false,-1, 63,0);
        tracep->declQuad(c+349,"ysyx_22050612_npc idu imm_B", false,-1, 63,0);
        tracep->declQuad(c+351,"ysyx_22050612_npc idu imm_S", false,-1, 63,0);
        tracep->declBus(c+353,"ysyx_22050612_npc idu shamt", false,-1, 5,0);
        tracep->declBus(c+354,"ysyx_22050612_npc idu rd", false,-1, 4,0);
        tracep->declBus(c+355,"ysyx_22050612_npc idu rs1", false,-1, 4,0);
        tracep->declBus(c+356,"ysyx_22050612_npc idu rs2", false,-1, 4,0);
        tracep->declBus(c+357,"ysyx_22050612_npc idu opcode", false,-1, 19,0);
        tracep->declBus(c+1853,"ysyx_22050612_npc idu decode0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1854,"ysyx_22050612_npc idu decode0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1855,"ysyx_22050612_npc idu decode0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+360,"ysyx_22050612_npc idu decode0 out", false,-1, 6,0);
        tracep->declBus(c+361,"ysyx_22050612_npc idu decode0 key", false,-1, 9,0);
        tracep->declArray(c+1856,"ysyx_22050612_npc idu decode0 lut", false,-1, 322,0);
        tracep->declBus(c+1853,"ysyx_22050612_npc idu decode0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1854,"ysyx_22050612_npc idu decode0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1855,"ysyx_22050612_npc idu decode0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc idu decode0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+360,"ysyx_22050612_npc idu decode0 i0 out", false,-1, 6,0);
        tracep->declBus(c+361,"ysyx_22050612_npc idu decode0 i0 key", false,-1, 9,0);
        tracep->declBus(c+1868,"ysyx_22050612_npc idu decode0 i0 default_out", false,-1, 6,0);
        tracep->declArray(c+1856,"ysyx_22050612_npc idu decode0 i0 lut", false,-1, 322,0);
        tracep->declBus(c+1869,"ysyx_22050612_npc idu decode0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<19; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22050612_npc idu decode0 i0 pair_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<19; i++) {
                tracep->declBus(c+20+i*1,"ysyx_22050612_npc idu decode0 i0 key_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<19; i++) {
                tracep->declBus(c+39+i*1,"ysyx_22050612_npc idu decode0 i0 data_list", true,(i+0), 6,0);}}
        tracep->declBus(c+362,"ysyx_22050612_npc idu decode0 i0 lut_out", false,-1, 6,0);
        tracep->declBit(c+363,"ysyx_22050612_npc idu decode0 i0 hit", false,-1);
        tracep->declBus(c+1870,"ysyx_22050612_npc idu decode0 i0 i", false,-1, 31,0);
        tracep->declBus(c+1871,"ysyx_22050612_npc idu decode1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1855,"ysyx_22050612_npc idu decode1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1872,"ysyx_22050612_npc idu decode1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+364,"ysyx_22050612_npc idu decode1 out", false,-1, 1,0);
        tracep->declBus(c+365,"ysyx_22050612_npc idu decode1 key", false,-1, 6,0);
        tracep->declBus(c+1873,"ysyx_22050612_npc idu decode1 lut", false,-1, 26,0);
        tracep->declBus(c+1871,"ysyx_22050612_npc idu decode1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1855,"ysyx_22050612_npc idu decode1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1872,"ysyx_22050612_npc idu decode1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc idu decode1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+364,"ysyx_22050612_npc idu decode1 i0 out", false,-1, 1,0);
        tracep->declBus(c+365,"ysyx_22050612_npc idu decode1 i0 key", false,-1, 6,0);
        tracep->declBus(c+1874,"ysyx_22050612_npc idu decode1 i0 default_out", false,-1, 1,0);
        tracep->declBus(c+1873,"ysyx_22050612_npc idu decode1 i0 lut", false,-1, 26,0);
        tracep->declBus(c+1875,"ysyx_22050612_npc idu decode1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+58+i*1,"ysyx_22050612_npc idu decode1 i0 pair_list", true,(i+0), 8,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+61+i*1,"ysyx_22050612_npc idu decode1 i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+64+i*1,"ysyx_22050612_npc idu decode1 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+366,"ysyx_22050612_npc idu decode1 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+367,"ysyx_22050612_npc idu decode1 i0 hit", false,-1);
        tracep->declBus(c+1876,"ysyx_22050612_npc idu decode1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1877,"ysyx_22050612_npc idu decode2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1869,"ysyx_22050612_npc idu decode2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc idu decode2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+368,"ysyx_22050612_npc idu decode2 out", false,-1, 7,0);
        tracep->declBus(c+369,"ysyx_22050612_npc idu decode2 key", false,-1, 16,0);
        tracep->declArray(c+1879,"ysyx_22050612_npc idu decode2 lut", false,-1, 324,0);
        tracep->declBus(c+1877,"ysyx_22050612_npc idu decode2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1869,"ysyx_22050612_npc idu decode2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc idu decode2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc idu decode2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+368,"ysyx_22050612_npc idu decode2 i0 out", false,-1, 7,0);
        tracep->declBus(c+369,"ysyx_22050612_npc idu decode2 i0 key", false,-1, 16,0);
        tracep->declBus(c+1890,"ysyx_22050612_npc idu decode2 i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1879,"ysyx_22050612_npc idu decode2 i0 lut", false,-1, 324,0);
        tracep->declBus(c+1891,"ysyx_22050612_npc idu decode2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+67+i*1,"ysyx_22050612_npc idu decode2 i0 pair_list", true,(i+0), 24,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+80+i*1,"ysyx_22050612_npc idu decode2 i0 key_list", true,(i+0), 16,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+93+i*1,"ysyx_22050612_npc idu decode2 i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+370,"ysyx_22050612_npc idu decode2 i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+371,"ysyx_22050612_npc idu decode2 i0 hit", false,-1);
        tracep->declBus(c+1892,"ysyx_22050612_npc idu decode2 i0 i", false,-1, 31,0);
        tracep->declBus(c+1871,"ysyx_22050612_npc idu decode3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1893,"ysyx_22050612_npc idu decode3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1872,"ysyx_22050612_npc idu decode3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+372,"ysyx_22050612_npc idu decode3 out", false,-1, 1,0);
        tracep->declBus(c+373,"ysyx_22050612_npc idu decode3 key", false,-1, 15,0);
        tracep->declQuad(c+1894,"ysyx_22050612_npc idu decode3 lut", false,-1, 53,0);
        tracep->declBus(c+1871,"ysyx_22050612_npc idu decode3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1893,"ysyx_22050612_npc idu decode3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1872,"ysyx_22050612_npc idu decode3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc idu decode3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+372,"ysyx_22050612_npc idu decode3 i0 out", false,-1, 1,0);
        tracep->declBus(c+373,"ysyx_22050612_npc idu decode3 i0 key", false,-1, 15,0);
        tracep->declBus(c+1874,"ysyx_22050612_npc idu decode3 i0 default_out", false,-1, 1,0);
        tracep->declQuad(c+1894,"ysyx_22050612_npc idu decode3 i0 lut", false,-1, 53,0);
        tracep->declBus(c+1896,"ysyx_22050612_npc idu decode3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+106+i*1,"ysyx_22050612_npc idu decode3 i0 pair_list", true,(i+0), 17,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+109+i*1,"ysyx_22050612_npc idu decode3 i0 key_list", true,(i+0), 15,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+112+i*1,"ysyx_22050612_npc idu decode3 i0 data_list", true,(i+0), 1,0);}}
        tracep->declBus(c+374,"ysyx_22050612_npc idu decode3 i0 lut_out", false,-1, 1,0);
        tracep->declBit(c+375,"ysyx_22050612_npc idu decode3 i0 hit", false,-1);
        tracep->declBus(c+1876,"ysyx_22050612_npc idu decode3 i0 i", false,-1, 31,0);
        tracep->declBit(c+1843,"ysyx_22050612_npc exu clk", false,-1);
        tracep->declQuad(c+343,"ysyx_22050612_npc exu imm_I", false,-1, 63,0);
        tracep->declQuad(c+345,"ysyx_22050612_npc exu imm_U", false,-1, 63,0);
        tracep->declQuad(c+347,"ysyx_22050612_npc exu imm_J", false,-1, 63,0);
        tracep->declQuad(c+349,"ysyx_22050612_npc exu imm_B", false,-1, 63,0);
        tracep->declQuad(c+351,"ysyx_22050612_npc exu imm_S", false,-1, 63,0);
        tracep->declBus(c+353,"ysyx_22050612_npc exu shamt", false,-1, 5,0);
        tracep->declBus(c+354,"ysyx_22050612_npc exu rd", false,-1, 4,0);
        tracep->declBus(c+355,"ysyx_22050612_npc exu rs1", false,-1, 4,0);
        tracep->declBus(c+356,"ysyx_22050612_npc exu rs2", false,-1, 4,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu opcode", false,-1, 19,0);
        tracep->declQuad(c+1845,"ysyx_22050612_npc exu pc", false,-1, 63,0);
        tracep->declQuad(c+341,"ysyx_22050612_npc exu dnpc", false,-1, 63,0);
        tracep->declQuad(c+376,"ysyx_22050612_npc exu src1", false,-1, 63,0);
        tracep->declQuad(c+378,"ysyx_22050612_npc exu src2", false,-1, 63,0);
        tracep->declQuad(c+380,"ysyx_22050612_npc exu wdata_reg", false,-1, 63,0);
        tracep->declBit(c+382,"ysyx_22050612_npc exu wen", false,-1);
        tracep->declBit(c+383,"ysyx_22050612_npc exu wen_fix", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+384+i*2,"ysyx_22050612_npc exu gpr", true,(i+0), 63,0);}}
        tracep->declQuad(c+1847,"ysyx_22050612_npc exu snpc", false,-1, 63,0);
        tracep->declBus(c+448,"ysyx_22050612_npc exu mode", false,-1, 7,0);
        tracep->declQuad(c+449,"ysyx_22050612_npc exu operator_a", false,-1, 63,0);
        tracep->declQuad(c+451,"ysyx_22050612_npc exu operator_b", false,-1, 63,0);
        tracep->declQuad(c+453,"ysyx_22050612_npc exu result_alu0", false,-1, 63,0);
        tracep->declQuad(c+455,"ysyx_22050612_npc exu result_divu0", false,-1, 63,0);
        tracep->declQuad(c+457,"ysyx_22050612_npc exu result_remu0", false,-1, 63,0);
        tracep->declQuad(c+459,"ysyx_22050612_npc exu result_mulw0", false,-1, 63,0);
        tracep->declBus(c+461,"ysyx_22050612_npc exu result_divw0", false,-1, 31,0);
        tracep->declBus(c+462,"ysyx_22050612_npc exu result_remw0", false,-1, 31,0);
        tracep->declBus(c+463,"ysyx_22050612_npc exu wmask_1byte", false,-1, 7,0);
        tracep->declQuad(c+464,"ysyx_22050612_npc exu wdata_1byte", false,-1, 63,0);
        tracep->declBus(c+466,"ysyx_22050612_npc exu wmask_2byte", false,-1, 7,0);
        tracep->declQuad(c+467,"ysyx_22050612_npc exu wdata_2byte", false,-1, 63,0);
        tracep->declQuad(c+469,"ysyx_22050612_npc exu raddr", false,-1, 63,0);
        tracep->declQuad(c+471,"ysyx_22050612_npc exu rdata", false,-1, 63,0);
        tracep->declQuad(c+473,"ysyx_22050612_npc exu waddr", false,-1, 63,0);
        tracep->declQuad(c+475,"ysyx_22050612_npc exu wdata", false,-1, 63,0);
        tracep->declBus(c+477,"ysyx_22050612_npc exu wmask", false,-1, 7,0);
        tracep->declQuad(c+478,"ysyx_22050612_npc exu rdata_fix", false,-1, 63,0);
        tracep->declBus(c+480,"ysyx_22050612_npc exu rdata_1byte", false,-1, 7,0);
        tracep->declBus(c+1897,"ysyx_22050612_npc exu cpu_gpr_group ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu cpu_gpr_group DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1843,"ysyx_22050612_npc exu cpu_gpr_group clk", false,-1);
        tracep->declQuad(c+380,"ysyx_22050612_npc exu cpu_gpr_group wdata", false,-1, 63,0);
        tracep->declBus(c+354,"ysyx_22050612_npc exu cpu_gpr_group waddr", false,-1, 4,0);
        tracep->declBit(c+383,"ysyx_22050612_npc exu cpu_gpr_group wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+481+i*2,"ysyx_22050612_npc exu cpu_gpr_group rf", true,(i+0), 63,0);}}
        tracep->declBus(c+1898,"ysyx_22050612_npc exu gpr_write_enable NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu gpr_write_enable KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1900,"ysyx_22050612_npc exu gpr_write_enable DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+382,"ysyx_22050612_npc exu gpr_write_enable out", false,-1, 0,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu gpr_write_enable key", false,-1, 19,0);
        tracep->declArray(c+1901,"ysyx_22050612_npc exu gpr_write_enable lut", false,-1, 587,0);
        tracep->declBus(c+1898,"ysyx_22050612_npc exu gpr_write_enable i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu gpr_write_enable i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1900,"ysyx_22050612_npc exu gpr_write_enable i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc exu gpr_write_enable i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+382,"ysyx_22050612_npc exu gpr_write_enable i0 out", false,-1, 0,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu gpr_write_enable i0 key", false,-1, 19,0);
        tracep->declBus(c+1920,"ysyx_22050612_npc exu gpr_write_enable i0 default_out", false,-1, 0,0);
        tracep->declArray(c+1901,"ysyx_22050612_npc exu gpr_write_enable i0 lut", false,-1, 587,0);
        tracep->declBus(c+1921,"ysyx_22050612_npc exu gpr_write_enable i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+115+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 pair_list", true,(i+0), 20,0);}}
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+143+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+171+i*1,"ysyx_22050612_npc exu gpr_write_enable i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+545,"ysyx_22050612_npc exu gpr_write_enable i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+546,"ysyx_22050612_npc exu gpr_write_enable i0 hit", false,-1);
        tracep->declBus(c+1922,"ysyx_22050612_npc exu gpr_write_enable i0 i", false,-1, 31,0);
        tracep->declBus(c+1898,"ysyx_22050612_npc exu gpr_write_data NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu gpr_write_data KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu gpr_write_data DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+380,"ysyx_22050612_npc exu gpr_write_data out", false,-1, 63,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu gpr_write_data key", false,-1, 19,0);
        tracep->declArray(c+547,"ysyx_22050612_npc exu gpr_write_data lut", false,-1, 2351,0);
        tracep->declBus(c+1898,"ysyx_22050612_npc exu gpr_write_data i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu gpr_write_data i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu gpr_write_data i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc exu gpr_write_data i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+380,"ysyx_22050612_npc exu gpr_write_data i0 out", false,-1, 63,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu gpr_write_data i0 key", false,-1, 19,0);
        tracep->declQuad(c+1923,"ysyx_22050612_npc exu gpr_write_data i0 default_out", false,-1, 63,0);
        tracep->declArray(c+547,"ysyx_22050612_npc exu gpr_write_data i0 lut", false,-1, 2351,0);
        tracep->declBus(c+1925,"ysyx_22050612_npc exu gpr_write_data i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<28; i++) {
                tracep->declArray(c+621+i*3,"ysyx_22050612_npc exu gpr_write_data i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<28; i++) {
                tracep->declBus(c+705+i*1,"ysyx_22050612_npc exu gpr_write_data i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<28; i++) {
                tracep->declQuad(c+733+i*2,"ysyx_22050612_npc exu gpr_write_data i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+789,"ysyx_22050612_npc exu gpr_write_data i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+791,"ysyx_22050612_npc exu gpr_write_data i0 hit", false,-1);
        tracep->declBus(c+1922,"ysyx_22050612_npc exu gpr_write_data i0 i", false,-1, 31,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu cpu_pc NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu cpu_pc KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu cpu_pc DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+341,"ysyx_22050612_npc exu cpu_pc out", false,-1, 63,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu cpu_pc key", false,-1, 19,0);
        tracep->declQuad(c+1847,"ysyx_22050612_npc exu cpu_pc default_out", false,-1, 63,0);
        tracep->declArray(c+792,"ysyx_22050612_npc exu cpu_pc lut", false,-1, 671,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu cpu_pc i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu cpu_pc i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu cpu_pc i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1900,"ysyx_22050612_npc exu cpu_pc i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+341,"ysyx_22050612_npc exu cpu_pc i0 out", false,-1, 63,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu cpu_pc i0 key", false,-1, 19,0);
        tracep->declQuad(c+1847,"ysyx_22050612_npc exu cpu_pc i0 default_out", false,-1, 63,0);
        tracep->declArray(c+792,"ysyx_22050612_npc exu cpu_pc i0 lut", false,-1, 671,0);
        tracep->declBus(c+1925,"ysyx_22050612_npc exu cpu_pc i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+813+i*3,"ysyx_22050612_npc exu cpu_pc i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+837+i*1,"ysyx_22050612_npc exu cpu_pc i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+845+i*2,"ysyx_22050612_npc exu cpu_pc i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+861,"ysyx_22050612_npc exu cpu_pc i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+863,"ysyx_22050612_npc exu cpu_pc i0 hit", false,-1);
        tracep->declBus(c+1926,"ysyx_22050612_npc exu cpu_pc i0 i", false,-1, 31,0);
        tracep->declBus(c+1927,"ysyx_22050612_npc exu operator0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu operator0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu operator0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+449,"ysyx_22050612_npc exu operator0 out", false,-1, 63,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu operator0 key", false,-1, 19,0);
        tracep->declArray(c+864,"ysyx_22050612_npc exu operator0 lut", false,-1, 2687,0);
        tracep->declBus(c+1927,"ysyx_22050612_npc exu operator0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu operator0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu operator0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc exu operator0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+449,"ysyx_22050612_npc exu operator0 i0 out", false,-1, 63,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu operator0 i0 key", false,-1, 19,0);
        tracep->declQuad(c+1923,"ysyx_22050612_npc exu operator0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+864,"ysyx_22050612_npc exu operator0 i0 lut", false,-1, 2687,0);
        tracep->declBus(c+1925,"ysyx_22050612_npc exu operator0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declArray(c+948+i*3,"ysyx_22050612_npc exu operator0 i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+1044+i*1,"ysyx_22050612_npc exu operator0 i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1076+i*2,"ysyx_22050612_npc exu operator0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1140,"ysyx_22050612_npc exu operator0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1142,"ysyx_22050612_npc exu operator0 i0 hit", false,-1);
        tracep->declBus(c+1928,"ysyx_22050612_npc exu operator0 i0 i", false,-1, 31,0);
        tracep->declBus(c+1927,"ysyx_22050612_npc exu operator1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu operator1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu operator1 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+451,"ysyx_22050612_npc exu operator1 out", false,-1, 63,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu operator1 key", false,-1, 19,0);
        tracep->declArray(c+1143,"ysyx_22050612_npc exu operator1 lut", false,-1, 2687,0);
        tracep->declBus(c+1927,"ysyx_22050612_npc exu operator1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu operator1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu operator1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc exu operator1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+451,"ysyx_22050612_npc exu operator1 i0 out", false,-1, 63,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu operator1 i0 key", false,-1, 19,0);
        tracep->declQuad(c+1923,"ysyx_22050612_npc exu operator1 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1143,"ysyx_22050612_npc exu operator1 i0 lut", false,-1, 2687,0);
        tracep->declBus(c+1925,"ysyx_22050612_npc exu operator1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declArray(c+1227+i*3,"ysyx_22050612_npc exu operator1 i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+1323+i*1,"ysyx_22050612_npc exu operator1 i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1355+i*2,"ysyx_22050612_npc exu operator1 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1419,"ysyx_22050612_npc exu operator1 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1421,"ysyx_22050612_npc exu operator1 i0 hit", false,-1);
        tracep->declBus(c+1928,"ysyx_22050612_npc exu operator1 i0 i", false,-1, 31,0);
        tracep->declBus(c+1927,"ysyx_22050612_npc exu alumode NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu alumode KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu alumode DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+448,"ysyx_22050612_npc exu alumode out", false,-1, 7,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu alumode key", false,-1, 19,0);
        tracep->declArray(c+1929,"ysyx_22050612_npc exu alumode lut", false,-1, 895,0);
        tracep->declBus(c+1927,"ysyx_22050612_npc exu alumode i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu alumode i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu alumode i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc exu alumode i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+448,"ysyx_22050612_npc exu alumode i0 out", false,-1, 7,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu alumode i0 key", false,-1, 19,0);
        tracep->declBus(c+1890,"ysyx_22050612_npc exu alumode i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1929,"ysyx_22050612_npc exu alumode i0 lut", false,-1, 895,0);
        tracep->declBus(c+1898,"ysyx_22050612_npc exu alumode i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+199+i*1,"ysyx_22050612_npc exu alumode i0 pair_list", true,(i+0), 27,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+231+i*1,"ysyx_22050612_npc exu alumode i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+263+i*1,"ysyx_22050612_npc exu alumode i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1422,"ysyx_22050612_npc exu alumode i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1423,"ysyx_22050612_npc exu alumode i0 hit", false,-1);
        tracep->declBus(c+1928,"ysyx_22050612_npc exu alumode i0 i", false,-1, 31,0);
        tracep->declBus(c+448,"ysyx_22050612_npc exu alu0 mode", false,-1, 7,0);
        tracep->declQuad(c+449,"ysyx_22050612_npc exu alu0 A", false,-1, 63,0);
        tracep->declQuad(c+451,"ysyx_22050612_npc exu alu0 B", false,-1, 63,0);
        tracep->declQuad(c+453,"ysyx_22050612_npc exu alu0 Z", false,-1, 63,0);
        tracep->declQuad(c+1424,"ysyx_22050612_npc exu alu0 add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+1426,"ysyx_22050612_npc exu alu0 and_result", false,-1, 63,0);
        tracep->declQuad(c+1428,"ysyx_22050612_npc exu alu0 or_result", false,-1, 63,0);
        tracep->declQuad(c+1430,"ysyx_22050612_npc exu alu0 xor_result", false,-1, 63,0);
        tracep->declQuad(c+1432,"ysyx_22050612_npc exu alu0 slt_result", false,-1, 63,0);
        tracep->declQuad(c+1434,"ysyx_22050612_npc exu alu0 sltu_result", false,-1, 63,0);
        tracep->declQuad(c+1436,"ysyx_22050612_npc exu alu0 sll_result", false,-1, 63,0);
        tracep->declQuad(c+1438,"ysyx_22050612_npc exu alu0 srl_result", false,-1, 63,0);
        tracep->declQuad(c+1438,"ysyx_22050612_npc exu alu0 sra_result", false,-1, 63,0);
        tracep->declQuad(c+1440,"ysyx_22050612_npc exu alu0 C", false,-1, 63,0);
        tracep->declBus(c+1854,"ysyx_22050612_npc exu alu0 alu_result_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu alu0 alu_result_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu alu0 alu_result_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+453,"ysyx_22050612_npc exu alu0 alu_result_select out", false,-1, 63,0);
        tracep->declBus(c+448,"ysyx_22050612_npc exu alu0 alu_result_select key", false,-1, 7,0);
        tracep->declArray(c+1442,"ysyx_22050612_npc exu alu0 alu_result_select lut", false,-1, 719,0);
        tracep->declBus(c+1854,"ysyx_22050612_npc exu alu0 alu_result_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu alu0 alu_result_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu alu0 alu_result_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc exu alu0 alu_result_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+453,"ysyx_22050612_npc exu alu0 alu_result_select i0 out", false,-1, 63,0);
        tracep->declBus(c+448,"ysyx_22050612_npc exu alu0 alu_result_select i0 key", false,-1, 7,0);
        tracep->declQuad(c+1923,"ysyx_22050612_npc exu alu0 alu_result_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1442,"ysyx_22050612_npc exu alu0 alu_result_select i0 lut", false,-1, 719,0);
        tracep->declBus(c+1957,"ysyx_22050612_npc exu alu0 alu_result_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<10; i++) {
                tracep->declArray(c+1465+i*3,"ysyx_22050612_npc exu alu0 alu_result_select i0 pair_list", true,(i+0), 71,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+1495+i*1,"ysyx_22050612_npc exu alu0 alu_result_select i0 key_list", true,(i+0), 7,0);}}
        {int i; for (i=0; i<10; i++) {
                tracep->declQuad(c+1505+i*2,"ysyx_22050612_npc exu alu0 alu_result_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1525,"ysyx_22050612_npc exu alu0 alu_result_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1527,"ysyx_22050612_npc exu alu0 alu_result_select i0 hit", false,-1);
        tracep->declBus(c+1958,"ysyx_22050612_npc exu alu0 alu_result_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu wdata_onebyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1871,"ysyx_22050612_npc exu wdata_onebyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu wdata_onebyte DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+464,"ysyx_22050612_npc exu wdata_onebyte out", false,-1, 63,0);
        tracep->declBus(c+1528,"ysyx_22050612_npc exu wdata_onebyte key", false,-1, 2,0);
        tracep->declArray(c+1529,"ysyx_22050612_npc exu wdata_onebyte lut", false,-1, 535,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu wdata_onebyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1871,"ysyx_22050612_npc exu wdata_onebyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu wdata_onebyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc exu wdata_onebyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+464,"ysyx_22050612_npc exu wdata_onebyte i0 out", false,-1, 63,0);
        tracep->declBus(c+1528,"ysyx_22050612_npc exu wdata_onebyte i0 key", false,-1, 2,0);
        tracep->declQuad(c+1923,"ysyx_22050612_npc exu wdata_onebyte i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1529,"ysyx_22050612_npc exu wdata_onebyte i0 lut", false,-1, 535,0);
        tracep->declBus(c+1959,"ysyx_22050612_npc exu wdata_onebyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declArray(c+1546+i*3,"ysyx_22050612_npc exu wdata_onebyte i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1570+i*1,"ysyx_22050612_npc exu wdata_onebyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declQuad(c+1578+i*2,"ysyx_22050612_npc exu wdata_onebyte i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1594,"ysyx_22050612_npc exu wdata_onebyte i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1596,"ysyx_22050612_npc exu wdata_onebyte i0 hit", false,-1);
        tracep->declBus(c+1926,"ysyx_22050612_npc exu wdata_onebyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu wmask_onebyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1871,"ysyx_22050612_npc exu wmask_onebyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu wmask_onebyte DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+463,"ysyx_22050612_npc exu wmask_onebyte out", false,-1, 7,0);
        tracep->declBus(c+1528,"ysyx_22050612_npc exu wmask_onebyte key", false,-1, 2,0);
        tracep->declArray(c+1960,"ysyx_22050612_npc exu wmask_onebyte lut", false,-1, 87,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu wmask_onebyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1871,"ysyx_22050612_npc exu wmask_onebyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu wmask_onebyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc exu wmask_onebyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+463,"ysyx_22050612_npc exu wmask_onebyte i0 out", false,-1, 7,0);
        tracep->declBus(c+1528,"ysyx_22050612_npc exu wmask_onebyte i0 key", false,-1, 2,0);
        tracep->declBus(c+1890,"ysyx_22050612_npc exu wmask_onebyte i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1960,"ysyx_22050612_npc exu wmask_onebyte i0 lut", false,-1, 87,0);
        tracep->declBus(c+1963,"ysyx_22050612_npc exu wmask_onebyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+295+i*1,"ysyx_22050612_npc exu wmask_onebyte i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+303+i*1,"ysyx_22050612_npc exu wmask_onebyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+311+i*1,"ysyx_22050612_npc exu wmask_onebyte i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1597,"ysyx_22050612_npc exu wmask_onebyte i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1598,"ysyx_22050612_npc exu wmask_onebyte i0 hit", false,-1);
        tracep->declBus(c+1926,"ysyx_22050612_npc exu wmask_onebyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1855,"ysyx_22050612_npc exu wdata_twobyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1871,"ysyx_22050612_npc exu wdata_twobyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu wdata_twobyte DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+467,"ysyx_22050612_npc exu wdata_twobyte out", false,-1, 63,0);
        tracep->declBus(c+1528,"ysyx_22050612_npc exu wdata_twobyte key", false,-1, 2,0);
        tracep->declArray(c+1599,"ysyx_22050612_npc exu wdata_twobyte lut", false,-1, 468,0);
        tracep->declBus(c+1855,"ysyx_22050612_npc exu wdata_twobyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1871,"ysyx_22050612_npc exu wdata_twobyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu wdata_twobyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc exu wdata_twobyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+467,"ysyx_22050612_npc exu wdata_twobyte i0 out", false,-1, 63,0);
        tracep->declBus(c+1528,"ysyx_22050612_npc exu wdata_twobyte i0 key", false,-1, 2,0);
        tracep->declQuad(c+1923,"ysyx_22050612_npc exu wdata_twobyte i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1599,"ysyx_22050612_npc exu wdata_twobyte i0 lut", false,-1, 468,0);
        tracep->declBus(c+1959,"ysyx_22050612_npc exu wdata_twobyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+1614+i*3,"ysyx_22050612_npc exu wdata_twobyte i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+1635+i*1,"ysyx_22050612_npc exu wdata_twobyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+1642+i*2,"ysyx_22050612_npc exu wdata_twobyte i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1656,"ysyx_22050612_npc exu wdata_twobyte i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1658,"ysyx_22050612_npc exu wdata_twobyte i0 hit", false,-1);
        tracep->declBus(c+1964,"ysyx_22050612_npc exu wdata_twobyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1855,"ysyx_22050612_npc exu wmask_twobyte NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1871,"ysyx_22050612_npc exu wmask_twobyte KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu wmask_twobyte DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+466,"ysyx_22050612_npc exu wmask_twobyte out", false,-1, 7,0);
        tracep->declBus(c+1528,"ysyx_22050612_npc exu wmask_twobyte key", false,-1, 2,0);
        tracep->declArray(c+1965,"ysyx_22050612_npc exu wmask_twobyte lut", false,-1, 76,0);
        tracep->declBus(c+1855,"ysyx_22050612_npc exu wmask_twobyte i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1871,"ysyx_22050612_npc exu wmask_twobyte i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu wmask_twobyte i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc exu wmask_twobyte i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+466,"ysyx_22050612_npc exu wmask_twobyte i0 out", false,-1, 7,0);
        tracep->declBus(c+1528,"ysyx_22050612_npc exu wmask_twobyte i0 key", false,-1, 2,0);
        tracep->declBus(c+1890,"ysyx_22050612_npc exu wmask_twobyte i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1965,"ysyx_22050612_npc exu wmask_twobyte i0 lut", false,-1, 76,0);
        tracep->declBus(c+1963,"ysyx_22050612_npc exu wmask_twobyte i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+319+i*1,"ysyx_22050612_npc exu wmask_twobyte i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+326+i*1,"ysyx_22050612_npc exu wmask_twobyte i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+333+i*1,"ysyx_22050612_npc exu wmask_twobyte i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1659,"ysyx_22050612_npc exu wmask_twobyte i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1660,"ysyx_22050612_npc exu wmask_twobyte i0 hit", false,-1);
        tracep->declBus(c+1964,"ysyx_22050612_npc exu wmask_twobyte i0 i", false,-1, 31,0);
        tracep->declBus(c+1871,"ysyx_22050612_npc exu raddr_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu raddr_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu raddr_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+469,"ysyx_22050612_npc exu raddr_select out", false,-1, 63,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu raddr_select key", false,-1, 19,0);
        tracep->declArray(c+1661,"ysyx_22050612_npc exu raddr_select lut", false,-1, 251,0);
        tracep->declBus(c+1871,"ysyx_22050612_npc exu raddr_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu raddr_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu raddr_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc exu raddr_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+469,"ysyx_22050612_npc exu raddr_select i0 out", false,-1, 63,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu raddr_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+1923,"ysyx_22050612_npc exu raddr_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1661,"ysyx_22050612_npc exu raddr_select i0 lut", false,-1, 251,0);
        tracep->declBus(c+1925,"ysyx_22050612_npc exu raddr_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+1669+i*3,"ysyx_22050612_npc exu raddr_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1678+i*1,"ysyx_22050612_npc exu raddr_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+1681+i*2,"ysyx_22050612_npc exu raddr_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1687,"ysyx_22050612_npc exu raddr_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1689,"ysyx_22050612_npc exu raddr_select i0 hit", false,-1);
        tracep->declBus(c+1876,"ysyx_22050612_npc exu raddr_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1968,"ysyx_22050612_npc exu waddr_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu waddr_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu waddr_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+473,"ysyx_22050612_npc exu waddr_select out", false,-1, 63,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu waddr_select key", false,-1, 19,0);
        tracep->declArray(c+1690,"ysyx_22050612_npc exu waddr_select lut", false,-1, 335,0);
        tracep->declBus(c+1968,"ysyx_22050612_npc exu waddr_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu waddr_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu waddr_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc exu waddr_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+473,"ysyx_22050612_npc exu waddr_select i0 out", false,-1, 63,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu waddr_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+1923,"ysyx_22050612_npc exu waddr_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1690,"ysyx_22050612_npc exu waddr_select i0 lut", false,-1, 335,0);
        tracep->declBus(c+1925,"ysyx_22050612_npc exu waddr_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+1701+i*3,"ysyx_22050612_npc exu waddr_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1713+i*1,"ysyx_22050612_npc exu waddr_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1717+i*2,"ysyx_22050612_npc exu waddr_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1725,"ysyx_22050612_npc exu waddr_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1727,"ysyx_22050612_npc exu waddr_select i0 hit", false,-1);
        tracep->declBus(c+1969,"ysyx_22050612_npc exu waddr_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1968,"ysyx_22050612_npc exu wdata_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu wdata_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu wdata_select DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+475,"ysyx_22050612_npc exu wdata_select out", false,-1, 63,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu wdata_select key", false,-1, 19,0);
        tracep->declArray(c+1728,"ysyx_22050612_npc exu wdata_select lut", false,-1, 335,0);
        tracep->declBus(c+1968,"ysyx_22050612_npc exu wdata_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu wdata_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu wdata_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc exu wdata_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+475,"ysyx_22050612_npc exu wdata_select i0 out", false,-1, 63,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu wdata_select i0 key", false,-1, 19,0);
        tracep->declQuad(c+1923,"ysyx_22050612_npc exu wdata_select i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1728,"ysyx_22050612_npc exu wdata_select i0 lut", false,-1, 335,0);
        tracep->declBus(c+1925,"ysyx_22050612_npc exu wdata_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+1739+i*3,"ysyx_22050612_npc exu wdata_select i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1751+i*1,"ysyx_22050612_npc exu wdata_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1755+i*2,"ysyx_22050612_npc exu wdata_select i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1763,"ysyx_22050612_npc exu wdata_select i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1765,"ysyx_22050612_npc exu wdata_select i0 hit", false,-1);
        tracep->declBus(c+1969,"ysyx_22050612_npc exu wdata_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1968,"ysyx_22050612_npc exu wmask_select NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu wmask_select KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu wmask_select DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+477,"ysyx_22050612_npc exu wmask_select out", false,-1, 7,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu wmask_select key", false,-1, 19,0);
        tracep->declArray(c+1766,"ysyx_22050612_npc exu wmask_select lut", false,-1, 111,0);
        tracep->declBus(c+1968,"ysyx_22050612_npc exu wmask_select i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu wmask_select i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu wmask_select i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc exu wmask_select i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+477,"ysyx_22050612_npc exu wmask_select i0 out", false,-1, 7,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu wmask_select i0 key", false,-1, 19,0);
        tracep->declBus(c+1890,"ysyx_22050612_npc exu wmask_select i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1766,"ysyx_22050612_npc exu wmask_select i0 lut", false,-1, 111,0);
        tracep->declBus(c+1898,"ysyx_22050612_npc exu wmask_select i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1770+i*1,"ysyx_22050612_npc exu wmask_select i0 pair_list", true,(i+0), 27,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1774+i*1,"ysyx_22050612_npc exu wmask_select i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1778+i*1,"ysyx_22050612_npc exu wmask_select i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1782,"ysyx_22050612_npc exu wmask_select i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1783,"ysyx_22050612_npc exu wmask_select i0 hit", false,-1);
        tracep->declBus(c+1969,"ysyx_22050612_npc exu wmask_select i0 i", false,-1, 31,0);
        tracep->declBus(c+1871,"ysyx_22050612_npc exu rdata_fixing NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu rdata_fixing KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu rdata_fixing DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+478,"ysyx_22050612_npc exu rdata_fixing out", false,-1, 63,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu rdata_fixing key", false,-1, 19,0);
        tracep->declArray(c+1784,"ysyx_22050612_npc exu rdata_fixing lut", false,-1, 251,0);
        tracep->declBus(c+1871,"ysyx_22050612_npc exu rdata_fixing i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1899,"ysyx_22050612_npc exu rdata_fixing i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1849,"ysyx_22050612_npc exu rdata_fixing i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc exu rdata_fixing i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+478,"ysyx_22050612_npc exu rdata_fixing i0 out", false,-1, 63,0);
        tracep->declBus(c+357,"ysyx_22050612_npc exu rdata_fixing i0 key", false,-1, 19,0);
        tracep->declQuad(c+1923,"ysyx_22050612_npc exu rdata_fixing i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1784,"ysyx_22050612_npc exu rdata_fixing i0 lut", false,-1, 251,0);
        tracep->declBus(c+1925,"ysyx_22050612_npc exu rdata_fixing i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+1792+i*3,"ysyx_22050612_npc exu rdata_fixing i0 pair_list", true,(i+0), 83,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1801+i*1,"ysyx_22050612_npc exu rdata_fixing i0 key_list", true,(i+0), 19,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+1804+i*2,"ysyx_22050612_npc exu rdata_fixing i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1810,"ysyx_22050612_npc exu rdata_fixing i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1812,"ysyx_22050612_npc exu rdata_fixing i0 hit", false,-1);
        tracep->declBus(c+1876,"ysyx_22050612_npc exu rdata_fixing i0 i", false,-1, 31,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu rdata_1byte_fix NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1871,"ysyx_22050612_npc exu rdata_1byte_fix KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu rdata_1byte_fix DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+480,"ysyx_22050612_npc exu rdata_1byte_fix out", false,-1, 7,0);
        tracep->declBus(c+1813,"ysyx_22050612_npc exu rdata_1byte_fix key", false,-1, 2,0);
        tracep->declArray(c+1814,"ysyx_22050612_npc exu rdata_1byte_fix lut", false,-1, 87,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu rdata_1byte_fix i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1871,"ysyx_22050612_npc exu rdata_1byte_fix i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1878,"ysyx_22050612_npc exu rdata_1byte_fix i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1867,"ysyx_22050612_npc exu rdata_1byte_fix i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+480,"ysyx_22050612_npc exu rdata_1byte_fix i0 out", false,-1, 7,0);
        tracep->declBus(c+1813,"ysyx_22050612_npc exu rdata_1byte_fix i0 key", false,-1, 2,0);
        tracep->declBus(c+1890,"ysyx_22050612_npc exu rdata_1byte_fix i0 default_out", false,-1, 7,0);
        tracep->declArray(c+1814,"ysyx_22050612_npc exu rdata_1byte_fix i0 lut", false,-1, 87,0);
        tracep->declBus(c+1963,"ysyx_22050612_npc exu rdata_1byte_fix i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1817+i*1,"ysyx_22050612_npc exu rdata_1byte_fix i0 pair_list", true,(i+0), 10,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1825+i*1,"ysyx_22050612_npc exu rdata_1byte_fix i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+1833+i*1,"ysyx_22050612_npc exu rdata_1byte_fix i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+1841,"ysyx_22050612_npc exu rdata_1byte_fix i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+1842,"ysyx_22050612_npc exu rdata_1byte_fix i0 hit", false,-1);
        tracep->declBus(c+1926,"ysyx_22050612_npc exu rdata_1byte_fix i0 i", false,-1, 31,0);
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

extern const VlWide<11>/*351:0*/ Vysyx_22050612_npc__ConstPool__CONST_ac734264_0;
extern const VlWide<11>/*351:0*/ Vysyx_22050612_npc__ConstPool__CONST_b50aa67b_0;
extern const VlWide<19>/*607:0*/ Vysyx_22050612_npc__ConstPool__CONST_9f0fa95b_0;
extern const VlWide<28>/*895:0*/ Vysyx_22050612_npc__ConstPool__CONST_bb75f393_0;

void Vysyx_22050612_npc___024root__traceFullSub0(Vysyx_22050612_npc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050612_npc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp2909;
    VlWide<3>/*95:0*/ __Vtemp2910;
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
        tracep->fullSData(oldp+20,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[0]),10);
        tracep->fullSData(oldp+21,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[1]),10);
        tracep->fullSData(oldp+22,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[2]),10);
        tracep->fullSData(oldp+23,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[3]),10);
        tracep->fullSData(oldp+24,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[4]),10);
        tracep->fullSData(oldp+25,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[5]),10);
        tracep->fullSData(oldp+26,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[6]),10);
        tracep->fullSData(oldp+27,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[7]),10);
        tracep->fullSData(oldp+28,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[8]),10);
        tracep->fullSData(oldp+29,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[9]),10);
        tracep->fullSData(oldp+30,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[10]),10);
        tracep->fullSData(oldp+31,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[11]),10);
        tracep->fullSData(oldp+32,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[12]),10);
        tracep->fullSData(oldp+33,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[13]),10);
        tracep->fullSData(oldp+34,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[14]),10);
        tracep->fullSData(oldp+35,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[15]),10);
        tracep->fullSData(oldp+36,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[16]),10);
        tracep->fullSData(oldp+37,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[17]),10);
        tracep->fullSData(oldp+38,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__key_list[18]),10);
        tracep->fullCData(oldp+39,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[0]),7);
        tracep->fullCData(oldp+40,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[1]),7);
        tracep->fullCData(oldp+41,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[2]),7);
        tracep->fullCData(oldp+42,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[3]),7);
        tracep->fullCData(oldp+43,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[4]),7);
        tracep->fullCData(oldp+44,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[5]),7);
        tracep->fullCData(oldp+45,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[6]),7);
        tracep->fullCData(oldp+46,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[7]),7);
        tracep->fullCData(oldp+47,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[8]),7);
        tracep->fullCData(oldp+48,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[9]),7);
        tracep->fullCData(oldp+49,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[10]),7);
        tracep->fullCData(oldp+50,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[11]),7);
        tracep->fullCData(oldp+51,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[12]),7);
        tracep->fullCData(oldp+52,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[13]),7);
        tracep->fullCData(oldp+53,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[14]),7);
        tracep->fullCData(oldp+54,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[15]),7);
        tracep->fullCData(oldp+55,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[16]),7);
        tracep->fullCData(oldp+56,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[17]),7);
        tracep->fullCData(oldp+57,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__data_list[18]),7);
        tracep->fullSData(oldp+58,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[0]),9);
        tracep->fullSData(oldp+59,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[1]),9);
        tracep->fullSData(oldp+60,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__pair_list[2]),9);
        tracep->fullCData(oldp+61,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+62,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+63,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+64,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+65,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+66,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__data_list[2]),2);
        tracep->fullIData(oldp+67,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[0]),25);
        tracep->fullIData(oldp+68,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[1]),25);
        tracep->fullIData(oldp+69,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[2]),25);
        tracep->fullIData(oldp+70,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[3]),25);
        tracep->fullIData(oldp+71,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[4]),25);
        tracep->fullIData(oldp+72,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[5]),25);
        tracep->fullIData(oldp+73,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[6]),25);
        tracep->fullIData(oldp+74,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[7]),25);
        tracep->fullIData(oldp+75,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[8]),25);
        tracep->fullIData(oldp+76,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[9]),25);
        tracep->fullIData(oldp+77,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[10]),25);
        tracep->fullIData(oldp+78,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[11]),25);
        tracep->fullIData(oldp+79,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__pair_list[12]),25);
        tracep->fullIData(oldp+80,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[0]),17);
        tracep->fullIData(oldp+81,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[1]),17);
        tracep->fullIData(oldp+82,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[2]),17);
        tracep->fullIData(oldp+83,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[3]),17);
        tracep->fullIData(oldp+84,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[4]),17);
        tracep->fullIData(oldp+85,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[5]),17);
        tracep->fullIData(oldp+86,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[6]),17);
        tracep->fullIData(oldp+87,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[7]),17);
        tracep->fullIData(oldp+88,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[8]),17);
        tracep->fullIData(oldp+89,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[9]),17);
        tracep->fullIData(oldp+90,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[10]),17);
        tracep->fullIData(oldp+91,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[11]),17);
        tracep->fullIData(oldp+92,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__key_list[12]),17);
        tracep->fullCData(oldp+93,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+94,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+95,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+96,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+97,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+98,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+99,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+100,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+101,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[8]),8);
        tracep->fullCData(oldp+102,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[9]),8);
        tracep->fullCData(oldp+103,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[10]),8);
        tracep->fullCData(oldp+104,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[11]),8);
        tracep->fullCData(oldp+105,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__data_list[12]),8);
        tracep->fullIData(oldp+106,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list[0]),18);
        tracep->fullIData(oldp+107,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list[1]),18);
        tracep->fullIData(oldp+108,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__pair_list[2]),18);
        tracep->fullSData(oldp+109,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[0]),16);
        tracep->fullSData(oldp+110,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[1]),16);
        tracep->fullSData(oldp+111,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__key_list[2]),16);
        tracep->fullCData(oldp+112,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[0]),2);
        tracep->fullCData(oldp+113,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[1]),2);
        tracep->fullCData(oldp+114,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__data_list[2]),2);
        tracep->fullIData(oldp+115,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[0]),21);
        tracep->fullIData(oldp+116,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[1]),21);
        tracep->fullIData(oldp+117,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[2]),21);
        tracep->fullIData(oldp+118,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[3]),21);
        tracep->fullIData(oldp+119,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[4]),21);
        tracep->fullIData(oldp+120,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[5]),21);
        tracep->fullIData(oldp+121,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[6]),21);
        tracep->fullIData(oldp+122,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[7]),21);
        tracep->fullIData(oldp+123,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[8]),21);
        tracep->fullIData(oldp+124,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[9]),21);
        tracep->fullIData(oldp+125,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[10]),21);
        tracep->fullIData(oldp+126,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[11]),21);
        tracep->fullIData(oldp+127,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[12]),21);
        tracep->fullIData(oldp+128,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[13]),21);
        tracep->fullIData(oldp+129,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[14]),21);
        tracep->fullIData(oldp+130,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[15]),21);
        tracep->fullIData(oldp+131,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[16]),21);
        tracep->fullIData(oldp+132,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[17]),21);
        tracep->fullIData(oldp+133,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[18]),21);
        tracep->fullIData(oldp+134,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[19]),21);
        tracep->fullIData(oldp+135,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[20]),21);
        tracep->fullIData(oldp+136,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[21]),21);
        tracep->fullIData(oldp+137,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[22]),21);
        tracep->fullIData(oldp+138,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[23]),21);
        tracep->fullIData(oldp+139,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[24]),21);
        tracep->fullIData(oldp+140,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[25]),21);
        tracep->fullIData(oldp+141,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[26]),21);
        tracep->fullIData(oldp+142,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__pair_list[27]),21);
        tracep->fullIData(oldp+143,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+144,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+145,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+146,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+147,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+148,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+149,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+150,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+151,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+152,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+153,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+154,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[11]),20);
        tracep->fullIData(oldp+155,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[12]),20);
        tracep->fullIData(oldp+156,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[13]),20);
        tracep->fullIData(oldp+157,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[14]),20);
        tracep->fullIData(oldp+158,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[15]),20);
        tracep->fullIData(oldp+159,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[16]),20);
        tracep->fullIData(oldp+160,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[17]),20);
        tracep->fullIData(oldp+161,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[18]),20);
        tracep->fullIData(oldp+162,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[19]),20);
        tracep->fullIData(oldp+163,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[20]),20);
        tracep->fullIData(oldp+164,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[21]),20);
        tracep->fullIData(oldp+165,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[22]),20);
        tracep->fullIData(oldp+166,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[23]),20);
        tracep->fullIData(oldp+167,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[24]),20);
        tracep->fullIData(oldp+168,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[25]),20);
        tracep->fullIData(oldp+169,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[26]),20);
        tracep->fullIData(oldp+170,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__key_list[27]),20);
        tracep->fullBit(oldp+171,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+172,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+173,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[2]));
        tracep->fullBit(oldp+174,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[3]));
        tracep->fullBit(oldp+175,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[4]));
        tracep->fullBit(oldp+176,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[5]));
        tracep->fullBit(oldp+177,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[6]));
        tracep->fullBit(oldp+178,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[7]));
        tracep->fullBit(oldp+179,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[8]));
        tracep->fullBit(oldp+180,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[9]));
        tracep->fullBit(oldp+181,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[10]));
        tracep->fullBit(oldp+182,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[11]));
        tracep->fullBit(oldp+183,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[12]));
        tracep->fullBit(oldp+184,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[13]));
        tracep->fullBit(oldp+185,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[14]));
        tracep->fullBit(oldp+186,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[15]));
        tracep->fullBit(oldp+187,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[16]));
        tracep->fullBit(oldp+188,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[17]));
        tracep->fullBit(oldp+189,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[18]));
        tracep->fullBit(oldp+190,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[19]));
        tracep->fullBit(oldp+191,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[20]));
        tracep->fullBit(oldp+192,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[21]));
        tracep->fullBit(oldp+193,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[22]));
        tracep->fullBit(oldp+194,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[23]));
        tracep->fullBit(oldp+195,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[24]));
        tracep->fullBit(oldp+196,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[25]));
        tracep->fullBit(oldp+197,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[26]));
        tracep->fullBit(oldp+198,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__data_list[27]));
        tracep->fullIData(oldp+199,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[0]),28);
        tracep->fullIData(oldp+200,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[1]),28);
        tracep->fullIData(oldp+201,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[2]),28);
        tracep->fullIData(oldp+202,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[3]),28);
        tracep->fullIData(oldp+203,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[4]),28);
        tracep->fullIData(oldp+204,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[5]),28);
        tracep->fullIData(oldp+205,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[6]),28);
        tracep->fullIData(oldp+206,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[7]),28);
        tracep->fullIData(oldp+207,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[8]),28);
        tracep->fullIData(oldp+208,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[9]),28);
        tracep->fullIData(oldp+209,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[10]),28);
        tracep->fullIData(oldp+210,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[11]),28);
        tracep->fullIData(oldp+211,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[12]),28);
        tracep->fullIData(oldp+212,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[13]),28);
        tracep->fullIData(oldp+213,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[14]),28);
        tracep->fullIData(oldp+214,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[15]),28);
        tracep->fullIData(oldp+215,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[16]),28);
        tracep->fullIData(oldp+216,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[17]),28);
        tracep->fullIData(oldp+217,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[18]),28);
        tracep->fullIData(oldp+218,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[19]),28);
        tracep->fullIData(oldp+219,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[20]),28);
        tracep->fullIData(oldp+220,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[21]),28);
        tracep->fullIData(oldp+221,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[22]),28);
        tracep->fullIData(oldp+222,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[23]),28);
        tracep->fullIData(oldp+223,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[24]),28);
        tracep->fullIData(oldp+224,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[25]),28);
        tracep->fullIData(oldp+225,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[26]),28);
        tracep->fullIData(oldp+226,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[27]),28);
        tracep->fullIData(oldp+227,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[28]),28);
        tracep->fullIData(oldp+228,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[29]),28);
        tracep->fullIData(oldp+229,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[30]),28);
        tracep->fullIData(oldp+230,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__pair_list[31]),28);
        tracep->fullIData(oldp+231,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+232,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+233,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+234,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+235,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+236,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+237,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+238,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+239,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+240,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+241,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+242,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[11]),20);
        tracep->fullIData(oldp+243,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[12]),20);
        tracep->fullIData(oldp+244,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[13]),20);
        tracep->fullIData(oldp+245,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[14]),20);
        tracep->fullIData(oldp+246,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[15]),20);
        tracep->fullIData(oldp+247,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[16]),20);
        tracep->fullIData(oldp+248,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[17]),20);
        tracep->fullIData(oldp+249,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[18]),20);
        tracep->fullIData(oldp+250,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[19]),20);
        tracep->fullIData(oldp+251,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[20]),20);
        tracep->fullIData(oldp+252,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[21]),20);
        tracep->fullIData(oldp+253,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[22]),20);
        tracep->fullIData(oldp+254,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[23]),20);
        tracep->fullIData(oldp+255,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[24]),20);
        tracep->fullIData(oldp+256,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[25]),20);
        tracep->fullIData(oldp+257,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[26]),20);
        tracep->fullIData(oldp+258,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[27]),20);
        tracep->fullIData(oldp+259,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[28]),20);
        tracep->fullIData(oldp+260,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[29]),20);
        tracep->fullIData(oldp+261,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[30]),20);
        tracep->fullIData(oldp+262,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__key_list[31]),20);
        tracep->fullCData(oldp+263,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+264,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+265,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+266,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+267,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+268,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+269,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+270,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+271,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[8]),8);
        tracep->fullCData(oldp+272,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[9]),8);
        tracep->fullCData(oldp+273,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[10]),8);
        tracep->fullCData(oldp+274,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[11]),8);
        tracep->fullCData(oldp+275,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[12]),8);
        tracep->fullCData(oldp+276,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[13]),8);
        tracep->fullCData(oldp+277,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[14]),8);
        tracep->fullCData(oldp+278,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[15]),8);
        tracep->fullCData(oldp+279,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[16]),8);
        tracep->fullCData(oldp+280,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[17]),8);
        tracep->fullCData(oldp+281,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[18]),8);
        tracep->fullCData(oldp+282,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[19]),8);
        tracep->fullCData(oldp+283,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[20]),8);
        tracep->fullCData(oldp+284,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[21]),8);
        tracep->fullCData(oldp+285,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[22]),8);
        tracep->fullCData(oldp+286,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[23]),8);
        tracep->fullCData(oldp+287,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[24]),8);
        tracep->fullCData(oldp+288,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[25]),8);
        tracep->fullCData(oldp+289,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[26]),8);
        tracep->fullCData(oldp+290,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[27]),8);
        tracep->fullCData(oldp+291,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[28]),8);
        tracep->fullCData(oldp+292,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[29]),8);
        tracep->fullCData(oldp+293,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[30]),8);
        tracep->fullCData(oldp+294,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__data_list[31]),8);
        tracep->fullSData(oldp+295,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+296,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+297,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+298,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+299,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+300,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+301,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullSData(oldp+302,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__pair_list[7]),11);
        tracep->fullCData(oldp+303,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+304,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+305,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+306,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+307,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+308,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+309,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+310,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__key_list[7]),3);
        tracep->fullCData(oldp+311,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+312,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+313,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+314,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+315,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+316,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+317,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+318,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__data_list[7]),8);
        tracep->fullSData(oldp+319,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+320,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+321,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+322,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+323,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+324,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+325,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullCData(oldp+326,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+327,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+328,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+329,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+330,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+331,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+332,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+333,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+334,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+335,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+336,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+337,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+338,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+339,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__data_list[6]),8);
        tracep->fullIData(oldp+340,(vlSelf->ysyx_22050612_npc__DOT__inst),32);
        tracep->fullQData(oldp+341,(vlSelf->ysyx_22050612_npc__DOT__dnpc),64);
        tracep->fullQData(oldp+343,(vlSelf->ysyx_22050612_npc__DOT__imm_I),64);
        tracep->fullQData(oldp+345,(vlSelf->ysyx_22050612_npc__DOT__imm_U),64);
        tracep->fullQData(oldp+347,(((vlSelf->ysyx_22050612_npc__DOT__inst 
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
        tracep->fullQData(oldp+349,(vlSelf->ysyx_22050612_npc__DOT__imm_B),64);
        tracep->fullQData(oldp+351,(vlSelf->ysyx_22050612_npc__DOT__imm_S),64);
        tracep->fullCData(oldp+353,((0x3fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0x14U))),6);
        tracep->fullCData(oldp+354,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+355,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+356,((0x1fU & (vlSelf->ysyx_22050612_npc__DOT__inst 
                                              >> 0x14U))),5);
        tracep->fullIData(oldp+357,(vlSelf->ysyx_22050612_npc__DOT__opcode),20);
        tracep->fullQData(oldp+358,(vlSelf->ysyx_22050612_npc__DOT__ifu__DOT__inst_mix),64);
        tracep->fullCData(oldp+360,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode0____pinNumber1),7);
        tracep->fullSData(oldp+361,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode0____pinNumber2),10);
        tracep->fullCData(oldp+362,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__lut_out),7);
        tracep->fullBit(oldp+363,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode0__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+364,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode1____pinNumber1),2);
        tracep->fullCData(oldp+365,((0x7fU & vlSelf->ysyx_22050612_npc__DOT__inst)),7);
        tracep->fullCData(oldp+366,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+367,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode1__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+368,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode2____pinNumber1),8);
        tracep->fullIData(oldp+369,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode2____pinNumber2),17);
        tracep->fullCData(oldp+370,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+371,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode2__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+372,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellout__decode3____pinNumber1),2);
        tracep->fullSData(oldp+373,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT____Vcellinp__decode3____pinNumber2),16);
        tracep->fullCData(oldp+374,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__lut_out),2);
        tracep->fullBit(oldp+375,(vlSelf->ysyx_22050612_npc__DOT__idu__DOT__decode3__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+376,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1),64);
        tracep->fullQData(oldp+378,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2),64);
        tracep->fullQData(oldp+380,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_reg),64);
        tracep->fullBit(oldp+382,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen));
        tracep->fullBit(oldp+383,(((0U != (0x1fU & 
                                           (vlSelf->ysyx_22050612_npc__DOT__inst 
                                            >> 7U))) 
                                   & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wen))));
        tracep->fullQData(oldp+384,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[0]),64);
        tracep->fullQData(oldp+386,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[1]),64);
        tracep->fullQData(oldp+388,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[2]),64);
        tracep->fullQData(oldp+390,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[3]),64);
        tracep->fullQData(oldp+392,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[4]),64);
        tracep->fullQData(oldp+394,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[5]),64);
        tracep->fullQData(oldp+396,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[6]),64);
        tracep->fullQData(oldp+398,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[7]),64);
        tracep->fullQData(oldp+400,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[8]),64);
        tracep->fullQData(oldp+402,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[9]),64);
        tracep->fullQData(oldp+404,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[10]),64);
        tracep->fullQData(oldp+406,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[11]),64);
        tracep->fullQData(oldp+408,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[12]),64);
        tracep->fullQData(oldp+410,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[13]),64);
        tracep->fullQData(oldp+412,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[14]),64);
        tracep->fullQData(oldp+414,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[15]),64);
        tracep->fullQData(oldp+416,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[16]),64);
        tracep->fullQData(oldp+418,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[17]),64);
        tracep->fullQData(oldp+420,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[18]),64);
        tracep->fullQData(oldp+422,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[19]),64);
        tracep->fullQData(oldp+424,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[20]),64);
        tracep->fullQData(oldp+426,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[21]),64);
        tracep->fullQData(oldp+428,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[22]),64);
        tracep->fullQData(oldp+430,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[23]),64);
        tracep->fullQData(oldp+432,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[24]),64);
        tracep->fullQData(oldp+434,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[25]),64);
        tracep->fullQData(oldp+436,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[26]),64);
        tracep->fullQData(oldp+438,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[27]),64);
        tracep->fullQData(oldp+440,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[28]),64);
        tracep->fullQData(oldp+442,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[29]),64);
        tracep->fullQData(oldp+444,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[30]),64);
        tracep->fullQData(oldp+446,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr[31]),64);
        tracep->fullCData(oldp+448,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode),8);
        tracep->fullQData(oldp+449,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a),64);
        tracep->fullQData(oldp+451,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b),64);
        tracep->fullQData(oldp+453,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_alu0),64);
        tracep->fullQData(oldp+455,(VL_DIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)),64);
        tracep->fullQData(oldp+457,(VL_MODDIV_QQQ(64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src1, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__src2)),64);
        tracep->fullQData(oldp+459,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_mulw0),64);
        tracep->fullIData(oldp+461,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_divw0),32);
        tracep->fullIData(oldp+462,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__result_remw0),32);
        tracep->fullCData(oldp+463,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_1byte),8);
        tracep->fullQData(oldp+464,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_1byte),64);
        tracep->fullCData(oldp+466,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_2byte),8);
        tracep->fullQData(oldp+467,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_2byte),64);
        tracep->fullQData(oldp+469,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr),64);
        tracep->fullQData(oldp+471,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata),64);
        tracep->fullQData(oldp+473,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr),64);
        tracep->fullQData(oldp+475,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata),64);
        tracep->fullCData(oldp+477,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask),8);
        tracep->fullQData(oldp+478,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fix),64);
        tracep->fullCData(oldp+480,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte),8);
        tracep->fullQData(oldp+481,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[0]),64);
        tracep->fullQData(oldp+483,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[1]),64);
        tracep->fullQData(oldp+485,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[2]),64);
        tracep->fullQData(oldp+487,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[3]),64);
        tracep->fullQData(oldp+489,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[4]),64);
        tracep->fullQData(oldp+491,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[5]),64);
        tracep->fullQData(oldp+493,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[6]),64);
        tracep->fullQData(oldp+495,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[7]),64);
        tracep->fullQData(oldp+497,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[8]),64);
        tracep->fullQData(oldp+499,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[9]),64);
        tracep->fullQData(oldp+501,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[10]),64);
        tracep->fullQData(oldp+503,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[11]),64);
        tracep->fullQData(oldp+505,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[12]),64);
        tracep->fullQData(oldp+507,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[13]),64);
        tracep->fullQData(oldp+509,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[14]),64);
        tracep->fullQData(oldp+511,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[15]),64);
        tracep->fullQData(oldp+513,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[16]),64);
        tracep->fullQData(oldp+515,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[17]),64);
        tracep->fullQData(oldp+517,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[18]),64);
        tracep->fullQData(oldp+519,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[19]),64);
        tracep->fullQData(oldp+521,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[20]),64);
        tracep->fullQData(oldp+523,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[21]),64);
        tracep->fullQData(oldp+525,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[22]),64);
        tracep->fullQData(oldp+527,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[23]),64);
        tracep->fullQData(oldp+529,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[24]),64);
        tracep->fullQData(oldp+531,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[25]),64);
        tracep->fullQData(oldp+533,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[26]),64);
        tracep->fullQData(oldp+535,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[27]),64);
        tracep->fullQData(oldp+537,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[28]),64);
        tracep->fullQData(oldp+539,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[29]),64);
        tracep->fullQData(oldp+541,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[30]),64);
        tracep->fullQData(oldp+543,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellout__cpu_gpr_group____pinNumber5[31]),64);
        tracep->fullBit(oldp+545,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+546,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_enable__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+547,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__gpr_write_data____pinNumber3),2352);
        tracep->fullWData(oldp+621,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+624,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+627,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+630,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+633,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+636,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+639,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullWData(oldp+642,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[7]),84);
        tracep->fullWData(oldp+645,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[8]),84);
        tracep->fullWData(oldp+648,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[9]),84);
        tracep->fullWData(oldp+651,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[10]),84);
        tracep->fullWData(oldp+654,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[11]),84);
        tracep->fullWData(oldp+657,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[12]),84);
        tracep->fullWData(oldp+660,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[13]),84);
        tracep->fullWData(oldp+663,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[14]),84);
        tracep->fullWData(oldp+666,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[15]),84);
        tracep->fullWData(oldp+669,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[16]),84);
        tracep->fullWData(oldp+672,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[17]),84);
        tracep->fullWData(oldp+675,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[18]),84);
        tracep->fullWData(oldp+678,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[19]),84);
        tracep->fullWData(oldp+681,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[20]),84);
        tracep->fullWData(oldp+684,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[21]),84);
        tracep->fullWData(oldp+687,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[22]),84);
        tracep->fullWData(oldp+690,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[23]),84);
        tracep->fullWData(oldp+693,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[24]),84);
        tracep->fullWData(oldp+696,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[25]),84);
        tracep->fullWData(oldp+699,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[26]),84);
        tracep->fullWData(oldp+702,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__pair_list[27]),84);
        tracep->fullIData(oldp+705,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+706,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+707,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+708,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+709,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+710,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+711,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+712,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+713,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+714,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+715,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+716,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[11]),20);
        tracep->fullIData(oldp+717,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[12]),20);
        tracep->fullIData(oldp+718,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[13]),20);
        tracep->fullIData(oldp+719,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[14]),20);
        tracep->fullIData(oldp+720,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[15]),20);
        tracep->fullIData(oldp+721,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[16]),20);
        tracep->fullIData(oldp+722,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[17]),20);
        tracep->fullIData(oldp+723,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[18]),20);
        tracep->fullIData(oldp+724,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[19]),20);
        tracep->fullIData(oldp+725,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[20]),20);
        tracep->fullIData(oldp+726,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[21]),20);
        tracep->fullIData(oldp+727,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[22]),20);
        tracep->fullIData(oldp+728,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[23]),20);
        tracep->fullIData(oldp+729,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[24]),20);
        tracep->fullIData(oldp+730,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[25]),20);
        tracep->fullIData(oldp+731,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[26]),20);
        tracep->fullIData(oldp+732,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__key_list[27]),20);
        tracep->fullQData(oldp+733,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+735,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+737,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+739,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+741,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+743,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+745,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+747,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+749,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+751,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+753,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+755,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+757,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+759,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+761,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+763,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+765,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+767,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+769,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+771,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+773,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+775,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+777,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+779,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+781,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+783,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+785,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+787,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+789,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+791,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__gpr_write_data__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+792,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__cpu_pc____pinNumber4),672);
        tracep->fullWData(oldp+813,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+816,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+819,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+822,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+825,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+828,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+831,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullWData(oldp+834,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__pair_list[7]),84);
        tracep->fullIData(oldp+837,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+838,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+839,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+840,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+841,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+842,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+843,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+844,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__key_list[7]),20);
        tracep->fullQData(oldp+845,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+847,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+849,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+851,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+853,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+855,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+857,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+859,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+861,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+863,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__cpu_pc__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+864,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator0____pinNumber3),2688);
        tracep->fullWData(oldp+948,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+951,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+954,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+957,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+960,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+963,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+966,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullWData(oldp+969,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[7]),84);
        tracep->fullWData(oldp+972,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[8]),84);
        tracep->fullWData(oldp+975,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[9]),84);
        tracep->fullWData(oldp+978,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[10]),84);
        tracep->fullWData(oldp+981,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[11]),84);
        tracep->fullWData(oldp+984,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[12]),84);
        tracep->fullWData(oldp+987,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[13]),84);
        tracep->fullWData(oldp+990,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[14]),84);
        tracep->fullWData(oldp+993,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[15]),84);
        tracep->fullWData(oldp+996,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[16]),84);
        tracep->fullWData(oldp+999,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[17]),84);
        tracep->fullWData(oldp+1002,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[18]),84);
        tracep->fullWData(oldp+1005,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[19]),84);
        tracep->fullWData(oldp+1008,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[20]),84);
        tracep->fullWData(oldp+1011,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[21]),84);
        tracep->fullWData(oldp+1014,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[22]),84);
        tracep->fullWData(oldp+1017,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[23]),84);
        tracep->fullWData(oldp+1020,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[24]),84);
        tracep->fullWData(oldp+1023,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[25]),84);
        tracep->fullWData(oldp+1026,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[26]),84);
        tracep->fullWData(oldp+1029,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[27]),84);
        tracep->fullWData(oldp+1032,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[28]),84);
        tracep->fullWData(oldp+1035,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[29]),84);
        tracep->fullWData(oldp+1038,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[30]),84);
        tracep->fullWData(oldp+1041,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__pair_list[31]),84);
        tracep->fullIData(oldp+1044,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1045,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1046,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+1047,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+1048,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+1049,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+1050,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+1051,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+1052,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+1053,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+1054,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+1055,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[11]),20);
        tracep->fullIData(oldp+1056,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[12]),20);
        tracep->fullIData(oldp+1057,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[13]),20);
        tracep->fullIData(oldp+1058,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[14]),20);
        tracep->fullIData(oldp+1059,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[15]),20);
        tracep->fullIData(oldp+1060,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[16]),20);
        tracep->fullIData(oldp+1061,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[17]),20);
        tracep->fullIData(oldp+1062,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[18]),20);
        tracep->fullIData(oldp+1063,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[19]),20);
        tracep->fullIData(oldp+1064,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[20]),20);
        tracep->fullIData(oldp+1065,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[21]),20);
        tracep->fullIData(oldp+1066,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[22]),20);
        tracep->fullIData(oldp+1067,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[23]),20);
        tracep->fullIData(oldp+1068,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[24]),20);
        tracep->fullIData(oldp+1069,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[25]),20);
        tracep->fullIData(oldp+1070,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[26]),20);
        tracep->fullIData(oldp+1071,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[27]),20);
        tracep->fullIData(oldp+1072,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[28]),20);
        tracep->fullIData(oldp+1073,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[29]),20);
        tracep->fullIData(oldp+1074,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[30]),20);
        tracep->fullIData(oldp+1075,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__key_list[31]),20);
        tracep->fullQData(oldp+1076,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1078,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1080,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1082,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1084,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1086,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1088,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1090,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+1092,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+1094,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+1096,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+1098,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+1100,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+1102,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+1104,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+1106,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+1108,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+1110,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+1112,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+1114,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+1116,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+1118,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+1120,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+1122,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+1124,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+1126,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+1128,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+1130,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+1132,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+1134,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+1136,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[30]),64);
        tracep->fullQData(oldp+1138,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__data_list[31]),64);
        tracep->fullQData(oldp+1140,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1142,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator0__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1143,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__operator1____pinNumber3),2688);
        tracep->fullWData(oldp+1227,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1230,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1233,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+1236,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullWData(oldp+1239,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[4]),84);
        tracep->fullWData(oldp+1242,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[5]),84);
        tracep->fullWData(oldp+1245,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[6]),84);
        tracep->fullWData(oldp+1248,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[7]),84);
        tracep->fullWData(oldp+1251,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[8]),84);
        tracep->fullWData(oldp+1254,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[9]),84);
        tracep->fullWData(oldp+1257,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[10]),84);
        tracep->fullWData(oldp+1260,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[11]),84);
        tracep->fullWData(oldp+1263,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[12]),84);
        tracep->fullWData(oldp+1266,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[13]),84);
        tracep->fullWData(oldp+1269,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[14]),84);
        tracep->fullWData(oldp+1272,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[15]),84);
        tracep->fullWData(oldp+1275,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[16]),84);
        tracep->fullWData(oldp+1278,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[17]),84);
        tracep->fullWData(oldp+1281,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[18]),84);
        tracep->fullWData(oldp+1284,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[19]),84);
        tracep->fullWData(oldp+1287,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[20]),84);
        tracep->fullWData(oldp+1290,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[21]),84);
        tracep->fullWData(oldp+1293,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[22]),84);
        tracep->fullWData(oldp+1296,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[23]),84);
        tracep->fullWData(oldp+1299,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[24]),84);
        tracep->fullWData(oldp+1302,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[25]),84);
        tracep->fullWData(oldp+1305,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[26]),84);
        tracep->fullWData(oldp+1308,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[27]),84);
        tracep->fullWData(oldp+1311,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[28]),84);
        tracep->fullWData(oldp+1314,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[29]),84);
        tracep->fullWData(oldp+1317,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[30]),84);
        tracep->fullWData(oldp+1320,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__pair_list[31]),84);
        tracep->fullIData(oldp+1323,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1324,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1325,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+1326,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[3]),20);
        tracep->fullIData(oldp+1327,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[4]),20);
        tracep->fullIData(oldp+1328,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[5]),20);
        tracep->fullIData(oldp+1329,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[6]),20);
        tracep->fullIData(oldp+1330,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[7]),20);
        tracep->fullIData(oldp+1331,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[8]),20);
        tracep->fullIData(oldp+1332,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[9]),20);
        tracep->fullIData(oldp+1333,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[10]),20);
        tracep->fullIData(oldp+1334,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[11]),20);
        tracep->fullIData(oldp+1335,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[12]),20);
        tracep->fullIData(oldp+1336,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[13]),20);
        tracep->fullIData(oldp+1337,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[14]),20);
        tracep->fullIData(oldp+1338,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[15]),20);
        tracep->fullIData(oldp+1339,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[16]),20);
        tracep->fullIData(oldp+1340,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[17]),20);
        tracep->fullIData(oldp+1341,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[18]),20);
        tracep->fullIData(oldp+1342,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[19]),20);
        tracep->fullIData(oldp+1343,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[20]),20);
        tracep->fullIData(oldp+1344,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[21]),20);
        tracep->fullIData(oldp+1345,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[22]),20);
        tracep->fullIData(oldp+1346,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[23]),20);
        tracep->fullIData(oldp+1347,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[24]),20);
        tracep->fullIData(oldp+1348,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[25]),20);
        tracep->fullIData(oldp+1349,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[26]),20);
        tracep->fullIData(oldp+1350,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[27]),20);
        tracep->fullIData(oldp+1351,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[28]),20);
        tracep->fullIData(oldp+1352,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[29]),20);
        tracep->fullIData(oldp+1353,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[30]),20);
        tracep->fullIData(oldp+1354,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__key_list[31]),20);
        tracep->fullQData(oldp+1355,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1357,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1359,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1361,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1363,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1365,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1367,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1369,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+1371,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+1373,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+1375,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+1377,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+1379,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+1381,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+1383,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+1385,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+1387,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+1389,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+1391,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+1393,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[19]),64);
        tracep->fullQData(oldp+1395,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[20]),64);
        tracep->fullQData(oldp+1397,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[21]),64);
        tracep->fullQData(oldp+1399,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[22]),64);
        tracep->fullQData(oldp+1401,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[23]),64);
        tracep->fullQData(oldp+1403,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[24]),64);
        tracep->fullQData(oldp+1405,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[25]),64);
        tracep->fullQData(oldp+1407,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[26]),64);
        tracep->fullQData(oldp+1409,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[27]),64);
        tracep->fullQData(oldp+1411,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[28]),64);
        tracep->fullQData(oldp+1413,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[29]),64);
        tracep->fullQData(oldp+1415,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[30]),64);
        tracep->fullQData(oldp+1417,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__data_list[31]),64);
        tracep->fullQData(oldp+1419,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1421,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator1__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1422,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1423,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alumode__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+1424,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__add_sub_result),64);
        tracep->fullQData(oldp+1426,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                      & vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+1428,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                      | vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+1430,((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                      ^ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+1432,((VL_LTS_IQQ(1,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                       ? 1ULL : 0ULL)),64);
        tracep->fullQData(oldp+1434,(((vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a 
                                       < vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)
                                       ? 1ULL : 0ULL)),64);
        tracep->fullQData(oldp+1436,(VL_SHIFTL_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+1438,(VL_SHIFTR_QQQ(64,64,64, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_a, vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullQData(oldp+1440,(((1U == (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__mode))
                                       ? (1ULL + (~ vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b))
                                       : vlSelf->ysyx_22050612_npc__DOT__exu__DOT__operator_b)),64);
        tracep->fullWData(oldp+1442,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT____Vcellinp__alu_result_select____pinNumber3),720);
        tracep->fullWData(oldp+1465,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[0]),72);
        tracep->fullWData(oldp+1468,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[1]),72);
        tracep->fullWData(oldp+1471,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[2]),72);
        tracep->fullWData(oldp+1474,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[3]),72);
        tracep->fullWData(oldp+1477,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[4]),72);
        tracep->fullWData(oldp+1480,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[5]),72);
        tracep->fullWData(oldp+1483,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[6]),72);
        tracep->fullWData(oldp+1486,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[7]),72);
        tracep->fullWData(oldp+1489,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[8]),72);
        tracep->fullWData(oldp+1492,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__pair_list[9]),72);
        tracep->fullCData(oldp+1495,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[0]),8);
        tracep->fullCData(oldp+1496,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[1]),8);
        tracep->fullCData(oldp+1497,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[2]),8);
        tracep->fullCData(oldp+1498,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[3]),8);
        tracep->fullCData(oldp+1499,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[4]),8);
        tracep->fullCData(oldp+1500,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[5]),8);
        tracep->fullCData(oldp+1501,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[6]),8);
        tracep->fullCData(oldp+1502,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[7]),8);
        tracep->fullCData(oldp+1503,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[8]),8);
        tracep->fullCData(oldp+1504,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__key_list[9]),8);
        tracep->fullQData(oldp+1505,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1507,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1509,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1511,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1513,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1515,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1517,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1519,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+1521,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+1523,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+1525,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1527,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__alu0__DOT__alu_result_select__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1528,((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr))),3);
        tracep->fullWData(oldp+1529,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_onebyte____pinNumber3),536);
        tracep->fullWData(oldp+1546,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+1549,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+1552,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+1555,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+1558,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+1561,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[5]),67);
        tracep->fullWData(oldp+1564,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[6]),67);
        tracep->fullWData(oldp+1567,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__pair_list[7]),67);
        tracep->fullCData(oldp+1570,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1571,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1572,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1573,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+1574,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+1575,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+1576,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+1577,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__key_list[7]),3);
        tracep->fullQData(oldp+1578,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1580,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1582,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1584,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1586,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1588,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1590,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1592,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+1594,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1596,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_onebyte__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1597,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1598,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_onebyte__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1599,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_twobyte____pinNumber3),469);
        tracep->fullWData(oldp+1614,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+1617,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+1620,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+1623,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+1626,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullWData(oldp+1629,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[5]),67);
        tracep->fullWData(oldp+1632,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__pair_list[6]),67);
        tracep->fullCData(oldp+1635,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1636,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1637,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1638,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+1639,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+1640,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+1641,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__key_list[6]),3);
        tracep->fullQData(oldp+1642,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1644,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1646,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1648,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1650,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1652,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1654,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1656,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1658,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_twobyte__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1659,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1660,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_twobyte__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1661,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__raddr_select____pinNumber3),252);
        tracep->fullWData(oldp+1669,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1672,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1675,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullIData(oldp+1678,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1679,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1680,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullQData(oldp+1681,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1683,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1685,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1687,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1689,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1690,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__waddr_select____pinNumber3),336);
        tracep->fullWData(oldp+1701,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1704,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1707,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+1710,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullIData(oldp+1713,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1714,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1715,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+1716,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__key_list[3]),20);
        tracep->fullQData(oldp+1717,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1719,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1721,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1723,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1725,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1727,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__waddr_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1728,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wdata_select____pinNumber3),336);
        tracep->fullWData(oldp+1739,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1742,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1745,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullWData(oldp+1748,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__pair_list[3]),84);
        tracep->fullIData(oldp+1751,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1752,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1753,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+1754,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__key_list[3]),20);
        tracep->fullQData(oldp+1755,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1757,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1759,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1761,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1763,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1765,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wdata_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1766,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__wmask_select____pinNumber3),112);
        tracep->fullIData(oldp+1770,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[0]),28);
        tracep->fullIData(oldp+1771,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[1]),28);
        tracep->fullIData(oldp+1772,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[2]),28);
        tracep->fullIData(oldp+1773,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__pair_list[3]),28);
        tracep->fullIData(oldp+1774,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1775,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1776,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[2]),20);
        tracep->fullIData(oldp+1777,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__key_list[3]),20);
        tracep->fullCData(oldp+1778,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+1779,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+1780,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+1781,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+1782,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1783,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__wmask_select__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1784,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_fixing____pinNumber3),252);
        tracep->fullWData(oldp+1792,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[0]),84);
        tracep->fullWData(oldp+1795,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[1]),84);
        tracep->fullWData(oldp+1798,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__pair_list[2]),84);
        tracep->fullIData(oldp+1801,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[0]),20);
        tracep->fullIData(oldp+1802,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[1]),20);
        tracep->fullIData(oldp+1803,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__key_list[2]),20);
        tracep->fullQData(oldp+1804,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1806,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1808,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1810,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1812,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_fixing__DOT__i0__DOT__hit));
        tracep->fullCData(oldp+1813,((7U & (IData)(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__raddr))),3);
        tracep->fullWData(oldp+1814,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT____Vcellinp__rdata_1byte_fix____pinNumber3),88);
        tracep->fullSData(oldp+1817,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[0]),11);
        tracep->fullSData(oldp+1818,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[1]),11);
        tracep->fullSData(oldp+1819,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[2]),11);
        tracep->fullSData(oldp+1820,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[3]),11);
        tracep->fullSData(oldp+1821,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[4]),11);
        tracep->fullSData(oldp+1822,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[5]),11);
        tracep->fullSData(oldp+1823,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[6]),11);
        tracep->fullSData(oldp+1824,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__pair_list[7]),11);
        tracep->fullCData(oldp+1825,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1826,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1827,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1828,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+1829,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+1830,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[5]),3);
        tracep->fullCData(oldp+1831,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[6]),3);
        tracep->fullCData(oldp+1832,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__key_list[7]),3);
        tracep->fullCData(oldp+1833,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+1834,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+1835,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+1836,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+1837,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+1838,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+1839,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+1840,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+1841,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+1842,(vlSelf->ysyx_22050612_npc__DOT__exu__DOT__rdata_1byte_fix__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+1843,(vlSelf->clk));
        tracep->fullBit(oldp+1844,(vlSelf->rst));
        tracep->fullQData(oldp+1845,(vlSelf->pc),64);
        tracep->fullQData(oldp+1847,((4ULL + vlSelf->pc)),64);
        tracep->fullIData(oldp+1849,(0x40U),32);
        tracep->fullQData(oldp+1850,(0x80000000ULL),64);
        tracep->fullBit(oldp+1852,(1U));
        tracep->fullIData(oldp+1853,(0x13U),32);
        tracep->fullIData(oldp+1854,(0xaU),32);
        tracep->fullIData(oldp+1855,(7U),32);
        tracep->fullWData(oldp+1856,(Vysyx_22050612_npc__ConstPool__CONST_ac734264_0),323);
        tracep->fullIData(oldp+1867,(0U),32);
        tracep->fullCData(oldp+1868,(0U),7);
        tracep->fullIData(oldp+1869,(0x11U),32);
        tracep->fullIData(oldp+1870,(0x13U),32);
        tracep->fullIData(oldp+1871,(3U),32);
        tracep->fullIData(oldp+1872,(2U),32);
        tracep->fullIData(oldp+1873,(0x374bdbfU),27);
        tracep->fullCData(oldp+1874,(0U),2);
        tracep->fullIData(oldp+1875,(9U),32);
        tracep->fullIData(oldp+1876,(3U),32);
        tracep->fullIData(oldp+1877,(0xdU),32);
        tracep->fullIData(oldp+1878,(8U),32);
        tracep->fullWData(oldp+1879,(Vysyx_22050612_npc__ConstPool__CONST_b50aa67b_0),325);
        tracep->fullCData(oldp+1890,(0U),8);
        tracep->fullIData(oldp+1891,(0x19U),32);
        tracep->fullIData(oldp+1892,(0xdU),32);
        tracep->fullIData(oldp+1893,(0x10U),32);
        tracep->fullQData(oldp+1894,(0x24d029390a4fULL),54);
        tracep->fullIData(oldp+1896,(0x12U),32);
        tracep->fullIData(oldp+1897,(5U),32);
        tracep->fullIData(oldp+1898,(0x1cU),32);
        tracep->fullIData(oldp+1899,(0x14U),32);
        tracep->fullIData(oldp+1900,(1U),32);
        tracep->fullWData(oldp+1901,(Vysyx_22050612_npc__ConstPool__CONST_9f0fa95b_0),588);
        tracep->fullBit(oldp+1920,(0U));
        tracep->fullIData(oldp+1921,(0x15U),32);
        tracep->fullIData(oldp+1922,(0x1cU),32);
        tracep->fullQData(oldp+1923,(0ULL),64);
        tracep->fullIData(oldp+1925,(0x54U),32);
        tracep->fullIData(oldp+1926,(8U),32);
        tracep->fullIData(oldp+1927,(0x20U),32);
        tracep->fullIData(oldp+1928,(0x20U),32);
        tracep->fullWData(oldp+1929,(Vysyx_22050612_npc__ConstPool__CONST_bb75f393_0),896);
        tracep->fullIData(oldp+1957,(0x48U),32);
        tracep->fullIData(oldp+1958,(0xaU),32);
        tracep->fullIData(oldp+1959,(0x43U),32);
        __Vtemp2909[0U] = 0x48320780U;
        __Vtemp2909[1U] = 0x2308821U;
        __Vtemp2909[2U] = 0x2409U;
        tracep->fullWData(oldp+1960,(__Vtemp2909),88);
        tracep->fullIData(oldp+1963,(0xbU),32);
        tracep->fullIData(oldp+1964,(7U),32);
        __Vtemp2910[0U] = 0x4698660U;
        __Vtemp2910[1U] = 0x8320c611U;
        __Vtemp2910[2U] = 0xcU;
        tracep->fullWData(oldp+1965,(__Vtemp2910),77);
        tracep->fullIData(oldp+1968,(4U),32);
        tracep->fullIData(oldp+1969,(4U),32);
    }
}
