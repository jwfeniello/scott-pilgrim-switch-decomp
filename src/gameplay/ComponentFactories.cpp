// Component factories with inlined constructors.
//
// Each function allocates a component through its type's allocator and constructs it in
// place, with the constructor inlined. RTTI gives the class and its parent chain (the
// comment above each class). The fields are named by offset and come from the
// constructor's writes; which class in the chain owns each field is not established, so
// they all sit on one Layout view.
//
// The order of the writes is evidence for the class structure. A parent's constructor
// runs before the class's vtable is set, so its fields are written first, in the Layout's
// constructor. The class's own constructor runs after that.
//
// A vector member writes its three zero fields before its allocator. A list member does
// the same around its self-linked head.
#include <stdint.h>
#include <stddef.h>
inline void* operator new(size_t, void* address) noexcept { return address; }
struct TypeAllocator { virtual void Slot0(); virtual void Slot1(); virtual void* Allocate(size_t size); };
extern "C" { extern void* GenericFactoryManager; TypeAllocator* GenericFactoryResolve(void*, uint32_t); }
extern unsigned char* AllocatorContext;
__attribute__((always_inline)) inline void* DefaultAllocator() { return AllocatorContext + 0x50; }

namespace Onyx { namespace Component { struct Base { Base(); virtual ~Base(); }; } }
struct Base_6a48c0 { Base_6a48c0(); virtual ~Base_6a48c0(); };  // Onyx::Component::Compose<...>
namespace Onyx { namespace Fire { struct FireVisual { FireVisual(); virtual ~FireVisual(); }; } }
// As in ComponentFactoriesStatic.cpp: the zero's static is 8-aligned (see onyx::Vector2::Zero()).
struct Vector2 {
    float x, y;
    Vector2() {}
    Vector2(float a, float b) : x(a), y(b) {}
    Vector2(const Vector2& o) : x(o.x), y(o.y) {}
    __attribute__((always_inline)) void Set(const Vector2& o) { x = o.x; y = o.y; }
    static const Vector2& Zero() { alignas(8) static const Vector2 value(0.0f, 0.0f); return value; }
};
namespace SPTG { struct FillLineListShape { FillLineListShape(); virtual ~FillLineListShape(); }; }
namespace SPTG { struct Striker { Striker(); virtual ~Striker(); }; }
struct Base_95d1d0 { Base_95d1d0(); virtual ~Base_95d1d0(); };  // Onyx::Component::Compose<...>
struct Base_b4c840 { Base_b4c840(); virtual ~Base_b4c840(); };  // Onyx::Component::Compose<...>
namespace Onyx { struct ActionComponent { ActionComponent(); virtual ~ActionComponent(); }; }
struct Base_93b180 { Base_93b180(); virtual ~Base_93b180(); };
// The allocator in the context's slot at +0x558, which plain objects come from; DefaultAllocator() is the same
// context's +0x50.
__attribute__((always_inline)) inline TypeAllocator* DirectAllocator() { return *reinterpret_cast<TypeAllocator**>(AllocatorContext + 0x558); }

// Onyx::Flow::Game : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Flow {
struct GameLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    void* field_60;
    void* field_68;
    void* field_70;
    uint64_t field_78;
    char padding_80[0x8];
    __attribute__((always_inline)) GameLayout() {}
    virtual ~GameLayout();
};
struct Game : GameLayout {
    __attribute__((always_inline)) Game() { field_50 = 0; field_58 = 0; field_68 = reinterpret_cast<char*>(this) + 0x68; field_70 = reinterpret_cast<char*>(this) + 0x68; field_78 = 0; field_60 = DefaultAllocator(); }
    virtual ~Game();
};
}  // namespace Flow
}  // namespace Onyx
void* Create_Onyx_Flow_Game() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Flow::Game))) Onyx::Flow::Game; }

// Onyx::Flow::PhaseController : Onyx::Component::Compose<...> : Onyx::Phase : Onyx::Component::Base
namespace Onyx {
namespace Flow {
struct PhaseControllerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    void* field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    char padding_78[0x8];
    __attribute__((always_inline)) PhaseControllerLayout() { field_50 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_58 = DefaultAllocator(); }
    virtual ~PhaseControllerLayout();
};
struct PhaseController : PhaseControllerLayout {
    __attribute__((always_inline)) PhaseController() {}
    virtual ~PhaseController();
};
}  // namespace Flow
}  // namespace Onyx
void* Create_Onyx_Flow_PhaseController() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Flow::PhaseController))) Onyx::Flow::PhaseController; }

// Onyx::DebugComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct DebugComponentLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    __attribute__((always_inline)) DebugComponentLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~DebugComponentLayout();
};
struct DebugComponent : DebugComponentLayout {
    __attribute__((always_inline)) DebugComponent() {}
    virtual ~DebugComponent();
};
}  // namespace Onyx
void* Create_Onyx_DebugComponent() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7c42e381u)->Allocate(sizeof(Onyx::DebugComponent))) Onyx::DebugComponent; }

// Onyx::Graphics::NewMaterialSystem::ShaderFile : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
namespace NewMaterialSystem {
struct ShaderFileLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint32_t field_78;
    char padding_7c[0x4];
    uint64_t field_80;
    void* field_88;
    uint64_t field_90;
    __attribute__((always_inline)) ShaderFileLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~ShaderFileLayout();
};
struct ShaderFile : ShaderFileLayout {
    __attribute__((always_inline)) ShaderFile() { field_78 = 0; field_80 = 0; field_90 = 0; field_88 = DefaultAllocator(); }
    virtual ~ShaderFile();
};
}  // namespace NewMaterialSystem
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_NewMaterialSystem_ShaderFile() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::NewMaterialSystem::ShaderFile))) Onyx::Graphics::NewMaterialSystem::ShaderFile; }

// Onyx::Graphics::IndexBufferStatic : Onyx::Component::Compose<...> : Onyx::Graphics::IndexBufferStaticNative : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
struct IndexBufferStaticLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    char padding_68[0x8];
    __attribute__((always_inline)) IndexBufferStaticLayout() { field_50 = 0; }
    virtual ~IndexBufferStaticLayout();
};
struct IndexBufferStatic : IndexBufferStaticLayout {
    __attribute__((always_inline)) IndexBufferStatic() { field_58 = 0; field_60 = 0; }
    virtual ~IndexBufferStatic();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_IndexBufferStatic() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::IndexBufferStatic))) Onyx::Graphics::IndexBufferStatic; }

// Onyx::Graphics::VertexBufferDynamic : Onyx::Component::Compose<...> : Onyx::Graphics::VertexBufferDynamicNative : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
struct VertexBufferDynamicLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint32_t field_68;
    uint32_t field_6c;
    uint32_t field_70;
    uint32_t field_74;
    char padding_78[0x8];
    void* field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint64_t field_98;
    char padding_a0[0x8];
    uint64_t field_a8;
    uint32_t field_b0;
    char padding_b4[0x4];
    __attribute__((always_inline)) VertexBufferDynamicLayout() { field_50 = 0; }
    virtual ~VertexBufferDynamicLayout();
};
struct VertexBufferDynamic : VertexBufferDynamicLayout {
    __attribute__((always_inline)) VertexBufferDynamic() { field_58 = 0; field_60 = 0; field_68 = 0x3u; field_6c = 0; field_70 = 0; field_74 = 0; field_88 = 0; field_90 = 0; field_98 = 0; field_80 = DefaultAllocator(); field_a8 = 0; field_b0 = 0; }
    virtual ~VertexBufferDynamic();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_VertexBufferDynamic() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::VertexBufferDynamic))) Onyx::Graphics::VertexBufferDynamic; }

// Onyx::Graphics::VertexBufferStatic : Onyx::Component::Compose<...> : Onyx::Graphics::VertexBufferStaticNative : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
struct VertexBufferStaticLayout : ::Onyx::Component::Base {
    char padding_8[0x50];
    uint64_t field_58;
    uint64_t field_60;
    char padding_68[0x8];
    void* field_70;
    uint64_t field_78;
    uint64_t field_80;
    uint64_t field_88;
    char padding_90[0x8];
    uint64_t field_98;
    uint32_t field_a0;
    char padding_a4[0x4];
    __attribute__((always_inline)) VertexBufferStaticLayout() {}
    virtual ~VertexBufferStaticLayout();
};
struct VertexBufferStatic : VertexBufferStaticLayout {
    __attribute__((always_inline)) VertexBufferStatic() { field_58 = 0; field_60 = 0; field_78 = 0; field_80 = 0; field_88 = 0; field_70 = DefaultAllocator(); field_98 = 0; field_a0 = 0; }
    virtual ~VertexBufferStatic();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_VertexBufferStatic() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::VertexBufferStatic))) Onyx::Graphics::VertexBufferStatic; }

// Onyx::BannerComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct BannerComponentLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    void* field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    char padding_78[0x8];
    void* field_80;
    uint64_t field_88;
    void* field_90;
    uint64_t field_98;
    char padding_a0[0x8];
    __attribute__((always_inline)) BannerComponentLayout() { field_50 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_58 = DefaultAllocator(); }
    virtual ~BannerComponentLayout();
};
struct BannerComponent : BannerComponentLayout {
    __attribute__((always_inline)) BannerComponent() { field_80 = DefaultAllocator(); field_88 = 0; field_90 = DefaultAllocator(); field_98 = 0; }
    virtual ~BannerComponent();
};
}  // namespace Onyx
void* Create_Onyx_BannerComponent() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::BannerComponent))) Onyx::BannerComponent; }

// Onyx::DareAudio::OccObsComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace DareAudio {
struct OccObsComponentLayout : ::Onyx::Component::Base {
    char padding_8[0x42];
    uint16_t field_4a;
    char padding_4c[0xc];
    void* field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    char padding_78[0x8];
    __attribute__((always_inline)) OccObsComponentLayout() {}
    virtual ~OccObsComponentLayout();
};
struct OccObsComponent : OccObsComponentLayout {
    __attribute__((always_inline)) OccObsComponent() { field_4a = 0x1; field_60 = 0; field_68 = 0; field_70 = 0; field_58 = DefaultAllocator(); }
    virtual ~OccObsComponent();
};
}  // namespace DareAudio
}  // namespace Onyx
void* Create_Onyx_DareAudio_OccObsComponent() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::DareAudio::OccObsComponent))) Onyx::DareAudio::OccObsComponent; }

// Onyx::DareAudio::PackageLoader : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace DareAudio {
struct PackageLoaderLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    void* field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    char padding_78[0x8];
    uint64_t field_80;
    void* field_88;
    uint64_t field_90;
    uint8_t field_98;
    char padding_99[0x7];
    __attribute__((always_inline)) PackageLoaderLayout() {}
    virtual ~PackageLoaderLayout();
};
struct PackageLoader : PackageLoaderLayout {
    __attribute__((always_inline)) PackageLoader() { field_50 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_58 = DefaultAllocator(); field_80 = 0xffffffffffffffffull; field_90 = 0; field_98 = 0; field_88 = DefaultAllocator(); }
    virtual ~PackageLoader();
};
}  // namespace DareAudio
}  // namespace Onyx
void* Create_Onyx_DareAudio_PackageLoader() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::DareAudio::PackageLoader))) Onyx::DareAudio::PackageLoader; }

// Onyx::DLC::ProgressTask : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace DLC {
struct ProgressTaskLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    void* field_58;
    uint8_t field_60;
    char padding_61[0x7];
    int32_t field_68;
    char padding_6c[0xc];
    uint64_t field_78;
    __attribute__((always_inline)) ProgressTaskLayout() {}
    virtual ~ProgressTaskLayout();
};
struct ProgressTask : ProgressTaskLayout {
    __attribute__((always_inline)) ProgressTask() { field_50 = 0; field_60 = 0; field_68 = -1; field_78 = 0; field_58 = this; }
    virtual ~ProgressTask();
};
}  // namespace DLC
}  // namespace Onyx
void* Create_Onyx_DLC_ProgressTask() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::DLC::ProgressTask))) Onyx::DLC::ProgressTask; }

// Onyx::Fire::Movie : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Fire {
struct MovieLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    void* field_78;
    uint64_t field_80;
    uint64_t field_88;
    uint64_t field_90;
    char padding_98[0x8];
    uint32_t field_a0;
    char padding_a4[0x4];
    uint64_t field_a8;
    __attribute__((always_inline)) MovieLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); field_80 = 0; field_88 = 0; }
    virtual ~MovieLayout();
};
struct Movie : MovieLayout {
    __attribute__((always_inline)) Movie() { field_90 = 0; field_78 = DefaultAllocator(); field_a0 = 0; field_a8 = 0; }
    virtual ~Movie();
};
}  // namespace Fire
}  // namespace Onyx
void* Create_Onyx_Fire_Movie() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Fire::Movie))) Onyx::Fire::Movie; }

// SPTG::ActorObject : Onyx::Component::Compose<...> : SPTG::PlayfieldObject : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct ActorObjectLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint8_t field_70;
    char padding_71[0x7];
    __attribute__((always_inline)) ActorObjectLayout() {}
    virtual ~ActorObjectLayout();
};
struct ActorObject : ActorObjectLayout {
    __attribute__((always_inline)) ActorObject() { field_50 = 0; field_58 = 0; field_60 = 0; field_68 = 0; field_70 = 0; }
    virtual ~ActorObject();
};
}  // namespace SPTG
void* Create_SPTG_ActorObject() { return new (GenericFactoryResolve(GenericFactoryManager, 0x6492d61du)->Allocate(sizeof(SPTG::ActorObject))) SPTG::ActorObject; }

// SPTG::ActorObjectUpdatePhase : Onyx::Component::Compose<...> : SPTG::SPTG_Phase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct ActorObjectUpdatePhaseLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint32_t field_58;
    uint8_t field_5c;
    char padding_5d[0x3];
    uint64_t field_60;
    uint64_t field_68;
    __attribute__((always_inline)) ActorObjectUpdatePhaseLayout() { field_50 = 0; field_60 = 0; field_68 = 0; }
    virtual ~ActorObjectUpdatePhaseLayout();
};
struct ActorObjectUpdatePhase : ActorObjectUpdatePhaseLayout {
    __attribute__((always_inline)) ActorObjectUpdatePhase() { field_5c = 0x1; field_58 = 0xbu; }
    virtual ~ActorObjectUpdatePhase();
};
}  // namespace SPTG
void* Create_SPTG_ActorObjectUpdatePhase() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::ActorObjectUpdatePhase))) SPTG::ActorObjectUpdatePhase; }

// SPTG::SideScrollerCollisionPhase : Onyx::Component::Compose<...> : SPTG::SPTG_Phase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct SideScrollerCollisionPhaseLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint32_t field_58;
    uint8_t field_5c;
    char padding_5d[0x3];
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    __attribute__((always_inline)) SideScrollerCollisionPhaseLayout() { field_50 = 0; field_60 = 0; field_68 = 0; }
    virtual ~SideScrollerCollisionPhaseLayout();
};
struct SideScrollerCollisionPhase : SideScrollerCollisionPhaseLayout {
    __attribute__((always_inline)) SideScrollerCollisionPhase() { field_70 = 0; field_5c = 0x1; field_58 = 0x4u; }
    virtual ~SideScrollerCollisionPhase();
};
}  // namespace SPTG
void* Create_SPTG_SideScrollerCollisionPhase() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::SideScrollerCollisionPhase))) SPTG::SideScrollerCollisionPhase; }

// SPTG::BaseBossAI : Onyx::Component::Compose<...> : SPTG::SPTG_AIComponent : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct BaseBossAILayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint8_t field_50;
    uint8_t field_51;
    char padding_52[0x2];
    int32_t field_54;
    uint64_t field_58;
    uint32_t field_60;
    char padding_64[0x4];
    void* field_68;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    char padding_88[0x8];
    uint64_t field_90;
    uint64_t field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    int32_t field_b8;
    char padding_bc[0x4];
    uint64_t field_c0;
    void* field_c8;
    uint8_t field_d0;
    char padding_d1[0x7];
    __attribute__((always_inline)) BaseBossAILayout() { field_50 = 0x1; }
    virtual ~BaseBossAILayout();
};
struct BaseBossAI : BaseBossAILayout {
    __attribute__((always_inline)) BaseBossAI() { field_51 = 0x1; field_54 = -1; field_58 = 0; field_60 = 0; field_70 = 0; field_78 = 0; field_80 = 0; field_68 = DefaultAllocator(); field_90 = 0; field_98 = 0; field_a0 = 0; field_a8 = 0; field_b0 = 0; field_b8 = -1; field_c0 = 0; field_c8 = this; field_d0 = 0; }
    virtual ~BaseBossAI();
};
}  // namespace SPTG
void* Create_SPTG_BaseBossAI() { return new (GenericFactoryResolve(GenericFactoryManager, 0x1486d4e8u)->Allocate(sizeof(SPTG::BaseBossAI))) SPTG::BaseBossAI; }

// SPTG::EnvyLynetteAI : Onyx::Component::Compose<...> : SPTG::BaseBossAI : Onyx::Component::Compose<...> : SPTG::SPTG_AIComponent : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...>
namespace SPTG {
struct EnvyLynetteAILayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint8_t field_50;
    uint8_t field_51;
    char padding_52[0x2];
    int32_t field_54;
    uint64_t field_58;
    uint32_t field_60;
    char padding_64[0x4];
    void* field_68;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    char padding_88[0x8];
    uint64_t field_90;
    uint64_t field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    int32_t field_b8;
    char padding_bc[0x4];
    uint64_t field_c0;
    void* field_c8;
    uint8_t field_d0;
    char padding_d1[0x27];
    uint64_t field_f8;
    uint64_t field_100;
    uint64_t field_108;
    uint64_t field_110;
    __attribute__((always_inline)) EnvyLynetteAILayout() { field_50 = 0x1; field_51 = 0x1; field_54 = -1; field_58 = 0; field_60 = 0; field_70 = 0; field_78 = 0; field_80 = 0; field_68 = DefaultAllocator(); field_90 = 0; field_98 = 0; field_a0 = 0; field_a8 = 0; }
    virtual ~EnvyLynetteAILayout();
};
struct EnvyLynetteAI : EnvyLynetteAILayout {
    __attribute__((always_inline)) EnvyLynetteAI() { field_b0 = 0; field_b8 = -1; field_c0 = 0; field_c8 = this; field_d0 = 0; field_f8 = 0; field_100 = 0; field_108 = 0; field_110 = 0; }
    virtual ~EnvyLynetteAI();
};
}  // namespace SPTG
void* Create_SPTG_EnvyLynetteAI() { return new (GenericFactoryResolve(GenericFactoryManager, 0x1486d4e8u)->Allocate(sizeof(SPTG::EnvyLynetteAI))) SPTG::EnvyLynetteAI; }

// SPTG::GigaGideonAI : Onyx::Component::Compose<...> : SPTG::BaseBossAI : Onyx::Component::Compose<...> : SPTG::SPTG_AIComponent : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...>
namespace SPTG {
struct GigaGideonAILayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint8_t field_50;
    uint8_t field_51;
    char padding_52[0x2];
    int32_t field_54;
    uint64_t field_58;
    uint32_t field_60;
    char padding_64[0x4];
    void* field_68;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    char padding_88[0x8];
    uint64_t field_90;
    uint64_t field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    int32_t field_b8;
    char padding_bc[0x4];
    uint64_t field_c0;
    void* field_c8;
    uint8_t field_d0;
    char padding_d1[0xf];
    uint64_t field_e0;
    uint8_t field_e8;
    char padding_e9[0x7];
    uint64_t field_f0;
    void* field_f8;
    uint8_t field_100;
    char padding_101[0x7];
    __attribute__((always_inline)) GigaGideonAILayout() { field_50 = 0x1; field_51 = 0x1; field_54 = -1; field_58 = 0; field_60 = 0; field_70 = 0; field_78 = 0; field_80 = 0; field_68 = DefaultAllocator(); }
    virtual ~GigaGideonAILayout();
};
struct GigaGideonAI : GigaGideonAILayout {
    __attribute__((always_inline)) GigaGideonAI() { field_90 = 0; field_98 = 0; field_a0 = 0; field_a8 = 0; field_b0 = 0; field_b8 = -1; field_c0 = 0; field_c8 = this; field_d0 = 0; field_e0 = 0; field_e8 = 0; field_f0 = 0; field_f8 = this; field_100 = 0; }
    virtual ~GigaGideonAI();
};
}  // namespace SPTG
void* Create_SPTG_GigaGideonAI() { return new (GenericFactoryResolve(GenericFactoryManager, 0x1486d4e8u)->Allocate(sizeof(SPTG::GigaGideonAI))) SPTG::GigaGideonAI; }

// SPTG::SuperGideonAI : Onyx::Component::Compose<...> : SPTG::BaseBossAI : Onyx::Component::Compose<...> : SPTG::SPTG_AIComponent : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...>
namespace SPTG {
struct SuperGideonAILayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint8_t field_50;
    uint8_t field_51;
    char padding_52[0x2];
    int32_t field_54;
    uint64_t field_58;
    uint32_t field_60;
    char padding_64[0x4];
    void* field_68;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    char padding_88[0x8];
    uint64_t field_90;
    uint64_t field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    int32_t field_b8;
    char padding_bc[0x4];
    uint64_t field_c0;
    void* field_c8;
    uint8_t field_d0;
    char padding_d1[0xf];
    uint64_t field_e0;
    uint8_t field_e8;
    char padding_e9[0x7];
    uint64_t field_f0;
    void* field_f8;
    uint8_t field_100;
    char padding_101[0x7];
    __attribute__((always_inline)) SuperGideonAILayout() { field_50 = 0x1; field_51 = 0x1; field_54 = -1; field_58 = 0; field_60 = 0; field_70 = 0; field_78 = 0; field_80 = 0; field_68 = DefaultAllocator(); }
    virtual ~SuperGideonAILayout();
};
struct SuperGideonAI : SuperGideonAILayout {
    __attribute__((always_inline)) SuperGideonAI() { field_90 = 0; field_98 = 0; field_a0 = 0; field_a8 = 0; field_b0 = 0; field_b8 = -1; field_c0 = 0; field_c8 = this; field_d0 = 0; field_e0 = 0; field_e8 = 0; field_f0 = 0; field_f8 = this; field_100 = 0; }
    virtual ~SuperGideonAI();
};
}  // namespace SPTG
void* Create_SPTG_SuperGideonAI() { return new (GenericFactoryResolve(GenericFactoryManager, 0x1486d4e8u)->Allocate(sizeof(SPTG::SuperGideonAI))) SPTG::SuperGideonAI; }

