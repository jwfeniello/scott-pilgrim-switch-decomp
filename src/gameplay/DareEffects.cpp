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

// What an effect's slot 5 reports a parameter through (the platform side).
struct EffectParameterReport {
    int32_t type;    // +0x0: 2
    int32_t index;   // +0x4
    int32_t value8;  // +0x8: where a kind-1 parameter's value goes
    union {
        int32_t value;       // +0xc
        float floatValue;
    };
};
const int32_t kEffectBadParameter = static_cast<int32_t>(0x8000e009u);

struct HighPassEffect;
template<class Effect> struct PlatformSpecificEffect;
template<class Effect> struct UserEffect;

// Slot 5 of the high-pass effect's platform wrapper: parameter 0 (+0x24), 1 (+0x94) or 2 (+0x90).
template<> struct PlatformSpecificEffect<HighPassEffect> {
    char padding_0[0x24];
    int32_t parameter0;   // +0x24
    char padding_28[0x68];
    int32_t parameter2;   // +0x90
    int32_t parameter1;   // +0x94
    int32_t GetParameter(int32_t index, EffectParameterReport* report);
};
int32_t PlatformSpecificEffect<HighPassEffect>::GetParameter(int32_t index, EffectParameterReport* report) {   // 0xd0f480
    report->index = index;
    int32_t* parameter;
    switch (index) {
    case 0: parameter = &parameter0; break;
    case 1: parameter = &parameter1; break;
    case 2: parameter = &parameter2; break;
    default: return kEffectBadParameter;
    }
    report->value = *parameter;
    report->type = 2;
    return 0;
}

// Slot 5 of the user-side wrapper: the same three parameters 8 bytes on, read with a byte index.
template<> struct UserEffect<HighPassEffect> {
    char padding_0[0x2c];
    int32_t parameter0;   // +0x2c
    char padding_30[0x68];
    int32_t parameter2;   // +0x98
    int32_t parameter1;   // +0x9c
    int32_t GetParameter(uint8_t index, uint8_t* found, int32_t* value);
};
int32_t UserEffect<HighPassEffect>::GetParameter(uint8_t index, uint8_t* found, int32_t* value) {   // 0xd0fde0
    int32_t* parameter;
    switch (index) {
    case 0: parameter = &parameter0; break;
    case 1: parameter = &parameter1; break;
    case 2: parameter = &parameter2; break;
    default: return kEffectBadParameter;
    }
    int32_t result = *parameter;
    *found = 1;
    *value = result;
    return 0;
}

// The other effects' slot 5 getters, in the same two forms (written from one pattern).
struct LowPassEffect;

struct LowPassEffect;

struct BandPassEffect;

struct BandPassEffect;

struct EQEffect;

struct EQEffect;

struct OcclusionEffect;

template<> struct UserEffect<LowPassEffect> {
    char padding_0[0x2c];
    int32_t parameter0;   // +0x2c
    char padding_30[0x68];
    int32_t parameter2;   // +0x98
    int32_t parameter1;   // +0x9c
    int32_t GetParameter(uint8_t index, uint8_t* found, int32_t* value);
};
int32_t UserEffect<LowPassEffect>::GetParameter(uint8_t index, uint8_t* found, int32_t* value) {   // 0xd11a70
    int32_t* parameter;
    switch (index) {
    case 0: parameter = &parameter0; break;
    case 1: parameter = &parameter1; break;
    case 2: parameter = &parameter2; break;
    default: return kEffectBadParameter;
    }
    int32_t result = *parameter;
    *found = 1;
    *value = result;
    return 0;
}

template<> struct PlatformSpecificEffect<LowPassEffect> {
    char padding_0[0x24];
    int32_t parameter0;   // +0x24
    char padding_28[0x68];
    int32_t parameter2;   // +0x90
    int32_t parameter1;   // +0x94
    int32_t GetParameter(int32_t index, EffectParameterReport* report);
};
int32_t PlatformSpecificEffect<LowPassEffect>::GetParameter(int32_t index, EffectParameterReport* report) {   // 0xd11110
    report->index = index;
    int32_t* parameter;
    switch (index) {
    case 0: report->type = 2; parameter = &parameter0; break;
    case 1: report->type = 2; parameter = &parameter1; break;
    case 2: report->type = 2; parameter = &parameter2; break;
    default: return kEffectBadParameter;
    }
    report->value = *parameter;
    return 0;
}

