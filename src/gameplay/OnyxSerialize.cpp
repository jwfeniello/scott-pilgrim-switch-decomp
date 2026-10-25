// Slot 4 of Onyx engine components (see OnyxSerialize.h and
// docs/GAME_CLASSES.md).
#include "OnyxSerialize.h"
namespace Onyx { namespace Component {

// 0x6782a0
void Base::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    SPTG::ReadEventSlot<6783648u, 0x255c0afeu>(archive, source, event8, this);
    SPTG::ReadEventSlot<6783649u, 0x44174b43u>(archive, source, event20, this);
    onyx::Transfer(archive, value38);
}

} }  // namespace Onyx::Component

namespace Onyx {

// 0xc8ef80
void InputSelector::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferAs<uint32_t>(archive, value4c);
}

// 0x682b20
void IconComponent::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::TransferAs<uint32_t>(archive, value58);
}

}  // namespace Onyx

namespace Onyx { namespace Graphics {

// 0xb67050
void MaterialModifier::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::TransferAs<uint32_t>(archive, value58);
}

} }  // namespace Onyx::Graphics

namespace Onyx {

// 0x6a1f00
void BankQuery::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::TransferHandle(handle58, archive, source);
    onyx::TransferHandle(handle60, archive, source);
    onyx::AttachHandle(source, handle60);
}

// 0x8cddc0
void SwitchAnimationController::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    references58.Serialize(archive, source);
    onyx::TransferHandle(handle80, archive, source);
    onyx::AttachHandle(source, handle80);
}

// 0x93d5f0
void SwitchAnimationInfoHolderSwitch::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    references50.Serialize(archive, source);
    onyx::TransferHandle(handle78, archive, source);
    onyx::TransferHandle(handle80, archive, source);
    AssignComponentSlot<7750592u, 1558270838u>(&slot88, source);
    onyx::AttachHandle(source, handle78);
}

// 0x93ed20
void SwitchAnimatedObject::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    references50.Serialize(archive, source);
    onyx::TransferHandle(handle78, archive, source);
    onyx::TransferHandle(handle80, archive, source);
    AssignComponentSlot<7750592u, 1558270838u>(&slot88, source);
    onyx::AttachHandle(source, handle78);
}

// 0xcb9d70
void BoundingVolumeGraphics::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Onyx::Graphics::Visual::Slot4(archive, source);
    onyx::TransferHandle(handle90, archive, source);
    onyx::TransferAs<uint32_t>(archive, value98);
    onyx::Transfer(archive, value9c);
}

// 0xcd74f0
void SelfRotate::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::Transfer(archive, value68);
    onyx::TransferAs<uint32_t>(archive, value6c);
}

// 0xbcaa30
void ActionComponent::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    SPTG::TransferEventSlot<7755584u, 497209192u>(archive, source, event50, this);
    SPTG::TransferEventSlot<11661376u, 865905804u>(archive, source, event68, this);
    SPTG::ReadEventSlot<12364336u, 979710136u>(archive, source, event80, this);
}

}  // namespace Onyx

namespace SPTG {

// 0x912520
void SetFlashMenuVisibilityActionComposeA::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Onyx::ActionComponent::Slot4(archive, source);
    AssignComponentSlot<7751376u, 2069148984u>(&slotA0, source);
    onyx::TransferId(idA8, archive);
    onyx::TransferAs<uint32_t>(archive, valueAc);
    onyx::Transfer(archive, flagB0);
    AssignComponentSlot<7786432u, 569228434u>(&slotB8, source);
}

}  // namespace SPTG

namespace Onyx { namespace Gameplay { namespace Circuits {

// 0xccbf50
void CompareCircuit::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::TransferHandle(handle58, archive, source);
    onyx::TransferAs<uint32_t>(archive, value60);
    archive << string68 << string78;
    onyx::Transfer(archive, flag88);
}

} } }  // namespace Onyx::Gameplay::Circuits

namespace Onyx { namespace DareAudio {

// 0x70ae30
void RolloffGraphics::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Onyx::Graphics::Visual::Slot4(archive, source);
    onyx::TransferHandle(handle90, archive, source);
    onyx::TransferVector(archive, vector110);
}

} }  // namespace Onyx::DareAudio

namespace SPTG {

// 0x912260
void SetFlashMenuVisibilityActionComposeB::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Onyx::ActionComponent::Slot4(archive, source);
    AssignComponentSlot<7751376u, 2069148984u>(&slotA0, source);
    onyx::TransferId(idA8, archive);
    onyx::TransferAs<uint32_t>(archive, valueAc);
    onyx::Transfer(archive, flagB0);
    AssignComponentSlot<7750592u, 1558270838u>(&slotB8, source);
    AssignComponentSlot<7788000u, 1742971629u>(&slotC0, source);
    onyx::TransferHandle(handleC8, archive, source);
}

}  // namespace SPTG

