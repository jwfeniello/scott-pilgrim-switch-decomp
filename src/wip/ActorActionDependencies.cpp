// Behavioral reconstructions, not original class layouts or matching sources.
// See docs/ACTOR_ACTION_DEPENDENCIES.md for the tested ABI and domain limits.
using Word = unsigned long long;
struct ActionIdentity { Word first, second; };
// These words encode an ARM64 C++ member-function pointer. The second word
// holds a signed this-adjustment shifted left once, plus the virtual-call bit.

static bool SameIdentity(ActionIdentity a, ActionIdentity b) {
    return a.first == b.first &&
        (a.second == b.second || (a.first == 0 && ((a.second | b.second) & 1) == 0));
}

struct LifecycleInput {
    unsigned active, hasActor, playerTypeResult, setupEnabled;
    ActionIdentity current, primary, fallback;
    unsigned hasContext, contextFlags, globalGate;
};
struct LifecycleOutput { unsigned assignFallback, requestCompletion; };
extern "C" void EvaluateActionLifecycle(const LifecycleInput* in, LifecycleOutput* out) {
    bool player = in->hasActor && (in->playerTypeResult & 1);
    bool primary = SameIdentity(in->current, in->primary);
    out->assignFallback = player && in->setupEnabled && !primary &&
        !SameIdentity(in->current, in->fallback);
    out->requestCompletion = in->active && player && primary &&
        ((in->hasContext && (in->contextFlags & 2)) || in->globalGate);
}

struct RemapInput { unsigned id, hasRelatedActor, variantResult, forwardResult, flagA, flagB; };
struct RemapOutput { unsigned ownId, relatedId, forward, fallbackCall, flagA, flagB; };
extern "C" void EvaluatePlayerRequest(const RemapInput* in, RemapOutput* out) {
    // Tables recovered as numeric request IDs, not copied executable code.
    const unsigned variant0[8] = {44, 43, 53, 54, 55, 56, 57, 42};
    const unsigned variant1[8] = {60, 59, 69, 70, 71, 72, 73, 58};
    const unsigned related[8] = {100, 99, 109, 110, 111, 112, 113, 98};
    out->ownId = in->id;
    out->relatedId = 0;
    out->forward = 0;
    out->fallbackCall = 0;
    out->flagA = in->flagA & 1;
    out->flagB = in->flagB & 1;
    if (in->hasRelatedActor && in->id < 8) {
        out->ownId = in->variantResult ? variant1[in->id] : variant0[in->id];
        out->forward = in->forwardResult & 1;
        if (out->forward) out->relatedId = related[in->id];
    } else if (in->hasRelatedActor) {
        out->fallbackCall = 1;
    }
}

// Explicit ARM64 FCVTZS behavior avoids an undefined C++ float-to-int conversion.
static int PositionInteger(float value) {
    if (value != value) return 0;
    if (value >= 2147483648.0f) return 2147483647;
    if (value <= -2147483648.0f) return (-2147483647 - 1);
    return static_cast<int>(value);
}
struct LandingInput { int referenceHeight; float positionZ, verticalMotion; };
extern "C" unsigned EvaluateLanding(const LandingInput* in) {
    if (in->referenceHeight < PositionInteger(in->positionZ)) return 0;
    return __builtin_fabsf(in->verticalMotion) <= 0.000001f || in->verticalMotion < 0.0f;
}

struct JumpSetupInput {
    float position[3], start[3], target[3], height, parameterB4, gravity;
    unsigned absoluteStart;
};
struct JumpSetupOutput {
    float start[3], time, horizontalX, horizontalY, vertical, parameterB4, gravity;
};
extern "C" void EvaluateJumpSetup(const JumpSetupInput* in, JumpSetupOutput* out) {
    for (unsigned i = 0; i < 3; ++i)
        out->start[i] = in->absoluteStart ? in->start[i] : in->position[i] + in->start[i];
    float time = __builtin_sqrtf((in->height + in->height) / __builtin_fabsf(in->gravity * 60.0f));
    out->time = time;
    out->horizontalX = (in->target[0] - out->start[0]) / ((time + time) * 60.0f);
    out->horizontalY = (in->target[1] - out->start[1]) / ((time + time) * 60.0f);
    out->vertical = time * __builtin_fabsf(in->gravity);
    out->parameterB4 = in->parameterB4;
    out->gravity = in->gravity;
}

struct StateTransitionOutput { unsigned count, receiver[4], event[4]; };
extern "C" void EvaluateStateTransition(int status, StateTransitionOutput* out) {
    // receiver 0 = previous member function; receiver 1 = new member function.
    // Event names are not recovered. Status is stable in this bounded model.
    unsigned i = 0;
    if (status != -1) { out->receiver[i] = 0; out->event[i++] = 10003; }
    out->receiver[i] = 0; out->event[i++] = 10002;
    out->receiver[i] = 1; out->event[i++] = 10001;
    if (status != -1) { out->receiver[i] = 1; out->event[i++] = 10003; }
    out->count = i;
}
