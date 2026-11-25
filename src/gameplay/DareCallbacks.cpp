// Dare's callback objects (RTTI names): the vectors they keep checked. Member names are provisional.
#include "DareCore.h"
#include <stdint.h>

namespace Dare {

// Whether a float is a number and not infinite, read from its bits; the original tests the two apart.
inline bool IsFiniteBits(const float& value) {
    uint32_t bits;
    __builtin_memcpy(&bits, &value, sizeof(bits));
    return (bits & 0x7fffffffu) <= 0x7f800000u && (bits & 0x7f800000u) != 0x7f800000u;
}

struct CallbackVector {
    float x, y, z;
    // Back to zero unless all three are finite.
    void Sanitize() {
        if (!IsFiniteBits(x) || !IsFiniteBits(y) || !IsFiniteBits(z)) {
            x = 0.0f;
            y = 0.0f;
            z = 0.0f;
        }
    }
};

// The functions a CPosSpeedCallbackObject's callback table (+0x80) gives: each fills in one vector.
struct CPosSpeedCallbacks {
    void (*position)(void* first, void* second, CallbackVector* out);
    void (*speed)(void* first, void* second, CallbackVector* out);       // +0x8
    void (*vector3)(void* first, void* second, CallbackVector* out);     // +0x10
};
struct CPosSpeedCallbackObject {
    virtual ~CPosSpeedCallbackObject();   // slots 0 and 1
    virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual void Refresh();               // slot 6
    virtual void Slot7();
    virtual void SanitizePosition();      // slot 8
    virtual void SanitizeSpeed();         // slot 9
    virtual void SanitizeVector3();       // slot 10
    char padding_8[0x30];
    void* first;                // +0x38
    void* second;               // +0x40
    char padding_48[0x38];
    CPosSpeedCallbacks* callbacks;   // +0x80
    char padding_88[0x4];
    CallbackVector vector3;     // +0x8c
    int32_t vector3Updated;     // +0x98
    CallbackVector position;    // +0x9c
    int32_t positionUpdated;    // +0xa8
    CallbackVector speed;       // +0xac
    int32_t speedUpdated;       // +0xb8
    char padding_bc[0x8];
    int32_t positionOverridden;   // +0xc4
    CallbackVector positionOverride;   // +0xc8
    char padding_d4[0x8];
    int32_t speedOverridden;      // +0xdc
    CallbackVector speedOverride;      // +0xe0
    char padding_ec[0x8];
    int32_t vector3Overridden;    // +0xf4
    CallbackVector vector3Override;    // +0xf8
    char padding_104[0x4];
};
// Slot 6 (0xd30120): each vector the table has a function for, from it (or its override), marked updated and
// sanitized.
void CPosSpeedCallbackObject::Refresh() {
    if (!callbacks) return;
    if (callbacks->position) {
        CallbackVector* out = &position;
        if (positionOverridden) *out = positionOverride;
        else callbacks->position(first, second, out);
        positionUpdated = 1;
        SanitizePosition();
    }
    if (callbacks->speed) {
        CallbackVector* out = &speed;
        if (speedOverridden) *out = speedOverride;
        else callbacks->speed(first, second, out);
        speedUpdated = 1;
        SanitizeSpeed();
    }
    if (callbacks->vector3) {
        CallbackVector* out = &vector3;
        if (vector3Overridden) *out = vector3Override;
        else callbacks->vector3(first, second, out);
        vector3Updated = 1;
        SanitizeVector3();
    }
}
struct MicroCallbackObject {
    virtual ~MicroCallbackObject();       // slots 0 and 1
    virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6();
    virtual void Slot7();
    virtual void SanitizePosition();      // slot 8
    virtual void SanitizeSpeed();         // slot 9
    virtual void NormalizeFront();        // slot 10
    virtual void NormalizeTop();          // slot 11
    char padding_8[0x84];
    CallbackVector position;   // +0x8c
    int32_t positionUpdated;   // +0x98
    CallbackVector speed;      // +0x9c
    int32_t speedUpdated;      // +0xa8
    CallbackVector front;      // +0xac
    int32_t frontUpdated;      // +0xb8
    CallbackVector top;        // +0xbc
    int32_t topUpdated;        // +0xc8
    char padding_cc[0x4];
    void NormalizeAxis(CallbackVector& axis);
};

void CPosSpeedCallbackObject::SanitizePosition() { position.Sanitize(); }   // 0xd30310
void CPosSpeedCallbackObject::SanitizeSpeed() { speed.Sanitize(); }         // 0xd30380
void MicroCallbackObject::SanitizePosition() { position.Sanitize(); }       // 0xd3ec30
void MicroCallbackObject::SanitizeSpeed() { speed.Sanitize(); }             // 0xd3eca0

// Brings one of the listener's axes back to about unit length: a non-finite axis resets both (front along x, top along
// y), a zero one points along x, and a length found roughly (the larger plus half the smaller, twice) outside
// 0.55 to 1.45 is divided out. Not yet matched: the original keeps y in s0 and z in s1, the other way round from here.
inline void MicroCallbackObject::NormalizeAxis(CallbackVector& axis) {
    if (!IsFiniteBits(axis.x) || !IsFiniteBits(axis.y) || !IsFiniteBits(axis.z)) {
        front.x = 1.0f;
        front.y = 0.0f;
        front.z = 0.0f;
        top.x = 0.0f;
        top.y = 1.0f;
        top.z = 0.0f;
    } else if (axis.x == 0.0f && axis.y == 0.0f && axis.z == 0.0f) {
        axis.x = 1.0f;
    }
    float x = __builtin_fabsf(axis.x);
    float y = __builtin_fabsf(axis.y);
    float z = __builtin_fabsf(axis.z);
    float xy = x < y ? y + x * 0.5f : y * 0.5f + x;
    float length = xy < z ? z + xy * 0.5f : z * 0.5f + xy;
    if (length < 0.55f || length > 1.45f) {
        axis.x /= length;
        axis.y /= length;
        axis.z /= length;
    }
}
void MicroCallbackObject::NormalizeFront() { NormalizeAxis(front); }   // 0xd3ed10
void MicroCallbackObject::NormalizeTop() { NormalizeAxis(top); }       // 0xd3ee50

// PPVCallbackObjectBase (RTTI name): the pitch, pan and volume values it keeps checked.
struct PPVCallbackObjectBase {
    char padding_0[0x90];
    float pitch;    // +0x90: 1 unless finite
    char padding_94[0x4];
    float pan;      // +0x98: 64 unless finite
    char padding_9c[0x4];
    float volume;   // +0xa0: 0 unless finite
    void Sanitize();   // slot 8
};
void PPVCallbackObjectBase::Sanitize() {   // 0xd4ff40
    if (!IsFiniteBits(pitch)) pitch = 1.0f;
    if (!IsFiniteBits(pan)) pan = 64.0f;
    if (!IsFiniteBits(volume)) volume = 0.0f;
}

// What +0x80 of a callback object points to: the function that gives its value.
struct CallbackFunction {
    int32_t (*function)(void* first, void* second, int32_t extra);
};
// The part MultiLayerActivationFlagCallbackObject and SwitchCallbackObject share (each has its own copy of the code).
// Refresh is not credited: here the two stores of the value merge into one after the branch, where the original
// keeps one in each arm.
#define DARE_VALUE_CALLBACK_OBJECT(Class) \
    struct Class { \
        virtual ~Class();                   /* slots 0 and 1 */ \
        virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); \
        virtual void Slot5(); \
        virtual void Refresh();             /* slot 6 */ \
        virtual void Slot7(); \
        virtual void Slot8(); \
        char padding_8[0x30]; \
        void* first;                        /* +0x38: the flyweight id */ \
        void* second;                       /* +0x40 */ \
        char padding_48[0x38]; \
        CallbackFunction* callback;         /* +0x80 */ \
        char padding_88[0x4]; \
        int32_t extra;                      /* +0x8c */ \
        int32_t value;                      /* +0x90 */ \
        int32_t updated;                    /* +0x94 */ \
        char padding_98[0x8]; \
        int32_t overridden;                 /* +0xa0 */ \
        int32_t overrideValue;              /* +0xa4 */ \
        char padding_a8[0x8]; \
    }; \
    /* Slot 6: the value from the callback (or the override while +0xa0 is set), marked updated, then slot 8. */ \
    void Class::Refresh() { \
        if (!callback || !callback->function) return; \
        if (overridden) value = overrideValue; \
        else value = callback->function(first, second, extra); \
        updated = 1; \
        Slot8(); \
    }
