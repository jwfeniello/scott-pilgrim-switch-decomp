// ABI views of Onyx engine components, and of game classes that derive from
// them, whose slot 4 (serialization, see Archive.h) is matched. As in
// ComponentSerialize.h, each view places the serialized fields at their offsets
// with padding between; names come from the RTTI where it has them, and field
// names are provisional. A view whose parent's slot 4 is matched derives from
// that view and starts where its fields end; other parents are empty
// stand-ins.
#pragma once
#include "ComponentSerialize.h"
namespace Onyx {

// Onyx::Switch<Owner, Target, Meta::Null>: the targets it switches between (a
// reference list at +0x50) and a handle at +0x78. Seven instances share this
// slot 4; the owner is Onyx::Component::Base except for the texture switch
// (Onyx::AIComponent, which keeps Base's slot 4).
template<class Owner, class Target> struct Switch : Owner {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    char padding_0[0x50];
    SPTG::ReferenceList targets;          // +0x50
    onyx::ComponentHandle* handle78;      // +0x78
};
template<class Owner, class Target>
void Switch<Owner, Target>::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Owner::Slot4(archive, source);
    targets.Serialize(archive, source);
    onyx::TransferHandle(handle78, archive, source);
    onyx::AttachHandle(source, handle78);
}
struct AIComponent : ::OnyxComponentBase {};
struct Transform;
struct CameraComponent;
namespace Graphics { struct Mesh; struct Texture; struct SkinnedMesh; struct ModularMesh; }
namespace Flow { struct Gate; }

}  // namespace Onyx
namespace Onyx { namespace Gameplay { namespace Circuits { namespace Detail {

// Onyx::Gameplay::Circuits::Detail::BaseValuePublisherCircuit<T>: publishes a
// value through the event at +0x50, whose entries each type reads with its own
// function.
template<class T> void ReadPublishedValue(DecodeReader* reader, void* descriptors, DecodeHost* host);
template<class T> struct BaseValuePublisherCircuit : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    char padding_0[0x50];
    SPTG::EventSlot published;           // +0x50
};
template<class T>
void BaseValuePublisherCircuit<T>::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    SPTG::ReadEventEntries(archive, source, published, this, ReadPublishedValue<T>);
}

} } } }  // namespace Onyx::Gameplay::Circuits::Detail
namespace Gear { template<class T> struct Vector3; }
namespace Onyx { namespace Graphics { struct Color; } }

namespace Onyx {

// Onyx::Component::Compose<Phase, Singleton<Power>, ...> (slot 4 at 0x67d6d0, not matched): an empty stand-in.
struct PhaseCompose : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
};

}  // namespace Onyx

namespace Onyx { namespace Flow {

// Onyx::Component::Compose<Base, Singleton<Flow::Game>, ...> (slot 4 at 0x6a6040, not matched): an empty stand-in.
struct GameCompose : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
};

} }  // namespace Onyx::Flow

namespace Onyx { namespace DLC {

// Onyx::DLC::DLCTask (slot 4 at 0x728df0, not matched): an empty stand-in.
struct DLCTask : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
};

} }  // namespace Onyx::DLC

namespace Onyx { namespace Fire {

// Onyx::Fire::FireVisualBase (slot 4 at 0x7373b0, not matched): an empty stand-in.
struct FireVisualBase : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
};

} }  // namespace Onyx::Fire

namespace Onyx { namespace Graphics {

// Onyx::Graphics::Visual (slot 4 at 0xadab50, not matched): an empty stand-in.
struct Visual : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
};

} }  // namespace Onyx::Graphics

namespace Onyx { namespace Graphics { namespace Particle { namespace GraphicSource {

// Onyx::Graphics::Particle::GraphicSource::GraphicSourceBase (slot 4 at 0xb16a90, not matched): an empty stand-in.
struct GraphicSourceBase : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
};

} } } }  // namespace Onyx::Graphics::Particle::GraphicSource

namespace Onyx { namespace Graphics {

// Onyx::Component::Compose<Base, Singleton<Graphics::GlobalFogTable>, ...> (slot 4 at 0xc950a0, not matched): an empty stand-in.
struct GlobalFogTableCompose : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
};

// Onyx::Component::Compose<Base, Singleton<Graphics::GlobalAmbientTable>, ...> (slot 4 at 0xc96dd0, not matched): an empty stand-in.
struct GlobalAmbientTableCompose : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
};

} }  // namespace Onyx::Graphics

namespace Onyx {

// Onyx::WalkLocomotor (slot 4 at 0xcd0b30, not matched): an empty stand-in.
struct WalkLocomotor : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
};

// Onyx::InputSelector
struct InputSelector : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc8ef80
    char padding_0[0x4c];
    int32_t value4c;             // +0x4c
};

// Onyx::IconComponent
struct IconComponent : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x682b20
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    int32_t value58;             // +0x58
};

}  // namespace Onyx