namespace Onyx { namespace Graphics { namespace Particle { namespace Effect {

// 0xb27da0
void EffectGroup::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::Transfer(archive, value4c);
    onyx::Transfer(archive, value50);
    references58.Serialize(archive, source);
    onyx::Transfer(archive, flag80);
    onyx::Transfer(archive, flag81);
}

// 0xb26c10
void EffectPredicate::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::Transfer(archive, value4c);
    onyx::Transfer(archive, value50);
    onyx::TransferHandle(handle58, archive, source);
    onyx::TransferAs<uint32_t>(archive, value60);
    onyx::Transfer(archive, value64);
}

} } } }  // namespace Onyx::Graphics::Particle::Effect

namespace Onyx {

// 0xcf0d40
void PhysicMoveAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Onyx::ActionComponent::Slot4(archive, source);
    onyx::TransferHandle(handleA0, archive, source);
    onyx::TransferHandle(handleA8, archive, source);
    onyx::TransferAs<uint32_t>(archive, valueB0);
    onyx::Transfer(archive, valueB4);
    onyx::Transfer(archive, flagB8);
    onyx::Transfer(archive, valueBc);
}

// 0xc992d0
void Unknown_c992d0::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    references50.Serialize(archive, source);
    onyx::TransferHandle(handle78, archive, source);
    onyx::AttachHandle(source, handle78);
    onyx::TransferVector(archive, vector88);
}

// 0xc9a780
void Unknown_c9a780::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    references50.Serialize(archive, source);
    onyx::TransferHandle(handle78, archive, source);
    onyx::AttachHandle(source, handle78);
    onyx::TransferVector(archive, vector88);
}

// 0xc9b6c0
void Unknown_c9b6c0::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    references50.Serialize(archive, source);
    onyx::TransferHandle(handle78, archive, source);
    onyx::AttachHandle(source, handle78);
    onyx::TransferVector(archive, vector88);
}

}  // namespace Onyx

namespace SPTG {

// 0x7ad220
void PlayfieldCollisionCompose::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::TransferAs<uint32_t>(archive, value64);
    onyx::Transfer(archive, flag68);
    list70.Serialize(archive);
    AssignComponentSlot<8049456u, 1954509136u>(&slot110, source);
    AssignComponentSlot<7786432u, 569228434u>(&slot118, source);
    onyx::TransferHandle(handle120, archive, source);
    onyx::TransferHandle(handle128, archive, source);
    onyx::TransferHandle(handle130, archive, source);
    onyx::TransferHandle(handle138, archive, source);
    onyx::TransferHandle(handle140, archive, source);
}

}  // namespace SPTG

namespace Onyx { namespace Graphics {

// 0xb62950
void TextureSequencer::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    references50.Serialize(archive, source);
    onyx::TransferHandle(handle78, archive, source);
    onyx::AttachHandle(source, handle78);
    SPTG::TransferEventSlot<7755584u, 497209192u>(archive, source, event88, this);
    SPTG::TransferEventSlot<11661376u, 865905804u>(archive, source, eventA0, this);
    onyx::Transfer(archive, valueD0);
    onyx::Transfer(archive, flagD4);
    onyx::TransferAs<uint32_t>(archive, valueD8);
}

} }  // namespace Onyx::Graphics

namespace Onyx { namespace Graphics { namespace NewMaterialSystem {

// 0xb64c40
void NewMaterial::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::Transfer(archive, flag58);
    onyx::Transfer(archive, flag59);
    onyx::Transfer(archive, flag5a);
    onyx::Transfer(archive, flag5b);
    onyx::TransferAs<uint32_t>(archive, value5c);
    onyx::Transfer(archive, value60);
}

} } }  // namespace Onyx::Graphics::NewMaterialSystem

namespace SPTG {

// 0x8ce3d0
void AnimationInfoHolderSwitch::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    references58.Serialize(archive, source);
    onyx::TransferHandle(handle80, archive, source);
    onyx::AttachHandle(source, handle80);
    onyx::TransferArray(archive, array90);
}

}  // namespace SPTG

namespace Onyx { namespace Graphics { namespace Particle { namespace Effect {

// 0xb21550
void EffectTextureStep::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::Transfer(archive, value4c);
    onyx::Transfer(archive, value50);
    onyx::Transfer(archive, flag59);
    onyx::Transfer(archive, flag5a);
    onyx::Transfer(archive, flag5b);
    onyx::Transfer(archive, value5c);
    onyx::TransferAs<uint32_t>(archive, value60);
}

} } } }  // namespace Onyx::Graphics::Particle::Effect

