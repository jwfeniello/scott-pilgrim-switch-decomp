// Component factories whose inlined constructors copy guarded static values.
//
// The same shape as ComponentFactories.cpp, with members initialized from values such as
// Vector3::Zero(). Each static's guard is a block boundary, so the writes on either side of
// it keep their order. A copy reads and writes each member in turn, the form the original's
// load and store order shows; a copy through memcpy would load everything first.
//
// The names Zero, One and UnitZ come from the values the initializers store. ZeroOther is a
// second all-zero static whose owner is not known.
#include <stdint.h>
#include <stddef.h>
inline void* operator new(size_t, void* address) noexcept { return address; }
struct TypeAllocator { virtual void Slot0(); virtual void Slot1(); virtual void* Allocate(size_t size); };
extern "C" { extern void* GenericFactoryManager; TypeAllocator* GenericFactoryResolve(void*, uint32_t); }
extern unsigned char* AllocatorContext;
__attribute__((always_inline)) inline void* DefaultAllocator() { return AllocatorContext + 0x50; }
template<int N> struct Bits { uint8_t low : N; uint8_t rest : 8 - N; };
struct Vector3 {
    float x, y, z;
    Vector3() {}
    Vector3(float a, float b, float c) : x(a), y(b), z(c) {}
    Vector3(const Vector3& o) : x(o.x), y(o.y), z(o.z) {}
    __attribute__((always_inline)) void Set(const Vector3& o) { x = o.x; y = o.y; z = o.z; }
    static const Vector3& Zero() { static const Vector3 value(0.0f, 0.0f, 0.0f); return value; }
    static const Vector3& One() { static const Vector3 value(1.0f, 1.0f, 1.0f); return value; }
    static const Vector3& UnitZ() { static const Vector3 value(0.0f, 0.0f, 1.0f); return value; }
    static const Vector3& ZeroOther() { static const Vector3 value(0.0f, 0.0f, 0.0f); return value; }
};
struct Vector2 {
    float x, y;
    Vector2() {}
    Vector2(float a, float b) : x(a), y(b) {}
    Vector2(const Vector2& o) : x(o.x), y(o.y) {}
    __attribute__((always_inline)) void Set(const Vector2& o) { x = o.x; y = o.y; }
    static const Vector2& Zero() { static const Vector2 value(0.0f, 0.0f); return value; }
};
namespace Onyx { namespace Component { struct Base { Base(); virtual ~Base(); }; } }
namespace Onyx { struct ActionComponent { ActionComponent(); virtual ~ActionComponent(); }; }
struct Base_cdc240 { Base_cdc240(); virtual ~Base_cdc240(); };  // Onyx::Component::Compose<...>

// Onyx::DareAudio::RolloffGraphics : Onyx::Component::Compose<...> : Onyx::Graphics::Visual : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace DareAudio {
struct RolloffGraphicsLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint32_t field_60;
    Vector3 field_64;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    Bits<2> field_88;
    char padding_89[0x7];
    uint64_t field_90;
    uint8_t field_98;
    char padding_99[0x3];
    uint32_t field_9c;
    void* field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    char padding_c0[0x8];
    void* field_c8;
    uint64_t field_d0;
    uint64_t field_d8;
    uint64_t field_e0;
    char padding_e8[0x8];
    uint64_t field_f0;
    uint64_t field_f8;
    uint64_t field_100;
    uint64_t field_108;
    void* field_110;
    uint64_t field_118;
    uint64_t field_120;
    uint64_t field_128;
    char padding_130[0x8];
    __attribute__((always_inline)) RolloffGraphicsLayout() { field_50 = 0; field_58 = 0; field_60 = 0x7f7fffffu; field_64.Set(Vector3::One()); field_70 = 0; field_78 = 0; field_80 = 0; field_88.low = 0; }
    virtual ~RolloffGraphicsLayout();
};
struct RolloffGraphics : RolloffGraphicsLayout {
    __attribute__((always_inline)) RolloffGraphics() { field_90 = 0; field_98 = 0x1; field_9c = 0; field_a8 = 0; field_b0 = 0; field_b8 = 0; field_a0 = DefaultAllocator(); field_d0 = 0; field_d8 = 0; field_e0 = 0; field_c8 = DefaultAllocator(); field_f0 = 0; field_f8 = 0; field_100 = 0; field_108 = 0; field_118 = 0; field_120 = 0; field_128 = 0; field_110 = DefaultAllocator(); }
    virtual ~RolloffGraphics();
};
}  // namespace DareAudio
}  // namespace Onyx
void* Create_Onyx_DareAudio_RolloffGraphics() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(Onyx::DareAudio::RolloffGraphics))) Onyx::DareAudio::RolloffGraphics; }

