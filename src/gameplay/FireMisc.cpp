// Small Fire (Flash player) functions whose classes are not yet identified; all names here are provisional.
#include "FireText.h"

// Node of FireBufferList's chain (provisional): two owned buffers.
struct FireBufferNode {
    FireBufferNode* next;  // 0x0
    void* buffer8;         // 0x8
    void* buffer10;        // 0x10
};

// Object with a buffer that may point at its own inline storage and a chain of owned nodes (provisional).
struct FireBufferList {
    ~FireBufferList();

    char inline0[0x20];      // 0x0: inline storage (provisional)
    void* buffer;            // 0x20: inline0 or a heap block
    int length;              // 0x28 (provisional)
    bool flag2c;             // 0x2c (provisional)
    FireBufferNode* nodes;   // 0x30
    void* value38;           // 0x38 (provisional)
};

// 0xf30a80: frees the heap buffer and every node, then clears the fields.
FireBufferList::~FireBufferList() {
    if (buffer != this) FireFree(buffer);
    buffer = 0;
    while (FireBufferNode* n = nodes) {
        nodes = n->next;
        FireFree(n->buffer8);
        FireFree(n->buffer10);
        FireFree(n);
    }
    length = 0;
    flag2c = false;
    value38 = 0;
}

// Reference-counted object with its count at +0xc0 (provisional).
struct FireCountedC0 {
    ~FireCountedC0();  // 0xf322f0
    static void operator delete(void* p) { FireFree(p); }

    char pad0[0xc0];
    int refCount;  // 0xc0
};

// Object at +0x13e0 of FireCountedOwner's player (provisional).
struct FirePlayerTarget {
    char pad0[0xcc];
    int valuecc;  // 0xcc (provisional)
};

// Player-like object the registration below belongs to (provisional).
struct FireRegistrationPlayer {
    void Unregister(FireCountedC0* item) noexcept;  // 0xeca7a0 (provisional name; no landing pad guards it)

    char pad0[0x13e0];
    FirePlayerTarget* target13e0;  // 0x13e0 (provisional)
};

// Registration of a counted item with a player (provisional).
struct FireRegistration {
    ~FireRegistration();

    FireRegistrationPlayer* player;  // 0x0
    FireCountedC0* item;             // 0x8
    char pad10[0x18 - 0x10];
    int active;                      // 0x18
    int flag1c;                      // 0x1c
};

// 0xf33130: unregisters the item from the player and drops the item reference.
FireRegistration::~FireRegistration() {
    if (active) {
        if (flag1c) {
            if (player->target13e0) player->target13e0->valuecc = 0;
            flag1c = 0;
        }
        player->Unregister(item);
        active = 0;
        if (item && --item->refCount == 0) delete item;
        item = 0;
    }
}

// Node of FireCountedQueue (provisional): holds a counted item.
struct FireCountedQueueNode {
    ~FireCountedQueueNode() { Clear(); }

    // Empties the node and drops its item (provisional name; its own nothrow scope gives the releases terminate pads).
    void Clear() noexcept {
        value8 = 0;
        value10 = 0;
        index18 = -1;
        if (item) {
            if (--item->refCount == 0) delete item;
            item = 0;
        }
    }
    static void operator delete(void* p) { FireFree(p); }

    char pad0[0x8];
    void* value8;                 // 0x8 (provisional)
    void* value10;                // 0x10 (provisional)
    int index18;                  // 0x18 (provisional)
    FireCountedC0* item;          // 0x20
    FireCountedQueueNode* next;   // 0x28
};

// Singly linked list of FireCountedQueueNode (provisional).
struct FireCountedQueue {
    ~FireCountedQueue();

    FireCountedQueueNode* head;  // 0x0
    void* value8;                // 0x8 (provisional)
};

// 0xefd130: deletes every node, then clears the second field.
FireCountedQueue::~FireCountedQueue() {
    while (FireCountedQueueNode* n = head) {
        head = n->next;
        delete n;
    }
    value8 = 0;
}

