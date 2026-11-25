// Fire's hardware-abstraction ("achw") device objects: 20achwBaseDeviceObject and its caches. Names provisional
// except the RTTI class names.
#include "FireCore.h"

// 0xf95960: releases a cached resource through the player's timer object (provisional name and meaning).
void AchwReleaseResource(FireTimer* timer, void* resource);

// Owner of an achwGradientCache chain (provisional): tail at +0x10.
struct AchwCacheOwner {
    char pad0[0x10];
    class achwGradientCache* tail;  // 0x10
};

// 17achwGradientCache, vtable 0x18e9bb0.
class achwGradientCache : public achwBaseDeviceObject {
public:
    ~achwGradientCache();  // slots 0/1: 0xec5300 / 0xec5310
    void Release(int how);  // slot 3: 0xec5330

    char pad2c[0x30 - 0x2c];
    AchwCacheOwner* owner;      // 0x30
    achwGradientCache* prev;    // 0x38
    achwGradientCache* next;    // 0x40
    void* resource;             // 0x48
    int resourceSize;           // 0x50 (provisional)
};

// 0xec5330 (achwGradientCache slot 3): releases the cached resource and leaves the owner's chain.
void achwGradientCache::Release(int how) {
    if (resource) {
        FirePlayerCore* core = context->entries[0]->source->Player()->core;
        void* r = resource;
        AchwReleaseResource(core->timer, r);
    }
    resource = 0;
    resourceSize = 0;
    if (next) next->prev = prev;
    else if (owner) owner->tail = prev;
    if (prev) prev->next = next;
    prev = 0;
    next = 0;
}

// Node of an achwShapeOES's object list (provisional).
struct AchwShapeNode {
    char pad0[0x18];
    achwBaseDeviceObject* object;  // 0x18
};

// 12achwShapeOES, vtable 0x18ea980.
class achwShapeOES : public achwBaseDeviceObject {
public:
    ~achwShapeOES();  // slots 0/1: 0xf93a50 / 0xf93b70
    void Release(int how);

    char pad2c[0x38 - 0x2c];
    AchwShapeNode* nodes;    // 0x38
    char pad40[0x48 - 0x40];
    AchwShapeNode* cursor;   // 0x48
    char pad50[0x58 - 0x50];
    void* buffer58;          // 0x58 (provisional)
};

// 0xf93a50 (achwShapeOES slot 0): removes every listed object from the manager, then frees the buffer. The deleting
// destructor (slot 1, 0xf93b70) inlines this body; always_inline stands in for that inlining (its only support is that
// it matches).
__attribute__((always_inline)) achwShapeOES::~achwShapeOES() {
    for (cursor = nodes; cursor; cursor = nodes) context->Remove(cursor->object);
    if (buffer58) FireFree(buffer58);
}

// 0xebf9b0: releases a stroke resource through the core's timer client (provisional name and meaning).
void AchwReleaseStroke(FireTimerClient* client, void* resource);

// Owner of a stroke's usage count at +0x28 (provisional).
struct AchwStrokeOwner {
    achwBaseDeviceObject* object;  // 0x0 (provisional)
    char pad8[0x28 - 0x8];
    unsigned char users;  // 0x28 (provisional)
};
// Piece of an achwShapeOES_Stroke chain (provisional).
struct AchwStrokeBlock {
    AchwStrokeBlock* next;  // 0x0
};
struct AchwStrokeNode {
    AchwStrokeNode* next;     // 0x0
    void* resource;           // 0x8
    char pad10[0x20 - 0x10];
    AchwStrokeBlock* blocks;  // 0x20
};

// 19achwShapeOES_Stroke, vtable 0x18ea8f0.
class achwShapeOES_Stroke : public achwBaseDeviceObject {
public:
    ~achwShapeOES_Stroke();  // slots 0/1: 0xf90930 / 0xf909c0
    void Release(int how);   // slot 3: 0xf90a60

