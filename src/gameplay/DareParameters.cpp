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

}  // namespace Private
}  // namespace Dare
