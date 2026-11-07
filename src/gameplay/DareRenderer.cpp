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

// Dare::Private::Renderer (RTTI name), RendererEE's base.
struct Renderer {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9();
    virtual void Slot10(); virtual void Slot11(); virtual void Slot12(); virtual void Slot13(); virtual void Slot14();
    virtual void Slot15(); virtual void Slot16(); virtual void Slot17(); virtual void Slot18(); virtual void Slot19();
    virtual void Slot20(); virtual void Slot21(); virtual void Slot22(); virtual void Slot23(); virtual void Slot24();
    virtual void Slot25();
    virtual int32_t Slot26();                // slot 26
    virtual void Slot27(); virtual void Slot28(); virtual void Slot29(); virtual void Slot30(); virtual void Slot31();
    virtual void Slot32(); virtual void Slot33(); virtual void Slot34(); virtual void Slot35(); virtual void Slot36();
    virtual void Slot37(); virtual void Slot38(); virtual void Slot39(); virtual void Slot40();
    virtual int32_t Reset();                 // slot 41
    int32_t Setup();                         // 0xda7d70
    char padding_8[0x390];
    int32_t value398;                        // +0x398
    char padding_39c[0x1ec];
    uint64_t value588;                       // +0x588
    char padding_590[0x4];
    int32_t value594, value598, value59c, value5a0, value5a4, value5a8;   // +0x594
    char padding_5ac[0x4];
    int32_t value5b0, value5b4;              // +0x5b0
};

// Slot 41 (0xdae900): runs 0xda7d70, puts back the defaults at +0x588..+0x5b4, and on success stores slot 26's answer
// at +0x398. Not matched yet: the original stores +0x5a4/+0x5a8 as one vector loaded from a constant, where this
// stores one 64-bit immediate.
int32_t Renderer::Reset() {
    int32_t result = Setup();
    value5b0 = 4;
    value5b4 = 4;
    value594 = 64;
    value598 = 0x3ffffff;
    value59c = 248;
    value5a0 = 0;
    value588 = 0;
    value5a4 = 0;
    value5a8 = 38;
    if (result >= 0) value398 = Slot26();
    return result;
}

}  // namespace Private
}  // namespace Dare
