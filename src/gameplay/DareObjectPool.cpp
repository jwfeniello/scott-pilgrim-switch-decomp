// SndGear::BasicObjectPool's Init, Clear and Allocate (slots 2, 5 and 6) for the pools Dare keeps. The class, its
// destructors and Free are matched in src/SndGearObjectPool.cpp (another build); this is the same view of the class.
// Class names and template arguments come from the RTTI; member names are provisional, and the pooled types are views
// giving only each one's size (from the 0x98-style constant Init adds to the extra bytes). The build uses
// src/SndGearObjectPool.cpp's flags (no strict aliasing), which Clear's reloads need.
// Not yet matched: Init and Allocate build each new block's free list with other induction variables than the original
// (it walks one object pointer, adding the stride and padding separately); Clear differs only in which callee-saved
// registers hold the walk.
#include <stddef.h>
#include <stdint.h>

// The Dare allocator as src/SndGearObjectPool.cpp declares it (its flag not volatile).
struct DareAllocator {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual void Free(void* pointer);
};
extern "C" DareAllocator* Dare_Allocator;
extern "C" uint32_t Dare_AllocatorEnabled;
__attribute__((always_inline)) inline void DareFree(void* pointer) { if (Dare_AllocatorEnabled) { if (DareAllocator* a = Dare_Allocator) a->Free(pointer); } }

void* DareAllocate(size_t size, uint32_t alignment);   // 0x722190

struct DareGearContainerInterface;

namespace SndGear {

struct NulLock;

struct BlockNode { BlockNode* next; BlockNode* prev; };
struct PoolBlock : BlockNode {
    void* freeList;      // +0x10
    uint32_t freeCount;  // +0x18
};
// The list's ends are typed as blocks and its links as nodes, as in src/SndGearObjectPool.cpp.
struct BlockList {
    PoolBlock* first;    // +0x10
    PoolBlock* last;     // +0x18
    void Remove(PoolBlock* block) {
        if (block->prev) block->prev->next = block->next;
        else if (first == block) first = static_cast<PoolBlock*>(block->next);
        if (block->next) block->next->prev = block->prev;
        else if (last == block) last = static_cast<PoolBlock*>(block->prev);
        block->next = nullptr;
        block->prev = nullptr;
    }
    void PushFront(PoolBlock* block) {
        BlockNode** link = reinterpret_cast<BlockNode**>(&first);
        PoolBlock* head = first;
        if (head) {
            block->next = head;
            block->prev = head->prev;
            head->prev = block;
            if (block->prev) link = &block->prev->next;
        } else {
            last = block;
        }
        *link = block;
    }
    void PushBack(PoolBlock* block) {
        BlockNode** link = reinterpret_cast<BlockNode**>(&last);
        PoolBlock* tail = last;
        if (tail) {
            block->prev = tail;
            block->next = tail->next;
            tail->next = block;
            if (block->next) link = &block->next->prev;
        } else {
            first = block;
        }
        *link = block;
    }
};

template<class T, class Container, class Lock> class BasicObjectPool {
public:
    virtual ~BasicObjectPool();
    virtual bool Init(uint32_t perBlock, uint32_t capacity, uint32_t extra, float growth);
    virtual void Free(void* object);
    virtual void Free(void* object, bool destroy);
    virtual void Clear(bool reset);
    virtual void Allocate(void** out);

private:
    // A new block with every slot on its free list (each slot is a 32-bit index, then the object).
    PoolBlock* NewBlock() {
        PoolBlock* block = static_cast<PoolBlock*>(DareAllocate((stride + padding + 4) * perBlock + headerSize + 32, 0));
        if (!block) return nullptr;
        block->next = nullptr;
        block->prev = nullptr;
        block->freeList = nullptr;
        uint32_t count = perBlock;
        block->freeCount = count;
        char* slot = reinterpret_cast<char*>(block) + headerSize + 32;
        uint32_t size = stride;
        uint32_t pad = padding;
        void* head = nullptr;
        for (uint32_t i = 0; i < count; ++i) {
            *reinterpret_cast<uint32_t*>(slot) = i;
            *reinterpret_cast<void**>(slot + 4) = head;
            head = slot + 4;
            block->freeList = head;
            slot += size + static_cast<uint64_t>(pad) + 4;
        }
        return block;
    }

    void* unknown8;
    BlockList blocks;       // +0x10
    PoolBlock* spare;       // +0x20
    uint32_t unknown28;
    uint32_t perBlock;      // +0x2c
    uint32_t maxBlocks;     // +0x30
    uint32_t stride;        // +0x34
    uint32_t blockCount;    // +0x38
    uint32_t freeCount;     // +0x3c
    uint32_t threshold;     // +0x40
    uint32_t unknown44;
    uint32_t headerSize;    // +0x48
    uint32_t padding;       // +0x4c
};

// Slot 2: sizes the pool for `capacity` objects of `extra` more bytes each, `perBlock` to a block, and makes
// `growth` of its blocks now.
template<class T, class Container, class Lock>
bool BasicObjectPool<T, Container, Lock>::Init(uint32_t perBlock, uint32_t capacity, uint32_t extra, float growth) {
    stride = extra + sizeof(T);
    headerSize = 4;
    padding = (extra + 4) % 8 ? 8 - (extra + 4) % 8 : 0;
    blockCount = 0;
    freeCount = 0;
    spare = nullptr;
    uint32_t quotient = capacity / perBlock;
    uint64_t blocksNeeded = quotient;
    if (quotient * perBlock != capacity) ++blocksNeeded;
    uint64_t wanted = blocksNeeded * perBlock;
    uint32_t total = wanted < 0xffffffffu ? static_cast<uint32_t>(wanted) : 0xffffffffu;
    uint32_t count = total / perBlock;
    maxBlocks = count ? count : 1;
    this->perBlock = count < 2 ? total : perBlock;
    threshold = static_cast<uint32_t>(this->perBlock * 0.6);
    if (total == 0xffffffffu) return true;
    uint32_t initial = static_cast<int32_t>(__builtin_ceilf(maxBlocks * growth));
    for (uint32_t i = 0; i < initial; ++i) {
        if (PoolBlock* block = NewBlock()) {
            blocks.PushFront(block);
            freeCount += block->freeCount;
            ++blockCount;
        }
    }
    return true;
}

// Slot 5: frees every block and the spare; `reset` refills each block's count first and zeroes the pool's.
template<class T, class Container, class Lock> void BasicObjectPool<T, Container, Lock>::Clear(bool reset) {
    if (reset) {
        BlockNode* node = blocks.first;
        PoolBlock* head = blocks.first;
        while (head) {
            PoolBlock* current = static_cast<PoolBlock*>(node);
            uint32_t count = perBlock;
            current->freeCount = count;
            node = node->next;
            freeCount -= count;
            --blockCount;
            if (current->prev) current->prev->next = node;
            else if (head == current) blocks.first = static_cast<PoolBlock*>(node);
            if (current->next) current->next->prev = current->prev;
            else if (blocks.last == current) blocks.last = static_cast<PoolBlock*>(current->prev);
            current->next = nullptr;
            current->prev = nullptr;
            DareFree(current);
            head = blocks.first;
        }
    } else {
        BlockNode* node = blocks.first;
        PoolBlock* head = blocks.first;
        while (head) {
            PoolBlock* current = static_cast<PoolBlock*>(node);
            node = node->next;
            freeCount -= perBlock;
            --blockCount;
            if (current->prev) current->prev->next = node;
            else if (head == current) blocks.first = static_cast<PoolBlock*>(node);
            if (current->next) current->next->prev = current->prev;
            else if (blocks.last == current) blocks.last = static_cast<PoolBlock*>(current->prev);
            current->next = nullptr;
            current->prev = nullptr;
            DareFree(current);
            head = blocks.first;
        }
    }
    if (spare) {
        DareFree(spare);
        spare = nullptr;
    }
    if (reset) freeCount = 0;
}

// Slot 6: hands out a free object (null when the pool is full), first adding the spare or a new block if none is free.
// A block left with nothing free goes to the back.
template<class T, class Container, class Lock> void BasicObjectPool<T, Container, Lock>::Allocate(void** out) {
    if (!freeCount) {
        if (blockCount >= maxBlocks) {
            *out = nullptr;
            return;
        }
        PoolBlock* block = spare;
        if (block) {
            blocks.PushFront(block);
            spare = nullptr;
        } else {
            block = NewBlock();
            if (!block) {
                *out = nullptr;
                return;
            }
            blocks.PushFront(block);
        }
        freeCount += block->freeCount;
        ++blockCount;
    }
    PoolBlock* block = blocks.first;
    void* object = block->freeList;
    block->freeList = *static_cast<void**>(object);
    if (--block->freeCount == 0) {
        blocks.Remove(block);
        blocks.PushBack(block);
    }
    --freeCount;
    *out = object;
}

}  // namespace SndGear

