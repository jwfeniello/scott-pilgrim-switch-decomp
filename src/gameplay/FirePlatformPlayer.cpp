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

// Length of a C string, 0 for null (provisional helper; the player inlines this count).
static inline unsigned FireStrLen(const char* s) {
    unsigned n = 0;
    if (s && *s) {
        const char* p = s;
        while (*++p) {}
        n = p - s;
    }
    return n;
}

// 0xec6650 (slot 8): builds a load request (settings default to the player's) and passes it to the core.
int PlatformPlayer::Slot8(const char* url, void* value, const char* target, int, bool flag42, bool flag40,
                          FireLoadSettings* settings) {
    FireLoadRequest request;
    FireLoadSettings s;
    if (settings) s = *settings;
    else s = defaultSettings;
    request.settings = &s;
    request.url = url;
    request.urlLength = FireStrLen(url);
    request.target = target;
    request.targetLength = FireStrLen(target);
    request.flag42 = flag42;
    request.flag40 = flag40;
    request.value48 = value;
    core->Func_ebe3f0(&request);
    return 0;
}

// 0xf0a230: provisional name and meaning.
void FireFunc_f0a230(void* a, void* b, int flag, void* d);

// 0xec9120 (slot 14): flushes the pending state, then redraws through slot 4 unless nothing is dirty.
// Not yet matched: the original has two tail-merged copies of the emptiness test (a dead "cmp w9, #1" on *value960
// survives) that reload the INT_MIN constant and this+0x8d8 instead of reusing them; ours shares both.
void PlatformPlayer::Slot14() {
    unsigned char b = flag8ad;
    if (b) flags814 |= 1;
    if (b || flag8ac) {
        FireFunc_f0a230(&displayRoot, value740, b, 0);
        flag8ac = false;
        flag8ad = 0;
    }
    FireRect* r = &dirty8d8;
    if (movie->kind == 1) {
        if (value8e8 == (int)0x80000000 && dirty8d8.v[0] == (int)0x80000000) return;
    } else {
        if (value8e8 == (int)0x80000000 && dirty8d8.v[0] == (int)0x80000000) return;
    }
    if (value15e8 && !valueec0) return;
    valueec0 = 0;
    Slot4();
    r->v[0] = (int)0x80000000;
    r->v[1] = (int)0x80000000;
    r->v[2] = (int)0x80000000;
    r->v[3] = (int)0x80000000;
}

// Script player a stream reports to (provisional name and layout).
struct FireScriptPlayer {
    void Func_ef3890();         // 0xef3890 (provisional names)
    void Func_ef99c0();         // 0xef99c0
    void Func_ef7bb0(int value);  // 0xef7bb0

    char pad0[0x74];
    int value74;          // 0x74 (provisional)
    char pad78[0x219 - 0x78];
    unsigned char flags219;  // 0x219 (provisional)
    char pad21a[0x438 - 0x21a];
    FireValue value438;   // 0x438 (provisional)
    char pad440[0x6c4 - 0x440];
    unsigned flags6c4;  // 0x6c4 (provisional)
    char pad6c8[0x6f4 - 0x6c8];
    int value6f4;         // 0x6f4 (provisional)
};

// 9URLStream as PlatformPlayer slots 15 and 17 see it (FireAtom.cpp declares its cleanup fields; names provisional).
class URLStream {
public:
    virtual ~URLStream();
    void Cleanup();             // 0xf815a0
    void Func_f82850(int value);  // 0xf82850 (provisional name)

    char pad8[0x9 - 0x8];
    bool flag9;         // 0x9 (provisional)
    char pada[0xc - 0xa];
    int id;             // 0xc
    char pad10[0x22 - 0x10];
    bool flag22;        // 0x22
    char pad23[0x40 - 0x23];
    FireScriptPlayer* owner40;  // 0x40
    char pad48[0x158 - 0x48];
    bool flag158;       // 0x158 (provisional)
    char pad159[0x178 - 0x159];
    void* value178;     // 0x178 (provisional)
};

// 0xec91d0 (slot 15): queues a kEventURLStreamOpened event for the stream, or runs it at once (0xec9cf0).
int PlatformPlayer::Slot15(URLStream* stream) {
    if (flag162c) return 0;
    bool own = value124c ? false : (stream->flag22 ? 0 : stream->owner40) == (void*)value10;
    DelayedEvent* e = new (core->heap38) DelayedEvent(0xf001, stream->id);
    if (!e) return 0;
    flags1248 |= 8;
    if (value124c || own) {
        (eventTail ? eventTail->next : eventHead) = e;
        eventTail = e;
        return 1;
    }
    RunEvent(e);
    return 0;
}

// 0xec9500 (slot 17): closes the stream, first letting its script player finish loading unless the stream is flagged.
void PlatformPlayer::Slot17(URLStream* stream, bool keep) {
    stream->flag9 = true;
    FireScriptPlayer* p;
    if (!stream->flag22 && (p = stream->owner40) != 0) {
        if (((p->flags6c4 & 0x80) || p->value6f4 == 2) && p->value438.Kind() == 2 && !(p->flags219 & 0x20)) p->Func_ef3890();
        if (!keep) p->Func_ef99c0();
        stream->flag158 = true;
        p->Func_ef7bb0(1);
        if (flag16a0 && !p->value74) value16a4 = 2;
    } else {
        stream->flag158 = true;
    }
    if (stream->value178) stream->Func_f82850(1);
    stream->Cleanup();
}

// 0xefd7f0: provisional name and meaning.
void FireFunc_efd7f0(void* value);

// 0xec8ff0 (slot 13): flushes the pending state and, when slot 23 allows, walks the display tree and redraws.
// Not yet matched: the original addresses flag1011 and the rect from one this+0x8d8 base, and its tree walk keeps the
// parent climb apart from the node's own sibling test; ours merges the two.
void PlatformPlayer::Slot13() {
    if (!value16a8) return;
    flag1011 = true;
    unsigned char b = flag8ad;
    if (b) flags814 |= 1;
    if (b || flag8ac) {
        FireFunc_f0a230(&displayRoot, value740, b, 0);
        flag8ac = false;
        flag8ad = 0;
    }
    value1680 = 1;
    if (value15e8 && !valueec0) {
        flag1011 = false;
        return;
    }
    valueec0 = 0;
    if (Slot23()) {
        if (!movie->value18) {
            FireDisplayNode* root = &displayRoot;
            root->Func_f060b0();
            for (FireDisplayNode* n = root->child; n; n = n->Next(root)) n->Func_f060b0();
        }
        FireFunc_efd7f0(value740);
        Slot24();
    }
    dirty8d8.v[0] = (int)0x80000000;
    dirty8d8.v[1] = (int)0x80000000;
    dirty8d8.v[2] = (int)0x80000000;
    dirty8d8.v[3] = (int)0x80000000;
    flag1011 = false;
}
