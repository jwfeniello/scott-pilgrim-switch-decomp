// Inferred model of the installed GameStatisticsBureau handlers, not original source.
struct LifeEventInput { unsigned event, playerIndex, localIndex, amount, damage; };
struct LifeEventOutput { unsigned markPlayer, updateStatistic, kind, amount; };
extern "C" void EvaluateLifeEvent(const LifeEventInput* in, LifeEventOutput* out) {
    out->markPlayer = in->event == 11;
    out->updateStatistic = 0;
    out->kind = 0;
    out->amount = in->amount;
    if (in->playerIndex != in->localIndex) return;
    switch (in->event) {
    case 17: out->kind = 0; break;  // damagedealt
    case 18: out->kind = 2; break;  // itemsbought
    case 19: out->kind = 3; break;  // lifetakenbyplayer
    case 20: out->kind = 4; break;  // lifetakenfromplayer
    case 25: out->kind = 10; break; // objectsthrown
    case 26: out->kind = 11; break; // timesgotkilled
    case 27: out->kind = 12; break; // timesreanimatedbyplayer
    case 28: out->kind = 14; break; // timestaunted
    default: return;
    }
    out->updateStatistic = 1;
    out->amount = in->amount + (in->event == 17 ? in->damage : 1);
}
