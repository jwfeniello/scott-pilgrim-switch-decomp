// Dare::Private::RendererEE (RTTI name), the renderer for the EE platform layer: the list accessors at slots 64-68.
#include "DareCore.h"

namespace Dare {
namespace Private {

// What the accessors point into: each returns an address inside an entry (a base or member at that offset; which one
// is unknown), or null.
struct RendererPart { void* value; };
struct RendererEntry {
    char padding_0[0x28];
    RendererPart part28;   // +0x28
    RendererPart part30;   // +0x30
    RendererPart part38;   // +0x38
    RendererPart part40;   // +0x40
    RendererPart part48;   // +0x48
};
// A list the renderer is handed: its entries are a DareArray at +0x28.
struct RendererList {
    char padding_0[0x28];
    DareArray<RendererEntry*> entries;   // +0x28
};

struct RendererEE {
    // Entry `index` of the list, or null past its end.
    static RendererEntry* At(RendererList* list, uint32_t index) { return index < list->entries.size ? list->entries.data[index] : nullptr; }
    RendererPart* Slot64(RendererList* list, uint32_t index);
    RendererPart* Slot65(RendererList* list, uint32_t index);
    RendererPart* Slot66(RendererList* list, uint32_t index);
    RendererPart* Slot67(RendererList* list, uint32_t index);
    RendererPart* Slot68(RendererList* list, uint32_t index);
};

RendererPart* RendererEE::Slot64(RendererList* list, uint32_t index) {   // 0xdafa00
    RendererEntry* entry = At(list, index);
    return entry ? &entry->part30 : nullptr;
}
RendererPart* RendererEE::Slot65(RendererList* list, uint32_t index) {   // 0xdafa30
    RendererEntry* entry = At(list, index);
    return entry ? &entry->part38 : nullptr;
}
RendererPart* RendererEE::Slot66(RendererList* list, uint32_t index) {   // 0xdafa60
    RendererEntry* entry = At(list, index);
    return entry ? &entry->part40 : nullptr;
}
RendererPart* RendererEE::Slot67(RendererList* list, uint32_t index) {   // 0xdafa90
    RendererEntry* entry = At(list, index);
    return entry ? &entry->part28 : nullptr;
}
RendererPart* RendererEE::Slot68(RendererList* list, uint32_t index) {   // 0xdafac0
    RendererEntry* entry = At(list, index);
    return entry ? &entry->part48 : nullptr;
}

}  // namespace Private
}  // namespace Dare
