// Dare::Private's sound effects (RTTI names): the parameter list every effect class shares at slot 2.
#include <stdint.h>

namespace Dare {
namespace Private {

// One parameter value an effect is given (0x6c bytes).
struct EffectParameterValue { char data[0x6c]; };
struct EffectParameterList {
    void* reserved;                 // +0x0
    uint64_t count;                 // +0x8
    EffectParameterValue* values;   // +0x10
};

// Slot 2 (0xcfb440) is the same code in the vtables of all 21 effect classes (CompressorEffect, EQEffect and the rest,
// and their PlatformSpecificEffect/UserEffect wrappers). DareEffectBase's own vtable lists only its destructors, so
// which class between it and the effects defines it is unknown; it is put on DareEffectBase here.
struct DareEffectBase {
    virtual ~DareEffectBase();
    virtual int SetParameters(const EffectParameterList* list);   // slot 2
    virtual void Slot3();
    virtual int SetParameter(const EffectParameterValue* value);  // slot 4
};

// Each value in turn, stopping at the first that fails (negative); the last result, or 0 for none.
int DareEffectBase::SetParameters(const EffectParameterList* list) {
    int result = 0;
    uint64_t count = list->count;
    const EffectParameterValue* value = list->values;
    for (const EffectParameterValue* end = value + count; value != end && result >= 0; ++value) result = SetParameter(value);
    return result;
}

}  // namespace Private
}  // namespace Dare