// SPTG::ToddAI : Onyx::Component::Compose<...> : SPTG::BaseBossAI : Onyx::Component::Compose<...> : SPTG::SPTG_AIComponent : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...>
namespace SPTG {
struct ToddAILayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint8_t field_50;
    uint8_t field_51;
    char padding_52[0x2];
    int32_t field_54;
    uint64_t field_58;
    uint32_t field_60;
    char padding_64[0x4];
    void* field_68;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    char padding_88[0x8];
    uint64_t field_90;
    uint64_t field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    int32_t field_b8;
    char padding_bc[0x4];
    uint64_t field_c0;
    void* field_c8;
    uint8_t field_d0;
    char padding_d1[0xf];
    __attribute__((always_inline)) ToddAILayout() { field_50 = 0x1; field_51 = 0x1; field_54 = -1; field_58 = 0; field_60 = 0; field_70 = 0; field_78 = 0; field_80 = 0; field_68 = DefaultAllocator(); field_90 = 0; field_98 = 0; field_a0 = 0; field_a8 = 0; }
    virtual ~ToddAILayout();
};
struct ToddAI : ToddAILayout {
    __attribute__((always_inline)) ToddAI() { field_b0 = 0; field_b8 = -1; field_c0 = 0; field_c8 = this; field_d0 = 0; }
    virtual ~ToddAI();
};
}  // namespace SPTG
void* Create_SPTG_ToddAI() { return new (GenericFactoryResolve(GenericFactoryManager, 0x1486d4e8u)->Allocate(sizeof(SPTG::ToddAI))) SPTG::ToddAI; }

// SPTG::ControllableInstance : SPTG::ObjectSpawnedInstance<...> : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct ControllableInstanceLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    __attribute__((always_inline)) ControllableInstanceLayout() { field_50 = 0; }
    virtual ~ControllableInstanceLayout();
};
struct ControllableInstance : ControllableInstanceLayout {
    __attribute__((always_inline)) ControllableInstance() { field_58 = 0; field_60 = 0; }
    virtual ~ControllableInstance();
};
}  // namespace SPTG
void* Create_SPTG_ControllableInstance() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::ControllableInstance))) SPTG::ControllableInstance; }

// SPTG::ControllableSpawner : Onyx::Component::Compose<...> : SPTG::ObjectSpawner<...> : Onyx::Component::Compose<...> : SPTG::ObjectSpawnerBase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct ControllableSpawnerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    void* field_60;
    void* field_68;
    void* field_70;
    uint64_t field_78;
    char padding_80[0x8];
    void* field_88;
    void* field_90;
    void* field_98;
    uint64_t field_a0;
    char padding_a8[0x8];
    void* field_b0;
    void* field_b8;
    void* field_c0;
    uint64_t field_c8;
    char padding_d0[0x8];
    uint32_t field_d8;
    char padding_dc[0x4];
    __attribute__((always_inline)) ControllableSpawnerLayout() { field_50 = 0; field_58 = 0; field_68 = reinterpret_cast<char*>(this) + 0x68; field_70 = reinterpret_cast<char*>(this) + 0x68; field_78 = 0; field_60 = DefaultAllocator(); field_90 = reinterpret_cast<char*>(this) + 0x90; field_98 = reinterpret_cast<char*>(this) + 0x90; field_a0 = 0; field_88 = DefaultAllocator(); field_b8 = reinterpret_cast<char*>(this) + 0xb8; field_c0 = reinterpret_cast<char*>(this) + 0xb8; }
    virtual ~ControllableSpawnerLayout();
};
struct ControllableSpawner : ControllableSpawnerLayout {
    __attribute__((always_inline)) ControllableSpawner() { field_c8 = 0; field_b0 = DefaultAllocator(); field_d8 = 0x7u; }
    virtual ~ControllableSpawner();
};
}  // namespace SPTG
void* Create_SPTG_ControllableSpawner() { return new (GenericFactoryResolve(GenericFactoryManager, 0x25055aa6u)->Allocate(sizeof(SPTG::ControllableSpawner))) SPTG::ControllableSpawner; }

// SPTG::ControllableTextureLoader : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct ControllableTextureLoaderLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    __attribute__((always_inline)) ControllableTextureLoaderLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~ControllableTextureLoaderLayout();
};
struct ControllableTextureLoader : ControllableTextureLoaderLayout {
    __attribute__((always_inline)) ControllableTextureLoader() {}
    virtual ~ControllableTextureLoader();
};
}  // namespace SPTG
void* Create_SPTG_ControllableTextureLoader() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::ControllableTextureLoader))) SPTG::ControllableTextureLoader; }

// SPTG::ControllableTriggerSpawner : Onyx::Component::Compose<...> : SPTG::SPTG_AIComponent : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
extern "C" const char Symbol_186a780[];  // vtable of N4SPTG21ControllableSpawnInfoE
namespace SPTG {
struct ControllableTriggerSpawnerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint8_t field_50;
    uint8_t field_51;
    char padding_52[0x2];
    int32_t field_54;
    uint64_t field_58;
    const void* field_60;
    int32_t field_68;
    uint32_t field_6c;
    char padding_70[0x14];
    uint32_t field_84;
    char padding_88[0x18];
    __attribute__((always_inline)) ControllableTriggerSpawnerLayout() { field_50 = 0x1; field_51 = 0x1; field_54 = -1; }
    virtual ~ControllableTriggerSpawnerLayout();
};
struct ControllableTriggerSpawner : ControllableTriggerSpawnerLayout {
    __attribute__((always_inline)) ControllableTriggerSpawner() { field_58 = 0; field_60 = Symbol_186a780; field_68 = -1; field_6c = 0x7u; field_84 = 0x6u; }
    virtual ~ControllableTriggerSpawner();
};
}  // namespace SPTG
void* Create_SPTG_ControllableTriggerSpawner() { return new (GenericFactoryResolve(GenericFactoryManager, 0x1486d4e8u)->Allocate(sizeof(SPTG::ControllableTriggerSpawner))) SPTG::ControllableTriggerSpawner; }

// SPTG::ControllableUiSpawner : Onyx::Component::Compose<...> : SPTG::SPTG_AIComponent : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
extern "C" const char Symbol_186a780[];  // vtable of N4SPTG21ControllableSpawnInfoE
namespace SPTG {
struct ControllableUiSpawnerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint8_t field_50;
    uint8_t field_51;
    char padding_52[0x2];
    int32_t field_54;
    uint64_t field_58;
    uint64_t field_60;
    const void* field_68;
    int32_t field_70;
    uint32_t field_74;
    char padding_78[0x14];
    uint32_t field_8c;
    char padding_90[0x4];
    uint32_t field_94;
    char padding_98[0x8];
    __attribute__((always_inline)) ControllableUiSpawnerLayout() {}
    virtual ~ControllableUiSpawnerLayout();
};
struct ControllableUiSpawner : ControllableUiSpawnerLayout {
    __attribute__((always_inline)) ControllableUiSpawner() { field_50 = 0x1; field_51 = 0x1; field_54 = -1; field_58 = 0; field_60 = 0; field_68 = Symbol_186a780; field_70 = -1; field_74 = 0x7u; field_8c = 0x6u; field_94 = 0xffffu; }
    virtual ~ControllableUiSpawner();
};
}  // namespace SPTG
void* Create_SPTG_ControllableUiSpawner() { return new (GenericFactoryResolve(GenericFactoryManager, 0x1486d4e8u)->Allocate(sizeof(SPTG::ControllableUiSpawner))) SPTG::ControllableUiSpawner; }

// SPTG::SelectedActorRecorder : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct SelectedActorRecorderLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    void* field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    char padding_78[0x8];
    void* field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint64_t field_98;
    char padding_a0[0x8];
    uint8_t field_a8;
    char padding_a9[0x7];
    __attribute__((always_inline)) SelectedActorRecorderLayout() {}
    virtual ~SelectedActorRecorderLayout();
};
struct SelectedActorRecorder : SelectedActorRecorderLayout {
    __attribute__((always_inline)) SelectedActorRecorder() { field_50 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_58 = DefaultAllocator(); field_88 = 0; field_90 = 0; field_98 = 0; field_80 = DefaultAllocator(); field_a8 = 0; }
    virtual ~SelectedActorRecorder();
};
}  // namespace SPTG
void* Create_SPTG_SelectedActorRecorder() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::SelectedActorRecorder))) SPTG::SelectedActorRecorder; }

// SPTG::EnemyCollectiveAI : Onyx::Component::Compose<...> : SPTG::SPTG_Phase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct EnemyCollectiveAILayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint32_t field_58;
    uint8_t field_5c;
    char padding_5d[0x3];
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint64_t field_78;
    uint64_t field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint64_t field_98;
    int32_t field_a0;
    char padding_a4[0x4];
    __attribute__((always_inline)) EnemyCollectiveAILayout() {}
    virtual ~EnemyCollectiveAILayout();
};
struct EnemyCollectiveAI : EnemyCollectiveAILayout {
    __attribute__((always_inline)) EnemyCollectiveAI() { field_50 = 0; field_60 = 0; field_68 = 0; field_78 = 0; field_80 = 0; field_88 = 0; field_90 = 0; field_98 = 0; field_a0 = -1; field_5c = 0x1; field_58 = 0x5u; }
    virtual ~EnemyCollectiveAI();
};
}  // namespace SPTG
void* Create_SPTG_EnemyCollectiveAI() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::EnemyCollectiveAI))) SPTG::EnemyCollectiveAI; }

// SPTG::EnemySpawner : Onyx::Component::Compose<...> : SPTG::ObjectSpawner<...> : Onyx::Component::Compose<...> : SPTG::ObjectSpawnerBase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct EnemySpawnerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    void* field_60;
    void* field_68;
    void* field_70;
    uint64_t field_78;
    char padding_80[0x8];
    void* field_88;
    void* field_90;
    void* field_98;
    uint64_t field_a0;
    char padding_a8[0x8];
    void* field_b0;
    void* field_b8;
    void* field_c0;
    uint64_t field_c8;
    char padding_d0[0x8];
    uint32_t field_d8;
    char padding_dc[0x4];
    __attribute__((always_inline)) EnemySpawnerLayout() { field_50 = 0; field_58 = 0; field_68 = reinterpret_cast<char*>(this) + 0x68; field_70 = reinterpret_cast<char*>(this) + 0x68; field_78 = 0; field_60 = DefaultAllocator(); field_90 = reinterpret_cast<char*>(this) + 0x90; field_98 = reinterpret_cast<char*>(this) + 0x90; field_a0 = 0; field_88 = DefaultAllocator(); field_b8 = reinterpret_cast<char*>(this) + 0xb8; field_c0 = reinterpret_cast<char*>(this) + 0xb8; }
    virtual ~EnemySpawnerLayout();
};
struct EnemySpawner : EnemySpawnerLayout {
    __attribute__((always_inline)) EnemySpawner() { field_c8 = 0; field_b0 = DefaultAllocator(); field_d8 = 0x43u; }
    virtual ~EnemySpawner();
};
}  // namespace SPTG
void* Create_SPTG_EnemySpawner() { return new (GenericFactoryResolve(GenericFactoryManager, 0x25055aa6u)->Allocate(sizeof(SPTG::EnemySpawner))) SPTG::EnemySpawner; }

// SPTG::InteractiveEffet : Onyx::Component::Compose<...> : SPTG::SPTG_AIComponent : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct InteractiveEffetLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint8_t field_50;
    uint8_t field_51;
    char padding_52[0x2];
    int32_t field_54;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint16_t field_70;
    char padding_72[0x16];
    uint64_t field_88;
    __attribute__((always_inline)) InteractiveEffetLayout() { field_50 = 0x1; field_51 = 0x1; field_54 = -1; field_58 = 0; field_60 = 0; }
    virtual ~InteractiveEffetLayout();
};
struct InteractiveEffet : InteractiveEffetLayout {
    __attribute__((always_inline)) InteractiveEffet() { field_68 = 0; field_70 = 0x100; field_88 = 0; }
    virtual ~InteractiveEffet();
};
}  // namespace SPTG
void* Create_SPTG_InteractiveEffet() { return new (GenericFactoryResolve(GenericFactoryManager, 0x1486d4e8u)->Allocate(sizeof(SPTG::InteractiveEffet))) SPTG::InteractiveEffet; }

// SPTG::InteractiveObjectSpawner : Onyx::Component::Compose<...> : SPTG::ObjectSpawner<...> : Onyx::Component::Compose<...> : SPTG::ObjectSpawnerBase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct InteractiveObjectSpawnerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    void* field_60;
    void* field_68;
    void* field_70;
    uint64_t field_78;
    char padding_80[0x8];
    void* field_88;
    void* field_90;
    void* field_98;
    uint64_t field_a0;
    char padding_a8[0x8];
    void* field_b0;
    void* field_b8;
    void* field_c0;
    uint64_t field_c8;
    char padding_d0[0x8];
    uint32_t field_d8;
    char padding_dc[0x4];
    __attribute__((always_inline)) InteractiveObjectSpawnerLayout() { field_50 = 0; field_58 = 0; field_68 = reinterpret_cast<char*>(this) + 0x68; field_70 = reinterpret_cast<char*>(this) + 0x68; field_78 = 0; field_60 = DefaultAllocator(); field_90 = reinterpret_cast<char*>(this) + 0x90; field_98 = reinterpret_cast<char*>(this) + 0x90; field_a0 = 0; field_88 = DefaultAllocator(); field_b8 = reinterpret_cast<char*>(this) + 0xb8; field_c0 = reinterpret_cast<char*>(this) + 0xb8; }
    virtual ~InteractiveObjectSpawnerLayout();
};
struct InteractiveObjectSpawner : InteractiveObjectSpawnerLayout {
    __attribute__((always_inline)) InteractiveObjectSpawner() { field_c8 = 0; field_b0 = DefaultAllocator(); field_d8 = 0x33u; }
    virtual ~InteractiveObjectSpawner();
};
}  // namespace SPTG
void* Create_SPTG_InteractiveObjectSpawner() { return new (GenericFactoryResolve(GenericFactoryManager, 0x25055aa6u)->Allocate(sizeof(SPTG::InteractiveObjectSpawner))) SPTG::InteractiveObjectSpawner; }

// SPTG::PickupSpawner : Onyx::Component::Compose<...> : SPTG::ObjectSpawner<...> : Onyx::Component::Compose<...> : SPTG::ObjectSpawnerBase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct PickupSpawnerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    void* field_60;
    void* field_68;
    void* field_70;
    uint64_t field_78;
    char padding_80[0x8];
    void* field_88;
    void* field_90;
    void* field_98;
    uint64_t field_a0;
    char padding_a8[0x8];
    void* field_b0;
    void* field_b8;
    void* field_c0;
    uint64_t field_c8;
    char padding_d0[0x8];
    uint32_t field_d8;
    char padding_dc[0x4];
    __attribute__((always_inline)) PickupSpawnerLayout() { field_50 = 0; field_58 = 0; field_68 = reinterpret_cast<char*>(this) + 0x68; field_70 = reinterpret_cast<char*>(this) + 0x68; field_78 = 0; field_60 = DefaultAllocator(); field_90 = reinterpret_cast<char*>(this) + 0x90; field_98 = reinterpret_cast<char*>(this) + 0x90; field_a0 = 0; field_88 = DefaultAllocator(); field_b8 = reinterpret_cast<char*>(this) + 0xb8; field_c0 = reinterpret_cast<char*>(this) + 0xb8; }
    virtual ~PickupSpawnerLayout();
};
struct PickupSpawner : PickupSpawnerLayout {
    __attribute__((always_inline)) PickupSpawner() { field_c8 = 0; field_b0 = DefaultAllocator(); field_d8 = 0xdu; }
    virtual ~PickupSpawner();
};
}  // namespace SPTG
void* Create_SPTG_PickupSpawner() { return new (GenericFactoryResolve(GenericFactoryManager, 0x25055aa6u)->Allocate(sizeof(SPTG::PickupSpawner))) SPTG::PickupSpawner; }

// SPTG::ControllableKnives : Onyx::Component::Compose<...> : SPTG::ControllablePlayer
namespace SPTG {
struct ControllableKnivesLayout : Base_95d1d0 {
    char padding_8[0x1558];
    uint64_t field_1560;
    uint64_t field_1568;
    uint64_t field_1570;
    uint32_t field_1578;
    char padding_157c[0x4];
    __attribute__((always_inline)) ControllableKnivesLayout() {}
    virtual ~ControllableKnivesLayout();
};
struct ControllableKnives : ControllableKnivesLayout {
    __attribute__((always_inline)) ControllableKnives() { field_1560 = 0; field_1568 = 0; field_1570 = 0; field_1578 = 0; }
    virtual ~ControllableKnives();
};
}  // namespace SPTG
void* Create_SPTG_ControllableKnives() { return new (GenericFactoryResolve(GenericFactoryManager, 0x1486d4e8u)->Allocate(sizeof(SPTG::ControllableKnives))) SPTG::ControllableKnives; }

// SPTG::PlayerInfo : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct PlayerInfoLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint32_t field_68;
    char padding_6c[0x4];
    void* field_70;
    uint64_t field_78;
    uint64_t field_80;
    char padding_88[0x10];
    __attribute__((always_inline)) PlayerInfoLayout() { field_50 = 0; field_58 = 0; field_60 = 0; }
    virtual ~PlayerInfoLayout();
};
struct PlayerInfo : PlayerInfoLayout {
    __attribute__((always_inline)) PlayerInfo() { field_78 = 0; field_80 = 0; field_68 = 0x2u; field_70 = DefaultAllocator(); }
    virtual ~PlayerInfo();
};
}  // namespace SPTG
void* Create_SPTG_PlayerInfo() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::PlayerInfo))) SPTG::PlayerInfo; }

// SPTG::ProjectileSpawner : Onyx::Component::Compose<...> : SPTG::ObjectSpawner<...> : Onyx::Component::Compose<...> : SPTG::ObjectSpawnerBase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct ProjectileSpawnerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    void* field_60;
    void* field_68;
    void* field_70;
    uint64_t field_78;
    char padding_80[0x8];
    void* field_88;
    void* field_90;
    void* field_98;
    uint64_t field_a0;
    char padding_a8[0x8];
    void* field_b0;
    void* field_b8;
    void* field_c0;
    uint64_t field_c8;
    char padding_d0[0x8];
    uint32_t field_d8;
    char padding_dc[0x4];
    __attribute__((always_inline)) ProjectileSpawnerLayout() { field_50 = 0; field_58 = 0; field_68 = reinterpret_cast<char*>(this) + 0x68; field_70 = reinterpret_cast<char*>(this) + 0x68; field_78 = 0; field_60 = DefaultAllocator(); field_90 = reinterpret_cast<char*>(this) + 0x90; field_98 = reinterpret_cast<char*>(this) + 0x90; field_a0 = 0; field_88 = DefaultAllocator(); field_b8 = reinterpret_cast<char*>(this) + 0xb8; field_c0 = reinterpret_cast<char*>(this) + 0xb8; }
    virtual ~ProjectileSpawnerLayout();
};
struct ProjectileSpawner : ProjectileSpawnerLayout {
    __attribute__((always_inline)) ProjectileSpawner() { field_c8 = 0; field_b0 = DefaultAllocator(); field_d8 = 0x2au; }
    virtual ~ProjectileSpawner();
};
}  // namespace SPTG
void* Create_SPTG_ProjectileSpawner() { return new (GenericFactoryResolve(GenericFactoryManager, 0x25055aa6u)->Allocate(sizeof(SPTG::ProjectileSpawner))) SPTG::ProjectileSpawner; }

// SPTG::SPTG_AIDirectorPhase : Onyx::Component::Compose<...> : SPTG::SPTG_Phase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct SPTG_AIDirectorPhaseLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint32_t field_58;
    uint8_t field_5c;
    char padding_5d[0x3];
    uint64_t field_60;
    uint64_t field_68;
    __attribute__((always_inline)) SPTG_AIDirectorPhaseLayout() { field_50 = 0; field_60 = 0; field_68 = 0; }
    virtual ~SPTG_AIDirectorPhaseLayout();
};
struct SPTG_AIDirectorPhase : SPTG_AIDirectorPhaseLayout {
    __attribute__((always_inline)) SPTG_AIDirectorPhase() { field_5c = 0x1; field_58 = 0x6u; }
    virtual ~SPTG_AIDirectorPhase();
};
}  // namespace SPTG
void* Create_SPTG_SPTG_AIDirectorPhase() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::SPTG_AIDirectorPhase))) SPTG::SPTG_AIDirectorPhase; }

// SPTG::KnivesNegaScott : Onyx::Component::Compose<...> : SPTG::Striker : Onyx::Component::Compose<...> : SPTG::AnimatedAiActor
namespace SPTG {
struct KnivesNegaScottLayout : ::SPTG::Striker {
    char padding_8[0x2f8];
    void* field_300;
    uint64_t field_308;
    uint64_t field_310;
    uint64_t field_318;
    char padding_320[0x10];
    uint64_t field_330;
    uint64_t field_338;
    __attribute__((always_inline)) KnivesNegaScottLayout() { field_308 = 0; field_310 = 0; field_318 = 0; field_300 = DefaultAllocator(); }
    virtual ~KnivesNegaScottLayout();
};
struct KnivesNegaScott : KnivesNegaScottLayout {
    __attribute__((always_inline)) KnivesNegaScott() { field_330 = 0; field_338 = 0; }
    virtual ~KnivesNegaScott();
};
}  // namespace SPTG
void* Create_SPTG_KnivesNegaScott() { return new (GenericFactoryResolve(GenericFactoryManager, 0x1486d4e8u)->Allocate(sizeof(SPTG::KnivesNegaScott))) SPTG::KnivesNegaScott; }