namespace Onyx {

// 0xcef5d0
void Billboard::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    SPTG::TransferEventSlot<11918752u, 2127702888u>(archive, source, event58, this);
    onyx::Transfer(archive, flag70);
    onyx::TransferAs<uint32_t>(archive, value74);
    onyx::Transfer(archive, value84);
    onyx::Transfer(archive, value88);
    onyx::Transfer(archive, value8c);
    onyx::Transfer(archive, value90);
}

// 0xcd23d0
void SeekBehavior::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::TransferHandle(handle58, archive, source);
    onyx::TransferHandle(handle60, archive, source);
    onyx::Transfer(archive, value68);
    onyx::Transfer(archive, value70);
    onyx::Transfer(archive, value74);
    onyx::Transfer(archive, value78);
    onyx::TransferAs<uint32_t>(archive, value7c);
    onyx::Transfer(archive, value80);
}

}  // namespace Onyx

namespace Onyx { namespace Graphics { namespace Particle { namespace Emitter {

// 0xb1b040
void EmitterSimple::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::TransferHandle(handle58, archive, source);
    onyx::TransferHandle(handle60, archive, source);
    onyx::Transfer(archive, value144);
    onyx::Transfer(archive, value148);
    onyx::Transfer(archive, value14c);
    onyx::Transfer(archive, value150);
    onyx::Transfer(archive, value154);
    onyx::Transfer(archive, flag158);
    onyx::Transfer(archive, flag159);
    onyx::TransferAs<uint32_t>(archive, value15c);
}

} } } }  // namespace Onyx::Graphics::Particle::Emitter

namespace Onyx { namespace Graphics { namespace Particle { namespace GraphicSource {

// 0xb175f0
void GraphicSourceQuad::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Onyx::Graphics::Particle::GraphicSource::GraphicSourceBase::Slot4(archive, source);
    onyx::TransferHandle(handle78, archive, source);
    onyx::Transfer(archive, valueD4);
    onyx::Transfer(archive, valueD8);
    onyx::Transfer(archive, valueDc);
    onyx::Transfer(archive, valueE0);
    onyx::Transfer(archive, valueE4);
    onyx::Transfer(archive, valueE8);
    onyx::TransferAs<uint32_t>(archive, valueEc);
    onyx::Transfer(archive, valueF0);
    onyx::Transfer(archive, valueF4);
    onyx::Transfer(archive, valueF8);
}

} } } }  // namespace Onyx::Graphics::Particle::GraphicSource

namespace Onyx {

// 0xc7d290
void AnyKeyInputTrigger::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::Transfer(archive, flag4a);
    SPTG::ReadEventSlot<13095568u, 102768149u>(archive, source, event50, this);
}

// 0xcdd090
void VisualEffect::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    SPTG::ReadEventSlot<13488272u, 920171261u>(archive, source, event50, this);
    SPTG::ReadEventSlot<13488273u, 258924190u>(archive, source, event68, this);
    onyx::Transfer(archive, flag80);
}

// 0xcdcdd0
void TimedVisualEffect::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Onyx::VisualEffect::Slot4(archive, source);
    SPTG::ReadEventSlot<13487568u, 676571644u>(archive, source, event88, this);
    onyx::Transfer(archive, valueA4);
}

// 0xc7c880
void CollisionTrigger::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::Transfer(archive, flag4a);
    onyx::TransferHandle(handle50, archive, source);
    SPTG::ReadEventSlot<13092992u, 1457727362u>(archive, source, eventB0, this);
}

}  // namespace Onyx

namespace Onyx { namespace Graphics { namespace Particle { namespace Effect {

// 0xb28510
void EffectEvent::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::Transfer(archive, value4c);
    onyx::Transfer(archive, value50);
    SPTG::ReadEventSlot<11699472u, 913605653u>(archive, source, event60, this);
}

} } } }  // namespace Onyx::Graphics::Particle::Effect

namespace Onyx {

// 0xc8e420
void SaveTransform::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::TransferHandle(handle58, archive, source);
    SPTG::ReadEventSlot<13165600u, 914524493u>(archive, source, event60, this);
    onyx::TransferAs<uint32_t>(archive, value78);
}

// 0xaf6940
void AnimationEventRouter::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    SPTG::ReadEventSlot<11495744u, 765958984u>(archive, source, event60, this);
    onyx::Transfer(archive, value78);
    onyx::Transfer(archive, value7c);
}

// 0xc83ef0
void RandomZone::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    SPTG::ReadEventSlot<13123312u, 1929521303u>(archive, source, event58, this);
    onyx::Transfer(archive, value70);
    onyx::Transfer(archive, value74);
}

}  // namespace Onyx

