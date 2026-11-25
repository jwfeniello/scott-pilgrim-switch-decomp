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
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual ~AssoBase();                             // slots 8 and 9 (Dare::Private::Asso's at 0xd539d0)
    struct State { uint64_t words[0xd8 / 8]; };
    virtual void Slot10();
    virtual int32_t Slot11(const State* state);     // slot 11
    virtual int32_t Slot12();                        // slot 12
    virtual void Slot13(int32_t value);              // slot 13
    virtual void Slot14();
    virtual void Slot15();                           // slot 15
    virtual int32_t Slot16(int32_t a, int32_t b);    // slot 16
    char padding_8[0x80];
    State state;         // +0x88: copied whole
    char padding_160[0x38];
    int32_t flag198;     // +0x198
    char padding_19c[0x4];
    int32_t flag1a0;     // +0x1a0
    char padding_1a4[0xa4];
    AssoBase* next;      // +0x248
    void Update599e0();  // 0xd599e0 (what these do is not known yet)
    void Update59b00();  // 0xd59b00
};

// Dare::Private::AssoMultiEvent: passes calls on to the associations it holds (+0x260, chained through +0x248).
// The part at +0x10 that AssoMultiEvent's slot 16 asks first (0xd59560).
struct AssoCondition {
    int32_t Check(int32_t a, int32_t b);
};
// Visits one association through a pointer to the walk's current one (0xd53f60).
void VisitAsso(AssoBase** current, void* context, int32_t flag, float value);

// Each association class keeps its objects in a static pool (the globals from 0x1939de0 on); an association's destructor
// gives its storage back as the last thing its body does, before its members and Asso's destructor run.
struct AssoMultiEvent;
extern "C" DarePool<AssoMultiEvent, 64>* Dare_AssoMultiEventPool;   // 0x1939df8

struct AssoMultiEvent : AssoBase {
    ~AssoMultiEvent() override;
    char padding_250[0x10];
    AssoBase* first;     // +0x260
    char padding_268[0x8];
    int32_t busy;        // +0x270
    void Slot4(float value, int32_t flag) override;
    int32_t Slot12() override;
    int32_t Slot11(const State* state) override;
    void Slot13(int32_t value) override;
    int32_t Slot16(int32_t a, int32_t b) override;
    int32_t Slot18(void* context, int32_t flag, float value);
    AssoCondition& Condition() { return *reinterpret_cast<AssoCondition*>(reinterpret_cast<char*>(this) + 0x10); }
};

// Slots 8 and 9 (0xd56920, 0xd56a30; the deleting one has this inlined): destroys the held associations and gives the
// storage back to the pool.
__attribute__((always_inline)) AssoMultiEvent::~AssoMultiEvent() {
    AssoBase* child = first;
    while (child) {
        AssoBase* next = child->next;
        child->~AssoBase();
        child = next;
    }
    Dare_AssoMultiEventPool->Free(this);
}

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

