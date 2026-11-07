// Gear::Path: a parsed file path.
#include "GearCore.h"

namespace Gear {

Path::~Path() {}

// Slot 2 (0xaa1220): a copy, from the default allocator. The copy is made new and then assigned (the original keeps
// the constructor's stores and has no cleanup), not copy-constructed.
// Not yet matched: the original stores the second name's new buffer separately on its null and non-null paths, each
// with its own test of the old buffer; here the two stores merge into one.
Path* Path::Clone() const {
    Path* copy = new (Allocate(DefaultAllocator, sizeof(Path))) Path;
    *copy = *this;
    return copy;
}

// Slot 6 (0xaa1420): sets the first name.
// Not yet matched: the inlined length loop is laid out differently (the original keeps the byte pointer and its
// successor in two registers, and the word loop's byte tests run from word + 3).
void Path::SetName20(const char* name) {
    if (name) name20.Assign(name, StringLength(name));
    stamp = 0x80000000;
}

}  // namespace Gear
