// Small component methods: predicates, updaters, spawned instances and the steps classes run when
// they are enabled, disabled or updated. Class names are RTTI names where they are plain; fields and
// the other classes are working names, with offsets from the code.
//
// Copies of a position are written element by element through float arrays. Named fields of one
// struct would let the compiler merge the copies, and the original does not.
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
using onyx::ComponentHandle;
extern float GameDelta;
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

// A task that counts up to a limit and then fails; slot 6 runs it when it is due. AsyncTask has two
// instantiations with this body and StartLeaderboardTask a third.
template<unsigned Key> struct AsyncTask {
    virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5();
    virtual void Run();         // slot 6
    volatile int32_t state;     // +0x08
    uint32_t limit;             // +0x0c
    uint32_t elapsed;           // +0x10
    bool Tick(int32_t delta);
};
template<unsigned Key> bool AsyncTask<Key>::Tick(int32_t delta) {
    uint32_t value = elapsed + delta;
    elapsed = value;
    if (value > limit) state = 3;
    if (state == 2) {
        Run();
        return true;
    }
    return false;
}
template struct AsyncTask<0x7ebde0>;
template struct AsyncTask<0x7eca40>;
template struct AsyncTask<0x7fac60>;

// What a spawner hands out: each instance tells its spawner about the object it stands for. Six
// classes share this body: StrikerInstance, ProjectileInstance, PickupInstance,
// InteractiveObjectInstance, EnemyInstance and ControllableInstance.
template<unsigned Key, uint32_t SpawnerType, uint32_t ObjectType> struct SpawnedInstance {
    struct Spawner : onyx::Component {};
    struct Object : onyx::Component {};
    char padding_0[0x50];
    ComponentHandle* object;    // +0x50
    ComponentHandle* spawner;   // +0x58
    void Slot7();
    static void Register(Spawner* spawner, Object* object, int a);
};
template<unsigned Key, uint32_t SpawnerType, uint32_t ObjectType> void SpawnedInstance<Key, SpawnerType, ObjectType>::Slot7() {
    Spawner* s = onyx::Lookup<Spawner, SpawnerType>(spawner);
    Register(s, onyx::Lookup<Object, ObjectType>(object), 0);
}
template struct SpawnedInstance<0x94a640, 93740570u, 2102154688u>;
template struct SpawnedInstance<0x955ca0, 1133020893u, 938994834u>;
template struct SpawnedInstance<0x9a1a90, 1140153524u, 1387463615u>;
template struct SpawnedInstance<0x9bee20, 1806313218u, 100462108u>;
template struct SpawnedInstance<0x9c8850, 332952121u, 184502495u>;
template struct SpawnedInstance<0xa0e400, 1734408193u, 791409834u>;

// Spawners keep what slot 14 made only for the length of the call.
struct SpawnResult : onyx::Component {};
template<unsigned Key> struct ObjectSpawner {
    virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13();
    virtual void Make(void* source, SpawnResult** out);     // slot 14
    void Slot13(void* source);
};
struct OwnedResult {
    SpawnResult* value;
    __attribute__((always_inline)) ~OwnedResult() {
        SpawnResult* v = value;
        if (v) {
            onyx::Allocator* a = onyx::AllocatorFor(v);
            v->~SpawnResult();
            a->Free(v);
        }
    }
};
template<unsigned Key> void ObjectSpawner<Key>::Slot13(void* source) {
    OwnedResult result{nullptr};
    Make(source, &result.value);
}
template struct ObjectSpawner<0x9494e0>;
template struct ObjectSpawner<0x94a4c0>;
template struct ObjectSpawner<0x9548f0>;
template struct ObjectSpawner<0x9a0e00>;
template struct ObjectSpawner<0x9a1910>;
template struct ObjectSpawner<0x9be200>;
template struct ObjectSpawner<0x9c7740>;
template struct ObjectSpawner<0xa0b030>;

// SuperFightingRobotTorso and SuperFightingRobotShoulder recover energy unless they are in their
// resting state, up to a limit.
template<unsigned Key> struct RobotPart {
    typedef void (RobotPart::*State)();
    V10(A0) V10(A1) V10(A2) V10(A3) V10(A4) V10(A5) V10(A6) V10(A7) V10(A8) V10(A9)
    virtual void B0(); virtual void B1(); virtual void B2(); virtual void B3(); virtual void B4(); virtual void B5(); virtual void B6();
    virtual State RestPtr();    // slot 107
    V10(C0) V10(C1) V10(C2) V10(C3)
    virtual void D0();
    virtual float EnergyLimit();// slot 149
    virtual void E0(); virtual void E1(); virtual void E2(); virtual void E3();
    virtual void Refresh();     // slot 154
    char padding_8[0x208];
    State current;              // +0x210
    char padding_220[0x108];
    float energy;               // +0x328
    char padding_32c[0x1ec];
    float rate;                 // +0x518
    void Update();
    void BaseUpdate();
};
template<unsigned Key> void RobotPart<Key>::Update() {
    BaseUpdate();
    State rest = RestPtr();
    if (!(current == rest)) {
        energy += rate * GameDelta;
        float limit = EnergyLimit();
        if (energy > limit) energy = limit;
    }
    Refresh();
}
template struct RobotPart<0xa26a40>;
template struct RobotPart<0xa26c50>;

