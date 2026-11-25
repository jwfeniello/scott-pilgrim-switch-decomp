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
    char padding_8[0x1];
    bool closing;                      // +0x9
    char padding_a[0x6];
    void* block;                       // +0x10
    char padding_18[0x10];
    uint64_t size;                     // +0x28
};
// Slot 0 (0xaaf440; the deleting destructor 0xaaf4b0 inlines it): hands the block back and unregisters.
MemAllocStack::~MemAllocStack() {
    closing = true;
    if (block) Manager()->ReleaseBlock(block, 0, this, size);
    Manager()->Unregister(this);
}

}  // namespace Gear