namespace Onyx { namespace Graphics {

// Onyx::Graphics::MaterialModifier
struct MaterialModifier : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xb67050
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    int32_t value58;             // +0x58
};

} }  // namespace Onyx::Graphics

namespace Onyx {

// Onyx::BankQuery
struct BankQuery : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x6a1f00
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    onyx::ComponentHandle* handle58; // +0x58
    onyx::ComponentHandle* handle60; // +0x60
};

// Onyx::Switch<SPTG::AnimationController, SPTG::AnimationInfoHolder>
struct SwitchAnimationController : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8cddc0
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    SPTG::ReferenceList references58;  // +0x58
    onyx::ComponentHandle* handle80; // +0x80
};

// Onyx::Switch<Component::Base, SPTG::AnimationInfoHolderSwitch, ...>
struct SwitchAnimationInfoHolderSwitch : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x93d5f0
    char padding_0[0x50];
    SPTG::ReferenceList references50;  // +0x50
    onyx::ComponentHandle* handle78; // +0x78
    onyx::ComponentHandle* handle80; // +0x80
    void* slot88;                // +0x88
};

// Onyx::Switch<Component::Base, SPTG::AnimatedObject, ...>
struct SwitchAnimatedObject : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x93ed20
    char padding_0[0x50];
    SPTG::ReferenceList references50;  // +0x50
    onyx::ComponentHandle* handle78; // +0x78
    onyx::ComponentHandle* handle80; // +0x80
    void* slot88;                // +0x88
};

// Onyx::BoundingVolumeGraphics
struct BoundingVolumeGraphics : Onyx::Graphics::Visual {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xcb9d70
    char padding_0[0x90];
    onyx::ComponentHandle* handle90; // +0x90
    int32_t value98;             // +0x98
    int32_t value9c;             // +0x9c
};

// Onyx::SelfRotate
struct SelfRotate : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xcd74f0
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    char padding_58[0x10];
    int32_t value68;             // +0x68
    int32_t value6c;             // +0x6c
};

// Onyx::ActionComponent
struct ActionComponent : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xbcaa30
    char padding_0[0x50];
    SPTG::EventSlot event50;           // +0x50
    SPTG::EventSlot event68;           // +0x68
    SPTG::EventSlot event80;           // +0x80
};

}  // namespace Onyx

namespace SPTG {

// Onyx::Component::Compose<SPTG::SetFlashMenuVisibilityAction, Singleton<LevelItemAccessor>>
struct SetFlashMenuVisibilityActionComposeA : Onyx::ActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x912520
    char padding_98[0x8];
    void* slotA0;                // +0xa0
    uint32_t idA8;               // +0xa8
    int32_t valueAc;             // +0xac
    uint8_t flagB0;              // +0xb0
    char padding_b1[0x7];
    void* slotB8;                // +0xb8
};

}  // namespace SPTG

namespace Onyx { namespace Gameplay { namespace Circuits {

// Onyx::Gameplay::Circuits::CompareCircuit
struct CompareCircuit : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xccbf50
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    onyx::ComponentHandle* handle58; // +0x58
    int32_t value60;             // +0x60
    char padding_64[0x4];
    onyx::String string68;       // +0x68
    onyx::String string78;       // +0x78
    uint8_t flag88;              // +0x88
};

} } }  // namespace Onyx::Gameplay::Circuits

namespace Onyx { namespace DareAudio {

// Onyx::DareAudio::RolloffGraphics
struct RolloffGraphics : Onyx::Graphics::Visual {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x70ae30
    char padding_0[0x90];
    onyx::ComponentHandle* handle90; // +0x90
    char padding_98[0x78];
    onyx::Vector<int32_t> vector110; // +0x110
};

} }  // namespace Onyx::DareAudio

namespace SPTG {

// Onyx::Component::Compose<SPTG::SetFlashMenuVisibilityAction, Weak<ActorActionSequence>, ...>
struct SetFlashMenuVisibilityActionComposeB : Onyx::ActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x912260
    char padding_98[0x8];
    void* slotA0;                // +0xa0
    uint32_t idA8;               // +0xa8
    int32_t valueAc;             // +0xac
    uint8_t flagB0;              // +0xb0
    char padding_b1[0x7];
    void* slotB8;                // +0xb8
    void* slotC0;                // +0xc0
    onyx::ComponentHandle* handleC8; // +0xc8
};

}  // namespace SPTG

namespace Onyx { namespace Graphics { namespace Particle { namespace Effect {

// Onyx::Graphics::Particle::Effect::EffectGroup
struct EffectGroup : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xb27da0
    char padding_0[0x4c];
    int32_t value4c;             // +0x4c
    int32_t value50;             // +0x50
    char padding_54[0x4];
    SPTG::ReferenceList references58;  // +0x58
    uint8_t flag80;              // +0x80
    uint8_t flag81;              // +0x81
};

// Onyx::Graphics::Particle::Effect::EffectPredicate
struct EffectPredicate : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xb26c10
    char padding_0[0x4c];
    int32_t value4c;             // +0x4c
    int32_t value50;             // +0x50
    char padding_54[0x4];
    onyx::ComponentHandle* handle58; // +0x58
    int32_t value60;             // +0x60
    int32_t value64;             // +0x64
};

} } } }  // namespace Onyx::Graphics::Particle::Effect