// Small component steps.
struct SwitchTarget : onyx::Component { char padding_8[0x70]; bool visible; };
struct SwitchSource : onyx::Component {
    virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    V10(A1)
    virtual bool Active();      // slot 20
    virtual void Set(int a);    // slot 21
};
struct MechanismObject {
    char padding_0[0x1f0];
    ComponentHandle* target;    // +0x1f0
    ComponentHandle* source;    // +0x1f8
    void Update();
    void BaseUpdate();
};
void MechanismObject::Update() {
    BaseUpdate();
    SwitchTarget* x = onyx::Peek<SwitchTarget>(target);
    SwitchSource* s = onyx::Peek<SwitchSource>(source);
    if (x && s && s->Active()) x->visible = false;
}
struct HudFiniteNumberCounter {
    char padding_0[0x50];
    ComponentHandle* number;    // +0x50
    ComponentHandle* label;     // +0x58
    void Slot7();
    void BaseSlot7();
};
void HudFiniteNumberCounter::Slot7() {
    BaseSlot7();
    SwitchTarget* x = onyx::Peek<SwitchTarget>(label);
    if (x) x->visible = false;
    SwitchSource* s = onyx::Peek<SwitchSource>(number);
    if (s) s->Set(0);
}
struct StaticObjectPart : onyx::Component {};
struct StaticObject {
    char padding_0[0x120];
    ComponentHandle* part;      // +0x120
    StaticObjectPart* Slot13();
};
StaticObjectPart* StaticObject::Slot13() { return onyx::Lookup<StaticObjectPart, 604602073u>(part); }

struct FlashColorMaterialEffect {
    char padding_0[8];
    uint64_t first;             // +0x08
    uint64_t second;            // +0x10
    bool done;                  // +0x18
    bool running;               // +0x19
    float elapsed;              // +0x1c
    float phase;                // +0x20
    char padding_24[4];
    uint64_t current;           // +0x28
    char padding_30[0x10];
    void* material;             // +0x40
    uint64_t color;             // +0x48
    char padding_50[8];
    bool hasFadeOut;            // +0x58
    bool hasFadeIn;             // +0x59
    char padding_5a[2];
    float fadeOut;              // +0x5c
    float fadeIn;               // +0x60
    void Start();
    static void Apply(uint64_t color, uint64_t first, uint64_t second);
};
void FlashColorMaterialEffect::Start() {
    void* m = material;
    done = false;
    if (!m || (hasFadeIn && fadeIn == 0.0f) || (hasFadeOut && fadeOut == 0.0f)) {
        done = true;
    } else {
        current = color;
        Apply(current, first, second);
        running = true;
        elapsed = 0.0f;
        phase = 0.0f;
    }
}

struct AnimaticChild { virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void Slot5(void* arg); };
struct AnimaticElementInstance {
    char padding_0[0x18];
    uint64_t count;             // +0x18
    char padding_20[8];
    AnimaticChild** children;   // +0x28
    void Slot5(void* arg);
};
void AnimaticElementInstance::Slot5(void* arg) {
    uint64_t n = count;
    if (n) {
        AnimaticChild** it = children;
        AnimaticChild** end = it + n;
        do {
            AnimaticChild* c = *it++;
            c->Slot5(arg);
        } while (it != end);
    }
}

}  // namespace SPTG

namespace Onyx {
using onyx::ComponentHandle;
struct RotateTarget : onyx::Component {};
void RotateBy(RotateTarget* t, float* rotation);
struct SelfRotate {
    char padding_0[0x38];
    uint32_t flags;             // +0x38
    char padding_3c[0x14];
    ComponentHandle* transform; // +0x50
    float rotation[3];          // +0x58
    void Slot3();
};
void SelfRotate::Slot3() {
    RotateTarget* t = onyx::Lookup<RotateTarget, 36693834u>(transform);
    RotateBy(t, rotation);
    flags &= ~2u;
}
struct OrienterTarget : onyx::Component { char padding_8[0x74]; float position[3]; };
struct RelativeToTargetOrienter {
    char padding_0[0x68];
    ComponentHandle* target;    // +0x68
    float position[3];          // +0x70
    void Slot2();
    void BaseSlot2();
};
void RelativeToTargetOrienter::Slot2() {
    BaseSlot2();
    OrienterTarget* t = onyx::Lookup<OrienterTarget, 36693834u>(target);
    position[0] = t->position[0];
    position[1] = t->position[1];
    position[2] = t->position[2];
}
}  // namespace Onyx