template<> struct UserEffect<BandPassEffect> {
    char padding_0[0x2c];
    int32_t parameter0;   // +0x2c
    char padding_30[0x68];
    int32_t parameter3;   // +0x98
    int32_t parameter1;   // +0x9c
    int32_t parameter2;   // +0xa0
    int32_t GetParameter(uint8_t index, uint8_t* found, int32_t* value);
};
int32_t UserEffect<BandPassEffect>::GetParameter(uint8_t index, uint8_t* found, int32_t* value) {   // 0xd10470
    int32_t* parameter;
    switch (index) {
    case 0: parameter = &parameter0; break;
    case 1: parameter = &parameter1; break;
    case 2: parameter = &parameter2; break;
    case 3: parameter = &parameter3; break;
    default: return kEffectBadParameter;
    }
    int32_t result = *parameter;
    *found = 1;
    *value = result;
    return 0;
}

template<> struct PlatformSpecificEffect<BandPassEffect> {
    char padding_0[0x24];
    int32_t parameter0;   // +0x24
    char padding_28[0x68];
    int32_t parameter3;   // +0x90
    int32_t parameter1;   // +0x94
    int32_t parameter2;   // +0x98
    int32_t GetParameter(int32_t index, EffectParameterReport* report);
};
int32_t PlatformSpecificEffect<BandPassEffect>::GetParameter(int32_t index, EffectParameterReport* report) {   // 0xd0e100
    report->index = index;
    int32_t* parameter;
    switch (index) {
    case 0: report->type = 2; parameter = &parameter0; break;
    case 1: report->type = 2; parameter = &parameter1; break;
    case 2: report->type = 2; parameter = &parameter2; break;
    case 3: report->type = 2; parameter = &parameter3; break;
    default: return kEffectBadParameter;
    }
    report->value = *parameter;
    return 0;
}

template<> struct UserEffect<EQEffect> {
    char padding_0[0x2c];
    int32_t parameter0;   // +0x2c
    char padding_30[0x68];
    int32_t parameter1;   // +0x98
    int32_t parameter2;   // +0x9c
    int32_t parameter3;   // +0xa0
    char padding_a4[0x8];
    int32_t parameter4;   // +0xac
    int32_t GetParameter(uint8_t index, uint8_t* found, int32_t* value);
};
int32_t UserEffect<EQEffect>::GetParameter(uint8_t index, uint8_t* found, int32_t* value) {   // 0xd0ca20
    int32_t* parameter;
    switch (index) {
    case 0: parameter = &parameter0; break;
    case 1: parameter = &parameter1; break;
    case 2: parameter = &parameter2; break;
    case 3: parameter = &parameter3; break;
    case 4: parameter = &parameter4; break;
    default: return kEffectBadParameter;
    }
    int32_t result = *parameter;
    *found = 1;
    *value = result;
    return 0;
}

template<> struct PlatformSpecificEffect<EQEffect> {
    char padding_0[0x24];
    int32_t parameter0;   // +0x24
    char padding_28[0x68];
    int32_t parameter1;   // +0x90
    int32_t parameter2;   // +0x94
    int32_t parameter3;   // +0x98
    char padding_9c[0x8];
    int32_t parameter4;   // +0xa4
    int32_t GetParameter(int32_t index, EffectParameterReport* report);
};
int32_t PlatformSpecificEffect<EQEffect>::GetParameter(int32_t index, EffectParameterReport* report) {   // 0xd0c070
    report->index = index;
    int32_t* parameter;
    switch (index) {
    case 0: report->type = 2; parameter = &parameter0; break;
    case 1: report->type = 2; parameter = &parameter1; break;
    case 2: report->type = 2; parameter = &parameter2; break;
    case 3: report->type = 2; parameter = &parameter3; break;
    case 4: report->type = 2; parameter = &parameter4; break;
    default: return kEffectBadParameter;
    }
    report->value = *parameter;
    return 0;
}

template<> struct UserEffect<OcclusionEffect> {
    char padding_0[0x2c];
    int32_t parameter0;   // +0x2c
    char padding_30[0x68];
    int32_t parameter3;   // +0x98
    int32_t parameter1;   // +0x9c
    int32_t parameter2;   // +0xa0
    char padding_a4[0x244];
    int32_t parameter4;   // +0x2e8
    int32_t GetParameter(uint8_t index, uint8_t* found, int32_t* value);
};
// Parameters 0 to 3 are of kind 1, parameter 4 of kind 2.
int32_t UserEffect<OcclusionEffect>::GetParameter(uint8_t index, uint8_t* found, int32_t* value) {   // 0xd0e7c0
    int32_t* parameter;
    uint8_t kind = 1;
    switch (index) {
    case 0: parameter = &parameter0; break;
    case 1: parameter = &parameter1; break;
    case 2: parameter = &parameter2; break;
    case 4:
        parameter = &parameter4;
        kind = 2;
        break;
    case 3: parameter = &parameter3; break;
    default: return kEffectBadParameter;
    }
    int32_t result = *parameter;
    *found = kind;
    *value = result;
    return 0;
}

