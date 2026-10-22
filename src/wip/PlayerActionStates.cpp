// Inferred behavioral models, not original declarations or byte-matching code.
using Word = unsigned long long;
struct MemberPointer { Word first, second; };
struct PlayerStatePair { MemberPointer current, required; };
static bool SameState(MemberPointer a, MemberPointer b) {
    return a.first == b.first && (a.second == b.second ||
        (a.first == 0 && ((a.second | b.second) & 1) == 0));
}
struct GameOverStateInput {
    unsigned event, sceneMode, playerCount;
    const PlayerStatePair* players;
};
struct GameOverStateOutput {
    unsigned handled, changeFields, mode, enabled, requestMovie;
};
extern "C" void EvaluateGameOverState(const GameOverStateInput* in, GameOverStateOutput* out) {
    out->handled = in->event >= 10000 && in->event <= 10003;
    out->changeFields = 0;
    out->mode = 0;
    out->enabled = 0;
    out->requestMovie = 0;
    if (in->event == 10001) {
        out->changeFields = 1;
        out->mode = 5;
        out->enabled = 1;
        bool allInState = true;
        for (unsigned i = 0; i < in->playerCount; ++i)
            if (!SameState(in->players[i].current, in->players[i].required)) allInState = false;
        out->requestMovie = allInState && !(in->sceneMode >= 8 && in->sceneMode <= 12);
    } else if (in->event == 10002) {
        out->changeFields = 1;
    }
}

struct ActionStateInput {
    unsigned event, relatedQuery, relatedMode, landingQuery;
    unsigned hasOwnedHandle, references, hasOwnedObject;
};
struct ActionStateOutput {
    unsigned handled, changeFields, mode, clearMotion, detachRelated;
    unsigned restoreMotionParameters, playfieldFlag, clearOwnedHandle;
    unsigned releaseHandle, destroyObject;
};
extern "C" void EvaluateActionState(const ActionStateInput* in, ActionStateOutput* out) {
    out->handled = in->event >= 10000 && in->event <= 10003;
    out->changeFields = 0;
    out->mode = 0;
    out->clearMotion = 0;
    out->detachRelated = 0;
    out->restoreMotionParameters = 0;
    out->playfieldFlag = 0;
    out->clearOwnedHandle = 0;
    out->releaseHandle = 0;
    out->destroyObject = 0;
    if (in->event == 10001) {
        out->changeFields = 1;
        out->mode = 13;
        out->clearMotion = 1;
        out->detachRelated = (in->relatedQuery & 1) && in->relatedMode == 0;
        out->restoreMotionParameters = !(in->landingQuery & 1);
        out->playfieldFlag = 1;
    } else if (in->event == 10002) {
        out->changeFields = 1;
        out->clearMotion = 1;
        out->clearOwnedHandle = 1;
        out->releaseHandle = in->hasOwnedHandle && in->references == 1;
        out->destroyObject = out->releaseHandle && in->hasOwnedObject;
    }
}