// Set at +0x90 of a queue node's target (provisional).
struct FireQueueTargetSet {
    int Contains(void* value, int index);  // 0xf4ffc0 (provisional name)
};
struct FireQueueTarget {
    char pad0[0x90];
    FireQueueTargetSet set90;  // 0x90 (provisional)
};

// 0xefd1b0: clears every node aimed at target; with check set, only those whose value the target's set lacks.
void FireCountedQueueClearTarget(FireCountedQueueNode* node, FireQueueTarget* target, int check) {
    if (!node) return;
    if (check) {
        for (; node; node = node->next) {
            if (node->value10 == target && !target->set90.Contains(node->value8, node->index18)) node->Clear();
        }
    } else {
        for (; node; node = node->next) {
            if (node->value10 == target) node->Clear();
        }
    }
}

// Owner of a FireByteBuffer (provisional): its heap at +0x38 backs the buffer.
struct FireByteBufferOwner {
    char pad0[0x38];
    void* heap;  // 0x38
};

// Growable byte buffer (provisional name and layout).
struct FireByteBuffer {
    void Append(const void* src, int n);

    char pad0[0x8];
    char* data;                  // 0x8
    int size;                    // 0x10
    int capacity;                // 0x14
    char pad18[0x28 - 0x18];
    FireByteBufferOwner* owner;  // 0x28
};

// 0xefcbf0: appends n bytes, growing by doubling (by 64 KiB steps past 64 KiB, at least 256 bytes); nothing on failure.
void FireByteBuffer::Append(const void* src, int n) {
    if (size + n > capacity) {
        int newCapacity = capacity > 0x10000 ? capacity + 0x10000 : capacity * 2;
        if (newCapacity <= 0x100) newCapacity = 0x100;
        if (newCapacity < size + n) newCapacity = size + n + 0x400;
        char* p = (char*)FireAlloc(owner->heap, 0, newCapacity, 0, 0);
        if (!p) return;
        FireMemMove(p, data, size);
        FireFree(data);
        data = p;
        capacity = newCapacity;
    }
    FireMemMove(data + size, src, n);
    size += n;
}

// Owner of FireWordArray instances (provisional): keeps a running total of their element counts.
struct FireWordArrayOwner {
    char pad0[0x4d0];
    long total;  // 0x4d0 (provisional)
};

// Cache block of a FireWordArray (provisional): frees its buffer when deleted.
struct FireWordArrayCache {
    ~FireWordArrayCache() {
        if (data) FireFree(data);
    }
    static void operator delete(void* p) { FireFree(p); }

    void* data;  // 0x0
};

// Array of 8-byte words whose storage may be borrowed (provisional name and layout).
struct FireWordArray {
    void Adopt(void** words, int n) noexcept;
    void Remove(int start, int n);

    // Drops the derived cache (provisional name).
    void Invalidate() {
        value28 = 0;
        if (cache) {
            delete cache;
            cache = 0;
        }
    }

    FireWordArrayOwner* owner;  // 0x0
    void** data;                // 0x8
    int count;                  // 0x10
    int capacity;               // 0x14: nonzero when data is owned (provisional)
    FireWordArrayCache* cache;  // 0x18
    char pad20[0x28 - 0x20];
    int value28;                // 0x28 (provisional)
};

// 0xf11110: takes words (n of them) as the array's storage, freeing owned storage first. Nothrow: the original gives
// its own free a terminate pad.
void FireWordArray::Adopt(void** words, int n) noexcept {
    if (capacity > 0) {
        if (data) FireFree(data);
        capacity = 0;
    }
    data = words;
    if (owner) owner->total = (int)owner->total + (n - count);
    count = n;
    Invalidate();
}

// 0xf111b0: removes up to n words from start.
void FireWordArray::Remove(int start, int n) {
    if (start < 0 || n < 1) return;
    if (start >= count) return;
    if (start + n > count) n = count - start;
    int end = start + n;
    FireMemMove(&data[start], &data[end], (count - end) * 8);
    count -= n;
    if (owner) owner->total = (int)owner->total - n;
    Invalidate();
}

