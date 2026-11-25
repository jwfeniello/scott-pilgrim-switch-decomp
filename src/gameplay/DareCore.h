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

void* DareAllocate(__SIZE_TYPE__ size, uint32_t alignment);   // 0x722190

namespace Dare {

// A growable array in the Dare allocator: emptied, freed and cleared when destroyed.
template<class T> struct DareArray {
    uint64_t capacity;   // +0x0
    uint64_t size;       // +0x8
    void* reserved;      // +0x10
    T* data;             // +0x18
    // Makes room for `amount` elements at `index`, growing by half again (at least to fit).
    __attribute__((always_inline)) void InsertSpace(uint64_t index, uint64_t amount) {
        uint64_t total = index + amount;
        T* old = data;
        if (capacity < total) {
            uint64_t grown = capacity + capacity / 2;
            if (grown < total) grown = total;
            T* fresh = static_cast<T*>(DareAllocate(grown * sizeof(T), 0));
            capacity = grown;
            if (old && fresh) {
                if (fresh != old) __builtin_memcpy(fresh, old, index * sizeof(T));
                uint64_t tail = size - index;
                if (tail) __builtin_memmove(fresh + total - tail, old + index, tail * sizeof(T));
                if (fresh != old) DareFree(old);
            }
            data = fresh;
        }
    }
    __attribute__((always_inline)) void Push(T value) {
        InsertSpace(size, 1);
        uint64_t at = size;
        data[at] = value;
        size = at + 1;
    }
    ~DareArray() {
        size = 0;
        if (data) DareFree(data);
        data = nullptr;
        capacity = 0;
        size = 0;
    }
};

// One block of a static object pool (Dare::Private::DarePoolBase<T, N, DareSingleThreadedStaticPool>): N objects and a
// flag for each that is in use. The pool holds one block inline and keeps more in an array. Member names are provisional.
template<class T, unsigned N> struct DarePoolBlock {
    int32_t used;
    T* objects;          // +0x8
    uint8_t* cursor;     // +0x10: the flag of the object handed out last
    alignas(T) char storage[N * sizeof(T)];   // +0x18: raw storage for the objects
    uint8_t inUse[N];    // bytes (stores to them may alias the cursor, which is reread after one)
    static void* operator new(__SIZE_TYPE__ size) { return DareAllocate(size, 8); }
    __attribute__((always_inline)) DarePoolBlock() : used(0), objects(reinterpret_cast<T*>(storage)), cursor(inUse - 1) {
        __builtin_memset(inUse, 0, sizeof(inUse));
    }
    // The next free object after the last one handed out, or null when all are in use.
    T* Allocate() {
        if (used > static_cast<int32_t>(N - 1)) return nullptr;
        ++used;
        do {
            uint8_t* next = cursor + 1;
            cursor = next == inUse + N ? inUse : next;
        } while (*cursor);
        *cursor = 1;
        int32_t index = static_cast<int32_t>(cursor - inUse);
        return objects + index;
    }
    // Takes `object` back if it is one of this block's.
    bool Free(T* object) {
        if (object < objects || object > objects + (N - 1)) return false;
        int32_t index = static_cast<int32_t>(object - objects);
        inUse[index] = 0;
        --used;
        return true;
    }
};
template<class T, unsigned N> struct DarePool {
    void* vtable;
    DarePoolBlock<T, N> block;                // +0x8
    DareArray<DarePoolBlock<T, N>*> more;
    void Free(T* object) {
        if (block.Free(object)) return;
        for (DarePoolBlock<T, N>** it = more.data, **end = more.data + more.size; it != end; ++it) {
            if ((*it)->Free(object)) return;
        }
    }
    // Storage for one more object: from the first block with room, else from a new block.
    T* Allocate() {
        if (T* object = block.Allocate()) return object;
        for (DarePoolBlock<T, N>** it = more.data, **end = more.data + more.size; it != end; ++it) {
            if (T* object = (*it)->Allocate()) return object;
        }
        DarePoolBlock<T, N>* fresh = new DarePoolBlock<T, N>;
        if (!fresh) return nullptr;
        more.Push(fresh);
        return fresh->Allocate();
    }
    // Destroys the object through its virtual destructor and takes its storage back.
    void Delete(T* object) {
        object->~T();
        Free(object);
    }
};

}  // namespace Dare
