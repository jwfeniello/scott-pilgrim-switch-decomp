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
    virtual uint32_t PageSize();                                    // slot 6
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

uint32_t MemSysPage::PageSize() {   // 0xaa8af0: 64 KB
    TouchSharedStatic();
    return 0x10000;
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

// Gear::DynamicMemoryBlockProvider (vtable 0x189c2b0): memory file contents in a list of blocks from an allocator.
struct DynamicMemoryBlockProvider {
    // A list node: the block's memory at +0x10.
    struct Node {
        Node* next;
        Node* previous;                // +0x8
        void* data;                    // +0x10
    };
    // The allocator at +0x8 as this class sees it: its slot 6 frees, and unlike MemInterface's here it may throw (the
    // original's destructor has a terminate landing pad around the calls). The type is a guess at that shape.
    struct Allocator {
        virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
        virtual void Slot5();
        virtual void Free(void* block);    // slot 6
    };
    virtual ~DynamicMemoryBlockProvider();
    Allocator* allocator;              // +0x8
    char padding_10[0x8];
    Node* head;                        // +0x18
    Node* tail;                        // +0x20
};

// Slot 0 (0xa9c9f0; the deleting destructor 0xa9ca70 inlines it): unlinks each block from the front and frees it and
// its node.
DynamicMemoryBlockProvider::~DynamicMemoryBlockProvider() {
    while (Node* node = head) {
        head = node->next;
        if (node->next) node->next->previous = nullptr;
        else tail = nullptr;
        node->next = nullptr;
        node->previous = nullptr;
        allocator->Free(node->data);
        allocator->Free(node);
    }
}

// Gear::ZLib (vtable 0x189b968): a zlib stream, whose memory comes from the Gear allocator at +0x8; the stream's
// opaque pointer is the ZLib itself. Slot 2 of the allocator takes the size.
struct ZLib {
    virtual ~ZLib();
    MemInterface* allocator;           // +0x8
    void* stream;                      // +0x10: the z_stream
    static void* Alloc(void* opaque, uint32_t items, uint32_t size);
};
// 0xa89fa0: the stream goes back to the allocator. Its free may throw here (the deflater's destructor, which inlines
// this, has a landing pad around it), unlike MemInterface's as GearCore.h declares it; the view is a guess at that.
struct ZLibAllocator {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5();
    virtual void Free(void* block);    // slot 6
};
ZLib::~ZLib() {
    if (stream) reinterpret_cast<ZLibAllocator*>(allocator)->Free(stream);
}

// zlib's deflate (0xa852b0) and deflateEnd (0xa89500).
extern "C" int deflate(void* stream, int flush);
extern "C" int deflateEnd(void* stream);

// The parts of zlib's stream and inflate state that inflateEnd touches (zlib 1.2.8's layout on AArch64).
struct ZInflateState {
    char padding_0[0x38];
    void* window;                      // +0x38
};
struct ZStream {
    char padding_0[0x38];
    ZInflateState* state;              // +0x38
    void* (*zalloc)(void* opaque, uint32_t items, uint32_t size);   // +0x40
    void (*zfree)(void* opaque, void* address);                     // +0x48
    void* opaque;                      // +0x50
};
// zlib 1.2.8's inflateEnd, which the link-time optimizer inlined.
__attribute__((always_inline)) inline int InflateEnd(ZStream* stream) {
    if (!stream || !stream->state || !stream->zfree) return -2;
    ZInflateState* state = stream->state;
    if (state->window) stream->zfree(stream->opaque, state->window);
    stream->zfree(stream->opaque, stream->state);
    stream->state = nullptr;
    return 0;
}

// Gear::ZLibInflate (vtable 0x189bab0).
struct ZLibInflate : ZLib {
    ~ZLibInflate() override;
};
// Slots 0 and 1 (0xa8a3f0, 0xa8a4c0): ends the stream.
ZLibInflate::~ZLibInflate() {
    if (stream) InflateEnd(static_cast<ZStream*>(stream));
}

// Gear::ZLibDeflate (vtable 0x189ba30).
struct ZLibDeflate : ZLib {
    ~ZLibDeflate() override;
    char padding_18[0x4];
    int32_t flush;                     // +0x1c
};
// Slots 0 and 1 (0xa8a110, 0xa8a190): finishes the stream and ends it. always_inline stands in for the link-time
// inlining into the deleting destructor (its only support is that it matches).
__attribute__((always_inline)) ZLibDeflate::~ZLibDeflate() {
    flush = 4;
    deflate(stream, 4);
    deflateEnd(stream);
}

void* ZLib::Alloc(void* opaque, uint32_t items, uint32_t size) {   // 0xa89f70: zlib's allocation callback
    uint32_t total = size * items;
    if (!total) return nullptr;
    return static_cast<ZLib*>(opaque)->allocator->Alloc(total);
}

// MemManager's page map (+0x340): a libc++ std::map from the top 16 bits of an address (bits 32-47) to a table of
// allocator indexes per 64 KB page, laid out as libc++'s tree: the first node, the end node (its left child is the
// root) and the size.
struct PageMapNode {
    PageMapNode* left;
    PageMapNode* right;
    PageMapNode* parent;               // +0x10
    bool black;                        // +0x18
    alignas(8) uint32_t key;           // +0x20 (the value pair is 8-aligned)
    uint8_t* pages;                    // +0x28: 0xff for none; the index in the low 7 bits
};
void BalanceAfterInsert(PageMapNode* root, PageMapNode* node) noexcept;   // libc++'s __tree_balance_after_insert
struct PageMap {
    PageMapNode* begin;                // +0x340
    struct EndNode {
        PageMapNode* left;             // the root
    } end;                             // +0x348
    uint64_t size;                     // +0x350
    PageMapNode* End() { return reinterpret_cast<PageMapNode*>(&end); }
    // libc++'s __find_equal: the link where the key is or would go, and its parent.
    __attribute__((always_inline)) PageMapNode*& FindEqual(PageMapNode*& parent, uint32_t key) {
        PageMapNode* node = End()->left;
        PageMapNode** link = &End()->left;
        if (node) {
            for (;;) {
                if (key < node->key) {
                    if (node->left) {
                        link = &node->left;
                        node = node->left;
                    } else {
                        parent = node;
                        return parent->left;
                    }
                } else if (node->key < key) {
                    if (node->right) {
                        link = &node->right;
                        node = node->right;
                    } else {
                        parent = node;
                        return node->right;
                    }
                } else {
                    parent = node;
                    return *link;
                }
            }
        }
        parent = End();
        return parent->left;
    }
    // libc++'s __insert_node_at.
    __attribute__((always_inline)) void InsertNodeAt(PageMapNode* parent, PageMapNode*& child, PageMapNode* node) {
        node->left = nullptr;
        node->right = nullptr;
        node->parent = parent;
        child = node;
        if (begin->left) begin = begin->left;
        BalanceAfterInsert(End()->left, child);
        ++size;
    }
    // libc++'s operator[]: finds the key or inserts it with a null table.
    __attribute__((always_inline)) uint8_t*& operator[](uint32_t key) {
        PageMapNode* parent;
        PageMapNode*& child = FindEqual(parent, key);
        PageMapNode* found = child;
        if (!child) {
            PageMapNode* node = static_cast<PageMapNode*>(::operator new(sizeof(PageMapNode)));
            node->key = key;
            node->pages = nullptr;
            InsertNodeAt(parent, child, node);
            found = node;
        }
        return found->pages;
    }
};
struct MemManagerPages {
    char padding_0[0x340];
    PageMap pages;                     // +0x340
    char padding_358[0x414];
    uint8_t defaultIndex;              // +0x76c
};

// 0xa82b30: the index of the allocator that owns an address (the default one for an unknown page).
// Not yet matched: when the tree is empty the original still tests the end node's child before inserting (and keeps
// the find's two results in other registers); here clang threads that test away.
uint8_t MemManager::IndexOf(const void* block) {
    MemManagerPages* self = reinterpret_cast<MemManagerPages*>(this);
    uintptr_t address = reinterpret_cast<uintptr_t>(block);
    uint8_t* table = self->pages[uint32_t(address >> 32) & 0xffff];
    if (table) {
        uint8_t index = table[(address >> 16) & 0xffff];
        if (index != 0xff) return index & 0x7f;
    }
    return self->defaultIndex;
}

// The word at 0x1926bd0, read or written through one function (0xa81230); what it holds isn't known yet.
extern uint32_t Setting1926bd0;
void ExchangeSetting(bool read, uint32_t* value) {   // 0xa81230
    uint32_t* to = read ? value : &Setting1926bd0;
    *to = read ? Setting1926bd0 : *value;
}

}  // namespace Gear