// SPTG::PileOnMgr : Onyx::Component::Compose<...> : Onyx::Component::Base
extern "C" const char Symbol_186a5a0[];
namespace SPTG {
struct PileOnMgrLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    char padding_58[0x20];
    const void* field_78;
    int32_t field_80;
    uint32_t field_84;
    char padding_88[0x20];
    void* field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    uint64_t field_c0;
    char padding_c8[0x15];
    uint8_t field_dd;
    char padding_de[0x2];
    void* field_e0;
    uint64_t field_e8;
    uint64_t field_f0;
    uint64_t field_f8;
    char padding_100[0xc];
    uint8_t field_10c;
    char padding_10d[0x3];
    uint32_t field_110;
    char padding_114[0x4];
    uint64_t field_118;
    uint64_t field_120;
    uint64_t field_128;
    uint8_t field_130;
    char padding_131[0x7];
    void* field_138;
    uint64_t field_140;
    uint64_t field_148;
    char padding_150[0x8];
    uint64_t field_158;
    Vector3 field_160;
    uint32_t field_16c;
    uint32_t field_170;
    char padding_174[0x4];
    __attribute__((always_inline)) PileOnMgrLayout() {  }
    virtual ~PileOnMgrLayout();
};
struct PileOnMgr : PileOnMgrLayout {
    __attribute__((always_inline)) PileOnMgr() { field_50 = 0; field_78 = Symbol_186a5a0; field_80 = -1; field_84 = 0x43u; field_b0 = 0; field_b8 = 0; field_c0 = 0; field_a8 = DefaultAllocator(); field_dd = 0; field_e8 = 0; field_f0 = 0; field_f8 = 0; field_e0 = DefaultAllocator(); field_10c = 0x1; field_110 = 0; field_118 = 0; field_120 = 0; field_128 = 0; field_130 = 0; field_138 = DefaultAllocator(); field_140 = 0; field_148 = 0; field_158 = 0; field_160.Set(Vector3::Zero()); field_16c = 0x6u; field_170 = 0; }
    virtual ~PileOnMgr();
};
}  // namespace SPTG
void* Create_SPTG_PileOnMgr() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::PileOnMgr))) SPTG::PileOnMgr; }

// SPTG::ActorCircleNavigationAction : Onyx::Component::Compose<...> : SPTG::ActorActionComponent : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct ActorCircleNavigationActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    char padding_a8[0x8];
    uint64_t field_b0;
    char padding_b8[0x8];
    void* field_c0;
    uint64_t field_c8;
    uint64_t field_d0;
    char padding_d8[0x8];
    Vector3 field_e0;
    uint32_t field_ec;
    __attribute__((always_inline)) ActorCircleNavigationActionLayout() { field_a0 = 0; field_b0 = 0; }
    virtual ~ActorCircleNavigationActionLayout();
};
struct ActorCircleNavigationAction : ActorCircleNavigationActionLayout {
    __attribute__((always_inline)) ActorCircleNavigationAction() { field_c8 = 0; field_d0 = 0; field_c0 = DefaultAllocator(); field_e0.Set(Vector3::Zero()); field_ec = 0; }
    virtual ~ActorCircleNavigationAction();
};
}  // namespace SPTG
void* Create_SPTG_ActorCircleNavigationAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::ActorCircleNavigationAction))) SPTG::ActorCircleNavigationAction; }

// SPTG::ActorJumpAction : Onyx::Component::Compose<...> : SPTG::ActorActionComponent : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct ActorJumpActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    char padding_a8[0x14];
    Vector3 field_bc;
    Vector3 field_c8;
    char padding_d4[0xc];
    uint32_t field_e0;
    char padding_e4[0x4];
    __attribute__((always_inline)) ActorJumpActionLayout() { field_a0 = 0; }
    virtual ~ActorJumpActionLayout();
};
struct ActorJumpAction : ActorJumpActionLayout {
    __attribute__((always_inline)) ActorJumpAction() { field_bc.Set(Vector3::Zero()); field_c8.Set(Vector3::Zero()); field_e0 = 0; }
    virtual ~ActorJumpAction();
};
}  // namespace SPTG
void* Create_SPTG_ActorJumpAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::ActorJumpAction))) SPTG::ActorJumpAction; }

// SPTG::ActorMoveFromBehindAction : Onyx::Component::Compose<...> : SPTG::ActorActionComponent : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct ActorMoveFromBehindActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    char padding_a8[0x8];
    uint64_t field_b0;
    char padding_b8[0x18];
    Vector3 field_d0;
    uint32_t field_dc;
    __attribute__((always_inline)) ActorMoveFromBehindActionLayout() { field_a0 = 0; field_b0 = 0; }
    virtual ~ActorMoveFromBehindActionLayout();
};
struct ActorMoveFromBehindAction : ActorMoveFromBehindActionLayout {
    __attribute__((always_inline)) ActorMoveFromBehindAction() { field_d0.Set(Vector3::Zero()); field_dc = 0; }
    virtual ~ActorMoveFromBehindAction();
};
}  // namespace SPTG
void* Create_SPTG_ActorMoveFromBehindAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::ActorMoveFromBehindAction))) SPTG::ActorMoveFromBehindAction; }