// Slot 11 (0xd56d30): takes the state, updates, then hands it to every held association, destroying each that turns it
// down; whether any took it. Slot 15 runs once afterwards if +0x198 asked for it. Not yet matched: the original gives
// the loop's values other callee-saved registers (the walk x22, the result so far w20).
int32_t AssoMultiEvent::Slot11(const State* state) {
    this->state = *state;
    Update599e0();
    Update59b00();
    int32_t taken = 0;
    AssoBase* child = first;
    while (child) {
        AssoBase* next = child->next;
        int32_t result = child->Slot11(&this->state);
        if (!result) child->~AssoBase();
        taken = result || taken;
        child = next;
    }
    if (flag198) {
        Slot15();
        flag198 = 0;
    }
    return taken;
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
// Dare::Private::Asso (RTTI name) as AssoPlay and AssoSwitch see it: only its destructor (0xd539d0, slots 8 and 9 of
// the associations; AssoBase above is the same class seen through its other slots).
struct Asso {
    virtual ~Asso();
};

// The tick count the ramps time themselves by (0xfa3b00) and its base (the global at 0x195b648).
uint64_t DareGetTick() noexcept;
extern "C" uint64_t Dare_TickBase;
// A ramp an association plays its volume through (0x30 bytes; provisional names). Destroying it stops it where it is.
struct AssoRamp {
    char padding_0[0x8];
    uint64_t start;              // +0x8
    int32_t state;               // +0x10: 1 when stopped
    char padding_14[0x4];
    int32_t value18;             // +0x18
    int32_t value1c;             // +0x1c
    uint64_t value20;            // +0x20
    int32_t value28;             // +0x28
    char padding_2c[0x4];
    void Set(float from, float to);   // 0xd56010
    // The destructor (0xd36e40 is its own copy, not matched: there the stores come in another order).
    ~AssoRamp() {
        if (state == 1) return;
        uint64_t now = DareGetTick();
        start = now - Dare_TickBase;
        state = 1;
        value18 = value1c;
        value20 = 0;
        value28 = 0;
    }
};

struct AssoPlay;
extern "C" DarePool<AssoPlay, 256>* Dare_AssoPlayPool;   // 0x1939de0
struct AssoPlay : Asso {
    ~AssoPlay() override;
    char padding_8[0x18];
    AssoOwner* owner;            // +0x20
    void* idFirst;               // +0x28
    void* idSecond;              // +0x30
    char padding_38[0x10];
    void* value48;               // +0x48
    char padding_50[0x4];
    int32_t fromPool;            // +0x54: 1 when it came from the pool
    char padding_58[0x208];
    PlayingSound* sound;         // +0x260: -1 for none
    char padding_268[0x10];
    AssoRamp fade;               // +0x278
    AssoRamp ramp;               // +0x2a8
    int32_t priority;            // +0x2d8
    char padding_2dc[0x4];
    AssoCondition& Condition() { return *reinterpret_cast<AssoCondition*>(reinterpret_cast<char*>(this) + 0x10); }
    int32_t Report(void** out);                                  // slot 0
    int32_t Slot1(void* first, void* second, int32_t* best);     // slot 1
    void Slot4(float value);                                     // slot 4
    float Query();                                               // slot 6
    void Stop();                                                 // slot 15
    int32_t Slot16(int32_t a, int32_t b);                        // slot 16
};

// Slot 8 (0xd90560): stops the sound through its kind if it still plays and gives the storage back to the pool when it
// came from there.
AssoPlay::~AssoPlay() {
    PlayingSound* playing = sound;
    if (playing != reinterpret_cast<PlayingSound*>(-1) && !playing->stopped) {
        if (playing->active) playing->Functions().release(playing->object);
        playing->value10 = 0;
        playing->stopped = 1;
    }
    if (fromPool == 1) Dare_AssoPlayPool->Free(this);
}

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
    if (idFirst == first && idSecond == second && owner->enabled && ramp.state == 1) {
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

// What AssoPlaySynth's sounds are released to (the object at 0x1939560; its class is unknown).
struct SynthSounds {
    void Release(PlayingSound* sound);   // 0xcf62c0
};
extern "C" SynthSounds Dare_SynthSounds;   // 0x1939560

// Dare::Private::AssoPlaySynth: an AssoPlay whose sound (+0x260, -1 for none) is a synth's.
struct AssoPlaySynth;
extern "C" DarePool<AssoPlaySynth, 2>* Dare_AssoPlaySynthPool;   // 0x1939e00
struct AssoPlaySynth : AssoPlay {
    ~AssoPlaySynth() override;
    char padding_2e0[0x10];
};
// Slot 8 (0xd5d5f0): releases the synth's sound and gives the storage back to the pool.
AssoPlaySynth::~AssoPlaySynth() {
    if (sound != reinterpret_cast<PlayingSound*>(-1)) {
        Dare_SynthSounds.Release(sound);
        sound = reinterpret_cast<PlayingSound*>(-1);
    }
    Dare_AssoPlaySynthPool->Free(this);
}

// What 0xd53620 looks associations up by.
struct AssoKey {
    AssoKey(void* first, void* second, int32_t id) : first(first), second(second), id(id) {}
    void* first;
    void* second;
    int32_t id;
};
// What AssoSwitch keeps at +0x270 (its destructor is CallbackClient<SwitchCallbackObject, 1, int, McArrayTag>'s).
struct AssoTable {
    void* Find(const AssoKey* key, int32_t flag);   // 0xd53620
    ~AssoTable();                                    // 0xd538f0
    char data[0x20];
};

// Dare::Private::AssoSwitch.
struct AssoSwitch;
extern "C" DarePool<AssoSwitch, 256>* Dare_AssoSwitchPool;   // 0x1939de8
struct AssoSwitch : Asso {
    ~AssoSwitch() override;
    char padding_8[0x18];
    AssoOwner* owner;            // +0x20
    void* first;                 // +0x28
    char padding_30[0x10];
    void* second;                // +0x40
    char padding_48[0x40];
    AssoBase::State state;       // +0x88
    char padding_160[0x38];
    int32_t flag198;             // +0x198
    char padding_19c[0xcc];
    AssoBase* held;              // +0x268
    AssoTable table;             // +0x270
    int32_t Slot11(const AssoBase::State* state);
    int32_t Slot17();
    void Update599e0();          // 0xd599e0 (as AssoBase's)
    void Update59b00();          // 0xd59b00
};

// Slot 11 (0xd5d100): takes the state and, holding an association, updates and hands it on; 0 when the held one turns it
// down, else 1. Slot 15 of the held one runs afterwards if +0x198 asked for it.
int32_t AssoSwitch::Slot11(const AssoBase::State* state) {
    this->state = *state;
    if (!held) return 1;
    Update599e0();
    Update59b00();
    if (!held->Slot11(&this->state)) return 0;
    if (flag198) {
        held->Slot15();
        flag198 = 0;
    }
    return 1;
}

// Slots 8 and 9 (0xd5cd90, 0xd5ceb0): destroys the held association and gives the storage back to the pool.
AssoSwitch::~AssoSwitch() {
    if (held) {
        held->~AssoBase();
        held = nullptr;
    }
    Dare_AssoSwitchPool->Free(this);
}

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
}  // namespace Private
struct MultiLayerParameterCallbackObject;
struct MultiLayerActivationFlagCallbackObject;
}  // namespace Dare
struct McMapTag;
struct McArrayTag;
namespace Dare {
// Dare::CallbackClient<...> (RTTI names); only their destructors (0xd62ca0, 0xd62b10) are used here.
template<class Object, int N, class Key, class Tag> struct CallbackClient {
    virtual ~CallbackClient();
};
namespace Private {
struct MultiSound {
    char key[0x8];          // +0x0: what 0xd310a0 finds this sound's own kind by
    PlayingSound** sounds;  // +0x8: -1 where a sound failed
    CallbackClient<MultiLayerParameterCallbackObject, 0, unsigned, McMapTag> parameters;        // +0x10
    char padding_18[0x38];
    CallbackClient<MultiLayerActivationFlagCallbackObject, 0, int, McArrayTag> activations;    // +0x50
    // 0xd629f0, not matched yet: written out (letting each sound go through its kind's +0x18, freeing the array),
    // the loop comes out unrotated or with the array pointer kept across it, and here its definition would be inlined
    // into the +0x28 function, which the original calls.
    ~MultiSound();
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

// Entry 7's +0x28 function (0xd62300): 1 while any sound's kind says it goes on; the others are let go and dropped
// (-1); then the object is destroyed and freed.
int32_t MultiSound_GoOn(MultiSound* object, void* argument) {
    if (object->sounds) {
        for (uint64_t i = 0; i < object->Kind()->count; ++i) {
            PlayingSound* playing = object->sounds[i];
            if (playing == reinterpret_cast<PlayingSound*>(-1)) continue;
            if (!playing->stopped) {
                if (playing->active && playing->Functions().goOn(playing->object, argument)) return 1;
                playing->value10 = 0;
                playing->stopped = 1;
            }
            object->sounds[i] = reinterpret_cast<PlayingSound*>(-1);
        }
    }
    object->~MultiSound();
    DareFree(object);
    return 0;
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

// A growable array kept as begin and end pointers, with a word saying it is in use (provisional name): popped back to
// its start, freed and cleared when destroyed. 0xd91500 destroys five at +0x2c to +0xd8 (one inline, four out of line).
template<class T> struct DareStack {
    int32_t used;     // +0x0
    T* begin;         // +0x8
    T* end;           // +0x10
    T* capacity;      // +0x18
    void* value20;    // +0x20
    ~DareStack() {
        if (!used) return;
        while (end > begin) {
            --end;
            end->~T();
        }
        value20 = nullptr;
        DareFree(begin);
        used = 0;
        begin = nullptr;
        end = nullptr;
    }
};
// Their elements are 12 bytes; what they are isn't known yet, so they're named by their destructors' addresses.
struct StackItem_d91280 { char data[0xc]; };
struct StackItem_d91300 { char data[0xc]; };
struct StackItem_d91380 { char data[0xc]; };
struct StackItem_d91400 { char data[0xc]; };
struct StackItem_d91480 { char data[0xc]; };
template struct DareStack<StackItem_d91280>;   // 0xd91280
template struct DareStack<StackItem_d91300>;   // 0xd91300
template struct DareStack<StackItem_d91380>;   // 0xd91380
template struct DareStack<StackItem_d91400>;   // 0xd91400
template struct DareStack<StackItem_d91480>;   // 0xd91480

// Three more, whose elements have destructors (named by their stacks' destructors' addresses).
// 0xd91040's elements: a part at +0x4 destroyed out of line (0xd1dc90).
struct StackPart_d91040 {
    ~StackPart_d91040();   // 0xd1dc90
    char data[0x68];
};
struct StackItem_d91040 {
    int32_t value0;
    StackPart_d91040 part;   // +0x4
};
// 0xd910d0's elements: an array at +0x8.
struct StackItem_d910d0 {
    void* value0;
    DareVector<void*> items;   // +0x8
    void* value20;             // +0x20
};
// Dare::Private::ChannelVolumes (vtable 0x18cd740): its destructor (0xd11d80) clears +0x28. Its size here is only
// what 0xd911a0's elements leave for it.
#pragma pack(push, 4)
struct ChannelVolumes {
    virtual ~ChannelVolumes() { value28 = nullptr; }
    char padding_8[0x20];
    void* value28;   // +0x28
    char padding_30[0xc];
};
// 0xd911a0's elements (4-byte packed): an array at +0x10 and channel volumes at +0x30.
struct StackItem_d911a0 {
    char padding_0[0x10];
    DareVector<void*> items;   // +0x10
    char padding_28[0x8];
    ChannelVolumes volumes;    // +0x30
};
#pragma pack(pop)
static_assert(sizeof(StackItem_d91040) == 0x6c && sizeof(StackItem_d910d0) == 0x28 && sizeof(StackItem_d911a0) == 0x6c,
              "stack item sizes");
template struct DareStack<StackItem_d91040>;   // 0xd91040
template struct DareStack<StackItem_d910d0>;   // 0xd910d0
template struct DareStack<StackItem_d911a0>;   // 0xd911a0

// An object Dare counts references to (provisional names): +0x8 is the count; slot 2 destroys it.
struct DareCounted {
    virtual void Slot0();
    virtual void Slot1();
    virtual void Destroy();   // slot 2
    int32_t references;       // +0x8
};
// A counted reference: drops its reference when destroyed.
template<class T> struct DareRef {
    T* object;
    ~DareRef() {
        T* counted = object;
        if (counted && __atomic_sub_fetch(&counted->references, 1, __ATOMIC_RELAXED) == 0) counted->Destroy();
    }
};
// Destroys an element in place (null-safe, as Dare's containers do it).
template<class T> inline void DareDestroy(T* element) {
    if (element) element->~T();
}
// A growable array that destroys its elements (provisional name): capacity, size, data.
template<class T> struct DareObjectArray {
    uint64_t capacity;
    uint64_t size;       // +0x8
    T* data;             // +0x10
    ~DareObjectArray() {
        if (data) {
            for (uint64_t i = 0; i < size; ++i) DareDestroy(&data[i]);
        }
        size = 0;
        if (data) DareFree(data);
        capacity = 0;
        size = 0;
        data = nullptr;
    }
};
template struct DareObjectArray<DareRef<DareCounted>>;   // 0xd62ef0
// 0xd62e10's elements (4-byte packed): a counted reference at +0x4.
#pragma pack(push, 4)
struct StackItem_d62e10 {
    int32_t value0;
    DareRef<DareCounted> ref;   // +0x4
};
#pragma pack(pop)
template struct DareStack<StackItem_d62e10>;   // 0xd62e10

// Four more stacks of the same kind elsewhere in Dare: three of plain elements (16, 28 and 16 bytes) and one whose
// 16-byte elements hold a counted reference at +0x8.
struct StackItem_cf3140 { char data[0x10]; };
struct StackItem_d4e740 { char data[0x1c]; };
struct StackItem_d4e830 { char data[0x10]; };
struct StackItem_d2fd10 {
    void* value0;
    DareRef<DareCounted> ref;   // +0x8
};
template struct DareStack<StackItem_cf3140>;   // 0xcf3140
template struct DareStack<StackItem_d4e740>;   // 0xd4e740
template struct DareStack<StackItem_d4e830>;   // 0xd4e830
template struct DareStack<StackItem_d2fd10>;   // 0xd2fd10

// Two more whose elements hold a Dare array: at +0x18 of 0x38 bytes, and at +0x8 of 0x28 bytes.
struct StackItem_d17170 {
    char padding_0[0x18];
    DareArray<void*> items;   // +0x18
};
struct StackItem_d17240 {
    char padding_0[0x8];
    DareArray<void*> items;   // +0x8
};
template struct DareStack<StackItem_d17170>;   // 0xd17170
template struct DareStack<StackItem_d17240>;   // 0xd17240

// Dare's commands (RTTI names; a base with nine slots, provisional names): slots 3 and 4 are the destructors, the
// base's trivial. These three own a block allocated through Dare, which their destructors free.
struct DareCommand {
    virtual void Slot0();
    virtual const char* Name();
    virtual int32_t Execute();
    virtual ~DareCommand() {}
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8();
};
struct KillSoundObjectCommand : DareCommand {
    char padding_8[0x28];
    void* data;              // +0x30
    ~KillSoundObjectCommand() override;
    char padding_38[0x8];
};
struct AddSoundObjectTypeCommand : DareCommand {
    char padding_8[0x80];
    void* data;              // +0x88
    ~AddSoundObjectTypeCommand() override;
    char padding_90[0x8];
};
struct LoadUnloadPackageCommand : DareCommand {
    char padding_8[0x18];
    void* data;              // +0x20
    ~LoadUnloadPackageCommand() override;
    char padding_28[0x10];
};
// Slot 3 (0xdb3880; slot 4 at 0xdb38d0 inlines it, always_inline standing in for that, its only support being that it
// matches): frees the block.
__attribute__((always_inline)) KillSoundObjectCommand::~KillSoundObjectCommand() {
    if (data) DareFree(data);
}
// Slot 3 (0xdb4080; slot 4 at 0xdb40d0 inlines it, as above): frees the block.
__attribute__((always_inline)) AddSoundObjectTypeCommand::~AddSoundObjectTypeCommand() {
    if (data) DareFree(data);
}
// Slot 3 (0xda2210): frees the block and forgets it. Slot 4 (0xda2260) is not matched: it tests the pointer and the
// allocator flag together, reading the flag first, which DareCore.h's volatile flag doesn't allow.
__attribute__((always_inline)) LoadUnloadPackageCommand::~LoadUnloadPackageCommand() {
    if (data) {
        DareFree(data);
        data = nullptr;
    }
}

}  // namespace Private
}  // namespace Dare
namespace nn { namespace os {
struct MutexType;
void LockMutex(MutexType* mutex) noexcept;     // 0xfa4950
void UnlockMutex(MutexType* mutex) noexcept;   // 0xfa4960
} }  // namespace nn::os
namespace Dare {
namespace Private {
// The registry Dare keeps callbacks in (provisional names): made on first use, kept in the global at 0x1939a88.
struct SoundMicros {
    char data[0x20];
};
// What the registry keeps for a key: a table of objects, one for each kind (see RegisteredObject).
struct CallbackRegistration {
    char padding_0[0x18];
    void** objects;                // +0x18
};
struct CallbackRegistryEntry {
    const void* key;
    CallbackRegistration registration;   // +0x8
};
struct CallbackRegistry {
    static void* operator new(size_t size) { return DareAllocate(size, 8); }
    CallbackRegistry() noexcept;   // 0xd147f0 (no landing pad guards it where it is inlined)
    char padding_0[0x10];
    CallbackRegistryEntry* begin;  // +0x10
    CallbackRegistryEntry* end;    // +0x18
    const void* lastKey;           // +0x20
    CallbackRegistration* last;    // +0x28: what the last lookup found
    char padding_30[0x58];
    ::nn::os::MutexType* mutex;    // +0x88
    char padding_90[0x20];
    static CallbackRegistry* Get();
    void SetRetSoundMicros(const SoundMicros& micros);   // 0xda15e0
};
extern "C" CallbackRegistry* Dare_CallbackRegistry;   // 0x1939a88
inline CallbackRegistry* CallbackRegistry::Get() {
    CallbackRegistry* registry = Dare_CallbackRegistry;
    if (!registry) {
        registry = new CallbackRegistry;
        Dare_CallbackRegistry = registry;
    }
    return registry;
}
struct SetRetSoundMicrosCommand : DareCommand {
    char padding_8[0x8];
    SoundMicros micros;      // +0x10
    int32_t Execute() override;
};
// Slot 2 (0xdb3ed0): hands a copy of the micros to the registry.
int32_t SetRetSoundMicrosCommand::Execute() {
    SoundMicros copy = micros;
    CallbackRegistry::Get()->SetRetSoundMicros(copy);
    return 0;
}


// The object registered for a client's key, of one kind: the kind's index into each registration's table is a global
// (0x1939124 to 0x1939144; which kind each one is, is not known). The lookup is made under the registry's lock; the last
// key looked up is remembered, and otherwise the entries are searched from both ends at once (the key is always there).
extern "C" int32_t Dare_CallbackKind124;   // 0x1939124
extern "C" int32_t Dare_CallbackKind128;   // 0x1939128
extern "C" int32_t Dare_CallbackKind12c;   // 0x193912c
extern "C" int32_t Dare_CallbackKind130;   // 0x1939130
extern "C" int32_t Dare_CallbackKind134;   // 0x1939134
extern "C" int32_t Dare_CallbackKind13c;   // 0x193913c
extern "C" int32_t Dare_CallbackKind140;   // 0x1939140
extern "C" int32_t Dare_CallbackKind144;   // 0x1939144
template<int32_t* Kind, unsigned KeyOffset> struct RegisteredClient {
    char padding_0[KeyOffset];
    const void* key;
    void* RegisteredObject();
};
template<int32_t* Kind, unsigned KeyOffset> void* RegisteredClient<Kind, KeyOffset>::RegisteredObject() {
    CallbackRegistry* registry = CallbackRegistry::Get();
    const void* key = this->key;
    nn::os::LockMutex(registry->mutex);
    if (registry->lastKey != key) {
        CallbackRegistryEntry* low = registry->begin;
        CallbackRegistryEntry* high = registry->end;
        registry->lastKey = key;
        for (;;) {
            if (low->key == key) {
                registry->last = &low->registration;
                break;
            }
            --high;
            if (high->key == key) {
                registry->last = &high->registration;
                break;
            }
            ++low;
        }
    }
    int32_t kind = *Kind;
    void* object = registry->last->objects[kind];
    nn::os::UnlockMutex(registry->mutex);
    return object;
}
template struct RegisteredClient<&Dare_CallbackKind124, 0x18>;   // 0xd58f10
template struct RegisteredClient<&Dare_CallbackKind128, 0x18>;   // 0xd588e0
template struct RegisteredClient<&Dare_CallbackKind12c, 0x18>;   // 0xd58300
template struct RegisteredClient<&Dare_CallbackKind130, 0x18>;   // 0xd57c60
template struct RegisteredClient<&Dare_CallbackKind134, 0x18>;   // 0xd5bf30
template struct RegisteredClient<&Dare_CallbackKind13c, 0x18>;   // 0xd892a0
template struct RegisteredClient<&Dare_CallbackKind140, 0x30>;   // 0xd63900
template struct RegisteredClient<&Dare_CallbackKind144, 0x38>;   // 0xd62fd0


// Each command class is kept in a static pool shared between threads (DarePoolBase<T, N, DareMultiThreadedStaticPool>,
// provisional view): as the single-threaded pool in DareCore.h, but the in-use count (+0x4 of a block) is dropped
// atomically. Slot 7 of a command hands back the function that returns it to its pool.
template<class T, unsigned N> struct DareSharedPoolBlock {
    uint32_t padding_0;
    uint32_t used;       // +0x4
    T* objects;          // +0x8
    T storage[N];        // +0x10
    bool inUse[N];
    bool Free(T* object) {
        if (object < objects || object > objects + (N - 1)) return false;
        int32_t index = static_cast<int32_t>(object - objects);
        inUse[index] = false;
        __atomic_fetch_sub(&used, 1, __ATOMIC_RELAXED);
        return true;
    }
};
template<class T, unsigned N> struct DareSharedPool {
    void* vtable;
    DareSharedPoolBlock<T, N> block;              // +0x8
    DareArray<DareSharedPoolBlock<T, N>*> more;
    void Free(T* object) {
        if (block.Free(object)) return;
        for (DareSharedPoolBlock<T, N>** it = more.data, **end = more.data + more.size; it != end; ++it) {
            if ((*it)->Free(object)) return;
        }
    }
};
template<class T, unsigned N, DareSharedPool<T, N>** Pool> struct PooledCommand {
    static void Release(void* command) { (*Pool)->Free(static_cast<T*>(command)); }
};

// The command classes these pools hold, by their sizes (the ones not defined above).
struct Command_d32270 : DareCommand { char data[0x10]; };   // the pool DareCommand's own slot 7 hands back
struct SendSoundRequestCommand : DareCommand { char data[0x50]; };
struct MicCommand : DareCommand { char data[0x48]; };
struct ChangeVolumeObjectTypeCommand : DareCommand { char data[0x38]; };
struct UpdateCommand : DareCommand { char data[0x8]; };
struct DareAsyncScheduler {
    struct SynchronizeCommand : DareCommand { char data[0x10]; };
};
struct UnloadAtomicObjectCommand : DareCommand { char data[0x10]; };
struct SetPlayStateCommand : DareCommand { char data[0x20]; };
struct PresetCommand : DareCommand { char data[0x10]; };
struct ChangeVolumeRequestCommand : DareCommand { char data[0x20]; };
struct ChangeVolumeMTTChannelTrackCommand : DareCommand { char data[0x20]; };   // see DareVoices.cpp

extern "C" DareSharedPool<Command_d32270, 64>* Dare_CommandPool_b68;                         // 0x1939b68
extern "C" DareSharedPool<SendSoundRequestCommand, 64>* Dare_SendSoundRequestPool;           // 0x1939bb8
extern "C" DareSharedPool<KillSoundObjectCommand, 64>* Dare_KillSoundObjectPool;             // 0x1939bd8
extern "C" DareSharedPool<MicCommand, 64>* Dare_MicPool;                                     // 0x1939cc0
extern "C" DareSharedPool<SetRetSoundMicrosCommand, 128>* Dare_SetRetSoundMicrosPool;       // 0x1939c08
extern "C" DareSharedPool<AddSoundObjectTypeCommand, 128>* Dare_AddSoundObjectTypePool;     // 0x1939be8
extern "C" DareSharedPool<ChangeVolumeObjectTypeCommand, 128>* Dare_ChangeVolumeObjectTypePool;   // 0x1939c00
extern "C" DareSharedPool<UpdateCommand, 64>* Dare_UpdatePool;                                       // 0x1939b70
extern "C" DareSharedPool<DareAsyncScheduler::SynchronizeCommand, 64>* Dare_SynchronizePool;          // 0x1939bb0
extern "C" DareSharedPool<UnloadAtomicObjectCommand, 64>* Dare_UnloadAtomicObjectPool;                // 0x1939bc8
extern "C" DareSharedPool<LoadUnloadPackageCommand, 32>* Dare_LoadUnloadPackagePool;                  // 0x1939c18
extern "C" DareSharedPool<SetPlayStateCommand, 64>* Dare_SetPlayStatePool;                            // 0x1939cb8
extern "C" DareSharedPool<PresetCommand, 64>* Dare_PresetPool;                                        // 0x1939cb0
extern "C" DareSharedPool<ChangeVolumeRequestCommand, 64>* Dare_ChangeVolumeRequestPool;              // 0x1939be0
extern "C" DareSharedPool<ChangeVolumeMTTChannelTrackCommand, 64>* Dare_ChangeVolumeMTTChannelTrackPool;   // 0x1939c40
template struct PooledCommand<Command_d32270, 64, &Dare_CommandPool_b68>;                          // 0xd32270
template struct PooledCommand<UpdateCommand, 64, &Dare_UpdatePool>;                                // 0xd34b30
template struct PooledCommand<DareAsyncScheduler::SynchronizeCommand, 64, &Dare_SynchronizePool>;  // 0xd3c810
template struct PooledCommand<UnloadAtomicObjectCommand, 64, &Dare_UnloadAtomicObjectPool>;        // 0xd9b400
template struct PooledCommand<LoadUnloadPackageCommand, 32, &Dare_LoadUnloadPackagePool>;          // 0xda22d0
template struct PooledCommand<SetPlayStateCommand, 64, &Dare_SetPlayStatePool>;                    // 0xdb2d50
template struct PooledCommand<PresetCommand, 64, &Dare_PresetPool>;                                // 0xdb3000
template struct PooledCommand<ChangeVolumeRequestCommand, 64, &Dare_ChangeVolumeRequestPool>;      // 0xdb67b0
template struct PooledCommand<ChangeVolumeMTTChannelTrackCommand, 64, &Dare_ChangeVolumeMTTChannelTrackPool>;   // 0xdb6930
template struct PooledCommand<SendSoundRequestCommand, 64, &Dare_SendSoundRequestPool>;            // 0xdb2680
template struct PooledCommand<KillSoundObjectCommand, 64, &Dare_KillSoundObjectPool>;              // 0xdb3930
template struct PooledCommand<MicCommand, 64, &Dare_MicPool>;                                      // 0xdb3dd0
template struct PooledCommand<SetRetSoundMicrosCommand, 128, &Dare_SetRetSoundMicrosPool>;         // 0xdb3f50
template struct PooledCommand<AddSoundObjectTypeCommand, 128, &Dare_AddSoundObjectTypePool>;       // 0xdb4130
template struct PooledCommand<ChangeVolumeObjectTypeCommand, 128, &Dare_ChangeVolumeObjectTypePool>;   // 0xdb65a0

}  // namespace Private
}  // namespace Dare