// The pooled types, by size only.
namespace Dare { namespace Private {
struct ManagerHardwareVoice;
struct ManagerToolVoice;
struct ManagerThemeVoice;
template<class V> struct ManagerVoiceSize;
template<> struct ManagerVoiceSize<ManagerHardwareVoice> { static const unsigned value = 0x98; };
template<> struct ManagerVoiceSize<ManagerToolVoice> { static const unsigned value = 0xd0; };
template<> struct ManagerVoiceSize<ManagerThemeVoice> { static const unsigned value = 0xe0; };
template<class V> struct ManagerVoiceForVirtualPlayer { char storage[ManagerVoiceSize<V>::value]; };
struct EESourceVoiceSW { char storage[0x100]; };
struct Voice { char storage[0x50]; };
}}
struct CVirtualPlayerVoice { char storage[0x20]; };
struct CBlockMemory { char storage[0x20]; };
struct CDataBlockMemory { char storage[0x28]; };

#define DARE_OBJECT_POOL(T) \
    template bool SndGear::BasicObjectPool<T, DareGearContainerInterface, SndGear::NulLock>::Init(uint32_t, uint32_t, uint32_t, float); \
    template void SndGear::BasicObjectPool<T, DareGearContainerInterface, SndGear::NulLock>::Clear(bool); \
    template void SndGear::BasicObjectPool<T, DareGearContainerInterface, SndGear::NulLock>::Allocate(void**);
DARE_OBJECT_POOL(Dare::Private::ManagerVoiceForVirtualPlayer<Dare::Private::ManagerHardwareVoice>)   // 0xcf4220, 0xcf46f0, 0xcf48c0
