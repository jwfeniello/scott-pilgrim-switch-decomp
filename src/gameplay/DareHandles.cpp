// The handle machinery's destructors (provisional names): each releases its slot in the handle table under the
// table's lock.
#include <stdint.h>

namespace nn { namespace os {
struct MutexType;
void LockMutex(MutexType* mutex) noexcept;
void UnlockMutex(MutexType* mutex) noexcept;
} }  // namespace nn::os

// The lock over the handle table (the global at 0x1939b38; its name is provisional).
extern "C" nn::os::MutexType* Dare_HandleMutex;
struct HandleLock {
    HandleLock() { nn::os::LockMutex(Dare_HandleMutex); }
    ~HandleLock() { nn::os::UnlockMutex(Dare_HandleMutex); }
};
struct HandleSlot {
    uint64_t index;
    void Release();   // 0xd29990
};
inline void ReleaseHandle(HandleSlot* slot) {
    HandleLock lock;
    slot->Release();
}

// The part at +0x4 of SNDObjectHandlePriv (see DareRepository.cpp).
struct SNDObjectHandleState {
    char padding_0[0x8];
    HandleSlot slot;   // +0x8
    char padding_10[0x8];
    ~SNDObjectHandleState();
};

// 0xd29920: releases the handle's slot under the table lock. The original takes the lock three times, one of them
// through a guard (only that one is undone when the release throws); the two plain locks are a guess at that shape.
SNDObjectHandleState::~SNDObjectHandleState() {
    nn::os::LockMutex(Dare_HandleMutex);
    nn::os::LockMutex(Dare_HandleMutex);
    ReleaseHandle(&slot);
    nn::os::UnlockMutex(Dare_HandleMutex);
    nn::os::UnlockMutex(Dare_HandleMutex);
}

// Two more handle types with the same destructor (provisional names): the one the paths, voices and effect chains hold
// (0xd31160) and one the associations use (0xd59970).
#define DARE_HANDLE(Name)                           \
    struct Name {                                   \
        void* value;                                \
        HandleSlot slot;   /* +0x8 */               \
        ~Name();                                    \
    };                                              \
    Name::~Name() {                                 \
        nn::os::LockMutex(Dare_HandleMutex);        \
        nn::os::LockMutex(Dare_HandleMutex);        \
        ReleaseHandle(&slot);                       \
        nn::os::UnlockMutex(Dare_HandleMutex);      \
        nn::os::UnlockMutex(Dare_HandleMutex);      \
    }
DARE_HANDLE(DareObjectHandle)   // 0xd31160
DARE_HANDLE(AssoHandle)         // 0xd59970
// Four more handle types with this destructor; which classes they belong to isn't known yet, so they're named by address.
DARE_HANDLE(Handle_d30ee0)      // 0xd30ee0
DARE_HANDLE(Handle_d448c0)      // 0xd448c0
DARE_HANDLE(Handle_d96c90)      // 0xd96c90
DARE_HANDLE(Handle_d9f470)      // 0xd9f470
