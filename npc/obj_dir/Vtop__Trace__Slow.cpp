// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"mode", false,-1, 2,0);
        tracep->declBus(c+2,"A", false,-1, 3,0);
        tracep->declBus(c+3,"B", false,-1, 3,0);
        tracep->declBus(c+4,"out", false,-1, 3,0);
        tracep->declBit(c+5,"ovfl", false,-1);
        tracep->declBit(c+6,"z", false,-1);
        tracep->declBit(c+7,"c", false,-1);
        tracep->declBus(c+8,"hex", false,-1, 6,0);
        tracep->declBus(c+1,"top mode", false,-1, 2,0);
        tracep->declBus(c+2,"top A", false,-1, 3,0);
        tracep->declBus(c+3,"top B", false,-1, 3,0);
        tracep->declBus(c+4,"top out", false,-1, 3,0);
        tracep->declBit(c+5,"top ovfl", false,-1);
        tracep->declBit(c+6,"top z", false,-1);
        tracep->declBit(c+7,"top c", false,-1);
        tracep->declBus(c+8,"top hex", false,-1, 6,0);
        tracep->declBus(c+9,"top D", false,-1, 3,0);
        tracep->declBus(c+4,"top s0 b", false,-1, 3,0);
        tracep->declBus(c+8,"top s0 h", false,-1, 6,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->mode),3);
        tracep->fullCData(oldp+2,(vlSelf->A),4);
        tracep->fullCData(oldp+3,(vlSelf->B),4);
        tracep->fullCData(oldp+4,(vlSelf->out),4);
        tracep->fullBit(oldp+5,(vlSelf->ovfl));
        tracep->fullBit(oldp+6,(vlSelf->z));
        tracep->fullBit(oldp+7,(vlSelf->c));
        tracep->fullCData(oldp+8,(vlSelf->hex),7);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__D),4);
    }
}
