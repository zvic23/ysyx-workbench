// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpriencode83.h"
#include "Vpriencode83__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpriencode83::Vpriencode83(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vpriencode83__Syms(_vcontextp__, _vcname__, this)}
    , x{vlSymsp->TOP.x}
    , en{vlSymsp->TOP.en}
    , z{vlSymsp->TOP.z}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
}

Vpriencode83::Vpriencode83(const char* _vcname__)
    : Vpriencode83(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vpriencode83::~Vpriencode83() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vpriencode83___024root___eval_initial(Vpriencode83___024root* vlSelf);
void Vpriencode83___024root___eval_settle(Vpriencode83___024root* vlSelf);
void Vpriencode83___024root___eval(Vpriencode83___024root* vlSelf);
QData Vpriencode83___024root___change_request(Vpriencode83___024root* vlSelf);
#ifdef VL_DEBUG
void Vpriencode83___024root___eval_debug_assertions(Vpriencode83___024root* vlSelf);
#endif  // VL_DEBUG
void Vpriencode83___024root___final(Vpriencode83___024root* vlSelf);

static void _eval_initial_loop(Vpriencode83__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vpriencode83___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vpriencode83___024root___eval_settle(&(vlSymsp->TOP));
        Vpriencode83___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vpriencode83___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/priencode83.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vpriencode83___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vpriencode83::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpriencode83::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpriencode83___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vpriencode83___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vpriencode83___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/priencode83.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vpriencode83___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vpriencode83::final() {
    Vpriencode83___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vpriencode83::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vpriencode83::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vpriencode83___024root__traceInitTop(Vpriencode83___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpriencode83___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpriencode83___024root*>(voidSelf);
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vpriencode83___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vpriencode83___024root__traceRegister(Vpriencode83___024root* vlSelf, VerilatedVcd* tracep);

void Vpriencode83::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vpriencode83___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
