// Methods that do a step of their own and then send one Onyx event: actions finishing, timers
// running out, directors starting a phase. RTTI gives most of the classes (noted beside them, or
// used as the struct's name). Method and field names are provisional, and each struct is a view
// of what its method touches rather than the whole class.
//
// A Lookup resolves a dependency the way the game's handles do: use the cached object if there is
// one, otherwise ask for it by type hash, wake it and read it back. The read goes through a small
// inline step, Peek, before and after. The original's control flow needs that shape: the cached
// path jumps straight to the code that uses the object, which it does not do when the two reads
// are written as one expression with a null test after it.
//
// Most of these send through onyx::SendEvent's own payload. Where the stack layout says otherwise,
// the payloads are locals of the method.
#include "BaseCharacter.h"
#include "OnyxEvents.h"

namespace onyx {
template<class T> __attribute__((always_inline)) inline T* Peek(ComponentHandle*& cache) { return cache ? static_cast<T*>(cache->object) : nullptr; }
template<class T, uint32_t TypeId> __attribute__((always_inline)) inline T* Lookup(ComponentHandle*& cache) {
    T* object = Peek<T>(cache);
    if (!object) {
        Accessor_Resolve(Accessor_Resolver, TypeId, &cache);
        cache->object->EnsureReady();
        object = Peek<T>(cache);
    }
    return object;
}
}  // namespace onyx