// SPTG::PlayfieldCollision : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct PlayfieldCollisionLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    Vector3 field_58;
    char padding_64[0xc];
    void* field_70;
    uint64_t field_78;
    uint64_t field_80;
    uint64_t field_88;
    char padding_90[0x8];
    void* field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    char padding_b8[0x8];
    void* field_c0;
    uint64_t field_c8;
    uint64_t field_d0;
    uint64_t field_d8;
    char padding_e0[0x8];
    void* field_e8;
    uint64_t field_f0;
    uint64_t field_f8;
    uint64_t field_100;
    char padding_108[0x8];
    __attribute__((always_inline)) PlayfieldCollisionLayout() { field_50 = 0; }
    virtual ~PlayfieldCollisionLayout();
};
struct PlayfieldCollision : PlayfieldCollisionLayout {
    __attribute__((always_inline)) PlayfieldCollision() { field_58.Set(Vector3::ZeroOther()); field_78 = 0; field_80 = 0; field_88 = 0; field_70 = DefaultAllocator(); field_a0 = 0; field_a8 = 0; field_b0 = 0; field_98 = DefaultAllocator(); field_c8 = 0; field_d0 = 0; field_d8 = 0; field_c0 = DefaultAllocator(); field_f0 = 0; field_f8 = 0; field_100 = 0; field_e8 = DefaultAllocator(); }
    virtual ~PlayfieldCollision();
};
}  // namespace SPTG
void* Create_SPTG_PlayfieldCollision() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::PlayfieldCollision))) SPTG::PlayfieldCollision; }

// Onyx::Collision::CircleGraphics : Onyx::Component::Compose<...> : Onyx::Graphics::Visual : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Collision {
struct CircleGraphicsLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint32_t field_60;
    Vector3 field_64;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    Bits<2> field_88;
    char padding_89[0x7];
    uint64_t field_90;
    void* field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    char padding_b8[0x8];
    uint64_t field_c0;
    uint64_t field_c8;
    uint64_t field_d0;
    uint64_t field_d8;
    uint64_t field_e0;
    Vector3 field_e8;
    Vector3 field_f4;
    uint64_t field_100;
    __attribute__((always_inline)) CircleGraphicsLayout() { field_50 = 0; field_58 = 0; field_60 = 0x7f7fffffu; field_64.Set(Vector3::One()); field_70 = 0; field_78 = 0; field_80 = 0; field_88.low = 0; field_90 = 0; }
    virtual ~CircleGraphicsLayout();
};
struct CircleGraphics : CircleGraphicsLayout {
    __attribute__((always_inline)) CircleGraphics() { field_a0 = 0; field_a8 = 0; field_b0 = 0; field_98 = DefaultAllocator(); field_c0 = 0; field_c8 = 0; field_d0 = 0; field_d8 = 0; field_e0 = 0; field_e8.Set(Vector3::Zero()); field_f4.Set(Vector3::Zero()); field_100 = 0x1eff000000ull; }
    virtual ~CircleGraphics();
};
}  // namespace Collision
}  // namespace Onyx
void* Create_Onyx_Collision_CircleGraphics() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(Onyx::Collision::CircleGraphics))) Onyx::Collision::CircleGraphics; }

// Onyx::Collision::PolygonGraphics : Onyx::Component::Compose<...> : Onyx::Graphics::Visual : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Collision {
struct PolygonGraphicsLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint32_t field_60;
    Vector3 field_64;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    Bits<2> field_88;
    char padding_89[0x7];
    uint64_t field_90;
    void* field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    char padding_b8[0x8];
    uint64_t field_c0;
    uint64_t field_c8;
    uint64_t field_d0;
    uint64_t field_d8;
    uint64_t field_e0;
    Vector3 field_e8;
    Vector3 field_f4;
    uint32_t field_100;
    char padding_104[0x4];
    __attribute__((always_inline)) PolygonGraphicsLayout() { field_50 = 0; field_58 = 0; field_60 = 0x7f7fffffu; field_64.Set(Vector3::One()); field_70 = 0; field_78 = 0; field_80 = 0; field_88.low = 0; field_90 = 0; }
    virtual ~PolygonGraphicsLayout();
};
struct PolygonGraphics : PolygonGraphicsLayout {
    __attribute__((always_inline)) PolygonGraphics() { field_a0 = 0; field_a8 = 0; field_b0 = 0; field_98 = DefaultAllocator(); field_c0 = 0; field_c8 = 0; field_d0 = 0; field_d8 = 0; field_e0 = 0; field_e8.Set(Vector3::Zero()); field_f4.Set(Vector3::Zero()); field_100 = 0xff000000u; }
    virtual ~PolygonGraphics();
};
}  // namespace Collision
}  // namespace Onyx
void* Create_Onyx_Collision_PolygonGraphics() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(Onyx::Collision::PolygonGraphics))) Onyx::Collision::PolygonGraphics; }

// Onyx::Graphics::RawMeshGraphics : Onyx::Component::Compose<...> : Onyx::Graphics::Visual : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
struct RawMeshGraphicsLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint32_t field_60;
    Vector3 field_64;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    Bits<2> field_88;
    char padding_89[0x7];
    uint64_t field_90;
    void* field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    char padding_b8[0x8];
    uint64_t field_c0;
    uint64_t field_c8;
    uint64_t field_d0;
    uint64_t field_d8;
    uint64_t field_e0;
    __attribute__((always_inline)) RawMeshGraphicsLayout() { field_50 = 0; field_58 = 0; field_60 = 0x7f7fffffu; field_64.Set(Vector3::One()); field_70 = 0; field_78 = 0; field_80 = 0; field_88.low = 0; }
    virtual ~RawMeshGraphicsLayout();
};
struct RawMeshGraphics : RawMeshGraphicsLayout {
    __attribute__((always_inline)) RawMeshGraphics() { field_90 = 0; field_a0 = 0; field_a8 = 0; field_b0 = 0; field_98 = DefaultAllocator(); field_c0 = 0; field_c8 = 0; field_d0 = 0; field_d8 = 0; field_e0 = 0; }
    virtual ~RawMeshGraphics();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_RawMeshGraphics() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(Onyx::Graphics::RawMeshGraphics))) Onyx::Graphics::RawMeshGraphics; }