namespace Onyx { namespace Graphics { namespace Particle { namespace Emitter {

// 0xb1e950
void EmitterInstance::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Onyx::Graphics::Visual::Slot4(archive, source);
    onyx::TransferHandle(handle90, archive, source);
    SPTG::TransferEventSlot<7755584u, 497209192u>(archive, source, event98, this);
    SPTG::TransferEventSlot<11661376u, 865905804u>(archive, source, eventB0, this);
    SPTG::ReadEventSlot<11659600u, 865149765u>(archive, source, eventC8, this);
    onyx::Transfer(archive, flagE1);
    onyx::Transfer(archive, flagE2);
}

} } } }  // namespace Onyx::Graphics::Particle::Emitter

namespace Onyx {

// 0xcd1450
void CollisionWalkLocomotor::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Onyx::WalkLocomotor::Slot4(archive, source);
    SPTG::ReadEventSlot<13440080u, 741541411u>(archive, source, event88, this);
    onyx::Transfer(archive, valueA0);
    onyx::Transfer(archive, valueA4);
    onyx::Transfer(archive, valueA8);
    onyx::Transfer(archive, valueAc);
}

// 0x699170
void SpawnTicket::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    references50.Serialize(archive, source);
    onyx::TransferHandle(handle78, archive, source);
    SPTG::ReadEventSlot<6918512u, 2108504009u>(archive, source, event80, this);
    onyx::TransferVector(archive, vector98);
}

}  // namespace Onyx

namespace SPTG {

// 0x7acea0
void LevelSection::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    SPTG::PlayfieldCollisionCompose::Slot4(archive, source);
    onyx::Transfer(archive, flag148);
    onyx::Transfer(archive, flag149);
    onyx::Transfer(archive, flag14a);
    onyx::Transfer(archive, flag14b);
    onyx::Transfer(archive, flag14c);
    onyx::Transfer(archive, flag14d);
    onyx::Transfer(archive, flag14e);
    onyx::Transfer(archive, flag14f);
    onyx::Transfer(archive, flag150);
    onyx::Transfer(archive, value154);
    onyx::TransferArray(archive, array158);
    onyx::TransferArray(archive, array178);
    onyx::TransferArray(archive, array198);
}

}  // namespace SPTG

namespace Onyx {

// 0x680080
void Savegame::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Onyx::PhaseCompose::Slot4(archive, source);
    SPTG::ReadEventSlot<6815872u, 425997678u>(archive, source, event78, this);
    SPTG::ReadEventSlot<6815873u, 786693866u>(archive, source, event90, this);
    onyx::Transfer(archive, value158);
}

// 0xad7840
void MenuItem::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    SPTG::TransferEventSlot<11346464u, 936511799u>(archive, source, event50, this);
    SPTG::TransferEventSlot<11347120u, 2070719571u>(archive, source, event68, this);
    SPTG::ReadEventSlot<11368512u, 883368044u>(archive, source, event80, this);
    SPTG::ReadEventSlot<11368513u, 255658764u>(archive, source, event98, this);
}

}  // namespace Onyx

namespace Onyx { namespace Flow {

// 0x6a79d0
void Gate::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Onyx::Flow::GameCompose::Slot4(archive, source);
    SPTG::ReadEventSlot<6978000u, 55609239u>(archive, source, event60, this);
    SPTG::TransferEventSlot<6942816u, 970704087u>(archive, source, event78, this);
    SPTG::ReadEventSlot<6978001u, 1700265000u>(archive, source, event90, this);
    SPTG::ReadEventSlot<6978002u, 1585829904u>(archive, source, eventA8, this);
}

} }  // namespace Onyx::Flow

namespace SPTG {

// 0x881ea0
void LevelStage::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Onyx::Flow::Gate::Slot4(archive, source);
    ReadEventSlot<8920736u, 1255200863u>(archive, source, eventE0, this);
    ReadEventSlot<8920737u, 1161792803u>(archive, source, eventF8, this);
    onyx::TransferId(id128, archive);
    onyx::Transfer(archive, flag12c);
}

}  // namespace SPTG

namespace Onyx {

// 0xc79ee0
void KeyInputTrigger::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::Transfer(archive, flag4a);
    SPTG::ReadEventSlot<13082336u, 407957822u>(archive, source, event50, this);
    SPTG::ReadEventSlot<13082337u, 1602474636u>(archive, source, event68, this);
    onyx::TransferAs<uint32_t>(archive, flag98);
}

}  // namespace Onyx

