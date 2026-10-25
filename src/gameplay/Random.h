// The game's random number generator (global at 0x192ae70) as its callers
// inline it: Knuth's subtractive generator (a 55-entry table, modulus
// 1,000,000,000) behind a recursive spin lock keyed on the calling thread.
// Names are provisional.
#pragma once
#include <stdint.h>
#include "Assert.h"

namespace nn { namespace os {
struct ThreadType;
ThreadType* GetCurrentThread() noexcept;
uint64_t GetThreadId(const ThreadType* thread) noexcept;
} }  // namespace nn::os

namespace SPTG {

struct RecursiveSpinLock {
    uint32_t owner;   // the owning thread's ID folded to 32 bits; 0 when free
    uint32_t count;
    __attribute__((always_inline)) static uint32_t CurrentThread() {
        uint64_t id = nn::os::GetThreadId(nn::os::GetCurrentThread());
        return uint32_t(id >> 32) ^ uint32_t(id);
    }
    __attribute__((always_inline)) void Lock() {
        uint32_t self = CurrentThread();
        if (owner != self) {
            uint32_t expected;
            do expected = 0;
            while (!__atomic_compare_exchange_n(&owner, &expected, self, false, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST));
        }
        ++count;
    }
    __attribute__((always_inline)) void Unlock() {
        SPTG_ASSERT(owner == CurrentThread());
        if (--count == 0) {
            uint32_t expected;
            do expected = owner;
            while (!__atomic_compare_exchange_n(&owner, &expected, 0u, false, __ATOMIC_SEQ_CST, __ATOMIC_SEQ_CST));
        }
    }
};

struct Random {
    RecursiveSpinLock* lock;
    char padding_8[0x8];
    int32_t i, j;        // +0x10, +0x14
    int32_t table[56];   // +0x18; entries 1-55 are used
    __attribute__((always_inline)) int32_t Next() {
        i = i + 1 == 56 ? 1 : i + 1;
        j = j + 1 == 56 ? 1 : j + 1;
        int32_t value = table[i] - table[j];
        if (value < 0) value += 1000000000;
        table[i] = value;
        return value;
    }
};

// Holds an object's lock for a scope.
template<class T> struct ScopedLock {
    T* object;
    __attribute__((always_inline)) explicit ScopedLock(T* locked) : object(locked) { object->lock->Lock(); }
    __attribute__((always_inline)) ~ScopedLock() { if (object) object->lock->Unlock(); }
};

extern "C" Random* Game_Random;          // 0x192ae70
extern "C" uint32_t Game_RandomCalls;    // 0x1935254

// A value in [0, 1).
__attribute__((always_inline)) inline float RandomFloat() {
    Random* random = Game_Random;
    int32_t value;
    {
        ScopedLock<Random> lock(random);
        value = random->Next();
    }
    return value * 1e-9f;
}
// A value in [min, max], from a 1/10000 resolution; counts the calls.
template<class T> __attribute__((always_inline)) inline T RandomRange(T min, T max) {
    T value = min + T(RandomFloat() * 10000.0f) % (max - min + 1);
    ++Game_RandomCalls;
    return value;
}

}  // namespace SPTG
