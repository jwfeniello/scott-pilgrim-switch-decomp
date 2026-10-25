// Onyx's growable array as SPTG actors embed it (0x20 bytes). Names are
// provisional.
#pragma once
#include "OnyxComponents.h"

// Placement new (the project builds without the C++ library headers).
inline void* operator new(decltype(sizeof(0)), void* where) noexcept { return where; }

namespace onyx {

template<class T> struct Vector {
    Allocator* allocator;   // +0x0
    uint64_t capacity;      // +0x8
    uint64_t size;          // +0x10
    T* data;                // +0x18
    // Returns a buffer for `required` elements, moving the first `index` into it
    // and the rest up to start at `tail` (out of line, one instance per element
    // type). The caller stores the result.
    T* Reserve(uint64_t tail, uint64_t index, uint64_t required);
    __attribute__((always_inline)) void PushBack(const T& item) {
        uint64_t count = size + 1;
        if (capacity < count) data = Reserve(count, size, count);
        new (&data[size]) T(item);
        ++size;
    }
};

}  // namespace onyx
