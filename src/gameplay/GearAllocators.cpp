// Gear's fixed-size and stack allocators: their deleting destructors. Member and helper names are provisional.
#include "GearCore.h"

namespace Gear {

// What 0x1926bd8 offers allocators as they go (names provisional).
struct MemManagerCalls : MemManager {
    void Unregister(MemInterface* allocator);                                                   // 0xa7da50
    void ReleaseBlock(void* block, int32_t flags, MemInterface* owner, uint64_t size);          // 0xa7d8e0
    void ReleaseSpace(MemInterface* owner, void* base);                                         // 0xa7d3d0
};
__attribute__((always_inline)) inline MemManagerCalls* Manager() { return static_cast<MemManagerCalls*>(Memory); }

// MemInterface's destructor only sets its vtable (0x67aea0). The deleting destructors below inline it, as the link-time
// optimizer did; always_inline stands in for that (its only support is that it matches). The null statement keeps the
// vtable store, as in DeviceInterface's.
__attribute__((always_inline)) MemInterface::~MemInterface() { ; }

// Gear::MemAllocFixedBase (vtable 0x189d248): the fixed-size allocators' base; its destructor (0xaa8a00) adds nothing.
struct MemAllocFixedBase : MemInterface {
    ~MemAllocFixedBase() override {}
    void Clear();                      // 0xa94a10
};

// Gear::MemAllocFixed (vtable 0x189bce0).
struct MemAllocFixed : MemAllocFixedBase {
    ~MemAllocFixed() override;
    void Free(void* block) noexcept override;
    char padding_8[0x18];
    RecursiveSpinLock* lock;           // +0x20
    char padding_28[0x10];
    uint64_t value38;                  // +0x38
    uint64_t value40;                  // +0x40
    void* freeList;                    // +0x48: freed blocks, each holding the next
};
// Slot 6 (0xa94ca0): puts the block at the head of the free list, under the lock.
void MemAllocFixed::Free(void* block) noexcept {
    if (!block) return;
    lock->Lock();
    *static_cast<void**>(block) = freeList;
    freeList = block;
    lock->Unlock();
}
// Slot 0 (0xa94b10; the deleting destructor 0xa94b70 inlines it): forgets its three words, clears and unregisters.
MemAllocFixed::~MemAllocFixed() {
    value38 = 0;
    value40 = 0;
    freeList = nullptr;
    Clear();
    Manager()->Unregister(this);
}

// Gear::MemAllocFixedWithFree (vtable 0x189ec68).
struct MemAllocFixedWithFree : MemAllocFixedBase {
    ~MemAllocFixedWithFree() override;
};
// Slot 0 (0xaae4b0; the deleting destructor 0xaae500 inlines it): clears and unregisters.
MemAllocFixedWithFree::~MemAllocFixedWithFree() {
    Clear();
    Manager()->Unregister(this);
}

// Gear::MemAllocStack (vtable 0x189edc0): a stack over one block (+0x10, its size at +0x28).
struct MemAllocStack : MemInterface {
    ~MemAllocStack() override;
    virtual uint32_t Slot7();          // slot 7
    char padding_8[0x1];
    bool closing;                      // +0x9
    char padding_a[0x6];
    void* block;                       // +0x10
    char padding_18[0x8];
    void* cursor;                      // +0x20
    uint64_t size;                     // +0x28
    char padding_30[0x8];
    uint32_t value38;                  // +0x38
};
// Slot 7 (0xaaf5f0): what's left: +0x38 less how far the cursor has moved past the block's start (names provisional).
uint32_t MemAllocStack::Slot7() {
    return value38 - uint32_t(reinterpret_cast<uintptr_t>(cursor) - reinterpret_cast<uintptr_t>(block));
}
// Slot 0 (0xaaf440; the deleting destructor 0xaaf4b0 inlines it): hands the block back and unregisters.
MemAllocStack::~MemAllocStack() {
    closing = true;
    if (block) Manager()->ReleaseBlock(block, 0, this, size);
    Manager()->Unregister(this);
}

// Gear::MemAllocSmall (vtable 0x189ed18): small blocks in pages; each page keeps the size of its blocks in its last word
// (the pages' mask at +0x38 and the word's offset at +0x40 of the pool at +0x50).
struct SmallPagePool {
    char padding_0[0x38];
    uintptr_t pageMask;                // +0x38
    uintptr_t pageEnd;                 // +0x40
};
struct MemAllocSmall : MemInterface {
    void* Realloc(void* block, uint32_t size) override;
    void* ReallocAligned(void* block, uint32_t size, uint32_t align) override;
    virtual void Slot7();
    virtual uint32_t BlockSize(void* block, uint32_t* extra);   // slot 8
    void* AllocBlock(uint32_t size);   // 0xaaefd0
    void FreeBlock(void* block);       // 0xaaee30
    char padding_8[0x48];
    SmallPagePool* pool;               // +0x50
};
// Slot 4 (0xaaec60): a block of the new size with the old contents (the same block when the size doesn't change;
// none for size 0).
void* MemAllocSmall::Realloc(void* block, uint32_t size) {
    if (!block) return AllocBlock(size);
    uint32_t old = BlockSize(block, nullptr);
    if (old == size) return block;
    if (!size) {
        FreeBlock(block);
        return nullptr;
    }
    void* moved = AllocBlock(size);
    if (!moved) return nullptr;
    __builtin_memcpy(moved, block, old < size ? old : size);
    FreeBlock(block);
    return moved;
}
// Slot 5 (0xaaed20): as slot 4, keeping the block only when it is already aligned.
void* MemAllocSmall::ReallocAligned(void* block, uint32_t size, uint32_t align) {
    uint32_t old = BlockSize(block, nullptr);
    if (old == size && !(reinterpret_cast<uintptr_t>(block) & (align - 1))) return block;
    if (!size) return nullptr;
    void* moved = AllocBlock(size);
    if (!moved) return nullptr;
    __builtin_memcpy(moved, block, old < size ? old : size);
    FreeBlock(block);
    return moved;
}
// Slot 8 (0xaaede0): the size of the blocks on the block's page (0 in *extra).
uint32_t MemAllocSmall::BlockSize(void* block, uint32_t* extra) {
    if (extra) *extra = 0;
    uintptr_t page = reinterpret_cast<uintptr_t>(block) & pool->pageMask;
    return reinterpret_cast<const uint32_t*>(page + pool->pageEnd)[-1];
}


// Gear::MemAllocDl283: dlmalloc 2.8.3 behind Gear's allocator interface.
struct DlSpace;   // dlmalloc's state, at +0x50
struct MemAllocDl283 : MemInterface {
    ~MemAllocDl283() override;   // 0xa945d0
    virtual int32_t Slot7();     // slot 7, shared with MemDefaultAllocator
    virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11(); virtual void Slot12();
    virtual void Slot13(); virtual void Slot14();
    virtual void Slot15();       // slot 15
    virtual void Slot16();
    virtual void Slot17();       // slot 17
    void Call96360(DlSpace* space);   // 0xa96360 (name provisional)
    void Call95810(DlSpace* space);   // 0xa95810 (name provisional)
    char padding_8[0x1];
    bool closing;                // +0x9
    char padding_a[0x6];
    void* base;                  // +0x10: the memory dlmalloc manages
    char padding_18[0x38];
    char space[0x388];           // +0x50: the dlmalloc state
    RecursiveSpinLock* lock;     // +0x3d8
    char padding_3e0[0x18];
    MemAllocFixed fixed;         // +0x3f8: a fixed-size allocator of its own
    DlSpace* Space() { return reinterpret_cast<DlSpace*>(space); }
};
// Slot 0 (0xa945d0): hands its memory back and unregisters, before the fixed allocator goes.
MemAllocDl283::~MemAllocDl283() {
    closing = true;
    Manager()->ReleaseSpace(this, base);
    Manager()->Unregister(this);
}
// Holds the allocator's lock for a scope (the unlock rereads the lock, so the guard keeps the allocator).
struct Dl283Lock {
    MemAllocDl283* owner;
    explicit Dl283Lock(MemAllocDl283* owner) : owner(owner) { owner->lock->Lock(); }
    ~Dl283Lock() { owner->lock->Unlock(); }
};
// Slot 15 (0xa95550): both of dlmalloc's passes, under the lock.
void MemAllocDl283::Slot15() {
    Dl283Lock hold(this);
    Call96360(Space());
    Call95810(Space());
}
// Slot 17 (0xa95660): the second pass alone, under the lock.
void MemAllocDl283::Slot17() {
    Dl283Lock hold(this);
    Call95810(Space());
}

int32_t MemAllocDl283::Slot7() {   // 0xa95490: 0
    TouchSharedStatic();
    return 0;
}

// Gear::MemDefaultAllocator (vtable 0x189bb80): the allocator the default pointer (0x1926bb8) names; it leaves that
// pointer at -1 as it goes.
struct MemDefaultAllocator : MemAllocDl283 {
    ~MemDefaultAllocator() override;
};

MemDefaultAllocator::~MemDefaultAllocator() {   // 0xaa8730
    DefaultAllocator = reinterpret_cast<MemInterface*>(-1);
}

}  // namespace Gear
