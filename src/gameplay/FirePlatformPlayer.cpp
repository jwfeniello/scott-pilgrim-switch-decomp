// Fire's platform player (14PlatformPlayer).
#include "FireCore.h"

// 0xec6580 (slot 5): passes a new frame rate to the player timer as a millisecond interval.
bool PlatformPlayer::SetFrameRate(int fps) {
    if (frameRate == fps) return true;
    FireTimer* timer = core->timer;
    long ms = (long)fps * 1000;
    if (ms == timer->intervalMs) return true;
    timer->intervalMs = ms;
    (*timer->target)->SetIntervalMs(ms);
    return true;
}

// 0xec97b0 (slot 21): slot 20 once value1600 is set, else a result built from the core's source.
FireSlotResult PlatformPlayer::Slot21(void* arg) {
    if (value1600) return Slot20(arg);
    return FireSlotResult(core->source40, arg, 0, 0, 0);
}
