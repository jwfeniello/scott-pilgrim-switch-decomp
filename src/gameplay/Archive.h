// Onyx serialization as the characters' slot 4 uses it (see
// docs/GAME_CLASSES.md): an archive holds a position and a stream, and each
// field goes through the stream's slot 6, which returns the bytes moved.
// Names are provisional; src/SpawnerSerialize.h models the same pair.
#pragma once
#include <stdint.h>
#include "OnyxEvents.h"
#include "Vector.h"

// Passed along with the archive (slot 4's second argument). The same type
// feeds AssignComponentSlot (src/ComponentSlotAssign.cpp), which fills
// component slots from it.
namespace ComponentSlot { struct Source; }
template<unsigned Key, uint32_t Hash> void AssignComponentSlot(void* self, ComponentSlot::Source* source);
// The callback-list readers (src/DeserializeCallbacks.h). A serializer passes
// the archive as the reader, the source as the descriptors and the list as the
// host.
#include "../DeserializeCallbacks.h"

namespace onyx {

struct ComponentHandle;

struct Stream {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2();
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual uint32_t Transfer(void* data, uint32_t size);   // slot 6
};

struct Archive {
    uint64_t position;
    Stream* stream;
};

// Moves one field through the archive.
template<class T> inline void Transfer(Archive& archive, T& value) {
    archive.position += archive.stream->Transfer(&value, sizeof(T));
}

// Moves a field through a copy of type S, as the slot-4 functions do for some
// 4-byte fields. Inlined, each call's copy gets its own stack slot, the later
// call's below the earlier one's, which is how the original lays them out.
template<class S, class T> inline void TransferAs(Archive& archive, T& field) {
    S value = field;
    Transfer(archive, value);
    field = value;
}

// Moves a reference to an object: a flag, then the object's id, resolved
// through a registry when loading (0x997120 for the references seen).
template<class T> void TransferReference(Archive& archive, T*& object);

// Moves a component handle (0x67dd00).
void TransferHandle(ComponentHandle*& handle, Archive& archive, ComponentSlot::Source* source);

// Moves a 4-byte id that has its own encoding (0x8012a0).
void TransferId(uint32_t& id, Archive& archive);

// A vector of points moves through a function of its own (0x884c60), which
// returns the archive.
Archive& TransferPoints(Archive& archive, Vector<Vector3>& points);

// A reference-counted string (0x10 bytes; the shared buffer is at +0x8). It
// moves through 0x683650, which returns the archive, and consecutive strings
// chain on it.
struct StringBuffer;
struct String {
    void* unknown0;
    StringBuffer* buffer;   // +0x8
};
Archive& TransferString(Archive& archive, String& string);
inline Archive& operator<<(Archive& archive, String& string) { return TransferString(archive, string); }

// An allocator as arrays keep it (its slot 2 allocates).
struct ArrayAllocator {
    virtual void Slot0();
    virtual void Slot1();
    virtual void* Allocate(uint32_t size);
};
// An array filled once from its allocator (0x20 bytes): the elements run from
// begin to end. The last field is not known.
template<class T> struct Array {
    ArrayAllocator* allocator;
    T* begin;
    T* end;
    void* unknown18;
    // Allocates `count` cleared elements (none for a zero count).
    __attribute__((always_inline)) void Fill(uint32_t count) {
        if (!count) return;
        T* elements = static_cast<T*>(allocator->Allocate(count * uint32_t(sizeof(T))));
        begin = elements;
        __builtin_memset(elements, 0, count * sizeof(T));
        // The original adds the size to the address as integers.
        end = reinterpret_cast<T*>(count * sizeof(T) + reinterpret_cast<uint64_t>(elements));
    }
};
// An array goes as its count, through a local, then is filled and each
// element moved.
template<class T> inline void TransferArray(Archive& archive, Array<T>& array) {
    uint32_t count;
    Transfer(archive, count);
    array.Fill(count);
    for (uint64_t i = 0; i < count; ++i) Transfer(archive, array.begin[i]);
}

// A vector goes as its count, through a local, and then each element.
template<class T> inline void TransferVector(Archive& archive, Vector<T>& vector) {
    uint32_t count;
    Transfer(archive, count);
    vector.Resize(count);
    for (uint64_t i = 0; i < count; ++i) Transfer(archive, vector.data[i]);
}

}  // namespace onyx

namespace SPTG {

// SPTG::ProjectileSpawnInfo (vtable 0x186a108, 0x70 bytes), which several
// bosses embed (HipsterChick's destructor resets the one at +0xdc8). Its
// serialization (0x8fd4c0) follows its destructors in the binary.
struct ProjectileSpawnInfo {
    virtual ~ProjectileSpawnInfo();
    char data_8[0x68];
    void Serialize(onyx::Archive& archive);   // 0x8fd4c0
};
static_assert(sizeof(ProjectileSpawnInfo) == 0x70, "ProjectileSpawnInfo size");
// A 0x50-byte member some bosses serialize with 0xc1f2b0: a count, then a
// vector of 4-byte pairs. Contents otherwise unknown.
struct PairList {
    char data[0x50];
    void Serialize(onyx::Archive& archive);   // 0xc1f2b0
};
// A 0x28-byte list of component references, restored by 0x682f80 (which many
// components share): a count, then each reference's key pair, resolved
// through the source. Contents otherwise unknown.
struct ReferenceList {
    char data[0x28];
    void Serialize(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x682f80
};
// An event a component sends (0x18 bytes, see OnyxEvents.h): its callback and
// target, and a flag raised as the callback is read. Slot 4 makes the component
// the target, then restores the callback through one of the
// DeserializeCallbacks instances, which see the slot as their host.
struct EventSlot {
    onyx::EventCallback* callback;
    onyx::EventTarget* target;   // +0x8
    bool changed;                // +0x10
};
template<unsigned Key, uint32_t Hash>
inline void TransferEventSlot(onyx::Archive& archive, ComponentSlot::Source* source, EventSlot& slot, void* component) {
    slot.target = static_cast<onyx::EventTarget*>(component);
    DeserializeCallbacks<Key, Hash>(reinterpret_cast<DecodeReader*>(&archive), source, reinterpret_cast<DecodeHost*>(&slot));
}
// The same read with the loop expanded in place, as some serializers have it.
// Key names the expansion's bindings, and the host type gives each expansion
// handlers of its own.
template<unsigned Key> struct KeyedDecodeHost : DecodeHost {
    void Typed(const DecodeEvent& event);
    void Generic(const DecodeEvent& event);
};
template<unsigned Key, uint32_t Hash>
__attribute__((always_inline)) inline void ReadEventSlot(onyx::Archive& archive, ComponentSlot::Source* source, EventSlot& slot, void* component) {
    slot.target = static_cast<onyx::EventTarget*>(component);
    DecodeReader* reader = reinterpret_cast<DecodeReader*>(&archive);
    uint32_t count;
    reader->Read(&count, 4);
    DecodeLoop<Key, Hash>(reader, source, reinterpret_cast<KeyedDecodeHost<Key>*>(&slot), count);
}
}  // namespace SPTG