namespace Onyx {

// Onyx::PhysicMoveAction
struct PhysicMoveAction : Onyx::ActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xcf0d40
    char padding_98[0x8];
    onyx::ComponentHandle* handleA0; // +0xa0
    onyx::ComponentHandle* handleA8; // +0xa8
    int32_t valueB0;             // +0xb0
    int32_t valueB4;             // +0xb4
    uint8_t flagB8;              // +0xb8
    char padding_b9[0x3];
    int32_t valueBc;             // +0xbc
};

// N4Onyx8Graphics13LevelOfDetailINS0_11SkinnedMeshEEE
struct Unknown_c992d0 : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc992d0
    char padding_0[0x50];
    SPTG::ReferenceList references50;  // +0x50
    onyx::ComponentHandle* handle78; // +0x78
    char padding_80[0x8];
    onyx::Vector<int32_t> vector88; // +0x88
};

// N4Onyx8Graphics13LevelOfDetailINS0_11ModularMeshEEE
struct Unknown_c9a780 : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc9a780
    char padding_0[0x50];
    SPTG::ReferenceList references50;  // +0x50
    onyx::ComponentHandle* handle78; // +0x78
    char padding_80[0x8];
    onyx::Vector<int32_t> vector88; // +0x88
};

// N4Onyx8Graphics13LevelOfDetailINS0_4MeshEEE
struct Unknown_c9b6c0 : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc9b6c0
    char padding_0[0x50];
    SPTG::ReferenceList references50;  // +0x50
    onyx::ComponentHandle* handle78; // +0x78
    char padding_80[0x8];
    onyx::Vector<int32_t> vector88; // +0x88
};

}  // namespace Onyx

namespace SPTG {

// Onyx::Component::Compose<SPTG::PlayfieldCollision, ...>
struct PlayfieldCollisionCompose : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x7ad220
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    char padding_58[0xc];
    int32_t value64;             // +0x64
    uint8_t flag68;              // +0x68
    char padding_69[0x7];
    PairList list70;             // +0x70
    char padding_c0[0x50];
    void* slot110;               // +0x110
    void* slot118;               // +0x118
    onyx::ComponentHandle* handle120; // +0x120
    onyx::ComponentHandle* handle128; // +0x128
    onyx::ComponentHandle* handle130; // +0x130
    onyx::ComponentHandle* handle138; // +0x138
    onyx::ComponentHandle* handle140; // +0x140
};

}  // namespace SPTG

namespace Onyx { namespace Graphics {

// Onyx::Graphics::TextureSequencer
struct TextureSequencer : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xb62950
    char padding_0[0x50];
    SPTG::ReferenceList references50;  // +0x50
    onyx::ComponentHandle* handle78; // +0x78
    char padding_80[0x8];
    SPTG::EventSlot event88;           // +0x88
    SPTG::EventSlot eventA0;           // +0xa0
    char padding_b8[0x18];
    int32_t valueD0;             // +0xd0
    uint8_t flagD4;              // +0xd4
    char padding_d5[0x3];
    int32_t valueD8;             // +0xd8
};

} }  // namespace Onyx::Graphics

namespace Onyx { namespace Graphics { namespace NewMaterialSystem {

// Onyx::Graphics::NewMaterialSystem::NewMaterial
struct NewMaterial : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xb64c40
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    uint8_t flag58;              // +0x58
    uint8_t flag59;              // +0x59
    uint8_t flag5a;              // +0x5a
    uint8_t flag5b;              // +0x5b
    int32_t value5c;             // +0x5c
    int32_t value60;             // +0x60
};

} } }  // namespace Onyx::Graphics::NewMaterialSystem

namespace SPTG {

// SPTG::AnimationInfoHolderSwitch
struct AnimationInfoHolderSwitch : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8ce3d0
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    ReferenceList references58;  // +0x58
    onyx::ComponentHandle* handle80; // +0x80
    char padding_88[0x8];
    onyx::Array<int32_t> array90; // +0x90
};

}  // namespace SPTG

namespace Onyx { namespace Graphics { namespace Particle { namespace Effect {

// Onyx::Graphics::Particle::Effect::EffectTextureStep
struct EffectTextureStep : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xb21550
    char padding_0[0x4c];
    int32_t value4c;             // +0x4c
    int32_t value50;             // +0x50
    char padding_54[0x5];
    uint8_t flag59;              // +0x59
    uint8_t flag5a;              // +0x5a
    uint8_t flag5b;              // +0x5b
    int32_t value5c;             // +0x5c
    int32_t value60;             // +0x60
};

} } } }  // namespace Onyx::Graphics::Particle::Effect