// Onyx::Graphics::Particle::EmitterBaseGraphics : Onyx::Component::Compose<...> : Onyx::Graphics::Visual : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
namespace Particle {
struct EmitterBaseGraphicsLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint32_t field_60;
    Vector3 field_64;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    Bits<2> field_88;
    char padding_89[0x7];
    __attribute__((always_inline)) EmitterBaseGraphicsLayout() { field_50 = 0; field_58 = 0; field_60 = 0x7f7fffffu; field_64.Set(Vector3::One()); field_70 = 0; field_78 = 0; field_80 = 0; field_88.low = 0; }
    virtual ~EmitterBaseGraphicsLayout();
};
struct EmitterBaseGraphics : EmitterBaseGraphicsLayout {
    __attribute__((always_inline)) EmitterBaseGraphics() {  }
    virtual ~EmitterBaseGraphics();
};
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_Particle_EmitterBaseGraphics() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(Onyx::Graphics::Particle::EmitterBaseGraphics))) Onyx::Graphics::Particle::EmitterBaseGraphics; }

// Onyx::Graphics::Particle::EmitterGroupGraphics : Onyx::Component::Compose<...> : Onyx::Graphics::Particle::EmitterBaseGraphics : Onyx::Component::Compose<...> : Onyx::Graphics::Visual : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
namespace Particle {
struct EmitterGroupGraphicsLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint32_t field_60;
    Vector3 field_64;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    Bits<2> field_88;
    char padding_89[0x7];
    void* field_90;
    uint64_t field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    char padding_b0[0x8];
    uint64_t field_b8;
    uint64_t field_c0;
    __attribute__((always_inline)) EmitterGroupGraphicsLayout() { field_50 = 0; field_58 = 0; field_60 = 0x7f7fffffu; field_64.Set(Vector3::One()); field_70 = 0; field_78 = 0; field_80 = 0; field_88.low = 0; field_98 = 0; field_a0 = 0; field_a8 = 0; field_90 = DefaultAllocator(); field_b8 = 0; field_c0 = 0; }
    virtual ~EmitterGroupGraphicsLayout();
};
struct EmitterGroupGraphics : EmitterGroupGraphicsLayout {
    __attribute__((always_inline)) EmitterGroupGraphics() {  }
    virtual ~EmitterGroupGraphics();
};
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_Particle_EmitterGroupGraphics() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(Onyx::Graphics::Particle::EmitterGroupGraphics))) Onyx::Graphics::Particle::EmitterGroupGraphics; }

// Onyx::Graphics::Particle::EmitterInstanceGraphics : Onyx::Component::Compose<...> : Onyx::Graphics::Visual : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
namespace Particle {
struct EmitterInstanceGraphicsLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint32_t field_60;
    Vector3 field_64;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    Bits<2> field_88;
    char padding_89[0x7];
    uint64_t field_90;
    uint64_t field_98;
    __attribute__((always_inline)) EmitterInstanceGraphicsLayout() { field_50 = 0; field_58 = 0; field_60 = 0x7f7fffffu; field_64.Set(Vector3::One()); field_70 = 0; field_78 = 0; field_80 = 0; field_88.low = 0; field_90 = 0; field_98 = 0; }
    virtual ~EmitterInstanceGraphicsLayout();
};
struct EmitterInstanceGraphics : EmitterInstanceGraphicsLayout {
    __attribute__((always_inline)) EmitterInstanceGraphics() {  }
    virtual ~EmitterInstanceGraphics();
};
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_Particle_EmitterInstanceGraphics() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(Onyx::Graphics::Particle::EmitterInstanceGraphics))) Onyx::Graphics::Particle::EmitterInstanceGraphics; }

// Onyx::Graphics::Particle::EmitterSequencerGraphics : Onyx::Component::Compose<...> : Onyx::Graphics::Particle::EmitterBaseGraphics : Onyx::Component::Compose<...> : Onyx::Graphics::Visual : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
namespace Particle {
struct EmitterSequencerGraphicsLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint32_t field_60;
    Vector3 field_64;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    Bits<2> field_88;
    char padding_89[0x7];
    void* field_90;
    uint64_t field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    char padding_b0[0x8];
    uint64_t field_b8;
    __attribute__((always_inline)) EmitterSequencerGraphicsLayout() { field_50 = 0; field_58 = 0; field_60 = 0x7f7fffffu; field_64.Set(Vector3::One()); field_70 = 0; field_78 = 0; field_80 = 0; field_88.low = 0; field_98 = 0; field_a0 = 0; field_a8 = 0; field_90 = DefaultAllocator(); }
    virtual ~EmitterSequencerGraphicsLayout();
};
struct EmitterSequencerGraphics : EmitterSequencerGraphicsLayout {
    __attribute__((always_inline)) EmitterSequencerGraphics() { field_b8 = 0; }
    virtual ~EmitterSequencerGraphics();
};
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_Particle_EmitterSequencerGraphics() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(Onyx::Graphics::Particle::EmitterSequencerGraphics))) Onyx::Graphics::Particle::EmitterSequencerGraphics; }

