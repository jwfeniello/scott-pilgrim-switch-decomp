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
    char padding_8[0x4];
    int32_t value;   // +0xc
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
// Reports a user-side parameter: its kind (1, or 2 for the occlusion effect's parameter 4) and value.
static inline int32_t ReportParameter(const int32_t* parameter, uint8_t kind, uint8_t* found, int32_t* value) {
    int32_t result = *parameter;
    *found = kind;
    *value = result;
    return 0;
}
// Not credited: the original sets the kind 1 once, in a block cases 0-3 share; here each case sets it.
int32_t UserEffect<OcclusionEffect>::GetParameter(uint8_t index, uint8_t* found, int32_t* value) {   // 0xd0e7c0
    int32_t* parameter;
    switch (index) {
    case 0: parameter = &parameter0; break;
    case 1: parameter = &parameter1; break;
    case 2: parameter = &parameter2; break;
    case 3: parameter = &parameter3; break;
    case 4: return ReportParameter(&parameter4, 2, found, value);
    default: return kEffectBadParameter;
    }
    return ReportParameter(parameter, 1, found, value);
}

}  // namespace Private
}  // namespace Dare