namespace Onyx { namespace Collision {

// 0xb9a9e0
void Collision2D::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    SPTG::ReadEventSlot<12167648u, 1719610386u>(archive, source, event58, this);
    SPTG::ReadEventSlot<12167649u, 752256576u>(archive, source, event70, this);
    onyx::Transfer(archive, value98);
    onyx::Transfer(archive, value9c);
    onyx::Transfer(archive, valueA0);
}

} }  // namespace Onyx::Collision

namespace Onyx {

// 0xad9020
void MenuWidget::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Onyx::MenuItem::Slot4(archive, source);
    onyx::TransferHandle(handleB0, archive, source);
    onyx::TransferHandle(handleB8, archive, source);
    onyx::TransferHandle(handleC0, archive, source);
    onyx::TransferHandle(handleC8, archive, source);
    SPTG::ReadEventSlot<11374624u, 429191520u>(archive, source, eventD0, this);
    SPTG::ReadEventSlot<11374625u, 2081638728u>(archive, source, eventE8, this);
    onyx::Transfer(archive, value100);
    onyx::Transfer(archive, flag104);
}

}  // namespace Onyx

namespace Onyx { namespace Graphics {

// 0xc9d150
void GraphicsFader::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    references58.Serialize(archive, source);
    SPTG::ReadEventSlot<13226320u, 2007152938u>(archive, source, event80, this);
    SPTG::ReadEventSlot<13226321u, 1082814257u>(archive, source, event98, this);
    onyx::Transfer(archive, valueE0);
    onyx::Transfer(archive, valueE4);
    onyx::Transfer(archive, valueE8);
    onyx::TransferAs<uint32_t>(archive, valueEc);
    onyx::Transfer(archive, flagF0);
}

} }  // namespace Onyx::Graphics

namespace Onyx { namespace DareAudio {

// 0x71f310
void AudioAmbientAI::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::TransferHandle(handle58, archive, source);
    onyx::TransferHandle(handle60, archive, source);
    SPTG::ReadEventSlot<7467792u, 1665378773u>(archive, source, event68, this);
    SPTG::ReadEventSlot<7467793u, 754430906u>(archive, source, event80, this);
    onyx::Transfer(archive, valueA0);
    onyx::Transfer(archive, valueA4);
    onyx::Transfer(archive, valueA8);
    onyx::Transfer(archive, valueAc);
    onyx::Transfer(archive, valueB0);
    onyx::Transfer(archive, flagB4);
}

} }  // namespace Onyx::DareAudio

namespace Onyx {

// 0x679940
void TRCComponent::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    SPTG::ReadEventSlot<6789440u, 133225177u>(archive, source, event50, this);
    SPTG::ReadEventSlot<6789441u, 1037779068u>(archive, source, event68, this);
    SPTG::ReadEventSlot<6789442u, 1986898944u>(archive, source, event80, this);
}

}  // namespace Onyx

namespace Onyx { namespace DLC {

// 0x72abf0
void UpdateTask::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Onyx::DLC::DLCTask::Slot4(archive, source);
    SPTG::TransferEventSlot<7517152u, 1389816545u>(archive, source, event108, this);
    SPTG::ReadEventSlot<7515120u, 1889041323u>(archive, source, event120, this);
    SPTG::ReadEventSlot<7515121u, 1507201771u>(archive, source, event138, this);
    SPTG::ReadEventSlot<7515122u, 551491422u>(archive, source, event150, this);
}

} }  // namespace Onyx::DLC

namespace Onyx {

// 0xcdb080
void EventAccumulator::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    SPTG::ReadEventSlot<13480064u, 1428406615u>(archive, source, event50, this);
    SPTG::ReadEventSlot<13480065u, 866489004u>(archive, source, event68, this);
    SPTG::ReadEventSlot<13480066u, 981225154u>(archive, source, event80, this);
    onyx::Transfer(archive, value98);
}

// 0xc7b930
void EnterExitTrigger::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::Transfer(archive, flag4a);
    onyx::TransferHandle(handle50, archive, source);
    SPTG::ReadEventSlot<13089072u, 1665378773u>(archive, source, eventB0, this);
    SPTG::ReadEventSlot<13089073u, 754430906u>(archive, source, eventC8, this);
    SPTG::ReadEventSlot<13089074u, 990852813u>(archive, source, eventE0, this);
    onyx::Transfer(archive, flagF9);
}

// 0xce3ef0
void Collectable::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::TransferHandle(handle58, archive, source);
    onyx::TransferHandle(handle60, archive, source);
    SPTG::ReadEventSlot<13516528u, 335593033u>(archive, source, event68, this);
    SPTG::ReadEventSlot<13516529u, 1005725814u>(archive, source, event80, this);
    SPTG::ReadEventSlot<13516530u, 1364057720u>(archive, source, event98, this);
    onyx::Transfer(archive, flagE0);
    onyx::Transfer(archive, valueE4);
}

