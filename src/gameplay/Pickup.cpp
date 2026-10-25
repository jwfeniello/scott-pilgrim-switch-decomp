// SPTG::Pickup: collectible items (see docs/GAME_CLASSES.md#pickups).
// Class and method names come from RTTI where possible; member and method names
// otherwise describe observed behavior and are provisional. Virtual slots are
// numbered from the original vtable (0x1878f78).
#include "OnyxComponents.h"
#include "OnyxEvents.h"
#include "StateMachine.h"

namespace SPTG {

struct AnimatedAiActor {
    void Reset();   // 0x945c40
    void Update();  // 0x945380
};

// Object an item is attached to; its ID decides whether the item stays held.
struct Holder { uint32_t key; uint32_t id; };
extern Holder NoHolder;
extern "C" float Move_FrameDelta;   // seconds since the last frame (0x1924d70)

// The actor's animation component (type 0x29fbe438).
struct AnimationControl : onyx::Component {
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11(); virtual void Slot12();
    virtual void Slot13(); virtual void Slot14(); virtual void Slot15(); virtual void Slot16(); virtual void Slot17();
    virtual void Slot18(); virtual void Slot19(); virtual void Slot20();
    virtual void SetPaused(bool paused);   // slot 21: sets bit 3 of the current animation's flags
};

struct LevelItemAccessor { char padding[0x70]; onyx::ComponentHandle* pickupSpawners; };  // +0x70
struct UnspawnManager;
// A singleton dependency slot; Get resolves the service on first use (out of line).
template<class T> struct Singleton { onyx::ComponentHandle* handle; T* Get(); };

// Allocator that list nodes come from (virtual Allocate at slot 2).
struct NodeAllocator { virtual void Slot0(); virtual void Slot1(); virtual void* Allocate(uint64_t size); };
// Doubly linked list with its allocator stored in front of the sentinel.
template<class T> struct List {
    struct Node { Node* next; Node* previous; T value; };
    NodeAllocator* allocator;
    Node* first;        // sentinel next
    Node* last;         // sentinel previous
    uint64_t size;
    __attribute__((always_inline)) void PushFront(T value) {
        Node* old = first;
        Node* node = static_cast<Node*>(allocator->Allocate(sizeof(Node)));
        node->next = old;
        node->previous = reinterpret_cast<Node*>(&first);
        old->previous = node;
        first = node;
        node->value = value;
        ++size;
    }
};

struct Pickup;
// Queue of pending records (libc++ list layout: prev, next, value); nodes go back
// to the allocator chosen for their address.
template<class T> struct Queue {
    struct Node { Node* previous; Node* next; T value; };
    void* reserved;
    Node* last;          // sentinel previous
    Node* first;         // sentinel next
    uint64_t size;
    T& Front() { return first->value; }
    __attribute__((always_inline)) void PopFront() {
        if (!size) return;
        Node* node = first;
        Node* previous = node->previous;
        Node* next = node->next;
        previous->next = next;
        next->previous = previous;
        if (node) onyx::AllocatorFor(node)->Free(node);
        --size;
    }
};
struct QueuedEvent { char data[0x10]; };
struct Spawner : onyx::Component { void Remove(uint32_t key); };  // 0x690410
// SPTG::PickupSpawner: places pickups and keeps the ones it spawned.
struct PickupSpawner : onyx::Component {
    char padding_8[0x48];
    Singleton<UnspawnManager> unspawn;       // +0x50
    onyx::ComponentHandle* spawner;          // +0x58
    char padding_60[0x50];
    List<Pickup*> spawned;                   // +0xb0
    char padding_d0[0x8];
    uint32_t id;                             // +0xd8
};
struct PickupSpawnerCatalog : onyx::Component {
    char padding_8[0x78];
    uint64_t count;                          // +0x80
    char padding_88[0x8];
    PickupSpawner** spawners;                // +0x90
};
static_assert(__builtin_offsetof(PickupSpawner, spawned) == 0xb0, "PickupSpawner list");
static_assert(__builtin_offsetof(PickupSpawner, id) == 0xd8, "PickupSpawner id");

// What touched the pickup: the actor's ID and a value the pickup records.
struct Contact {
    char padding_0[0x44];
    uint32_t actorId;          // +0x44
    char padding_48[0x14];
    uint32_t value;            // +0x5c
};

struct Pickup : AnimatedAiActor {
    typedef StateMachine<Pickup>::State State;
    virtual ~Pickup();                                            // slots 0, 1
    virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6();
    virtual void Reset();                                         // slot 7
    virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11(); virtual void Slot12();
    virtual void Slot13(); virtual void Slot14(); virtual void Slot15();
    virtual void Update();                                        // slot 16
    virtual void Collect();                                       // slot 17
    virtual void Slot18(); virtual void Slot19(); virtual void Slot20(); virtual void Slot21();
    virtual void PlayAnimation(int animation, int a, int b, float speed);  // slot 22
    virtual void Slot23(); virtual void Slot24(); virtual void Slot25(); virtual void Slot26();
    virtual bool AnimationDone();                                 // slot 27
    virtual void Slot28(); virtual void Slot29(); virtual void Slot30(); virtual void Slot31();
    virtual void Slot32(); virtual void Slot33(); virtual void Slot34(); virtual void Slot35(); virtual void Slot36();
    virtual void Slot37();
    virtual bool OnContact(void* other, const Contact* contact);  // slot 38
    virtual void Slot39(); virtual void Slot40(); virtual void Slot41(); virtual void Slot42(); virtual void Slot43();
    virtual void Slot44(); virtual void Slot45(); virtual void Slot46(); virtual void Slot47(); virtual void Slot48();
    virtual void Slot49(); virtual void Slot50(); virtual void Slot51(); virtual bool IsOnGround(); virtual void Slot53();  // slot 52
    virtual void Slot54();
    virtual bool IsHeld();                                        // slot 55: byte +0x238
    virtual void Slot56();
    virtual float BaseScale();                                    // slot 57
    virtual void Slot58(); virtual void Slot59(); virtual void Slot60(); virtual void Slot61(); virtual void Slot62();
    virtual void Slot63(); virtual void Slot64(); virtual void Slot65(); virtual void Slot66(); virtual void Slot67();
    virtual void Slot68(); virtual void Slot69();
    virtual void NotifySpawner(bool spawned);                     // slot 70
    virtual void Release();                                       // slot 71: clears the held flag
    virtual void Hold();                                          // slot 72: sets the held flag
    virtual void Slot73(); virtual void Slot74(); virtual void Slot75(); virtual void Slot76();
    virtual void Slot77();
    // States and the getters returning them (slots 78-85).
    virtual int State78(int event);  virtual State State78Ptr();
    virtual int IdleState(int event); virtual State InitialState();
    virtual int CollectedStateHandler(int event); virtual State CollectedState();
    virtual int State84(int event);  virtual State State84Ptr();

