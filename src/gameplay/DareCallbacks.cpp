// Dare's callback objects (RTTI names): the vectors they keep checked. Member names are provisional.
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

struct CPosSpeedCallbackObject {
    char padding_0[0x9c];
    CallbackVector position;   // +0x9c
    char padding_a8[0x4];
    CallbackVector speed;      // +0xac
    void SanitizePosition();   // slot 8
    void SanitizeSpeed();      // slot 9
};
struct MicroCallbackObject {
    char padding_0[0x8c];
    CallbackVector position;   // +0x8c
    char padding_98[0x4];
    CallbackVector speed;      // +0x9c
    void SanitizePosition();   // slot 8
    void SanitizeSpeed();      // slot 9
};

void CPosSpeedCallbackObject::SanitizePosition() { position.Sanitize(); }   // 0xd30310
void CPosSpeedCallbackObject::SanitizeSpeed() { speed.Sanitize(); }         // 0xd30380
void MicroCallbackObject::SanitizePosition() { position.Sanitize(); }       // 0xd3ec30
void MicroCallbackObject::SanitizeSpeed() { speed.Sanitize(); }             // 0xd3eca0

// What +0x80 of a callback object points to: the function that gives its value.
struct CallbackFunction {
    int32_t (*function)(void* first, void* second, int32_t extra);
};
// The part MultiLayerActivationFlagCallbackObject and SwitchCallbackObject share (each has its own copy of the code).
// Refresh is not credited: here the two stores of the value merge into one after the branch, where the original
// keeps one in each arm.
#define DARE_VALUE_CALLBACK_OBJECT(Class) \
    struct Class { \
        virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); \
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

}  // namespace Dare