namespace Onyx {

// Onyx::Billboard
struct Billboard : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xcef5d0
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    SPTG::EventSlot event58;           // +0x58
    uint8_t flag70;              // +0x70
    char padding_71[0x3];
    int32_t value74;             // +0x74
    char padding_78[0xc];
    int32_t value84;             // +0x84
    int32_t value88;             // +0x88
    int32_t value8c;             // +0x8c
    int32_t value90;             // +0x90
};

// Onyx::SeekBehavior
struct SeekBehavior : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xcd23d0
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    onyx::ComponentHandle* handle58; // +0x58
    onyx::ComponentHandle* handle60; // +0x60
    int32_t value68;             // +0x68
    char padding_6c[0x4];
    int32_t value70;             // +0x70
    int32_t value74;             // +0x74
    int32_t value78;             // +0x78
    int32_t value7c;             // +0x7c
    int32_t value80;             // +0x80
};

}  // namespace Onyx

namespace Onyx { namespace Graphics { namespace Particle { namespace Emitter {

// Onyx::Graphics::Particle::Emitter::EmitterSimple
struct EmitterSimple : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xb1b040
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    onyx::ComponentHandle* handle58; // +0x58
    onyx::ComponentHandle* handle60; // +0x60
    char padding_68[0xdc];
    int32_t value144;            // +0x144
    int32_t value148;            // +0x148
    int32_t value14c;            // +0x14c
    int32_t value150;            // +0x150
    int32_t value154;            // +0x154
    uint8_t flag158;             // +0x158
    uint8_t flag159;             // +0x159
    char padding_15a[0x2];
    int32_t value15c;            // +0x15c
};

} } } }  // namespace Onyx::Graphics::Particle::Emitter

namespace Onyx { namespace Graphics { namespace Particle { namespace GraphicSource {

// Onyx::Graphics::Particle::GraphicSource::GraphicSourceQuad
struct GraphicSourceQuad : Onyx::Graphics::Particle::GraphicSource::GraphicSourceBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xb175f0
    char padding_0[0x78];
    onyx::ComponentHandle* handle78; // +0x78
    char padding_80[0x54];
    int32_t valueD4;             // +0xd4
    int32_t valueD8;             // +0xd8
    int32_t valueDc;             // +0xdc
    int32_t valueE0;             // +0xe0
    int32_t valueE4;             // +0xe4
    int32_t valueE8;             // +0xe8
    int32_t valueEc;             // +0xec
    int32_t valueF0;             // +0xf0
    int32_t valueF4;             // +0xf4
    int32_t valueF8;             // +0xf8
};

} } } }  // namespace Onyx::Graphics::Particle::GraphicSource

namespace Onyx {

// Onyx::AnyKeyInputTrigger
struct AnyKeyInputTrigger : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc7d290
    char padding_0[0x4a];
    uint8_t flag4a;              // +0x4a
    char padding_4b[0x5];
    SPTG::EventSlot event50;           // +0x50
};

// Onyx::VisualEffect
struct VisualEffect : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xcdd090
    char padding_0[0x50];
    SPTG::EventSlot event50;           // +0x50
    SPTG::EventSlot event68;           // +0x68
    uint8_t flag80;              // +0x80
};

// Onyx::TimedVisualEffect
struct TimedVisualEffect : Onyx::VisualEffect {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xcdcdd0
    char padding_81[0x7];
    SPTG::EventSlot event88;           // +0x88
    char padding_a0[0x4];
    int32_t valueA4;             // +0xa4
};

// Onyx::CollisionTrigger
struct CollisionTrigger : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc7c880
    char padding_0[0x4a];
    uint8_t flag4a;              // +0x4a
    char padding_4b[0x5];
    onyx::ComponentHandle* handle50; // +0x50
    char padding_58[0x58];
    SPTG::EventSlot eventB0;           // +0xb0
};

}  // namespace Onyx

namespace Onyx { namespace Graphics { namespace Particle { namespace Effect {

// Onyx::Graphics::Particle::Effect::EffectEvent
struct EffectEvent : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xb28510
    char padding_0[0x4c];
    int32_t value4c;             // +0x4c
    int32_t value50;             // +0x50
    char padding_54[0xc];
    SPTG::EventSlot event60;           // +0x60
};

} } } }  // namespace Onyx::Graphics::Particle::Effect

namespace Onyx {

// Onyx::SaveTransform
struct SaveTransform : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc8e420
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    onyx::ComponentHandle* handle58; // +0x58
    SPTG::EventSlot event60;           // +0x60
    int32_t value78;             // +0x78
};

// Onyx::AnimationEventRouter
struct AnimationEventRouter : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xaf6940
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    char padding_58[0x8];
    SPTG::EventSlot event60;           // +0x60
    int32_t value78;             // +0x78
    int32_t value7c;             // +0x7c
};

// Onyx::RandomZone
struct RandomZone : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc83ef0
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    SPTG::EventSlot event58;           // +0x58
    int32_t value70;             // +0x70
    int32_t value74;             // +0x74
};

}  // namespace Onyx