// 0xad3970
void MenuEventScheme::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    SPTG::TransferEventSlot<11346464u, 936511799u>(archive, source, event50, this);
    SPTG::TransferEventSlot<11347120u, 2070719571u>(archive, source, event68, this);
    onyx::Transfer(archive, value80);
    onyx::TransferHandle(handle88, archive, source);
    SPTG::ReadEventSlot<11352432u, 1755221864u>(archive, source, event90, this);
    SPTG::ReadEventSlot<11352433u, 2118321198u>(archive, source, eventA8, this);
    SPTG::ReadEventSlot<11352434u, 1874995565u>(archive, source, eventC0, this);
    SPTG::ReadEventSlot<11352435u, 523957138u>(archive, source, eventD8, this);
}

}  // namespace Onyx

namespace SPTG {

// 0x7ffe10
void FlashMenu::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Onyx::Fire::FireVisualBase::Slot4(archive, source);
    AssignComponentSlot<7787216u, 840570882u>(&slot160, source);
    AssignComponentSlot<7784864u, 623346953u>(&slot168, source);
    AssignComponentSlot<7751376u, 2069148984u>(&slot170, source);
    AssignComponentSlot<7788000u, 1742971629u>(&slot178, source);
    ReadEventSlot<8388112u, 1219292170u>(archive, source, event180, this);
    ReadEventSlot<8388113u, 1219292171u>(archive, source, event198, this);
    TransferEventSlot<7910320u, 1219292172u>(archive, source, event1b0, this);
    TransferEventSlot<7910976u, 1219292173u>(archive, source, event1c8, this);
    ReadEventSlot<8388114u, 1219292174u>(archive, source, event1e0, this);
    ReadEventSlot<8388115u, 1219292175u>(archive, source, event1f8, this);
    onyx::TransferId(id228, archive);
    onyx::Transfer(archive, flag22c);
    onyx::Transfer(archive, flag22d);
    onyx::Transfer(archive, flag22e);
    onyx::Transfer(archive, flag22f);
    onyx::Transfer(archive, flag230);
}

}  // namespace SPTG

namespace Onyx {

// 0xaf4e40
void AnimaticInstance::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Onyx::Graphics::Visual::Slot4(archive, source);
    onyx::Transfer(archive, flag8a);
    onyx::Transfer(archive, flag8b);
    onyx::TransferHandle(handle90, archive, source);
    SPTG::ReadEventSlot<11488832u, 2081157009u>(archive, source, event98, this);
    SPTG::ReadEventSlot<11488833u, 429031211u>(archive, source, eventB0, this);
    SPTG::ReadEventSlot<11488834u, 591395314u>(archive, source, eventC8, this);
    SPTG::ReadEventSlot<11488835u, 911544312u>(archive, source, eventE0, this);
    SPTG::ReadEventSlot<11488836u, 1962159730u>(archive, source, eventF8, this);
    onyx::Transfer(archive, value170);
    onyx::Transfer(archive, flag174);
    onyx::Transfer(archive, flag175);
}

}  // namespace Onyx

namespace Onyx { namespace Localization {

// 0xbf04e0
void LanguageSelector::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    AssignComponentSlot<12481344u, 1558270838u>(&slot50, source);
    SPTG::ReadEventEntries(archive, source, event58, this, SPTG::ReadEventEntry<12500592u>);
}

} }  // namespace Onyx::Localization

namespace Onyx { namespace Graphics {

// 0xc97ae0
void SetAlphaTest::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    references50.Serialize(archive, source);
    SPTG::ReadEventEntries(archive, source, event78, this, SPTG::ReadEventEntry<13181680u>);
}

} }  // namespace Onyx::Graphics

namespace Onyx { namespace Gameplay { namespace Circuits {

// 0xcc7680
void ScaleManipulator::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    references50.Serialize(archive, source);
    SPTG::ReadEventEntries(archive, source, event78, this, SPTG::ReadEventEntry<13373856u>);
}

} } }  // namespace Onyx::Gameplay::Circuits

namespace Onyx {

// 0xce0500
void CounterToText::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::TransferHandle(handle58, archive, source);
    SPTG::ReadEventEntries(archive, source, event60, this, SPTG::ReadEventEntry<13501872u>);
}

}  // namespace Onyx

namespace Onyx { namespace Gameplay { namespace Circuits {

// 0xcc9f40
void DelayCircuit::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    references50.Serialize(archive, source);
    SPTG::ReadEventEntries(archive, source, event80, this, SPTG::ReadEventEntry<13194160u>);
    onyx::Transfer(archive, value98);
}

} } }  // namespace Onyx::Gameplay::Circuits