// SPTG::StrikerSpawner : Onyx::Component::Compose<...> : SPTG::ObjectSpawner<...> : Onyx::Component::Compose<...> : SPTG::ObjectSpawnerBase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct StrikerSpawnerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    void* field_60;
    void* field_68;
    void* field_70;
    uint64_t field_78;
    char padding_80[0x8];
    void* field_88;
    void* field_90;
    void* field_98;
    uint64_t field_a0;
    char padding_a8[0x8];
    void* field_b0;
    void* field_b8;
    void* field_c0;
    uint64_t field_c8;
    char padding_d0[0x8];
    uint32_t field_d8;
    char padding_dc[0x4];
    __attribute__((always_inline)) StrikerSpawnerLayout() { field_50 = 0; field_58 = 0; field_68 = reinterpret_cast<char*>(this) + 0x68; field_70 = reinterpret_cast<char*>(this) + 0x68; field_78 = 0; field_60 = DefaultAllocator(); field_90 = reinterpret_cast<char*>(this) + 0x90; field_98 = reinterpret_cast<char*>(this) + 0x90; field_a0 = 0; field_88 = DefaultAllocator(); field_b8 = reinterpret_cast<char*>(this) + 0xb8; field_c0 = reinterpret_cast<char*>(this) + 0xb8; }
    virtual ~StrikerSpawnerLayout();
};
struct StrikerSpawner : StrikerSpawnerLayout {
    __attribute__((always_inline)) StrikerSpawner() { field_c8 = 0; field_b0 = DefaultAllocator(); field_d8 = 0x8u; }
    virtual ~StrikerSpawner();
};
}  // namespace SPTG
void* Create_SPTG_StrikerSpawner() { return new (GenericFactoryResolve(GenericFactoryManager, 0x25055aa6u)->Allocate(sizeof(SPTG::StrikerSpawner))) SPTG::StrikerSpawner; }

// SPTG::SPTG_AnimatePhase : Onyx::Component::Compose<...> : SPTG::SPTG_Phase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct SPTG_AnimatePhaseLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint32_t field_58;
    uint8_t field_5c;
    char padding_5d[0x3];
    uint64_t field_60;
    uint64_t field_68;
    __attribute__((always_inline)) SPTG_AnimatePhaseLayout() { field_50 = 0; field_60 = 0; field_68 = 0; }
    virtual ~SPTG_AnimatePhaseLayout();
};
struct SPTG_AnimatePhase : SPTG_AnimatePhaseLayout {
    __attribute__((always_inline)) SPTG_AnimatePhase() { field_5c = 0x1; field_58 = 0x8u; }
    virtual ~SPTG_AnimatePhase();
};
}  // namespace SPTG
void* Create_SPTG_SPTG_AnimatePhase() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::SPTG_AnimatePhase))) SPTG::SPTG_AnimatePhase; }

// SPTG::SPTG_PressPhase : Onyx::Component::Compose<...> : SPTG::SPTG_Phase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct SPTG_PressPhaseLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint32_t field_58;
    uint8_t field_5c;
    char padding_5d[0x3];
    uint64_t field_60;
    uint64_t field_68;
    __attribute__((always_inline)) SPTG_PressPhaseLayout() { field_50 = 0; field_60 = 0; field_68 = 0; }
    virtual ~SPTG_PressPhaseLayout();
};
struct SPTG_PressPhase : SPTG_PressPhaseLayout {
    __attribute__((always_inline)) SPTG_PressPhase() { field_5c = 0x1; field_58 = 0x9u; }
    virtual ~SPTG_PressPhase();
};
}  // namespace SPTG
void* Create_SPTG_SPTG_PressPhase() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::SPTG_PressPhase))) SPTG::SPTG_PressPhase; }

// SPTG::AudioListPlayer : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct AudioListPlayerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint32_t field_58;
    char padding_5c[0x4];
    void* field_60;
    uint64_t field_68;
    uint64_t field_70;
    uint64_t field_78;
    char padding_80[0x8];
    __attribute__((always_inline)) AudioListPlayerLayout() { field_50 = 0; }
    virtual ~AudioListPlayerLayout();
};
struct AudioListPlayer : AudioListPlayerLayout {
    __attribute__((always_inline)) AudioListPlayer() { field_58 = 0; field_68 = 0; field_70 = 0; field_78 = 0; field_60 = DefaultAllocator(); }
    virtual ~AudioListPlayer();
};
}  // namespace SPTG
void* Create_SPTG_AudioListPlayer() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::AudioListPlayer))) SPTG::AudioListPlayer; }

// SPTG::AudioEventMerger : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct AudioEventMergerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint8_t field_58;
    char padding_59[0x7];
    __attribute__((always_inline)) AudioEventMergerLayout() { field_50 = 0; }
    virtual ~AudioEventMergerLayout();
};
struct AudioEventMerger : AudioEventMergerLayout {
    __attribute__((always_inline)) AudioEventMerger() { field_58 = 0x1; }
    virtual ~AudioEventMerger();
};
}  // namespace SPTG
void* Create_SPTG_AudioEventMerger() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::AudioEventMerger))) SPTG::AudioEventMerger; }

// SPTG::SimpleMergeStrategy : Onyx::Component::Compose<...> : SPTG::MergeStrategyInterface : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct SimpleMergeStrategyLayout : ::Onyx::Component::Base {
    char padding_8[0x44];
    uint8_t field_4c;
    char padding_4d[0x3];
    uint64_t field_50;
    void* field_58;
    void* field_60;
    uint64_t field_68;
    uint32_t field_70;
    char padding_74[0x4];
    uint32_t field_78;
    char padding_7c[0x4];
    void* field_80;
    char padding_88[0x8];
    void* field_90;
    uint64_t field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    char padding_b0[0x8];
    __attribute__((always_inline)) SimpleMergeStrategyLayout() {}
    virtual ~SimpleMergeStrategyLayout();
};
struct SimpleMergeStrategy : SimpleMergeStrategyLayout {
    __attribute__((always_inline)) SimpleMergeStrategy() { field_4c = 0x1; field_50 = 0; field_58 = reinterpret_cast<char*>(this) + 0x58; field_60 = reinterpret_cast<char*>(this) + 0x58; field_68 = 0; field_70 = 0; field_78 = 0; field_80 = DefaultAllocator(); field_98 = 0; field_a0 = 0; field_a8 = 0; field_90 = DefaultAllocator(); }
    virtual ~SimpleMergeStrategy();
};
}  // namespace SPTG
void* Create_SPTG_SimpleMergeStrategy() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::SimpleMergeStrategy))) SPTG::SimpleMergeStrategy; }

// SPTG::SPTG_Flow : Onyx::Component::Compose<...> : Onyx::Phase : Onyx::Component::Base
namespace SPTG {
struct SPTG_FlowLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    void* field_60;
    void* field_68;
    uint64_t field_70;
    uint32_t field_78;
    char padding_7c[0x4];
    uint32_t field_80;
    char padding_84[0x4];
    void* field_88;
    char padding_90[0x8];
    __attribute__((always_inline)) SPTG_FlowLayout() {}
    virtual ~SPTG_FlowLayout();
};
struct SPTG_Flow : SPTG_FlowLayout {
    __attribute__((always_inline)) SPTG_Flow() { field_50 = 0; field_58 = 0; field_60 = reinterpret_cast<char*>(this) + 0x60; field_70 = 0; field_78 = 0; field_80 = 0; field_68 = reinterpret_cast<char*>(this) + 0x60; field_88 = DefaultAllocator(); }
    virtual ~SPTG_Flow();
};
}  // namespace SPTG
void* Create_SPTG_SPTG_Flow() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::SPTG_Flow))) SPTG::SPTG_Flow; }

// SPTG::ActionGroupOr : Onyx::Component::Compose<...> : Onyx::ActionGroup : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct ActionGroupOrLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    void* field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    char padding_c0[0x10];
    __attribute__((always_inline)) ActionGroupOrLayout() { field_a8 = 0; field_b0 = 0; field_b8 = 0; field_a0 = DefaultAllocator(); }
    virtual ~ActionGroupOrLayout();
};
struct ActionGroupOr : ActionGroupOrLayout {
    __attribute__((always_inline)) ActionGroupOr() {}
    virtual ~ActionGroupOr();
};
}  // namespace SPTG
void* Create_SPTG_ActionGroupOr() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::ActionGroupOr))) SPTG::ActionGroupOr; }

// SPTG::PauseAnimatedAiActorAction : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct PauseAnimatedAiActorActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    void* field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    char padding_c0[0x10];
    __attribute__((always_inline)) PauseAnimatedAiActorActionLayout() { field_a8 = 0; field_b0 = 0; field_b8 = 0; field_a0 = DefaultAllocator(); }
    virtual ~PauseAnimatedAiActorActionLayout();
};
struct PauseAnimatedAiActorAction : PauseAnimatedAiActorActionLayout {
    __attribute__((always_inline)) PauseAnimatedAiActorAction() {}
    virtual ~PauseAnimatedAiActorAction();
};
}  // namespace SPTG
void* Create_SPTG_PauseAnimatedAiActorAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::PauseAnimatedAiActorAction))) SPTG::PauseAnimatedAiActorAction; }

// SPTG::UnlockNegaScottAction : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct UnlockNegaScottActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    __attribute__((always_inline)) UnlockNegaScottActionLayout() {}
    virtual ~UnlockNegaScottActionLayout();
};
struct UnlockNegaScottAction : UnlockNegaScottActionLayout {
    __attribute__((always_inline)) UnlockNegaScottAction() { field_a0 = 0; field_a8 = 0; field_b0 = 0; field_b8 = 0; }
    virtual ~UnlockNegaScottAction();
};
}  // namespace SPTG
void* Create_SPTG_UnlockNegaScottAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::UnlockNegaScottAction))) SPTG::UnlockNegaScottAction; }

// SPTG::ArenaModeAction : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct ArenaModeActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    char padding_a8[0x10];
    void* field_b8;
    uint64_t field_c0;
    uint64_t field_c8;
    uint64_t field_d0;
    char padding_d8[0x8];
    void* field_e0;
    uint64_t field_e8;
    uint64_t field_f0;
    uint64_t field_f8;
    char padding_100[0x8];
    __attribute__((always_inline)) ArenaModeActionLayout() {}
    virtual ~ArenaModeActionLayout();
};
struct ArenaModeAction : ArenaModeActionLayout {
    __attribute__((always_inline)) ArenaModeAction() { field_a0 = 0; field_c0 = 0; field_c8 = 0; field_d0 = 0; field_b8 = DefaultAllocator(); field_e8 = 0; field_f0 = 0; field_f8 = 0; field_e0 = DefaultAllocator(); }
    virtual ~ArenaModeAction();
};
}  // namespace SPTG
void* Create_SPTG_ArenaModeAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::ArenaModeAction))) SPTG::ArenaModeAction; }

// SPTG::BattleRoyalModeAction : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct BattleRoyalModeActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    void* field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    uint64_t field_c0;
    char padding_c8[0x8];
    uint64_t field_d0;
    void* field_d8;
    uint64_t field_e0;
    uint64_t field_e8;
    uint64_t field_f0;
    char padding_f8[0x8];
    void* field_100;
    uint64_t field_108;
    uint64_t field_110;
    uint64_t field_118;
    char padding_120[0x10];
    uint64_t field_130;
    uint32_t field_138;
    float field_13c;
    uint8_t field_140;
    char padding_141[0x7];
    __attribute__((always_inline)) BattleRoyalModeActionLayout() { field_a0 = 0; field_b0 = 0; field_b8 = 0; field_c0 = 0; field_a8 = DefaultAllocator(); }
    virtual ~BattleRoyalModeActionLayout();
};
struct BattleRoyalModeAction : BattleRoyalModeActionLayout {
    __attribute__((always_inline)) BattleRoyalModeAction() { field_d0 = 0; field_e0 = 0; field_e8 = 0; field_f0 = 0; field_d8 = DefaultAllocator(); field_108 = 0; field_110 = 0; field_118 = 0; field_100 = DefaultAllocator(); field_130 = 0; field_138 = 0; field_13c = 1.0f; field_140 = 0; }
    virtual ~BattleRoyalModeAction();
};
}  // namespace SPTG
void* Create_SPTG_BattleRoyalModeAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::BattleRoyalModeAction))) SPTG::BattleRoyalModeAction; }

// SPTG::CheckPointSelectAction : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct CheckPointSelectActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    int32_t field_a8;
    char padding_ac[0x4];
    __attribute__((always_inline)) CheckPointSelectActionLayout() { field_a0 = 0; }
    virtual ~CheckPointSelectActionLayout();
};
struct CheckPointSelectAction : CheckPointSelectActionLayout {
    __attribute__((always_inline)) CheckPointSelectAction() { field_a8 = -1; }
    virtual ~CheckPointSelectAction();
};
}  // namespace SPTG
void* Create_SPTG_CheckPointSelectAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::CheckPointSelectAction))) SPTG::CheckPointSelectAction; }

// SPTG::DodgeBallModeAction : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct DodgeBallModeActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    void* field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    uint64_t field_c0;
    char padding_c8[0x8];
    uint64_t field_d0;
    uint64_t field_d8;
    char padding_e0[0xc];
    uint32_t field_ec;
    uint8_t field_f0;
    char padding_f1[0x7];
    __attribute__((always_inline)) DodgeBallModeActionLayout() { field_a0 = 0; field_b0 = 0; field_b8 = 0; field_c0 = 0; field_a8 = DefaultAllocator(); field_d0 = 0; field_d8 = 0; }
    virtual ~DodgeBallModeActionLayout();
};
struct DodgeBallModeAction : DodgeBallModeActionLayout {
    __attribute__((always_inline)) DodgeBallModeAction() { field_ec = 0; field_f0 = 0; }
    virtual ~DodgeBallModeAction();
};
}  // namespace SPTG
void* Create_SPTG_DodgeBallModeAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::DodgeBallModeAction))) SPTG::DodgeBallModeAction; }

// SPTG::DropInAction
namespace SPTG {
struct DropInActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    uint64_t field_c0;
    uint64_t field_c8;
    uint64_t field_d0;
    uint64_t field_d8;
    uint64_t field_e0;
    uint64_t field_e8;
    uint64_t field_f0;
    uint64_t field_f8;
    uint64_t field_100;
    uint64_t field_108;
    uint64_t field_110;
    int32_t field_118;
    char padding_11c[0x4];
    uint64_t field_120;
    uint64_t field_128;
    uint32_t field_130;
    uint32_t field_134;
    uint64_t field_138;
    uint8_t field_140;
    char padding_141[0x3];
    uint32_t field_144;
    uint32_t field_148;
    uint32_t field_14c;
    uint32_t field_150;
    uint32_t field_154;
    uint32_t field_158;
    uint32_t field_15c;
    uint32_t field_160;
    uint32_t field_164;
    __attribute__((always_inline)) DropInActionLayout() { field_a0 = 0; field_a8 = 0; field_b0 = 0; field_b8 = 0; field_c0 = 0; field_c8 = 0; field_d0 = 0; field_d8 = 0; }
    virtual ~DropInActionLayout();
};
struct DropInAction : DropInActionLayout {
    __attribute__((always_inline)) DropInAction() { field_e0 = 0; field_e8 = 0; field_f0 = 0; field_f8 = 0; field_100 = 0; field_108 = 0; field_110 = 0; field_118 = -1; field_120 = 0; field_128 = 0; field_130 = 0x6u; field_134 = 0x8u; field_138 = 0; field_140 = 0; field_144 = 0x129u; field_148 = 0x12fu; field_14c = 0x135u; field_150 = 0x13bu; field_154 = 0x141u; field_15c = 0x14du; field_160 = 0x153u; field_164 = 0x159u; field_158 = 0x147u; }
    virtual ~DropInAction();
};
}  // namespace SPTG
void* Create_SPTG_DropInAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::DropInAction))) SPTG::DropInAction; }

// SPTG::SetFlashMenuVisibilityAction : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct SetFlashMenuVisibilityActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    int32_t field_a8;
    uint32_t field_ac;
    char padding_b0[0x8];
    __attribute__((always_inline)) SetFlashMenuVisibilityActionLayout() {}
    virtual ~SetFlashMenuVisibilityActionLayout();
};
struct SetFlashMenuVisibilityAction : SetFlashMenuVisibilityActionLayout {
    __attribute__((always_inline)) SetFlashMenuVisibilityAction() { field_a0 = 0; field_a8 = -1; field_ac = 0x2u; }
    virtual ~SetFlashMenuVisibilityAction();
};
}  // namespace SPTG
void* Create_SPTG_SetFlashMenuVisibilityAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::SetFlashMenuVisibilityAction))) SPTG::SetFlashMenuVisibilityAction; }

// SPTG::SetMainPlayerFlashMenuVisibilityAction : Onyx::Component::Compose<...> : SPTG::SetFlashMenuVisibilityAction : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct SetMainPlayerFlashMenuVisibilityActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    int32_t field_a8;
    uint32_t field_ac;
    char padding_b0[0x8];
    uint64_t field_b8;
    uint32_t field_c0;
    char padding_c4[0x4];
    void* field_c8;
    uint64_t field_d0;
    uint64_t field_d8;
    uint64_t field_e0;
    char padding_e8[0x8];
    __attribute__((always_inline)) SetMainPlayerFlashMenuVisibilityActionLayout() { field_a0 = 0; field_a8 = -1; field_ac = 0x2u; field_b8 = 0; }
    virtual ~SetMainPlayerFlashMenuVisibilityActionLayout();
};
struct SetMainPlayerFlashMenuVisibilityAction : SetMainPlayerFlashMenuVisibilityActionLayout {
    __attribute__((always_inline)) SetMainPlayerFlashMenuVisibilityAction() { field_c0 = 0; field_d0 = 0; field_d8 = 0; field_e0 = 0; field_c8 = DefaultAllocator(); }
    virtual ~SetMainPlayerFlashMenuVisibilityAction();
};
}  // namespace SPTG
void* Create_SPTG_SetMainPlayerFlashMenuVisibilityAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::SetMainPlayerFlashMenuVisibilityAction))) SPTG::SetMainPlayerFlashMenuVisibilityAction; }

// SPTG::SpawnInteractiveObjectActionEx : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct SpawnInteractiveObjectActionExLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    uint64_t field_a8;
    void* field_b0;
    uint64_t field_b8;
    uint64_t field_c0;
    uint64_t field_c8;
    char padding_d0[0x10];
    uint32_t field_e0;
    char padding_e4[0x4];
    void* field_e8;
    uint64_t field_f0;
    uint64_t field_f8;
    uint64_t field_100;
    char padding_108[0x8];
    uint64_t field_110;
    uint8_t field_118;
    char padding_119[0x7];
    __attribute__((always_inline)) SpawnInteractiveObjectActionExLayout() { field_a0 = 0; field_a8 = 0; }
    virtual ~SpawnInteractiveObjectActionExLayout();
};
struct SpawnInteractiveObjectActionEx : SpawnInteractiveObjectActionExLayout {
    __attribute__((always_inline)) SpawnInteractiveObjectActionEx() { field_b8 = 0; field_c0 = 0; field_c8 = 0; field_b0 = DefaultAllocator(); field_e0 = 0; field_f0 = 0; field_f8 = 0; field_100 = 0; field_e8 = DefaultAllocator(); field_110 = 0; field_118 = 0; }
    virtual ~SpawnInteractiveObjectActionEx();
};
}  // namespace SPTG
void* Create_SPTG_SpawnInteractiveObjectActionEx() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::SpawnInteractiveObjectActionEx))) SPTG::SpawnInteractiveObjectActionEx; }

// SPTG::SetLayerVisibilityAction : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct SetLayerVisibilityActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    int32_t field_a8;
    uint32_t field_ac;
    __attribute__((always_inline)) SetLayerVisibilityActionLayout() {}
    virtual ~SetLayerVisibilityActionLayout();
};
struct SetLayerVisibilityAction : SetLayerVisibilityActionLayout {
    __attribute__((always_inline)) SetLayerVisibilityAction() { field_a0 = 0; field_a8 = -1; field_ac = 0x2u; }
    virtual ~SetLayerVisibilityAction();
};
}  // namespace SPTG
void* Create_SPTG_SetLayerVisibilityAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::SetLayerVisibilityAction))) SPTG::SetLayerVisibilityAction; }

// SPTG::LoadLevelStageAction : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct LoadLevelStageActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    int32_t field_a8;
    char padding_ac[0x4];
    __attribute__((always_inline)) LoadLevelStageActionLayout() { field_a0 = 0; }
    virtual ~LoadLevelStageActionLayout();
};
struct LoadLevelStageAction : LoadLevelStageActionLayout {
    __attribute__((always_inline)) LoadLevelStageAction() { field_a8 = -1; }
    virtual ~LoadLevelStageAction();
};
}  // namespace SPTG
void* Create_SPTG_LoadLevelStageAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::LoadLevelStageAction))) SPTG::LoadLevelStageAction; }

// SPTG::SwitchLevelGateAction : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct SwitchLevelGateActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    int32_t field_a8;
    char padding_ac[0x4];
    __attribute__((always_inline)) SwitchLevelGateActionLayout() { field_a0 = 0; }
    virtual ~SwitchLevelGateActionLayout();
};
struct SwitchLevelGateAction : SwitchLevelGateActionLayout {
    __attribute__((always_inline)) SwitchLevelGateAction() { field_a8 = -1; }
    virtual ~SwitchLevelGateAction();
};
}  // namespace SPTG
void* Create_SPTG_SwitchLevelGateAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::SwitchLevelGateAction))) SPTG::SwitchLevelGateAction; }

// SPTG::PadControlModifier : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct PadControlModifierLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    void* field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    uint64_t field_c0;
    char padding_c8[0x8];
    void* field_d0;
    uint64_t field_d8;
    uint64_t field_e0;
    char padding_e8[0x8];
    uint64_t field_f0;
    uint32_t field_f8;
    char padding_fc[0x4];
    __attribute__((always_inline)) PadControlModifierLayout() {}
    virtual ~PadControlModifierLayout();
};
struct PadControlModifier : PadControlModifierLayout {
    __attribute__((always_inline)) PadControlModifier() { field_a0 = 0; field_b0 = 0; field_b8 = 0; field_c0 = 0; field_a8 = DefaultAllocator(); field_d0 = DefaultAllocator(); field_d8 = 0; field_e0 = 0; field_f0 = 0; field_f8 = 0; }
    virtual ~PadControlModifier();
};
}  // namespace SPTG
void* Create_SPTG_PadControlModifier() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::PadControlModifier))) SPTG::PadControlModifier; }

// SPTG::ShowObjectAction : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct ShowObjectActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    char padding_b8[0x8];
    __attribute__((always_inline)) ShowObjectActionLayout() { field_a0 = 0; }
    virtual ~ShowObjectActionLayout();
};
struct ShowObjectAction : ShowObjectActionLayout {
    __attribute__((always_inline)) ShowObjectAction() { field_a8 = 0; field_b0 = 0; }
    virtual ~ShowObjectAction();
};
}  // namespace SPTG
void* Create_SPTG_ShowObjectAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::ShowObjectAction))) SPTG::ShowObjectAction; }