namespace Onyx { namespace Graphics { namespace Particle { namespace Emitter {

// Onyx::Graphics::Particle::Emitter::EmitterInstance
struct EmitterInstance : Onyx::Graphics::Visual {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xb1e950
    char padding_0[0x90];
    onyx::ComponentHandle* handle90; // +0x90
    SPTG::EventSlot event98;           // +0x98
    SPTG::EventSlot eventB0;           // +0xb0
    SPTG::EventSlot eventC8;           // +0xc8
    char padding_e0[0x1];
    uint8_t flagE1;              // +0xe1
    uint8_t flagE2;              // +0xe2
};

} } } }  // namespace Onyx::Graphics::Particle::Emitter

namespace Onyx {

// Onyx::CollisionWalkLocomotor
struct CollisionWalkLocomotor : Onyx::WalkLocomotor {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xcd1450
    char padding_0[0x88];
    SPTG::EventSlot event88;           // +0x88
    int32_t valueA0;             // +0xa0
    int32_t valueA4;             // +0xa4
    int32_t valueA8;             // +0xa8
    int32_t valueAc;             // +0xac
};

// Onyx::SpawnTicket
struct SpawnTicket : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x699170
    char padding_0[0x50];
    SPTG::ReferenceList references50;  // +0x50
    onyx::ComponentHandle* handle78; // +0x78
    SPTG::EventSlot event80;           // +0x80
    onyx::Vector<uint32_t> vector98; // +0x98
};

}  // namespace Onyx

namespace SPTG {

// SPTG::LevelSection
struct LevelSection : SPTG::PlayfieldCollisionCompose {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x7acea0
    uint8_t flag148;             // +0x148
    uint8_t flag149;             // +0x149
    uint8_t flag14a;             // +0x14a
    uint8_t flag14b;             // +0x14b
    uint8_t flag14c;             // +0x14c
    uint8_t flag14d;             // +0x14d
    uint8_t flag14e;             // +0x14e
    uint8_t flag14f;             // +0x14f
    uint8_t flag150;             // +0x150
    char padding_151[0x3];
    int32_t value154;            // +0x154
    onyx::Array<uint8_t> array158; // +0x158
    onyx::Array<uint8_t> array178; // +0x178
    onyx::Array<uint8_t> array198; // +0x198
};

}  // namespace SPTG

namespace Onyx {

// Onyx::Savegame
struct Savegame : Onyx::PhaseCompose {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x680080
    char padding_0[0x78];
    SPTG::EventSlot event78;           // +0x78
    SPTG::EventSlot event90;           // +0x90
    char padding_a8[0xb0];
    int32_t value158;            // +0x158
};

// Onyx::MenuItem
struct MenuItem : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xad7840
    char padding_0[0x50];
    SPTG::EventSlot event50;           // +0x50
    SPTG::EventSlot event68;           // +0x68
    SPTG::EventSlot event80;           // +0x80
    SPTG::EventSlot event98;           // +0x98
};

}  // namespace Onyx

namespace Onyx { namespace Flow {

// Onyx::Flow::Gate
struct Gate : Onyx::Flow::GameCompose {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x6a79d0
    char padding_0[0x60];
    SPTG::EventSlot event60;           // +0x60
    SPTG::EventSlot event78;           // +0x78
    SPTG::EventSlot event90;           // +0x90
    SPTG::EventSlot eventA8;           // +0xa8
};

} }  // namespace Onyx::Flow

namespace SPTG {

// SPTG::LevelStage
struct LevelStage : Onyx::Flow::Gate {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x881ea0
    char padding_c0[0x20];
    EventSlot eventE0;           // +0xe0
    EventSlot eventF8;           // +0xf8
    char padding_110[0x18];
    uint32_t id128;              // +0x128
    uint8_t flag12c;             // +0x12c
};

}  // namespace SPTG

namespace Onyx {

// Onyx::KeyInputTrigger
struct KeyInputTrigger : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc79ee0
    char padding_0[0x4a];
    uint8_t flag4a;              // +0x4a
    char padding_4b[0x5];
    SPTG::EventSlot event50;           // +0x50
    SPTG::EventSlot event68;           // +0x68
    char padding_80[0x18];
    uint8_t flag98;              // +0x98
};

}  // namespace Onyx

namespace Onyx { namespace Collision {

// Onyx::Collision::Collision2D
struct Collision2D : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xb9a9e0
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    SPTG::EventSlot event58;           // +0x58
    SPTG::EventSlot event70;           // +0x70
    char padding_88[0x10];
    int32_t value98;             // +0x98
    int32_t value9c;             // +0x9c
    int32_t valueA0;             // +0xa0
};

} }  // namespace Onyx::Collision

namespace Onyx {

// Onyx::MenuWidget
struct MenuWidget : Onyx::MenuItem {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xad9020
    onyx::ComponentHandle* handleB0; // +0xb0
    onyx::ComponentHandle* handleB8; // +0xb8
    onyx::ComponentHandle* handleC0; // +0xc0
    onyx::ComponentHandle* handleC8; // +0xc8
    SPTG::EventSlot eventD0;           // +0xd0
    SPTG::EventSlot eventE8;           // +0xe8
    int32_t value100;            // +0x100
    uint8_t flag104;             // +0x104
};

}  // namespace Onyx

