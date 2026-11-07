// Dare::SynchronizedRepository (RTTI names): the destructor its instantiations share. The member names are
// provisional, and the value types below stand in for the real ones by size only.
#include "DareCore.h"

namespace nn { namespace os {
struct MutexType;
void LockMutex(MutexType* mutex) noexcept;
void UnlockMutex(MutexType* mutex) noexcept;
void FinalizeMutex(MutexType* mutex) noexcept;
} }  // namespace nn::os

template<class A, class B, class C = void, class D = void, class E = void> struct Tuple {
    A first;
    B second;
};

// The map a repository keeps its values in: an array of values with its capacity in front.
template<class K, class V> struct DareFastMap {
    uint32_t capacity;
    V* begin;          // +0x8
    V* end;            // +0x10
    K key;             // +0x18 (its size moves the count)
    uint64_t count;
    void Clear() {
        while (end > begin) {
            --end;
            end->~V();
        }
        count = 0;
    }
    ~DareFastMap() {
        if (capacity) {
            Clear();
            DareFree(begin);
            capacity = 0;
            begin = end = nullptr;
        }
    }
};

// The part at +0x4 of SNDObjectHandlePriv; its destructor (0xd29920) is in DareHandles.cpp.
struct SNDObjectHandleState {
    char data[0x18];
    ~SNDObjectHandleState();
};
struct SNDObjectHandlePriv {
    uint32_t value0;
    SNDObjectHandleState state;   // +0x4
};

namespace Dare {

// Size-only stand-ins for the value types.
struct SoundRequest { char data[0x1c]; };
struct GameObjectData { char data[0x20]; };
struct VolumeLineData { char data[0x10]; };
struct MTTChannelData { char data[0x48]; };
struct ClientBuffer { char data[0x18]; };
struct QueuedBuffer { char data[0x10]; };
struct MicData { char data[0x14]; };
struct ObjectTypeData { char data[0x1c]; };
// Size-only stand-in, but for the block at +0x10 it frees.
struct PackageHandleData {
    char padding_0[0x10];
    void* data;   // +0x10
    char padding_18[0x10];
    ~PackageHandleData() {
        if (data) {
            DareFree(data);
            data = nullptr;
        }
    }
};

struct RepositoryMutex {
    nn::os::MutexType* mutex;
    ~RepositoryMutex() { nn::os::FinalizeMutex(mutex); }
};

template<class K, class V, template<class, class> class Map, int N> struct SynchronizedRepository {
    virtual ~SynchronizedRepository();
    virtual void Clear();    // slot 2
    RepositoryMutex mutex;   // +0x8
    char padding_10[0x28];
    Map<K, V> values;        // +0x38
};

// Slot 0: empties the values under the lock before they and the mutex go.
template<class K, class V, template<class, class> class Map, int N>
SynchronizedRepository<K, V, Map, N>::~SynchronizedRepository() {
    nn::os::LockMutex(mutex.mutex);
    values.Clear();
    nn::os::UnlockMutex(mutex.mutex);
}

// Slot 2: empties the values under the lock. Not matched yet (PackageHandleData's, 0xd467d0): the original calls the
// unlock without a tail call, which a guard whose unlock may throw gives, at the cost of a second terminate pad.
template<class K, class V, template<class, class> class Map, int N> void SynchronizedRepository<K, V, Map, N>::Clear() {
    nn::os::LockMutex(mutex.mutex);
    values.Clear();
    nn::os::UnlockMutex(mutex.mutex);
}

template struct SynchronizedRepository<unsigned char*, SoundRequest, DareFastMap, 1>;           // 0xd29800
template struct SynchronizedRepository<Tuple<void*, void*>, GameObjectData, DareFastMap, 1>;    // 0xd29680
template struct SynchronizedRepository<void*, VolumeLineData, DareFastMap, 1>;                  // 0xd295c0
template struct SynchronizedRepository<unsigned int, MTTChannelData, DareFastMap, 1>;           // 0xd29430
template struct SynchronizedRepository<unsigned int, SNDObjectHandlePriv, DareFastMap, 1>;      // 0xd294f0
template struct SynchronizedRepository<void*, ClientBuffer, DareFastMap, 0>;                    // 0xd29370
template struct SynchronizedRepository<void*, QueuedBuffer, DareFastMap, 0>;                    // 0xd292b0
template struct SynchronizedRepository<void*, MicData, DareFastMap, 1>;                         // 0xd2b990
template struct SynchronizedRepository<void*, ObjectTypeData, DareFastMap, 1>;                  // 0xd29740
template struct SynchronizedRepository<void*, PackageHandleData, DareFastMap, 1>;               // Clear at 0xd467d0

}  // namespace Dare
