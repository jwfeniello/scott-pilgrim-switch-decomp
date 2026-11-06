// Onyx::Graphics::Particle: particle effects, emitters and volumes. Class names are the RTTI names; field and method
// names are provisional, offsets come from the code that uses them.
#pragma once
#include "OnyxComponents.h"
#include "Random.h"

namespace Gear {

// Gear::Vector3<T>, the engine's vector (Onyx names it in BaseValuePublisherCircuit<Gear::Vector3<float>>). The
// components are an array here: the particle code's loads and stores alias any float, as array elements do and named
// members don't, and its copies go element by element.
template<class T> struct Vector3 {
    T v[3];
    Vector3() {}
    Vector3(T x, T y, T z) { v[0] = x; v[1] = y; v[2] = z; }
    Vector3(const Vector3& o) { v[0] = o.v[0]; v[1] = o.v[1]; v[2] = o.v[2]; }
    // From the SPTG reconstruction of the same type (OnyxComponents.h), whose Zero() static the particle code shares.
    explicit Vector3(const onyx::Vector3& o) { v[0] = o.x; v[1] = o.y; v[2] = o.z; }
    Vector3& operator=(const Vector3& o) { v[0] = o.v[0]; v[1] = o.v[1]; v[2] = o.v[2]; return *this; }
    Vector3 operator*(T s) const { return Vector3(v[0] * s, v[1] * s, v[2] * s); }
};

}  // namespace Gear

namespace Onyx {
namespace Graphics {
namespace Particle {

typedef Gear::Vector3<float> Vec3;

// A value between min and max from the game's generator (Random.h; the engine shares it).
__attribute__((always_inline)) inline float RandomBetween(float min, float max) {
    return min + (max - min) * SPTG::RandomFloat();
}

// One live particle, as the effects step it.
struct ParticleData {
    Vec3 position;               // +0x0
    Vec3 velocity;               // +0xc: added to the position by EffectTransform
    char padding_18[0xc];
    Vec3 spin;                   // +0x24: EffectRotate turns the particle by this, scaled over the effect
    char padding_30[0xc];
    Vec3 rotation;               // +0x3c
    char padding_48[0x28];
    float age;                   // +0x70: time since the effect started on it
};

// A list of component references: Archive.h's ReferenceList (0x28 bytes, restored by 0x682f80), read here by its
// count and entries. Groups and sequencers keep their emitters or effects in one.
struct ComponentRef {
    onyx::ComponentHandle* handle;
    // 0x67f5f0, which drops the reference (credited elsewhere as SingleRelease::ReleaseSet1<6813168>'s destructor).
    ~ComponentRef();
};
struct ComponentList {
    void* allocator;
    uint64_t capacity;
    uint64_t count;                   // +0x10
    ComponentRef* items;              // +0x18
    void* reserved;                   // +0x20
    // Drops every reference and empties the list.
    __attribute__((always_inline)) void Clear() {
        if (items && count) {
            for (uint64_t i = 0; i < count; ++i) items[i].~ComponentRef();
        }
        count = 0;
    }
};

// The particles an emitter hands its volume and effects (a list with the count at +0x10 and the entries at +0x20).
struct ParticleList {
    void* allocator;
    uint64_t capacity;
    uint64_t count;              // +0x10
    void* reserved;
    ParticleData** items;        // +0x20
};

namespace Volume {

// Where particles start. Slot 13 places a list of new particles in the volume.
struct VolumeBase : onyx::Component {
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11(); virtual void Slot12();
    virtual void Place(ParticleList* particles);                // slot 13
    virtual void Slot14();