DARE_VALUE_CALLBACK_OBJECT(MultiLayerActivationFlagCallbackObject)   // slot 6 at 0xd41ae0
DARE_VALUE_CALLBACK_OBJECT(SwitchCallbackObject)                     // slot 6 at 0xd5ca40

// The other callback objects, by the size their pool gives them (their members are not needed here).
#define DARE_POOLED_CALLBACK_OBJECT(Class, Size) \
    struct Class { \
        virtual ~Class();                   /* slots 0 and 1 */ \
        virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6(); \
        virtual void Slot7(); \
        char storage[Size - 8]; \
    };
// C3DAlgoCallbackObject: its callback fills in a block of 3D values (+0x8c, opaque bytes here) and gives a result (+0x4d8).
typedef int32_t (*C3DAlgoCallbackFunction)(void* first, void* second, void* values);
struct C3DAlgoCallbackObject {
    virtual ~C3DAlgoCallbackObject();   // slots 0 and 1
    virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual void Refresh();             // slot 6
    virtual void Slot7();
    virtual void Slot8();
    char padding_8[0x30];
    void* first;                        // +0x38
    void* second;                       // +0x40
    char padding_48[0x38];
    C3DAlgoCallbackFunction* callback;  // +0x80
    char padding_88[0x4];
    char values[0x448];                 // +0x8c: what the callback fills in (its byte at +0x444 is cleared first)
    char padding_4d4[0x4];
    int32_t result;                     // +0x4d8
    int32_t updated;                    // +0x4dc
};
// Slot 6 (0xd14590): the values and result from the callback, marked updated, then slot 8.
void C3DAlgoCallbackObject::Refresh() {
    if (!callback || !*callback) return;
    values[0x444] = 0;
    result = (*callback)(first, second, values);
    updated = 1;
    Slot8();
}
// OccObstCallbackObject: its callback fills in a block of occlusion and obstruction values (0x68 bytes, +0x94), or the
// override block (+0x10c) is taken while +0x108 is set.
struct OcclusionValues { char data[0x68]; };
struct OcclusionCallbackFunction {
    int32_t (*function)(void* first, void* second, void* extra, OcclusionValues* values);
};
struct OccObstCallbackObject {
    virtual ~OccObstCallbackObject();   // slots 0 and 1
    virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual void Refresh();             // slot 6
    virtual void Slot7();
    virtual void Slot8();
    char padding_8[0x30];
    void* first;                        // +0x38
    void* second;                       // +0x40
    void* extra;                        // +0x48
    char padding_50[0x30];
    OcclusionCallbackFunction* callback;   // +0x80
    char padding_88[0x4];
    int32_t result;                     // +0x8c
    int32_t updated;                    // +0x90
    OcclusionValues values;             // +0x94
    int32_t changed;                    // +0xfc
    char padding_100[0x8];
    int32_t overridden;                 // +0x108
    OcclusionValues overrideValues;     // +0x10c
    int32_t overrideResult;             // +0x174
};
// Slot 6 (0xd4f7c0): the values and result from the callback (or the override), marked changed and updated, then slot 8.
void OccObstCallbackObject::Refresh() {
    if (!callback || !callback->function) return;
    int32_t result;
    OcclusionValues* out = &values;
    if (overridden) {
        *out = overrideValues;
        result = overrideResult;
    } else {
        result = callback->function(first, second, extra, out);
    }
    changed = 1;
    this->result = result;
    updated = 1;
    Slot8();
}
DARE_POOLED_CALLBACK_OBJECT(RolloffCallbackObject, 0xb0)
// MTT3DCallbackObject: three blocks its callback table (+0x80) fills in, each with an override (opaque here).
// Block 0: up to sixteen positions, each with a track index.
struct MTT3DPosition {
    CallbackVector position;
    uint32_t index;   // +0xc
};
struct MTT3DBlock0 {
    uint32_t count;
    MTT3DPosition positions[16];   // +0x4
};
struct MTT3DBlock1 { char data[0x6c4]; };
// Block 2: up to sixteen (value, track index) pairs.
struct MTT3DTrack {
    uint32_t value;
    uint32_t index;   // +0x4
};
struct MTT3DBlock2 {
    uint32_t count;
    MTT3DTrack tracks[16];   // +0x4
};
struct MTT3DCallbacks {
    void (*block0)(void* first, void* second, MTT3DBlock0* out);
    int32_t (*block1)(void* first, void* second, void* extra, MTT3DBlock1* out);   // +0x8
    int32_t (*block2)(void* first, void* second, MTT3DBlock2* out);                // +0x10
};
struct MTT3DCallbackObject {
    virtual ~MTT3DCallbackObject();   // slots 0 and 1
    virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual void Refresh();           // slot 6
    virtual void Slot7();
    virtual void SanitizeBlock0();    // slot 8
    virtual void Slot9();
    virtual void SanitizeBlock2();    // slot 10
    char padding_8[0x30];
    void* first;                      // +0x38
    void* second;                     // +0x40
    void* extra;                      // +0x48
    char padding_50[0x30];
    MTT3DCallbacks* callbacks;        // +0x80
    char padding_88[0x4];
    MTT3DBlock0 block0;               // +0x8c
    int32_t updated0;                 // +0x190
    int32_t result1;                  // +0x194
    int32_t updated1;                 // +0x198
    MTT3DBlock1 block1;               // +0x19c
    int32_t changed1;                 // +0x860
    int32_t result2;                  // +0x864
    int32_t updated2;                 // +0x868
    MTT3DBlock2 block2;               // +0x86c
    int32_t changed2;                 // +0x8f0
    char padding_8f4[0x8];
    int32_t overridden0;              // +0x8fc
    MTT3DBlock0 override0;            // +0x900
    char padding_a04[0x8];
    int32_t overridden1;              // +0xa0c
    MTT3DBlock1 override1;            // +0xa10
    int32_t overrideResult1;          // +0x10d4
    char padding_10d8[0x8];
    int32_t overridden2;              // +0x10e0
    MTT3DBlock2 override2;            // +0x10e4
    int32_t overrideResult2;          // +0x1168
    char padding_116c[0x4];
};
// Slot 8 (0xd400d0): at most sixteen positions, each index below 16 (else the last), each position finite.
void MTT3DCallbackObject::SanitizeBlock0() {
    if (block0.count > 16) block0.count = 16;
    for (uint64_t i = 0; i < block0.count; ++i) {
        MTT3DPosition& entry = block0.positions[i];
        if (entry.index >= 16) entry.index = block0.count - 1;
        entry.position.Sanitize();
    }
}
// Slot 10 (0xd40890): at most sixteen tracks, each index below 16 (else the last). Not yet matched: the vectorized
// loop's entry test reads count > 4 here and count >= 5 in the original.
void MTT3DCallbackObject::SanitizeBlock2() {
    if (block2.count > 16) block2.count = 16;
    for (uint64_t i = 0; i < block2.count; ++i) {
        if (block2.tracks[i].index >= 16) block2.tracks[i].index = block2.count - 1;
    }
}
// Slot 6 (0xd3fe60): each block the table has a function for, from it (or its override), marked, then slots 8 to 10.
void MTT3DCallbackObject::Refresh() {
    if (!callbacks) return;
    if (callbacks->block0) {
        MTT3DBlock0* out = &block0;
        if (overridden0) *out = override0;
        else callbacks->block0(first, second, out);
        updated0 = 1;
        SanitizeBlock0();
    }
    if (callbacks->block1) {
        MTT3DBlock1* out = &block1;
        int32_t result;
        if (overridden1) {
            *out = override1;
            result = overrideResult1;
        } else {
            result = callbacks->block1(first, second, extra, out);
        }
        changed1 = 1;
        updated1 = 1;
        result1 = result;
        Slot9();
    }
    if (callbacks->block2) {
        MTT3DBlock2* out = &block2;
        int32_t result;
        if (overridden2) {
            *out = override2;
            result = overrideResult2;
        } else {
            result = callbacks->block2(first, second, out);
        }
        changed2 = 1;
        updated2 = 1;
        result2 = result;
        SanitizeBlock2();
    }
}
DARE_POOLED_CALLBACK_OBJECT(MultiLayerParameterCallbackObject, 0xb0)
DARE_POOLED_CALLBACK_OBJECT(PitchPanVolCallbackObject, 0xe0)