struct AmpModEffect;
template<> struct UserEffect<AmpModEffect> {
    char padding_0[0x98];
    int32_t parameter0;   // +0x98 (parameters 0 and 1)
    int32_t parameter2;   // +0x9c
    int32_t parameter3;   // +0xa0
    int32_t parameter4;   // +0xa4
    float depth;          // +0xa8: parameter 5 is 1 minus it
    int32_t GetParameter(uint8_t index, uint8_t* found, int32_t* value);
};
// Slot 5 (0xd03930): parameters 0 and 1 (the same value, of kind 2), 2 to 4, and 5 (1 minus +0xa8, as its bits).
int32_t UserEffect<AmpModEffect>::GetParameter(uint8_t index, uint8_t* found, int32_t* value) {
    int32_t result;
    uint8_t kind = 1;
    switch (index) {
    case 0:
    case 1:
        result = parameter0;
        kind = 2;
        break;
    case 2: result = parameter2; break;
    case 3: result = parameter3; break;
    case 4: result = parameter4; break;
    case 5: {
        float inverse = 1.0f - depth;
        __builtin_memcpy(&result, &inverse, sizeof(result));
        break;
    }
    default: return kEffectBadParameter;
    }
    *found = kind;
    *value = result;
    return 0;
}

// Dare's fast logarithm and power of two (provisional names): the float's bits read as an integer give log2 up to a
// correction on the fractional part; the power reverses it. Floor here is the integer part, one less at or below 0.
inline float FastFraction(float y) { return y - static_cast<float>(y > 0.0f ? static_cast<int32_t>(y) : static_cast<int32_t>(y) - 1); }
inline float FastLog2(float x) {
    int32_t bits;
    __builtin_memcpy(&bits, &x, sizeof(bits));
    float y = static_cast<float>(bits) * 0x1p-23f + -127.0f;
    float f = FastFraction(y);
    return y + (f - f * f) * 0x1.62ecf2p-2f;
}
inline float FastLog10(float x) { return FastLog2(x) / 0x1.a934f0p+1f; }
inline float FastPow2(float y) {
    float f = FastFraction(y);
    float correction = (f - f * f) * 0x1.5bdcf0p-2f;
    int32_t bits = static_cast<int32_t>((y + 127.0f - correction) * 0x1p23f);
    float result;
    __builtin_memcpy(&result, &bits, sizeof(result));
    return result;
}

struct OcclusionEffect;
template<> struct PlatformSpecificEffect<OcclusionEffect> {
    char padding_0[0x24];
    int32_t parameter0;   // +0x24
    char padding_28[0x68];
    int32_t parameter3;   // +0x90
    int32_t parameter1;   // +0x94
    int32_t parameter2;   // +0x98
    char padding_9c[0x244];
    int32_t parameter4;   // +0x2e0
    int32_t GetParameter(int32_t index, EffectParameterReport* report);
};
// Slot 5 (0xd0d920): the band-pass parameters 0 to 3 (kind 2), and the occlusion's own parameter 4 (kind 1).
int32_t PlatformSpecificEffect<OcclusionEffect>::GetParameter(int32_t index, EffectParameterReport* report) {
    if (index == 4) {
        report->type = 1;
        report->index = 4;
        report->value8 = parameter4;
        return 0;
    }
    report->index = index;
    switch (index) {
    case 0:
        report->type = 2;
        report->value = parameter0;
        return 0;
    case 1:
        report->type = 2;
        report->value = parameter1;
        return 0;
    case 2:
        report->type = 2;
        report->value = parameter2;
        return 0;
    case 3:
        report->type = 2;
        report->value = parameter3;
        return 0;
    }
    return kEffectBadParameter;
}

struct DistortionEffect;
template<> struct PlatformSpecificEffect<DistortionEffect> {
    char padding_0[0x24];
    int32_t parameter0;   // +0x24
    char padding_28[0x68];
    float gain;           // +0x90: parameter 1 is it in dB
    char padding_94[0x18];
    int32_t parameter2;   // +0xac
    int32_t GetParameter(int32_t index, EffectParameterReport* report);
};
// Slot 5 (0xd04340): parameters 0 and 2, and 1 (the gain in dB), all of kind 2.
int32_t PlatformSpecificEffect<DistortionEffect>::GetParameter(int32_t index, EffectParameterReport* report) {
    switch (index) {
    case 0:
        report->type = 2;
        report->value = parameter0;
        return 0;
    case 1:
        report->type = 2;
        report->floatValue = FastLog10(gain) * 20.0f;
        return 0;
    case 2:
        report->type = 2;
        report->value = parameter2;
        return 0;
    }
    return kEffectBadParameter;
}