// SPTG::SpawnPickupAction : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct SpawnPickupActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    void* field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    uint64_t field_c0;
    char padding_c8[0x10];
    uint32_t field_d8;
    char padding_dc[0x4];
    void* field_e0;
    uint64_t field_e8;
    uint64_t field_f0;
    uint64_t field_f8;
    char padding_100[0x8];
    uint64_t field_108;
    uint8_t field_110;
    char padding_111[0x7];
    __attribute__((always_inline)) SpawnPickupActionLayout() {}
    virtual ~SpawnPickupActionLayout();
};
struct SpawnPickupAction : SpawnPickupActionLayout {
    __attribute__((always_inline)) SpawnPickupAction() { field_a0 = 0; field_b0 = 0; field_b8 = 0; field_c0 = 0; field_a8 = DefaultAllocator(); field_d8 = 0; field_e8 = 0; field_f0 = 0; field_f8 = 0; field_e0 = DefaultAllocator(); field_108 = 0; field_110 = 0; }
    virtual ~SpawnPickupAction();
};
}  // namespace SPTG
void* Create_SPTG_SpawnPickupAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::SpawnPickupAction))) SPTG::SpawnPickupAction; }

// SPTG::WaitForActionEnd : Onyx::Component::Compose<...> : SPTG::ActorActionComponent : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct WaitForActionEndLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    char padding_a8[0x8];
    void* field_b0;
    uint64_t field_b8;
    uint64_t field_c0;
    uint64_t field_c8;
    char padding_d0[0x8];
    __attribute__((always_inline)) WaitForActionEndLayout() { field_a0 = 0; field_b8 = 0; field_c0 = 0; field_c8 = 0; field_b0 = DefaultAllocator(); }
    virtual ~WaitForActionEndLayout();
};
struct WaitForActionEnd : WaitForActionEndLayout {
    __attribute__((always_inline)) WaitForActionEnd() {}
    virtual ~WaitForActionEnd();
};
}  // namespace SPTG
void* Create_SPTG_WaitForActionEnd() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::WaitForActionEnd))) SPTG::WaitForActionEnd; }

// SPTG::WaitForButtonPress : Onyx::Component::Compose<...> : SPTG::ActorActionComponent : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct WaitForButtonPressLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    char padding_a8[0xc];
    uint32_t field_b4;
    void* field_b8;
    uint64_t field_c0;
    uint64_t field_c8;
    char padding_d0[0x8];
    uint64_t field_d8;
    __attribute__((always_inline)) WaitForButtonPressLayout() { field_a0 = 0; }
    virtual ~WaitForButtonPressLayout();
};
struct WaitForButtonPress : WaitForButtonPressLayout {
    __attribute__((always_inline)) WaitForButtonPress() { field_b4 = 0; field_c0 = 0; field_c8 = 0; field_d8 = 0; field_b8 = DefaultAllocator(); }
    virtual ~WaitForButtonPress();
};
}  // namespace SPTG
void* Create_SPTG_WaitForButtonPress() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::WaitForButtonPress))) SPTG::WaitForButtonPress; }

// SPTG::MoveIconInWorldMapAction : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct MoveIconInWorldMapActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    uint32_t field_b8;
    uint32_t field_bc;
    void* field_c0;
    uint64_t field_c8;
    void* field_d0;
    uint64_t field_d8;
    uint8_t field_e0;
    char padding_e1[0x1b];
    uint32_t field_fc;
    uint32_t field_100;
    char padding_104[0x4];
    __attribute__((always_inline)) MoveIconInWorldMapActionLayout() {}
    virtual ~MoveIconInWorldMapActionLayout();
};
struct MoveIconInWorldMapAction : MoveIconInWorldMapActionLayout {
    __attribute__((always_inline)) MoveIconInWorldMapAction() { field_a0 = 0; field_a8 = 0; field_b0 = 0; field_b8 = 0x8u; field_bc = 0; field_c0 = DefaultAllocator(); field_c8 = 0; field_d0 = DefaultAllocator(); field_d8 = 0; field_e0 = 0; field_fc = 0; field_100 = 0; }
    virtual ~MoveIconInWorldMapAction();
};
}  // namespace SPTG
void* Create_SPTG_MoveIconInWorldMapAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::MoveIconInWorldMapAction))) SPTG::MoveIconInWorldMapAction; }

// SPTG::ActorMoveAction : Onyx::Component::Compose<...> : SPTG::ActorActionComponent : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct ActorMoveActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    char padding_a8[0x2c];
    uint32_t field_d4;
    uint32_t field_d8;
    uint32_t field_dc;
    uint32_t field_e0;
    uint32_t field_e4;
    uint32_t field_e8;
    uint32_t field_ec;
    uint32_t field_f0;
    char padding_f4[0x4];
    __attribute__((always_inline)) ActorMoveActionLayout() {}
    virtual ~ActorMoveActionLayout();
};
struct ActorMoveAction : ActorMoveActionLayout {
    __attribute__((always_inline)) ActorMoveAction() { field_a0 = 0; field_d4 = 0; field_d8 = 0; field_dc = 0; field_e0 = 0; field_e4 = 0; field_e8 = 0; field_ec = 0; field_f0 = 0; }
    virtual ~ActorMoveAction();
};
}  // namespace SPTG
void* Create_SPTG_ActorMoveAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::ActorMoveAction))) SPTG::ActorMoveAction; }

// SPTG::ActorMoveWithGravityAction : Onyx::Component::Compose<...> : SPTG::ActorMoveAction : Onyx::Component::Compose<...> : SPTG::ActorActionComponent : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...>
namespace SPTG {
struct ActorMoveWithGravityActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    char padding_a8[0x2c];
    uint32_t field_d4;
    uint32_t field_d8;
    uint32_t field_dc;
    uint32_t field_e0;
    uint32_t field_e4;
    uint32_t field_e8;
    uint32_t field_ec;
    uint32_t field_f0;
    char padding_f4[0xc];
    __attribute__((always_inline)) ActorMoveWithGravityActionLayout() {}
    virtual ~ActorMoveWithGravityActionLayout();
};
struct ActorMoveWithGravityAction : ActorMoveWithGravityActionLayout {
    __attribute__((always_inline)) ActorMoveWithGravityAction() { field_a0 = 0; field_d4 = 0; field_d8 = 0; field_dc = 0; field_e0 = 0; field_e4 = 0; field_e8 = 0; field_ec = 0; field_f0 = 0; }
    virtual ~ActorMoveWithGravityAction();
};
}  // namespace SPTG
void* Create_SPTG_ActorMoveWithGravityAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::ActorMoveWithGravityAction))) SPTG::ActorMoveWithGravityAction; }

// SPTG::AnimatedObject : Onyx::Component::Compose<...> : SPTG::GraphicsObject : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct AnimatedObjectLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    char padding_60[0x18];
    uint8_t field_78;
    char padding_79[0x17];
    uint64_t field_90;
    void* field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    char padding_b8[0x2];
    uint16_t field_ba;
    uint16_t field_bc;
    char padding_be[0x2];
    int32_t field_c0;
    uint8_t field_c4;
    char padding_c5[0x3f];
    uint16_t field_104;
    char padding_106[0x2];
    uint64_t field_108;
    uint64_t field_110;
    uint8_t field_118;
    char padding_119[0x7];
    uint64_t field_120;
    uint64_t field_128;
    uint32_t field_130;
    char padding_134[0x4];
    uint64_t field_138;
    __attribute__((always_inline)) AnimatedObjectLayout() { field_50 = 0; field_58 = 0; field_78 = 0x1; field_90 = 0; field_a0 = 0; field_a8 = 0; field_b0 = 0; field_98 = DefaultAllocator(); field_ba = 0; field_bc = 0; field_c0 = -1; field_c4 = 0; field_104 = 0; field_108 = 0; field_110 = 0; field_118 = 0; field_120 = 0; field_128 = 0; }
    virtual ~AnimatedObjectLayout();
};
struct AnimatedObject : AnimatedObjectLayout {
    __attribute__((always_inline)) AnimatedObject() { field_130 = 0; field_138 = 0; }
    virtual ~AnimatedObject();
};
}  // namespace SPTG
void* Create_SPTG_AnimatedObject() { return new (GenericFactoryResolve(GenericFactoryManager, 0x2eae5813u)->Allocate(sizeof(SPTG::AnimatedObject))) SPTG::AnimatedObject; }

// SPTG::AnimationDescriptor : Onyx::Component::Compose<...> : Onyx::AnimatedObjectDescriptor : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct AnimationDescriptorLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x10];
    __attribute__((always_inline)) AnimationDescriptorLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~AnimationDescriptorLayout();
};
struct AnimationDescriptor : AnimationDescriptorLayout {
    __attribute__((always_inline)) AnimationDescriptor() {}
    virtual ~AnimationDescriptor();
};
}  // namespace SPTG
void* Create_SPTG_AnimationDescriptor() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::AnimationDescriptor))) SPTG::AnimationDescriptor; }

// SPTG::AnimationInfoHolder : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct AnimationInfoHolderLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    void* field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    char padding_78[0x18];
    __attribute__((always_inline)) AnimationInfoHolderLayout() { field_50 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_58 = DefaultAllocator(); }
    virtual ~AnimationInfoHolderLayout();
};
struct AnimationInfoHolder : AnimationInfoHolderLayout {
    __attribute__((always_inline)) AnimationInfoHolder() {}
    virtual ~AnimationInfoHolder();
};
}  // namespace SPTG
void* Create_SPTG_AnimationInfoHolder() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::AnimationInfoHolder))) SPTG::AnimationInfoHolder; }

// SPTG::AnimationInfoHolderBank : Onyx::Component::Compose<...> : SPTG::AnimationController : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct AnimationInfoHolderBankLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    void* field_60;
    uint64_t field_68;
    uint64_t field_70;
    char padding_78[0x8];
    __attribute__((always_inline)) AnimationInfoHolderBankLayout() {}
    virtual ~AnimationInfoHolderBankLayout();
};
struct AnimationInfoHolderBank : AnimationInfoHolderBankLayout {
    __attribute__((always_inline)) AnimationInfoHolderBank() { field_50 = 0; field_58 = 0; field_68 = 0; field_70 = 0; field_60 = DefaultAllocator(); }
    virtual ~AnimationInfoHolderBank();
};
}  // namespace SPTG
void* Create_SPTG_AnimationInfoHolderBank() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::AnimationInfoHolderBank))) SPTG::AnimationInfoHolderBank; }

// SPTG::FlashObject : Onyx::Component::Compose<...> : SPTG::GraphicsObject : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct FlashObjectLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    char padding_60[0x18];
    uint8_t field_78;
    char padding_79[0x17];
    uint64_t field_90;
    void* field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    char padding_b8[0x2];
    uint16_t field_ba;
    uint16_t field_bc;
    char padding_be[0x2];
    int32_t field_c0;
    uint8_t field_c4;
    char padding_c5[0x3f];
    uint16_t field_104;
    char padding_106[0x2];
    uint64_t field_108;
    uint64_t field_110;
    uint8_t field_118;
    char padding_119[0x7];
    __attribute__((always_inline)) FlashObjectLayout() { field_50 = 0; field_58 = 0; field_78 = 0x1; field_90 = 0; field_a0 = 0; field_a8 = 0; field_b0 = 0; field_98 = DefaultAllocator(); field_ba = 0; field_bc = 0; field_c0 = -1; }
    virtual ~FlashObjectLayout();
};
struct FlashObject : FlashObjectLayout {
    __attribute__((always_inline)) FlashObject() { field_c4 = 0; field_104 = 0; field_108 = 0; field_110 = 0; field_118 = 0; }
    virtual ~FlashObject();
};
}  // namespace SPTG
void* Create_SPTG_FlashObject() { return new (GenericFactoryResolve(GenericFactoryManager, 0x2eae5813u)->Allocate(sizeof(SPTG::FlashObject))) SPTG::FlashObject; }

// SPTG::GrayScreenTrigger : Onyx::Component::Compose<...> : Onyx::TriggerComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct GrayScreenTriggerLayout : ::Onyx::Component::Base {
    char padding_8[0x42];
    uint8_t field_4a;
    char padding_4b[0x5];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    char padding_88[0xc];
    uint32_t field_94;
    void* field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    char padding_b8[0x8];
    uint16_t field_c0;
    uint8_t field_c2;
    char padding_c3[0x5];
    __attribute__((always_inline)) GrayScreenTriggerLayout() { field_4a = 0x1; field_50 = 0; field_58 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_78 = 0; }
    virtual ~GrayScreenTriggerLayout();
};
struct GrayScreenTrigger : GrayScreenTriggerLayout {
    __attribute__((always_inline)) GrayScreenTrigger() { field_80 = 0; field_94 = 0; field_a0 = 0; field_a8 = 0; field_b0 = 0; field_98 = DefaultAllocator(); field_c0 = 0; field_c2 = 0; }
    virtual ~GrayScreenTrigger();
};
}  // namespace SPTG
void* Create_SPTG_GrayScreenTrigger() { return new (GenericFactoryResolve(GenericFactoryManager, 0x1af1d642u)->Allocate(sizeof(SPTG::GrayScreenTrigger))) SPTG::GrayScreenTrigger; }

// SPTG::MaterialModifierHolder : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct MaterialModifierHolderLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    __attribute__((always_inline)) MaterialModifierHolderLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~MaterialModifierHolderLayout();
};
struct MaterialModifierHolder : MaterialModifierHolderLayout {
    __attribute__((always_inline)) MaterialModifierHolder() {}
    virtual ~MaterialModifierHolder();
};
}  // namespace SPTG
void* Create_SPTG_MaterialModifierHolder() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::MaterialModifierHolder))) SPTG::MaterialModifierHolder; }

// SPTG::ShadowAnimatedObject : Onyx::Component::Compose<...> : SPTG::AnimatedObject : Onyx::Component::Compose<...> : SPTG::GraphicsObject : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct ShadowAnimatedObjectLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    char padding_60[0x18];
    uint8_t field_78;
    char padding_79[0x17];
    uint64_t field_90;
    void* field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    char padding_b8[0x2];
    uint16_t field_ba;
    uint16_t field_bc;
    char padding_be[0x2];
    int32_t field_c0;
    uint8_t field_c4;
    char padding_c5[0x3f];
    uint16_t field_104;
    char padding_106[0x2];
    uint64_t field_108;
    uint64_t field_110;
    uint8_t field_118;
    char padding_119[0x7];
    uint64_t field_120;
    uint64_t field_128;
    uint32_t field_130;
    char padding_134[0x4];
    uint64_t field_138;
    uint64_t field_140;
    char padding_148[0x8];
    __attribute__((always_inline)) ShadowAnimatedObjectLayout() { field_50 = 0; field_58 = 0; field_78 = 0x1; field_90 = 0; field_a0 = 0; field_a8 = 0; field_b0 = 0; field_98 = DefaultAllocator(); field_ba = 0; field_bc = 0; field_c0 = -1; }
    virtual ~ShadowAnimatedObjectLayout();
};
struct ShadowAnimatedObject : ShadowAnimatedObjectLayout {
    __attribute__((always_inline)) ShadowAnimatedObject() { field_c4 = 0; field_104 = 0; field_108 = 0; field_110 = 0; field_118 = 0; field_120 = 0; field_128 = 0; field_130 = 0; field_138 = 0; field_140 = 0; }
    virtual ~ShadowAnimatedObject();
};
}  // namespace SPTG
void* Create_SPTG_ShadowAnimatedObject() { return new (GenericFactoryResolve(GenericFactoryManager, 0x2eae5813u)->Allocate(sizeof(SPTG::ShadowAnimatedObject))) SPTG::ShadowAnimatedObject; }

// SPTG::StaticAnimatedObject : Onyx::Component::Compose<...> : SPTG::AnimatedObject : Onyx::Component::Compose<...> : SPTG::GraphicsObject : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct StaticAnimatedObjectLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    char padding_60[0x18];
    uint8_t field_78;
    char padding_79[0x17];
    uint64_t field_90;
    void* field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    char padding_b8[0x2];
    uint16_t field_ba;
    uint16_t field_bc;
    char padding_be[0x2];
    int32_t field_c0;
    uint8_t field_c4;
    char padding_c5[0x3f];
    uint16_t field_104;
    char padding_106[0x2];
    uint64_t field_108;
    uint64_t field_110;
    uint8_t field_118;
    char padding_119[0x7];
    uint64_t field_120;
    uint64_t field_128;
    uint32_t field_130;
    char padding_134[0x4];
    uint64_t field_138;
    uint64_t field_140;
    __attribute__((always_inline)) StaticAnimatedObjectLayout() { field_50 = 0; field_58 = 0; field_78 = 0x1; field_90 = 0; field_a0 = 0; field_a8 = 0; field_b0 = 0; field_98 = DefaultAllocator(); field_ba = 0; field_bc = 0; field_c0 = -1; }
    virtual ~StaticAnimatedObjectLayout();
};
struct StaticAnimatedObject : StaticAnimatedObjectLayout {
    __attribute__((always_inline)) StaticAnimatedObject() { field_c4 = 0; field_104 = 0; field_108 = 0; field_110 = 0; field_118 = 0; field_120 = 0; field_128 = 0; field_130 = 0; field_138 = 0; field_140 = 0; }
    virtual ~StaticAnimatedObject();
};
}  // namespace SPTG
void* Create_SPTG_StaticAnimatedObject() { return new (GenericFactoryResolve(GenericFactoryManager, 0x2eae5813u)->Allocate(sizeof(SPTG::StaticAnimatedObject))) SPTG::StaticAnimatedObject; }

// SPTG::StaticObject : Onyx::Component::Compose<...> : SPTG::GraphicsObject : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct StaticObjectLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    char padding_60[0x18];
    uint8_t field_78;
    char padding_79[0x17];
    uint64_t field_90;
    void* field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    char padding_b8[0x2];
    uint16_t field_ba;
    uint16_t field_bc;
    char padding_be[0x2];
    int32_t field_c0;
    uint8_t field_c4;
    char padding_c5[0x3f];
    uint16_t field_104;
    char padding_106[0x2];
    uint64_t field_108;
    uint64_t field_110;
    uint8_t field_118;
    char padding_119[0x7];
    uint64_t field_120;
    __attribute__((always_inline)) StaticObjectLayout() { field_50 = 0; field_58 = 0; field_78 = 0x1; field_90 = 0; field_a0 = 0; field_a8 = 0; field_b0 = 0; field_98 = DefaultAllocator(); field_ba = 0; field_bc = 0; field_c0 = -1; field_c4 = 0; field_104 = 0; field_108 = 0; }
    virtual ~StaticObjectLayout();
};
struct StaticObject : StaticObjectLayout {
    __attribute__((always_inline)) StaticObject() { field_110 = 0; field_118 = 0; field_120 = 0; }
    virtual ~StaticObject();
};
}  // namespace SPTG
void* Create_SPTG_StaticObject() { return new (GenericFactoryResolve(GenericFactoryManager, 0x2eae5813u)->Allocate(sizeof(SPTG::StaticObject))) SPTG::StaticObject; }

// SPTG::HudFiniteNumberCounter : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct HudFiniteNumberCounterLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    void* field_60;
    uint64_t field_68;
    uint64_t field_70;
    uint64_t field_78;
    char padding_80[0x8];
    void* field_88;
    uint64_t field_90;
    uint64_t field_98;
    uint64_t field_a0;
    char padding_a8[0x8];
    uint64_t field_b0;
    uint16_t field_b8;
    char padding_ba[0x6];
    __attribute__((always_inline)) HudFiniteNumberCounterLayout() { field_50 = 0; field_58 = 0; field_68 = 0; field_70 = 0; field_78 = 0; field_60 = DefaultAllocator(); field_90 = 0; }
    virtual ~HudFiniteNumberCounterLayout();
};
struct HudFiniteNumberCounter : HudFiniteNumberCounterLayout {
    __attribute__((always_inline)) HudFiniteNumberCounter() { field_98 = 0; field_a0 = 0; field_88 = DefaultAllocator(); field_b0 = 0; field_b8 = 0; }
    virtual ~HudFiniteNumberCounter();
};
}  // namespace SPTG
void* Create_SPTG_HudFiniteNumberCounter() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::HudFiniteNumberCounter))) SPTG::HudFiniteNumberCounter; }

// SPTG::HudObject : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct HudObjectLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    void* field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    char padding_78[0x8];
    void* field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint64_t field_98;
    char padding_a0[0x8];
    uint64_t field_a8;
    uint64_t field_b0;
    char padding_b8[0x4];
    int32_t field_bc;
    uint8_t field_c0;
    char padding_c1[0x7];
    __attribute__((always_inline)) HudObjectLayout() { field_50 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_58 = DefaultAllocator(); field_88 = 0; field_90 = 0; field_98 = 0; field_80 = DefaultAllocator(); field_a8 = 0; field_b0 = 0; }
    virtual ~HudObjectLayout();
};
struct HudObject : HudObjectLayout {
    __attribute__((always_inline)) HudObject() { field_bc = -1; field_c0 = 0x1; }
    virtual ~HudObject();
};
}  // namespace SPTG
void* Create_SPTG_HudObject() { return new (GenericFactoryResolve(GenericFactoryManager, 0x3807154bu)->Allocate(sizeof(SPTG::HudObject))) SPTG::HudObject; }

// SPTG::SPTG_HudDirectorPhase : Onyx::Component::Compose<...> : SPTG::SPTG_Phase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct SPTG_HudDirectorPhaseLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint32_t field_58;
    uint8_t field_5c;
    char padding_5d[0x3];
    uint64_t field_60;
    uint64_t field_68;
    __attribute__((always_inline)) SPTG_HudDirectorPhaseLayout() { field_50 = 0; field_60 = 0; field_68 = 0; }
    virtual ~SPTG_HudDirectorPhaseLayout();
};
struct SPTG_HudDirectorPhase : SPTG_HudDirectorPhaseLayout {
    __attribute__((always_inline)) SPTG_HudDirectorPhase() { field_58 = 0x7u; field_5c = 0x1; }
    virtual ~SPTG_HudDirectorPhase();
};
}  // namespace SPTG
void* Create_SPTG_SPTG_HudDirectorPhase() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::SPTG_HudDirectorPhase))) SPTG::SPTG_HudDirectorPhase; }

