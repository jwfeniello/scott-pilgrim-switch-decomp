// Slot 4 of components that move their fields one after another through the archive: a position
// and a stream whose slot 6 moves the bytes (docs/GAME_CLASSES.md). Same shape as ComponentSerialize.cpp,
// but generated from the decompiler's reading of each function and tested against the bytes. Class
// names are RTTI names where those are plain. Fields are named by offset, and members with their own
// serializers are stand-ins named after the function's address.
#include <stdint.h>
#include <stddef.h>
struct Stream {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2();
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual uint32_t Transfer(void* data, uint32_t size);   // slot 6
};
struct Archive {
    uint64_t position;
    Stream* stream;
};
struct Source;
template<class T> __attribute__((always_inline)) inline void Transfer(Archive& archive, T& value) {
    archive.position += archive.stream->Transfer(&value, sizeof(T));
}
template<class S, class T> __attribute__((always_inline)) inline void TransferAs(Archive& archive, T& field) {
    S value = field;
    Transfer(archive, value);
    field = value;
}
namespace SPTG { 
struct StopSound {
    void Slot4(Archive& archive, Source* source);
    char padding_0[12]; uint32_t fc; uint32_t f10; uint32_t f14;
};
void StopSound::Slot4(Archive& archive, Source* source) {
    Transfer(archive, fc);
    TransferAs<uint32_t>(archive, f10);
    Transfer(archive, f14);
}
}
namespace SPTG { 
struct ChangeVolumeMTT {
    void Slot4(Archive& archive, Source* source);
    char padding_0[12]; uint32_t fc; uint32_t f10; uint32_t f14; uint32_t f18;
};
void ChangeVolumeMTT::Slot4(Archive& archive, Source* source) {
    Transfer(archive, fc);
    Transfer(archive, f10);
    Transfer(archive, f14);
    Transfer(archive, f18);
}
}
namespace SPTG { 
struct ChangeVolume {
    void Slot4(Archive& archive, Source* source);
    char padding_0[12]; uint32_t fc; uint32_t f10; uint32_t f14; uint32_t f18; uint32_t f1c; uint32_t f20;
};
void ChangeVolume::Slot4(Archive& archive, Source* source) {
    Transfer(archive, fc);
    Transfer(archive, f10);
    Transfer(archive, f14);
    TransferAs<uint32_t>(archive, f18);
    Transfer(archive, f1c);
    Transfer(archive, f20);
}
}
namespace SPTG { 
struct ChangeSoundEffect {
    void Slot4(Archive& archive, Source* source);
    char padding_0[12]; uint32_t fc;
};
void ChangeSoundEffect::Slot4(Archive& archive, Source* source) {
    Transfer(archive, fc);
}
}
struct M9e6310_6 { void Move(Archive&); char data; };

struct Class9e6310 {
    void Slot4(Archive& archive, Source* source);
    uint32_t f0; uint32_t f4; uint32_t f8; uint32_t fc; uint8_t f10; char padding_11[7]; M9e6310_6 f18; char padding_19[87]; uint32_t f70; uint8_t f74;
};
void Class9e6310::Slot4(Archive& archive, Source* source) {
    Transfer(archive, f0);
    Transfer(archive, f4);
    Transfer(archive, f8);
    Transfer(archive, fc);
    Transfer(archive, f10);
    f18.Move(archive);
    TransferAs<uint32_t>(archive, f70);
    Transfer(archive, f74);
}