    char padding_8[0x44];
    int32_t value4c;             // +0x4c
};
// Starts every particle at one point.
struct VolumePoint : VolumeBase {
    void Place(ParticleList* particles) override;               // slot 13 (0xb117a0)
    Vec3 point;                  // +0x50
};
struct VolumeCircle : VolumeBase {
    float radius;                // +0x50
};
struct VolumeBox : VolumeBase {
    Vec3 min;                    // +0x50
    Vec3 max;                    // +0x5c
};

}  // namespace Volume

// What a particle graphics component reports as its extent (slot 15): half sizes and the centre. Half sizes of
// -FLT_MAX mean it has none.
struct VolumeExtent {
    Vec3 halfSize;
    Vec3 center;
    __attribute__((always_inline)) VolumeExtent() : halfSize(onyx::Vector3::Zero()), center(onyx::Vector3::Zero()) {}
    // Grows the extent to take in another: the box from the smaller corner to the larger one.
    __attribute__((always_inline)) void Add(const VolumeExtent& other) {
        Vec3 min(center.v[0] - halfSize.v[0], center.v[1] - halfSize.v[1], center.v[2] - halfSize.v[2]);
        Vec3 otherMin(other.center.v[0] - other.halfSize.v[0], other.center.v[1] - other.halfSize.v[1],
                      other.center.v[2] - other.halfSize.v[2]);
        Vec3 max(center.v[0] + halfSize.v[0], center.v[1] + halfSize.v[1], center.v[2] + halfSize.v[2]);
        Vec3 otherMax(other.center.v[0] + other.halfSize.v[0], other.center.v[1] + other.halfSize.v[1],
                      other.center.v[2] + other.halfSize.v[2]);
        Vec3 low(min.v[0] < otherMin.v[0] ? min.v[0] : otherMin.v[0], min.v[1] < otherMin.v[1] ? min.v[1] : otherMin.v[1],
                 min.v[2] < otherMin.v[2] ? min.v[2] : otherMin.v[2]);
        Vec3 high(max.v[0] > otherMax.v[0] ? max.v[0] : otherMax.v[0], max.v[1] > otherMax.v[1] ? max.v[1] : otherMax.v[1],
                  max.v[2] > otherMax.v[2] ? max.v[2] : otherMax.v[2]);
        halfSize = Vec3((high.v[0] - low.v[0]) * 0.5f, (high.v[1] - low.v[1]) * 0.5f, (high.v[2] - low.v[2]) * 0.5f);
        center = Vec3(low.v[0] + halfSize.v[0], low.v[1] + halfSize.v[1], low.v[2] + halfSize.v[2]);
    }
    __attribute__((always_inline)) void Clear() {
        halfSize = Vec3(-3.4028234663852886e+38f, -3.4028234663852886e+38f, -3.4028234663852886e+38f);
        center = Vec3(0.0f, 0.0f, 0.0f);
    }
};

// The particle graphics components (the editor's view of emitters and volumes; Onyx::Graphics::ShapeComponent
// and its bases, slots 0-14 unnamed here).
struct ParticleGraphics : onyx::Component {
    virtual void Disable(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11(); virtual void Slot12();
    virtual void Slot13();
    virtual void Slot14(void* value);                            // slot 14
    virtual void GetExtent(VolumeExtent* out);                   // slot 15
    virtual void Slot16(); virtual void Slot17(); virtual void Slot18(); virtual void Slot19();
    virtual void Draw(void* list);                               // slot 20 (DrawnGraphics' Slot20 in other classes)
    virtual void Slot21(void* value);                            // slot 21
    char padding_8[0x30];
    uint32_t componentFlags;     // +0x38: bit 1 while enabled
};
// The graphics a list entry holds, if any.
__attribute__((always_inline)) inline ParticleGraphics* GraphicsIn(const ComponentRef& ref) {
    return ref.handle && ref.handle->object ? static_cast<ParticleGraphics*>(ref.handle->object) : nullptr;
}
// Shows a volume (the handle at +0x108).
struct VolumeBaseGraphics : ParticleGraphics {
    void GetExtent(VolumeExtent* out) override;                 // slot 15 (0xb2be10)
    char padding_3c[0xcc];
    onyx::ComponentHandle* volume;   // +0x108
};
struct VolumeLineGraphics : VolumeBaseGraphics {
    void GetExtent(VolumeExtent* out) override;                 // slot 15 (0xb2e600)
};
struct VolumeCircleGraphics : VolumeBaseGraphics {
    void GetExtent(VolumeExtent* out) override;                 // slot 15 (0xb2f220)
};
struct VolumeBoxGraphics : VolumeBaseGraphics {
    void GetExtent(VolumeExtent* out) override;                 // slot 15 (0xb30490)
};
// Show a group's or sequencer's emitters: slot 20 goes on to each child's graphics (the list at +0x90) as slot 20,
// and slot 21 as their slot 14.
struct EmitterSequencerGraphics : ParticleGraphics {
    void Disable() override;                                     // slot 3 (0xb361f0)
    void GetExtent(VolumeExtent* out) override;                  // slot 15 (0xb363b0): all its children's
    void Draw(void* list) override;                              // slot 20 (0xb36550)
    void Slot21(void* value) override;                           // slot 21 (0xb365c0)
    char padding_3c[0x54];
    ComponentList children;      // +0x90
};
struct EmitterGroupGraphics : ParticleGraphics {
    void Disable() override;                                     // slot 3 (0xb388e0)
    void GetExtent(VolumeExtent* out) override;                  // slot 15 (0xb38ab0): all its children's
    void Draw(void* list) override;                              // slot 20 (0xb38c50)
    void Slot21(void* value) override;                           // slot 21 (0xb38cc0)
    char padding_3c[0x54];
    ComponentList children;      // +0x90
};
// Shows an emitter; its extent is that of the graphics at +0x90 (the volume's), if there are any.
struct EmitterSimpleGraphics : ParticleGraphics {
    void GetExtent(VolumeExtent* out) override;                 // slot 15 (0xb30ed0)
    char padding_3c[0x54];
    onyx::ComponentHandle* volumeGraphics;   // +0x90
};

namespace Emitter {


// The base of every emitter (vtable 0x18a5ab0). Slot 13 runs it for a frame, 14 restarts it and 15 says whether it
// has finished.
struct EmitterBase : onyx::Component {
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11(); virtual void Slot12();
    virtual void Update(void* context);          // slot 13
    virtual void Restart();                      // slot 14
    virtual bool Finished();                     // slot 15
    virtual void Slot16(void* value);            // slot 16
    virtual void Slot17();
    virtual void Slot18(bool flag);              // slot 18
};
// The emitter a list entry holds, if any.
__attribute__((always_inline)) inline EmitterBase* EmitterIn(const ComponentRef& ref) {
    return ref.handle && ref.handle->object ? static_cast<EmitterBase*>(ref.handle->object) : nullptr;
}
// Runs its emitters together, passing each call on to all of them.
struct EmitterGroup : EmitterBase {
    void Restart() override;                     // slot 14 (0xb1fa60)
    bool Finished() override;                    // slot 15 (0xb1fac0): when every emitter has
    void Slot16(void* value) override;           // slot 16 (0xb1fb40)
    void Slot18(bool flag) override;             // slot 18 (0xb1fbc0)
    char padding_8[0x48];
    ComponentList emitters;                        // +0x50
};
// Runs its emitters one after another, from the start again if it loops.
struct EmitterSequencer : EmitterBase {
    void Update(void* context) override;         // slot 13 (0xb1d350)
    void Restart() override;                     // slot 14 (0xb1d490)
    char padding_8[0x38];
    onyx::ComponentHandle* listener;             // +0x40: told when the running emitter changes
    char padding_48[0x8];
    ComponentList emitters;                        // +0x50
    int32_t current;                             // +0x78: the running emitter, or -1 before the first
    bool loops;                                  // +0x7c
};

}  // namespace Emitter

namespace Effect {

// The base of every effect component (vtable 0x18a6898, 0x58 bytes). Slot 13 starts a particle, slot 14 steps it
// and says whether the effect has run its course.
struct EffectBase : onyx::Component {
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11(); virtual void Slot12();
    virtual void Start(ParticleData* particle);                 // slot 13
    virtual bool Step(ParticleData* particle, float time);      // slot 14
    virtual void Reset();                                       // slot 15
    virtual void Tick(float time);                              // slot 16
    virtual void Slot17(void* value);                           // slot 17