// SPTG::Boundary : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct BoundaryLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    void* field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    char padding_78[0x8];
    void* field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint64_t field_98;
    char padding_a0[0x18];
    __attribute__((always_inline)) BoundaryLayout() {}
    virtual ~BoundaryLayout();
};
struct Boundary : BoundaryLayout {
    __attribute__((always_inline)) Boundary() { field_50 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_58 = DefaultAllocator(); field_88 = 0; field_90 = 0; field_98 = 0; field_80 = DefaultAllocator(); }
    virtual ~Boundary();
};
}  // namespace SPTG
void* Create_SPTG_Boundary() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::Boundary))) SPTG::Boundary; }

// SPTG::BoundaryGraphics : Onyx::Component::Compose<...> : SPTG::FillLineListShape : Onyx::Component::Compose<...> : Onyx::Graphics::ShapeComponent : Onyx::Component::Compose<...> : Onyx::Graphics::Visual : Onyx::Component::Compose<...>
namespace SPTG {
struct BoundaryGraphicsLayout : ::SPTG::FillLineListShape {
    char padding_8[0x190];
    uint64_t field_198;
    char padding_1a0[0x8];
    void* field_1a8;
    uint64_t field_1b0;
    uint64_t field_1b8;
    uint64_t field_1c0;
    char padding_1c8[0x8];
    void* field_1d0;
    uint64_t field_1d8;
    uint64_t field_1e0;
    uint64_t field_1e8;
    char padding_1f0[0x8];
    __attribute__((always_inline)) BoundaryGraphicsLayout() {}
    virtual ~BoundaryGraphicsLayout();
};
struct BoundaryGraphics : BoundaryGraphicsLayout {
    __attribute__((always_inline)) BoundaryGraphics() { field_198 = 0; field_1b0 = 0; field_1b8 = 0; field_1c0 = 0; field_1a8 = DefaultAllocator(); field_1d8 = 0; field_1e0 = 0; field_1e8 = 0; field_1d0 = DefaultAllocator(); }
    virtual ~BoundaryGraphics();
};
}  // namespace SPTG
void* Create_SPTG_BoundaryGraphics() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(SPTG::BoundaryGraphics))) SPTG::BoundaryGraphics; }

// SPTG::LevelBoundary : Onyx::Component::Compose<...> : SPTG::Boundary : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct LevelBoundaryLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    void* field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    char padding_78[0x8];
    void* field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint64_t field_98;
    char padding_a0[0x18];
    uint64_t field_b8;
    uint8_t field_c0;
    char padding_c1[0x7];
    __attribute__((always_inline)) LevelBoundaryLayout() { field_50 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_58 = DefaultAllocator(); field_88 = 0; field_90 = 0; }
    virtual ~LevelBoundaryLayout();
};
struct LevelBoundary : LevelBoundaryLayout {
    __attribute__((always_inline)) LevelBoundary() { field_98 = 0; field_80 = DefaultAllocator(); field_b8 = 0; field_c0 = 0; }
    virtual ~LevelBoundary();
};
}  // namespace SPTG
void* Create_SPTG_LevelBoundary() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::LevelBoundary))) SPTG::LevelBoundary; }

// SPTG::CheckPoint : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct CheckPointLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    void* field_68;
    uint8_t field_70;
    char padding_71[0x7];
    int32_t field_78;
    char padding_7c[0x4];
    __attribute__((always_inline)) CheckPointLayout() { field_50 = 0; }
    virtual ~CheckPointLayout();
};
struct CheckPoint : CheckPointLayout {
    __attribute__((always_inline)) CheckPoint() { field_58 = 0; field_60 = 0; field_68 = this; field_70 = 0; field_78 = -1; }
    virtual ~CheckPoint();
};
}  // namespace SPTG
void* Create_SPTG_CheckPoint() { return new (GenericFactoryResolve(GenericFactoryManager, 0x5eacda38u)->Allocate(sizeof(SPTG::CheckPoint))) SPTG::CheckPoint; }

// SPTG::LevelAIManager : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct LevelAIManagerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint8_t field_68;
    char padding_69[0x7];
    __attribute__((always_inline)) LevelAIManagerLayout() { field_50 = 0; field_58 = 0; }
    virtual ~LevelAIManagerLayout();
};
struct LevelAIManager : LevelAIManagerLayout {
    __attribute__((always_inline)) LevelAIManager() { field_60 = 0; field_68 = 0; }
    virtual ~LevelAIManager();
};
}  // namespace SPTG
void* Create_SPTG_LevelAIManager() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::LevelAIManager))) SPTG::LevelAIManager; }

// SPTG::ParallaxUpdater : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct ParallaxUpdaterLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    void* field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint64_t field_78;
    void* field_80;
    uint64_t field_88;
    uint64_t field_90;
    char padding_98[0x8];
    uint64_t field_a0;
    __attribute__((always_inline)) ParallaxUpdaterLayout() {}
    virtual ~ParallaxUpdaterLayout();
};
struct ParallaxUpdater : ParallaxUpdaterLayout {
    __attribute__((always_inline)) ParallaxUpdater() { field_50 = 0; field_60 = 0; field_68 = 0; field_78 = 0; field_80 = DefaultAllocator(); field_90 = 0; field_a0 = 0; field_58 = DefaultAllocator(); field_88 = 0; }
    virtual ~ParallaxUpdater();
};
}  // namespace SPTG
void* Create_SPTG_ParallaxUpdater() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::ParallaxUpdater))) SPTG::ParallaxUpdater; }

// SPTG::CameraCutScenePositionProvider : Onyx::Component::Compose<...> : SPTG::CameraPositionProvider : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct CameraCutScenePositionProviderLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint32_t field_78;
    char padding_7c[0x24];
    __attribute__((always_inline)) CameraCutScenePositionProviderLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~CameraCutScenePositionProviderLayout();
};
struct CameraCutScenePositionProvider : CameraCutScenePositionProviderLayout {
    __attribute__((always_inline)) CameraCutScenePositionProvider() { field_78 = 0; }
    virtual ~CameraCutScenePositionProvider();
};
}  // namespace SPTG
void* Create_SPTG_CameraCutScenePositionProvider() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::CameraCutScenePositionProvider))) SPTG::CameraCutScenePositionProvider; }

// SPTG::CameraTrackPlayerPositionProvider : Onyx::Component::Compose<...> : SPTG::CameraPositionProvider : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct CameraTrackPlayerPositionProviderLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint32_t field_78;
    char padding_7c[0x4];
    uint64_t field_80;
    char padding_88[0x10];
    __attribute__((always_inline)) CameraTrackPlayerPositionProviderLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); field_78 = 0; field_80 = 0; }
    virtual ~CameraTrackPlayerPositionProviderLayout();
};
struct CameraTrackPlayerPositionProvider : CameraTrackPlayerPositionProviderLayout {
    __attribute__((always_inline)) CameraTrackPlayerPositionProvider() {}
    virtual ~CameraTrackPlayerPositionProvider();
};
}  // namespace SPTG
void* Create_SPTG_CameraTrackPlayerPositionProvider() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::CameraTrackPlayerPositionProvider))) SPTG::CameraTrackPlayerPositionProvider; }

// SPTG::CameraShaker : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct CameraShakerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    void* field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    char padding_78[0x8];
    void* field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint64_t field_98;
    char padding_a0[0x8];
    void* field_a8;
    void* field_b0;
    void* field_b8;
    uint64_t field_c0;
    char padding_c8[0x8];
    void* field_d0;
    void* field_d8;
    void* field_e0;
    uint64_t field_e8;
    char padding_f0[0x8];
    __attribute__((always_inline)) CameraShakerLayout() { field_50 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_58 = DefaultAllocator(); }
    virtual ~CameraShakerLayout();
};
struct CameraShaker : CameraShakerLayout {
    __attribute__((always_inline)) CameraShaker() { field_88 = 0; field_90 = 0; field_98 = 0; field_80 = DefaultAllocator(); field_a8 = DefaultAllocator(); field_b0 = reinterpret_cast<char*>(this) + 0xb0; field_b8 = reinterpret_cast<char*>(this) + 0xb0; field_c0 = 0; field_d0 = DefaultAllocator(); field_d8 = reinterpret_cast<char*>(this) + 0xd8; field_e0 = reinterpret_cast<char*>(this) + 0xd8; field_e8 = 0; }
    virtual ~CameraShaker();
};
}  // namespace SPTG
void* Create_SPTG_CameraShaker() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::CameraShaker))) SPTG::CameraShaker; }

// SPTG::CameraTrackBoundary : Onyx::Component::Compose<...> : SPTG::Boundary : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct CameraTrackBoundaryLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    void* field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    char padding_78[0x8];
    void* field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint64_t field_98;
    char padding_a0[0x18];
    uint64_t field_b8;
    __attribute__((always_inline)) CameraTrackBoundaryLayout() { field_50 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_58 = DefaultAllocator(); field_88 = 0; field_90 = 0; }
    virtual ~CameraTrackBoundaryLayout();
};
struct CameraTrackBoundary : CameraTrackBoundaryLayout {
    __attribute__((always_inline)) CameraTrackBoundary() { field_98 = 0; field_80 = DefaultAllocator(); field_b8 = 0; }
    virtual ~CameraTrackBoundary();
};
}  // namespace SPTG
void* Create_SPTG_CameraTrackBoundary() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::CameraTrackBoundary))) SPTG::CameraTrackBoundary; }

// SPTG::LevelItemAccessor
namespace SPTG {
struct LevelItemAccessorLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint64_t field_98;
    uint64_t field_a0;
    __attribute__((always_inline)) LevelItemAccessorLayout() { field_50 = 0; field_58 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_78 = 0; field_80 = 0; field_88 = 0; field_90 = 0; field_98 = 0; field_a0 = 0; }
    virtual ~LevelItemAccessorLayout();
};
struct LevelItemAccessor : LevelItemAccessorLayout {
    __attribute__((always_inline)) LevelItemAccessor() {}
    virtual ~LevelItemAccessor();
};
}  // namespace SPTG
void* Create_SPTG_LevelItemAccessor() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::LevelItemAccessor))) SPTG::LevelItemAccessor; }

// SPTG::LevelGate : Onyx::Component::Compose<...> : Onyx::Flow::Gate : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct LevelGateLayout : Base_6a48c0 {
    char padding_8[0xd0];
    uint64_t field_d8;
    uint64_t field_e0;
    int32_t field_e8;
    char padding_ec[0x4];
    void* field_f0;
    uint64_t field_f8;
    uint64_t field_100;
    uint64_t field_108;
    char padding_110[0x10];
    __attribute__((always_inline)) LevelGateLayout() {}
    virtual ~LevelGateLayout();
};
struct LevelGate : LevelGateLayout {
    __attribute__((always_inline)) LevelGate() { field_d8 = 0; field_e0 = 0; field_e8 = -1; field_f8 = 0; field_100 = 0; field_108 = 0; field_f0 = DefaultAllocator(); }
    virtual ~LevelGate();
};
}  // namespace SPTG
void* Create_SPTG_LevelGate() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::LevelGate))) SPTG::LevelGate; }

// SPTG::LevelWindowAccessor : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct LevelWindowAccessorLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    uint64_t field_78;
    __attribute__((always_inline)) LevelWindowAccessorLayout() { field_50 = 0; field_58 = 0; }
    virtual ~LevelWindowAccessorLayout();
};
struct LevelWindowAccessor : LevelWindowAccessorLayout {
    __attribute__((always_inline)) LevelWindowAccessor() { field_60 = 0; field_68 = 0; field_70 = 0; field_78 = 0; }
    virtual ~LevelWindowAccessor();
};
}  // namespace SPTG
void* Create_SPTG_LevelWindowAccessor() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::LevelWindowAccessor))) SPTG::LevelWindowAccessor; }

// SPTG::ControllerDisconnectionMessage : Onyx::Component::Compose<...> : SPTG::FlashMenu : Onyx::Component::Compose<...> : Onyx::Fire::FireVisual : Onyx::Component::Compose<...> : Onyx::Fire::FireVisualBase : Onyx::Component::Compose<...>
namespace SPTG {
struct ControllerDisconnectionMessageLayout : ::Onyx::Fire::FireVisual {
    char padding_8[0x26b];
    uint8_t field_273;
    char padding_274[0x3c];
    uint64_t field_2b0;
    uint64_t field_2b8;
    uint64_t field_2c0;
    char padding_2c8[0x4];
    int32_t field_2cc;
    uint32_t field_2d0;
    uint8_t field_2d4;
    char padding_2d5[0x3];
    __attribute__((always_inline)) ControllerDisconnectionMessageLayout() { field_2b0 = 0; }
    virtual ~ControllerDisconnectionMessageLayout();
};
struct ControllerDisconnectionMessage : ControllerDisconnectionMessageLayout {
    __attribute__((always_inline)) ControllerDisconnectionMessage() { field_2b8 = 0; field_2c0 = 0; field_2cc = -1; field_2d0 = 0x6u; field_2d4 = 0; field_273 = 0; }
    virtual ~ControllerDisconnectionMessage();
};
}  // namespace SPTG
void* Create_SPTG_ControllerDisconnectionMessage() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(SPTG::ControllerDisconnectionMessage))) SPTG::ControllerDisconnectionMessage; }

// SPTG::PopupBox (factory 0x75ad60), written by hand: the lifter skipped it.
namespace SPTG {
struct PopupBoxLayout : ::Onyx::Fire::FireVisual {
    char padding_8[0x2ac];
    __attribute__((always_inline)) PopupBoxLayout() {}
    virtual ~PopupBoxLayout();
};
// The member is PopupBox's own, in the base's tail padding: declared on the Layout instead, its address is worked out
// after the zero's guard rather than before it as in the original.
struct PopupBox : PopupBoxLayout {
    Vector2 field_2b4;
    __attribute__((always_inline)) PopupBox() { field_2b4 = Vector2::Zero(); }
    virtual ~PopupBox();
};
static_assert(__builtin_offsetof(SPTG::PopupBox, field_2b4) == 0x2b4 && sizeof(SPTG::PopupBox) == 0x2c0, "PopupBox layout");
}  // namespace SPTG
void* Create_SPTG_PopupBox() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(SPTG::PopupBox))) SPTG::PopupBox; }

// SPTG::LevelCamera (factory 0x754ac0), written by hand: the lifter skipped it. The zeroing before the vtable is set
// (+0x90 to +0xaf) and after it (+0x60 to +0x8f) are two separate blocks. The constructor ends by setting +0x58 to 2
// when it differs and raising +0x5c, an inlined setter.
namespace SPTG {
struct LevelCameraLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    int32_t field_58;
    uint8_t field_5c;
    char padding_5d[0x3];
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint64_t field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    __attribute__((always_inline)) LevelCameraLayout() { field_50 = 0; field_58 = 0x7fffffff; field_90 = 0; field_98 = 0; field_a0 = 0; field_a8 = 0; field_5c = 0; }
    virtual ~LevelCameraLayout();
};
struct LevelCamera : LevelCameraLayout {
    Vector2 field_b0;
    uint16_t field_b8;
    __attribute__((always_inline)) LevelCamera() {
        field_60 = 0; field_68 = 0; field_70 = 0; field_78 = 0; field_80 = 0; field_88 = 0;
        field_b0 = Vector2::Zero();
        field_b8 = 1;
        if (field_58 != 2) field_58 = 2;
        field_5c = 1;
    }
    virtual ~LevelCamera();
};
}  // namespace SPTG
static_assert(sizeof(SPTG::LevelCamera) == 0xc0, "LevelCamera size");
void* Create_SPTG_LevelCamera() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::LevelCamera))) SPTG::LevelCamera; }

// SPTG::ControlMenu : Onyx::Component::Compose<...> : SPTG::FlashMenu : Onyx::Component::Compose<...> : Onyx::Fire::FireVisual : Onyx::Component::Compose<...> : Onyx::Fire::FireVisualBase : Onyx::Component::Compose<...>
namespace SPTG {
struct ControlMenuLayout : ::Onyx::Fire::FireVisual {
    char padding_8[0x26b];
    uint8_t field_273;
    char padding_274[0x3d];
    uint8_t field_2b1;
    uint8_t field_2b2;
    uint8_t field_2b3;
    uint8_t field_2b4;
    char padding_2b5[0x3];
    __attribute__((always_inline)) ControlMenuLayout() {}
    virtual ~ControlMenuLayout();
};
struct ControlMenu : ControlMenuLayout {
    __attribute__((always_inline)) ControlMenu() { field_2b1 = 0; field_2b2 = 0; field_2b3 = 0; field_2b4 = 0; field_273 = 0; }
    virtual ~ControlMenu();
};
}  // namespace SPTG
void* Create_SPTG_ControlMenu() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(SPTG::ControlMenu))) SPTG::ControlMenu; }

// SPTG::EndingCredits : Onyx::Component::Compose<...> : SPTG::FlashMenu : Onyx::Component::Compose<...> : Onyx::Fire::FireVisual : Onyx::Component::Compose<...> : Onyx::Fire::FireVisualBase : Onyx::Component::Compose<...>
namespace SPTG {
struct EndingCreditsLayout : ::Onyx::Fire::FireVisual {
    char padding_8[0x26b];
    uint8_t field_273;
    char padding_274[0x3c];
    uint64_t field_2b0;
    uint64_t field_2b8;
    char padding_2c0[0x8];
    __attribute__((always_inline)) EndingCreditsLayout() {}
    virtual ~EndingCreditsLayout();
};
struct EndingCredits : EndingCreditsLayout {
    __attribute__((always_inline)) EndingCredits() { field_273 = 0; field_2b0 = 0; field_2b8 = 0; }
    virtual ~EndingCredits();
};
}  // namespace SPTG
void* Create_SPTG_EndingCredits() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(SPTG::EndingCredits))) SPTG::EndingCredits; }

// SPTG::DialogBox : Onyx::Component::Compose<...> : SPTG::FlashMenu : Onyx::Component::Compose<...> : Onyx::Fire::FireVisual : Onyx::Component::Compose<...> : Onyx::Fire::FireVisualBase : Onyx::Component::Compose<...>
namespace SPTG {
struct DialogBoxLayout : ::Onyx::Fire::FireVisual {
    char padding_8[0x2a8];
    uint64_t field_2b0;
    uint64_t field_2b8;
    void* field_2c0;
    uint8_t field_2c8;
    char padding_2c9[0x7];
    uint64_t field_2d0;
    void* field_2d8;
    uint8_t field_2e0;
    char padding_2e1[0xb];
    uint16_t field_2ec;
    char padding_2ee[0xa];
    __attribute__((always_inline)) DialogBoxLayout() { field_2b0 = 0; }
    virtual ~DialogBoxLayout();
};
struct DialogBox : DialogBoxLayout {
    __attribute__((always_inline)) DialogBox() { field_2b8 = 0; field_2c8 = 0; field_2d0 = 0; field_2e0 = 0; field_2ec = 0; field_2c0 = this; field_2d8 = this; }
    virtual ~DialogBox();
};
}  // namespace SPTG
void* Create_SPTG_DialogBox() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(SPTG::DialogBox))) SPTG::DialogBox; }

// SPTG::ExModeGameOver : Onyx::Component::Compose<...> : SPTG::FlashMenu : Onyx::Component::Compose<...> : Onyx::Fire::FireVisual : Onyx::Component::Compose<...> : Onyx::Fire::FireVisualBase : Onyx::Component::Compose<...>
namespace SPTG {
struct ExModeGameOverLayout : ::Onyx::Fire::FireVisual {
    char padding_8[0x2a8];
    uint64_t field_2b0;
    uint64_t field_2b8;
    uint64_t field_2c0;
    uint64_t field_2c8;
    uint32_t field_2d0;
    uint8_t field_2d4;
    char padding_2d5[0x7];
    uint32_t field_2dc;
    char padding_2e0[0x8];
    __attribute__((always_inline)) ExModeGameOverLayout() { field_2b0 = 0; field_2b8 = 0; field_2c0 = 0; }
    virtual ~ExModeGameOverLayout();
};
struct ExModeGameOver : ExModeGameOverLayout {
    __attribute__((always_inline)) ExModeGameOver() { field_2c8 = 0; field_2d0 = 0; field_2d4 = 0; field_2dc = 0x4u; }
    virtual ~ExModeGameOver();
};
}  // namespace SPTG
void* Create_SPTG_ExModeGameOver() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(SPTG::ExModeGameOver))) SPTG::ExModeGameOver; }

// SPTG::ExModeResult : Onyx::Component::Compose<...> : SPTG::FlashMenu : Onyx::Component::Compose<...> : Onyx::Fire::FireVisual : Onyx::Component::Compose<...> : Onyx::Fire::FireVisualBase : Onyx::Component::Compose<...>
namespace SPTG {
struct ExModeResultLayout : ::Onyx::Fire::FireVisual {
    char padding_8[0x2a8];
    uint64_t field_2b0;
    uint64_t field_2b8;
    uint64_t field_2c0;
    uint64_t field_2c8;
    uint64_t field_2d0;
    uint64_t field_2d8;
    uint32_t field_2e0;
    uint8_t field_2e4;
    char padding_2e5[0xb];
    __attribute__((always_inline)) ExModeResultLayout() { field_2b0 = 0; field_2b8 = 0; field_2c0 = 0; field_2c8 = 0; field_2d0 = 0; field_2d8 = 0; }
    virtual ~ExModeResultLayout();
};
struct ExModeResult : ExModeResultLayout {
    __attribute__((always_inline)) ExModeResult() { field_2e0 = 0; field_2e4 = 0; }
    virtual ~ExModeResult();
};
}  // namespace SPTG
void* Create_SPTG_ExModeResult() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(SPTG::ExModeResult))) SPTG::ExModeResult; }

// SPTG::ExModeResultExtra : Onyx::Component::Compose<...> : SPTG::FlashMenu : Onyx::Component::Compose<...> : Onyx::Fire::FireVisual : Onyx::Component::Compose<...> : Onyx::Fire::FireVisualBase : Onyx::Component::Compose<...>
namespace SPTG {
struct ExModeResultExtraLayout : ::Onyx::Fire::FireVisual {
    char padding_8[0x2a8];
    uint64_t field_2b0;
    uint64_t field_2b8;
    uint64_t field_2c0;
    uint64_t field_2c8;
    uint32_t field_2d0;
    uint8_t field_2d4;
    char padding_2d5[0xb];
    __attribute__((always_inline)) ExModeResultExtraLayout() { field_2b0 = 0; field_2b8 = 0; field_2c0 = 0; }
    virtual ~ExModeResultExtraLayout();
};
struct ExModeResultExtra : ExModeResultExtraLayout {
    __attribute__((always_inline)) ExModeResultExtra() { field_2c8 = 0; field_2d0 = 0; field_2d4 = 0; }
    virtual ~ExModeResultExtra();
};
}  // namespace SPTG
void* Create_SPTG_ExModeResultExtra() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(SPTG::ExModeResultExtra))) SPTG::ExModeResultExtra; }

