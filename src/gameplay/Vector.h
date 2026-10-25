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
    // Returns a buffer for `required` elements, copying the first `index` into
    // it and moving the rest to end at `tail` (out of line, one instance per
    // element type). The caller stores the result.
    T* Reserve(uint64_t tail, uint64_t index, uint64_t required);
    // The same logic as Resize has it inline. A zero count (as 32 bits) gives
    // no buffer; when the allocator hands back the old buffer, it is kept.
    __attribute__((always_inline)) T* Grow(uint64_t tail, uint64_t index, uint64_t required) {
        T* old = data;
        void* fresh = uint32_t(required) ? allocator->Allocate(uint32_t(required) * uint32_t(sizeof(T))) : nullptr;
        capacity = required;
        T* result = static_cast<T*>(fresh);
        if (old && fresh) {
            if (fresh != old) __builtin_memcpy(fresh, old, index * sizeof(T));
            uint64_t rest = size - index;
            if (rest) __builtin_memmove(static_cast<T*>(fresh) + tail + (index - size), old + index, rest * sizeof(T));
            if (fresh != old) AllocatorFor(old)->Free(old);
            else result = old;
        }
        return result;
    }
    // Frees the buffer and empties the vector (nothing to do without one).
    __attribute__((always_inline)) void Clear() {
        if (!capacity) return;
        T* old = data;
        size = 0;
        if (old) AllocatorFor(old)->Free(old);
        capacity = 0;
        size = 0;
        data = nullptr;
    }
    // Sets the element count, growing the buffer when needed.
    __attribute__((always_inline)) void SetCount(uint64_t count) {
        if (!count) {
            Clear();
        } else {
            if (size == count) return;
            if (size < count && capacity < count) data = Grow(count, size, count);
        }
        size = count;
    }
    // SetCount out of line, one instance per element type (Vector.cpp). Some
    // classes expand it in place instead.
    __attribute__((noinline)) void Resize(uint64_t count) { SetCount(count); }
    __attribute__((always_inline)) void PushBack(const T& item) {
        uint64_t count = size + 1;
        if (capacity < count) data = Reserve(count, size, count);
        new (&data[size]) T(item);
        ++size;
    }
};

}  // namespace onyx