// The parameter curves (RTTI names): slot 0 maps a value.
struct PowerCurveStrategy {
    virtual float Apply(float value);
    float exponent;   // +0x8
};
// Slot 0 (0xcf3d00): value to the power of the exponent.
float PowerCurveStrategy::Apply(float value) {
    float power = exponent;
    return FastPow2(FastLog2(value) * power);
}
struct SCurveStrategy {
    virtual float Apply(float value);
    float width;   // +0x8
};
// Slot 0 (0xcf3bc0): an error-function S curve around 0.5, (1 + erf((value - 0.5) / width)) / 2, erf from its usual
// approximation sign(x) sqrt(1 - exp(-x^2 (4/pi + a x^2) / (1 + a x^2))).
float SCurveStrategy::Apply(float value) {
    float x = (value + -0.5f) / width;
    float sign = x > 0.0f ? 1.0f : -1.0f;
    float square = x * x;
    float scaled = square * 0x1.1ebec4p-3f;
    float exponent = square * ((scaled + 0x1.45f306p+0f) / (scaled + 1.0f)) * -0x1.705d24p+0f;
    float root = FastPow2(FastLog2(1.0f - FastPow2(exponent)) * 0.5f);
    return (sign * root + 1.0f) * 0.5f;
}
struct Log10CurveStrategy {
    virtual float Apply(float value);
};
// Slot 0 (0xcfd820): log10 of (value + 1/9) * 9, which maps 0 to 1 to 0 to 1. Not yet matched: the same instructions,
// but the original multiplies by 2^-23 in place and loads the correction constant earlier.
float Log10CurveStrategy::Apply(float value) { return FastLog10((value + 0x1.c71c72p-4f) * 9.0f); }

struct DistortionEffect;
template<> struct UserEffect<DistortionEffect> {
    char padding_0[0x2c];
    int32_t parameter0;   // +0x2c
    char padding_30[0x68];
    float gain;           // +0x98: parameter 1 is it in dB
    char padding_9c[0x18];
    int32_t parameter2;   // +0xb4
    int32_t GetParameter(uint8_t index, uint8_t* found, int32_t* value);
};
// Slot 5 (0xd04ce0): parameters 0 and 2, and 1 (the gain in dB, as its bits).
int32_t UserEffect<DistortionEffect>::GetParameter(uint8_t index, uint8_t* found, int32_t* value) {
    int32_t result;
    switch (index) {
    case 0: result = parameter0; break;
    case 1: {
        float decibels = FastLog10(gain) * 20.0f;
        __builtin_memcpy(&result, &decibels, sizeof(result));
        break;
    }
    case 2: result = parameter2; break;
    default: return kEffectBadParameter;
    }
    *found = 1;
    *value = result;
    return 0;
}

struct CrossComEffect;
template<> struct UserEffect<CrossComEffect> {
    char padding_0[0x2c];
    int32_t parameter0;    // +0x2c
    char padding_30[0x68];
    int32_t parameter1;    // +0x98 (kind 2)
    int32_t parameter4;    // +0x9c
    int32_t parameter3;    // +0xa0
    int32_t parameter2;    // +0xa4
    int32_t parameter5;    // +0xa8 (kind 2)
    float gain;            // +0xac: parameter 6 is it in dB
    char padding_b0[0x18];
    int32_t parameter7;    // +0xc8
    char padding_cc[0x4];
    int32_t parameter8;    // +0xd0 (kind 2)
    int32_t parameter9;    // +0xd4 (kind 2)
    int32_t parameter10;   // +0xd8
    int32_t parameter11;   // +0xdc
    int32_t parameter12;   // +0xe0
    int32_t parameter13;   // +0xe4
    int32_t GetParameter(uint8_t index, uint8_t* found, int32_t* value);
};
// Slot 5 (0xd09340): its fourteen parameters, four of them of kind 2 and parameter 6 the gain in dB (as its bits).
int32_t UserEffect<CrossComEffect>::GetParameter(uint8_t index, uint8_t* found, int32_t* value) {
    int32_t result;
    int32_t* parameter;
    switch (index) {
    case 0: result = parameter0; break;
    case 1: parameter = &parameter1; goto kind2;
    case 2: result = parameter2; break;
    case 3: result = parameter3; break;
    case 4: result = parameter4; break;
    case 5: parameter = &parameter5; goto kind2;
    case 6: {
        float decibels = FastLog10(gain) * 20.0f;
        __builtin_memcpy(&result, &decibels, sizeof(result));
        break;
    }
    case 7: result = parameter7; break;
    case 8: parameter = &parameter8; goto kind2;
    case 9: parameter = &parameter9; goto kind2;
    case 10: result = parameter10; break;
    case 11: result = parameter11; break;
    case 12: result = parameter12; break;
    case 13: result = parameter13; break;
    default: return kEffectBadParameter;
    }
    *found = 1;
    *value = result;
    return 0;
kind2:
    result = *parameter;
    *found = 2;
    *value = result;
    return 0;
}

}  // namespace Private
}  // namespace Dare