namespace SPTG {
using onyx::EventCallback;
using onyx::EventTarget;
using onyx::ComponentHandle;
const uint32_t ActionFinished = 0x3a6530b8u;
const uint32_t ActionStart = 0x1da2cf68u;
const uint32_t ActionStop = 0x339cac8cu;
const uint32_t ActionType = 309210931u;
extern float FrameDelta;
extern float GameDelta;
template<class T> __attribute__((always_inline)) inline T Clamp(const T& value, const T& low, const T& high) {
    T result = low;
    if (!(value < low)) {
        result = value;
        if (value > high) result = high;
    }
    return result;
}

// A director phase: the parent's enable step, then the event.
template<unsigned Key> struct DirectorPhase {
    char padding_0[0x20];
    EventCallback* callback;   // +0x20
    EventTarget* target;       // +0x28
    void EnableBase();
    void Enable();
};
template<unsigned Key> void DirectorPhase<Key>::Enable() {
    EnableBase();
    onyx::SendEvent<0x44174b43u>(callback, target);
}
template struct DirectorPhase<0x9396a0u>;  // SPTG_Press
template struct DirectorPhase<0x93b330u>;  // SPTG_Animate
template struct DirectorPhase<0x953240u>;  // SPTG_AIDirector

// Actions keep their finished event at +0x80.
struct ActionObject {
    virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13(); virtual void S14(); virtual void S15(); virtual void S16(); virtual void S17(); virtual void S18(); virtual void S19();
    virtual void S20(); virtual void S21(); virtual void S22(); virtual void S23(); virtual void S24(); virtual void S25(); virtual void S26();
    virtual bool Slot27();
    virtual void S28(); virtual void S29(); virtual void S30();
    virtual void Slot31();
    virtual void S32(); virtual void S33(); virtual void S34(); virtual void S35();
    virtual bool Slot36();
    virtual void S37(); virtual void S38(); virtual void S39(); virtual void S40(); virtual void S41(); virtual void S42(); virtual void S43(); virtual void S44(); virtual void S45(); virtual void S46(); virtual void S47(); virtual void S48(); virtual void S49();
    virtual void S50(); virtual void S51(); virtual void S52(); virtual void S53(); virtual void S54(); virtual void S55(); virtual void S56(); virtual void S57(); virtual void S58(); virtual void S59();
    virtual void S60(); virtual void S61(); virtual void S62(); virtual void S63(); virtual void S64(); virtual void S65(); virtual void S66(); virtual void S67(); virtual void S68(); virtual void S69();
    virtual void Slot70(bool value);
};
struct ObjectHandle { void* padding; ActionObject* object; };

template<unsigned Key> struct ActorAction {
    char padding_0[0x80];
    EventCallback* callback;    // +0x80
    EventTarget* target;        // +0x88
    char padding_90[8];
    bool active;                // +0x98
    char padding_99[7];
    ObjectHandle* actor;        // +0xa0
    char padding_a8[3];
    bool value_ab;              // +0xab
    char padding_ac[2];
    bool active_ae;             // +0xae
    void StepBase();
    void PlayEmote();
    void Pickup();
    void Animation();
    void Drop();
    void Unspawn();
};
template<unsigned Key> void ActorAction<Key>::PlayEmote() {
    StepBase();
    if (active) onyx::SendEvent<ActionFinished>(callback, target);
}
template<unsigned Key> void ActorAction<Key>::Pickup() {
    StepBase();
    if (active && actor->object->Slot36()) onyx::SendEvent<ActionFinished>(callback, target);
}
template<unsigned Key> void ActorAction<Key>::Animation() {
    StepBase();
    if (active_ae && actor->object->Slot27()) onyx::SendEvent<ActionFinished>(callback, target);
}
template<unsigned Key> void ActorAction<Key>::Drop() {
    StepBase();
    actor->object->Slot31();
    onyx::SendEvent<ActionFinished>(callback, target);
}
template<unsigned Key> void ActorAction<Key>::Unspawn() {
    StepBase();
    actor->object->Slot70(value_ab);
    onyx::SendEvent<ActionFinished>(callback, target);
}
template void ActorAction<0x8e5350u>::PlayEmote();   // ActorPlayEmoteAction
template void ActorAction<0x8e5930u>::Pickup();      // ActorPickupAction
template void ActorAction<0x8ec8f0u>::Animation();   // ActorAnimationAction
template void ActorAction<0x8eb280u>::Drop();        // ActorDropAction
template void ActorAction<0x8e1c90u>::Unspawn();     // ActorUnspawnAction

struct WaitForEventCount {
    char padding_0[0x80];
    EventCallback* callback;    // +0x80
    EventTarget* target;        // +0x88
    char padding_90[8];
    uint16_t state;             // +0x98
    char padding_9a[0x32];
    uint32_t count;             // +0xcc
    uint32_t Required();
    void Update();
};
void WaitForEventCount::Update() {
    uint32_t current = count;
    state = 1;
    if (current >= Required()) onyx::SendEvent<ActionFinished>(callback, target);
}

// Counts up; sends when it reaches the target, or at once when no target is set.
struct CountingAction {
    char padding_0[0x80];
    EventCallback* callback;    // +0x80
    EventTarget* target;        // +0x88
    char padding_90[0x21];
    bool limited;               // +0xb1
    char padding_b2[2];
    uint32_t count;             // +0xb4
    char padding_b8[0x10];
    uint64_t limit;             // +0xc8
    void Advance();
};
void CountingAction::Advance() {
    uint32_t value = ++count;
    if (!limited || limit == value) onyx::SendEvent<ActionFinished>(callback, target);
}

template<unsigned Key, uint32_t Hash, unsigned InnerOffset, unsigned EventOffset> struct InnerSender {
    struct Inner {
        char padding[EventOffset];
        EventCallback* callback;
        EventTarget* target;
    };
    char padding[InnerOffset];
    Inner* inner;
    void Send();
};
template<unsigned Key, uint32_t Hash, unsigned InnerOffset, unsigned EventOffset> void InnerSender<Key, Hash, InnerOffset, EventOffset>::Send() {
    Inner* x = inner;
    if (x) {
        onyx::SendEvent<Hash>(x->callback, x->target);
        inner = nullptr;
    }
}
template struct InnerSender<0x87dda0u, 0x6557fc28u, 0xe0u, 0x90u>;

// A value payload copied out first.
struct ValueHolder { uint32_t value; ~ValueHolder() {} };
struct ValueSend {
    char padding_0[0x50];
    EventCallback* callback;    // +0x50
    EventTarget* target;        // +0x58
    char padding_60[0x20];
    uint32_t value;             // +0x80
    void Send();
};
void ValueSend::Send() {
    ValueHolder payload{value};
    onyx::SendEvent<0x3939ece8u>(callback, target, payload);
}

struct Clock { void* context; float (*delta)(Clock*); };
extern Clock** ActionClock;
struct DelayAction {
    char padding_0[0x80];
    EventCallback* callback;    // +0x80
    EventTarget* target;        // +0x88
    char padding_90[8];
    bool active;                // +0x98
    char padding_99[3];
    float duration;             // +0x9c
    float elapsed;              // +0xa0
    void Update();
};
void DelayAction::Update() {
    if (!active || !ActionClock) return;
    Clock* clock = *ActionClock;
    float delta = clock->delta(clock);
    float limit = duration;
    float value = delta + elapsed;
    elapsed = value;
    if (value >= limit) onyx::SendEvent<ActionFinished>(callback, target);
}

struct TimerCircuit {
    char padding_0[0x98];
    EventCallback* callback;    // +0x98
    EventTarget* target;        // +0xa0
    char padding_a8[8];
    float limit;                // +0xb0
    float current;              // +0xb4
    bool repeat;                // +0xb8
    void Update();
};
void TimerCircuit::Update() {
    float end = limit;
    float now = current;
    if (now < end) {
        float value = Clamp(now + FrameDelta, 0.0f, 3.4028235e38f);
        current = value;
        if (value >= end) {
            if (repeat) current = 0.0f;
            onyx::SendEvent<13611869u>(callback, target);
        }
    }
}

struct RotateToCamAction {
    virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13(); virtual void S14(); virtual void S15(); virtual void S16();
    virtual void Rotate(float amount);    // slot 17
    char padding_8[0x78];
    EventCallback* callback;    // +0x80
    EventTarget* target;        // +0x88
    char padding_90[8];
    bool active;                // +0x98
    char padding_99[0x3b];
    float duration;             // +0xd4
    char padding_d8[0xc];
    float elapsed;              // +0xe4
    void Update();
};
void RotateToCamAction::Update() {
    if (active) {
        float old = elapsed;
        float value = Clamp(old + FrameDelta, 0.0f, duration);
        float step = value - old;
        elapsed = value;
        Rotate(step);
        if (elapsed >= duration) onyx::SendEvent<ActionFinished>(callback, target);
    }
}

struct ShownObject { char padding[0xc]; uint8_t flags; };
struct ShowTarget {
    virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13(); virtual void S14(); virtual void S15();
    virtual ShownObject* Shown();   // slot 16
};
struct ShowHandle { void* padding; ShowTarget* object; };
struct ShowObjectAction {
    char padding_0[0x80];
    EventCallback* callback;    // +0x80
    EventTarget* target;        // +0x88
    char padding_90[8];
    bool active;                // +0x98
    char padding_99[0xf];
    ShowHandle* handle;         // +0xa8
    char padding_b0[8];
    bool waiting;               // +0xb8
    void Update();
};
void ShowObjectAction::Update() {
    if (active && waiting) {
        ShowHandle* h = handle;
        if (h) {
            ShowTarget* object = h->object;
            if (object && (object->Shown()->flags & 4)) onyx::SendEvent<ActionFinished>(callback, target);
        }
    }
}

struct LaserBeams {
    virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13(); virtual void S14(); virtual void S15(); virtual void S16(); virtual void S17(); virtual void S18(); virtual void S19();
    virtual void S20(); virtual void S21();
    virtual void Slot22(int a, int b, int c, float d);
    virtual void S23(); virtual void S24(); virtual void S25(); virtual void S26();
    virtual bool Slot27();
    char padding_8[0x198];
    int32_t state;              // +0x1a0
    char padding_1a4[0x64];
    EventCallback* callback;    // +0x208
    EventTarget* target;        // +0x210
    char padding_218[0x20];
    float elapsed;              // +0x238
    bool running;               // +0x23c
    char padding_23d[3];
    float limit;                // +0x240
    void UpdateBase();
    void Update();
};
void LaserBeams::Update() {
    UpdateBase();
    if (running) {
        if (state == 216 && Slot27()) Slot22(0, 1, 0, 1.0f);
        float value = GameDelta + elapsed;
        float end = limit;
        elapsed = value;
        if (value > end) onyx::SendEvent<1163560383u>(callback, target);
    }
}

// Counts up to a required number, only while active.
struct WaitForEvents {
    char padding_0[0x80];
    EventCallback* callback;    // +0x80
    EventTarget* target;        // +0x88
    char padding_90[8];
    bool active;                // +0x98
    char padding_99[0x2f];
    bool first;                 // +0xc8
    char padding_c9[3];
    uint32_t count;             // +0xcc
    uint32_t Required();
    void Count();
};
void WaitForEvents::Count() {
    uint32_t value;
    if (first) {
        if (!active) return;
        value = ++count;
    } else {
        bool on = active;
        value = ++count;
        if (!on) return;
    }
    if (value >= Required()) onyx::SendEvent<ActionFinished>(callback, target);
}

// What a group holds: each child has a start event and a stop event, and two flags.
struct ChildAction : onyx::Component {
    char padding_8[0x48];
    EventCallback* startCallback;   // +0x50
    EventTarget* startTarget;       // +0x58
    char padding_60[8];
    EventCallback* stopCallback;    // +0x68
    EventTarget* stopTarget;        // +0x70
    char padding_78[0x20];
    bool running;                   // +0x98
    bool stopped;                   // +0x99
};

struct ActionPlayer {
    char padding_0[0x38];
    uint32_t flags;                 // +0x38
    char padding_3c[0x14];
    ComponentHandle* current;       // +0x50
    char padding_58[0x30];
    bool autoStart;                 // +0x88
    void StartCurrent();
    void StopCurrent();
    void Enable();
};
void ActionPlayer::StartCurrent() {
    ChildAction* child = onyx::Lookup<ChildAction, ActionType>(current);
    if (child) onyx::SendEvent<ActionStart>(child->startCallback, child->startTarget);
}
void ActionPlayer::StopCurrent() {
    ChildAction* child = onyx::Lookup<ChildAction, ActionType>(current);
    if (child && !child->stopped) onyx::SendEvent<ActionStop>(child->stopCallback, child->stopTarget);
}
void ActionPlayer::Enable() {
    flags |= 2;
    if (autoStart) {
        ChildAction* child = onyx::Lookup<ChildAction, ActionType>(current);
        if (child) onyx::SendEvent<ActionStart>(child->startCallback, child->startTarget);
    }
}

struct AiActorTarget : onyx::Component {
    virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13(); virtual void S14(); virtual void S15(); virtual void S16(); virtual void S17(); virtual void S18(); virtual void S19();
    virtual void S20(); virtual void S21(); virtual void S22(); virtual void S23(); virtual void S24(); virtual void S25(); virtual void S26(); virtual void S27(); virtual void S28(); virtual void S29();
    virtual void S30(); virtual void S31(); virtual void S32(); virtual void S33(); virtual void S34(); virtual void S35(); virtual void S36(); virtual void S37(); virtual void S38(); virtual void S39();
    virtual void S40(); virtual void S41(); virtual void S42(); virtual void S43(); virtual void S44(); virtual void S45(); virtual void S46(); virtual void S47(); virtual void S48(); virtual void S49();
    virtual void S50(); virtual void S51(); virtual void S52(); virtual void S53(); virtual void S54(); virtual void S55();
    virtual void Slot56(bool value);
};
struct AnimatedAiActorAction {
    char padding_0[0x80];
    EventCallback* callback;        // +0x80
    EventTarget* target;            // +0x88
    char padding_90[8];
    uint16_t state;                 // +0x98
    char padding_9a[6];
    ComponentHandle* actor;         // +0xa0
    bool value;                     // +0xa8
    void Start();
};
void AnimatedAiActorAction::Start() {
    ComponentHandle*& h = actor;
    state = 1;
    AiActorTarget* x = onyx::Get<AiActorTarget, 486377927u>(h);
    x->Slot56(value);
    onyx::SendEvent<ActionFinished>(callback, target);
}

struct ShownState { char padding[0xc]; uint8_t flags; };
struct SpawnTarget : onyx::Component {
    virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13(); virtual void S14(); virtual void S15();
    virtual ShownState* Shown();    // slot 16
};
struct ActorAnimationDrivenSpawnAction {
    char padding_0[0x80];
    EventCallback* callback;        // +0x80
    EventTarget* target;            // +0x88
    char padding_90[8];
    bool active;                    // +0x98
    char padding_99[0x17];
    ComponentHandle* spawned;       // +0xb0
    void StepBase();
    void Update();
};
void ActorAnimationDrivenSpawnAction::Update() {
    StepBase();
    if (active) {
        SpawnTarget* x = onyx::Lookup<SpawnTarget, 1160278366u>(spawned);
        if (x->Shown()->flags & 4) onyx::SendEvent<ActionFinished>(callback, target);
    }
}

struct LevelSectionTarget : onyx::Component {
    char padding_8[0x141];
    bool visible;                   // +0x149
    char padding_14a[0x6f];
    bool visible2;                  // +0x1b9
    bool forced;                    // +0x1ba
    void Refresh();
};
struct LevelSectionAction {
    char padding_0[0x80];
    EventCallback* callback;        // +0x80
    EventTarget* target;            // +0x88
    char padding_90[8];
    uint16_t state;                 // +0x98
    char padding_9a[6];
    ComponentHandle* section;       // +0xa0
    bool value;                     // +0xa8
    void Start();
};
void LevelSectionAction::Start() {
    LevelSectionTarget* x = onyx::Lookup<LevelSectionTarget, 869864808u>(section);
    state = 1;
    bool v = value;
    x->visible = v;
    x->visible2 = v;
    if (!v && !x->forced) x->Refresh();
    onyx::SendEvent<ActionFinished>(callback, target);
}

// Events on a component reached through a weak pointer at +8.
struct WeakOwner {
    void* padding_0;
    EventCallback* lostCallback;     // +0x08
    EventTarget* lostTarget;         // +0x10
    char padding_18[8];
    EventCallback* foundCallback;    // +0x20
    EventTarget* foundTarget;        // +0x28
    char padding_30[8];
    uint8_t flags;                   // +0x38
    char padding_39[0x3f];
    bool valid;                      // +0x78
};
struct WeakHolder {
    void* padding;
    WeakOwner* owner;
    void Found();
    void Lost();
};
void WeakHolder::Found() {
    if (this) {
        WeakOwner* x = owner;
        if (x && x->valid && (x->flags & 1)) onyx::SendEvent<0x44174b43u>(x->foundCallback, x->foundTarget);
    }
}
void WeakHolder::Lost() {
    if (!this) return;
    WeakOwner* x = owner;
    if (!x || (x->valid && (x->flags & 1))) return;
    onyx::SendEvent<0x255c0afeu>(x->lostCallback, x->lostTarget);
}

struct EventHolder : onyx::Component {
    char padding_8[0x18];
    EventCallback* callback;     // +0x20
    EventTarget* target;         // +0x28
    char padding_30[0x30];
    EventCallback* callback60;   // +0x60
    EventTarget* target68;       // +0x68
};
struct HandleSender {
    char padding_0[0x50];
    ComponentHandle* handle;     // +0x50
    char padding_58[0x20];
    ComponentHandle* handle78;   // +0x78
    void Send();
    void SetBase(uint32_t value);
    void Set(const uint32_t* value);
};
void HandleSender::Send() {
    EventHolder* x = onyx::Peek<EventHolder>(handle);
    onyx::SendEvent<0x44174b43u>(x->callback, x->target);
}
void HandleSender::Set(const uint32_t* value) {
    SetBase(*value);
    EventHolder* x = onyx::Peek<EventHolder>(handle78);
    onyx::SendEvent<0x3508797u>(x->callback60, x->target68);
}

extern "C" bool SoundIsPlaying(int64_t id);
struct PlaySoundState {
    char padding_0[0x60];
    EventCallback* callback;     // +0x60
    EventTarget* target;         // +0x68
    char padding_70[0x78];
    int64_t sound;               // +0xe8
};
struct PlaySound {
    void* vtable;
    bool played;                 // +0x8
    void Slot5(PlaySoundState* state);
};
void PlaySound::Slot5(PlaySoundState* state) {
    if (state->sound == -1 || !SoundIsPlaying(state->sound)) onyx::SendEvent<0x6f4bbfc1u>(state->callback, state->target);
    played = true;
}

struct EnemyTarget : onyx::Component {
    virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9(); virtual void S10(); virtual void S11(); virtual void S12();
    virtual void Slot13();
    char padding_8[0x90];
    bool running;                // +0x98
};
struct StartEnemyAction {
    char padding_0[0x80];
    EventCallback* callback;     // +0x80
    EventTarget* target;         // +0x88
    char padding_90[8];
    bool active;                 // +0x98
    char padding_99[0x17];
    ComponentHandle* enemy;      // +0xb0
    void StepBase();
    void Update();
};
void StartEnemyAction::Update() {
    StepBase();
    if (!active) return;
    EnemyTarget* x = onyx::Peek<EnemyTarget>(enemy);
    if (x && x->running) {
        x->Slot13();
        return;
    }
    onyx::SendEvent<ActionFinished>(callback, target);
}

struct CycleTargetState { char padding[8]; float value; };
struct CycleTarget : onyx::Component {
    virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9(); virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13(); virtual void S14(); virtual void S15();
    virtual CycleTargetState* State16();
};
struct CycleAnimationAction {
    char padding_0[0x80];
    EventCallback* callback;     // +0x80
    EventTarget* target;         // +0x88
    char padding_90[8];
    bool active;                 // +0x98
    char padding_99[7];
    ComponentHandle* animation;  // +0xa0
    char padding_a8[8];
    float duration;              // +0xb0
    float end;                   // +0xb4
    float start;                 // +0xb8
    float elapsed;               // +0xbc
    void Update();
};

template<class T> __attribute__((always_inline)) inline const T& Max(const T& a, const T& b) { return a < b ? b : a; }
template<class T> T* SingletonGet(void* slot);

// Flash menu spawners: when active, spawn by name through the singleton, then send.
struct FlashSpawnerHost;
void SpawnNamed(FlashSpawnerHost* host, const uint32_t* name, int a, int b);
struct NameBuffer { void Build(); };
struct FlashMenuAutoSpawner {
    char padding_0[0x20];
    EventCallback* callback;     // +0x20
    EventTarget* target;         // +0x28
    char padding_30[8];
    uint8_t flags;               // +0x38
    char padding_39[0x1f];
    void* host;                  // +0x58
    uint32_t name;               // +0x60
    char padding_64[8];
    uint32_t built;              // +0x6c
    void Update();
    void UpdateBuilt();
};
void FlashMenuAutoSpawner::Update() {
    if (!(flags & 1)) return;
    SpawnNamed(SingletonGet<FlashSpawnerHost>(&host), &name, 32, 0);
    onyx::SendEvent<0x44174b43u>(callback, target);
}

struct PublisherScreen {
    char padding_0[0x2b8];
    EventCallback* callback;     // +0x2b8
    EventTarget* target;         // +0x2c0
    char padding_2c8[0x20];
    float remaining;             // +0x2e8
    char padding_2ec[4];
    bool counting;               // +0x2f0
    void StepBase();
    void Update();
};
void PublisherScreen::Update() {
    StepBase();
    if (counting) {
        float delta = FrameDelta;
        float value = Max(0.0f, remaining - delta);
        remaining = value;
        if (__builtin_fabsf(value) <= 0.000001f) {
            onyx::SendEvent<0x5464a130u>(callback, target);
            counting = false;
        }
    }
}

struct LaserBeamsEnable {
    virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13(); virtual void S14(); virtual void S15(); virtual void S16(); virtual void S17(); virtual void S18(); virtual void S19();
    virtual void S20(); virtual void S21();
    virtual void Slot22(int a, int b, int c, float d);
    virtual void S23(); virtual void S24(); virtual void S25(); virtual void S26(); virtual void S27(); virtual void S28(); virtual void S29();
    virtual void S30(); virtual void S31(); virtual void S32(); virtual void S33(); virtual void S34(); virtual void S35(); virtual void S36(); virtual void S37(); virtual void S38(); virtual void S39();
    virtual void S40(); virtual void S41(); virtual void S42(); virtual void S43(); virtual void S44(); virtual void S45(); virtual void S46(); virtual void S47(); virtual void S48(); virtual void S49();
    virtual void S50(); virtual void S51(); virtual void S52(); virtual void S53(); virtual void S54(); virtual void S55(); virtual void S56();
    virtual float MaxHealth();
    char padding_8[0x90];
    uint32_t value98;            // +0x98
    uint32_t value9c;            // +0x9c
    char padding_a0[0xc0];
    float value160;              // +0x160
    char padding_164[0x8c];
    EventCallback* callback;     // +0x1f0
    EventTarget* target;         // +0x1f8
    char padding_200[0x44];
    bool hide;                   // +0x244
    void EnableBase();
    void Enable();
};
void LaserBeamsEnable::Enable() {
    EnableBase();
    if (!hide) Slot22(0, 1, 0, 1.0f);
    else onyx::SendEvent<0x339bb246u>(callback, target);
    value9c = value98;
    value160 = MaxHealth();
}

// Waits until every listed action has stopped.
struct WaitChild : onyx::Component {
    char padding_8[0x91];
    bool stopped;                // +0x99
};
struct WaitForActionEnd {
    char padding_0[0x80];
    EventCallback* callback;     // +0x80
    EventTarget* target;         // +0x88
    char padding_90[8];
    bool active;                 // +0x98
    char padding_99[0x27];
    uint64_t count;              // +0xc0
    ComponentHandle** actions;   // +0xc8
    void StepBase();
    void Update();
};

// Camera actions go through the level's camera holder.
struct TrackingCamera : onyx::Component {
    char padding_8[0x70];
    uint32_t mode;               // +0x78
};
struct CameraDirector : onyx::Component {
    char padding_8[0x78];
    ComponentHandle* hold;       // +0x80
    char padding_88[0x20];
    uint8_t held;                // +0x80 of the hold's target
};
struct CameraRig : onyx::Component {
    char padding_8[0x68];
    ComponentHandle* shake;      // +0x70
    char padding_78[8];
    ComponentHandle* hold;       // +0x80
    char padding_88[0];
    ComponentHandle* tracking;   // +0x88
    char padding_90[0x2c];
    uint32_t mode;               // +0xbc
};
struct CameraHost { char padding[0x50]; ComponentHandle* rig; };
struct ShakeState : onyx::Component { void Stop(); };
struct HoldState : onyx::Component { char padding_8[0x78]; bool held; };

struct CameraAction {
    char padding_0[0x80];
    EventCallback* callback;     // +0x80
    EventTarget* target;         // +0x88
    char padding_90[8];
    union { uint16_t state; bool active; };   // +0x98
    char padding_9a[6];
    void* host;                  // +0xa0
    uint32_t mode;               // +0xa8
    void SetTracking();
    void WaitIdle();
    void StopShake();
};
void CameraAction::SetTracking() {
    state = 1;
    ComponentHandle*& rigHandle = SingletonGet<CameraHost>(&host)->rig;
    CameraRig* rig = onyx::Lookup<CameraRig, 1743956557u>(rigHandle);
    uint32_t value = mode;
    rig->mode = 0;
    TrackingCamera* tracking = onyx::Get<TrackingCamera, 900809411u>(rig->tracking);
    tracking->mode = value;
    onyx::SendEvent<ActionFinished>(callback, target);
}
void CameraAction::WaitIdle() {
    if (active) {
        ComponentHandle*& rigHandle = SingletonGet<CameraHost>(&host)->rig;
        CameraRig* rig = onyx::Lookup<CameraRig, 1743956557u>(rigHandle);
        if (rig->mode == 1 && onyx::Get<HoldState, 670407072u>(rig->hold)->held) return;
        onyx::SendEvent<ActionFinished>(callback, target);
    }
}
void CameraAction::StopShake() {
    ComponentHandle*& rigHandle = SingletonGet<CameraHost>(&host)->rig;
    CameraRig* rig = onyx::Lookup<CameraRig, 1743956557u>(rigHandle);
    state = 1;
    onyx::Lookup<ShakeState, 1037755499u>(rig->shake)->Stop();
    onyx::SendEvent<ActionFinished>(callback, target);
}

struct UseCountTarget : onyx::Component { char padding_8[0x78]; int32_t uses; };
struct UseCountSwitch {
    char padding_0[0x50];
    ComponentHandle* current;    // +0x50
    EventCallback* callback;     // +0x58
    EventTarget* target;         // +0x60
    void Switch(ComponentHandle* previous);
};
void UseCountSwitch::Switch(ComponentHandle* previous) {
    UseCountTarget* old = static_cast<UseCountTarget*>(previous->object);
    if (old) --old->uses;
    ++onyx::Get<UseCountTarget, 1160278366u>(current)->uses;
    onyx::SendEvent<0x7cd0fdf8u>(callback, target);
}

template<class T> T* SingletonGet(void* slot);

// Each killable reports a kind; a table maps kinds to the mask's bits.
struct Killable {
    virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13(); virtual void S14(); virtual void S15(); virtual void S16(); virtual void S17(); virtual void S18(); virtual void S19();
    virtual void S20(); virtual void S21(); virtual void S22(); virtual void S23(); virtual void S24(); virtual void S25(); virtual void S26(); virtual void S27(); virtual void S28(); virtual void S29();
    virtual void S30(); virtual void S31(); virtual void S32(); virtual void S33(); virtual void S34(); virtual void S35(); virtual void S36(); virtual void S37(); virtual void S38(); virtual void S39();
    virtual void S40(); virtual void S41(); virtual void S42(); virtual void S43(); virtual void S44(); virtual void S45(); virtual void S46(); virtual void S47(); virtual void S48(); virtual void S49();
    virtual void S50(); virtual void S51(); virtual void S52(); virtual void S53(); virtual void S54(); virtual void S55(); virtual void S56(); virtual void S57(); virtual void S58(); virtual void S59();
    virtual void S60(); virtual void S61(); virtual void S62(); virtual void S63(); virtual void S64(); virtual void S65(); virtual void S66(); virtual void S67(); virtual void S68(); virtual void S69();
    virtual void S70(); virtual void S71(); virtual void S72(); virtual void S73(); virtual void S74(); virtual void S75(); virtual void S76(); virtual void S77(); virtual void S78(); virtual void S79();
    virtual void S80(); virtual void S81(); virtual void S82(); virtual void S83(); virtual void S84(); virtual void S85(); virtual void S86(); virtual void S87(); virtual void S88(); virtual void S89();
    virtual void S90(); virtual void S91(); virtual void S92(); virtual void S93();
    virtual void Kill();     // slot 94
    virtual void S95(); virtual void S96(); virtual void S97(); virtual void S98(); virtual void S99();
    virtual void S100(); virtual void S101(); virtual void S102(); virtual void S103(); virtual void S104(); virtual void S105(); virtual void S106(); virtual void S107(); virtual void S108(); virtual void S109();
    virtual void S110(); virtual void S111(); virtual void S112(); virtual void S113(); virtual void S114(); virtual void S115(); virtual void S116(); virtual void S117(); virtual void S118(); virtual void S119();
    virtual void S120(); virtual void S121(); virtual void S122(); virtual void S123(); virtual void S124(); virtual void S125(); virtual void S126(); virtual void S127(); virtual void S128(); virtual void S129();
    virtual void S130(); virtual void S131(); virtual void S132(); virtual void S133(); virtual void S134(); virtual void S135(); virtual void S136(); virtual void S137(); virtual void S138(); virtual void S139();
    virtual void S140(); virtual void S141(); virtual void S142(); virtual void S143(); virtual void S144(); virtual void S145(); virtual void S146(); virtual void S147(); virtual void S148(); virtual void S149();
    virtual void S150(); virtual void S151(); virtual void S152(); virtual void S153(); virtual void S154(); virtual void S155(); virtual void S156(); virtual void S157(); virtual void S158(); virtual void S159();
    virtual int Kind();      // slot 160
};
struct KillableList : onyx::Component {
    char padding_8[0x78];
    uint64_t count;       // +0x80
    char padding_88[8];
    Killable** items;     // +0x90
};
struct KillHolder { char padding[0x98]; ComponentHandle* killables; ComponentHandle* players; };   // +0x98, +0xa0
struct KillAllEnemiesAction {
    char padding_0[0x80];
    EventCallback* callback;     // +0x80
    EventTarget* target;         // +0x88
    char padding_90[8];
    uint16_t state;              // +0x98
    char padding_9a[6];
    void* level;                 // +0xa0
    uint32_t mask;               // +0xa8
    void Start();
};
void KillAllEnemiesAction::Start() {
    state = 1;
    KillableList* list = onyx::Get<KillableList, 1599921523u>(SingletonGet<KillHolder>(&level)->killables);
    if (list->count) {
        Killable** it = list->items;
        do {
            Killable* k = *it;
            uint32_t bit;
            switch (k->Kind()) {
                case 6: bit = 8; break;
                case 7: bit = 2; break;
                case 8: bit = 4; break;
                default: bit = 1; break;
            }
            if (mask & bit) k->Kill();
            ++it;
        } while (it != list->items + list->count);
    }
    onyx::SendEvent<ActionFinished>(callback, target);
}

struct TypedOwner {
    virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9(); virtual void S10(); virtual void S11();
    virtual bool IsA(uint32_t type);
    char padding_8[0];
    EventCallback* lostCallback;    // +0x08
    EventTarget* lostTarget;        // +0x10
    char padding_18[8];
    EventCallback* foundCallback;   // +0x20
    EventTarget* foundTarget;       // +0x28
};
struct ActorView : onyx::Component {
    char padding_8[0x48];
    ComponentHandle* owner;         // +0x50
};
struct TypedOwnerSender {
    char padding_0[0x78];
    ComponentHandle* actor;         // +0x78
    TypedOwner* Owner();
    void Found();
    void Lost();
};
__attribute__((always_inline)) inline TypedOwner* TypedOwnerSender::Owner() {
    ActorView* a = onyx::Get<ActorView, 1687344669u>(actor);
    ComponentHandle* h = a->owner;
    TypedOwner* o = h ? reinterpret_cast<TypedOwner*>(h->object) : nullptr;
    if (o && !o->IsA(557122854u)) o = nullptr;
    return o;
}
void TypedOwnerSender::Found() {
    TypedOwner* o = Owner();
    onyx::SendEvent<0x44174b43u>(o->foundCallback, o->foundTarget);
}
void TypedOwnerSender::Lost() {
    TypedOwner* o = Owner();
    onyx::SendEvent<0x255c0afeu>(o->lostCallback, o->lostTarget);
}

struct DeepSenderTarget : onyx::Component {
    char padding_8[0xa0];
    EventCallback* callback;        // +0xa8
    EventTarget* target;            // +0xb0
};
struct DeepSender {
    char padding_0[0x50];
    ComponentHandle* handle;        // +0x50
    void Send();
};
void DeepSender::Send() {
    DeepSenderTarget* x = onyx::Lookup<DeepSenderTarget, 432006661u>(handle);
    onyx::SendEvent<0x47038a81u>(x->callback, x->target);
}

// A step list: the current step's object, or the finished event past the end.
struct StepTarget : onyx::Component {};
struct StepRunner { void Run(StepTarget* step, int flags); };
struct ActionStep {
    char padding_0[0x80];
    EventCallback* callback;        // +0x80
    EventTarget* target;            // +0x88
    char padding_90[0x20];
    uint64_t count;                 // +0xb0
    ComponentHandle** steps;        // +0xb8
    char padding_c0[8];
    void* runner;                   // +0xc8
    char padding_d0[0x20];
    uint32_t index;                 // +0xf0
    StepRunner* Runner(void* slot);
    void Next();
};
const uint32_t StepType = 309210931u;

// A graphics component telling its own listener that it changed. The payload names the component
// twice, and the listener is at +0x40 of every class that does this.
struct ChangedEvent { void* source; void* component; ~ChangedEvent() {} };
const uint32_t GraphicsChanged = 0x6c62f499u;

template<unsigned Key> struct ChangedNotifier {
    char padding_0[0x40];
    ComponentHandle* listener;      // +0x40
    __attribute__((always_inline)) void Notify() {
        ComponentHandle* to = listener;
        ChangedEvent payload{this, this};
        Event_Notify(Accessor_Tracking, to, GraphicsChanged, reinterpret_cast<onyx::EventPayload*>(&payload));
    }
    void Changed();
    void Before();
    void After();
    void ChangedBefore();
    void ChangedAfter();
};
template<unsigned Key> void ChangedNotifier<Key>::Changed() { Notify(); }
template<unsigned Key> void ChangedNotifier<Key>::ChangedBefore() { Before(); Notify(); }
template<unsigned Key> void ChangedNotifier<Key>::ChangedAfter() { Notify(); After(); }
template void ChangedNotifier<0x70e850u>::Changed();
template void ChangedNotifier<0x719f40u>::Changed();
template void ChangedNotifier<0x71af10u>::Changed();
template void ChangedNotifier<0x7393d0u>::Changed();
template void ChangedNotifier<0xafafb0u>::Changed();
template void ChangedNotifier<0xb16c10u>::Changed();
template void ChangedNotifier<0xb17f50u>::Changed();
template void ChangedNotifier<0xb1fc30u>::Changed();
template void ChangedNotifier<0xb41fa0u>::Changed();
template void ChangedNotifier<0xb47320u>::Changed();
template void ChangedNotifier<0xb4b7a0u>::Changed();
template void ChangedNotifier<0xb51bc0u>::Changed();
template void ChangedNotifier<0xb546e0u>::Changed();
template void ChangedNotifier<0xb70810u>::Changed();
template void ChangedNotifier<0xb127b0u>::ChangedBefore();
template void ChangedNotifier<0xb19ab0u>::ChangedBefore();
template void ChangedNotifier<0xb70870u>::ChangedAfter();

// Clears a current index first.
struct ChangedWithIndex {
    char padding_0[0x40];
    ComponentHandle* listener;      // +0x40
    char padding_48[0x30];
    int32_t index;                  // +0x78
    void Reset();
};
void ChangedWithIndex::Reset() {
    index = -1;
    ComponentHandle* to = listener;
    ChangedEvent payload{this, this};
    Event_Notify(Accessor_Tracking, to, GraphicsChanged, reinterpret_cast<onyx::EventPayload*>(&payload));
}

template<class T> T* SingletonGet(void* slot);

// Two events in turn.
template<unsigned Key, uint32_t Hash1, unsigned Off1, uint32_t Hash2, unsigned Off2> struct TwoEvents {
    struct Pair { EventCallback* callback; EventTarget* target; };
    __attribute__((always_inline)) Pair& At(unsigned off) { return *reinterpret_cast<Pair*>(reinterpret_cast<char*>(this) + off); }
    void Send();
};
template<unsigned Key, uint32_t Hash1, unsigned Off1, uint32_t Hash2, unsigned Off2> void TwoEvents<Key, Hash1, Off1, Hash2, Off2>::Send() {
    Pair& a = At(Off1);
    onyx::EventPayload first;
    onyx::SendEvent<Hash1>(a.callback, a.target, first);
    Pair& b = At(Off2);
    onyx::EventPayload second;
    onyx::SendEvent<Hash2>(b.callback, b.target, second);
}
template struct TwoEvents<0x7fca50u, 0x48acec0fu, 0x1f8u, 0x48acec0cu, 0x1b0u>;

struct SpawnCheck;
bool AllSpawnedDead(SpawnCheck* check);
struct WaitAllSpawnedDead {
    char padding_0[0x80];
    EventCallback* callback;     // +0x80
    EventTarget* target;         // +0x88
    char padding_90[0x10];
    ComponentHandle* spawner;    // +0xa0
    void Update();
};
struct SpawnerCheck : onyx::Component {};
void WaitAllSpawnedDead::Update() {
    SpawnerCheck* x = onyx::Lookup<SpawnerCheck, 311400331u>(spawner);
    if (AllSpawnedDead(reinterpret_cast<SpawnCheck*>(x))) onyx::SendEvent<ActionFinished>(callback, target);
}

struct GateHolder {
    char padding_0[0xb0];
    EventCallback* callback;     // +0xb0
    EventTarget* target;         // +0xb8
};
struct ValueHolder32 { uint32_t value; ~ValueHolder32() {} };
struct SwitchLevelGateAction {
    char padding_0[0x68];
    EventCallback* stopCallback; // +0x68
    EventTarget* stopTarget;     // +0x70
    char padding_78[0x28];
    void* gate;                  // +0xa0
    uint32_t value;              // +0xa8
    void Start();
};
void SwitchLevelGateAction::Start() {
    GateHolder* x = SingletonGet<GateHolder>(&gate);
    ValueHolder32 payload{value};
    onyx::SendEvent<0x75e74a39u>(x->callback, x->target, payload);
    onyx::EventPayload stop;
    onyx::SendEvent<ActionStop>(stopCallback, stopTarget, stop);
}

// A collision trigger reports where it was hit, then that it fired.
struct HitPosition { float x, y, z; };
struct CollisionTrigger {
    char padding_0[0x20];
    EventCallback* firedCallback;   // +0x20
    EventTarget* firedTarget;       // +0x28
    char padding_30[0x40];
    bool pending;                   // +0x70
    char padding_71[7];
    HitPosition* position;          // +0x78 is the address, not read here
    char padding_80[0x30];
    EventCallback* hitCallback;     // +0xb0
    EventTarget* hitTarget;         // +0xb8
    void Update();
};
struct PointerPayload { void* value; ~PointerPayload() {} };
void CollisionTrigger::Update() {
    if (pending) {
        PointerPayload hit{&position};
        onyx::SendEvent<0x56e32782u>(hitCallback, hitTarget, hit);
        onyx::EventPayload fired;
        onyx::SendEvent<0x44174b43u>(firedCallback, firedTarget, fired);
    }
    pending = false;
}

// The controller-disconnected screen, shown once.
uint32_t HashName(const char* name);
// The movie host (the menu director): +0x80 its catalog of menus, +0xa0 the movie showing.
struct MovieHost {
    char padding_0[0x80];
    ComponentHandle* menus;         // +0x80, an Onyx::Catalog<FlashMenu> (type 0x323ef9de)
    char padding_88[0x18];
    uint32_t current;               // +0xa0
};
struct MovieName { uint32_t hash; };
// The menus in that catalog, as far as the visibility actions look at them: +0x228 is a menu's movie.
struct HostedMenu {
    char padding_0[0x228];
    MovieName movie;                // +0x228
    char padding_22c[0x44];
    bool loaded;                    // +0x270
};
struct MenuCatalog : onyx::Component {
    char padding_8[0x78];
    uint64_t count;                 // +0x80
    char padding_88[0x8];
    HostedMenu** menus;             // +0x90
};
// 0x7755c0 only reads the name, and in this LTO-built game a call after it can be a tail call (the popup box's Hide).
void ShowMovie(MovieHost* host, __attribute__((noescape)) MovieName* name);
void CommitMovie(MovieHost* host);
__attribute__((always_inline)) inline void ShowControllerMessage(MovieHost* movie) {
    MovieName name;
    name.hash = HashName("ControllerDisconnectionMessageMovie");
    ShowMovie(movie, &name);
    CommitMovie(movie);
}
struct ControllerNotice {
    char padding_0[0x170];
    void* host;                     // +0x170
    char padding_178[0x158];
    EventCallback* callback;        // +0x2d0
    EventTarget* target;            // +0x2d8
    char padding_2e0[0xc];
    bool shown;                     // +0x2ec
    void Show();
};
void ControllerNotice::Show() {
    if (!shown) {
        shown = true;
        MovieHost* movie = SingletonGet<MovieHost>(&host);
        MovieName name;
        name.hash = HashName("ControllerDisconnectionMessageMovie");
        ShowMovie(movie, &name);
        CommitMovie(movie);
        onyx::EventPayload event;
        onyx::SendEvent<0x40e27f71u>(callback, target, event);
    }
}

// The enable and disable events every component has: +0x08 and +0x20.
struct ChildEvents : onyx::Component {
    EventCallback* lostCallback;    // +0x08
    EventTarget* lostTarget;        // +0x10
    char padding_18[8];
    EventCallback* foundCallback;   // +0x20
    EventTarget* foundTarget;       // +0x28
};
const uint32_t ChildEnabled = 0x44174b43u;
const uint32_t ChildDisabled = 0x255c0afeu;

// Onyx::DebugComponent turns its children on and off with itself.
struct DebugComponent {
    char padding_0[0x60];
    uint64_t count;                 // +0x60
    ComponentHandle** children;     // +0x68
    void Disable();
    void Enable();
};
void DebugComponent::Disable() {
    uint32_t n = static_cast<uint32_t>(count);
    if (n) {
        uint64_t i = 0;
        do {
            ChildEvents* x = onyx::Peek<ChildEvents>(children[i]);
            if (x) onyx::SendEvent<ChildDisabled>(x->lostCallback, x->lostTarget);
            ++i;
        } while (i < n);
    }
}
void DebugComponent::Enable() {
    uint32_t n = static_cast<uint32_t>(count);
    if (n) {
        uint64_t i = 0;
        do {
            ChildEvents* x = onyx::Peek<ChildEvents>(children[i]);
            if (x) onyx::SendEvent<ChildEnabled>(x->foundCallback, x->foundTarget);
            ++i;
        } while (i < n);
    }
}

struct Predicate { virtual void S0(); virtual void S1(); virtual bool Test(); };
struct PredicateTrigger {
    char padding_0[0x20];
    EventCallback* enabledCallback; // +0x20
    EventTarget* enabledTarget;     // +0x28
    char padding_30[0x20];
    EventCallback* callback;        // +0x50
    EventTarget* target;            // +0x58
    char padding_60[8];
    Predicate* predicate;           // +0x68
    void Update();
};
void PredicateTrigger::Update() {
    Predicate* p = predicate;
    if (!p || !p->Test()) return;
    onyx::EventPayload fired;
    onyx::SendEvent<0x7e7bcf3eu>(callback, target, fired);
    onyx::EventPayload enabled;
    onyx::SendEvent<ChildEnabled>(enabledCallback, enabledTarget, enabled);
}

struct TimeElapsedTrigger {
    char padding_0[0x20];
    EventCallback* enabledCallback; // +0x20
    EventTarget* enabledTarget;     // +0x28
    char padding_30[0x20];
    EventCallback* callback;        // +0x50
    EventTarget* target;            // +0x58
    char padding_60[0x38];
    bool repeat;                    // +0x98
    bool active;                    // +0x99
    char padding_9a[0xe];
    float remaining;                // +0xa8
    float period;                   // +0xac
    bool counting;                  // +0xb0
    void Update();
};
void TimeElapsedTrigger::Update() {
    if (active && counting) {
        float delta = FrameDelta;
        float value = Max(0.0f, remaining - delta);
        remaining = value;
        if (__builtin_fabsf(value) <= 0.000001f) {
            if (!repeat) {
                active = false;
                onyx::SendEvent<ChildEnabled>(enabledCallback, enabledTarget);
            }
            onyx::SendEvent<0x646aedccu>(callback, target);
            remaining = period;
            counting = true;
        }
    }
}

// The step every actor action starts its update with: finish when the actor is in its idle state.
struct ActorActionBase {
    char padding_0[0x80];
    EventCallback* callback;    // +0x80
    EventTarget* target;        // +0x88
    char padding_90[8];
    bool active;                // +0x98
    uint8_t stopped;            // +0x99
    char padding_9a[6];
    ComponentHandle* actor;     // +0xa0
    void Update();
    // The base action's start and stop steps (Onyx::ActionComponent's slots 14 and 15 inline). They take the event, so
    // a subclass's slot 15 that ends in ActorActionComponent's still passes its event on. The names are ours.
    void Begin(void*) {
        active = true;
        stopped = 0;
    }
    void End(void*) {
        active = false;
        stopped = 1;
    }
};
// SPTG::ActorActionComponent's own slots 14 and 15 (the actions above call slot 14 as their base start).
struct ActorActionComponent : ActorActionBase {
    bool enterOnStart;          // +0xa8: a player goes to state 241 as the action starts
    bool leaveOnStop;           // +0xa9: and back to state 96 as it stops
    void Start(void* event);    // slot 14 (0x8e1690)
    void Stop(void* event);     // slot 15 (0x8e1580)
};
void ActorActionBase::Update() {
    if (active) {
        ControllablePlayer* c = onyx::Peek<ControllablePlayer>(actor);
        if (c && c->IsA(0x2f2bf4aau)) {
            auto idle = c->State233Ptr();
            if (c->states.current == idle) onyx::SendEvent<ActionFinished>(callback, target);
        }
    }
}
// Slot 14: started, a player that is neither idle (233) nor in 241 already goes to state 241 when +0xa8 says so.
void ActorActionComponent::Start(void* event) {
    Begin(event);
    ControllablePlayer* c = onyx::Peek<ControllablePlayer>(actor);
    if (c && c->IsA(0x2f2bf4aau) && enterOnStart) {
        if (!c->states.IsIn(c->State233Ptr()) && !c->states.IsIn(c->State241Ptr())) c->states.Transition(c->State241Ptr());
    }
}
// Slot 15: stopped, a player in state 241 (and not idle) goes to state 96 when +0xa9 says so.
void ActorActionComponent::Stop(void* event) {
    End(event);
    ControllablePlayer* c = onyx::Peek<ControllablePlayer>(actor);
    if (c && c->IsA(0x2f2bf4aau) && leaveOnStop) {
        if (!c->states.IsIn(c->State233Ptr()) && c->states.IsIn(c->State241Ptr())) c->states.Transition(c->State96Ptr());
    }
}

extern uint8_t AllLevelsUnlocked;
struct SaveSettings { char padding[0xe0]; bool unlockAll; };
extern SaveSettings* CurrentSave;
void PrepareMovies(MovieHost* host);   // 0x7731c0; name provisional

// SetFlashMenuVisibilityAction shows, hides or toggles a Flash menu's movie. SetPopupBoxVisibilityAction and
// SetMainPlayerFlashMenuVisibilityAction derive from it (RTTI, and they share its slots 14, 17 and 19).
struct SetFlashMenuVisibilityAction {
    virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12();
    virtual void Update();           // slot 13 (0x911aa0)
    virtual void Start(void* arg);   // slot 14 (0x9117c0): the main player's version passes the argument on
    virtual void S15(); virtual void S16();
    virtual bool IsVisible();        // slot 17 (0x911950)
    virtual void Show();             // slot 18
    virtual void Hide();             // slot 19 (0x911a60)
    char padding_8[0x78];
    EventCallback* callback;    // +0x80
    EventTarget* target;        // +0x88
    char padding_90[8];
    bool active;                // +0x98
    uint8_t flag99;             // +0x99: cleared on start
    char padding_9a[0x6];
    void* host;                 // +0xa0: the movie host
    MovieName movie;            // +0xa8: the menu's movie
    int32_t mode;               // +0xac
    bool waits;                 // +0xb0
    char padding_b1[0x7];
    void* level;                // +0xb8: the singleton holding the player catalog
    uint32_t player;            // +0xc0: the main player's character, for the main player's version
    // The start step actions share (most set state 1 first). Slot 14's argument reaches it: the main player's version
    // still hands the argument on to this slot 14, so it had a use here before inlining. The name is ours.
    void Begin(void*) {
        active = true;
        flag99 = 0;
    }
};
void SetFlashMenuVisibilityAction::Start(void* arg) {
    Begin(arg);
    bool visible = IsVisible();
    switch (mode) {
        case 0: if (!visible) Show(); break;
        case 1: if (visible) Hide(); break;
        case 2: if (visible) Hide(); else Show(); break;
    }
    if (!waits) onyx::SendEvent<ActionFinished>(callback, target);
}
// The first menu in [first, last) playing the movie, or last. The original's search needs a find of this shape: with
// the loop written in place, the empty catalog's end test folds away. The name is ours.
inline HostedMenu** FindMenu(HostedMenu** first, HostedMenu** last, uint32_t movie) {
    for (; first != last; ++first)
        if ((*first)->movie.hash == movie) return first;
    return last;
}
// Slot 17: whether the movie showing is the menu's, and a menu in the host's catalog plays it.
bool SetFlashMenuVisibilityAction::IsVisible() {
    MovieHost* director = SingletonGet<MovieHost>(&host);
    MenuCatalog* catalog = onyx::Get<MenuCatalog, onyx_types::type_323ef9de>(director->menus);
    HostedMenu** end = catalog->menus + catalog->count;
    HostedMenu** it = FindMenu(catalog->menus, end, director->current);
    HostedMenu* menu = it != end ? *it : nullptr;
    return menu && movie.hash == menu->movie.hash;
}
// Slot 13 (0x911aa0): while waiting for its movie, finishes once the menu showing it has loaded and puts the controller
// message's steps through; with the save's flag at +0xe0 set and the controller message showing, finishes for each
// loaded menu playing its movie, closing the message and that menu's movie.
// Not yet matched: the original takes &candidate->movie before hashing the message's name and keeps it in the register
// the candidate had; here it's worked out after the first ShowMovie, and the loop's registers differ from there on.
// The payloads are locals of the method: that gives the original's stack slots.
void SetFlashMenuVisibilityAction::Update() {
    if (!waits || !active) return;
    MovieHost* director = SingletonGet<MovieHost>(&host);
    MenuCatalog* catalog = onyx::Get<MenuCatalog, onyx_types::type_323ef9de>(director->menus);
    HostedMenu** end = catalog->menus + catalog->count;
    HostedMenu** it = FindMenu(catalog->menus, end, director->current);
    HostedMenu* menu = it != end ? *it : nullptr;
    if (menu && movie.hash == menu->movie.hash && menu->loaded) {
        onyx::EventPayload finished;
        onyx::SendEvent<ActionFinished>(callback, target, finished);
        ShowControllerMessage(director);
    }
    bool unlocked = CurrentSave && CurrentSave->unlockAll;
    if (!menu || !unlocked) return;
    if (HashName("ControllerDisconnectionMessageMovie") != menu->movie.hash) return;
    MenuCatalog* all = onyx::Get<MenuCatalog, onyx_types::type_323ef9de>(director->menus);
    for (HostedMenu** other = all->menus; other != all->menus + all->count; ++other) {
        HostedMenu* candidate = *other;
        if (movie.hash == candidate->movie.hash && candidate->loaded) {
            onyx::EventPayload finished;
            onyx::SendEvent<ActionFinished>(callback, target, finished);
            MovieName name;
            name.hash = HashName("ControllerDisconnectionMessageMovie");
            ShowMovie(director, &name);
            ShowMovie(director, &candidate->movie);
        }
    }
}
// Slot 18 (0x912330): with the save's flag at +0xe0 set, the host runs 0x7731c0 first; then the movie is shown.
void SetFlashMenuVisibilityAction::Show() {
    if (CurrentSave && CurrentSave->unlockAll) PrepareMovies(SingletonGet<MovieHost>(&host));
    SpawnNamed(SingletonGet<FlashSpawnerHost>(&host), &movie.hash, 32, 0);
}
// Slot 19: the controller message's steps on the host.
void SetFlashMenuVisibilityAction::Hide() {
    ShowControllerMessage(SingletonGet<MovieHost>(&host));
}

struct SetPopupBoxVisibilityAction : SetFlashMenuVisibilityAction {
    void Show() override;   // slot 18 (0x911a30)
};
void SetPopupBoxVisibilityAction::Show() {
    SpawnNamed(SingletonGet<FlashSpawnerHost>(&host), &movie.hash, 0, 0);
}

// The main player's menu: its movie is the one for the main player's character in a list (+0xe0).
struct SetMainPlayerFlashMenuVisibilityAction : SetFlashMenuVisibilityAction {
    void Start(void* arg) override;   // slot 14 (0x9127c0)
    bool IsVisible() override;        // slot 17 (0x9128e0)
    void Show() override;             // slot 18 (0x9129c0)
    char padding_c4[0x1c];
    uint32_t* movies;                 // +0xe0
};
static_assert(__builtin_offsetof(SetMainPlayerFlashMenuVisibilityAction, movies) == 0xe0, "movies");
// Slot 14: the main player is the one with the lowest player index (below 4); its character picks the movie.
void SetMainPlayerFlashMenuVisibilityAction::Start(void* arg) {
    PlayerCatalog* catalog = onyx::Get<PlayerCatalog, onyx_types::type_0bf4a9b7>(SingletonGet<KillHolder>(&level)->players);
    uint32_t lowest = 4;
    for (ControllablePlayer** it = catalog->players; it != catalog->players + catalog->count; ++it) {
        ControllablePlayer* candidate = *it;
        if (candidate->playerIndex < lowest) {
            player = candidate->character1460;
            lowest = candidate->playerIndex;
        }
    }
    SetFlashMenuVisibilityAction::Start(arg);
}
bool SetMainPlayerFlashMenuVisibilityAction::IsVisible() {
    MovieHost* director = SingletonGet<MovieHost>(&host);
    MenuCatalog* catalog = onyx::Get<MenuCatalog, onyx_types::type_323ef9de>(director->menus);
    HostedMenu** end = catalog->menus + catalog->count;
    HostedMenu** it = FindMenu(catalog->menus, end, director->current);
    HostedMenu* menu = it != end ? *it : nullptr;
    if (!menu) return false;
    uint32_t index = player;
    return movies[index] == menu->movie.hash;
}
void SetMainPlayerFlashMenuVisibilityAction::Show() {
    FlashSpawnerHost* director = SingletonGet<FlashSpawnerHost>(&host);
    uint32_t index = player;   // read before the list, as the original does
    SpawnNamed(director, &movies[index], 32, 0);
}

struct SaveProgress { char padding[0xc8]; uint32_t unlocked; };
struct CheckLevelUnlokcedAction {
    char padding_0[0xa0];
    void* progress;                 // +0xa0
    EventCallback* lockedCallback;  // +0xa8
    EventTarget* lockedTarget;      // +0xb0
    char padding_b8[8];
    EventCallback* openCallback;    // +0xc0
    EventTarget* openTarget;        // +0xc8
    char padding_d0[8];
    int32_t level;                  // +0xd8
    void Start();
};
void CheckLevelUnlokcedAction::Start() {
    SaveProgress* save = SingletonGet<SaveProgress>(&progress);
    uint32_t mask;
    if ((AllLevelsUnlocked & 1) || (CurrentSave && CurrentSave->unlockAll)) mask = 15359;
    else mask = save->unlocked;
    if (!((1u << level) & mask)) onyx::SendEvent<0x3fa2d1e3u>(openCallback, openTarget);
    else onyx::SendEvent<0x21e3dbfau>(lockedCallback, lockedTarget);
}

// A projectile hitting something: ignore its own team, and what it has already hit.
struct HitInfo { char padding_0[0x44]; int32_t team; char padding_48[0x14]; int32_t power; };
struct HitSource {
    virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13(); virtual void S14(); virtual void S15(); virtual void S16(); virtual void S17(); virtual void S18(); virtual void S19();
    virtual void S20(); virtual void S21(); virtual void S22(); virtual void S23(); virtual void S24(); virtual void S25(); virtual void S26(); virtual void S27(); virtual void S28(); virtual void S29();
    virtual void S30(); virtual void S31(); virtual void S32(); virtual void S33(); virtual void S34(); virtual void S35(); virtual void S36(); virtual void S37(); virtual void S38(); virtual void S39();
    virtual void S40(); virtual void S41(); virtual void S42(); virtual void S43(); virtual void S44(); virtual void S45(); virtual void S46(); virtual void S47(); virtual void S48(); virtual void S49();
    virtual int Kind();   // slot 50
};
struct Projectile {
    char padding_0[0x12c];
    int32_t power;              // +0x12c
    char padding_130[0x11];
    bool dead;                  // +0x141
    char padding_142[0x1a];
    uint32_t flags;             // +0x15c
    char padding_160[0x30];
    int32_t teams[4];           // +0x190
    char padding_1a0[0x68];
    EventCallback* callback;    // +0x208
    EventTarget* target;        // +0x210
    bool Hit(HitSource* source, HitInfo* info);
};
bool Projectile::Hit(HitSource* source, HitInfo* info) {
    if (source->Kind() == 7) return false;
    power = info->power;
    int32_t team = info->team;
    if (teams[0] == team || teams[1] == team || teams[2] == team || teams[3] == team || dead) return false;
    uint32_t f = flags;
    if (!(f & 0x80)) {
        flags = f | 0x80;
        onyx::SendEvent<0x1f518935u>(callback, target);
    }
    return true;
}

struct LocalLeaderboard {
    char padding_0[0xe8];
    EventCallback* callback;    // +0xe8
    EventTarget* target;        // +0xf0
    char padding_f8[0x68];
    void* listPrev;             // +0x160
    void* listNext;             // +0x168
    void* listRoot;             // +0x170
    uint32_t count;             // +0x178
    char padding_17c[4];
    uint32_t total;             // +0x180
    void Clear(bool* full);
    static void DestroyEntries(void* root);
};
void LocalLeaderboard::Clear(bool* full) {
    onyx::SendEvent<0x13e0c623u>(callback, target, *full);
    if (*full) {
        void** head = &listPrev;
        DestroyEntries(listRoot);
        listRoot = nullptr;
        listPrev = head;
        listNext = head;
        count = 0;
        total = 0;
    }
}

struct MovieName;
extern const char MovieIntro[];
struct MovieState { uint32_t time; char padding_4[4]; uint16_t status; char padding_a[0xe]; char name[1]; };
void PlayMovie(void* player, const char* file, int a, char* out);
struct KissMovieView {
    char padding_0[0xa0];
    char player[0x60];          // +0xa0
    char padding_100[0x80];
    EventCallback* callback;    // +0x180
    EventTarget* target;        // +0x188
    char padding_190[0xd0];
    MovieState* state;          // +0x260
    void Start();
};
void KissMovieView::Start() {
    MovieState* s = state;
    s->status = 1;
    s->time = 0;
    PlayMovie(player, MovieIntro, 1, reinterpret_cast<char*>(s) + 0x18);
    onyx::SendEvent<0x48acec0au>(callback, target);
}

// Sends one of two events on its owner. The name is a stand-in: nothing names this class.
struct WeakSwitch {
    struct Owner {
        char padding_0[0x100];
        EventCallback* trueCallback;    // +0x100
        EventTarget* trueTarget;        // +0x108
        char padding_110[8];
        EventCallback* falseCallback;   // +0x118
        EventTarget* falseTarget;       // +0x120
    };
    void* padding;
    Owner* owner;
    void Send(bool value);
};
void WeakSwitch::Send(bool value) {
    if (!this) return;
    Owner* x = owner;
    if (!x) return;
    if (!value) onyx::SendEvent<0x584ca479u>(x->falseCallback, x->falseTarget);
    else onyx::SendEvent<0xcc5dbbcu>(x->trueCallback, x->trueTarget);
}

// Onyx::MenuEventScheme and the menu it drives. The menu class has no name of its own here: its
// methods are not in any vtable.
struct MenuItem {
    char padding_0[0x50];
    EventCallback* focusedCallback;     // +0x50
    EventTarget* focusedTarget;         // +0x58
    char padding_60[8];
    EventCallback* unfocusedCallback;   // +0x68
    EventTarget* unfocusedTarget;       // +0x70
    char padding_78[0x20];
    EventCallback* releaseCallback;     // +0x98
    EventTarget* releaseTarget;         // +0xa0
};
struct FocusChange { MenuItem* item; void* source; ~FocusChange() {} };
struct ItemPayload { MenuItem* item; ~ItemPayload() {} };
struct MenuListener : onyx::Component {
    virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9(); virtual void S10(); virtual void S11(); virtual void S12();
    virtual void Focused(FocusChange* change);  // slot 13
    virtual void Blurred(FocusChange* change);  // slot 14
    char padding_8[0x30];
    uint8_t flags;                              // +0x38
};
struct Menu {
    char padding_0[0x78];
    uint64_t listenerCount;     // +0x78
    ComponentHandle** listeners;// +0x80
    char padding_88[0x38];
    MenuItem* current;          // +0xc0
    void* currentSource;        // +0xc8
    void ClearCurrent(void* source);
    void SetCurrent(MenuItem* item, void* source);
};
void Menu::ClearCurrent(void* source) {
    FocusChange change;
    if (currentSource) {
        change.item = current;
        change.source = source;
        uint32_t n = static_cast<uint32_t>(listenerCount);
        if (n) {
            uint64_t i = 0;
            do {
                MenuListener* x = onyx::Peek<MenuListener>(listeners[i]);
                if (x && (x->flags & 1)) x->Blurred(&change);
                ++i;
            } while (i < n);
        }
        currentSource = nullptr;
    }
    MenuItem* item = current;
    if (item) {
        change.item = item;
        change.source = source;
        onyx::SendEvent<0x7b6cac53u>(item->unfocusedCallback, item->unfocusedTarget, change);
        current = nullptr;
    }
}
void Menu::SetCurrent(MenuItem* item, void* source) {
    if (current == item) return;
    ClearCurrent(source);
    FocusChange change;
    change.item = item;
    change.source = nullptr;
    onyx::SendEvent<0x37d20937u>(item->focusedCallback, item->focusedTarget, change);
    change.item = item;
    change.source = source;
    uint32_t n = static_cast<uint32_t>(listenerCount);
    if (n) {
        uint64_t i = 0;
        do {
            MenuListener* x = onyx::Peek<MenuListener>(listeners[i]);
            if (x && (x->flags & 1)) x->Focused(&change);
            ++i;
        } while (i < n);
    }
    currentSource = source;
    current = item;
}
struct MenuEventScheme {
    char padding_0[0xf0];
    uint32_t state;             // +0xf0
    uint32_t parameter;         // +0xf4
    bool pressed;               // +0xf8
    MenuItem* item;             // +0x100
    void Release();
    void Select(Menu* menu, MenuItem* target);
};
void MenuEventScheme::Release() {
    if (pressed) {
        MenuItem* it = item;
        ItemPayload payload{it};
        onyx::SendEvent<0xf3d0b0cu>(it->releaseCallback, it->releaseTarget, payload);
        pressed = false;
    }
}
void MenuEventScheme::Select(Menu* menu, MenuItem* target) {
    if (target) {
        menu->SetCurrent(target, this);
        return;
    }
    if (pressed) {
        MenuItem* it = item;
        ItemPayload payload{nullptr};
        onyx::SendEvent<0xf3d0b0cu>(it->releaseCallback, it->releaseTarget, payload);
        pressed = false;
    }
    state = 0;
    parameter = 0;
}

struct EmitterChild : onyx::Component {
    virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9(); virtual void S10(); virtual void S11(); virtual void S12();
    virtual void Attached();                // slot 13
    char padding_8[0x58];
    void* owner;                            // +0x60
};
struct EmitterOwner {
    char padding_0[0x40];
    ComponentHandle* listener;              // +0x40
    char padding_48[0x10];
    ComponentHandle* child;                 // +0x58
    void Attach();
};
void EmitterOwner::Attach() {
    EmitterChild* x = onyx::Lookup<EmitterChild, 1125278855u>(child);
    if (x) {
        x->owner = this;
        x->Attached();
    }
    ComponentHandle* to = listener;
    ChangedEvent payload{this, this};
    Event_Notify(Accessor_Tracking, to, GraphicsChanged, reinterpret_cast<onyx::EventPayload*>(&payload));
}

// Onyx::Gameplay::Circuits::F32CurveValuePublisherCircuit plays a curve and publishes its value.
struct F32Range { float low, high; };
struct F32Curve { virtual void S0(); virtual void S1(); virtual float Evaluate(float t); virtual F32Range Range(); };
struct FloatPayload { float value; ~FloatPayload() {} };
struct F32CurveValuePublisherCircuit {
    char padding_0[0x50];
    EventCallback* callback;    // +0x50
    EventTarget* target;        // +0x58
    char padding_60[0x20];
    F32Curve* curve;            // +0x80
    float time;                 // +0x88
    bool loops;                 // +0x8c
    void Update();
};
void F32CurveValuePublisherCircuit::Update() {
    if (!curve) return;
    F32Range range = curve->Range();
    float t = FrameDelta + time;
    bool loop = loops;
    time = t;
    if (loop) {
        if (t > range.high) {
            float span = range.high - range.low;
            do t -= span; while (t > range.high);
            time = t;
        }
    } else {
        t = Clamp(t, range.low, range.high);
        time = t;
    }
    FloatPayload payload{curve->Evaluate(t)};
    onyx::SendEvent<0x51404a1eu>(callback, target, payload);
}

// Compose<TimedVisualEffect, ...> runs until its time is up.
struct TimedVisualEffect {
    virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13(); virtual void S14(); virtual void S15();
    virtual void Stop();        // slot 16
    virtual void S17(); virtual void S18();
    virtual void Apply();       // slot 19
    char padding_8[0x78];
    bool active;                // +0x80
    EventCallback* callback;    // +0x88
    EventTarget* target;        // +0x90
    char padding_98[8];
    float elapsed;              // +0xa0
    float duration;             // +0xa4
    void Update();
};
void TimedVisualEffect::Update() {
    if (!active) return;
    float t = FrameDelta + elapsed;
    elapsed = t;
    float limit = duration;
    if (t >= limit && limit != 0.0f) {
        Stop();
        onyx::SendEvent<0x2853a9fcu>(callback, target);
        if (!active) return;
    }
    Apply();
}

// Onyx::AnyKeyInputTrigger fires when any pad holds any key but the one left out of the mask.
struct InputPad { virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13(); virtual void S14(); virtual void S15(); virtual void S16(); virtual void S17(); virtual void S18(); virtual void S19();
    virtual void S20(); virtual void S21(); virtual void S22(); virtual void S23(); virtual void S24(); virtual void S25(); virtual void S26(); virtual void S27(); virtual void S28(); virtual void S29();
    virtual void S30(); virtual void S31(); virtual void S32(); virtual void S33(); virtual void S34(); virtual void S35(); virtual void S36(); virtual void S37(); virtual void S38(); virtual void S39();
    virtual void S40(); virtual void S41(); virtual void S42(); virtual void S43(); virtual void S44(); virtual void S45(); virtual void S46(); virtual void S47(); virtual void S48(); virtual void S49();
    virtual void S50(); virtual void S51(); virtual void S52(); virtual void S53(); virtual void S54(); virtual void S55(); virtual void S56(); virtual void S57(); virtual void S58(); virtual void S59();
    virtual void S60(); virtual void S61(); virtual void S62(); virtual void S63(); virtual void S64(); virtual void S65(); virtual void S66();
    virtual bool KeyDown(uint32_t key);     // slot 67
};
struct PadSlot { InputPad** pad; void* padding; };
struct InputSystem { char padding_0[0x18]; uint64_t count; PadSlot* slots; };
extern InputSystem* Input;
struct AnyKeyInputTrigger {
    char padding_0[0x50];
    EventCallback* callback;    // +0x50
    EventTarget* target;        // +0x58
    void Update();
};
void AnyKeyInputTrigger::Update() {
    InputSystem* input = Input;
    uint32_t keys = 0;
    for (uint32_t key = 0; key != 27; ++key) {
        uint32_t held = 0;
        for (uint64_t i = 0; i < 32; ++i) {
            if (input->count <= i) break;
            if (static_cast<uint32_t>(i) <= 15) {
                InputPad** pad = input->slots[i].pad;
                if (pad && *pad) {
                    uint32_t bit = 1u << i;
                    held |= (*pad)->KeyDown(key) ? bit : 0;
                }
            }
        }
        uint32_t bit = 1u << key;
        keys = held ? keys | bit : keys & ~bit;
    }
    if (keys & 0xfffffdffu) onyx::SendEvent<0x6201e15u>(callback, target);
}

// SPTG::MoveIconInWorldMapAction moves an icon along a straight line.
typedef onyx::Vector3 MapPosition;
inline MapPosition operator+(const MapPosition& a, const MapPosition& b) { return MapPosition(a.x + b.x, a.y + b.y, a.z + b.z); }
struct MoveIconInWorldMapAction {
    char padding_0[0x80];
    EventCallback* callback;    // +0x80
    EventTarget* target;        // +0x88
    char padding_90[8];
    bool active;                // +0x98
    char padding_99[0x4b];
    MapPosition from;           // +0xe4
    MapPosition to;             // +0xf0
    float elapsed;              // +0xfc
    float duration;             // +0x100
    void Update();
    void MoveIcon(const MapPosition& position);
};
void MoveIconInWorldMapAction::Update() {
    if (!active) return;
    float t = GameDelta + elapsed;
    elapsed = t;
    float end = duration;
    MapPosition position;
    if (t < end) {
        position = from + ((to - from) * t) / end;
        MoveIcon(position);
        return;
    }
    MoveIcon(to);
    onyx::EventPayload fired;
    onyx::SendEvent<ActionFinished>(callback, target, fired);
}

// SPTG::WaitForAllPickupsCollected finishes when no pickup of its kind is left.
struct LevelPickup { char padding_0[0x220]; int32_t kind; };
struct PickupList : onyx::Component { char padding_8[0x78]; uint64_t count; char padding_88[8]; LevelPickup** items; };
struct WaitForAllPickupsCollected {
    char padding_0[0x80];
    EventCallback* callback;    // +0x80
    EventTarget* target;        // +0x88
    char padding_90[0x10];
    ComponentHandle* pickups;   // +0xa0
    int32_t kind;               // +0xa8
    char padding_ac;
    bool done;                  // +0xad
    void Update();
};
void WaitForAllPickupsCollected::Update() {
    PickupList* list = onyx::Get<PickupList, 1900011522u>(pickups);
    LevelPickup** begin = list->items;
    uint64_t count = list->count;
    LevelPickup** it = begin;
    LevelPickup** end = begin + count;
    if (count) {
        do {
            if ((*it)->kind == kind) break;
            ++it;
        } while (it != end);
    }
    if (it == end) {
        done = true;
        onyx::SendEvent<ActionFinished>(callback, target);
    }
}

// SPTG::WorldClearAction records a cleared world on the current player's save.
struct ClearRecord : onyx::Component { char padding_8[0x5c]; uint32_t cleared; uint32_t unlocked; };
struct ClearPlayer : onyx::Component {
    char padding_8[0x7d0];
    ComponentHandle* record;    // +0x7d8
    char padding_7e0[0xd28];
    int32_t id;                 // +0x1508
};
struct ClearPlayers : onyx::Component { char padding_8[0x78]; uint64_t count; char padding_88[8]; ClearPlayer** items; };
struct ClearLevel { char padding_0[0xa0]; ComponentHandle* players; };
struct ClearSession { char padding_0[0x1828]; int32_t player; };
extern uint8_t DisableProgress;
struct WorldClearAction {
    char padding_0[0x80];
    EventCallback* callback;    // +0x80
    EventTarget* target;        // +0x88
    char padding_90[0x10];
    void* session;              // +0xa0
    void* level;                // +0xa8
    uint32_t world;             // +0xb0
    void Start();
};
void WorldClearAction::Start() {
    ComponentHandle*& players = SingletonGet<ClearLevel>(&level)->players;
    ClearPlayers* list = onyx::Get<ClearPlayers, 200583607u>(players);
    if (list->count) {
        ClearPlayer** it = list->items;
        for (;;) {
            if ((*it)->id == SingletonGet<ClearSession>(&session)->player) break;
            if (++it == list->items + list->count) goto finish;
        }
        {
            ClearRecord* record = onyx::Lookup<ClearRecord, 1180775934u>((*it)->record);
            if (!(DisableProgress & 1)) {
                uint32_t w = world;
                record->cleared |= 1u << w;
                if (w <= 11) record->unlocked |= 1u << (w + 1);
            }
        }
    }
finish:
    onyx::SendEvent<ActionFinished>(callback, target);
}

// SPTG::CheckPointCatalog leaves the checkpoint it is on.
struct CheckPointManager;
void CheckPointLeave(CheckPointManager* manager, onyx::Component* object, int a);
struct CheckPointEntry {
    char padding_0[0x50];
    ComponentHandle* object;    // +0x50
    void* manager;              // +0x58
    EventCallback* callback;    // +0x60
    EventTarget* target;        // +0x68
    char padding_70[8];
    int32_t id;                 // +0x78
};
struct CheckPointCatalog {
    char padding_0[0x80];
    uint64_t count;             // +0x80
    char padding_88[8];
    CheckPointEntry** items;    // +0x90
    char padding_98[8];
    int32_t current;            // +0xa0
    void Leave();
};
void CheckPointCatalog::Leave() {
    int32_t id = current;
    if (id == -1) return;
    uint64_t n = count;
    if (!n) return;
    CheckPointEntry** it = items;
    CheckPointEntry** end = it + n;
    CheckPointEntry* entry;
    for (;;) {
        entry = *it++;
        if (id == entry->id) break;
        if (it == end) return;
    }
    if (entry->object && entry->object->object) {
        onyx::Component* object = entry->object->object;
        CheckPointLeave(SingletonGet<CheckPointManager>(&entry->manager), object, 0);
    }
    onyx::SendEvent<0x52feacd1u>(entry->callback, entry->target);
    current = -1;
}

// SPTG::LeaderboardAgency tells the board once its queue has drained.
struct LeaderboardQueue : onyx::Component {
    char padding_8[0x118];
    uint64_t busy;              // +0x120
    char padding_128[0x10];
    uint64_t head;              // +0x138
    uint64_t tail;              // +0x140
    char padding_148[8];
    uint64_t capacity;          // +0x150
};
struct LeaderboardOwner : onyx::Component {
    char padding_8[0x90];
    EventCallback* callback;    // +0x98
    EventTarget* target;        // +0xa0
};
struct LeaderboardAgency {
    char padding_0[0x58];
    ComponentHandle* owner;     // +0x58
    ComponentHandle* queue;     // +0x60
    char padding_68[8];
    bool waiting;               // +0x70
    void Update(uint8_t mode);
};
void LeaderboardAgency::Update(uint8_t mode) {
    if (!(mode & 3)) return;
    LeaderboardQueue* q = onyx::Lookup<LeaderboardQueue, 1496058556u>(queue);
    if (q->busy) return;
    uint64_t head = q->head;
    uint64_t tail = q->tail;
    uint64_t size = tail >= head ? tail - head : q->capacity - head + tail;
    if (size || !waiting) return;
    waiting = false;
    LeaderboardOwner* x = onyx::Lookup<LeaderboardOwner, 119343446u>(owner);
    onyx::SendEvent<0x790d3284u>(x->callback, x->target);
}

// SPTG::TitleScreen clears the input it recorded, then says so.
struct RecordedInput {
    char padding_0[0xa8];
    uint32_t count;             // +0xa8
    char padding_ac[0x400];
    char padding_4ac[0x108];
    char marks[0x80];           // +0x5b4
};
struct TitleScreen {
    char padding_0[0x1f8];
    EventCallback* callback;    // +0x1f8
    EventTarget* target;        // +0x200
    char padding_208[0xc0];
    void* recorded;             // +0x2c8
    void Clear();
};
void TitleScreen::Clear() {
    RecordedInput* input = SingletonGet<RecordedInput>(&recorded);
    if (input->count) {
        __builtin_memset(input->marks, 0, sizeof input->marks);
        __builtin_memset(&input->count, 0, 0x404);
    }
    onyx::SendEvent<0x48acec0fu>(callback, target);
}

// A console command that fires an event.
struct ConsoleReply { ConsoleReply(const char* text); char data[0x20]; };
struct ConsoleEventCommand {
    char padding_0[0x50];
    EventCallback* callback;    // +0x50
    EventTarget* target;        // +0x58
    ConsoleReply Run();
};
ConsoleReply ConsoleEventCommand::Run() {
    onyx::SendEvent<0x2e900d26u>(callback, target);
    return ConsoleReply("Done.");
}

// The name is a stand-in; this forwards an integer to a singleton's event.
struct ValueReceiver {
    char padding_0[0x68];
    EventCallback* callback;    // +0x68
    EventTarget* target;        // +0x70
};
struct IntPayload { int32_t value; ~IntPayload() {} };
struct ValueForwarder {
    char padding_0[0x50];
    void* receiver;             // +0x50
    void Forward(int32_t* value);
};
void ValueForwarder::Forward(int32_t* value) {
    ValueReceiver* x = SingletonGet<ValueReceiver>(&receiver);
    IntPayload payload{*value};
    onyx::SendEvent<0x4e51bd4fu>(x->callback, x->target, payload);
}

// An actor action's actor, what moves it and what draws it.
struct ActorGraphic : onyx::Component {
    char padding_8[0x71];
    bool hidden;
    void Call8e7330();          // 0x8e7330; name provisional
};
struct ActorBody : onyx::Component {
    char padding_8[0x50];
    ComponentHandle* graphic;   // +0x58
};
struct ActionActor : onyx::Component {
    virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13(); virtual void S14(); virtual void S15(); virtual void S16(); virtual void S17(); virtual void S18(); virtual void S19();
    virtual void S20(); virtual void S21(); virtual void S22();
    virtual void PlayAnimation(uint32_t animation, uint32_t loops, int mode);  // slot 23
    virtual void S24(); virtual void S25(); virtual void S26(); virtual void S27(); virtual void S28(); virtual void S29();
    virtual void Flip();        // slot 30
    virtual void S31(); virtual void S32(); virtual void S33(); virtual void S34(); virtual void S35(); virtual void S36(); virtual void S37(); virtual void S38(); virtual void S39();
    virtual void S40(); virtual void S41(); virtual void S42(); virtual void S43(); virtual void S44(); virtual void S45(); virtual void S46(); virtual void S47(); virtual void S48(); virtual void S49();
    virtual void S50(); virtual void S51(); virtual void S52(); virtual void S53(); virtual void S54(); virtual void S55();
    virtual void SetSolid(bool solid);   // slot 56
    char padding_8[0x70];
    ComponentHandle* body;      // +0x78
    char padding_80[0xc4];
    int32_t depth;              // +0x144
};
void MoveBody(ActorBody* body, const MapPosition* position);
void AddGraphic(void* master, void* graphic, int a);

struct ActorAddGraphicMasterAction : ActorActionBase {
    char padding_a8[8];
    ComponentHandle* master;    // +0xb0
    void Start();
    void BaseStart();
};
struct GraphicMaster : onyx::Component {};
void ActorAddGraphicMasterAction::Start() {
    BaseStart();
    GraphicMaster* to = onyx::Lookup<GraphicMaster, 783177747u>(master);
    ActionActor* x = static_cast<ActionActor*>(actor->object);
    ActorBody* b = onyx::Lookup<ActorBody, 1687344669u>(x->body);
    ActorGraphic* g = onyx::Lookup<ActorGraphic, 783177747u>(b->graphic);
    AddGraphic(to, g, 0);
    onyx::SendEvent<ActionFinished>(callback, target);
}

struct ActorAnimationAction : ActorActionBase {
    char padding_a8[3];
    bool loops;                 // +0xab
    bool hidden;                // +0xac
    bool keepFacing;            // +0xad
    bool waits;                 // +0xae
    uint32_t animation;         // +0xb0
    void Start();
    void BaseStart();
};
void ActorAnimationAction::Start() {
    BaseStart();
    static_cast<ActionActor*>(actor->object)->PlayAnimation(animation, loops, 0);
    if (!keepFacing) {
        ActionActor* x = static_cast<ActionActor*>(actor->object);
        uint8_t want = hidden;
        ActorBody* b = onyx::Lookup<ActorBody, 1687344669u>(x->body);
        ActorGraphic* g = onyx::Get<ActorGraphic, 783177747u>(b->graphic);
        if (want == (g->hidden ^ 1)) static_cast<ActionActor*>(actor->object)->Flip();
    }
    if (!waits) onyx::SendEvent<ActionFinished>(callback, target);
}

// SPTG::ActorMoveFromBehindAction's slot 15 (0x8e7220): runs 0x8e7330 on the actor's graphic, makes the actor solid
// again and stops as ActorActionComponent does.
struct ActorMoveFromBehindAction : ActorActionComponent {
    void Stop(void* event);
};
void ActorMoveFromBehindAction::Stop(void* event) {
    ActionActor* x = static_cast<ActionActor*>(actor->object);
    ActorBody* b = onyx::Lookup<ActorBody, 1687344669u>(x->body);
    ActorGraphic* g = onyx::Lookup<ActorGraphic, 783177747u>(b->graphic);
    g->Call8e7330();
    static_cast<ActionActor*>(actor->object)->SetSolid(true);
    ActorActionComponent::Stop(event);
}

// SPTG::ActorMoveAction walks the actor in a straight line, keeping its depth with its z.
struct ActorMoveAction : ActorActionBase {
    char padding_a8[0x2c];
    MapPosition from;           // +0xd4
    MapPosition to;             // +0xe0
    float duration;             // +0xec
    float elapsed;              // +0xf0
    void Update();
    __attribute__((always_inline)) void Place(const MapPosition& position) {
        ActionActor* x = static_cast<ActionActor*>(actor->object);
        ActorBody* b = onyx::Lookup<ActorBody, 1687344669u>(x->body);
        MoveBody(b, &position);
        x->depth = static_cast<int32_t>(position.z);
    }
};
void ActorMoveAction::Update() {
    ActorActionBase::Update();
    if (!active) return;
    float end = duration;
    float t = GameDelta + elapsed;
    elapsed = t;
    if (end != 0.0f && t <= end) {
        float k = t / end;
        MapPosition position = from + (to - from) * k;
        float z = position.z;
        ActionActor* x = static_cast<ActionActor*>(actor->object);
        ActorBody* b = onyx::Lookup<ActorBody, 1687344669u>(x->body);
        MoveBody(b, &position);
        x->depth = static_cast<int32_t>(z);
        return;
    }
    Place(to);
    onyx::EventPayload finished;
    onyx::SendEvent<ActionFinished>(callback, target, finished);
}

// SPTG::HideObjectAction hides an object and can stop the actor's animation with it.
struct ActorAnimation { float start; float current; char padding_8[4]; uint8_t flags; };
struct HideableActor : onyx::Component {
    virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13(); virtual void S14(); virtual void S15();
    virtual ActorAnimation* Animation();    // slot 16
};
struct HideableObject : onyx::Component {
    char padding_8[0x50];
    ComponentHandle* renderer;  // +0x58
    char padding_60[0x18];
    bool visible;               // +0x78
};
struct ObjectRenderer : onyx::Component {};
void RendererHide(ObjectRenderer* renderer, int a);
struct HideObjectAction {
    char padding_0[0x80];
    EventCallback* callback;    // +0x80
    EventTarget* target;        // +0x88
    char padding_90[8];
    uint16_t state;             // +0x98
    char padding_9a[6];
    ComponentHandle* actor;     // +0xa0
    ComponentHandle* object;    // +0xa8
    bool stops;                 // +0xb0
    bool hidesRenderer;         // +0xb1
    void Start();
};
void HideObjectAction::Start() {
    state = 1;
    onyx::Get<HideableObject, 783177747u>(object)->visible = false;
    HideableActor* x = onyx::Peek<HideableActor>(actor);
    if (x && stops) {
        ActorAnimation* a = x->Animation();
        uint8_t f = a->flags;
        a->current = (f & 1) ? a->start : 0.0f;
        a->flags = f & 0xfb;
        static_cast<HideableActor*>(actor->object)->Animation()->flags |= 8;
    }
    if (hidesRenderer) {
        HideableObject* o = onyx::Lookup<HideableObject, 783177747u>(object);
        RendererHide(onyx::Lookup<ObjectRenderer, 36693834u>(o->renderer), 0);
    }
    onyx::SendEvent<ActionFinished>(callback, target);
}

// SPTG::StartCameraShakeAction starts a shake, from a preset or from its own settings.
struct ShakePreset : onyx::Component { char padding_8[0x44]; char settings[1]; };
struct ShakeSlot { char data[40]; };
struct CameraShaker : onyx::Component {
    char padding_8[0x68];
    ComponentHandle** presets;  // +0x70
    char padding_78[0x20];
    ShakeSlot* slots;           // +0x98
    int32_t FreeSlot();
};
void ShakeStart(ShakeSlot* slot, const char* settings);
struct ShakeRig : onyx::Component {
    char padding_8[0x68];
    ComponentHandle* shaker;    // +0x70
};
struct RigHolder { char padding_0[0x50]; ComponentHandle* rig; };
struct StartCameraShakeAction {
    char padding_0[0x80];
    EventCallback* callback;    // +0x80
    EventTarget* target;        // +0x88
    char padding_90[8];
    uint16_t state;             // +0x98
    char padding_9a[6];
    void* holder;               // +0xa0
    bool usesPreset;            // +0xa8
    char padding_a9[3];
    char settings[0x18];        // +0xac
    uint32_t preset;            // +0xc4
    int32_t started;            // +0xc8
    void Start();
};
void StartCameraShakeAction::Start() {
    ShakeRig* rig = onyx::Lookup<ShakeRig, 1743956557u>(SingletonGet<RigHolder>(&holder)->rig);
    state = 1;
    int32_t slot;
    CameraShaker* shaker;
    const char* from;
    if (usesPreset) {
        uint32_t id = preset;
        shaker = onyx::Lookup<CameraShaker, 1037755499u>(rig->shaker);
        ShakePreset* p = onyx::Peek<ShakePreset>(shaker->presets[id]);
        slot = shaker->FreeSlot();
        if (slot < 0) goto done;
        from = p->settings;
    } else {
        shaker = onyx::Lookup<CameraShaker, 1037755499u>(rig->shaker);
        slot = shaker->FreeSlot();
        if (slot < 0) goto done;
        from = settings;
    }
    ShakeStart(&shaker->slots[slot], from);
done:
    started = slot;
    onyx::SendEvent<ActionFinished>(callback, target);
}

// SPTG::UnspawnManager applies what was queued during the frame.
struct UnspawnNotice {
    char padding_0[0x70];
    EventCallback* callback;    // +0x70
    EventTarget* target;        // +0x78
};
struct UnspawnObject;
struct UnspawnEntry { UnspawnObject* object; int32_t reason; };
void UnspawnNow(UnspawnObject* object);
void UnspawnWithReason(UnspawnObject* object, int32_t reason);
struct UnspawnManager {
    char padding_0[0x70];
    uint64_t entryCount;        // +0x70
    UnspawnEntry* entries;      // +0x78
    char padding_80[0x18];
    uint64_t objectCount;       // +0x98
    char padding_a0[8];
    UnspawnObject** objects;    // +0xa8
    char padding_b0[0x10];
    uint64_t noticeCount;       // +0xc0
    char padding_c8[8];
    UnspawnNotice** notices;    // +0xd0
    void Update(uint8_t mode);
};
void UnspawnManager::Update(uint8_t mode) {
    if (mode & 3) {
        if (objectCount) {
            UnspawnObject** it = objects;
            do {
                UnspawnNow(*it);
                ++it;
            } while (it != objects + objectCount);
        }
        if (entryCount) {
            UnspawnEntry* it = entries;
            do {
                UnspawnWithReason(it->object, it->reason);
                ++it;
            } while (it != entries + entryCount);
        }
        if (noticeCount) {
            UnspawnNotice** it = notices;
            do {
                UnspawnNotice* x = *it;
                onyx::SendEvent<0x36dc3035u>(x->callback, x->target);
                ++it;
            } while (it != notices + noticeCount);
        }
        objectCount = 0;
        entryCount = 0;
        noticeCount = 0;
    }
}

// Six buttons of one screen, each telling what its object leads to. Nothing names this class.
struct ChainTarget : onyx::Component {
    char padding_8[0x18];
    EventCallback* callback;    // +0x20
    EventTarget* target;        // +0x28
};
struct ChainBody : onyx::Component { char padding_8[0x48]; ComponentHandle* next; };
struct ChainOwner : onyx::Component { char padding_8[0x70]; ComponentHandle* body; };
struct ChainedButtons {
    char padding_0[0xd58];
    ComponentHandle* first;     // +0xd58
    ComponentHandle* second;    // +0xd60
    ComponentHandle* third;     // +0xd68
    ComponentHandle* fourth;    // +0xd70
    ComponentHandle* fifth;     // +0xd78
    ComponentHandle* sixth;     // +0xd80
    template<uint32_t OwnerType> __attribute__((always_inline)) static void Fire(ComponentHandle*& handle) {
        ChainOwner* owner = onyx::Lookup<ChainOwner, OwnerType>(handle);
        ChainBody* body = onyx::Get<ChainBody, 1687344669u>(owner->body);
        ChainTarget* x = onyx::Peek<ChainTarget>(body->next);
        if (x) onyx::SendEvent<0x44174b43u>(x->callback, x->target);
    }
    void FireFirst();
    void FireSecond();
    void FireThird();
    void FireFourth();
    void FireFifth();
    void FireSixth();
};
void ChainedButtons::FireFirst() { Fire<0x19ac00b3u>(first); }
void ChainedButtons::FireSecond() { Fire<0x19ac00b3u>(second); }
void ChainedButtons::FireThird() { Fire<0x37bd3ac0u>(third); }
void ChainedButtons::FireFourth() { Fire<0x37bd3ac0u>(fourth); }
void ChainedButtons::FireFifth() { Fire<0x15d09a06u>(fifth); }
void ChainedButtons::FireSixth() { Fire<0x2bc021adu>(sixth); }

// Onyx::Gameplay::DistanceTrigger fires while its two objects are close enough.
struct DistanceObject : onyx::Component { char padding_8[0x74]; onyx::Vector3 position; };
struct DistanceTrigger {
    char padding_0[0x50];
    ComponentHandle* first;     // +0x50
    ComponentHandle* second;    // +0x58
    EventCallback* callback;    // +0x60
    EventTarget* target;        // +0x68
    char padding_70[0x20];
    float radius;               // +0x90
    bool inside;                // +0x94
    void Update();
    void BaseUpdate();
};
void DistanceTrigger::Update() {
    BaseUpdate();
    DistanceObject* a = onyx::Get<DistanceObject, 36693834u>(second);
    onyx::Vector3 from = a->position;
    DistanceObject* b = onyx::Get<DistanceObject, 36693834u>(first);
    onyx::Vector3 to = b->position;
    bool close = (to - from).LengthSquared() <= radius;
    inside = close;
    if (close) onyx::SendEvent<0x1be25733u>(callback, target);
}

// SPTG::WorldMap's first frame, then the check that only runs with progress turned off.
struct DebugConsole { char padding_0[0x5f8]; void* thread; };
extern DebugConsole* Console;
unsigned long ThreadCurrentId();
__attribute__((always_inline)) inline unsigned long ThisThread() noexcept { return ThreadCurrentId(); }
bool ConsoleBusy(DebugConsole* console);
void ConsoleOpen(int a);
struct WorldMap {
    char padding_0[0x1c8];
    EventCallback* callback;    // +0x1c8
    EventTarget* target;        // +0x1d0
    char padding_1d8[0xd8];
    char pending[8];            // +0x2b0
    bool started;               // +0x2b8
    void Slot29();
    void BaseSlot29();
    static void Reset(char* pending);
};
void WorldMap::Slot29() {
    BaseSlot29();
    if (!started) {
        started = true;
        onyx::SendEvent<0x48acec0du>(callback, target);
    }
    if (DisableProgress == 1) {
        Reset(pending);
        DebugConsole* console = Console;
        if (console->thread) {
            ThisThread();
            console = Console;
        }
        if (!ConsoleBusy(console)) ConsoleOpen(1);
    }
}

// The end of Ex mode. The class name is a stand-in.
void PlayMovieFlags(MovieHost* host, MovieName* name, int flags);
struct GameOverScreen {
    char padding_0[0x170];
    void* host;                 // +0x170
    char padding_178[0x80];
    EventCallback* callback;    // +0x1f8
    EventTarget* target;        // +0x200
    char padding_208[0x68];
    bool shown;                 // +0x270
    char padding_271[0x50];
    bool success;               // +0x2c1
    void Show();
};
void GameOverScreen::Show() {
    onyx::SendEvent<0x48acec0fu>(callback, target);
    bool won = success;
    shown = true;
    MovieHost* movie = SingletonGet<MovieHost>(&host);
    if (won) {
        MovieName name;
        name.hash = HashName("ExModeSuccessGameOverMovie");
        PlayMovieFlags(movie, &name, 32);
    } else {
        ShowControllerMessage(movie);
    }
}

// Events sent with a default-constructed value: the callback and the listener each get their own.
struct ZeroVector { onyx::Vector3 value; ZeroVector() : value(onyx::Vector3::Zero()) {} };
template<uint32_t Hash> struct ZeroVectorEvent {
    EventCallback* callback;
    EventTarget* target;
    void Send();
};
template<uint32_t Hash> void ZeroVectorEvent<Hash>::Send() {
    if (!(target && (target->flags & 2)) && !onyx::Settings().enabled) return;
    if (callback) {
        onyx::ValuePayload<ZeroVector> payload;
        callback->invoke(callback, reinterpret_cast<onyx::EventPayload*>(&payload));
    }
    if (target) {
        ComponentHandle* to = target->listener;
        if (to) {
            onyx::ValuePayload<ZeroVector> payload;
            Event_Notify(Accessor_Tracking, to, Hash, reinterpret_cast<onyx::EventPayload*>(&payload));
        }
    }
}
template struct ZeroVectorEvent<0x2fdfd54bu>;
template struct ZeroVectorEvent<0x333d72f2u>;

struct SpawnOptions { int32_t a, b, c; bool d; int32_t e; SpawnOptions() : a(4), b(1), c(2), d(false), e(0) {} };
struct SpawnOptionsEvent {
    EventCallback* callback;
    EventTarget* target;
    void Send();
};
void SpawnOptionsEvent::Send() { onyx::SendValue<0x6e6f4d7fu, SpawnOptions>(callback, target); }

struct ControllableSpawnInfo {
    virtual void Key();
    int32_t a, b;
    char padding_10[0x14];
    int32_t c;
    ControllableSpawnInfo() : a(-1), b(7), c(6) {}
};
struct ControllableSpawnEvent {
    EventCallback* callback;
    EventTarget* target;
    void Send();
};
void ControllableSpawnEvent::Send() { onyx::SendValue<0x1b2247fdu, ControllableSpawnInfo>(callback, target); }

// A selector that fades what plays now, then reports the new choice. The name is a stand-in.
bool SoundIsPlaying(int64_t sound);
void SoundSetVolume(int64_t sound, float volume);
struct MusicPlayer : onyx::Component {
    char padding_8[0x58];
    EventCallback* callback;    // +0x60
    EventTarget* target;        // +0x68
    char padding_70[0x20];
    int32_t choice;             // +0x90
    char padding_94[0x54];
    int64_t sound;              // +0xe8
};
struct MusicSelector {
    char padding_0[0x50];
    ComponentHandle* player;    // +0x50
    float volume;               // +0x58
    char padding_5c[0x14];
    uint64_t count;             // +0x70
    int32_t* choices;           // +0x78
    void Select(uint32_t index);
};
void MusicSelector::Select(uint32_t index) {
    int64_t sound = onyx::Get<MusicPlayer, 193862069u>(player)->sound;
    if (sound != -1 && SoundIsPlaying(sound)) SoundSetVolume(sound, volume);
    if (count > index) {
        MusicPlayer* x = onyx::Get<MusicPlayer, 193862069u>(player);
        int32_t value = choices[index];
        if (x->choice != value) x->choice = value;
        onyx::SendEvent<0x6f4bbfc1u>(x->callback, x->target);
    }
}

// The step of a group that starts the child it has reached.
struct StepChild : onyx::Component {
    char padding_8[0x48];
    EventCallback* callback;    // +0x50
    EventTarget* target;        // +0x58
};
struct GroupStep {
    char padding_0[0xb8];
    uint32_t count;             // +0xb8
    ComponentHandle** children; // +0xc0
    char padding_c8[0x68];
    uint32_t current;           // +0x130
    void StartCurrent();
};
void GroupStep::StartCurrent() {
    uint32_t i = current;
    if (i >= count) return;
    StepChild* x = onyx::Peek<StepChild>(children[i]);
    onyx::SendEvent<0x1da2cf68u>(x->callback, x->target);
}

}  // namespace SPTG

