// Gear's fixed-size and stack allocators: their deleting destructors. Member and helper names are provisional.
#include "GearCore.h"

namespace Gear {

// What 0x1926bd8 offers allocators as they go (names provisional).
struct MemManagerCalls : MemManager {
    void Unregister(MemInterface* allocator);                                                   // 0xa7da50
    void ReleaseBlock(void* block, int32_t flags, MemInterface* owner, uint64_t size);          // 0xa7d8e0
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
    char padding_8[0x30];
    uint64_t value38;                  // +0x38
    uint64_t value40;                  // +0x40
    uint64_t value48;                  // +0x48
};
// Slot 0 (0xa94b10; the deleting destructor 0xa94b70 inlines it): forgets its three words, clears and unregisters.
MemAllocFixed::~MemAllocFixed() {
    value38 = 0;
    value40 = 0;
    value48 = 0;
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
    virtual void Slot7();
    virtual uint32_t BlockSize(void* block, uint32_t* extra);   // slot 8
    char padding_8[0x48];
    SmallPagePool* pool;               // +0x50
};
// Slot 8 (0xaaede0): the size of the blocks on the block's page (0 in *extra).
uint32_t MemAllocSmall::BlockSize(void* block, uint32_t* extra) {
    if (extra) *extra = 0;
    uintptr_t page = reinterpret_cast<uintptr_t>(block) & pool->pageMask;
    return reinterpret_cast<const uint32_t*>(page + pool->pageEnd)[-1];
}

}  // namespace Gear