    char padding_8[0x30];
    uint32_t componentFlags;     // +0x38: bit 1 once ready
    char padding_3c[0x10];
    float duration;              // +0x4c: 1 by default
    float startSpread;           // +0x50: a particle starts at a random age below this
    int32_t stamp;               // +0x54: a group passes calls on to an effect only when the effect's stamp differs

    // Starts the particle at a random age below startSpread (the base's slot 13, which some effects repeat).
    __attribute__((always_inline)) void StartAge(ParticleData* particle) {
        particle->age = RandomBetween(0.0f, startSpread);
    }
    // Whether the particle is past the effect's end, to within 2e-6.
    __attribute__((always_inline)) bool Over(const ParticleData* particle) const {
        return particle->age > duration || __builtin_fabsf(particle->age - duration) <= 2e-6f;
    }
};

struct EffectDelay : EffectBase {
    void Start(ParticleData* particle) override;                // slot 13 (0xb29240)
    bool Step(ParticleData* particle, float time) override;     // slot 14 (0xb29360)
};
struct EffectPredicate : EffectBase {
    void Start(ParticleData* particle) override;                // slot 13 (0xb26d40)
};
// Runs a list of effects together; its duration is the longest of theirs.
struct EffectGroup : EffectBase {
    void Reset() override;                                      // slot 15 (0xb281f0)
    void Tick(float time) override;                             // slot 16 (0xb282b0)
    void Slot17(void* value) override;                          // slot 17 (0xb28350)
    ComponentList effects;       // +0x58
    bool flag80;                 // +0x80
    bool flag81;                 // +0x81
    float time;                  // +0x84
};
// The effect a list entry holds, if any.
__attribute__((always_inline)) inline EffectBase* EffectIn(const ComponentRef& ref) {
    return ref.handle && ref.handle->object ? static_cast<EffectBase*>(ref.handle->object) : nullptr;
}
struct EffectSpawner : EffectBase {
    bool Step(ParticleData* particle, float time) override;     // slot 14 (0xb22f20)
};
// Weighs the particle down: slot 2 works out the force (gravity times mass) and the inverse mass.
struct EffectPhysic : EffectBase {
    void EnsureReady() override;                                // slot 2 (0xb271a0)
    char padding_58[0x34];
    float mass;                  // +0x8c
    Vec3 gravity;                // +0x90
    float inverseMass;           // +0x9c
    Vec3 force;                  // +0xa0
};
// Steps through the cells of a texture sheet: slot 2 sets the texture transform to one cell's size.
struct EffectTextureStep : EffectBase {
    void EnsureReady() override;                                // slot 2 (0xb214f0)
    char padding_58[0x2];
    uint8_t columns;             // +0x5a
    uint8_t rows;                // +0x5b
    char padding_5c[0x44];
    Vec3 transform[4];           // +0xa0: a 4x3 matrix, scaled by the cell
};
// Moves the particle by its velocity.
struct EffectTransform : EffectBase {
    bool Step(ParticleData* particle, float time) override;     // slot 14 (0xb213a0)
};
struct EffectAngle : EffectBase {
    bool Step(ParticleData* particle, float time) override;     // slot 14 (0xb2b2e0)
};
// Turns the particle by its spin, which grows by +0x74 times the spin over the effect.
struct EffectRotate : EffectBase {
    bool Step(ParticleData* particle, float time) override;     // slot 14 (0xb25de0)
    char padding_58[0x1c];
    Vec3 spinGain;               // +0x74
};

}  // namespace Effect
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
