// Dare::Private's sound associations (RTTI names: AssoMultiEvent and the other Asso classes). The base's name and the
// member names are provisional.
#include "DareCore.h"
#include <stddef.h>

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
    void (*start)(void* object);
    void (*stop)(void* object);                                   // +0x8
    void* function10;
    void (*release)(void* object);                                // +0x18
    float (*query)(void* object);                                 // +0x20
    int32_t (*goOn)(void* object, void* argument);                // +0x28: nonzero while the sound goes on
    int32_t (*forward)(void* object, void* argument);            // +0x30
    int32_t (*function38)(void* object, int32_t value);           // +0x38: only kinds 2 to 7 have one
    int32_t (*check)(void* object, int32_t a, int32_t b);         // +0x40
    int32_t (*report)(void* object, void* out);                   // +0x48
};
extern "C" SoundKindFunctions Dare_SoundKinds[];
struct SoundKind {
    int32_t value0;
    uint32_t index;      // +0x4: into Dare_SoundKinds
};
// What 0xd310a0 finds for an entry 7 object (provisional names).
struct MultiKind : SoundKind {
    char padding_8[0x18];
    int32_t value20;     // +0x20
    uint32_t count;      // +0x24
};
// What an association plays.
struct PlayingSound {
    int32_t stopped;     // +0x0
    int32_t active;      // +0x4
    char padding_8[0x8];
    int32_t value10;     // +0x10
    char padding_14[0x4];
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

// Three kinds of playing sound only wrap another playing sound (provisional names, after their entries 2 to 4 of the
// table at 0x18d2318) and pass the table's functions on to that sound's own kind.
void* DareAllocate(size_t size, uint32_t alignment);   // 0x722190
extern "C" void* memcpy(void* to, const void* from, size_t size) noexcept;   // 0xfa3330

// A Dare array that can be assigned (provisional name): it grows to the other's capacity when the other holds more.
template<class T> struct DareCopyArray : Dare::DareArray<T> {
    DareCopyArray& operator=(const DareCopyArray& other) {
        if (this != &other) {
            if (other.size > this->capacity) {
                T* data = static_cast<T*>(DareAllocate(static_cast<uint32_t>(other.capacity) * sizeof(T), 0));
                memcpy(data, other.data, static_cast<uint32_t>(other.size) * sizeof(T));
                this->size = 0;
                if (this->data) DareFree(this->data);
                this->capacity = other.capacity;
                this->data = data;
            } else {
                memcpy(this->data, other.data, static_cast<uint32_t>(other.size) * sizeof(T));
            }
            this->size = other.size;
        }
        return *this;
    }
};
// Destroyed out of line (0xcf8f70); see DareParameters.cpp, which only knows its first 0x20 bytes.
struct EffectChainPart {
    EffectChainPart& operator=(const EffectChainPart& other);   // 0xd35b00
    char data[0x20];
};
struct EffectChainParameter {
    ~EffectChainParameter();
    EffectChainParameter& operator=(const EffectChainParameter& other) {
        if (this != &other) {
            effects = other.effects;
            part = other.part;
            value40 = other.value40;
        }
        return *this;
    }
    DareCopyArray<uint64_t> effects;
    EffectChainPart part;    // +0x20
    uint64_t value40;        // +0x40
};
// What entry 2's object keeps for the sounds it makes (0xd8 bytes; provisional name).
struct SoundSettings {
    char data[0xd8];
};
struct SequenceKind;
struct WrappedSound2 {
    char key[0x8];         // +0x0: what 0xd310a0 finds this sound's own kind by
    int32_t value8;        // +0x8
    int32_t valueC;        // +0xc
    PlayingSound* sound;   // +0x10
    uint32_t step;         // +0x18
    uint32_t loopsRun;     // +0x1c
    int32_t loopDone;      // +0x20
    int32_t started;       // +0x24
    SoundSettings settings;         // +0x28: handed to the sounds it makes
    EffectChainParameter effects;   // +0x100
    SequenceKind* Kind();
};
// The list at 0x1939510 of what refers to entry 2's objects (provisional names); its nodes are freed through Dare.
struct SoundUseNode {
    SoundUseNode* prev;
    SoundUseNode* next;    // +0x8
    WrappedSound2* owner;  // +0x10
};
struct SoundUseList {
    SoundUseNode* prev;
    SoundUseNode* next;    // +0x8
    uint64_t count;        // +0x10
};
extern "C" SoundUseList Dare_SoundUses;
// Destroys and frees what Dare allocated (not freed when the destructor throws).
template<class T> inline void DareDelete(T* object) {
    if (object) {
        object->~T();
        DareFree(object);
    }
}
// Part of entry 3's object whose destructor is 0xd538f0 (provisional).
struct WrappedSoundPart {
    ~WrappedSoundPart();
};
struct WrappedSound3 {
    char padding_0[0x8];
    PlayingSound* sound;   // +0x8: -1 once let go
    char padding_10[0x8];
    char key[0x8];         // +0x18
    int32_t value20;       // +0x20
    int32_t value24;       // +0x24
    int32_t value28;       // +0x28
    char padding_2c[0x4];
    WrappedSoundPart part; // +0x30
    // Not noexcept: the original destroys `part` and resumes when the release in the body throws.
    ~WrappedSound3() noexcept(false);
};
struct WrappedSound4 {
    PlayingSound* sound;   // +0x0
    char key[0x8];         // +0x8
    int32_t finished;      // +0x10
};

// Entry 2's stop (0xd5f310): stops the wrapped sound through its kind, clearing its +0x28.
void WrappedSound2_Stop(WrappedSound2* object) {
    PlayingSound* playing = object->sound;
    if (playing->stopped) return;
    if (!playing->active) return;
    playing->value28 = 0;
    playing->Functions().stop(playing->object);
}

// Entry 2's +0x30 function (0xd5f910): 1 until the sound has started, then what the wrapped sound's kind answers.
int32_t WrappedSound2_Forward(WrappedSound2* object, void* argument) {
    if (!object->started) return 1;
    PlayingSound* playing = object->sound;
    return playing->Functions().forward(playing->object, argument);
}

// Entry 2's report (0xd5fbf0): the wrapped sound's kind's report, or 0x8000e009 when it isn't playing.
int32_t WrappedSound2_Report(WrappedSound2* object, void* out) {
    PlayingSound* playing = object->sound;
    if (playing->stopped || !playing->active) return static_cast<int32_t>(0x8000e009u);
    return playing->Functions().report(playing->object, out);
}

// Entry 3's stop (0xd5fcc0): stops the wrapped sound through its kind, clearing its +0x28.
void WrappedSound3_Stop(WrappedSound3* object) {
    PlayingSound* playing = object->sound;
    if (playing->stopped) return;
    if (!playing->active) return;
    playing->value28 = 0;
    playing->Functions().stop(playing->object);
}

// Entry 3's query (0xd5fed0): what the wrapped sound's kind reports, or -1 when it isn't playing.
float WrappedSound3_Query(WrappedSound3* object) {
    PlayingSound* playing = object->sound;
    if (!playing->active) return -1.0f;
    return playing->Functions().query(playing->object);
}

// Entry 3's +0x30 function (0xd5ffb0): what the wrapped sound's kind answers.
int32_t WrappedSound3_Forward(WrappedSound3* object, void* argument) {
    PlayingSound* playing = object->sound;
    return playing->Functions().forward(playing->object, argument);
}

// Entry 3's report (0xd60270): the wrapped sound's kind's report, or 0x8000e009 when it isn't playing.
int32_t WrappedSound3_Report(WrappedSound3* object, void* out) {
    PlayingSound* playing = object->sound;
    if (playing->stopped || !playing->active) return static_cast<int32_t>(0x8000e009u);
    return playing->Functions().report(playing->object, out);
}

// Entry 4's stop (0xd60340): unless finished, stops the wrapped sound through its kind, clearing its +0x28.
void WrappedSound4_Stop(WrappedSound4* object) {
    if (object->finished) return;
    PlayingSound* playing = object->sound;
    if (playing->stopped) return;
    if (!playing->active) return;
    playing->value28 = 0;
    playing->Functions().stop(playing->object);
}

// Entry 4's query (0xd604a0): -1 once finished or when the wrapped sound isn't playing, else what its kind reports.
float WrappedSound4_Query(WrappedSound4* object) {
    if (object->finished) return -1.0f;
    PlayingSound* playing = object->sound;
    if (!playing->active) return -1.0f;
    return playing->Functions().query(playing->object);
}

// Entry 4's +0x30 function (0xd605a0): 1 once finished, else what the wrapped sound's kind answers.
int32_t WrappedSound4_Forward(WrappedSound4* object, void* argument) {
    if (object->finished) return 1;
    PlayingSound* playing = object->sound;
    return playing->Functions().forward(playing->object, argument);
}

// Entry 2's check (0xd5fb50): 1 when asked (b 0x20000000) about this sound's own kind's value a, else what the
// wrapped sound's kind answers (0 when it isn't playing).
int32_t WrappedSound2_Check(WrappedSound2* object, int32_t a, int32_t b) {
    SoundKind* kind = reinterpret_cast<PlayingSound*>(object->key)->Kind();
    if (b == 0x20000000 && kind->value0 == a) return 1;
    PlayingSound* playing = object->sound;
    if (playing->stopped) return 0;
    if (!playing->active) return 0;
    return playing->Functions().check(playing->object, a, b);
}

// Entry 3's check (0xd601d0): as entry 2's.
int32_t WrappedSound3_Check(WrappedSound3* object, int32_t a, int32_t b) {
    SoundKind* kind = reinterpret_cast<PlayingSound*>(object->key)->Kind();
    if (b == 0x20000000 && kind->value0 == a) return 1;
    PlayingSound* playing = object->sound;
    if (playing->stopped) return 0;
    if (!playing->active) return 0;
    return playing->Functions().check(playing->object, a, b);
}

// Entry 4's check (0xd606d0): as entry 2's, but 0 once finished.
int32_t WrappedSound4_Check(WrappedSound4* object, int32_t a, int32_t b) {
    SoundKind* kind = reinterpret_cast<PlayingSound*>(object->key)->Kind();
    if (b == 0x20000000 && kind->value0 == a) return 1;
    if (object->finished) return 0;
    PlayingSound* playing = object->sound;
    if (playing->stopped) return 0;
    if (!playing->active) return 0;
    return playing->Functions().check(playing->object, a, b);
}

// Entry 4's report (0xd60770): the wrapped sound's kind's report, or 0x8000e009 without an object, a sound (-1), or
// when the sound isn't playing.
int32_t WrappedSound4_Report(WrappedSound4* object, void* out) {
    if (!object) return static_cast<int32_t>(0x8000e009u);
    PlayingSound* playing = object->sound;
    if (playing == reinterpret_cast<PlayingSound*>(-1)) return static_cast<int32_t>(0x8000e009u);
    if (playing->stopped || !playing->active) return static_cast<int32_t>(0x8000e009u);
    return playing->Functions().report(playing->object, out);
}

// Lets a playing sound go: its kind releases it when it is active, then it is marked stopped.
inline void LetGo(PlayingSound* playing) {
    if (playing->active) playing->Functions().release(playing->object);
    playing->value10 = 0;
    playing->stopped = 1;
}

// Entry 3's object lets its sound go once.
WrappedSound3::~WrappedSound3() noexcept(false) {
    if (sound != reinterpret_cast<PlayingSound*>(-1)) {
        PlayingSound* playing = sound;
        if (!playing->stopped) LetGo(playing);
        sound = reinterpret_cast<PlayingSound*>(-1);
    }
}

// Entry 3's release (0xd5fe10): destroys and frees the object (not freed when the destructor throws).
void WrappedSound3_Release(WrappedSound3* object) {
    if (!object) return;
    object->~WrappedSound3();
    DareFree(object);
}

// Entry 3's +0x28 function (0xd5ff20): 1 while the wrapped sound goes on; otherwise lets it go, releases the object
// and answers 0.
int32_t WrappedSound3_GoOn(WrappedSound3* object, void* argument) {
    PlayingSound* playing = object->sound;
    if (!playing->stopped) {
        if (playing->active && playing->Functions().goOn(playing->object, argument)) return 1;
        playing->value10 = 0;
        playing->stopped = 1;
    }
    object->sound = reinterpret_cast<PlayingSound*>(-1);
    WrappedSound3_Release(object);
    return 0;
}

// Entry 4's release (0xd60400): unless finished, lets the wrapped sound go; then frees the object.
void WrappedSound4_Release(WrappedSound4* object) {
    if (!object->finished) {
        PlayingSound* playing = object->sound;
        if (!playing->stopped) LetGo(playing);
    }
    DareFree(object);
}

// Entry 4's +0x28 function (0xd604f0): 1 while the wrapped sound goes on; otherwise (or once finished) lets it go,
// frees the object and answers 0.
int32_t WrappedSound4_GoOn(WrappedSound4* object, void* argument) {
    if (!object->finished) {
        PlayingSound* playing = object->sound;
        if (!playing->stopped) {
            if (playing->active && playing->Functions().goOn(playing->object, argument)) return 1;
            playing->value10 = 0;
            playing->stopped = 1;
        }
    }
    DareFree(object);
    return 0;
}

// Entry 4's +0x38 function (0xd60600): 1 while the wrapped sound's kind answers nonzero, or when its kind is not one of
// 2 to 7 (the kinds that have this function); otherwise (or once finished) lets the sound go, frees the object and
// answers 0. The 64-bit index's only support is that it matches (a 32-bit range test compares in w registers).
int32_t WrappedSound4_Function38(WrappedSound4* object, int32_t value) {
    if (!object->finished) {
        PlayingSound* playing = object->sound;
        if (!playing->stopped) {
            if (playing->active) {
                uint64_t index = reinterpret_cast<PlayingSound*>(playing->key)->Kind()->index;
                if (index - 2 > 5 || playing->Functions().function38(playing->object, value)) return 1;
            }
            playing->value10 = 0;
            playing->stopped = 1;
        }
    }
    DareFree(object);
    return 0;
}

// What entry 3's start uses (provisional names): finds the sound data (fresh when the sound must be made anew), makes
// a playing sound from it (-1 when that fails), or restarts the one there is.
int32_t PrepareSound(WrappedSound3* object, void** data, int32_t* fresh);                                // 0xd65e00
PlayingSound* MakeSound(void* data, int32_t value28, void* first, int32_t value20, int32_t value24, void* second);  // 0xd65f50
int32_t RestartSound(PlayingSound* sound, void* first, void* second);                                    // 0xd64900

// Entry 3's +0x10 function (0xd5fd10): (re)starts the wrapped sound, letting the old one go when a new one is made;
// on failure the object is released and the answer is 0.
int32_t WrappedSound3_Start(WrappedSound3* object, void* first, void* second) {
    int32_t fresh = 1;
    void* data;
    if (PrepareSound(object, &data, &fresh)) {
        if (fresh) {
            PlayingSound* playing = object->sound;
            if (!playing->stopped) LetGo(playing);
            object->sound = MakeSound(data, object->value28, first, object->value20, object->value24, second);
        } else if (!RestartSound(object->sound, first, second)) {
            object->sound = reinterpret_cast<PlayingSound*>(-1);
            WrappedSound3_Release(object);
            return 0;
        }
        if (object->sound != reinterpret_cast<PlayingSound*>(-1)) return 1;
    }
    WrappedSound3_Release(object);
    return 0;
}

// Drops the list's nodes for an entry 2 object (the loop steps past the node after each one it removes), then
// destroys and frees the object. The original tests the object for null only after walking a non-empty list; this
// spelling of that is match-only (a plain DareDelete after the loop also tests it when the list is empty).
inline void ForgetWrappedSound2(WrappedSound2* object) {
    SoundUseNode* end = reinterpret_cast<SoundUseNode*>(&Dare_SoundUses);
    SoundUseNode* node = Dare_SoundUses.next;
    if (node != end) {
        do {
            if (node->owner == object) {
                SoundUseNode* next = node->next;
                node->prev->next = next;
                next->prev = node->prev;
                DareDelete(node);
                --Dare_SoundUses.count;
                node = next;
            }
            node = node->next;
        } while (node != end);
        if (!object) return;
    }
    object->effects.~EffectChainParameter();
    DareFree(object);
}

// Entry 2's release (0xd5f610): lets the wrapped sound go, then forgets the object.
void WrappedSound2_Release(WrappedSound2* object) {
    object->started = 0;
    PlayingSound* playing = object->sound;
    if (!playing->stopped) LetGo(playing);
    ForgetWrappedSound2(object);
}

// What 0xd310a0 finds for an entry 2 object (provisional names): a sequence of sounds with a loop. Each step is the
// key of a sound (what 0xd310a0 finds its kind by), which is also the data MakeSound starts from.
struct SequenceStep {
    void* data;
};
struct SequenceKind : SoundKind {
    char padding_8[0x10];
    int32_t loops;          // +0x18: nonzero when the sequence loops
    uint32_t loopStart;     // +0x1c
    uint32_t loopEnd;       // +0x20
    uint32_t loopCount;     // +0x24: 0 loops forever
    uint32_t count;         // +0x28
    char padding_2c[0x8];
    SequenceStep* steps;    // +0x34 (unaligned)
} __attribute__((packed));
inline SequenceKind* WrappedSound2::Kind() { return static_cast<SequenceKind*>(reinterpret_cast<PlayingSound*>(key)->Kind()); }

// Entry 2's advance (0xd90000): moves to the next step of the sequence, looping back to the loop start until the loop
// has run its count, and makes the next playing sound; marks the object not started when the sequence ends or the
// sound can't be made.
void AdvanceWrappedSound2(WrappedSound2* object) {
    ++object->step;
    if (object->Kind()->loops && !object->loopDone) {
        if (object->step == object->Kind()->loopEnd + 1) {
            uint32_t loopCount = object->Kind()->loopCount;
            uint32_t loops = object->loopsRun;
            if (loopCount) object->loopsRun = ++loops;
            if (loops == object->Kind()->loopCount + 1) {
                object->loopDone = 1;
                goto end;
            }
            object->step = object->Kind()->loopStart;
        }
    } else {
    end:
        if (object->step >= object->Kind()->count) {
            object->started = 0;
            object->sound = reinterpret_cast<PlayingSound*>(-1);
            return;
        }
    }
    SequenceStep* step = &object->Kind()->steps[object->step];
    if (reinterpret_cast<PlayingSound*>(step)->Kind()) {
        object->sound = MakeSound(step->data, -1, &object->settings, object->value8, object->valueC, &object->effects);
        if (object->sound != reinterpret_cast<PlayingSound*>(-1)) return;
    }
    object->started = 0;
}

// Entry 2's +0x10 function (0xd5f360): when started, takes the new settings and effect chain, then restarts the
// wrapped sound, or moves to the next step when it can't; forgets the object when it isn't (or is no longer) started.
// Not yet matched (not credited): the original tests the effect chain for self-assignment twice (the parameter's own
// test, then its array's, both on the same pointers); this build folds the second away, 8 bytes shorter.
int32_t WrappedSound2_Start(WrappedSound2* object, const SoundSettings* settings, const EffectChainParameter* effects) {
    if (object->started) {
        object->settings = *settings;
        object->effects = *effects;
    }
    if (!object->started) {
        ForgetWrappedSound2(object);
        return 0;
    }
    if (RestartSound(object->sound, const_cast<SoundSettings*>(settings), const_cast<EffectChainParameter*>(effects))) return 1;
    AdvanceWrappedSound2(object);
    if (object->started) return 1;
    ForgetWrappedSound2(object);
    return 0;
}

// Entry 2's +0x28 function (0xd5f750): 1 while the wrapped sound goes on, or while a next one starts after it ends;
// otherwise (or when never started) forgets the object and answers 0.
int32_t WrappedSound2_GoOn(WrappedSound2* object, void* argument) {
    if (!object->started) {
        ForgetWrappedSound2(object);
        return 0;
    }
    PlayingSound* playing = object->sound;
    if (!playing->stopped) {
        if (playing->active && playing->Functions().goOn(playing->object, argument)) return 1;
        playing->value10 = 0;
        playing->stopped = 1;
    }
    AdvanceWrappedSound2(object);
    if (object->started) return 1;
    ForgetWrappedSound2(object);
    return 0;
}

// Entry 2's +0x38 function (0xd5f970): as its +0x28 function, through the wrapped sound's kind's +0x38 function
// (kinds other than 2 to 7 count as going on; the 64-bit index as in WrappedSound4_Function38).
int32_t WrappedSound2_Function38(WrappedSound2* object, int32_t value) {
    if (!object->started) {
        ForgetWrappedSound2(object);
        return 0;
    }
    PlayingSound* playing = object->sound;
    if (!playing->stopped) {
        if (playing->active) {
            uint64_t index = reinterpret_cast<PlayingSound*>(playing->key)->Kind()->index;
            if (index - 2 > 5 || playing->Functions().function38(playing->object, value)) return 1;
        }
        playing->value10 = 0;
        playing->stopped = 1;
    }
    AdvanceWrappedSound2(object);
    if (object->started) return 1;
    ForgetWrappedSound2(object);
    return 0;
}

// Entry 7 of the table at 0x18d2318 plays several sounds at once (provisional name): its object keeps them in an
// array, as many as its own kind's +0x24 says.
struct MultiSound {
    char key[0x8];          // +0x0: what 0xd310a0 finds this sound's own kind by
    PlayingSound** sounds;  // +0x8: -1 where a sound failed
    MultiKind* Kind() { return static_cast<MultiKind*>(reinterpret_cast<PlayingSound*>(key)->Kind()); }
};

// Entry 7's start (0xd61e10): starts each playing sound through its kind, setting its +0x28.
void MultiSound_Start(MultiSound* object) {
    for (uint64_t i = 0; i < object->Kind()->count; ++i) {
        PlayingSound* playing = object->sounds[i];
        if (playing == reinterpret_cast<PlayingSound*>(-1) || playing->stopped || !playing->active) continue;
        playing->value28 = 1;
        playing->Functions().start(playing->object);
    }
}

// Entry 7's stop (0xd61eb0): stops each playing sound through its kind, clearing its +0x28.
void MultiSound_Stop(MultiSound* object) {
    for (uint64_t i = 0; i < object->Kind()->count; ++i) {
        PlayingSound* playing = object->sounds[i];
        if (playing == reinterpret_cast<PlayingSound*>(-1) || playing->stopped || !playing->active) continue;
        playing->value28 = 0;
        playing->Functions().stop(playing->object);
    }
}

// Entry 7's query (0xd621f0): with one sound, what its kind reports (-1 when it isn't playing); with several, -5 when
// any of them reports more than 0, else -1.
float MultiSound_Query(MultiSound* object) {
    uint32_t count = object->Kind()->count;
    if (count == 0) return -1.0f;
    if (count == 1) {
        PlayingSound* playing = object->sounds[0];
        if (playing == reinterpret_cast<PlayingSound*>(-1) || !playing->active) return -1.0f;
        return playing->Functions().query(playing->object);
    }
    for (uint64_t i = 0; i < count; ++i) {
        PlayingSound* playing = object->sounds[i];
        if (playing == reinterpret_cast<PlayingSound*>(-1) || !playing->active) continue;
        if (playing->Functions().query(playing->object) > 0.0f) return -5.0f;
    }
    return -1.0f;
}

// Entry 7's +0x30 function (0xd62410): 1 when every sound's kind answers nonzero.
int32_t MultiSound_Forward(MultiSound* object, void* argument) {
    uint32_t count = object->Kind()->count;
    for (uint64_t i = 0; i < count; ++i) {
        PlayingSound* playing = object->sounds[i];
        if (!playing->Functions().forward(playing->object, argument)) return 0;
    }
    return 1;
}

// Entry 7's check (0xd62840): 1 when asked (b 0x20000000) about this sound's own kind's value a, or when any playing
// sound's kind says so.
int32_t MultiSound_Check(MultiSound* object, int32_t a, int32_t b) {
    SoundKind* kind = object->Kind();
    if (b == 0x20000000 && kind->value0 == a) return 1;
    for (uint64_t i = 0; i < object->Kind()->count; ++i) {
        PlayingSound* playing = object->sounds[i];
        if (playing == reinterpret_cast<PlayingSound*>(-1) || playing->stopped || !playing->active) continue;
        if (playing->Functions().check(playing->object, a, b)) return 1;
    }
    return 0;
}

// Entry 7's report (0xd62920): the report of the first sound there is (of the kind's +0x20 many), or 0x8000e009 when
// there is none or it isn't playing. The first lookup of the kind is unused.
int32_t MultiSound_Report(MultiSound* object, void* out) {
    object->Kind();
    for (int64_t i = 0; i < object->Kind()->value20; ++i) {
        PlayingSound* playing = object->sounds[i];
        if (playing == reinterpret_cast<PlayingSound*>(-1)) continue;
        if (playing->stopped || !playing->active) return static_cast<int32_t>(0x8000e009u);
        return playing->Functions().report(playing->object, out);
    }
    return static_cast<int32_t>(0x8000e009u);
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