// Onyx::Graphics::Particle::EmitterSimpleGraphics : Onyx::Component::Compose<...> : Onyx::Graphics::Particle::EmitterBaseGraphics : Onyx::Component::Compose<...> : Onyx::Graphics::Visual : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
namespace Particle {
struct EmitterSimpleGraphicsLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint32_t field_60;
    Vector3 field_64;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    Bits<2> field_88;
    char padding_89[0x7];
    uint64_t field_90;
    uint64_t field_98;
    __attribute__((always_inline)) EmitterSimpleGraphicsLayout() { field_50 = 0; field_58 = 0; field_60 = 0x7f7fffffu; field_64.Set(Vector3::One()); field_70 = 0; field_78 = 0; field_80 = 0; field_88.low = 0; field_90 = 0; field_98 = 0; }
    virtual ~EmitterSimpleGraphicsLayout();
};
struct EmitterSimpleGraphics : EmitterSimpleGraphicsLayout {
    __attribute__((always_inline)) EmitterSimpleGraphics() {  }
    virtual ~EmitterSimpleGraphics();
};
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_Particle_EmitterSimpleGraphics() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(Onyx::Graphics::Particle::EmitterSimpleGraphics))) Onyx::Graphics::Particle::EmitterSimpleGraphics; }

// Onyx::Graphics::Particle::Emitter::EmitterGroup : Onyx::Component::Compose<...> : Onyx::Graphics::Particle::Emitter::EmitterBase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
namespace Particle {
namespace Emitter {
struct EmitterGroupLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    int32_t field_78;
    Vector3 field_7c;
    Vector3 field_88;
    char padding_94[0x4];
    __attribute__((always_inline)) EmitterGroupLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~EmitterGroupLayout();
};
struct EmitterGroup : EmitterGroupLayout {
    __attribute__((always_inline)) EmitterGroup() { field_78 = -1; field_7c.Set(Vector3::Zero()); field_88.Set(Vector3::Zero()); }
    virtual ~EmitterGroup();
};
}  // namespace Emitter
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_Particle_Emitter_EmitterGroup() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::Particle::Emitter::EmitterGroup))) Onyx::Graphics::Particle::Emitter::EmitterGroup; }

// Onyx::Graphics::Particle::GraphicSource::GraphicSourceMesh : Onyx::Component::Compose<...> : Onyx::Graphics::Particle::GraphicSource::GraphicSourceBase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
namespace Particle {
namespace GraphicSource {
struct GraphicSourceMeshLayout : ::Onyx::Component::Base {
    char padding_8[0x58];
    uint64_t field_60;
    uint32_t field_68;
    uint8_t field_6c;
    char padding_6d[0x3];
    uint32_t field_70;
    uint32_t field_74;
    uint64_t field_78;
    Vector3 field_80;
    Vector3 field_8c;
    __attribute__((always_inline)) GraphicSourceMeshLayout() { field_60 = 0; field_68 = 0; field_6c = 0; field_70 = 0x2u; field_74 = 0; }
    virtual ~GraphicSourceMeshLayout();
};
struct GraphicSourceMesh : GraphicSourceMeshLayout {
    __attribute__((always_inline)) GraphicSourceMesh() { field_78 = 0; field_80.Set(Vector3::Zero()); field_8c.Set(Vector3::Zero()); }
    virtual ~GraphicSourceMesh();
};
}  // namespace GraphicSource
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_Particle_GraphicSource_GraphicSourceMesh() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::Particle::GraphicSource::GraphicSourceMesh))) Onyx::Graphics::Particle::GraphicSource::GraphicSourceMesh; }

// Onyx::Graphics::Particle::GraphicSource::GraphicSourceTriangle : Onyx::Component::Compose<...> : Onyx::Graphics::Particle::GraphicSource::GraphicSourceBase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
namespace Particle {
namespace GraphicSource {
struct GraphicSourceTriangleLayout : ::Onyx::Component::Base {
    char padding_8[0x58];
    uint64_t field_60;
    uint32_t field_68;
    uint8_t field_6c;
    char padding_6d[0x3];
    uint32_t field_70;
    uint32_t field_74;
    uint64_t field_78;
    uint64_t field_80;
    uint32_t field_88;
    Vector3 field_8c;
    Vector3 field_98;
    char padding_a4[0x3c];
    __attribute__((always_inline)) GraphicSourceTriangleLayout() { field_60 = 0; field_68 = 0; field_6c = 0; field_70 = 0x2u; field_74 = 0; }
    virtual ~GraphicSourceTriangleLayout();
};
struct GraphicSourceTriangle : GraphicSourceTriangleLayout {
    __attribute__((always_inline)) GraphicSourceTriangle() { field_78 = 0; field_80 = 0; field_88 = 0; field_8c.Set(Vector3::Zero()); field_98.Set(Vector3::Zero()); }
    virtual ~GraphicSourceTriangle();
};
}  // namespace GraphicSource
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_Particle_GraphicSource_GraphicSourceTriangle() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::Particle::GraphicSource::GraphicSourceTriangle))) Onyx::Graphics::Particle::GraphicSource::GraphicSourceTriangle; }