namespace Onyx {

// 0xc7f430
void SwitchTransform::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    references50.Serialize(archive, source);
    onyx::TransferHandle(handle78, archive, source);
    onyx::AttachHandle(source, handle78);
    SPTG::ReadEventEntries(archive, source, event88, this, SPTG::ReadEventEntry<13104384u>);
}

// 0xc80a60
void SwitchGate::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    references50.Serialize(archive, source);
    onyx::TransferHandle(handle78, archive, source);
    onyx::AttachHandle(source, handle78);
    SPTG::ReadEventEntries(archive, source, event88, this, SPTG::ReadEventEntry<8403296u>);
}

// 0xc81ad0
void SwitchCamera::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    references50.Serialize(archive, source);
    onyx::TransferHandle(handle78, archive, source);
    onyx::AttachHandle(source, handle78);
    SPTG::ReadEventEntries(archive, source, event88, this, SPTG::ReadEventEntry<13104384u>);
}

}  // namespace Onyx

namespace Onyx { namespace Graphics {

// 0xc96cd0
void SetAmbientGroup::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Onyx::Graphics::GlobalAmbientTableCompose::Slot4(archive, source);
    SPTG::ReadEventEntries(archive, source, event58, this, SPTG::ReadEventEntry<13180624u>);
    SPTG::ReadEventEntries(archive, source, event70, this, SPTG::ReadEventEntry<13181680u>);
    SPTG::TransferEventSlot<13182592u, 13611869u>(archive, source, event88, this);
}

} }  // namespace Onyx::Graphics

namespace Onyx { namespace Gameplay { namespace Circuits {

// 0xcc6440
void F32ConstantPublisherCircuit::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    SPTG::ReadEventEntries(archive, source, event50, this, SPTG::ReadEventEntry<13194160u>);
    SPTG::ReadEventEntries(archive, source, event68, this, SPTG::ReadEventEntry<13194160u>);
    onyx::Transfer(archive, value80);
}

// 0xcc69b0
void U32ConstantPublisherCircuit::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    SPTG::ReadEventEntries(archive, source, event50, this, SPTG::ReadEventEntry<13181680u>);
    SPTG::ReadEventEntries(archive, source, event68, this, SPTG::ReadEventEntry<13181680u>);
    onyx::Transfer(archive, value80);
}

// 0xcc22d0
void LerpedU32PublisherCircuit::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    SPTG::ReadEventEntries(archive, source, event50, this, SPTG::ReadEventEntry<13181680u>);
    SPTG::TransferEventSlot<13182592u, 13611869u>(archive, source, event68, this);
    SPTG::TransferEventSlot<13182592u, 13611869u>(archive, source, event80, this);
    onyx::Transfer(archive, value98);
    onyx::Transfer(archive, value9c);
    onyx::Transfer(archive, valueA4);
    onyx::Transfer(archive, flagA0);
}

// 0xcc2df0
void LerpedF32PublisherCircuit::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    SPTG::ReadEventEntries(archive, source, event50, this, SPTG::ReadEventEntry<13194160u>);
    SPTG::TransferEventSlot<13182592u, 13611869u>(archive, source, event68, this);
    SPTG::TransferEventSlot<13182592u, 13611869u>(archive, source, event80, this);
    onyx::Transfer(archive, value98);
    onyx::Transfer(archive, value9c);
    onyx::Transfer(archive, valueA4);
    onyx::Transfer(archive, flagA0);
}

// 0xcc5880
void Vector3ConstantPublisherCircuit::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    SPTG::ReadEventEntries(archive, source, event50, this, SPTG::ReadEventEntry<13373856u>);
    SPTG::ReadEventEntries(archive, source, event68, this, SPTG::ReadEventEntry<13373856u>);
    onyx::Transfer(archive, value80);
    onyx::Transfer(archive, value84);
    onyx::Transfer(archive, value88);
}

// 0xcc81f0
void TimerCircuit::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    SPTG::ReadEventEntries(archive, source, event50, this, SPTG::ReadEventEntry<13194160u>);
    SPTG::ReadEventEntries(archive, source, event68, this, SPTG::ReadEventEntry<13388000u>);
    SPTG::TransferEventSlot<13182592u, 13611869u>(archive, source, event80, this);
    SPTG::TransferEventSlot<13182592u, 13611869u>(archive, source, event98, this);
    onyx::Transfer(archive, valueB0);
    onyx::Transfer(archive, flagB8);
}

} } }  // namespace Onyx::Gameplay::Circuits