namespace Onyx {
// Onyx::ActionComponent, the base of the actions: slot 14 starts one (+0x98 set, +0x99 cleared), slot 15 stops it
// (+0x98 cleared, +0x99 set; 0xbcad20) and slot 16 stops it with an empty event. Slot names are provisional.
struct ActionComponent {
    virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13();
    virtual void Start(void* event);      // slot 14
    virtual void Stop(void* event);       // slot 15
    virtual void Stop() noexcept;         // slot 16 (0xbcaa10, inherited by most actions)
};
void ActionComponent::Stop() noexcept {
    onyx::EventPayload event;
    Stop(&event);
}
}  // namespace Onyx

namespace SPTG {
// ExtraModeScoringAction has its own copy of the base's slot 16 (0x916ac0).
struct ExtraModeScoringAction : Onyx::ActionComponent {
    using Onyx::ActionComponent::Stop;
    void Stop() noexcept override;
};
void ExtraModeScoringAction::Stop() noexcept {
    onyx::EventPayload event;
    Stop(&event);
}
}  // namespace SPTG

namespace SPTG {
// SPTG::SpawnInteractiveObjectActionEx keeps a reference to each object it spawned. Starting again drops them all (the
// reference's destructor, 0x90c480, releases the handle), clears the spawn count at +0x110 and moves +0xe0 on by +0xc0.
struct SpawnedObjectRef {
    ComponentHandle* handle;
    ~SpawnedObjectRef();        // 0x90c480
};
struct SpawnInteractiveObjectActionEx {
    char padding_0[0x98];
    bool active;                // +0x98
    uint8_t stopped;            // +0x99
    char padding_9a[0x26];
    uint32_t step;              // +0xc0
    char padding_c4[0x1c];
    uint32_t next;              // +0xe0
    char padding_e4[0x4];
    onyx::Vector<SpawnedObjectRef> spawned;   // +0xe8
    char padding_108[0x8];
    uint32_t spawnCount;        // +0x110
    void Start(void* event);    // slot 14 (0x90d080)
};
void SpawnInteractiveObjectActionEx::Start(void*) {
    spawnCount = 0;
    active = true;
    stopped = 0;
    if (spawned.data) {
        for (uint64_t i = 0; i < spawned.size; ++i) spawned.data[i].~SpawnedObjectRef();
    }
    spawned.size = 0;
    next += step;
}
}  // namespace SPTG
