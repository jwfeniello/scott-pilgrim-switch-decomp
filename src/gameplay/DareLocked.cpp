// Eight small functions next to Dare's manager (0xcf7460-0xcf77ac): each calls one virtual slot of the object it's
// given while holding the API lock (the global at 0x19397c8). Nothing in the binary names or calls them directly, so
// the object's class and the functions' names are unknown; they're named by address.
#include <stdint.h>

namespace nn { namespace os {
struct MutexType;
void LockMutex(MutexType* mutex) noexcept;
void UnlockMutex(MutexType* mutex) noexcept;
} }  // namespace nn::os

extern "C" nn::os::MutexType* Dare_ApiMutex;   // 0x19397c8 (name provisional)

struct LockedObject {
    virtual int32_t Slot0();
    virtual void Slot1();
    virtual int32_t Slot2();
    virtual void Slot3(); virtual void Slot4();
    virtual float Slot5();
    virtual int32_t Slot6();
    virtual int32_t Slot7();
    virtual int32_t Slot8();
    virtual void Slot9();
    virtual int32_t Slot10();
    virtual void Slot11(); virtual void Slot12(); virtual void Slot13();
    virtual int32_t Slot14(void* argument);
    virtual void Slot15();
    virtual void Slot16();
    virtual void Slot17();
    virtual void Slot18();
    virtual void Slot19();
    virtual void Slot20();
    virtual void Slot21();
    virtual void Slot22();
    virtual void Slot23();
    virtual void Slot24();
    virtual void Slot25();
    virtual void Slot26();
    virtual float Slot27();
};

#define LOCKED_CALL(Type, Name, Slot)                  \
    Type Name(LockedObject* object) {                  \
        nn::os::LockMutex(Dare_ApiMutex);              \
        Type result = object->Slot();                  \
        nn::os::UnlockMutex(Dare_ApiMutex);            \
        return result;                                 \
    }
LOCKED_CALL(int32_t, LockedCall_cf7460, Slot0)    // 0xcf7460
LOCKED_CALL(int32_t, LockedCall_cf74f0, Slot2)    // 0xcf74f0
LOCKED_CALL(float, LockedCall_cf75c0, Slot5)      // 0xcf75c0
LOCKED_CALL(int32_t, LockedCall_cf7610, Slot6)    // 0xcf7610
LOCKED_CALL(int32_t, LockedCall_cf7660, Slot7)    // 0xcf7660
LOCKED_CALL(int32_t, LockedCall_cf76b0, Slot8)    // 0xcf76b0
LOCKED_CALL(int32_t, LockedCall_cf7710, Slot10)   // 0xcf7710

// 0xcf7760: the same with an argument passed on.
int32_t LockedCall_cf7760(LockedObject* object, void* argument) {
    nn::os::LockMutex(Dare_ApiMutex);
    int32_t result = object->Slot14(argument);
    nn::os::UnlockMutex(Dare_ApiMutex);
    return result;
}

// 0xcf8b50: the same as SndManager's slot 7 (0xcf88f0) for an unknown class: its second argument's slot 27, under
// the API lock.
float LockedCall_cf8b50(void* self, LockedObject* object) {
    nn::os::LockMutex(Dare_ApiMutex);
    float result = object->Slot27();
    nn::os::UnlockMutex(Dare_ApiMutex);
    return result;
}