// Onyx::SkinnedMeshComponent : Onyx::Component::Compose<...> : Onyx::Graphics::Visual : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct SkinnedMeshComponentLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint32_t field_60;
    Vector3 field_64;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    Bits<2> field_88;
    char padding_89[0x7];
    uint64_t field_90;
    uint64_t field_98;
    void* field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    char padding_c0[0x8];
    uint64_t field_c8;
    uint16_t field_d0;
    char padding_d2[0x6];
    __attribute__((always_inline)) SkinnedMeshComponentLayout() { field_50 = 0; field_58 = 0; field_60 = 0x7f7fffffu; field_64.Set(Vector3::One()); field_70 = 0; field_78 = 0; field_80 = 0; field_88.low = 0; }
    virtual ~SkinnedMeshComponentLayout();
};
struct SkinnedMeshComponent : SkinnedMeshComponentLayout {
    __attribute__((always_inline)) SkinnedMeshComponent() { field_90 = 0; field_98 = 0; field_a8 = 0; field_b0 = 0; field_b8 = 0; field_a0 = DefaultAllocator(); field_c8 = 0; field_d0 = 0x1; }
    virtual ~SkinnedMeshComponent();
};
}  // namespace Onyx
void* Create_Onyx_SkinnedMeshComponent() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(Onyx::SkinnedMeshComponent))) Onyx::SkinnedMeshComponent; }

// Onyx::Graphics::Visual : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
struct VisualLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint32_t field_60;
    Vector3 field_64;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    Bits<2> field_88;
    char padding_89[0x7];
    __attribute__((always_inline)) VisualLayout() {  }
    virtual ~VisualLayout();
};
struct Visual : VisualLayout {
    __attribute__((always_inline)) Visual() { field_50 = 0; field_58 = 0; field_60 = 0x7f7fffffu; field_64.Set(Vector3::One()); field_70 = 0; field_78 = 0; field_80 = 0; field_88.low = 0; }
    virtual ~Visual();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_Visual() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(Onyx::Graphics::Visual))) Onyx::Graphics::Visual; }

// Onyx::MoveAction : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct MoveActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    Vector3 field_a8;
    Vector3 field_b4;
    char padding_c0[0xc];
    Vector3 field_cc;
    uint64_t field_d8;
    char padding_e0[0x8];
    uint16_t field_e8;
    uint8_t field_ea;
    char padding_eb[0x5];
    __attribute__((always_inline)) MoveActionLayout() { field_a0 = 0; }
    virtual ~MoveActionLayout();
};
struct MoveAction : MoveActionLayout {
    __attribute__((always_inline)) MoveAction() { field_a8.Set(Vector3::Zero()); field_b4.Set(Vector3::Zero()); field_cc.Set(Vector3::Zero()); field_d8 = 0; field_e8 = 0; field_ea = 0x1; }
    virtual ~MoveAction();
};
}  // namespace Onyx
void* Create_Onyx_MoveAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::MoveAction))) Onyx::MoveAction; }

// Onyx::Target2DOrienter : Onyx::Component::Compose<...> : Onyx::VisualEffect : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct Target2DOrienterLayout : Base_cdc240 {
    char padding_8[0x80];
    uint64_t field_88;
    uint64_t field_90;
    Vector3 field_98;
    char padding_a4[0x4];
    __attribute__((always_inline)) Target2DOrienterLayout() {  }
    virtual ~Target2DOrienterLayout();
};
struct Target2DOrienter : Target2DOrienterLayout {
    __attribute__((always_inline)) Target2DOrienter() { field_88 = 0; field_90 = 0; field_98.Set(Vector3::Zero()); }
    virtual ~Target2DOrienter();
};
}  // namespace Onyx
void* Create_Onyx_Target2DOrienter() { return new (GenericFactoryResolve(GenericFactoryManager, 0x386d550du)->Allocate(sizeof(Onyx::Target2DOrienter))) Onyx::Target2DOrienter; }

// Onyx::CollisionRollingAligner : Onyx::Component::Compose<...> : Onyx::RollingAligner : Onyx::Component::Compose<...> : Onyx::Aligner : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...>
namespace Onyx {
struct CollisionRollingAlignerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    Vector3 field_60;
    uint32_t field_6c;
    uint64_t field_70;
    __attribute__((always_inline)) CollisionRollingAlignerLayout() { field_50 = 0; field_58 = 0; field_60.Set(Vector3::UnitZ()); field_6c = 0; field_70 = 0; }
    virtual ~CollisionRollingAlignerLayout();
};
struct CollisionRollingAligner : CollisionRollingAlignerLayout {
    __attribute__((always_inline)) CollisionRollingAligner() {  }
    virtual ~CollisionRollingAligner();
};
}  // namespace Onyx
void* Create_Onyx_CollisionRollingAligner() { return new (GenericFactoryResolve(GenericFactoryManager, 0x386d550du)->Allocate(sizeof(Onyx::CollisionRollingAligner))) Onyx::CollisionRollingAligner; }