namespace Onyx {
using onyx::ComponentHandle;

// Predicates ask their children through slot 2.
struct Predicate { virtual void S0(); virtual void S1(); virtual bool Evaluate(); };
struct XorPredicate {
    void* vtable;
    Predicate* first;           // +0x08
    Predicate* second;          // +0x10
    bool Evaluate();
};
bool XorPredicate::Evaluate() {
    Predicate* b = second;
    bool a = first->Evaluate();
    return a != b->Evaluate();
}

// The clock: game time when a capture is running, the system tick otherwise.
long SystemTick(void* context);
extern long TickStart;
extern long TickFrequency;
struct RealTimeElapsedPredicate {
    void* vtable;
    uint32_t limit;             // +0x08
    bool Evaluate();
};
bool RealTimeElapsedPredicate::Evaluate() {
    uint32_t value = limit;
    return value <= static_cast<uint32_t>(1000 * (SystemTick(this) - TickStart) / TickFrequency);
}

struct RotateStartTarget : onyx::Component {};
void RotateStart(RotateStartTarget* t, float* rotation);
struct SelfRotateStart {
    char padding_0[0x38];
    uint32_t flags;             // +0x38
    char padding_3c[0x14];
    ComponentHandle* transform; // +0x50
    float rotation[3];          // +0x58
    void Slot2();
};
void SelfRotateStart::Slot2() {
    ComponentHandle*& h = transform;
    flags |= 2;
    RotateStart(onyx::Lookup<RotateStartTarget, 36693834u>(h), rotation);
}

extern void* SpawnRegistry;
void RegistryAdd(void* registry, uint32_t a, uint32_t b, void* c);
struct Spawner {
    char padding_0[0x38];
    uint32_t flags;             // +0x38
    char padding_3c[0xbc];
    uint32_t pool;              // +0xf8
    char padding_fc[0x14];
    uint32_t id;                // +0x110
    char padding_114[0xc];
    void* registered;           // +0x120
    uint32_t group;             // +0x128
    char padding_12c[5];
    bool autostart;             // +0x131
    void Slot2();
    void Start(uint32_t pool);
};
void Spawner::Slot2() {
    void* r = registered;
    flags |= 2;
    if (r) RegistryAdd(SpawnRegistry, id, group, r);
    if (autostart) Start(pool);
}

// Updaters walk the list they are handed and update what is enabled.
struct Updated {
    virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12();
    virtual void Update();      // slot 13
    char padding_8[0x30];
    uint8_t flags;              // +0x38
};
struct UpdatedList { char padding_0[0x10]; uint64_t count; char padding_18[8]; Updated** items; };
struct GraphicsUpdater { void Slot15(UpdatedList* list); };
void GraphicsUpdater::Slot15(UpdatedList* list) {
    uint64_t n = list->count;
    if (n) {
        Updated** it = list->items;
        Updated** end = it + n;
        do {
            if ((*it)->flags & 1) (*it)->Update();
            ++it;
        } while (it != end);
    }
}
struct Press { void Slot15(UpdatedList* list); };
void Press::Slot15(UpdatedList* list) {
    if (list->count) {
        Updated** it = list->items;
        do {
            if ((*it)->flags & 1) (*it)->Update();
            ++it;
        } while (it != list->items + list->count);
    }
}

// Shapes rebuild when dirty, then add themselves to the draw list with the blend their material says.
struct ShapeMaterial : onyx::Component { char padding_8[0xa0]; bool blended; };
int DrawListAdd(void* list, void* draw, int blend);
template<unsigned Key, unsigned DirtyOffset> struct DirtyShape {
    char padding_0[0x90];
    ComponentHandle* material;  // +0x90
    char draw[DirtyOffset - 0x98];
    bool dirty;
    int Slot21(void* list);
    void Rebuild();
};
template<unsigned Key, unsigned DirtyOffset> int DirtyShape<Key, DirtyOffset>::Slot21(void* list) {
    if (dirty) {
        Rebuild();
        dirty = false;
    }
    int blend = onyx::Get<ShapeMaterial, 996313107u>(material)->blended ? 2 : 1;
    return DrawListAdd(list, draw, blend);
}
template struct DirtyShape<0xb2f3e0, 276>;
template struct DirtyShape<0xb95880, 272>;

// Morph instances add each of their parts.
struct MorphPart { char padding_0[0x10]; ShapeMaterial* material; char padding_18[0x40]; };
struct MorphInstance {
    char padding_0[0x118];
    uint64_t count;             // +0x118
    MorphPart* parts;           // +0x120
    void Slot21(void* list);
};
void MorphInstance::Slot21(void* list) {
    uint64_t n = count;
    if (n) {
        MorphPart* it = parts;
        MorphPart* end = it + n;
        do {
            DrawListAdd(list, it, it->material->blended ? 2 : 1);
            ++it;
        } while (it != end);
    }
}

// Axis comparisons read a pair of axes from the pad.
struct AxisPair { float x, y; AxisPair(const AxisPair& o) : x(o.x), y(o.y) {} };
struct AxisSource { virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual AxisPair Axes(); };
struct AxisPairGreaterThanStateDescriptor {
    void* vtable;
    float x, y;                 // +0x08
    bool Slot3(AxisSource* source);
};
bool AxisPairGreaterThanStateDescriptor::Slot3(AxisSource* source) {
    float a = x;
    float b = y;
    AxisPair v = source->Axes();
    return (v.x > a) & (v.y > b);
}
struct AxisPairLessThanStateDescriptor {
    void* vtable;
    float x, y;                 // +0x08
    bool Slot3(AxisSource* source);
};
bool AxisPairLessThanStateDescriptor::Slot3(AxisSource* source) {
    float a = x;
    float b = y;
    AxisPair v = source->Axes();
    return (v.x < a) & (v.y < b);
}
struct AxisPairWithinEpsilon2DStateDescriptor {
    void* vtable;
    float x, y;                 // +0x08
    float ex, ey;               // +0x10
    bool Slot3(AxisSource* source);
};
bool AxisPairWithinEpsilon2DStateDescriptor::Slot3(AxisSource* source) {
    float a = x;
    float b = y;
    float e = ex;
    float f = ey;
    AxisPair v = source->Axes();
    return __builtin_fabsf(v.x - a) <= e && __builtin_fabsf(v.y - b) <= f;
}

// A particle emitter passes its position to each child and updates it.
struct EmitterChildUpdate : onyx::Component {
    virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9(); virtual void S10(); virtual void S11(); virtual void S12();
    virtual void Update();      // slot 13
    char padding_8[0x5c];
    float position[3];          // +0x64
};
struct EmitterGroup {
    char padding_0[0x64];
    float position[3];          // +0x64
    char padding_70[0x30];
    uint64_t count;             // +0xa0
    ComponentHandle** children; // +0xa8
    void Update();
};
void EmitterGroup::Update() {
    uint32_t n = static_cast<uint32_t>(count);
    if (n) {
        uint64_t i = 0;
        do {
            EmitterChildUpdate* c = onyx::Peek<EmitterChildUpdate>(children[i]);
            if (c) {
                c->position[0] = position[0];
                c->position[1] = position[1];
                c->position[2] = position[2];
                c->Update();
            }
            ++i;
        } while (i != n);
    }
}

}  // namespace Onyx