// 0x20-byte item chained through a link block (provisional name and layout); callers keep them on the stack, as members
// and in new[] arrays.
struct FireLinkedItem {
    // Link block (provisional): the next item and an owned buffer.
    struct Node {
        ~Node() {
            if (buffer30) {
                FireFree(buffer30);
                buffer30 = 0;
            }
        }
        static void operator delete(void* p) { FireFree(p); }

        FireLinkedItem* next;  // 0x0
        char pad8[0x30 - 0x8];
        void* buffer30;        // 0x30 (provisional)
    };
    // Owner keeping the chain at +0x108 (provisional).
    struct Owner {
        char pad0[0x108];
        FireLinkedItem* items;  // 0x108
    };

    ~FireLinkedItem();
    void Clear();
    static void operator delete[](void* p) { FireFree(p); }

    // Takes the item out of its owner's chain and deletes its link block (provisional name; the destructor and Clear
    // are identical copies of it, which always_inline reproduces; its only support is that it matches).
    __attribute__((always_inline)) void Unlink() {
        Node* n = node;
        if (!n) return;
        FireLinkedItem* prev = 0;
        FireLinkedItem* cur = owner->items;
        while (cur && cur != this) {
            prev = cur;
            cur = cur->node->next;
        }
        if (cur) {
            if (prev) prev->node->next = cur->node->next;
            else owner->items = cur->node->next;
        }
        delete n;
        node = 0;
    }

    char pad0[0x8];
    Owner* owner;  // 0x8
    Node* node;    // 0x10
    void* value18; // 0x18 (provisional)
};

// 0xf38e90: takes the item out of its owner's chain and deletes its link block.
FireLinkedItem::~FireLinkedItem() {
    Unlink();
}

// 0xf38f40: the same as the destructor, for an item that stays alive.
void FireLinkedItem::Clear() {
    Unlink();
}

// Object freed by FireCleanupGuard (provisional): holds a counted item at +0x78.
struct FireGuardedObject {
    ~FireGuardedObject() {
        if (item && --item->refCount == 0) delete item;
    }
    static void operator delete(void* p) { FireFree(p); }

    char pad0[0x78];
    FireCountedC0* item;  // 0x78
};

// Scope guard over three caller variables (provisional name and layout).
struct FireCleanupGuard {
    ~FireCleanupGuard();

    char pad0[0x8];
    void** buffer1;              // 0x8
    void** buffer2;              // 0x10
    FireGuardedObject** object;  // 0x18
};

// 0xf5c170: frees the two buffers and deletes the object the guarded variables hold.
FireCleanupGuard::~FireCleanupGuard() {
    if (*buffer1) FireFree(*buffer1);
    if (*buffer2) FireFree(*buffer2);
    if (*object) {
        delete *object;
        *object = 0;
    }
}

// Object with a node chain and two buffers that may point at inline storage (provisional name and layout).
struct FireInlineBuffers {
    ~FireInlineBuffers();

    // Frees the second buffer once it has left its inline storage (provisional name; its own nothrow scope gives this
    // free a terminate pad of its own).
    void FreeBuffer2() noexcept {
        if (buffer2 != inline2 && buffer2) FireFree(buffer2);
    }

    char pad0[0x38];
    void* value38;          // 0x38 (provisional)
    char pad40[0x70 - 0x40];
    FireChainNode* nodes;   // 0x70
    char pad78[0xc8 - 0x78];
    void* buffer1;          // 0xc8: inline1 or a heap block
    void* buffer2;          // 0xd0: inline2, null or a heap block
    char padd8[0xe0 - 0xd8];
    char inline1[0x40];     // 0xe0
    char inline2[0x40];     // 0x120
};

// 0xee63a0: deletes the node chain (when value38 is set) and frees the heap buffers.
FireInlineBuffers::~FireInlineBuffers() {
    if (value38) {
        while (FireChainNode* n = nodes) {
            FireChainNode* next = n->next;
            delete n;
            nodes = next;
        }
    }
    if (buffer1 != inline1) FireFree(buffer1);
    FreeBuffer2();
}

// Base part of a FireOwnedEntry (provisional): destructor 0xeeafc0.
struct FireOwnedEntryBase {
    ~FireOwnedEntryBase();
    void Func_eefc30();  // 0xeefc30 (provisional name)