namespace Onyx { namespace Graphics {

// 0xc91d70
void SetLightGroup::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    SPTG::ReadEventEntries(archive, source, event58, this, SPTG::ReadEventEntry<13180624u>);
    SPTG::ReadEventEntries(archive, source, event70, this, SPTG::ReadEventEntry<13180624u>);
    SPTG::ReadEventEntries(archive, source, event88, this, SPTG::ReadEventEntry<13181680u>);
    SPTG::TransferEventSlot<13182592u, 13611869u>(archive, source, eventA0, this);
}

} }  // namespace Onyx::Graphics

namespace Onyx { namespace Gameplay { namespace Circuits {

// 0xcc0a50
void LerpedVector3PublisherCircuit::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    SPTG::ReadEventEntries(archive, source, event50, this, SPTG::ReadEventEntry<13373856u>);
    SPTG::TransferEventSlot<13182592u, 13611869u>(archive, source, event68, this);
    SPTG::TransferEventSlot<13182592u, 13611869u>(archive, source, event80, this);
    onyx::Transfer(archive, value98);
    onyx::Transfer(archive, value9c);
    onyx::Transfer(archive, valueA0);
    onyx::Transfer(archive, valueA4);
    onyx::Transfer(archive, valueA8);
    onyx::Transfer(archive, valueAc);
    onyx::Transfer(archive, valueB4);
    onyx::Transfer(archive, flagB0);
}

} } }  // namespace Onyx::Gameplay::Circuits

namespace Onyx { namespace Graphics {

// 0xc94ea0
void SetFogGroup::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Onyx::Graphics::GlobalFogTableCompose::Slot4(archive, source);
    SPTG::ReadEventEntries(archive, source, event58, this, SPTG::ReadEventEntry<13180624u>);
    SPTG::ReadEventEntries(archive, source, event70, this, SPTG::ReadEventEntry<13181680u>);
    SPTG::ReadEventEntries(archive, source, event88, this, SPTG::ReadEventEntry<13194160u>);
    SPTG::ReadEventEntries(archive, source, eventA0, this, SPTG::ReadEventEntry<13194160u>);
    SPTG::ReadEventEntries(archive, source, eventB8, this, SPTG::ReadEventEntry<13181680u>);
    SPTG::TransferEventSlot<13182592u, 13611869u>(archive, source, eventD0, this);
}

} }  // namespace Onyx::Graphics

namespace Onyx {

// 0xc8b140
void FirstPersonNavigator::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::TransferHandle(handle58, archive, source);
    onyx::Transfer(archive, value70);
    onyx::Transfer(archive, value74);
    onyx::Transfer(archive, value78);
    onyx::Transfer(archive, value7c);
    onyx::Transfer(archive, flag80);
    onyx::Transfer(archive, value84);
    onyx::TransferAs<uint32_t>(archive, flag88);
    onyx::TransferAs<uint32_t>(archive, flag89);
    onyx::TransferAs<uint32_t>(archive, flag8a);
    onyx::TransferAs<uint32_t>(archive, flag8b);
    onyx::Transfer(archive, flag8c);
}

}  // namespace Onyx

namespace Onyx { namespace Localization {

// 0xbebb30
void Localization::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ::OnyxComponentBase::Slot4(archive, source);
    SPTG::ReadEventSlot<12499760u, 2101335766u>(archive, source, event50, this);
    SPTG::ReadEventEntries(archive, source, event68, this, SPTG::ReadEventEntry<12500592u>);
    onyx::TransferAs<uint32_t>(archive, value1010);
    archive << string1018;
}

} }  // namespace Onyx::Localization

namespace Onyx {

template struct Switch<::OnyxComponentBase, Graphics::Mesh>;          // 0xb4dc60
template struct Switch<AIComponent, Graphics::Texture>;               // 0xb62180
template struct Switch<::OnyxComponentBase, Transform>;               // 0xc7ea00
template struct Switch<::OnyxComponentBase, Flow::Gate>;              // 0xc80360
template struct Switch<::OnyxComponentBase, CameraComponent>;         // 0xc813d0
template struct Switch<::OnyxComponentBase, Graphics::SkinnedMesh>;   // 0xc99b10
template struct Switch<::OnyxComponentBase, Graphics::ModularMesh>;   // 0xc9afc0

}  // namespace Onyx

namespace Onyx { namespace Gameplay { namespace Circuits { namespace Detail {

template struct BaseValuePublisherCircuit<Gear::Vector3<float>>;     // 0xcc1f90
template struct BaseValuePublisherCircuit<uint32_t>;                 // 0xcc2ad0
template struct BaseValuePublisherCircuit<float>;                    // 0xcc35e0
template struct BaseValuePublisherCircuit<Onyx::Graphics::Color>;    // 0xcc4280

} } } }  // namespace Onyx::Gameplay::Circuits::Detail