// SPTG::FlashMainMenuAutoSpawner : Onyx::Component::Compose<...> : SPTG::SPTG_AIComponent : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct FlashMainMenuAutoSpawnerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint8_t field_50;
    uint8_t field_51;
    char padding_52[0x2];
    int32_t field_54;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    __attribute__((always_inline)) FlashMainMenuAutoSpawnerLayout() {}
    virtual ~FlashMainMenuAutoSpawnerLayout();
};
struct FlashMainMenuAutoSpawner : FlashMainMenuAutoSpawnerLayout {
    __attribute__((always_inline)) FlashMainMenuAutoSpawner() { field_50 = 0x1; field_51 = 0x1; field_54 = -1; field_58 = 0; field_60 = 0; field_68 = 0xffffffffffffffffull; field_70 = 0xffffffffffffffffull; }
    virtual ~FlashMainMenuAutoSpawner();
};
}  // namespace SPTG
void* Create_SPTG_FlashMainMenuAutoSpawner() { return new (GenericFactoryResolve(GenericFactoryManager, 0x1486d4e8u)->Allocate(sizeof(SPTG::FlashMainMenuAutoSpawner))) SPTG::FlashMainMenuAutoSpawner; }

// SPTG::FlashMenuBootup : Onyx::Component::Compose<...> : SPTG::SPTG_AIComponent : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct FlashMenuBootupLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint8_t field_50;
    uint8_t field_51;
    char padding_52[0x2];
    int32_t field_54;
    uint64_t field_58;
    uint64_t field_60;
    void* field_68;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    char padding_88[0x8];
    void* field_90;
    uint64_t field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    char padding_b0[0x8];
    void* field_b8;
    uint64_t field_c0;
    uint64_t field_c8;
    uint64_t field_d0;
    char padding_d8[0x8];
    void* field_e0;
    uint64_t field_e8;
    uint64_t field_f0;
    uint64_t field_f8;
    char padding_100[0x8];
    void* field_108;
    uint64_t field_110;
    uint64_t field_118;
    uint64_t field_120;
    char padding_128[0x8];
    void* field_130;
    uint64_t field_138;
    uint64_t field_140;
    uint64_t field_148;
    char padding_150[0x8];
    uint8_t field_158;
    char padding_159[0x3];
    uint32_t field_15c;
    __attribute__((always_inline)) FlashMenuBootupLayout() {}
    virtual ~FlashMenuBootupLayout();
};
struct FlashMenuBootup : FlashMenuBootupLayout {
    __attribute__((always_inline)) FlashMenuBootup() { field_50 = 0x1; field_51 = 0x1; field_54 = -1; field_58 = 0; field_60 = 0; field_70 = 0; field_78 = 0; field_80 = 0; field_68 = DefaultAllocator(); field_98 = 0; field_a0 = 0; field_a8 = 0; field_90 = DefaultAllocator(); field_c0 = 0; field_c8 = 0; field_d0 = 0; field_b8 = DefaultAllocator(); field_e8 = 0; field_f0 = 0; field_f8 = 0; field_e0 = DefaultAllocator(); field_110 = 0; field_118 = 0; field_120 = 0; field_108 = DefaultAllocator(); field_138 = 0; field_140 = 0; field_148 = 0; field_130 = DefaultAllocator(); field_158 = 0; field_15c = 0; }
    virtual ~FlashMenuBootup();
};
}  // namespace SPTG
void* Create_SPTG_FlashMenuBootup() { return new (GenericFactoryResolve(GenericFactoryManager, 0x1486d4e8u)->Allocate(sizeof(SPTG::FlashMenuBootup))) SPTG::FlashMenuBootup; }

// SPTG::GameOver : Onyx::Component::Compose<...> : SPTG::FlashMenu : Onyx::Component::Compose<...> : Onyx::Fire::FireVisual : Onyx::Component::Compose<...> : Onyx::Fire::FireVisualBase : Onyx::Component::Compose<...>
namespace SPTG {
struct GameOverLayout : ::Onyx::Fire::FireVisual {
    char padding_8[0x2a8];
    uint64_t field_2b0;
    uint64_t field_2b8;
    uint64_t field_2c0;
    uint64_t field_2c8;
    uint64_t field_2d0;
    uint64_t field_2d8;
    uint64_t field_2e0;
    char padding_2e8[0x8];
    uint8_t field_2f0;
    char padding_2f1[0x7];
    __attribute__((always_inline)) GameOverLayout() { field_2b0 = 0; field_2b8 = 0; field_2c0 = 0; field_2c8 = 0; field_2d0 = 0; field_2d8 = 0; field_2e0 = 0; }
    virtual ~GameOverLayout();
};
struct GameOver : GameOverLayout {
    __attribute__((always_inline)) GameOver() { field_2f0 = 0; }
    virtual ~GameOver();
};
}  // namespace SPTG
void* Create_SPTG_GameOver() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(SPTG::GameOver))) SPTG::GameOver; }

// SPTG::GamePausedMessage : Onyx::Component::Compose<...> : SPTG::FlashMenu : Onyx::Component::Compose<...> : Onyx::Fire::FireVisual : Onyx::Component::Compose<...> : Onyx::Fire::FireVisualBase : Onyx::Component::Compose<...>
namespace SPTG {
struct GamePausedMessageLayout : ::Onyx::Fire::FireVisual {
    char padding_8[0x2a8];
    uint64_t field_2b0;
    uint64_t field_2b8;
    uint64_t field_2c0;
    char padding_2c8[0x4];
    int32_t field_2cc;
    __attribute__((always_inline)) GamePausedMessageLayout() { field_2b0 = 0; }
    virtual ~GamePausedMessageLayout();
};
struct GamePausedMessage : GamePausedMessageLayout {
    __attribute__((always_inline)) GamePausedMessage() { field_2b8 = 0; field_2c0 = 0; field_2cc = -1; }
    virtual ~GamePausedMessage();
};
}  // namespace SPTG
void* Create_SPTG_GamePausedMessage() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(SPTG::GamePausedMessage))) SPTG::GamePausedMessage; }

// SPTG::HowToPlay : Onyx::Component::Compose<...> : SPTG::FlashMenu : Onyx::Component::Compose<...> : Onyx::Fire::FireVisual : Onyx::Component::Compose<...> : Onyx::Fire::FireVisualBase : Onyx::Component::Compose<...>
namespace SPTG {
struct HowToPlayLayout : ::Onyx::Fire::FireVisual {
    char padding_8[0x26b];
    uint8_t field_273;
    char padding_274[0x3c];
    uint64_t field_2b0;
    uint64_t field_2b8;
    __attribute__((always_inline)) HowToPlayLayout() {}
    virtual ~HowToPlayLayout();
};
struct HowToPlay : HowToPlayLayout {
    __attribute__((always_inline)) HowToPlay() { field_273 = 0; field_2b0 = 0; field_2b8 = 0; }
    virtual ~HowToPlay();
};
}  // namespace SPTG
void* Create_SPTG_HowToPlay() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(SPTG::HowToPlay))) SPTG::HowToPlay; }

// SPTG::KissMovie : Onyx::Component::Compose<...> : SPTG::FlashMenu : Onyx::Component::Compose<...> : Onyx::Fire::FireVisual : Onyx::Component::Compose<...> : Onyx::Fire::FireVisualBase : Onyx::Component::Compose<...>
namespace SPTG {
struct KissMovieLayout : ::Onyx::Fire::FireVisual {
    char padding_8[0x2a8];
    uint64_t field_2b0;
    uint64_t field_2b8;
    uint64_t field_2c0;
    uint64_t field_2c8;
    uint64_t field_2d0;
    uint64_t field_2d8;
    uint64_t field_2e0;
    char padding_2e8[0x8];
    __attribute__((always_inline)) KissMovieLayout() { field_2b0 = 0; field_2b8 = 0; field_2c0 = 0; field_2c8 = 0; field_2d0 = 0; field_2d8 = 0; field_2e0 = 0; }
    virtual ~KissMovieLayout();
};
struct KissMovie : KissMovieLayout {
    __attribute__((always_inline)) KissMovie() {}
    virtual ~KissMovie();
};
}  // namespace SPTG
void* Create_SPTG_KissMovie() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(SPTG::KissMovie))) SPTG::KissMovie; }

// SPTG::LeaderboardAgency : Onyx::Component::Compose<...> : Onyx::Phase : Onyx::Component::Base
namespace SPTG {
struct LeaderboardAgencyLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint8_t field_70;
    char padding_71[0x7];
    __attribute__((always_inline)) LeaderboardAgencyLayout() {}
    virtual ~LeaderboardAgencyLayout();
};
struct LeaderboardAgency : LeaderboardAgencyLayout {
    __attribute__((always_inline)) LeaderboardAgency() { field_50 = 0; field_58 = 0; field_60 = 0; field_68 = 0; field_70 = 0; }
    virtual ~LeaderboardAgency();
};
}  // namespace SPTG
void* Create_SPTG_LeaderboardAgency() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::LeaderboardAgency))) SPTG::LeaderboardAgency; }

// SPTG::PauseLayerConnector : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct PauseLayerConnectorLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    void* field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    char padding_78[0x8];
    void* field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint64_t field_98;
    char padding_a0[0x8];
    __attribute__((always_inline)) PauseLayerConnectorLayout() { field_50 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_58 = DefaultAllocator(); field_88 = 0; field_90 = 0; }
    virtual ~PauseLayerConnectorLayout();
};
struct PauseLayerConnector : PauseLayerConnectorLayout {
    __attribute__((always_inline)) PauseLayerConnector() { field_98 = 0; field_80 = DefaultAllocator(); }
    virtual ~PauseLayerConnector();
};
}  // namespace SPTG
void* Create_SPTG_PauseLayerConnector() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::PauseLayerConnector))) SPTG::PauseLayerConnector; }

// SPTG::PlayfieldCollisionCameraBlockSolver : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct PlayfieldCollisionCameraBlockSolverLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint64_t field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    uint64_t field_c0;
    uint64_t field_c8;
    uint64_t field_d0;
    uint64_t field_d8;
    __attribute__((always_inline)) PlayfieldCollisionCameraBlockSolverLayout() { field_50 = 0; }
    virtual ~PlayfieldCollisionCameraBlockSolverLayout();
};
struct PlayfieldCollisionCameraBlockSolver : PlayfieldCollisionCameraBlockSolverLayout {
    __attribute__((always_inline)) PlayfieldCollisionCameraBlockSolver() { field_58 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_78 = 0; field_80 = 0; field_88 = 0; field_90 = 0; field_98 = 0; field_a0 = 0; field_a8 = 0; field_b0 = 0; field_b8 = 0; field_c0 = 0; field_c8 = 0; field_d0 = 0; field_d8 = 0; }
    virtual ~PlayfieldCollisionCameraBlockSolver();
};
}  // namespace SPTG
void* Create_SPTG_PlayfieldCollisionCameraBlockSolver() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::PlayfieldCollisionCameraBlockSolver))) SPTG::PlayfieldCollisionCameraBlockSolver; }

// SPTG::PlayfieldCollisionSolver : Onyx::Component::Compose<...> : SPTG::SPTG_Phase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct PlayfieldCollisionSolverLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint32_t field_58;
    uint8_t field_5c;
    char padding_5d[0x3];
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    uint64_t field_78;
    __attribute__((always_inline)) PlayfieldCollisionSolverLayout() { field_50 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_78 = 0; }
    virtual ~PlayfieldCollisionSolverLayout();
};
struct PlayfieldCollisionSolver : PlayfieldCollisionSolverLayout {
    __attribute__((always_inline)) PlayfieldCollisionSolver() { field_5c = 0x1; field_58 = 0xau; }
    virtual ~PlayfieldCollisionSolver();
};
}  // namespace SPTG
void* Create_SPTG_PlayfieldCollisionSolver() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::PlayfieldCollisionSolver))) SPTG::PlayfieldCollisionSolver; }

// SPTG::SectionActorPresenceLogic
namespace SPTG {
struct SectionActorPresenceLogicLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    uint64_t field_78;
    char padding_80[0x20];
    uint32_t field_a0;
    char padding_a4[0x4];
    uint64_t field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    char padding_c0[0x8];
    uint64_t field_c8;
    uint64_t field_d0;
    uint64_t field_d8;
    char padding_e0[0x8];
    __attribute__((always_inline)) SectionActorPresenceLogicLayout() {}
    virtual ~SectionActorPresenceLogicLayout();
};
struct SectionActorPresenceLogic : SectionActorPresenceLogicLayout {
    __attribute__((always_inline)) SectionActorPresenceLogic() { field_50 = 0; field_58 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_78 = 0; field_a0 = 0; field_a8 = 0; field_b0 = 0; field_b8 = 0; field_c8 = 0; field_d0 = 0; field_d8 = 0; }
    virtual ~SectionActorPresenceLogic();
};
}  // namespace SPTG
void* Create_SPTG_SectionActorPresenceLogic() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::SectionActorPresenceLogic))) SPTG::SectionActorPresenceLogic; }

// SPTG::NotificationsDispatcher : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct NotificationsDispatcherLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    uint64_t field_88;
    uint32_t field_90;
    uint8_t field_94;
    char padding_95[0x3];
    __attribute__((always_inline)) NotificationsDispatcherLayout() {}
    virtual ~NotificationsDispatcherLayout();
};
struct NotificationsDispatcher : NotificationsDispatcherLayout {
    __attribute__((always_inline)) NotificationsDispatcher() { field_50 = 0; field_58 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_78 = 0; field_80 = 0; field_88 = 0; field_90 = 0x1u; field_94 = 0; }
    virtual ~NotificationsDispatcher();
};
}  // namespace SPTG
void* Create_SPTG_NotificationsDispatcher() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::NotificationsDispatcher))) SPTG::NotificationsDispatcher; }

// SPTG::CharacterIcon
namespace SPTG {
struct CharacterIconLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    void* field_68;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    char padding_88[0x8];
    void* field_90;
    uint64_t field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    char padding_b0[0x8];
    void* field_b8;
    uint64_t field_c0;
    uint64_t field_c8;
    uint64_t field_d0;
    char padding_d8[0x8];
    void* field_e0;
    uint64_t field_e8;
    uint64_t field_f0;
    uint64_t field_f8;
    char padding_100[0x8];
    void* field_108;
    uint64_t field_110;
    uint64_t field_118;
    uint64_t field_120;
    char padding_128[0x8];
    void* field_130;
    uint64_t field_138;
    uint64_t field_140;
    uint64_t field_148;
    char padding_150[0x8];
    void* field_158;
    uint64_t field_160;
    uint64_t field_168;
    uint64_t field_170;
    char padding_178[0x8];
    uint64_t field_180;
    uint64_t field_188;
    uint64_t field_190;
    uint64_t field_198;
    uint8_t field_1a0;
    char padding_1a1[0x7];
    uint64_t field_1a8;
    uint64_t field_1b0;
    uint64_t field_1b8;
    uint32_t field_1c0;
    char padding_1c4[0x4];
    __attribute__((always_inline)) CharacterIconLayout() { field_50 = 0; field_58 = 0; field_60 = 0; field_70 = 0; field_78 = 0; field_80 = 0; field_68 = DefaultAllocator(); field_98 = 0; field_a0 = 0; field_a8 = 0; field_90 = DefaultAllocator(); field_c0 = 0; field_c8 = 0; field_d0 = 0; field_b8 = DefaultAllocator(); field_e8 = 0; field_f0 = 0; field_f8 = 0; field_e0 = DefaultAllocator(); field_110 = 0; field_118 = 0; field_120 = 0; field_108 = DefaultAllocator(); field_138 = 0; field_140 = 0; field_148 = 0; field_130 = DefaultAllocator(); field_160 = 0; field_168 = 0; field_170 = 0; field_158 = DefaultAllocator(); field_180 = 0; }
    virtual ~CharacterIconLayout();
};
struct CharacterIcon : CharacterIconLayout {
    __attribute__((always_inline)) CharacterIcon() { field_188 = 0; field_190 = 0; field_198 = 0; field_1a0 = 0; field_1a8 = 0; field_1b0 = 0; field_1b8 = 0; field_1c0 = 0; }
    virtual ~CharacterIcon();
};
}  // namespace SPTG
void* Create_SPTG_CharacterIcon() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::CharacterIcon))) SPTG::CharacterIcon; }

// SPTG::AnimationInfoHolderBank : Onyx::Component::Compose<...> : SPTG::AnimationController : Onyx::Component::Compose<...> : Onyx::Component::Base
struct Class_a74b40Layout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    void* field_60;
    uint64_t field_68;
    uint64_t field_70;
    char padding_78[0x8];
    __attribute__((always_inline)) Class_a74b40Layout() {}
    virtual ~Class_a74b40Layout();
};
struct Class_a74b40 : Class_a74b40Layout {
    __attribute__((always_inline)) Class_a74b40() { field_50 = 0; field_58 = 0; field_68 = 0; field_70 = 0; field_60 = DefaultAllocator(); }
    virtual ~Class_a74b40();
};
void* Create_Class_a74b40() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Class_a74b40))) Class_a74b40; }

// Onyx::ActionGroup : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct ActionGroupLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    void* field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    char padding_c0[0x8];
    __attribute__((always_inline)) ActionGroupLayout() { field_a8 = 0; field_b0 = 0; field_b8 = 0; field_a0 = DefaultAllocator(); }
    virtual ~ActionGroupLayout();
};
struct ActionGroup : ActionGroupLayout {
    __attribute__((always_inline)) ActionGroup() {}
    virtual ~ActionGroup();
};
}  // namespace Onyx
void* Create_Onyx_ActionGroup() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::ActionGroup))) Onyx::ActionGroup; }

// Onyx::Animation : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct AnimationLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint32_t field_78;
    char padding_7c[0x4];
    void* field_80;
    uint64_t field_88;
    uint64_t field_90;
    char padding_98[0x8];
    uint64_t field_a0;
    void* field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    char padding_c0[0x8];
    __attribute__((always_inline)) AnimationLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~AnimationLayout();
};
struct Animation : AnimationLayout {
    __attribute__((always_inline)) Animation() { field_78 = 0; field_80 = DefaultAllocator(); field_88 = 0; field_90 = 0; field_a0 = 0; field_b0 = 0; field_b8 = 0; field_a8 = DefaultAllocator(); }
    virtual ~Animation();
};
}  // namespace Onyx
void* Create_Onyx_Animation() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Animation))) Onyx::Animation; }

// Onyx::AnimationKit : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct AnimationKitLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint64_t field_78;
    void* field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint64_t field_98;
    char padding_a0[0x8];
    __attribute__((always_inline)) AnimationKitLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~AnimationKitLayout();
};
struct AnimationKit : AnimationKitLayout {
    __attribute__((always_inline)) AnimationKit() { field_78 = 0; field_88 = 0; field_90 = 0; field_98 = 0; field_80 = DefaultAllocator(); }
    virtual ~AnimationKit();
};
}  // namespace Onyx
void* Create_Onyx_AnimationKit() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::AnimationKit))) Onyx::AnimationKit; }

// Onyx::Behavior::Generator : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Behavior {
struct GeneratorLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint64_t field_78;
    void* field_80;
    uint64_t field_88;
    uint64_t field_90;
    char padding_98[0x8];
    uint64_t field_a0;
    __attribute__((always_inline)) GeneratorLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~GeneratorLayout();
};
struct Generator : GeneratorLayout {
    __attribute__((always_inline)) Generator() { field_78 = 0; field_88 = 0; field_90 = 0; field_a0 = 0; field_80 = DefaultAllocator(); }
    virtual ~Generator();
};
}  // namespace Behavior
}  // namespace Onyx
void* Create_Onyx_Behavior_Generator() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Behavior::Generator))) Onyx::Behavior::Generator; }

// Onyx::Graphics::EvolutionDevelopment::ScreenRenderSetup : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
namespace EvolutionDevelopment {
struct ScreenRenderSetupLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    void* field_60;
    void* field_68;
    void* field_70;
    uint64_t field_78;
    char padding_80[0x8];
    __attribute__((always_inline)) ScreenRenderSetupLayout() {}
    virtual ~ScreenRenderSetupLayout();
};
struct ScreenRenderSetup : ScreenRenderSetupLayout {
    __attribute__((always_inline)) ScreenRenderSetup() { field_50 = 0; field_58 = 0; field_68 = reinterpret_cast<char*>(this) + 0x68; field_70 = reinterpret_cast<char*>(this) + 0x68; field_78 = 0; field_60 = DefaultAllocator(); }
    virtual ~ScreenRenderSetup();
};
}  // namespace EvolutionDevelopment
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_EvolutionDevelopment_ScreenRenderSetup() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::EvolutionDevelopment::ScreenRenderSetup))) Onyx::Graphics::EvolutionDevelopment::ScreenRenderSetup; }

// Onyx::Graphics::EvolutionDevelopment::Scene : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
namespace EvolutionDevelopment {
struct SceneLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    void* field_78;
    void* field_80;
    void* field_88;
    uint64_t field_90;
    char padding_98[0x8];
    __attribute__((always_inline)) SceneLayout() {}
    virtual ~SceneLayout();
};
struct Scene : SceneLayout {
    __attribute__((always_inline)) Scene() { field_50 = 0; field_58 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_80 = reinterpret_cast<char*>(this) + 0x80; field_88 = reinterpret_cast<char*>(this) + 0x80; field_90 = 0; field_78 = DefaultAllocator(); }
    virtual ~Scene();
};
}  // namespace EvolutionDevelopment
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_EvolutionDevelopment_Scene() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::EvolutionDevelopment::Scene))) Onyx::Graphics::EvolutionDevelopment::Scene; }

// Onyx::Graphics::NewMaterialSystem::MaterialSystem : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
namespace NewMaterialSystem {
struct MaterialSystemLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    void* field_70;
    uint64_t field_78;
    uint64_t field_80;
    char padding_88[0x8];
    uint64_t field_90;
    __attribute__((always_inline)) MaterialSystemLayout() {}
    virtual ~MaterialSystemLayout();
};
struct MaterialSystem : MaterialSystemLayout {
    __attribute__((always_inline)) MaterialSystem() { field_50 = 0; field_58 = 0; field_60 = 0; field_68 = 0; field_78 = 0; field_80 = 0; field_90 = 0; field_70 = DefaultAllocator(); }
    virtual ~MaterialSystem();
};
}  // namespace NewMaterialSystem
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_NewMaterialSystem_MaterialSystem() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::NewMaterialSystem::MaterialSystem))) Onyx::Graphics::NewMaterialSystem::MaterialSystem; }