namespace Onyx { namespace Graphics {

// Onyx::Graphics::GraphicsFader
struct GraphicsFader : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc9d150
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    SPTG::ReferenceList references58;  // +0x58
    SPTG::EventSlot event80;           // +0x80
    SPTG::EventSlot event98;           // +0x98
    char padding_b0[0x30];
    int32_t valueE0;             // +0xe0
    int32_t valueE4;             // +0xe4
    int32_t valueE8;             // +0xe8
    int32_t valueEc;             // +0xec
    uint8_t flagF0;              // +0xf0
};

} }  // namespace Onyx::Graphics

namespace Onyx { namespace DareAudio {

// Onyx::DareAudio::AudioAmbientAI
struct AudioAmbientAI : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x71f310
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    onyx::ComponentHandle* handle58; // +0x58
    onyx::ComponentHandle* handle60; // +0x60
    SPTG::EventSlot event68;           // +0x68
    SPTG::EventSlot event80;           // +0x80
    char padding_98[0x8];
    int32_t valueA0;             // +0xa0
    int32_t valueA4;             // +0xa4
    int32_t valueA8;             // +0xa8
    int32_t valueAc;             // +0xac
    int32_t valueB0;             // +0xb0
    uint8_t flagB4;              // +0xb4
};

} }  // namespace Onyx::DareAudio

namespace Onyx {

// Onyx::TRCComponent
struct TRCComponent : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x679940
    char padding_0[0x50];
    SPTG::EventSlot event50;           // +0x50
    SPTG::EventSlot event68;           // +0x68
    SPTG::EventSlot event80;           // +0x80
};

}  // namespace Onyx

namespace Onyx { namespace DLC {

// Onyx::DLC::UpdateTask
struct UpdateTask : Onyx::DLC::DLCTask {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x72abf0
    char padding_0[0x108];
    SPTG::EventSlot event108;          // +0x108
    SPTG::EventSlot event120;          // +0x120
    SPTG::EventSlot event138;          // +0x138
    SPTG::EventSlot event150;          // +0x150
};

} }  // namespace Onyx::DLC

namespace Onyx {

// Onyx::EventAccumulator
struct EventAccumulator : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xcdb080
    char padding_0[0x50];
    SPTG::EventSlot event50;           // +0x50
    SPTG::EventSlot event68;           // +0x68
    SPTG::EventSlot event80;           // +0x80
    int32_t value98;             // +0x98
};

// Onyx::EnterExitTrigger
struct EnterExitTrigger : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc7b930
    char padding_0[0x4a];
    uint8_t flag4a;              // +0x4a
    char padding_4b[0x5];
    onyx::ComponentHandle* handle50; // +0x50
    char padding_58[0x58];
    SPTG::EventSlot eventB0;           // +0xb0
    SPTG::EventSlot eventC8;           // +0xc8
    SPTG::EventSlot eventE0;           // +0xe0
    char padding_f8[0x1];
    uint8_t flagF9;              // +0xf9
};

// Onyx::Collectable
struct Collectable : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xce3ef0
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    onyx::ComponentHandle* handle58; // +0x58
    onyx::ComponentHandle* handle60; // +0x60
    SPTG::EventSlot event68;           // +0x68
    SPTG::EventSlot event80;           // +0x80
    SPTG::EventSlot event98;           // +0x98
    char padding_b0[0x30];
    uint8_t flagE0;              // +0xe0
    char padding_e1[0x3];
    int32_t valueE4;             // +0xe4
};

// Onyx::MenuEventScheme
struct MenuEventScheme : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xad3970
    char padding_0[0x50];
    SPTG::EventSlot event50;           // +0x50
    SPTG::EventSlot event68;           // +0x68
    int32_t value80;             // +0x80
    char padding_84[0x4];
    onyx::ComponentHandle* handle88; // +0x88
    SPTG::EventSlot event90;           // +0x90
    SPTG::EventSlot eventA8;           // +0xa8
    SPTG::EventSlot eventC0;           // +0xc0
    SPTG::EventSlot eventD8;           // +0xd8
};

}  // namespace Onyx

namespace SPTG {

// SPTG::FlashMenu
struct FlashMenu : Onyx::Fire::FireVisualBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x7ffe10
    char padding_0[0x160];
    void* slot160;               // +0x160
    void* slot168;               // +0x168
    void* slot170;               // +0x170
    void* slot178;               // +0x178
    EventSlot event180;          // +0x180
    EventSlot event198;          // +0x198
    EventSlot event1b0;          // +0x1b0
    EventSlot event1c8;          // +0x1c8
    EventSlot event1e0;          // +0x1e0
    EventSlot event1f8;          // +0x1f8
    char padding_210[0x18];
    uint32_t id228;              // +0x228
    uint8_t flag22c;             // +0x22c
    uint8_t flag22d;             // +0x22d
    uint8_t flag22e;             // +0x22e
    uint8_t flag22f;             // +0x22f
    uint8_t flag230;             // +0x230
};

}  // namespace SPTG