namespace SPTG { 
struct ControllableTextureDescriptor {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8; uint32_t fc;
};
void ControllableTextureDescriptor::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
    TransferAs<uint32_t>(archive, fc);
}
}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct DynamicBlendProperty {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8;
};
void DynamicBlendProperty::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct BindTexture {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8;
};
void BindTexture::Slot4(Archive& archive, Source* source) {
    Transfer(archive, f8);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct FillMode {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8;
};
void FillMode::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct Noise {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8; uint32_t fc; uint32_t f10;
};
void Noise::Slot4(Archive& archive, Source* source) {
    Transfer(archive, f8);
    Transfer(archive, fc);
    Transfer(archive, f10);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct TextureStageCoordProjectionMapping {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8; uint32_t fc; uint32_t f10; uint32_t f14; uint32_t f18;
};
void TextureStageCoordProjectionMapping::Slot4(Archive& archive, Source* source) {
    Transfer(archive, f8);
    Transfer(archive, fc);
    Transfer(archive, f10);
    Transfer(archive, f14);
    Transfer(archive, f18);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct TextureStageCoordGenCoef {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8; uint32_t fc; uint32_t f10; uint32_t f14; uint32_t f18; uint32_t f1c;
};
void TextureStageCoordGenCoef::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
    TransferAs<uint32_t>(archive, fc);
    Transfer(archive, f10);
    Transfer(archive, f14);
    Transfer(archive, f18);
    Transfer(archive, f1c);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct TextureStageCoordGen {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8; uint32_t fc;
};
void TextureStageCoordGen::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
    TransferAs<uint32_t>(archive, fc);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct TextureStageAlphaScale {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8;
};
void TextureStageAlphaScale::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct TextureStageRGBScale {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8;
};
void TextureStageRGBScale::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct TextureStageAlphaOperand {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8; uint32_t fc;
};
void TextureStageAlphaOperand::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
    TransferAs<uint32_t>(archive, fc);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct TextureStageColorOperand {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8; uint32_t fc;
};
void TextureStageColorOperand::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
    TransferAs<uint32_t>(archive, fc);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct TextureStageAlphaArgument {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8; uint32_t fc;
};
void TextureStageAlphaArgument::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
    TransferAs<uint32_t>(archive, fc);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct TextureStageColorArgument {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8; uint32_t fc;
};
void TextureStageColorArgument::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
    TransferAs<uint32_t>(archive, fc);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct TextureStageAlphaCombineFunc {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8;
};
void TextureStageAlphaCombineFunc::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct TextureStageRGBCombineFunc {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8;
};
void TextureStageRGBCombineFunc::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct TextureStageApplyFunc {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8;
};
void TextureStageApplyFunc::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct PointSize {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8;
};
void PointSize::Slot4(Archive& archive, Source* source) {
    Transfer(archive, f8);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct DepthOffset {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8; uint32_t fc;
};
void DepthOffset::Slot4(Archive& archive, Source* source) {
    Transfer(archive, f8);
    Transfer(archive, fc);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct TextureRotation {
    void Slot4(Archive& archive, Source* source);
    char padding_0[56]; uint32_t f38; uint32_t f3c; uint32_t f40;
};
void TextureRotation::Slot4(Archive& archive, Source* source) {
    Transfer(archive, f38);
    Transfer(archive, f3c);
    Transfer(archive, f40);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct TextureTranslation {
    void Slot4(Archive& archive, Source* source);
    char padding_0[56]; uint32_t f38; uint32_t f3c;
};
void TextureTranslation::Slot4(Archive& archive, Source* source) {
    Transfer(archive, f38);
    Transfer(archive, f3c);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct FrontFace {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8;
};
void FrontFace::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct DepthFunc {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8;
};
void DepthFunc::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct ColorOperation {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8;
};
void ColorOperation::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
}
}}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct AlphaTest {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint8_t f8; char padding_9[3]; uint32_t fc;
};
void AlphaTest::Slot4(Archive& archive, Source* source) {
    Transfer(archive, f8);
    TransferAs<uint32_t>(archive, fc);
}
}}}
struct Baseb69c30 { void Slot4(Archive& archive, Source* source); };
namespace Onyx { namespace Graphics { 
struct LightSpot : Baseb69c30 {
    void Slot4(Archive& archive, Source* source);
    char padding_0[164]; uint32_t fa4; uint32_t fa8;
};
void LightSpot::Slot4(Archive& archive, Source* source) {
    Baseb69c30::Slot4(archive, source);
    Transfer(archive, fa4);
    TransferAs<uint32_t>(archive, fa8);
}
}}
namespace Onyx { namespace Graphics { namespace MaterialProperty { 
struct TextureUnitMetaData {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8; uint32_t fc;
};
void TextureUnitMetaData::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
    Transfer(archive, fc);
}
}}}
namespace Onyx { namespace Graphics { namespace EvolutionDevelopment { 
struct GenericRenderingFlow {
    void Slot4(Archive& archive, Source* source);
    char padding_0[1152]; uint8_t f480;
};
void GenericRenderingFlow::Slot4(Archive& archive, Source* source) {
    Transfer(archive, f480);
}
}}}
namespace Onyx { namespace Behavior { 
struct Node {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8;
};
void Node::Slot4(Archive& archive, Source* source) {
    Transfer(archive, f8);
}
}}
namespace Onyx { 
struct f32ConstantCurve {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8;
};
void f32ConstantCurve::Slot4(Archive& archive, Source* source) {
    Transfer(archive, f8);
}
}
namespace Onyx { 
struct SpeedWaypointData {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8;
};
void SpeedWaypointData::Slot4(Archive& archive, Source* source) {
    Transfer(archive, f8);
}
}
namespace Onyx { 
struct AxisAngleWithinEpsilonStateDescriptor {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8; uint32_t fc; uint32_t f10;
};
void AxisAngleWithinEpsilonStateDescriptor::Slot4(Archive& archive, Source* source) {
    Transfer(archive, f8);
    Transfer(archive, fc);
    Transfer(archive, f10);
}
}
namespace Onyx { 
struct AxisPairWithinEpsilon2DStateDescriptor {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8; uint32_t fc; uint32_t f10; uint32_t f14;
};
void AxisPairWithinEpsilon2DStateDescriptor::Slot4(Archive& archive, Source* source) {
    Transfer(archive, f8);
    Transfer(archive, fc);
    Transfer(archive, f10);
    Transfer(archive, f14);
}
}
namespace Onyx { 
struct AxisPairWithinEpsilon1DStateDescriptor {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8; uint32_t fc; uint32_t f10;
};
void AxisPairWithinEpsilon1DStateDescriptor::Slot4(Archive& archive, Source* source) {
    Transfer(archive, f8);
    Transfer(archive, fc);
    Transfer(archive, f10);
}
}
namespace Onyx { 
struct AxisPairLessThanStateDescriptor {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8; uint32_t fc;
};
void AxisPairLessThanStateDescriptor::Slot4(Archive& archive, Source* source) {
    Transfer(archive, f8);
    Transfer(archive, fc);
}
}
namespace Onyx { 
struct SingleAxisWithinEpsilonStateDescriptor {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8; uint32_t fc; uint32_t f10;
};
void SingleAxisWithinEpsilonStateDescriptor::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
    Transfer(archive, fc);
    Transfer(archive, f10);
}
}
namespace Onyx { 
struct SingleAxisLessThanStateDescriptor {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8; uint32_t fc;
};
void SingleAxisLessThanStateDescriptor::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
    Transfer(archive, fc);
}
}
namespace Onyx { 
struct MouseInputAxisDescriptor {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8;
};
void MouseInputAxisDescriptor::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
}
}
namespace Onyx { 
struct GamepadInputAxisDescriptor {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8; uint32_t fc;
};
void GamepadInputAxisDescriptor::Slot4(Archive& archive, Source* source) {
    TransferAs<uint32_t>(archive, f8);
    Transfer(archive, fc);
}
}
namespace Onyx { 
struct GenericGameplayMaterial {
    void Slot4(Archive& archive, Source* source);
    char padding_0[8]; uint32_t f8;
};
void GenericGameplayMaterial::Slot4(Archive& archive, Source* source) {
    Transfer(archive, f8);
}
}
