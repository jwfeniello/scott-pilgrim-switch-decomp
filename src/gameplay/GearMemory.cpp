// Gear's memory sources: system pages, and the default allocator's teardown.
#include "GearCore.h"

namespace nn {
namespace os {
bool IsVirtualAddressMemoryEnabled() noexcept;                   // 0xfa4db0
int FreeMemoryPages(uintptr_t address, size_t size) noexcept;    // 0xfa4dc0
}  // namespace os
}  // namespace nn
extern "C" void* memalign(size_t alignment, size_t size) noexcept;   // 0xfa4da0
extern "C" void free(void* block) noexcept;                          // 0x631ec0
extern "C" void* memcpy(void* to, const void* from, size_t size) noexcept;   // 0xfa3330

namespace Gear {

// What slot 4 of MemSysPage fills in about a block. Only the values it sets are known.
struct PageInfo {
    void* base;
    uint64_t value8;
    int32_t value10;
    int32_t value14;
};

// Gear::MemSysPage (vtable 0x189bb30): memory straight from the system, 64 KB aligned. Slot 3 hands pages (kind 1)
// back to the system's page allocator when there is one, and anything else to free.
struct MemSysPage {
    virtual ~MemSysPage();
    virtual void* Alloc(void* hint, uint32_t size);                 // slot 2
    virtual void Free(void* block, uint32_t size, uint8_t kind);    // slot 3
    virtual bool Describe(void* block, PageInfo* info);             // slot 4
    virtual void Slot5();
    virtual uint32_t PageSize();                                    // slot 6: 0x10000
    virtual void Slot7();
};

void* MemSysPage::Alloc(void* hint, uint32_t size) {   // 0xaa8a50
    return memalign(0x10000, size);
}

// Not yet matched: the original tests the kind after saving both register pairs; here the test goes between them.
void MemSysPage::Free(void* block, uint32_t size, uint8_t kind) {   // 0xaa8a60
    if (kind == 1) {
        if (nn::os::IsVirtualAddressMemoryEnabled()) nn::os::FreeMemoryPages(reinterpret_cast<uintptr_t>(block), size);
    } else {
        free(block);
    }
}

bool MemSysPage::Describe(void* block, PageInfo* info) {   // 0xaa8ac0
    info->base = block;
    info->value8 = 0;
    info->value10 = -1;
    info->value14 = 3;
    return true;
}

// Gear::StaticMemoryBlockProvider (vtable 0x189c3a8): a fixed block of memory read and written by offset, as a
// memory file's contents. Reads stop at what has been written (error 2 past it), writes at the block's end.
struct StaticMemoryBlockProvider {
    virtual ~StaticMemoryBlockProvider();
    virtual uint32_t Read(void* to, uint32_t offset, uint32_t count);          // slot 2
    virtual uint32_t Write(const void* from, uint32_t offset, uint32_t count); // slot 3
    char padding_8[8];
    uint32_t size;                     // +0x10: how much has been written
    char padding_14[4];
    uint8_t* data;                     // +0x18
    char padding_20[4];
    uint32_t capacity;                 // +0x24
};

uint32_t StaticMemoryBlockProvider::Read(void* to, uint32_t offset, uint32_t count) {   // 0xa9e690
    if (offset + count > size) {
        if (offset >= size) {
            Error(2);
            return 0;
        }
        count = size - offset;
    }
    if (count) memcpy(to, data + offset, count);
    return count;
}

uint32_t StaticMemoryBlockProvider::Write(const void* from, uint32_t offset, uint32_t count) {   // 0xa9e710
    uint32_t written = offset + count > capacity ? capacity - offset : count;
    if (written) {
        memcpy(data + offset, from, written);
        if (offset + written > size) size = offset + written;
    }
    return written;
}

// Gear::ZLib (vtable 0x189b968): a zlib stream, whose memory comes from the Gear allocator at +0x8; the stream's
// opaque pointer is the ZLib itself. Slot 2 of the allocator takes the size.
struct ZLib {
    virtual ~ZLib();
    MemInterface* allocator;           // +0x8
    static void* Alloc(void* opaque, uint32_t items, uint32_t size);
};

void* ZLib::Alloc(void* opaque, uint32_t items, uint32_t size) {   // 0xa89f70: zlib's allocation callback
    uint32_t total = size * items;
    if (!total) return nullptr;
    return static_cast<ZLib*>(opaque)->allocator->Alloc(total);
}

// The word at 0x1926bd0, read or written through one function (0xa81230); what it holds isn't known yet.
extern uint32_t Setting1926bd0;
void ExchangeSetting(bool read, uint32_t* value) {   // 0xa81230
    uint32_t* to = read ? value : &Setting1926bd0;
    *to = read ? Setting1926bd0 : *value;
}

// Gear::MemAllocDl283: dlmalloc 2.8.3 behind Gear's allocator interface; only its destructor is needed here.
struct MemAllocDl283 : MemInterface {
    ~MemAllocDl283() override;   // 0xa945d0
};

// Gear::MemDefaultAllocator (vtable 0x189bb80): the allocator the default pointer (0x1926bb8) names; it leaves that
// pointer at -1 as it goes.
struct MemDefaultAllocator : MemAllocDl283 {
    ~MemDefaultAllocator() override;
};

MemDefaultAllocator::~MemDefaultAllocator() {   // 0xaa8730
    DefaultAllocator = reinterpret_cast<MemInterface*>(-1);
}

}  // namespace Gear