    char padding_8[0x38];
    Holder* holder;                  // +0x40
    char padding_48[0x28];
    onyx::ComponentHandle* animation;   // +0x70
    char padding_78[0x18];
    Singleton<LevelItemAccessor> levelItems;   // +0x90
    uint32_t value98;                // +0x98
    uint32_t previousValue98;        // +0x9c
    char padding_a0[0x58];
    float savedZ;                    // +0xf8
    float savedC4;                   // +0xfc
    char padding_100[0x2c];
    uint32_t contactValue;           // +0x12c
    char padding_130[0x11];
    bool blocked;                    // +0x141
    char padding_142[0x1e];
    float scale;                     // +0x160
    char padding_164[0x2c];
    uint32_t ignoredActors[4];       // +0x190
    char padding_1a0[0x4];
    onyx::Vector3 motion;            // +0x1a4
    onyx::Vector3 motionTarget;      // +0x1b0
    char padding_1bc[0x8];
    float motionC4;                  // +0x1c4
    char padding_1c8[0x28];
    StateMachine<Pickup> states;     // +0x1f0
    char padding_218[0x18];
    float idleDuration;              // +0x230
    float restitution;               // +0x234: scales the vertical motion on each bounce
    uint8_t held;                    // +0x238
    uint8_t pauseWhenResting;        // +0x239
    char padding_23a[0x2];
    uint32_t spawnerId;              // +0x23c
    char padding_240[0x18];
    onyx::EventCallback* collectCallback;   // +0x258
    onyx::EventTarget* collectTarget;       // +0x260
    char padding_268[0x8];
    uint8_t resting;                 // +0x270
    char padding_271[0x3];
    float idleTimer;                 // +0x274
    uint8_t skipCollect;             // +0x278
    char padding_279[0x7];
    bool spawnedFlag;                // +0x280
    Queue<QueuedEvent>* placedEvents;   // +0x288
    Queue<QueuedEvent>* spawnedEvents;  // +0x290
    void HandleQueued(QueuedEvent& event);  // 0x9a52e0
    bool TryCollect();               // 0x9a4c40: a nearby player picks the item up
};
static_assert(__builtin_offsetof(Pickup, holder) == 0x40, "Pickup holder");
static_assert(__builtin_offsetof(Pickup, scale) == 0x160, "Pickup scale");
static_assert(__builtin_offsetof(Pickup, ignoredActors) == 0x190, "Pickup ignored actors");
static_assert(__builtin_offsetof(Pickup, animation) == 0x70, "Pickup animation");
static_assert(__builtin_offsetof(Pickup, savedZ) == 0xf8, "Pickup saved depth");
static_assert(__builtin_offsetof(Pickup, motion) == 0x1a4, "Pickup motion");
static_assert(__builtin_offsetof(Pickup, motionC4) == 0x1c4, "Pickup motion c4");
static_assert(__builtin_offsetof(Pickup, idleDuration) == 0x230, "Pickup idle duration");
static_assert(__builtin_offsetof(Pickup, resting) == 0x270, "Pickup resting flag");
static_assert(__builtin_offsetof(Pickup, skipCollect) == 0x278, "Pickup collect flag");
static_assert(__builtin_offsetof(Pickup, states) == 0x1f0, "Pickup states");
static_assert(__builtin_offsetof(Pickup, levelItems) == 0x90, "Pickup level items");
static_assert(__builtin_offsetof(Pickup, spawnerId) == 0x23c, "Pickup spawner id");
static_assert(__builtin_offsetof(Pickup, spawnedEvents) == 0x290, "Pickup queues");

// Slot 7 (0x9a3d50): resets the actor and restarts the state machine in the initial state.
void Pickup::Reset() {
    AnimatedAiActor::Reset();
    states.Start(this, InitialState());
}

// Slot 16 (0x9a3e40): an item that is not held is released when its holder's ID
// is outside 10001-999999 (or it has no holder). Then the frame's value is kept
// and the scale refreshed.
void Pickup::Update() {
    AnimatedAiActor::Update();
    if (!IsHeld()) {
        Holder* h = holder ? holder : &NoHolder;
        if (h->id - 10001u >= 989999u) Release();
    }
    previousValue98 = value98;
    scale = BaseScale();
}

// Slot 38 (0x9a4270): a touch collects the item unless the toucher is one of the
// four ignored actors, collection is blocked, or it is already collected.
bool Pickup::OnContact(void*, const Contact* contact) {
    contactValue = contact->value;
    uint32_t id = contact->actorId;
    for (int i = 0; i < 4; ++i)
        if (ignoredActors[i] == id) return false;
    if (blocked) return false;
    State collected = CollectedState();
    if (states.current == collected) return false;
    states.Transition(CollectedState());
    return true;
}

// Slot 17 (0x9a3ed0): plays the collect animation and holds the item, consumes the
// next queued record (from the spawned or the placed queue) and sends the collect
// event (hash 0x53df13ab).
void Pickup::Collect() {
    PlayAnimation(0, 1, 0, 1.0f);
    bool spawned = spawnedFlag;
    Hold();
    if (!spawned) {
        HandleQueued(placedEvents->Front());
        placedEvents->PopFront();
        onyx::SendEvent<0x53df13abu>(collectCallback, collectTarget);
    } else {
        HandleQueued(spawnedEvents->Front());
        spawnedEvents->PopFront();
        onyx::SendEvent<0x53df13abu>(collectCallback, collectTarget);
    }
}

// Slot 70 (0x9a4380): releases the item and tells its spawner (spawner ID 13 has
// none). A spawned item is added to the spawner's list; otherwise the spawner's
// unspawn manager is touched and the spawner drops the holder's entry.
void Pickup::NotifySpawner(bool spawned) {
    Release();
    if (spawnerId == 13) return;
    spawnedFlag = spawned;
    LevelItemAccessor* items = levelItems.Get();
    PickupSpawnerCatalog* catalog = onyx::Get<PickupSpawnerCatalog, onyx_types::type_279c1a0f>(items->pickupSpawners);
    const uint32_t id = spawnerId;
    PickupSpawner** i = catalog->spawners;
    PickupSpawner** end = i + catalog->count;
    if (i == end) return;
    while ((*i)->id != id) {
        ++i;
        if (i == end) return;
    }
    PickupSpawner* owner = *i;
    if (!owner) return;
    if (spawned) {
        owner->spawned.PushFront(this);
    } else {
        owner->unspawn.Get();
        Spawner* spawner = onyx::Find<Spawner, onyx_types::type_78bdb701>(owner->spawner);
        Holder* h = holder ? holder : &NoHolder;
        spawner->Remove(h->key);
    }
}

// Slot 78 (0x9a4550): plays animation 189 on entry; once it is done, switches
// to the initial state.
int Pickup::State78(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(InitialState());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(189, 0, 0, 1.0f);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 80 (0x9a4620): the idle state. Entry plays animation 0 and starts the
// idle timer. While the timer runs, each landing reflects the vertical motion,
// scaled by the restitution, until the bounce is weaker than 0.5; then the item
// rests: animation 95 plays, motion stops and the animation may be paused. In
// the air after resting, the saved depth values are restored. Once the timer has
// run out, landing switches to the collected state. Unless skipped, a nearby
// player can collect the item at any time, which switches to the state at slot 84.
// Not yet byte-identical, so not credited: when the item comes to rest, the
// original keeps the motion vector's address in a callee-saved register across
// the animation call, and this source does not.
int Pickup::IdleState(int event) {
    switch (event) {
    case kStateUpdate:
        if (idleTimer <= 0.0f) {
            if (IsOnGround()) {
                skipCollect = 0;
                states.Transition(CollectedState());
                return kStateParentTookOver;
            }
        } else {
            idleTimer -= Move_FrameDelta;
            if (IsOnGround()) {
                skipCollect = 0;
                if (!resting) {
                    float bounce = motion.z * restitution;
                    if (bounce < -0.5f) {
                        motion.z = -bounce;
                    } else {
                        PlayAnimation(95, 1, 0, 1.0f);
                        resting = 1;
                        motion = onyx::Vector3::Zero();
                        motionTarget = onyx::Vector3::Zero();
                        if (pauseWhenResting) onyx::Get<AnimationControl, 0x29fbe438u>(animation)->SetPaused(true);
                    }
                }
            } else if (resting) {
                motionTarget.z = savedZ;
                motionC4 = savedC4;
            }
        }
        if (!skipCollect && TryCollect()) {
            states.Transition(State84Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(0, 1, 0, 1.0f);
        idleTimer = idleDuration;
        resting = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        onyx::Get<AnimationControl, 0x29fbe438u>(animation)->SetPaused(false);
        return kStateHandled;
    }
}

// Slot 82 (0x9a4940): plays animation 16 and stops moving on entry. Each update
// first lets a nearby player collect the item (0x9a4c40) and on success switches to the
// state at slot 84; otherwise the spawner is notified once the animation is done.
int Pickup::CollectedStateHandler(int event) {
    switch (event) {
    case kStateUpdate:
        if (TryCollect()) {
            states.Transition(State84Ptr());
            return kStateParentTookOver;
        }
        if (AnimationDone()) NotifySpawner(true);
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(16, 0, 0, 1.0f);
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 84 (0x9a4ae0): plays animation 100 and stops moving on entry; once the
// animation is done the spawner is notified.
int Pickup::State84(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) NotifySpawner(true);
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(100, 0, 0, 1.0f);
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

}  // namespace SPTG