// Onyx::RollingAligner : Onyx::Component::Compose<...> : Onyx::Aligner : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct RollingAlignerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    Vector3 field_60;
    uint32_t field_6c;
    __attribute__((always_inline)) RollingAlignerLayout() {  }
    virtual ~RollingAlignerLayout();
};
struct RollingAligner : RollingAlignerLayout {
    __attribute__((always_inline)) RollingAligner() { field_50 = 0; field_58 = 0; field_60.Set(Vector3::UnitZ()); field_6c = 0; }
    virtual ~RollingAligner();
};
}  // namespace Onyx
void* Create_Onyx_RollingAligner() { return new (GenericFactoryResolve(GenericFactoryManager, 0x386d550du)->Allocate(sizeof(Onyx::RollingAligner))) Onyx::RollingAligner; }

// Onyx::WanderBehavior : Onyx::Component::Compose<...> : Onyx::SeekBehavior : Onyx::Component::Compose<...> : Onyx::SteeringBehavior : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...>
namespace Onyx {
struct WanderBehaviorLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    float field_68;
    char padding_6c[0x4];
    uint64_t field_70;
    uint64_t field_78;
    uint32_t field_80;
    char padding_84[0x4];
    uint64_t field_88;
    uint32_t field_90;
    Vector3 field_94;
    __attribute__((always_inline)) WanderBehaviorLayout() { field_50 = 0; field_58 = 0; field_60 = 0; field_68 = 1.0f; field_70 = 0; field_78 = 0; field_80 = 0; }
    virtual ~WanderBehaviorLayout();
};
struct WanderBehavior : WanderBehaviorLayout {
    __attribute__((always_inline)) WanderBehavior() { field_88 = 0; field_90 = 0; field_94.Set(Vector3::Zero()); }
    virtual ~WanderBehavior();
};
}  // namespace Onyx
void* Create_Onyx_WanderBehavior() { return new (GenericFactoryResolve(GenericFactoryManager, 0x386d550du)->Allocate(sizeof(Onyx::WanderBehavior))) Onyx::WanderBehavior; }

// Onyx::BarChartComponent : Onyx::Component::Compose<...> : Onyx::Graphics::Visual : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct BarChartComponentLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint32_t field_60;
    Vector3 field_64;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    Bits<2> field_88;
    char padding_89[0x3];
    float field_8c;
    float field_90;
    uint32_t field_94;
    uint64_t field_98;
    void* field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    char padding_b8[0x8];
    uint64_t field_c0;
    Vector3 field_c8;
    Vector3 field_d4;
    __attribute__((always_inline)) BarChartComponentLayout() { field_50 = 0; field_58 = 0; field_60 = 0x7f7fffffu; field_64.Set(Vector3::One()); field_70 = 0; field_78 = 0; field_80 = 0; field_88.low = 0; }
    virtual ~BarChartComponentLayout();
};
struct BarChartComponent : BarChartComponentLayout {
    __attribute__((always_inline)) BarChartComponent() { field_8c = 100.0f; field_90 = 10.0f; field_94 = 0; field_98 = 0; field_a8 = 0; field_b0 = 0; field_c0 = 0; field_a0 = DefaultAllocator(); field_c8.Set(Vector3::Zero()); field_d4.Set(Vector3::Zero()); }
    virtual ~BarChartComponent();
};
}  // namespace Onyx
void* Create_Onyx_BarChartComponent() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(Onyx::BarChartComponent))) Onyx::BarChartComponent; }

// Onyx::Graphics::SkinnedMeshInstanceLevelOfDetail : Onyx::Component::Compose<...> : Onyx::SkinnedMeshComponent : Onyx::Component::Compose<...> : Onyx::Graphics::Visual : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
struct SkinnedMeshInstanceLevelOfDetailLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint32_t field_60;
    Vector3 field_64;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    Bits<2> field_88;
    char padding_89[0x7];
    uint64_t field_90;
    uint64_t field_98;
    void* field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    char padding_c0[0x8];
    uint64_t field_c8;
    uint16_t field_d0;
    char padding_d2[0x6];
    uint64_t field_d8;
    __attribute__((always_inline)) SkinnedMeshInstanceLevelOfDetailLayout() { field_50 = 0; field_58 = 0; field_60 = 0x7f7fffffu; field_64.Set(Vector3::One()); field_70 = 0; field_78 = 0; field_80 = 0; field_88.low = 0; field_90 = 0; field_98 = 0; field_a8 = 0; field_b0 = 0; field_b8 = 0; field_a0 = DefaultAllocator(); field_c8 = 0; field_d0 = 0x1; field_d8 = 0; }
    virtual ~SkinnedMeshInstanceLevelOfDetailLayout();
};
struct SkinnedMeshInstanceLevelOfDetail : SkinnedMeshInstanceLevelOfDetailLayout {
    __attribute__((always_inline)) SkinnedMeshInstanceLevelOfDetail() {  }
    virtual ~SkinnedMeshInstanceLevelOfDetail();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_SkinnedMeshInstanceLevelOfDetail() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(Onyx::Graphics::SkinnedMeshInstanceLevelOfDetail))) Onyx::Graphics::SkinnedMeshInstanceLevelOfDetail; }