    char pad0[0x74];
    int id;  // 0x74
    char pad78[0x220 - 0x78];
};

// Extra block of a FireOwnedEntry (provisional): a string and an object released through 0xeeb410.
struct FireOwnedEntryExtra {
    static void operator delete(void* p) { FireFree(p); }

    char pad0[0x8];
    FireString text;  // 0x8
    void* object28;   // 0x28
};
void FireObjectRelease(void* object);  // 0xeeb410 (provisional name)

// Shared block held at +0x430 (provisional): cleared on every release, freed with the last.
struct FireOwnedEntryBlock {
    // Drops one reference (provisional name; its own nothrow scope gives the free a terminate pad).
    void Release() noexcept {
        data = 0;
        if (--refCount == 0) FireFree(this);
    }

    void* data;    // 0x0
    int refCount;  // 0x8
};

// Player-like owner whose +0x1640 points at its current entry or at its own default at +0x10 (provisional).
struct FireEntryPlayer {
    char pad0[0x10];
    char default10[0x1640 - 0x10];        // 0x10 (provisional)
    struct FireOwnedEntry* current1640;   // 0x1640
};

// FireAtom as used here (FireAtom.cpp's value word; only Clear is needed).
struct FireAtom {
    unsigned long bits;
    void Clear();  // 0xf34d70
};

// Entry of FireEntryOwner's list at +0x410 (provisional name and layout).
struct FireOwnedEntry : FireOwnedEntryBase {
    ~FireOwnedEntry();
    static void operator delete(void* p) { FireFree(p); }

    FireStringRecord record220;     // 0x220
    FireStringRecord record2e0;     // 0x2e0
    char pad3a0[0x3f8 - 0x3a0];
    FireEntryPlayer* player;        // 0x3f8
    FireOwnedEntry* next;           // 0x400
    HashTable table408;             // 0x408
    char pad428[0x430 - 0x428];
    FireOwnedEntryBlock* block;     // 0x430
    FireAtom atom;                  // 0x438
    char pad440[0x640 - 0x440];
    VarHashTable table640;          // 0x640
    HashTable table668;             // 0x668
    VarHashTable table688;          // 0x688
    char pad6b0[0x728 - 0x6b0];
    FireOwnedEntryExtra* extra;     // 0x728
};

// 0xef6ed0: releases the extra block, the shared block and the player's reference, clears the value, then the
// members and the base go.
// Not yet matched: the original reaches the member cleanup from the Clear call through a landing pad of its own (a
// lone branch); ours uses the shared one.
FireOwnedEntry::~FireOwnedEntry() {
    if (extra) {
        if (extra->object28) FireObjectRelease(extra->object28);
        delete extra;
        extra = 0;
    }
    Func_eefc30();
    if (block) block->Release();
    if (player && player->current1640 == this) player->current1640 = (FireOwnedEntry*)player->default10;
    atom.Clear();
}

// Request naming an entry (provisional): +0x88 leads to the object that owns it.
struct FireEntryRequestLink {
    char pad0[0x8];
    struct FireEntryHolder* holder;  // 0x8
};
struct FireEntryRequest {
    char pad0[0x74];
    int id;  // 0x74
    char pad78[0x88 - 0x78];
    FireEntryRequestLink* link;  // 0x88
};
struct FireEntryHolder {
    char pad0[0x70];
    void* target;  // 0x70 (provisional)
};
void FireEntryForward(void* target);  // 0xeec490 (provisional name)

// Object (the player, by its fields) keeping entries at +0x410 and a holder at +0x770 (provisional).
struct FireEntryOwner {
    void Remove(FireEntryRequest* request);
    void RemoveUnnamed(FireEntryRequest* request);  // 0xeca970 (provisional name)

    char pad0[0x410];
    FireOwnedEntry* entries;  // 0x410
    char pad418[0x770 - 0x418];
    FireEntryHolder holder;   // 0x770
};