// Onyx::Graphics::NewMaterialSystem::ShaderMaterialTemplate : Onyx::Component::Compose<...> : Onyx::Graphics::NewMaterialSystem::MaterialTemplate : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
namespace NewMaterialSystem {
struct ShaderMaterialTemplateLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint64_t field_78;
    uint64_t field_80;
    char padding_88[0x8];
    void* field_90;
    uint64_t field_98;
    uint64_t field_a0;
    uint64_t field_a8;
    char padding_b0[0x8];
    void* field_b8;
    uint64_t field_c0;
    uint64_t field_c8;
    char padding_d0[0x8];
    uint64_t field_d8;
    __attribute__((always_inline)) ShaderMaterialTemplateLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~ShaderMaterialTemplateLayout();
};
struct ShaderMaterialTemplate : ShaderMaterialTemplateLayout {
    __attribute__((always_inline)) ShaderMaterialTemplate() { field_78 = 0; field_80 = 0; field_98 = 0; field_a0 = 0; field_a8 = 0; field_90 = DefaultAllocator(); field_b8 = DefaultAllocator(); field_c0 = 0; field_c8 = 0; field_d8 = 0; }
    virtual ~ShaderMaterialTemplate();
};
}  // namespace NewMaterialSystem
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_NewMaterialSystem_ShaderMaterialTemplate() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::NewMaterialSystem::ShaderMaterialTemplate))) Onyx::Graphics::NewMaterialSystem::ShaderMaterialTemplate; }

// Onyx::Graphics::NewMaterialSystem::WiiMaterialTemplate : Onyx::Component::Compose<...> : Onyx::Graphics::NewMaterialSystem::MaterialTemplate : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
namespace NewMaterialSystem {
struct WiiMaterialTemplateLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint64_t field_78;
    char padding_80[0x8];
    __attribute__((always_inline)) WiiMaterialTemplateLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~WiiMaterialTemplateLayout();
};
struct WiiMaterialTemplate : WiiMaterialTemplateLayout {
    __attribute__((always_inline)) WiiMaterialTemplate() { field_78 = 0; }
    virtual ~WiiMaterialTemplate();
};
}  // namespace NewMaterialSystem
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_NewMaterialSystem_WiiMaterialTemplate() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::NewMaterialSystem::WiiMaterialTemplate))) Onyx::Graphics::NewMaterialSystem::WiiMaterialTemplate; }

// Onyx::RenderModifierBegin : Onyx::Component::Compose<...> : Onyx::Phase : Onyx::Component::Base
namespace Onyx {
struct RenderModifierBeginLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    __attribute__((always_inline)) RenderModifierBeginLayout() { field_50 = 0; }
    virtual ~RenderModifierBeginLayout();
};
struct RenderModifierBegin : RenderModifierBeginLayout {
    __attribute__((always_inline)) RenderModifierBegin() { field_58 = 0; field_60 = 0; }
    virtual ~RenderModifierBegin();
};
}  // namespace Onyx
void* Create_Onyx_RenderModifierBegin() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::RenderModifierBegin))) Onyx::RenderModifierBegin; }

// Onyx::Graphics::LightingHub : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
struct LightingHubLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint64_t field_78;
    uint64_t field_80;
    uint8_t field_88;
    char padding_89[0x7];
    __attribute__((always_inline)) LightingHubLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~LightingHubLayout();
};
struct LightingHub : LightingHubLayout {
    __attribute__((always_inline)) LightingHub() { field_78 = 0; field_80 = 0; field_88 = 0; }
    virtual ~LightingHub();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_LightingHub() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::LightingHub))) Onyx::Graphics::LightingHub; }

// Onyx::Graphics::Mesh : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
struct MeshLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    void* field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    char padding_78[0x8];
    void* field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint64_t field_98;
    char padding_a0[0x8];
    __attribute__((always_inline)) MeshLayout() { field_50 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_58 = DefaultAllocator(); }
    virtual ~MeshLayout();
};
struct Mesh : MeshLayout {
    __attribute__((always_inline)) Mesh() { field_88 = 0; field_90 = 0; field_98 = 0; field_80 = DefaultAllocator(); }
    virtual ~Mesh();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_Mesh() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::Mesh))) Onyx::Graphics::Mesh; }

// Onyx::Graphics::ModularMesh : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
struct ModularMeshLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    __attribute__((always_inline)) ModularMeshLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~ModularMeshLayout();
};
struct ModularMesh : ModularMeshLayout {
    __attribute__((always_inline)) ModularMesh() {}
    virtual ~ModularMesh();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_ModularMesh() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::ModularMesh))) Onyx::Graphics::ModularMesh; }

// Onyx::Graphics::MorphEvaluationContextCreator : Onyx::Component::Compose<...> : Onyx::AnimatedObjectDescriptor : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
struct MorphEvaluationContextCreatorLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint64_t field_78;
    __attribute__((always_inline)) MorphEvaluationContextCreatorLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~MorphEvaluationContextCreatorLayout();
};
struct MorphEvaluationContextCreator : MorphEvaluationContextCreatorLayout {
    __attribute__((always_inline)) MorphEvaluationContextCreator() { field_78 = 0; }
    virtual ~MorphEvaluationContextCreator();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_MorphEvaluationContextCreator() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::MorphEvaluationContextCreator))) Onyx::Graphics::MorphEvaluationContextCreator; }

// Onyx::Graphics::Morph : Onyx::Component::Compose<...> : Onyx::Graphics::MorphBase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
struct MorphLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint64_t field_78;
    void* field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint64_t field_98;
    char padding_a0[0x8];
    void* field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    uint64_t field_c0;
    char padding_c8[0x8];
    __attribute__((always_inline)) MorphLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); field_78 = 0; field_88 = 0; field_90 = 0; field_98 = 0; field_80 = DefaultAllocator(); }
    virtual ~MorphLayout();
};
struct Morph : MorphLayout {
    __attribute__((always_inline)) Morph() { field_b0 = 0; field_b8 = 0; field_c0 = 0; field_a8 = DefaultAllocator(); }
    virtual ~Morph();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_Morph() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::Morph))) Onyx::Graphics::Morph; }

// Onyx::Graphics::MorphSkin : Onyx::Component::Compose<...> : Onyx::Graphics::MorphSkinNative : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
struct MorphSkinLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    void* field_78;
    uint64_t field_80;
    uint64_t field_88;
    char padding_90[0x10];
    void* field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    char padding_b8[0x8];
    __attribute__((always_inline)) MorphSkinLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); field_78 = DefaultAllocator(); field_80 = 0; field_88 = 0; }
    virtual ~MorphSkinLayout();
};
struct MorphSkin : MorphSkinLayout {
    __attribute__((always_inline)) MorphSkin() { field_a0 = DefaultAllocator(); field_a8 = 0; field_b0 = 0; }
    virtual ~MorphSkin();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_MorphSkin() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::MorphSkin))) Onyx::Graphics::MorphSkin; }

// Onyx::Graphics::SkinnedMorph : Onyx::Component::Compose<...> : Onyx::Graphics::MorphBase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
struct SkinnedMorphLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint64_t field_78;
    void* field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint64_t field_98;
    char padding_a0[0x8];
    uint64_t field_a8;
    void* field_b0;
    uint64_t field_b8;
    uint64_t field_c0;
    uint64_t field_c8;
    char padding_d0[0x8];
    __attribute__((always_inline)) SkinnedMorphLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); field_78 = 0; field_88 = 0; field_90 = 0; field_98 = 0; field_80 = DefaultAllocator(); }
    virtual ~SkinnedMorphLayout();
};
struct SkinnedMorph : SkinnedMorphLayout {
    __attribute__((always_inline)) SkinnedMorph() { field_a8 = 0; field_b8 = 0; field_c0 = 0; field_c8 = 0; field_b0 = DefaultAllocator(); }
    virtual ~SkinnedMorph();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_SkinnedMorph() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::SkinnedMorph))) Onyx::Graphics::SkinnedMorph; }

// Onyx::Graphics::Particle::Emitter::EmitterSequencer : Onyx::Component::Compose<...> : Onyx::Graphics::Particle::Emitter::EmitterBase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
namespace Particle {
namespace Emitter {
struct EmitterSequencerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    int32_t field_78;
    char padding_7c[0x4];
    __attribute__((always_inline)) EmitterSequencerLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~EmitterSequencerLayout();
};
struct EmitterSequencer : EmitterSequencerLayout {
    __attribute__((always_inline)) EmitterSequencer() { field_78 = -1; }
    virtual ~EmitterSequencer();
};
}  // namespace Emitter
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_Particle_Emitter_EmitterSequencer() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::Particle::Emitter::EmitterSequencer))) Onyx::Graphics::Particle::Emitter::EmitterSequencer; }

// Onyx::Graphics::Particle::GraphicSource::GraphicSourceBase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
namespace Particle {
namespace GraphicSource {
struct GraphicSourceBaseLayout : ::Onyx::Component::Base {
    char padding_8[0x58];
    uint64_t field_60;
    uint32_t field_68;
    uint8_t field_6c;
    char padding_6d[0x3];
    uint32_t field_70;
    uint32_t field_74;
    __attribute__((always_inline)) GraphicSourceBaseLayout() {}
    virtual ~GraphicSourceBaseLayout();
};
struct GraphicSourceBase : GraphicSourceBaseLayout {
    __attribute__((always_inline)) GraphicSourceBase() { field_60 = 0; field_68 = 0; field_6c = 0; field_70 = 0x2u; field_74 = 0; }
    virtual ~GraphicSourceBase();
};
}  // namespace GraphicSource
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_Particle_GraphicSource_GraphicSourceBase() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::Particle::GraphicSource::GraphicSourceBase))) Onyx::Graphics::Particle::GraphicSource::GraphicSourceBase; }

// Onyx::Graphics::Particle::Volume::VolumeCircle : Onyx::Component::Compose<...> : Onyx::Graphics::Particle::Volume::VolumeBase : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
namespace Particle {
namespace Volume {
struct VolumeCircleLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint32_t field_50;
    uint8_t field_54;
    char padding_55[0x3];
    uint32_t field_58;
    uint32_t field_5c;
    uint32_t field_60;
    uint32_t field_64;
    __attribute__((always_inline)) VolumeCircleLayout() {}
    virtual ~VolumeCircleLayout();
};
struct VolumeCircle : VolumeCircleLayout {
    __attribute__((always_inline)) VolumeCircle() { field_50 = 0; field_54 = 0; field_58 = 0x3dcccccdu; field_5c = 0; field_60 = 0; field_64 = 0x40c90fdbu; }
    virtual ~VolumeCircle();
};
}  // namespace Volume
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_Particle_Volume_VolumeCircle() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::Particle::Volume::VolumeCircle))) Onyx::Graphics::Particle::Volume::VolumeCircle; }

// Onyx::Graphics::SkinnedMesh : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
struct SkinnedMeshLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    void* field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    char padding_78[0x8];
    void* field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint64_t field_98;
    char padding_a0[0x8];
    __attribute__((always_inline)) SkinnedMeshLayout() { field_50 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_58 = DefaultAllocator(); }
    virtual ~SkinnedMeshLayout();
};
struct SkinnedMesh : SkinnedMeshLayout {
    __attribute__((always_inline)) SkinnedMesh() { field_88 = 0; field_90 = 0; field_98 = 0; field_80 = DefaultAllocator(); }
    virtual ~SkinnedMesh();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_SkinnedMesh() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::SkinnedMesh))) Onyx::Graphics::SkinnedMesh; }

// Onyx::Animatic : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct AnimaticLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    __attribute__((always_inline)) AnimaticLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~AnimaticLayout();
};
struct Animatic : AnimaticLayout {
    __attribute__((always_inline)) Animatic() {}
    virtual ~Animatic();
};
}  // namespace Onyx
void* Create_Onyx_Animatic() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Animatic))) Onyx::Animatic; }

// Onyx::AnimaticGroup : Onyx::Component::Compose<...> : Onyx::AnimaticElement : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct AnimaticGroupLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint32_t field_60;
    char padding_64[0x4];
    void* field_68;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    char padding_88[0x8];
    __attribute__((always_inline)) AnimaticGroupLayout() { field_50 = 0; field_58 = 0; field_60 = 0; field_70 = 0; field_78 = 0; field_80 = 0; field_68 = DefaultAllocator(); }
    virtual ~AnimaticGroupLayout();
};
struct AnimaticGroup : AnimaticGroupLayout {
    __attribute__((always_inline)) AnimaticGroup() {}
    virtual ~AnimaticGroup();
};
}  // namespace Onyx
void* Create_Onyx_AnimaticGroup() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::AnimaticGroup))) Onyx::AnimaticGroup; }

// Onyx::AnimaticDescriptor : Onyx::Component::Compose<...> : Onyx::AnimatedObjectDescriptor : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct AnimaticDescriptorLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0xc];
    uint32_t field_7c;
    __attribute__((always_inline)) AnimaticDescriptorLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~AnimaticDescriptorLayout();
};
struct AnimaticDescriptor : AnimaticDescriptorLayout {
    __attribute__((always_inline)) AnimaticDescriptor() { field_7c = 0; }
    virtual ~AnimaticDescriptor();
};
}  // namespace Onyx
void* Create_Onyx_AnimaticDescriptor() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::AnimaticDescriptor))) Onyx::AnimaticDescriptor; }

// Onyx::PhysicsComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct PhysicsComponentLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    uint64_t field_70;
    uint32_t field_78;
    float field_7c;
    uint64_t field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint32_t field_98;
    char padding_9c[0x4];
    __attribute__((always_inline)) PhysicsComponentLayout() { field_50 = 0; }
    virtual ~PhysicsComponentLayout();
};
struct PhysicsComponent : PhysicsComponentLayout {
    __attribute__((always_inline)) PhysicsComponent() { field_58 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_78 = 0; field_7c = 1.0f; field_80 = 0; field_88 = 0; field_90 = 0; field_98 = 0; }
    virtual ~PhysicsComponent();
};
}  // namespace Onyx
void* Create_Onyx_PhysicsComponent() { return new (GenericFactoryResolve(GenericFactoryManager, 0x56e02aeau)->Allocate(sizeof(Onyx::PhysicsComponent))) Onyx::PhysicsComponent; }

// Onyx::SkeletonAnimationPrinter : Onyx::Component::Compose<...> : Onyx::AnimationStatePrinter : Onyx::Component::Compose<...> : Onyx::AnimationPrinter : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct SkeletonAnimationPrinterLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    char padding_58[0x8];
    uint64_t field_60;
    uint64_t field_68;
    uint16_t field_70;
    char padding_72[0x6];
    __attribute__((always_inline)) SkeletonAnimationPrinterLayout() { field_50 = 0; field_60 = 0; field_68 = 0; }
    virtual ~SkeletonAnimationPrinterLayout();
};
struct SkeletonAnimationPrinter : SkeletonAnimationPrinterLayout {
    __attribute__((always_inline)) SkeletonAnimationPrinter() { field_70 = 0x100; }
    virtual ~SkeletonAnimationPrinter();
};
}  // namespace Onyx
void* Create_Onyx_SkeletonAnimationPrinter() { return new (GenericFactoryResolve(GenericFactoryManager, 0xa245047u)->Allocate(sizeof(Onyx::SkeletonAnimationPrinter))) Onyx::SkeletonAnimationPrinter; }

// Onyx::SkeletonEvaluationContextCreator : Onyx::Component::Compose<...> : Onyx::AnimatedObjectDescriptor : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct SkeletonEvaluationContextCreatorLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint64_t field_78;
    __attribute__((always_inline)) SkeletonEvaluationContextCreatorLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~SkeletonEvaluationContextCreatorLayout();
};
struct SkeletonEvaluationContextCreator : SkeletonEvaluationContextCreatorLayout {
    __attribute__((always_inline)) SkeletonEvaluationContextCreator() { field_78 = 0; }
    virtual ~SkeletonEvaluationContextCreator();
};
}  // namespace Onyx
void* Create_Onyx_SkeletonEvaluationContextCreator() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::SkeletonEvaluationContextCreator))) Onyx::SkeletonEvaluationContextCreator; }

// Onyx::Animation : Onyx::Component::Compose<...> : Onyx::Component::Base
struct Class_bd7740Layout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    float field_78;
    char padding_7c[0x4];
    void* field_80;
    uint64_t field_88;
    uint64_t field_90;
    char padding_98[0x8];
    uint64_t field_a0;
    void* field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    char padding_c0[0x8];
    __attribute__((always_inline)) Class_bd7740Layout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~Class_bd7740Layout();
};
struct Class_bd7740 : Class_bd7740Layout {
    __attribute__((always_inline)) Class_bd7740() { field_80 = DefaultAllocator(); field_88 = 0; field_90 = 0; field_a0 = 0; field_a8 = DefaultAllocator(); field_b0 = 0; field_b8 = 0; field_78 = 1.0f; }
    virtual ~Class_bd7740();
};
void* Create_Class_bd7740() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Class_bd7740))) Class_bd7740; }

// Onyx::ActionGroup : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
struct Class_bd7840Layout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    void* field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    uint64_t field_b8;
    char padding_c0[0x8];
    __attribute__((always_inline)) Class_bd7840Layout() { field_a8 = 0; field_b0 = 0; field_b8 = 0; field_a0 = DefaultAllocator(); }
    virtual ~Class_bd7840Layout();
};
struct Class_bd7840 : Class_bd7840Layout {
    __attribute__((always_inline)) Class_bd7840() {}
    virtual ~Class_bd7840();
};
void* Create_Class_bd7840() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Class_bd7840))) Class_bd7840; }

// Onyx::DelayAction : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct DelayActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x94];
    uint32_t field_9c;
    uint32_t field_a0;
    char padding_a4[0x4];
    __attribute__((always_inline)) DelayActionLayout() {}
    virtual ~DelayActionLayout();
};
struct DelayAction : DelayActionLayout {
    __attribute__((always_inline)) DelayAction() { field_9c = 0; field_a0 = 0; }
    virtual ~DelayAction();
};
}  // namespace Onyx
void* Create_Onyx_DelayAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::DelayAction))) Onyx::DelayAction; }

// Onyx::PhysicMoveAction : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct PhysicMoveActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    uint64_t field_a8;
    uint32_t field_b0;
    float field_b4;
    uint8_t field_b8;
    char padding_b9[0x3];
    uint32_t field_bc;
    uint32_t field_c0;
    char padding_c4[0x4];
    __attribute__((always_inline)) PhysicMoveActionLayout() {}
    virtual ~PhysicMoveActionLayout();
};
struct PhysicMoveAction : PhysicMoveActionLayout {
    __attribute__((always_inline)) PhysicMoveAction() { field_a0 = 0; field_a8 = 0; field_b0 = 0x1u; field_b4 = 1.0f; field_b8 = 0; field_bc = 0; field_c0 = 0; }
    virtual ~PhysicMoveAction();
};
}  // namespace Onyx
void* Create_Onyx_PhysicMoveAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::PhysicMoveAction))) Onyx::PhysicMoveAction; }

// Onyx::Lifetime : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct LifetimeLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    __attribute__((always_inline)) LifetimeLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~LifetimeLayout();
};
struct Lifetime : LifetimeLayout {
    __attribute__((always_inline)) Lifetime() {}
    virtual ~Lifetime();
};
}  // namespace Onyx
void* Create_Onyx_Lifetime() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Lifetime))) Onyx::Lifetime; }

// Onyx::PursuitBehavior : Onyx::Component::Compose<...> : Onyx::SteeringBehavior : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct PursuitBehaviorLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    float field_68;
    char padding_6c[0x4];
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    uint64_t field_88;
    uint64_t field_90;
    uint32_t field_98;
    char padding_9c[0x4];
    __attribute__((always_inline)) PursuitBehaviorLayout() { field_50 = 0; field_58 = 0; field_60 = 0; field_68 = 1.0f; field_70 = 0; field_78 = 0; }
    virtual ~PursuitBehaviorLayout();
};
struct PursuitBehavior : PursuitBehaviorLayout {
    __attribute__((always_inline)) PursuitBehavior() { field_80 = 0; field_88 = 0; field_90 = 0; field_98 = 0; }
    virtual ~PursuitBehavior();
};
}  // namespace Onyx
void* Create_Onyx_PursuitBehavior() { return new (GenericFactoryResolve(GenericFactoryManager, 0x386d550du)->Allocate(sizeof(Onyx::PursuitBehavior))) Onyx::PursuitBehavior; }

// Onyx::Gameplay::Circuits::AssignCircuit : Onyx::Component::Compose<...> : Onyx::Gameplay::Circuits::BaseCircuit : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Gameplay {
namespace Circuits {
struct AssignCircuitLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint64_t field_78;
    void* field_80;
    uint64_t field_88;
    void* field_90;
    uint64_t field_98;
    __attribute__((always_inline)) AssignCircuitLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~AssignCircuitLayout();
};
struct AssignCircuit : AssignCircuitLayout {
    __attribute__((always_inline)) AssignCircuit() { field_78 = 0; field_80 = DefaultAllocator(); field_88 = 0; field_98 = 0; field_90 = DefaultAllocator(); }
    virtual ~AssignCircuit();
};
}  // namespace Circuits
}  // namespace Gameplay
}  // namespace Onyx
void* Create_Onyx_Gameplay_Circuits_AssignCircuit() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Gameplay::Circuits::AssignCircuit))) Onyx::Gameplay::Circuits::AssignCircuit; }

// Onyx::Gameplay::Circuits::OnceCircuit : Onyx::Component::Compose<...> : Onyx::Gameplay::Circuits::MultiTickCircuit : Onyx::Component::Compose<...> : Onyx::Gameplay::Circuits::BaseCircuit : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Gameplay {
namespace Circuits {
struct OnceCircuitLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x10];
    uint64_t field_80;
    void* field_88;
    uint8_t field_90;
    char padding_91[0x7];
    uint8_t field_98;
    char padding_99[0x7];
    __attribute__((always_inline)) OnceCircuitLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~OnceCircuitLayout();
};
struct OnceCircuit : OnceCircuitLayout {
    __attribute__((always_inline)) OnceCircuit() { field_80 = 0; field_90 = 0; field_98 = 0; field_88 = this; }
    virtual ~OnceCircuit();
};
}  // namespace Circuits
}  // namespace Gameplay
}  // namespace Onyx
void* Create_Onyx_Gameplay_Circuits_OnceCircuit() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Gameplay::Circuits::OnceCircuit))) Onyx::Gameplay::Circuits::OnceCircuit; }

