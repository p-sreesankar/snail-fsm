// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsnail_moore__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsnail_moore::Vsnail_moore(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsnail_moore__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsnail_moore::Vsnail_moore(const char* _vcname__)
    : Vsnail_moore(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsnail_moore::~Vsnail_moore() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsnail_moore___024root___eval_debug_assertions(Vsnail_moore___024root* vlSelf);
#endif  // VL_DEBUG
void Vsnail_moore___024root___eval_static(Vsnail_moore___024root* vlSelf);
void Vsnail_moore___024root___eval_initial(Vsnail_moore___024root* vlSelf);
void Vsnail_moore___024root___eval_settle(Vsnail_moore___024root* vlSelf);
void Vsnail_moore___024root___eval(Vsnail_moore___024root* vlSelf);

void Vsnail_moore::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsnail_moore::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsnail_moore___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsnail_moore___024root___eval_static(&(vlSymsp->TOP));
        Vsnail_moore___024root___eval_initial(&(vlSymsp->TOP));
        Vsnail_moore___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsnail_moore___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vsnail_moore::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vsnail_moore::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vsnail_moore::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vsnail_moore::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsnail_moore::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsnail_moore___024root___eval_final(Vsnail_moore___024root* vlSelf);

VL_ATTR_COLD void Vsnail_moore::final() {
    contextp()->executingFinal(true);
    Vsnail_moore___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsnail_moore::hierName() const { return vlSymsp->name(); }
const char* Vsnail_moore::modelName() const { return "Vsnail_moore"; }
unsigned Vsnail_moore::threads() const { return 1; }
void Vsnail_moore::prepareClone() const { contextp()->prepareClone(); }
void Vsnail_moore::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsnail_moore::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vsnail_moore___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsnail_moore___024root__trace_init_top(Vsnail_moore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsnail_moore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsnail_moore___024root*>(voidSelf);
    Vsnail_moore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vsnail_moore___024root__trace_decl_types(tracep);
    Vsnail_moore___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsnail_moore___024root__trace_register(Vsnail_moore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsnail_moore::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsnail_moore::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 8);
    Vsnail_moore___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
