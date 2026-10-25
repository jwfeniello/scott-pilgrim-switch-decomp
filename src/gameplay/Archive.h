// Onyx serialization as the characters' slot 4 uses it (see
// docs/GAME_CLASSES.md): an archive holds a position and a stream, and each
// field goes through the stream's slot 6, which returns the bytes moved.
// Names are provisional; src/SpawnerSerialize.h models the same pair.
#pragma once
#include <stdint.h>

// Passed along with the archive (slot 4's second argument). The same type
// feeds AssignComponentSlot (src/ComponentSlotAssign.cpp), which fills
// component slots from it.
namespace ComponentSlot { struct Source; }
template<unsigned Key, uint32_t Hash> void AssignComponentSlot(void* self, ComponentSlot::Source* source);

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

}  // namespace onyx