namespace Onyx {

// Onyx::AnimaticInstance
struct AnimaticInstance : Onyx::Graphics::Visual {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xaf4e40
    char padding_0[0x8a];
    uint8_t flag8a;              // +0x8a
    uint8_t flag8b;              // +0x8b
    char padding_8c[0x4];
    onyx::ComponentHandle* handle90; // +0x90
    SPTG::EventSlot event98;           // +0x98
    SPTG::EventSlot eventB0;           // +0xb0
    SPTG::EventSlot eventC8;           // +0xc8
    SPTG::EventSlot eventE0;           // +0xe0
    SPTG::EventSlot eventF8;           // +0xf8
    char padding_110[0x60];
    int32_t value170;            // +0x170
    uint8_t flag174;             // +0x174
    uint8_t flag175;             // +0x175
};

}  // namespace Onyx

namespace Onyx { namespace Localization {

// Onyx::Localization::LanguageSelector
struct LanguageSelector : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xbf04e0
    char padding_0[0x50];
    void* slot50;                // +0x50
    SPTG::EventSlot event58;           // +0x58
};

} }  // namespace Onyx::Localization

namespace Onyx { namespace Graphics {

// Onyx::Graphics::SetAlphaTest
struct SetAlphaTest : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc97ae0
    char padding_0[0x50];
    SPTG::ReferenceList references50;  // +0x50
    SPTG::EventSlot event78;           // +0x78
};

} }  // namespace Onyx::Graphics

namespace Onyx { namespace Gameplay { namespace Circuits {

// Onyx::Gameplay::Circuits::ScaleManipulator
struct ScaleManipulator : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xcc7680
    char padding_0[0x50];
    SPTG::ReferenceList references50;  // +0x50
    SPTG::EventSlot event78;           // +0x78
};

} } }  // namespace Onyx::Gameplay::Circuits

namespace Onyx {

// Onyx::CounterToText
struct CounterToText : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xce0500
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    onyx::ComponentHandle* handle58; // +0x58
    SPTG::EventSlot event60;           // +0x60
};

}  // namespace Onyx

namespace Onyx { namespace Gameplay { namespace Circuits {

// Onyx::Gameplay::Circuits::DelayCircuit
struct DelayCircuit : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xcc9f40
    char padding_0[0x50];
    SPTG::ReferenceList references50;  // +0x50
    char padding_78[0x8];
    SPTG::EventSlot event80;           // +0x80
    int32_t value98;             // +0x98
};

} } }  // namespace Onyx::Gameplay::Circuits

namespace Onyx {

// Onyx::SwitchTransform
struct SwitchTransform : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc7f430
    char padding_0[0x50];
    SPTG::ReferenceList references50;  // +0x50
    onyx::ComponentHandle* handle78; // +0x78
    char padding_80[0x8];
    SPTG::EventSlot event88;           // +0x88
};

// Onyx::SwitchGate
struct SwitchGate : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc80a60
    char padding_0[0x50];
    SPTG::ReferenceList references50;  // +0x50
    onyx::ComponentHandle* handle78; // +0x78
    char padding_80[0x8];
    SPTG::EventSlot event88;           // +0x88
};

// Onyx::SwitchCamera
struct SwitchCamera : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc81ad0
    char padding_0[0x50];
    SPTG::ReferenceList references50;  // +0x50
    onyx::ComponentHandle* handle78; // +0x78
    char padding_80[0x8];
    SPTG::EventSlot event88;           // +0x88
};

}  // namespace Onyx

namespace Onyx { namespace Graphics {

// Onyx::Graphics::SetAmbientGroup
struct SetAmbientGroup : Onyx::Graphics::GlobalAmbientTableCompose {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc96cd0
    char padding_0[0x58];
    SPTG::EventSlot event58;           // +0x58
    SPTG::EventSlot event70;           // +0x70
    SPTG::EventSlot event88;           // +0x88
};

} }  // namespace Onyx::Graphics

namespace Onyx { namespace Gameplay { namespace Circuits {

// Onyx::Gameplay::Circuits::F32ConstantPublisherCircuit
struct F32ConstantPublisherCircuit : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xcc6440
    char padding_0[0x50];
    SPTG::EventSlot event50;           // +0x50
    SPTG::EventSlot event68;           // +0x68
    int32_t value80;             // +0x80
};

// Onyx::Gameplay::Circuits::U32ConstantPublisherCircuit
struct U32ConstantPublisherCircuit : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xcc69b0
    char padding_0[0x50];
    SPTG::EventSlot event50;           // +0x50
    SPTG::EventSlot event68;           // +0x68
    int32_t value80;             // +0x80
};

// Onyx::Gameplay::Circuits::LerpedU32PublisherCircuit
struct LerpedU32PublisherCircuit : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xcc22d0
    char padding_0[0x50];
    SPTG::EventSlot event50;           // +0x50
    SPTG::EventSlot event68;           // +0x68
    SPTG::EventSlot event80;           // +0x80
    int32_t value98;             // +0x98
    int32_t value9c;             // +0x9c
    uint8_t flagA0;              // +0xa0
    char padding_a1[0x3];
    int32_t valueA4;             // +0xa4
};