// Each class's pool (the globals from 0x1939a80 on).
extern "C" DarePool<C3DAlgoCallbackObject, 128>* Dare_C3DAlgoPool;                                     // 0x1939a80
extern "C" DarePool<CPosSpeedCallbackObject, 128>* Dare_CPosSpeedPool;                                 // 0x1939a90
extern "C" DarePool<OccObstCallbackObject, 128>* Dare_OccObstPool;                                     // 0x1939a98
extern "C" DarePool<RolloffCallbackObject, 128>* Dare_RolloffPool;                                     // 0x1939aa0
extern "C" DarePool<MicroCallbackObject, 4>* Dare_MicroPool;                                           // 0x1939ab0
extern "C" DarePool<MTT3DCallbackObject, 128>* Dare_MTT3DPool;                                         // 0x1939ab8
extern "C" DarePool<MultiLayerParameterCallbackObject, 128>* Dare_MultiLayerParameterPool;             // 0x1939ac0
extern "C" DarePool<MultiLayerActivationFlagCallbackObject, 128>* Dare_MultiLayerActivationFlagPool;   // 0x1939ac8
extern "C" DarePool<PitchPanVolCallbackObject, 128>* Dare_PitchPanVolPool;                             // 0x1939ad0
extern "C" DarePool<SwitchCallbackObject, 256>* Dare_SwitchPool;                                       // 0x1939ad8
// Slot 7: gives the object back to its class's pool.
void C3DAlgoCallbackObject::Slot7() { Dare_C3DAlgoPool->Delete(this); }                                     // 0xd145f0
void CPosSpeedCallbackObject::Slot7() { Dare_CPosSpeedPool->Delete(this); }                                 // 0xd30220
void OccObstCallbackObject::Slot7() { Dare_OccObstPool->Delete(this); }                                     // 0xd4f430
void RolloffCallbackObject::Slot7() { Dare_RolloffPool->Delete(this); }                                     // 0xd50d30
void MicroCallbackObject::Slot7() { Dare_MicroPool->Delete(this); }                                         // 0xd3ea80
void MTT3DCallbackObject::Slot7() { Dare_MTT3DPool->Delete(this); }                                         // 0xd3ffd0
void MultiLayerParameterCallbackObject::Slot7() { Dare_MultiLayerParameterPool->Delete(this); }             // 0xd40ff0
void MultiLayerActivationFlagCallbackObject::Slot7() { Dare_MultiLayerActivationFlagPool->Delete(this); }   // 0xd41690
void PitchPanVolCallbackObject::Slot7() { Dare_PitchPanVolPool->Delete(this); }                             // 0xd50440
void SwitchCallbackObject::Slot7() { Dare_SwitchPool->Delete(this); }                                       // 0xd5caa0

}  // namespace Dare

namespace Dare {
// The pools' allocation.
template CPosSpeedCallbackObject* DarePool<CPosSpeedCallbackObject, 128>::Allocate();                                   // 0xd304e0
template MTT3DCallbackObject* DarePool<MTT3DCallbackObject, 128>::Allocate();                                           // 0xd40a90
template MultiLayerParameterCallbackObject* DarePool<MultiLayerParameterCallbackObject, 128>::Allocate();               // 0xd410d0
template MultiLayerActivationFlagCallbackObject* DarePool<MultiLayerActivationFlagCallbackObject, 128>::Allocate();     // 0xd41770
template OccObstCallbackObject* DarePool<OccObstCallbackObject, 128>::Allocate();                                       // 0xd4f520
template PitchPanVolCallbackObject* DarePool<PitchPanVolCallbackObject, 128>::Allocate();                               // 0xd50800
template RolloffCallbackObject* DarePool<RolloffCallbackObject, 128>::Allocate();                                       // 0xd50e10
template SwitchCallbackObject* DarePool<SwitchCallbackObject, 256>::Allocate();                                         // 0xd5c570
}  // namespace Dare