// Onyx::SkyBoxComponent
extern "C" const char Symbol_18c13c8[];
namespace Onyx {
struct SkyBoxComponentLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint32_t field_60;
    Vector3 field_64;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    Bits<2> field_88;
    char padding_89[0x7];
    uint64_t field_90;
    uint64_t field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    char padding_c0[0x8];
    const void* field_c8;
    uint64_t field_d0;
    uint64_t field_d8;
    uint64_t field_e0;
    uint32_t field_e8;
    float field_ec;
    uint64_t field_f0;
    uint32_t field_f8;
    char padding_fc[0x4];
    const void* field_100;
    uint64_t field_108;
    uint64_t field_110;
    uint64_t field_118;
    uint32_t field_120;
    float field_124;
    uint64_t field_128;
    uint32_t field_130;
    char padding_134[0x4];
    const void* field_138;
    uint64_t field_140;
    uint64_t field_148;
    uint64_t field_150;
    uint32_t field_158;
    float field_15c;
    uint64_t field_160;
    uint32_t field_168;
    char padding_16c[0x4];
    const void* field_170;
    uint64_t field_178;
    uint64_t field_180;
    uint64_t field_188;
    uint32_t field_190;
    float field_194;
    uint64_t field_198;
    uint32_t field_1a0;
    char padding_1a4[0x4];
    const void* field_1a8;
    uint64_t field_1b0;
    uint64_t field_1b8;
    uint64_t field_1c0;
    uint32_t field_1c8;
    float field_1cc;
    uint64_t field_1d0;
    uint32_t field_1d8;
    char padding_1dc[0x4];
    const void* field_1e0;
    uint64_t field_1e8;
    uint64_t field_1f0;
    uint64_t field_1f8;
    uint32_t field_200;
    float field_204;
    uint64_t field_208;
    uint32_t field_210;
    char padding_214[0x4];
    __attribute__((always_inline)) SkyBoxComponentLayout() { field_50 = 0; field_58 = 0; field_60 = 0x7f7fffffu; field_64.Set(Vector3::One()); field_78 = 0; field_80 = 0; field_88.low = 0; }
    virtual ~SkyBoxComponentLayout();
};
struct SkyBoxComponent : SkyBoxComponentLayout {
    __attribute__((always_inline)) SkyBoxComponent() { field_90 = 0; field_98 = 0; field_a0 = 0; field_a8 = 0; field_b0 = 0; field_b8 = 0; field_c8 = Symbol_18c13c8; field_d0 = 0; field_d8 = 0; field_e0 = 0; field_e8 = 0; field_ec = -1.0f; field_f0 = 0; field_f8 = 0x6u; field_100 = Symbol_18c13c8; field_108 = 0; field_110 = 0; field_118 = 0; field_120 = 0; field_124 = -1.0f; field_128 = 0; field_130 = 0x6u; field_138 = Symbol_18c13c8; field_140 = 0; field_148 = 0; field_150 = 0; field_158 = 0; field_15c = -1.0f; field_160 = 0; field_168 = 0x6u; field_170 = Symbol_18c13c8; field_178 = 0; field_180 = 0; field_188 = 0; field_190 = 0; field_194 = -1.0f; field_198 = 0; field_1a0 = 0x6u; field_1a8 = Symbol_18c13c8; field_1b0 = 0; field_1b8 = 0; field_1c0 = 0; field_1c8 = 0; field_1cc = -1.0f; field_1d0 = 0; field_1d8 = 0x6u; field_1e0 = Symbol_18c13c8; field_1e8 = 0; field_1f0 = 0; field_1f8 = 0; field_200 = 0; field_204 = -1.0f; field_208 = 0; field_210 = 0x6u; field_70 = 0; }
    virtual ~SkyBoxComponent();
};
}  // namespace Onyx
void* Create_Onyx_SkyBoxComponent() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(Onyx::SkyBoxComponent))) Onyx::SkyBoxComponent; }

// Onyx::TranslationFilter : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct TranslationFilterLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint8_t field_60;
    uint8_t field_61;
    uint8_t field_62;
    char padding_63[0x1];
    Vector3 field_64;
    float field_70;
    char padding_74[0x4];
    __attribute__((always_inline)) TranslationFilterLayout() {  }
    virtual ~TranslationFilterLayout();
};
struct TranslationFilter : TranslationFilterLayout {
    __attribute__((always_inline)) TranslationFilter() { field_50 = 0; field_58 = 0; field_60 = 0x1; field_61 = 0x1; field_62 = 0x1; field_64.Set(Vector3::Zero()); field_70 = 1.0f; }
    virtual ~TranslationFilter();
};
}  // namespace Onyx
void* Create_Onyx_TranslationFilter() { return new (GenericFactoryResolve(GenericFactoryManager, 0x386d550du)->Allocate(sizeof(Onyx::TranslationFilter))) Onyx::TranslationFilter; }

