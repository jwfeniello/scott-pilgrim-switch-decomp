// Dare::Private's sound associations (RTTI names: AssoMultiEvent and the other Asso classes). The base's name and the
// member names are provisional.
#include "DareCore.h"

namespace Dare {
namespace Private {

// What the associations have in common: a chain through +0x248.
struct AssoBase {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3();
    virtual void Slot4(float value, int32_t flag);   // slot 4
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9();
    virtual void Slot10(); virtual void Slot11();
    virtual int32_t Slot12();                        // slot 12
    virtual void Slot13(int32_t value);              // slot 13
    virtual void Slot14(); virtual void Slot15();
    virtual int32_t Slot16(int32_t a, int32_t b);    // slot 16
    char padding_8[0x80];
    struct State { uint64_t words[0xd8 / 8]; } state;   // +0x88: copied whole
    char padding_160[0x40];
    int32_t flag1a0;     // +0x1a0
    char padding_1a4[0xa4];
    AssoBase* next;      // +0x248
};

// Dare::Private::AssoMultiEvent: passes calls on to the associations it holds (+0x260, chained through +0x248).
// The part at +0x10 that AssoMultiEvent's slot 16 asks first (0xd59560).
struct AssoCondition {
    int32_t Check(int32_t a, int32_t b);
};
// Visits one association through a pointer to the walk's current one (0xd53f60).
void VisitAsso(AssoBase** current, void* context, int32_t flag, float value);

struct AssoMultiEvent : AssoBase {
    char padding_250[0x10];
    AssoBase* first;     // +0x260
    char padding_268[0x8];
    int32_t busy;        // +0x270
    void Slot4(float value, int32_t flag) override;
    int32_t Slot12() override;
    void Slot13(int32_t value) override;
    int32_t Slot16(int32_t a, int32_t b) override;
    int32_t Slot18(void* context, int32_t flag, float value);
    AssoCondition& Condition() { return *reinterpret_cast<AssoCondition*>(reinterpret_cast<char*>(this) + 0x10); }
};

void AssoMultiEvent::Slot4(float value, int32_t flag) {   // 0xd56870
    for (AssoBase* child = first; child; child = child->next) child->Slot4(value, flag);
}

// 1 when +0x1a0 is set or any held association's slot 12 says so.
int32_t AssoMultiEvent::Slot12() {   // 0xd56e60
    if (flag1a0) return 1;
    for (AssoBase* child = first; child; child = child->next) {
        if (child->Slot12()) return 1;
    }
    return 0;
}

// Slot 13: passes `value` on to every held association and takes the first one's state (+0x88) as its own.
void AssoMultiEvent::Slot13(int32_t value) {   // 0xd56ec0
    int32_t index = 0;
    for (AssoBase* child = first; child; child = child->next, ++index) {
        child->Slot13(value);
        if (index == 0) state = child->state;
    }
}

// 1 when the part at +0x10 says so for (a, b), or any held association's slot 16 does.
int32_t AssoMultiEvent::Slot16(int32_t a, int32_t b) {   // 0xd56fe0
    if (Condition().Check(a, b)) return 1;
    for (AssoBase* child = first; child; child = child->next) {
        if (child->Slot16(a, b)) return 1;
    }
    return 0;
}

// Slot 18: visits every held association (each may be dropped, so the next one is read first), then whether nothing
// holds +0x270.
int32_t AssoMultiEvent::Slot18(void* context, int32_t flag, float value) {   // 0xd57be0
    AssoBase* child = first;
    while (child) {
        AssoBase* next = child->next;
        VisitAsso(&child, context, flag, value);
        child = next;
    }
    return busy == 0;
}

// The functions each kind of playing sound has (0x50-byte entries of the table at 0x18d2318).
struct SoundKindFunctions {
    void* function0;
    void (*stop)(void* object);                                   // +0x8
    void* functions10[2];
    float (*query)(void* object);                                 // +0x20
    void* functions28[3];
    int32_t (*check)(void* object, int32_t a, int32_t b);         // +0x40
    int32_t (*report)(void* object, void* out);                   // +0x48
};
extern "C" SoundKindFunctions Dare_SoundKinds[];
struct SoundKind {
    int32_t value0;
    uint32_t index;      // +0x4: into Dare_SoundKinds
};
// What an association plays.
struct PlayingSound {
    int32_t stopped;     // +0x0
    int32_t active;      // +0x4
    char padding_8[0x10];
    void* object;        // +0x18
    char key[0x8];       // +0x20: what 0xd310a0 finds the kind by
    int32_t value28;     // +0x28
    SoundKind* Kind();   // 0xd310a0, called on `key`
    SoundKindFunctions& Functions() { return Dare_SoundKinds[reinterpret_cast<PlayingSound*>(key)->Kind()->index]; }
};
struct AssoOwner {
    char padding_0[0x8];
    int32_t id;          // +0x8
    char padding_c[0x34];
    int32_t enabled;     // +0x40
};

// Dare::Private::AssoPlay (its slots 1, 4 and 16 are shared with AssoPlaySynth).
struct AssoPlay {
    void* vtable;
    char padding_8[0x18];
    AssoOwner* owner;            // +0x20
    void* idFirst;               // +0x28
    void* idSecond;              // +0x30
    char padding_38[0x10];
    void* value48;               // +0x48
    char padding_50[0x210];
    PlayingSound* sound;         // +0x260
    char padding_268[0x40];
    struct Ramp { void Set(float from, float to); } ramp;   // +0x2a8 (0xd56010)
    char padding_2a9[0xf];
    int32_t state;               // +0x2b8
    char padding_2bc[0x1c];
    int32_t priority;            // +0x2d8
    AssoCondition& Condition() { return *reinterpret_cast<AssoCondition*>(reinterpret_cast<char*>(this) + 0x10); }
    int32_t Report(void** out);                                  // slot 0
    int32_t Slot1(void* first, void* second, int32_t* best);     // slot 1
    void Slot4(float value);                                     // slot 4
    float Query();                                               // slot 6
    void Stop();                                                 // slot 15
    int32_t Slot16(int32_t a, int32_t b);                        // slot 16
};

// Slot 0 (0xd90750): hands back +0x48, then lets the sound's kind report on it; 0x8000e009 when nothing plays.
int32_t AssoPlay::Report(void** out) {
    *out = value48;
    PlayingSound* playing = sound;
    if (playing->stopped || !playing->active) return static_cast<int32_t>(0x8000e009u);
    return playing->Functions().report(playing->object, out);
}

// Slot 1 (0xd5d470): 1 when this is the association for (first, second), enabled and in state 1, with its priority in
// *best; otherwise it only raises *best to its priority (unless that is -1). Not matched yet: the original keeps `this`
// in x8 and shares one store and one return between the two paths.
int32_t AssoPlay::Slot1(void* first, void* second, int32_t* best) {
    if (idFirst == first && idSecond == second && owner->enabled && state == 1) {
        *best = priority;
        return 1;
    }
    int32_t value = priority;
    if (value != -1 && *best < value) *best = value;
    return 0;
}

// Slot 4 (0xd5d5b0): ramps from -96 dB to `value`.
void AssoPlay::Slot4(float value) { ramp.Set(-96.0f, value); }

// Slot 6 (0xd907c0): what the sound's kind reports for it, or -1 when it isn't playing.
float AssoPlay::Query() {
    PlayingSound* playing = sound;
    if (!playing->active) return -1.0f;
    return playing->Functions().query(playing->object);
}

// Slot 15 (0xd90e20): stops a playing sound through its kind, clearing +0x28.
void AssoPlay::Stop() {
    PlayingSound* playing = sound;
    if (playing->stopped) return;
    if (!playing->active) return;
    playing->value28 = 0;
    playing->Functions().stop(playing->object);
}

// Slot 16 (0xd5edf0): 1 when the part at +0x10 says so, else what the sound's kind says (0 when it isn't playing).
int32_t AssoPlay::Slot16(int32_t a, int32_t b) {
    if (Condition().Check(a, b)) return 1;
    PlayingSound* playing = sound;
    if (playing->stopped) return 0;
    if (!playing->active) return 0;
    return playing->Functions().check(playing->object, a, b);
}

// What 0xd53620 looks associations up by.
struct AssoKey {
    AssoKey(void* first, void* second, int32_t id) : first(first), second(second), id(id) {}
    void* first;
    void* second;
    int32_t id;
};
struct AssoTable {
    void* Find(const AssoKey* key, int32_t flag);   // 0xd53620
};

// Dare::Private::AssoSwitch.
struct AssoSwitch {
    void* vtable;
    char padding_8[0x18];
    AssoOwner* owner;            // +0x20
    void* first;                 // +0x28
    char padding_30[0x10];
    void* second;                // +0x40
    char padding_48[0x228];
    AssoTable table;             // +0x270
    int32_t Slot17();
};

// Slot 17 (0xd5d350): 0 when the table at +0x270 has this switch's key, else 0x8000e009.
int32_t AssoSwitch::Slot17() {
    AssoKey key(first, second, owner->id);
    return table.Find(&key, 0) ? 0 : static_cast<int32_t>(0x8000e009u);
}

// A growable array without DareArray's reserved word (provisional name): emptied, freed and cleared when destroyed.
// Its destructor at 0xd90ff0 is called from 0xd91500; the element type is unknown.
template<class T> struct DareVector {
    uint64_t capacity;
    uint64_t size;       // +0x8
    T* data;             // +0x10
    ~DareVector() {
        size = 0;
        if (data) DareFree(data);
        capacity = 0;
        size = 0;
        data = nullptr;
    }
};
template struct DareVector<void*>;
// Four more out-of-line instantiations; their element types aren't known yet, so they're named by address.
struct VectorItem_cf3030;
struct VectorItem_d7aef0;
struct VectorItem_db1740;
struct VectorItem_db1bb0;
template struct DareVector<VectorItem_cf3030>;   // 0xcf3030
template struct DareVector<VectorItem_d7aef0>;   // 0xd7aef0
template struct DareVector<VectorItem_db1740>;   // 0xdb1740
template struct DareVector<VectorItem_db1bb0>;   // 0xdb1bb0

}  // namespace Private
}  // namespace Dare