// 0xed9020: deletes the entry a request names, or passes the request on when another holder owns it.
void FireEntryOwner::Remove(FireEntryRequest* request) {
    if (!request || !request->link) return;
    FireEntryHolder* h = request->link->holder;
    if (h != &holder) {
        FireEntryForward(h->target);
        return;
    }
    int id = request->id;
    if (!id) {
        RemoveUnnamed(request);
        return;
    }
    for (FireOwnedEntry** link = &entries; FireOwnedEntry* e = *link; link = &e->next) {
        if (e->id == id) {
            *link = e->next;
            delete e;
            return;
        }
    }
}

// Object naming itself with a heap copy at +0x70 (provisional name and layout).
struct FireNamedObject {
    void SetName(const char* name);
    void NameChanged();  // 0xf24d50 (provisional name)

    char pad0[0x30];
    FirePlayerCore* core;  // 0x30
    char pad38[0x70 - 0x38];
    char* name;            // 0x70
};

// 0xf24e90: replaces the name with a copy of name, then reports the change.
// Not yet matched: the original loads the context and tests it and name in one ccmp; ours tests name first with its
// own branch (the same null-test hoisting as FireString::Set).
void FireNamedObject::SetName(const char* name) {
    FirePlayerContext* context = core->context;
    if (!context || !name) return;
    int n = 0;
    if (*name) {
        const char* p = name;
        while (*++p) {}
        n = p - name;
    }
    n++;
    char* copy = (char*)FireAlloc(context->heap, 0, n, 0, 0);
    if (!copy) return;
    FireMemMove(copy, name, n);
    FireFree(this->name);
    this->name = copy;
    NameChanged();
}

// Object owned at +0x58 of a FireLinkedSet (provisional name and layout).
struct FireLinkedSetPart {
    // Inlined into FireLinkedSet's destructor; always_inline stands in for that inlining (its only support is that
    // it matches).
    __attribute__((always_inline)) ~FireLinkedSetPart() {
        if (request) {
            delete request;
            request = 0;
        }
        value0c = 0;
        value1c = 0;
        value20 = 0;
        value24 = 0;
        value28 = 0;
        value38 = 0;
        value40 = 0;
        value48 = 0;
    }
    static void operator delete(void* p) { FireFree(p); }

    char pad0[0xc];
    int value0c;               // 0xc (provisional names throughout)
    char pad10[0x1c - 0x10];
    int value1c;               // 0x1c
    int value20;               // 0x20
    int value24;               // 0x24
    int value28;               // 0x28
    char pad2c[0x30 - 0x2c];
    FireNavRequest* request;   // 0x30
    char pad38[0x38 - 0x38];
    void* value38;             // 0x38
    void* value40;             // 0x40
    int value48;               // 0x48
    FireLinkedItem item50;     // 0x50
    FireLinkedItem item70;     // 0x70
};

// Object holding linked items, a request and arrays of items (provisional name and layout).
struct FireLinkedSet {
    ~FireLinkedSet();

    char pad0[0x10];
    FireLinkedItem item10;        // 0x10
    char pad30[0x50 - 0x30];
    void* buffer50;               // 0x50
    FireLinkedSetPart* part;      // 0x58
    FireLinkedItem item60;        // 0x60
    char pad80[0x90 - 0x80];
    FireNavRequest request90;     // 0x90
    char pad98[0xc8 - 0x98];
    FireLinkedItem itemc8;        // 0xc8
    char pade8[0x110 - 0xe8];
    FireLinkedItem** arrays;      // 0x110: new[] arrays of items
    char pad118[0x124 - 0x118];
    unsigned arrayCount;          // 0x124
};

// 0xf35ff0: clears two items, frees the buffer, the part and the item arrays; then the members go.
// Not yet matched: the original keeps this+0x60 in x19 and this+0x10 in x20; ours swaps the two registers.
FireLinkedSet::~FireLinkedSet() {
    item60.Clear();
    item10.Clear();
    if (buffer50) FireFree(buffer50);
    if (part) delete part;
    for (unsigned long i = 0; i != arrayCount; i++) delete[] arrays[i];
    FireFree(arrays);
    arrays = 0;
}
