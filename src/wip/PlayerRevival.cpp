// Behavioral research, not original declarations or exact-match source.
// "Revival" describes the observed state sequence; original method names unknown.
struct Position { float x, y, z; };
struct RevivalCandidate {
    unsigned isSelf, excludedQuery, group, counter, counterAfterEvent11, changesCounter;
    Position position, reach;
};
struct RevivalInput {
    float activation;
    unsigned group, count;
    Position position;
    const RevivalCandidate* candidates;
};
struct RevivalOutput {
    unsigned queriedMask, selected, transition, counter, clearFlag;
};
extern "C" void EvaluateRevivalScan(const RevivalInput* in, RevivalOutput* out) {
    out->queriedMask = 0;
    out->selected = ~0u;
    out->transition = 0;
    out->counter = 0;
    out->clearFlag = 0;
    if (!(in->activation > 0.0f)) return;
    // Fixtures use at most four stable entries. Callback changes are limited
    // to the selected candidate's counter during event 11.
    for (unsigned i = 0; i < in->count; ++i) {
        const RevivalCandidate& c = in->candidates[i];
        if (c.isSelf) continue;
        out->queriedMask |= 1u << i;
        if (c.excludedQuery & 1) continue;
        if (!(__builtin_fabsf(in->position.y - c.position.y) <= c.reach.y &&
              __builtin_fabsf(in->position.x - c.position.x) <= c.reach.x &&
              __builtin_fabsf(in->position.z - c.position.z) <= c.reach.z)) continue;
        if (c.group != in->group) continue;
        out->selected = i;
        // The original dispatches event 11 BEFORE reading the consumable counter.
        unsigned counter = c.changesCounter ? c.counterAfterEvent11 : c.counter;
        out->counter = counter;
        if (counter != 0) {
            out->counter = counter - 1;
            out->clearFlag = 1;
            out->transition = 1;
        }
        // First spatial/group match stops the scan, even if its counter is zero.
        return;
    }
}

// restoredA/B carry raw float return bits, preserving NaNs and signed zero.
struct RecoveryInput { unsigned event, ready, restoredA, restoredB; };
struct RecoveryOutput {
    unsigned result, clearMotion, requestAnimation, restoreFields, transition;
    unsigned restoredA, restoredB;
};
extern "C" void EvaluateRecoveryState(const RecoveryInput* in, RecoveryOutput* out) {
    out->result = in->event >= 10000 && in->event <= 10003;
    out->clearMotion = 0;
    out->requestAnimation = 0;
    out->restoreFields = 0;
    out->transition = 0;
    out->restoredA = 0;
    out->restoredB = 0;
    if (in->event == 10001) {
        out->clearMotion = 1;
        out->requestAnimation = 1;
    } else if (in->event == 10000 && (in->ready & 1)) {
        out->result = 2;
        out->restoreFields = 1;
        out->transition = 1;
        out->restoredA = in->restoredA;
        out->restoredB = in->restoredB;
    }
}
