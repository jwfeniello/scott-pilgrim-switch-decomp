// SndGear::BasicObjectPool and its Dare subclass: a fixed-size object pool that
// carves blocks from the Dare allocator. Each slot is a 32-bit index followed by
// the object; free objects are threaded through their storage. Blocks with free
// slots sit at the front of a list, full ones at the back, and one empty block
// may be kept as a spare.
//
// Class names, template arguments and namespaces come from the game's RTTI.
// Member names and the pooled types' contents are provisional: those types are
// views giving each one's size (from the pool's Init) and how its destructor is
// reached (from Free). Init, Clear and Allocate are not matched yet.
#include <stdint.h>

struct DareAllocator {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual void Free(void* pointer);
};
extern "C" DareAllocator* Dare_Allocator;
extern "C" uint32_t Dare_AllocatorEnabled;
__attribute__((always_inline)) inline void DareFree(void* pointer) { if (Dare_AllocatorEnabled) { if (DareAllocator* a = Dare_Allocator) a->Free(pointer); } }

struct DareGearContainerInterface;

namespace SndGear {

struct NulLock;

struct BlockNode { BlockNode* next; BlockNode* prev; };
struct PoolBlock : BlockNode {
    void* freeList;      // +0x10
    uint32_t freeCount;  // +0x18
};
// The list's ends are typed as blocks and its links as nodes; the original keeps
// the two paths that update a link and an end separate, which needs the casts.
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
};

template<class T, class Container, class Lock> class BasicObjectPool {
public:
    // The deleting destructors contain this body inlined.
    __attribute__((always_inline)) virtual ~BasicObjectPool() {
        BlockNode* node = blocks.first;
        PoolBlock* head = blocks.first;
        while (head) {
            PoolBlock* current = static_cast<PoolBlock*>(node);
            node = node->next;
            freeCount -= perBlock;
            --blockCount;
            // Compares with the value the loop condition read.
            if (current->prev) current->prev->next = node;
            else if (head == current) blocks.first = static_cast<PoolBlock*>(node);
            if (current->next) current->next->prev = current->prev;
            else if (blocks.last == current) blocks.last = static_cast<PoolBlock*>(current->prev);
            current->next = nullptr;
            current->prev = nullptr;
            DareFree(current);
            head = blocks.first;
        }
        if (spare) {
            DareFree(spare);
            spare = nullptr;
        }
    }
    virtual bool Init(uint32_t perBlock, uint32_t capacity, uint32_t extra, float growth);
    virtual void Free(void* object) { Free(object, true); }
    virtual void Free(void* object, bool destroy);
    virtual void Clear(bool reset);
    virtual void Allocate(void** out);

private:
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

template<class T, class Container, class Lock> void BasicObjectPool<T, Container, Lock>::Free(void* object, bool destroy) {
    uint32_t index = *reinterpret_cast<uint32_t*>(static_cast<char*>(object) - 4);
    PoolBlock* block = reinterpret_cast<PoolBlock*>(static_cast<char*>(object) - 4 - (stride + static_cast<uint64_t>(padding) + 4) * index - headerSize - 32);
    if (destroy) static_cast<T*>(object)->~T();
    *static_cast<void**>(object) = block->freeList;
    block->freeList = object;
    ++block->freeCount;
    if (blocks.first != block) {
        blocks.Remove(block);
        blocks.PushFront(block);
    }
    if (spare && block->freeCount > threshold) {
        DareFree(spare);
        spare = nullptr;
    }
    if (block->freeCount == perBlock) {
        if (spare) {
            freeCount -= block->freeCount;
            --blockCount;
            blocks.Remove(block);
            DareFree(block);
        } else {
            spare = block;
            blocks.Remove(block);
            PoolBlock* cleared = spare;
            cleared->next = nullptr;
            cleared->prev = nullptr;
            freeCount -= perBlock;
            --blockCount;
        }
    }
    ++freeCount;
}

}  // namespace SndGear

template<class T, class Lock> class BasicDarePool : public SndGear::BasicObjectPool<T, DareGearContainerInterface, Lock> {};

// The pooled types. A destructor at virtual slot 15 needs fifteen slots before it.
#define FIFTEEN_SLOTS \
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); \
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9(); \
    virtual void Slot10(); virtual void Slot11(); virtual void Slot12(); virtual void Slot13(); virtual void Slot14();
namespace Dare { namespace Private {
struct ManagerHardwareVoice;
struct ManagerToolVoice;
struct ManagerThemeVoice;
template<class V> struct ManagerVoiceSize;
template<> struct ManagerVoiceSize<ManagerHardwareVoice> { static const unsigned value = 0x98; };
template<> struct ManagerVoiceSize<ManagerToolVoice> { static const unsigned value = 0xd0; };
template<> struct ManagerVoiceSize<ManagerThemeVoice> { static const unsigned value = 0xe0; };
template<class V> struct ManagerVoiceForVirtualPlayer {
    FIFTEEN_SLOTS
    virtual ~ManagerVoiceForVirtualPlayer();   // slot 15
    char storage[ManagerVoiceSize<V>::value - 8];
};
struct EESourceVoiceSW { ~EESourceVoiceSW(); char storage[0xf8]; };   // called directly
struct Voice {
    virtual void Slot0();
    virtual ~Voice();                          // slot 1
    char storage[0x48];
};
}}
struct CVirtualPlayerVoice { char storage[0x20]; };                    // no destructor call
struct CBlockMemory { virtual ~CBlockMemory(); char storage[0x18]; };  // slot 0
struct CDataBlockMemory { virtual ~CDataBlockMemory(); char storage[0x20]; };   // slot 0

using Dare::Private::ManagerVoiceForVirtualPlayer;
using Dare::Private::ManagerHardwareVoice;
using Dare::Private::ManagerToolVoice;
using Dare::Private::ManagerThemeVoice;
template class SndGear::BasicObjectPool<ManagerVoiceForVirtualPlayer<ManagerHardwareVoice>, DareGearContainerInterface, SndGear::NulLock>;
template class SndGear::BasicObjectPool<ManagerVoiceForVirtualPlayer<ManagerToolVoice>, DareGearContainerInterface, SndGear::NulLock>;
template class SndGear::BasicObjectPool<ManagerVoiceForVirtualPlayer<ManagerThemeVoice>, DareGearContainerInterface, SndGear::NulLock>;
template class SndGear::BasicObjectPool<CVirtualPlayerVoice, DareGearContainerInterface, SndGear::NulLock>;
template class SndGear::BasicObjectPool<CBlockMemory, DareGearContainerInterface, SndGear::NulLock>;
template class SndGear::BasicObjectPool<CDataBlockMemory, DareGearContainerInterface, SndGear::NulLock>;
template class SndGear::BasicObjectPool<Dare::Private::EESourceVoiceSW, DareGearContainerInterface, SndGear::NulLock>;
template class SndGear::BasicObjectPool<Dare::Private::Voice, DareGearContainerInterface, SndGear::NulLock>;
template class BasicDarePool<ManagerVoiceForVirtualPlayer<ManagerHardwareVoice>, SndGear::NulLock>;
template class BasicDarePool<ManagerVoiceForVirtualPlayer<ManagerToolVoice>, SndGear::NulLock>;
template class BasicDarePool<ManagerVoiceForVirtualPlayer<ManagerThemeVoice>, SndGear::NulLock>;
template class BasicDarePool<CVirtualPlayerVoice, SndGear::NulLock>;
