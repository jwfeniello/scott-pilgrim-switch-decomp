// Inferred decisions checked against original functions or explicitly bounded
// regions. Interior-region checks are not complete-function reconstructions.
using Word = unsigned long long;
struct Member { Word first, second; };
static bool Equal(Member a, Member b) {
    return a.first == b.first && (a.second == b.second ||
        (a.first == 0 && ((a.second | b.second) & 1) == 0));
}
struct RecoveryInput { Member current, gameOver, controlled; unsigned hasActor, typeResult, enabled; };
extern "C" unsigned EvaluateActionExit(const RecoveryInput* in) {
    return in->hasActor && (in->typeResult & 1) && in->enabled &&
        !Equal(in->current, in->gameOver) && Equal(in->current, in->controlled);
}
extern "C" unsigned EvaluatePlayerRecovery(const RecoveryInput* in) {
    return !Equal(in->current, in->gameOver) && Equal(in->current, in->controlled);
}
struct TimerInput { float remaining, delta; unsigned enabled; };
struct TimerOutput { float remaining; unsigned gameOver; };
extern "C" void EvaluateGameOverTimer(const TimerInput* in, TimerOutput* out) {
    out->remaining = in->remaining;
    out->gameOver = 0;
    if (!in->enabled) return;
    if (__builtin_fabsf(in->remaining) <= 0.000001f) {
        out->gameOver = 1;
        return;
    }
    float next = in->remaining - in->delta;
    // ARM64 FMAXNM(next, +0): numeric zero wins against NaN.
    out->remaining = next > 0.0f ? next : 0.0f;
}
struct DelayedInput { float elapsed, delta; Member current, target; };
struct DelayedOutput { float elapsed; unsigned transition; };
extern "C" void EvaluateDelayedTransition(const DelayedInput* in, DelayedOutput* out) {
    out->elapsed = in->elapsed + in->delta;
    out->transition = out->elapsed > 3.0f && !Equal(in->current, in->target);
    if (out->transition) out->elapsed = 0.0f;
}
struct GateInput { unsigned bypass, flag111, modeQuery; };
struct GateOutput { unsigned scan, queryCalls, alternateBounds; };
extern "C" void EvaluatePlayfieldGate(const GateInput* in, GateOutput* out) {
    out->scan = 0; out->queryCalls = 0; out->alternateBounds = 0;
    if (in->bypass) return;
    if (!in->flag111) {
        out->queryCalls = 1;
        if (in->modeQuery) return;
    }
    out->queryCalls += 1;
    out->scan = 1;
    out->alternateBounds = in->modeQuery != 0;
}
// This is the observed implementation on AnimationInfoHolderSwitch, not proof
// that resolver ID 0x29fbe438 selects this concrete class in every actor.
extern "C" unsigned EvaluateAnimationFlag(unsigned flags) { return (flags >> 2) & 1; }
