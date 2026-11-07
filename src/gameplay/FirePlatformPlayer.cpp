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

// 0xec97b0 (slot 21): slot 20 once value1600 is set, else a result built from the core's context.
FireSlotResult PlatformPlayer::Slot21(void* arg) {
    if (value1600) return Slot20(arg);
    return FireSlotResult(core->context, arg, 0, 0, 0);
}

// 0xec6780 (slot 28): handles a player code (1-9) unless already flagged at +0x162c.
void PlatformPlayer::Slot28(int code) {
    if (flag162c) return;
    flag1690 = 1;
    switch (code) {
    case 1:
        if (flag1630) {
            flag1634 = 1;
            return;
        }
        if (flag1638 && value16a4 != 1) {
            core->timer->state60 = -4;
            return;
        }
        flag1694 = 1;
        flag162c = 1;
        core->timer->state60 = -2;
        return;
    case 2:
    case 3:
    case 8:
        flag162c = 1;
        break;
    case 9:
        if (flag1630) {
            flag1634 = 1;
            return;
        }
        break;
    }
    core->Func_ebc150();
}

// 0xec65e0 (slot 7): value1600 becomes a heap copy of ".".
void PlatformPlayer::Slot7() {
    char dot[] = ".";
    const char* s = dot;
    char* p = (char*)FireAlloc(core->context->heap, 0, sizeof(dot), 0, 0);
    value1600 = p;
    if (p) {
        while (*s) *p++ = *s++;
        *p = 0;
    }
}