    char pad2c[0x50 - 0x2c];
    AchwStrokeOwner* owner;  // 0x50
    AchwStrokeNode* nodes;   // 0x58
    void* value60;           // 0x60 (provisional)
    int count68;             // 0x68 (provisional)
};

// 0xf90a60 (achwShapeOES_Stroke slot 3): releases and frees every node, then drops the owner's user count.
void achwShapeOES_Stroke::Release(int how) {
    while (AchwStrokeNode* n = nodes) {
        AchwStrokeNode* next = n->next;
        if (n->resource) {
            FirePlayerCore* core = owner->object->context->entries[0]->source->Player()->core;
            AchwReleaseStroke(core, n->resource);
            n->resource = 0;
        }
        while (AchwStrokeBlock* b = n->blocks) {
            AchwStrokeBlock* next = b->next;
            FireFree(b);
            n->blocks = next;
        }
        FireFree(n);
        nodes = next;
    }
    nodes = 0;
    value60 = 0;
    count68 = 0;
    owner->users--;
}

// Object list of a scaled-colours shape part (provisional): the parts with a set flag carry these instead of strokes.
struct AchwShapePart {
    achwBaseDeviceObject* object;  // 0x0: its context manages the listed objects
    char pad8[0x10 - 0x8];
    AchwShapeNode* nodes;          // 0x10
    char pad18[0x20 - 0x18];
    AchwShapeNode* cursor;         // 0x20
};
// Stroke list of a scaled-colours shape part (provisional).
struct AchwStrokePart {
    char pad0[0x10];
    AchwStrokeOwner* owner;  // 0x10
    AchwStrokeNode* nodes;   // 0x18
    void* value20;           // 0x20 (provisional)
    int count28;             // 0x28 (provisional)
};
// Shared description of a scaled-colours shape (provisional): part count and per-part flags.
struct AchwScaledColorsInfo {
    char pad0[0x58];
    unsigned char* partFlags;  // 0x58
    char pad60[0x64 - 0x60];
    int partCount;             // 0x64
};

// 25achwShapeOES_ScaledColors, vtable 0x18ea938.
class achwShapeOES_ScaledColors : public achwBaseDeviceObject {
public:
    ~achwShapeOES_ScaledColors();  // slots 0/1: 0xf90b20 / 0xf90bb0
    void Release(int how);         // slot 3: 0xf90c50

    char pad2c[0x50 - 0x2c];
    AchwScaledColorsInfo* info;  // 0x50
    char pad58[0x68 - 0x58];
    void** parts;                // 0x68
};

// 0xf90c50 (achwShapeOES_ScaledColors slot 3): releases every part (objects or strokes by its flag), then the parts.
void achwShapeOES_ScaledColors::Release(int how) {
    if (!parts) return;
    int n = info->partCount;
    for (int i = 0; i < n; i++) {
        void* part = parts[i];
        if (!part) continue;
        if (info->partFlags && (info->partFlags[i] & 1)) {
            AchwShapePart* p = (AchwShapePart*)part;
            for (p->cursor = p->nodes; p->cursor; p->cursor = p->nodes) p->object->context->Remove(p->cursor->object);
        } else {
            AchwStrokePart* p = (AchwStrokePart*)part;
            while (AchwStrokeNode* node = p->nodes) {
                AchwStrokeNode* next = node->next;
                if (node->resource) {
                    FirePlayerCore* core = p->owner->object->context->entries[0]->source->Player()->core;
                    AchwReleaseStroke(core, node->resource);
                    node->resource = 0;
                }
                while (AchwStrokeBlock* b = node->blocks) {
                    AchwStrokeBlock* nb = b->next;
                    FireFree(b);
                    node->blocks = nb;
                }
                FireFree(node);
                p->nodes = next;
            }
            p->nodes = 0;
            p->value20 = 0;
            p->count28 = 0;
        }
        FireFree(part);
    }
    FireFree(parts);
    parts = 0;
}
