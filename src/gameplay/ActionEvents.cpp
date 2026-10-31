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

struct BaseBossAI {
    char padding_0[0xc0];
    EventCallback* callback;    // +0xc0
    EventTarget* target;        // +0xc8
    bool Slot25(int id);
};
bool BaseBossAI::Slot25(int id) {
    if (static_cast<unsigned>(id - 10002) < 2 || id == 10000) return true;
    if (id != 10001) return false;
    onyx::SendEvent<817469290u>(callback, target);
    return true;
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

struct YetiTarget : onyx::Component {
    char padding_8[0];
    EventCallback* callback;     // +0x08
    EventTarget* target;         // +0x10
};
struct StrikerYeti {
    virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13(); virtual void S14(); virtual void S15(); virtual void S16(); virtual void S17(); virtual void S18(); virtual void S19();
    virtual void S20(); virtual void S21();
    virtual void Slot22(int a, int b, int c, float d);
    virtual void S23(); virtual void S24(); virtual void S25(); virtual void S26(); virtual void S27(); virtual void S28(); virtual void S29();
    virtual void S30(); virtual void S31(); virtual void S32(); virtual void S33(); virtual void S34(); virtual void S35(); virtual void S36(); virtual void S37(); virtual void S38(); virtual void S39();
    virtual void S40(); virtual void S41(); virtual void S42(); virtual void S43(); virtual void S44(); virtual void S45(); virtual void S46(); virtual void S47(); virtual void S48(); virtual void S49();
    virtual void S50(); virtual void S51(); virtual void S52(); virtual void S53(); virtual void S54(); virtual void S55(); virtual void S56();
    virtual float Slot57();
    char padding_8[0x30];
    uint32_t flags;              // +0x38
    char padding_3c[0x3c];
    ComponentHandle* handle78;   // +0x78
    char padding_80[0xe0];
    float value160;              // +0x160
    void Enable();
};
void StrikerYeti::Enable() {
    flags |= 2;
    YetiTarget* x = onyx::Lookup<YetiTarget, 1687344669u>(handle78);
    onyx::SendEvent<0x255c0afeu>(x->callback, x->target);
    value160 = Slot57();
    Slot22(0, 1, 0, 1.0f);
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
    virtual float Slot57();
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
    value160 = Slot57();
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

}  // namespace SPTG