namespace SPTG {
struct JumpActor : onyx::Component {
    virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void A10(); virtual void A11(); virtual void A12(); virtual void A13(); virtual void A14(); virtual void A15(); virtual void A16(); virtual void A17(); virtual void A18(); virtual void A19();
    virtual void A20(); virtual void A21(); virtual void A22(); virtual void A23(); virtual void A24(); virtual void A25(); virtual void A26(); virtual void A27(); virtual void A28(); virtual void A29();
    virtual void A30(); virtual void A31(); virtual void A32(); virtual void A33(); virtual void A34(); virtual void A35(); virtual void A36(); virtual void A37(); virtual void A38(); virtual void A39();
    virtual void A40(); virtual void A41(); virtual void A42(); virtual void A43(); virtual void A44(); virtual void A45(); virtual void A46(); virtual void A47(); virtual void A48(); virtual void A49();
    virtual void A50(); virtual void A51(); virtual void A52(); virtual void A53(); virtual void A54(); virtual void A55();
    virtual void SetJumping(int on);    // slot 56
};
struct ActorJumpFromBehindAction {
    char padding_0[0xa0];
    onyx::ComponentHandle* actor;       // +0xa0
    void Slot15(void* arg);
    void BaseSlot15(void* arg);
};
void ActorJumpFromBehindAction::Slot15(void* arg) {
    static_cast<JumpActor*>(actor->object)->SetJumping(1);
    BaseSlot15(arg);
}
}  // namespace SPTG