// Onyx::Gameplay::Circuits::LerpedF32PublisherCircuit
struct LerpedF32PublisherCircuit : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xcc2df0
    char padding_0[0x50];
    SPTG::EventSlot event50;           // +0x50
    SPTG::EventSlot event68;           // +0x68
    SPTG::EventSlot event80;           // +0x80
    int32_t value98;             // +0x98
    int32_t value9c;             // +0x9c
    uint8_t flagA0;              // +0xa0
    char padding_a1[0x3];
    int32_t valueA4;             // +0xa4
};

// Onyx::Gameplay::Circuits::Vector3ConstantPublisherCircuit
struct Vector3ConstantPublisherCircuit : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xcc5880
    char padding_0[0x50];
    SPTG::EventSlot event50;           // +0x50
    SPTG::EventSlot event68;           // +0x68
    int32_t value80;             // +0x80
    int32_t value84;             // +0x84
    int32_t value88;             // +0x88
};

// Onyx::Gameplay::Circuits::TimerCircuit
struct TimerCircuit : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xcc81f0
    char padding_0[0x50];
    SPTG::EventSlot event50;           // +0x50
    SPTG::EventSlot event68;           // +0x68
    SPTG::EventSlot event80;           // +0x80
    SPTG::EventSlot event98;           // +0x98
    int32_t valueB0;             // +0xb0
    char padding_b4[0x4];
    uint8_t flagB8;              // +0xb8
};

} } }  // namespace Onyx::Gameplay::Circuits

namespace Onyx { namespace Graphics {

// Onyx::Graphics::SetLightGroup
struct SetLightGroup : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc91d70
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    SPTG::EventSlot event58;           // +0x58
    SPTG::EventSlot event70;           // +0x70
    SPTG::EventSlot event88;           // +0x88
    SPTG::EventSlot eventA0;           // +0xa0
};

} }  // namespace Onyx::Graphics

namespace Onyx { namespace Gameplay { namespace Circuits {

// Onyx::Gameplay::Circuits::LerpedVector3PublisherCircuit
struct LerpedVector3PublisherCircuit : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xcc0a50
    char padding_0[0x50];
    SPTG::EventSlot event50;           // +0x50
    SPTG::EventSlot event68;           // +0x68
    SPTG::EventSlot event80;           // +0x80
    int32_t value98;             // +0x98
    int32_t value9c;             // +0x9c
    int32_t valueA0;             // +0xa0
    int32_t valueA4;             // +0xa4
    int32_t valueA8;             // +0xa8
    int32_t valueAc;             // +0xac
    uint8_t flagB0;              // +0xb0
    char padding_b1[0x3];
    int32_t valueB4;             // +0xb4
};

} } }  // namespace Onyx::Gameplay::Circuits

namespace Onyx { namespace Graphics {

// Onyx::Graphics::SetFogGroup
struct SetFogGroup : Onyx::Graphics::GlobalFogTableCompose {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc94ea0
    char padding_0[0x58];
    SPTG::EventSlot event58;           // +0x58
    SPTG::EventSlot event70;           // +0x70
    SPTG::EventSlot event88;           // +0x88
    SPTG::EventSlot eventA0;           // +0xa0
    SPTG::EventSlot eventB8;           // +0xb8
    SPTG::EventSlot eventD0;           // +0xd0
};

} }  // namespace Onyx::Graphics

namespace Onyx {

// Onyx::FirstPersonNavigator
struct FirstPersonNavigator : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xc8b140
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    onyx::ComponentHandle* handle58; // +0x58
    char padding_60[0x10];
    int32_t value70;             // +0x70
    int32_t value74;             // +0x74
    int32_t value78;             // +0x78
    int32_t value7c;             // +0x7c
    uint8_t flag80;              // +0x80
    char padding_81[0x3];
    int32_t value84;             // +0x84
    uint8_t flag88;              // +0x88
    uint8_t flag89;              // +0x89
    uint8_t flag8a;              // +0x8a
    uint8_t flag8b;              // +0x8b
    uint8_t flag8c;              // +0x8c
};

}  // namespace Onyx

namespace Onyx { namespace Localization {

// Onyx::Localization::Localization
struct Localization : ::OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xbebb30
    char padding_0[0x50];
    SPTG::EventSlot event50;           // +0x50
    SPTG::EventSlot event68;           // +0x68
    char padding_80[0xf90];
    int32_t value1010;           // +0x1010
    char padding_1014[0x4];
    onyx::String string1018;     // +0x1018
};

} }  // namespace Onyx::Localization
