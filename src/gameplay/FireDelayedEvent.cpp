// Fire's delayed player events (12DelayedEvent and subclasses).
#include "FireCore.h"

// 0xf4ae00 (DelayedNavigationEvent slot 1): frees the navigation request, then the DelayedEvent base.
// The deleting destructor (0xf4aea0) inlines this body, as the link-time optimizer did. Spelled inline it is no longer
// the key function, so always_inline stands in for that inlining (its only support is that it matches).
__attribute__((always_inline)) DelayedNavigationEvent::~DelayedNavigationEvent() {
    if (request) delete request;
    request = 0;
}

// Object found by 0xed8de0 (provisional): its variables table sits at +0x110.
struct FireVariableScope {
    char pad0[0x110];
    char variables110[1];  // 0x110 (provisional)
};
// Explicit scope of a FireSetFlashVarEvent (provisional; another class than the player's scope, its table also at
// +0x110).
struct FireEventScope {
    char pad0[0x110];
    char variables110[1];  // 0x110 (provisional)
};
// 0xed8de0: the player's scope object (provisional name and meaning of the flags).
FireVariableScope* FireFindScope(void* player, int a, int b);
// 0xef3c60: sets name to value in table (provisional name and meaning of the flags).
void* FireSetVariable(void* table, const char* name, void* value, int a, int flags, int b);

// Script value word (FireAtom in FireAtom.cpp; only Clear is needed here).
struct FireAtomValue {
    unsigned long bits;
    void Clear();  // 0xf34d70
};

// 20FireSetFlashVarEvent, vtable 0x18ea9d0: sets a Flash variable when run (field names provisional).
class FireSetFlashVarEvent : public DelayedEvent {
public:
    ~FireSetFlashVarEvent();         // slots 1/2: 0xf962b0 / 0xf96330
    virtual bool Apply(void* player);  // slot 3: 0xf963c0

    char* name;                  // 0x48
    FireAtomValue value;         // 0x50 (provisional)
    void* hasValue;              // 0x58 (provisional)
    char pad60[0x68 - 0x60];
    void* buffer68;              // 0x68 (provisional)
    int mode;                    // 0x70: 1 marks the variable (provisional)
    FireEventScope* scope;       // 0x78: explicit scope, else the player's (provisional)
};

// 0xf963c0 (FireSetFlashVarEvent slot 3): sets the variable in the event's scope (or the player's); true on success.
bool FireSetFlashVarEvent::Apply(void* player) {
    if (!player || !name) return false;
    FireVariableScope* root = FireFindScope(player, 0, 1);
    if (!root) return false;
    int flags = (mode == 1) << 16;
    return FireSetVariable(scope ? scope->variables110 : root->variables110, name, &value, 0, flags, 1) != 0;
}

// 0xf4af50 (DelayedEvent slot 0): the name of the event type.
const char* DelayedEvent::TypeName() {
    switch (type) {
    case 0xf000:
        return "kEventTimerTick";
    case 0xf001:
        return "kEventURLStreamOpened";
    case 0xf002:
        return "kEventURLStreamCheckFinalURL";
    case 0xf003:
        return "kEventURLStreamWrite";
    case 0xf006:
        return "kEventURLStreamClosed";
    case 0xf007:
        return "kEventURLStreamDestroyed";
    case 0xf008:
        return "kEventSocketConnected";
    case 0xf009:
        return "kEventSocketReceived";
    case 0xf00a:
        return "kEventSocketClosed";
    case 0xf00b:
        return "kEventXMLParseRequest";
    case 0xf00c:
        return "kEventGotoFrame";
    case 0xf00d:
        return "kEventPlay";
    case 0xf00e:
        return "kEventSharedObjectOnStatus";
    case 0xf00f:
        return "kEventVideoObjectOnStatus";
    case 0xf010:
        return "kEventOnStageResize";
    case 0xf011:
        return "kExtendedEvent";
    case 0xf013:
        return "kFireGenericDelayedEvent";
    case 0x8000:
        return "kEventFirstNavigationEvent";
    case 0x8fff:
        return "kEventLastNavigationEvent";
    default:
        return "kEvent<?>";
    }
}

// 0xf4ad00 (DelayedNavigationEvent slot 0): the name of the event type (input events here, the rest from the base).
const char* DelayedNavigationEvent::TypeName() {
    switch (type) {
    case 0x8:
        return "kEventMouseMove";
    case 0x10:
        return "kEventMouseDown";
    case 0x20:
        return "kEventMouseUp";
    case 0x40:
        return "kEventKeyDownEvent";
    case 0x80:
        return "kEventKeyUpEvent";
    case 0x8000:
        return "kEventMouseDragOver";
    case 0x10000:
        return "kEventMouseDragOut";
    case 0x20000:
        return "kEventKeyPressEvent";
    case 0x100000:
        return "kEventMouseDrag";
    case 0x200000:
        return "kEventDelayedSelection";
    case 0x300000:
        return "kEventMouseWheel";
    }
    return DelayedEvent::TypeName();
}

// 0xf962b0 (FireSetFlashVarEvent slot 1; already credited elsewhere): clears the value, frees the name and buffer, then
// the DelayedEvent base.
// The deleting destructor (0xf96330) inlines this body; always_inline stands in for that inlining (its only support is
// that it matches).
__attribute__((always_inline)) FireSetFlashVarEvent::~FireSetFlashVarEvent() {
    if (hasValue) value.Clear();
    FireFree(name);
    FireFree(buffer68);
}