// Onyx::Gameplay::Circuits::SequenceCircuit : Onyx::Component::Compose<...> : Onyx::Gameplay::Circuits::MultiTickCircuit : Onyx::Component::Compose<...> : Onyx::Gameplay::Circuits::BaseCircuit : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Gameplay {
namespace Circuits {
struct SequenceCircuitLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x10];
    __attribute__((always_inline)) SequenceCircuitLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~SequenceCircuitLayout();
};
struct SequenceCircuit : SequenceCircuitLayout {
    __attribute__((always_inline)) SequenceCircuit() {}
    virtual ~SequenceCircuit();
};
}  // namespace Circuits
}  // namespace Gameplay
}  // namespace Onyx
void* Create_Onyx_Gameplay_Circuits_SequenceCircuit() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Gameplay::Circuits::SequenceCircuit))) Onyx::Gameplay::Circuits::SequenceCircuit; }

// Onyx::Gameplay::Circuits::PerFrameTickerCircuit : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Gameplay {
namespace Circuits {
struct PerFrameTickerCircuitLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    __attribute__((always_inline)) PerFrameTickerCircuitLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~PerFrameTickerCircuitLayout();
};
struct PerFrameTickerCircuit : PerFrameTickerCircuitLayout {
    __attribute__((always_inline)) PerFrameTickerCircuit() {}
    virtual ~PerFrameTickerCircuit();
};
}  // namespace Circuits
}  // namespace Gameplay
}  // namespace Onyx
void* Create_Onyx_Gameplay_Circuits_PerFrameTickerCircuit() { return new (GenericFactoryResolve(GenericFactoryManager, 0x386d550du)->Allocate(sizeof(Onyx::Gameplay::Circuits::PerFrameTickerCircuit))) Onyx::Gameplay::Circuits::PerFrameTickerCircuit; }

// Onyx::Graphics::MeshLevelOfDetail : Onyx::Component::Compose<...> : Onyx::Graphics::LevelOfDetail<...> : Onyx::Switch<...> : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
struct MeshLevelOfDetailLayout : Base_b4c840 {
    char padding_8[0x80];
    void* field_88;
    uint64_t field_90;
    uint64_t field_98;
    uint64_t field_a0;
    char padding_a8[0x10];
    __attribute__((always_inline)) MeshLevelOfDetailLayout() { field_90 = 0; field_98 = 0; field_a0 = 0; field_88 = DefaultAllocator(); }
    virtual ~MeshLevelOfDetailLayout();
};
struct MeshLevelOfDetail : MeshLevelOfDetailLayout {
    __attribute__((always_inline)) MeshLevelOfDetail() {}
    virtual ~MeshLevelOfDetail();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_MeshLevelOfDetail() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::MeshLevelOfDetail))) Onyx::Graphics::MeshLevelOfDetail; }

// Onyx::Graphics::SetAlphaTest : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
struct SetAlphaTestLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint64_t field_78;
    void* field_80;
    uint8_t field_88;
    char padding_89[0x7];
    __attribute__((always_inline)) SetAlphaTestLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~SetAlphaTestLayout();
};
struct SetAlphaTest : SetAlphaTestLayout {
    __attribute__((always_inline)) SetAlphaTest() { field_78 = 0; field_88 = 0; field_80 = this; }
    virtual ~SetAlphaTest();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_SetAlphaTest() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::SetAlphaTest))) Onyx::Graphics::SetAlphaTest; }

// Onyx::RotationFilter : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct RotationFilterLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint8_t field_60;
    uint8_t field_61;
    uint8_t field_62;
    char padding_63[0x5];
    __attribute__((always_inline)) RotationFilterLayout() {}
    virtual ~RotationFilterLayout();
};
struct RotationFilter : RotationFilterLayout {
    __attribute__((always_inline)) RotationFilter() { field_50 = 0; field_58 = 0; field_60 = 0x1; field_61 = 0x1; field_62 = 0x1; }
    virtual ~RotationFilter();
};
}  // namespace Onyx
void* Create_Onyx_RotationFilter() { return new (GenericFactoryResolve(GenericFactoryManager, 0x386d550du)->Allocate(sizeof(Onyx::RotationFilter))) Onyx::RotationFilter; }

// Onyx::ProximitySpawnPointLocker : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct ProximitySpawnPointLockerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint64_t field_78;
    char padding_80[0x8];
    uint64_t field_88;
    __attribute__((always_inline)) ProximitySpawnPointLockerLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); field_78 = 0; }
    virtual ~ProximitySpawnPointLockerLayout();
};
struct ProximitySpawnPointLocker : ProximitySpawnPointLockerLayout {
    __attribute__((always_inline)) ProximitySpawnPointLocker() { field_88 = 0; }
    virtual ~ProximitySpawnPointLocker();
};
}  // namespace Onyx
void* Create_Onyx_ProximitySpawnPointLocker() { return new (GenericFactoryResolve(GenericFactoryManager, 0x386d550du)->Allocate(sizeof(Onyx::ProximitySpawnPointLocker))) Onyx::ProximitySpawnPointLocker; }

// Onyx::SpawnerPositionner : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct SpawnerPositionnerLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint64_t field_78;
    __attribute__((always_inline)) SpawnerPositionnerLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
    virtual ~SpawnerPositionnerLayout();
};
struct SpawnerPositionner : SpawnerPositionnerLayout {
    __attribute__((always_inline)) SpawnerPositionner() { field_78 = 0; }
    virtual ~SpawnerPositionner();
};
}  // namespace Onyx
void* Create_Onyx_SpawnerPositionner() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::SpawnerPositionner))) Onyx::SpawnerPositionner; }

// Onyx::BezierWaypointLink : Onyx::Component::Compose<...> : Onyx::WaypointLink : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct BezierWaypointLinkLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    uint64_t field_60;
    float field_68;
    char padding_6c[0x4];
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    __attribute__((always_inline)) BezierWaypointLinkLayout() { field_50 = 0; field_58 = 0; field_60 = 0; field_68 = -1.0f; }
    virtual ~BezierWaypointLinkLayout();
};
struct BezierWaypointLink : BezierWaypointLinkLayout {
    __attribute__((always_inline)) BezierWaypointLink() { field_70 = 0; field_78 = 0; field_80 = 0; }
    virtual ~BezierWaypointLink();
};
}  // namespace Onyx
void* Create_Onyx_BezierWaypointLink() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::BezierWaypointLink))) Onyx::BezierWaypointLink; }

// Onyx::Waypoint : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct WaypointLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    void* field_50;
    uint64_t field_58;
    uint64_t field_60;
    uint64_t field_68;
    char padding_70[0x8];
    uint64_t field_78;
    uint64_t field_80;
    __attribute__((always_inline)) WaypointLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); field_78 = 0; field_80 = 0; }
    virtual ~WaypointLayout();
};
struct Waypoint : WaypointLayout {
    __attribute__((always_inline)) Waypoint() {}
    virtual ~Waypoint();
};
}  // namespace Onyx
void* Create_Onyx_Waypoint() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Waypoint))) Onyx::Waypoint; }

// Onyx::DareAudio::EventPlayStore (factory 0x704a80), by its constructor's stores
namespace Onyx {
namespace DareAudio {
struct EventPlayStoreLayout {
    virtual ~EventPlayStoreLayout();
    void* field_8;
    uint64_t field_10;
    uint64_t field_18;
    uint64_t field_20;
    char padding_28[0x8];
    __attribute__((always_inline)) EventPlayStoreLayout() { field_18 = 0; field_20 = 0; field_10 = 0; field_8 = DefaultAllocator(); }
};
struct EventPlayStore : EventPlayStoreLayout {
    __attribute__((always_inline)) EventPlayStore() {}
    virtual ~EventPlayStore();
};
}  // namespace DareAudio
}  // namespace Onyx
void* Create_Onyx_DareAudio_EventPlayStore() { return new (DirectAllocator()->Allocate(sizeof(Onyx::DareAudio::EventPlayStore))) Onyx::DareAudio::EventPlayStore; }

// SPTG::SoundTestModeAction (factory 0x74e520), by its constructor's stores
namespace SPTG {
struct SoundTestModeActionLayout : ::Onyx::ActionComponent {
    char padding_8[0x98];
    uint64_t field_a0;
    uint64_t field_a8;
    uint64_t field_b0;
    int32_t field_b8;
    int32_t field_bc;
    char padding_c0[0x8];
    __attribute__((always_inline)) SoundTestModeActionLayout() { field_a0 = 0; field_a8 = 0; field_b0 = 0; }
    virtual ~SoundTestModeActionLayout();
};
struct SoundTestModeAction : SoundTestModeActionLayout {
    __attribute__((always_inline)) SoundTestModeAction() { field_b8 = -1; field_bc = -1; }
    virtual ~SoundTestModeAction();
};
}  // namespace SPTG
void* Create_SPTG_SoundTestModeAction() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::SoundTestModeAction))) SPTG::SoundTestModeAction; }

// Onyx::Animate (factory 0xab7490), by its constructor's stores
namespace Onyx {
struct AnimateLayout : Base_93b180 {
    char padding_8[0x90];
    int32_t field_98;
    int32_t field_9c;
    __attribute__((always_inline)) AnimateLayout() {}
    virtual ~AnimateLayout();
};
struct Animate : AnimateLayout {
    __attribute__((always_inline)) Animate() { field_98 = 0; field_9c = 0x3f800000u; }
    virtual ~Animate();
};
}  // namespace Onyx
void* Create_Onyx_Animate() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Animate))) Onyx::Animate; }

// Onyx::Graphics::MaterialProperty::BindTextureEx (factory 0xabc250), by its constructor's stores
namespace Onyx {
namespace Graphics {
namespace MaterialProperty {
struct BindTextureExLayout {
    virtual ~BindTextureExLayout();
    uint64_t field_8;
    uint64_t field_10;
    int32_t field_18;
    char padding_1c[0x4];
    __attribute__((always_inline)) BindTextureExLayout() {}
};
struct BindTextureEx : BindTextureExLayout {
    __attribute__((always_inline)) BindTextureEx() { field_8 = 0x200000000ull; field_10 = 0x200000002ull; field_18 = 2; }
    virtual ~BindTextureEx();
};
}  // namespace MaterialProperty
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_MaterialProperty_BindTextureEx() { return new (DirectAllocator()->Allocate(sizeof(Onyx::Graphics::MaterialProperty::BindTextureEx))) Onyx::Graphics::MaterialProperty::BindTextureEx; }

// Onyx::Graphics::MaterialProperty::TextureStageCoordGenCoef (factory 0xabcdb0), by its constructor's stores
namespace Onyx {
namespace Graphics {
namespace MaterialProperty {
struct TextureStageCoordGenCoefLayout {
    virtual ~TextureStageCoordGenCoefLayout();
    int32_t field_8;
    char padding_c[0x4];
    uint64_t field_10;
    uint64_t field_18;
    __attribute__((always_inline)) TextureStageCoordGenCoefLayout() {}
};
struct TextureStageCoordGenCoef : TextureStageCoordGenCoefLayout {
    __attribute__((always_inline)) TextureStageCoordGenCoef() { field_8 = 0; field_10 = 0x3f800000ull; field_18 = 0; }
    virtual ~TextureStageCoordGenCoef();
};
}  // namespace MaterialProperty
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_MaterialProperty_TextureStageCoordGenCoef() { return new (DirectAllocator()->Allocate(sizeof(Onyx::Graphics::MaterialProperty::TextureStageCoordGenCoef))) Onyx::Graphics::MaterialProperty::TextureStageCoordGenCoef; }

// Onyx::Graphics::NewMaterialSystem::F32MaterialParameter (factory 0xabd150), by its constructor's stores
namespace Onyx {
namespace Graphics {
namespace NewMaterialSystem {
struct F32MaterialParameterLayout {
    virtual ~F32MaterialParameterLayout();
    uint8_t field_8;
    char padding_9[0x3];
    int32_t field_c;
    void* field_10;
    uint64_t field_18;
    char padding_20[0x8];
    __attribute__((always_inline)) F32MaterialParameterLayout() { field_8 = 0; field_c = 1; field_18 = 0; field_10 = DefaultAllocator(); }
};
struct F32MaterialParameter : F32MaterialParameterLayout {
    __attribute__((always_inline)) F32MaterialParameter() {}
    virtual ~F32MaterialParameter();
};
}  // namespace NewMaterialSystem
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_NewMaterialSystem_F32MaterialParameter() { return new (DirectAllocator()->Allocate(sizeof(Onyx::Graphics::NewMaterialSystem::F32MaterialParameter))) Onyx::Graphics::NewMaterialSystem::F32MaterialParameter; }

// Onyx::Graphics::NewMaterialSystem::BoolMaterialParameter (factory 0xabd1a0), by its constructor's stores
namespace Onyx {
namespace Graphics {
namespace NewMaterialSystem {
struct BoolMaterialParameterLayout {
    virtual ~BoolMaterialParameterLayout();
    uint8_t field_8;
    char padding_9[0x3];
    int32_t field_c;
    void* field_10;
    uint64_t field_18;
    char padding_20[0x8];
    __attribute__((always_inline)) BoolMaterialParameterLayout() { field_8 = 0; field_c = 0; field_18 = 0; field_10 = DefaultAllocator(); }
};
struct BoolMaterialParameter : BoolMaterialParameterLayout {
    __attribute__((always_inline)) BoolMaterialParameter() {}
    virtual ~BoolMaterialParameter();
};
}  // namespace NewMaterialSystem
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_NewMaterialSystem_BoolMaterialParameter() { return new (DirectAllocator()->Allocate(sizeof(Onyx::Graphics::NewMaterialSystem::BoolMaterialParameter))) Onyx::Graphics::NewMaterialSystem::BoolMaterialParameter; }

// Onyx::Graphics::NewMaterialSystem::IntegerMaterialParameter (factory 0xabd1f0), by its constructor's stores
namespace Onyx {
namespace Graphics {
namespace NewMaterialSystem {
struct IntegerMaterialParameterLayout {
    virtual ~IntegerMaterialParameterLayout();
    uint8_t field_8;
    char padding_9[0x3];
    int32_t field_c;
    void* field_10;
    uint64_t field_18;
    char padding_20[0x8];
    __attribute__((always_inline)) IntegerMaterialParameterLayout() { field_8 = 0; field_c = 5; field_18 = 0; field_10 = DefaultAllocator(); }
};
struct IntegerMaterialParameter : IntegerMaterialParameterLayout {
    __attribute__((always_inline)) IntegerMaterialParameter() {}
    virtual ~IntegerMaterialParameter();
};
}  // namespace NewMaterialSystem
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_NewMaterialSystem_IntegerMaterialParameter() { return new (DirectAllocator()->Allocate(sizeof(Onyx::Graphics::NewMaterialSystem::IntegerMaterialParameter))) Onyx::Graphics::NewMaterialSystem::IntegerMaterialParameter; }

// Onyx::Graphics::NewMaterialSystem::Vector2MaterialParameter (factory 0xabd240), by its constructor's stores
namespace Onyx {
namespace Graphics {
namespace NewMaterialSystem {
struct Vector2MaterialParameterLayout {
    virtual ~Vector2MaterialParameterLayout();
    uint8_t field_8;
    char padding_9[0x3];
    int32_t field_c;
    void* field_10;
    uint64_t field_18;
    char padding_20[0x8];
    __attribute__((always_inline)) Vector2MaterialParameterLayout() { field_8 = 0; field_c = 2; field_18 = 0; field_10 = DefaultAllocator(); }
};
struct Vector2MaterialParameter : Vector2MaterialParameterLayout {
    __attribute__((always_inline)) Vector2MaterialParameter() {}
    virtual ~Vector2MaterialParameter();
};
}  // namespace NewMaterialSystem
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_NewMaterialSystem_Vector2MaterialParameter() { return new (DirectAllocator()->Allocate(sizeof(Onyx::Graphics::NewMaterialSystem::Vector2MaterialParameter))) Onyx::Graphics::NewMaterialSystem::Vector2MaterialParameter; }

// Onyx::Graphics::NewMaterialSystem::Vector3MaterialParameter (factory 0xabd290), by its constructor's stores
namespace Onyx {
namespace Graphics {
namespace NewMaterialSystem {
struct Vector3MaterialParameterLayout {
    virtual ~Vector3MaterialParameterLayout();
    uint8_t field_8;
    char padding_9[0x3];
    int32_t field_c;
    void* field_10;
    uint64_t field_18;
    char padding_20[0x10];
    __attribute__((always_inline)) Vector3MaterialParameterLayout() { field_8 = 0; field_c = 3; field_18 = 0; field_10 = DefaultAllocator(); }
};
struct Vector3MaterialParameter : Vector3MaterialParameterLayout {
    __attribute__((always_inline)) Vector3MaterialParameter() {}
    virtual ~Vector3MaterialParameter();
};
}  // namespace NewMaterialSystem
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_NewMaterialSystem_Vector3MaterialParameter() { return new (DirectAllocator()->Allocate(sizeof(Onyx::Graphics::NewMaterialSystem::Vector3MaterialParameter))) Onyx::Graphics::NewMaterialSystem::Vector3MaterialParameter; }

// Onyx::Graphics::NewMaterialSystem::Vector4MaterialParameter (factory 0xabd2e0), by its constructor's stores
namespace Onyx {
namespace Graphics {
namespace NewMaterialSystem {
struct Vector4MaterialParameterLayout {
    virtual ~Vector4MaterialParameterLayout();
    uint8_t field_8;
    char padding_9[0x3];
    int32_t field_c;
    void* field_10;
    uint64_t field_18;
    char padding_20[0x10];
    __attribute__((always_inline)) Vector4MaterialParameterLayout() { field_8 = 0; field_c = 4; field_18 = 0; field_10 = DefaultAllocator(); }
};
struct Vector4MaterialParameter : Vector4MaterialParameterLayout {
    __attribute__((always_inline)) Vector4MaterialParameter() {}
    virtual ~Vector4MaterialParameter();
};
}  // namespace NewMaterialSystem
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_NewMaterialSystem_Vector4MaterialParameter() { return new (DirectAllocator()->Allocate(sizeof(Onyx::Graphics::NewMaterialSystem::Vector4MaterialParameter))) Onyx::Graphics::NewMaterialSystem::Vector4MaterialParameter; }

// Onyx::Graphics::Module (factory 0xabf1d0), by its constructor's stores
namespace Onyx {
namespace Graphics {
struct ModuleLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    int32_t field_58;
    int32_t field_5c;
    __attribute__((always_inline)) ModuleLayout() { field_50 = 0; }
    virtual ~ModuleLayout();
};
struct Module : ModuleLayout {
    __attribute__((always_inline)) Module() { field_58 = 0; field_5c = -1; }
    virtual ~Module();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_Module() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::Module))) Onyx::Graphics::Module; }

// Onyx::Graphics::Particle::Effect::EffectBase (factory 0xabff70), by its constructor's stores
namespace Onyx {
namespace Graphics {
namespace Particle {
namespace Effect {
struct EffectBaseLayout : ::Onyx::Component::Base {
    char padding_8[0x44];
    int32_t field_4c;
    int32_t field_50;
    int32_t field_54;
    __attribute__((always_inline)) EffectBaseLayout() {}
    virtual ~EffectBaseLayout();
};
struct EffectBase : EffectBaseLayout {
    __attribute__((always_inline)) EffectBase() { field_4c = 0x3f800000u; field_50 = 0; field_54 = 0; }
    virtual ~EffectBase();
};
}  // namespace Effect
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_Particle_Effect_EffectBase() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::Particle::Effect::EffectBase))) Onyx::Graphics::Particle::Effect::EffectBase; }

// Onyx::Graphics::Particle::Effect::EffectDelay (factory 0xac0060), by its constructor's stores
namespace Onyx {
namespace Graphics {
namespace Particle {
namespace Effect {
struct EffectDelayLayout : ::Onyx::Component::Base {
    char padding_8[0x44];
    int32_t field_4c;
    int32_t field_50;
    int32_t field_54;
    char padding_58[0x8];
    __attribute__((always_inline)) EffectDelayLayout() { field_4c = 0x3f800000u; field_50 = 0; field_54 = 0; }
    virtual ~EffectDelayLayout();
};
struct EffectDelay : EffectDelayLayout {
    __attribute__((always_inline)) EffectDelay() {}
    virtual ~EffectDelay();
};
}  // namespace Effect
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_Particle_Effect_EffectDelay() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::Particle::Effect::EffectDelay))) Onyx::Graphics::Particle::Effect::EffectDelay; }

// Damper (factory 0xbf0590), by its constructor's stores
struct DamperLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    char padding_60[0x18];
    int32_t field_78;
    int32_t field_7c;
    __attribute__((always_inline)) DamperLayout() {}
    virtual ~DamperLayout();
};
struct Damper : DamperLayout {
    __attribute__((always_inline)) Damper() { field_50 = 0; field_78 = 0x3f800000u; field_58 = 0; field_7c = 0; }
    virtual ~Damper();
};
void* Create_Damper() { return new (GenericFactoryResolve(GenericFactoryManager, 0x386d550du)->Allocate(sizeof(Damper))) Damper; }

// Onyx::Graphics::DisplayList (factory 0x675290), by its constructor's stores
namespace Onyx {
namespace Graphics {
struct DisplayListLayout : ::Onyx::Component::Base {
    char padding_8[0x48];
    uint64_t field_50;
    uint64_t field_58;
    int32_t field_60;
    char padding_64[0x4];
    void* field_68;
    uint64_t field_70;
    uint64_t field_78;
    uint64_t field_80;
    char padding_88[0x8];
    int32_t field_90;
    int32_t field_94;
    int32_t field_98;
    char padding_9c[0x4];
    int32_t field_a0;
    int32_t field_a4;
    int32_t field_a8;
    char padding_ac[0x4];
    __attribute__((always_inline)) DisplayListLayout() { field_60 = 0; field_50 = 0; field_58 = 0; field_78 = 0; field_80 = 0; }
    virtual ~DisplayListLayout();
};
struct DisplayList : DisplayListLayout {
    __attribute__((always_inline)) DisplayList() { field_68 = DefaultAllocator(); field_70 = 0; field_90 = 0; field_94 = 0; field_98 = 0; field_a0 = 0; field_a4 = 0; field_a8 = -1; }
    virtual ~DisplayList();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_DisplayList() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::DisplayList))) Onyx::Graphics::DisplayList; }
