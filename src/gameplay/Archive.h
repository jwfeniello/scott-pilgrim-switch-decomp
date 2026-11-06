// Onyx serialization as the characters' slot 4 uses it (see
// docs/GAME_CLASSES.md): an archive holds a position and a stream, and each
// field goes through the stream's slot 6, which returns the bytes moved.
// Names are provisional; src/SpawnerSerialize.h models the same pair.
#pragma once
#include <stdint.h>
#include "Level.h"
#include "OnyxEvents.h"
#include "OnyxFunction.h"
#include "Vector.h"

// Passed along with the archive (slot 4's second argument). The same type
// feeds AssignComponentSlot (src/ComponentSlotAssign.cpp), which fills
// component slots from it.
namespace ComponentSlot {
struct Source {
    void* owner;
    virtual ~Source();
    virtual void Read();                       // slot 2 (src/ComponentSlotAssign.cpp)
    virtual void Attach(SPTG::Holder* holder);   // slot 3
};
}
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

// Some components hand a handle they moved to the source (its slot 3), with
// NoHolder standing in for a missing one.
inline void AttachHandle(ComponentSlot::Source* source, ComponentHandle* handle) {
    source->Attach(handle ? reinterpret_cast<SPTG::Holder*>(handle) : &SPTG::NoHolder);
}

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

// An array filled once from its allocator (0x20 bytes): the elements run from
// begin to end. The last field is not known.
template<class T> struct Array {
    Allocator* allocator;
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
// The same with the resize expanded in place.
template<class T> __attribute__((always_inline)) inline void TransferVectorInPlace(Archive& archive, Vector<T>& vector) {
    uint32_t count;
    Transfer(archive, count);
    vector.SetCount(count);
    for (uint64_t i = 0; i < count; ++i) Transfer(archive, vector.data[i]);
}

}  // namespace onyx

namespace SPTG {

// SPTG::ProjectileSpawnInfo (vtable 0x186a108, 0x70 bytes): where a projectile spawner is to fire a projectile, which
// several bosses embed (HipsterChick's destructor resets the one at +0xdc8). Its serialization (0x8fd4c0) follows its
// destructors in the binary. The builders seen so far construct it with the spawner, the place, +0x20, the attack and +0x40,
// and the rest as below: the order of their stores (one pair of +0x48 and +0x4c, the zeros up to +0x3b in one run) is
// the one this member order gives.
struct Projectile;
template<class T> struct SpawnedCallbackParam;
struct ProjectileSpawnInfo {
    ProjectileSpawnInfo(uint32_t spawner, const onyx::Vector3& position, const onyx::Vector3& vector20, int32_t attackId,
                        uint8_t flag40)
        : id(-1), spawner(spawner), kind(3), position(position), vector20(vector20), value2c(0.0f), value30(0.0f),
          value34(0.0f), value38(0), attackId(attackId), flag40(flag40), value44(0), value48(0.0f), value4c(1.0f), value50(1),
          value58(0), flag68(0) {}
    virtual ~ProjectileSpawnInfo() {}
    int32_t id;                  // +0x8: -1 until the spawner numbers it
    uint32_t spawner;            // +0xc: the id of the spawner that is to fire it
    uint32_t kind;               // +0x10
    onyx::Vector3 position;      // +0x14
    onyx::Vector3 vector20;      // +0x20
    float value2c;               // +0x2c
    float value30;               // +0x30
    float value34;               // +0x34
    uint32_t value38;            // +0x38
    int32_t attackId;            // +0x3c: the id of the attack the shooter is making
    uint8_t flag40;              // +0x40
    int32_t value44;             // +0x44
    float value48;               // +0x48
    float value4c;               // +0x4c
    int32_t value50;             // +0x50
    uint64_t value58;            // +0x58
    onyx::Function<void(const SpawnedCallbackParam<Projectile>&)> spawned;   // +0x60
    uint8_t flag68;              // +0x68
    void Serialize(onyx::Archive& archive);   // 0x8fd4c0
};
static_assert(sizeof(ProjectileSpawnInfo) == 0x70, "ProjectileSpawnInfo size");
// A 0x50-byte member some bosses serialize with 0xc1f2b0: a count, then a
// vector of 4-byte pairs. Contents otherwise unknown.
struct IntPair { int32_t x, y; };
struct PairList {
    char data[0x38];
    uint64_t count;                 // +0x38
    IntPair* pairs;                 // +0x40
    char data_48[0x8];
    // 0xc1f0c0: given a move from `from` to `to`, fills `out` (zero unless the list changes it) and `flag`.
    // The bosses' ArrivalPoint passes it a move and takes `out` as the point. Name and meaning not known yet.
    void Query(const onyx::Vector2* from, const onyx::Vector2* to, onyx::Vector2* out, int32_t* flag);
    void Serialize(onyx::Archive& archive);   // 0xc1f2b0
    // The pairs' average (zero for none). GigaGideon's ArrivalPoint uses only x, but the original still works out y.
    IntPair Average() const {
        if (!count) return IntPair{0, 0};
        int32_t x = 0, y = 0;
        for (uint32_t i = 0; i < count; ++i) {
            x += pairs[i].x;
            y += pairs[i].y;
        }
        return IntPair{x / static_cast<int32_t>(count), y / static_cast<int32_t>(count)};
    }
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
// A third form reads each entry through a function of its own (one per event
// type; ReadEventEntry's key names it), in a loop over the count.
typedef void (*EventEntryReader)(DecodeReader* reader, void* descriptors, DecodeHost* host);
template<unsigned Key> void ReadEventEntry(DecodeReader* reader, void* descriptors, DecodeHost* host);
__attribute__((always_inline)) inline void ReadEventEntries(onyx::Archive& archive, ComponentSlot::Source* source, EventSlot& slot, void* component, EventEntryReader read) {
    slot.target = static_cast<onyx::EventTarget*>(component);
    DecodeReader* reader = reinterpret_cast<DecodeReader*>(&archive);
    uint32_t count;
    reader->Read(&count, 4);
    for (uint32_t i = 0; i < count; ++i) read(reader, source, reinterpret_cast<DecodeHost*>(&slot));
}
}  // namespace SPTG
