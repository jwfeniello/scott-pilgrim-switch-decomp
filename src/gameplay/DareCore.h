// Dare (Ubisoft's sound engine) as the matched Dare functions use it. Names come from the RTTI of each class; member
// names are provisional unless a comment says where they come from.
#pragma once
#include <stdint.h>

// The allocator Dare frees its arrays through (the global at 0x191faf8, used while 0x191fb00 is set). The flag is
// volatile here because the original never hoists its load above a pointer test, as it would for a plain global; that
// it really is volatile is a guess.
struct DareAllocator {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual void Free(void* pointer);   // slot 6
};
extern "C" DareAllocator* Dare_Allocator;
extern "C" volatile uint32_t Dare_AllocatorEnabled;
__attribute__((always_inline)) inline void DareFree(void* pointer) {
    if (Dare_AllocatorEnabled) {
        if (DareAllocator* allocator = Dare_Allocator) allocator->Free(pointer);
    }
}

namespace Dare {

// A growable array in the Dare allocator: emptied, freed and cleared when destroyed.
template<class T> struct DareArray {
    uint64_t capacity;   // +0x0
    uint64_t size;       // +0x8
    void* reserved;      // +0x10
    T* data;             // +0x18
    ~DareArray() {
        size = 0;
        if (data) DareFree(data);
        data = nullptr;
        capacity = 0;
        size = 0;
    }
};

}  // namespace Dare
