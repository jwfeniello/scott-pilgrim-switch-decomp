// Onyx serialization as the characters' slot 4 uses it (see
// docs/GAME_CLASSES.md): an archive holds a position and a stream, and each
// field goes through the stream's slot 6, which returns the bytes moved.
// Names are provisional; src/SpawnerSerialize.h models the same pair.
#pragma once
#include <stdint.h>

namespace onyx {

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

}  // namespace onyx
