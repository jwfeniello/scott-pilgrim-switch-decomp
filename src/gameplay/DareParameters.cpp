// Dare::Private's cached sound parameters and effect chain: the destructors.
#include "DareCore.h"

namespace Dare {
namespace Private {

struct RolloffVolumeParameter {};
struct OcclusionParameter {};
struct ObstructionParameter {};
struct PitchParameter {};
// Destroyed out of line (0xcf8f70).
struct EffectChainParameter {
    ~EffectChainParameter();
    char data[0x20];
};

// Dare::Private::CachedSoundParameter<T>: the parameter with its cached values.
template<class T> struct CachedSoundParameter {
    virtual ~CachedSoundParameter() {}
    uint64_t value8;               // +0x8
    DareArray<char> values;        // +0x10
    char padding_30[0x10];
    T parameter;                   // +0x40
};

template struct CachedSoundParameter<RolloffVolumeParameter>;
template struct CachedSoundParameter<OcclusionParameter>;
template struct CachedSoundParameter<ObstructionParameter>;
template struct CachedSoundParameter<PitchParameter>;
template struct CachedSoundParameter<EffectChainParameter>;

// Dare::Private::EffectChain: slots 0 and 1 are its destructors.
struct EffectChain {
    virtual ~EffectChain();
    virtual void Slot2();
    virtual void Slot3();
    DareArray<char> effects;       // +0x8
};
EffectChain::~EffectChain() {}

// The bus parameters keep their value in range (slot 7): a pre-effect volume between -96 dB and 0, a pitch between
// 0.008 and 128.
struct BusPreEffectVolumeParameter {
    void* vtable;
    float value;   // +0x8
    void Clamp();
};
struct BusPitchParameter {
    void* vtable;
    float value;   // +0x8
    void Clamp();
};
void BusPreEffectVolumeParameter::Clamp() {   // 0xd1b490
    if (value < -96.0f) value = -96.0f;
    else if (value > 0.0f) value = 0.0f;
}
void BusPitchParameter::Clamp() {   // 0xd1b550
    if (value < 0.008f) value = 0.008f;
    else if (value > 128.0f) value = 128.0f;
}

// Dare::Private::EffectParameterSndFloat, slot 8: applies `amount` to the value, added in mode 0 and multiplied in mode
// 1 (+0x30).
struct EffectParameterSndFloat {
    void* vtable;
    float value;   // +0x8
    char padding_c[0x24];
    int32_t mode;  // +0x30
    void Apply(const float* amount);
};
void EffectParameterSndFloat::Apply(const float* amount) {   // 0xcfda00
    switch (mode) {
    case 0:
        value = *amount + value;
        break;
    case 1:
        value = *amount * value;
        break;
    }
}

}  // namespace Private
}  // namespace Dare
