// Fire's tagged script values: a 64-bit word whose low three bits give the kind (provisional reading; names
// provisional throughout).
#include "FireCore.h"

// Reference-counted object whose count lives in the bits above three flag bits (provisional name).
// Player-like owner of FireCountedObjects (provisional): a registry table and a free list.
struct FireCountedOwner {
    char pad0[0xf70];
    void* freeList;     // 0xf70 (provisional)
    HashTable* table;   // 0xf78: objects registered by id (provisional)
};
// 0xeeae10: takes obj back (provisional name and meaning).
void FireCountedRecycle(void* freeList, struct FireCountedObject* obj);

struct FireCountedObject {
    unsigned flags : 3;  // bit 2: registered in the owner's table (provisional)
    int refCount : 29;

    void Destroy();

    char pad4[0x8 - 0x4];
    int* id;                   // 0x8 (provisional)
    char pad10[0x18 - 0x10];
    FireCountedOwner* owner;   // 0x18
};
// 0xefb6c0: drops one reference of obj (null allowed) (provisional name). Declared noexcept: no landing pad guards
// its calls.
void FireReleaseCounted(FireCountedObject* obj) noexcept;

// Owning reference to a FireCountedObject (provisional). always_inline: the original inlines this destructor into
// cleanup paths too (its only support is that it matches).
struct FireCountedRef {
    FireCountedObject* obj;
    __attribute__((always_inline)) ~FireCountedRef() { FireReleaseCounted(obj); }
};

// 0xf30840: converts n bytes of narrow text to a new 32-bit-unit string from heap (provisional name and meaning).
unsigned* FireWidenText(void* heap, const char* text, unsigned long n, int mode);

// Object of kind-4 atoms (tag 4; provisional name and layout; 0x40 bytes): text kept as narrow bytes or 32-bit units.
struct FireAtomObject4 {
    ~FireAtomObject4() {
        FireFree(wide);
        FireFree(buffer10);
        FireFree(narrow);
    }
    // 0xf2e260: copies source's text into a new object of context (provisional meaning).
    FireAtomObject4(FirePlayerContext* context, FireAtomObject4* source);
    // 0xf2e7e0: n bytes of text (provisional meaning of the flags).
    FireAtomObject4(FirePlayerContext* context, const char* text, unsigned long n, bool narrow, int mode);

    // Allocates from context's heap and records the context in the header word (provisional reading).
    static void* operator new(decltype(sizeof(0)) size, FirePlayerContext* context) {
        FireAtomObject4* p = (FireAtomObject4*)FireAlloc(context->heap, context->value48, size, 0, 0);
        if (p) p->context = context;
        return p;
    }
    static void operator delete(void* p, FirePlayerContext*) {
        if (p) FireFree(p);
    }
    static void operator delete(void* p) { FireFree(p); }

    int Release();
    unsigned* Wide();
    unsigned long UnitCount();  // 0xf2f2a0: length in 32-bit units (provisional name)

    // Byte size of the 32-bit-unit text (provisional name).
    unsigned long WideSize() {
        unsigned long size = 0;
        if (wide && *wide) {
            unsigned long n = 0;
            while (wide[++n]) {}
            size = n * 4;
        }
        return size;
    }

    // Byte length of the text in its current form, measured and cached on first use (provisional name).
    unsigned long Length() {
        if (!wide && !narrow) {
            length = 0;
            return 0;
        }
        if (length) return length;
        if (narrow) {
            unsigned n = 0;
            if (*narrow) {
                const char* p = narrow;
                while (*++p) {}
                n = p - narrow;
            }
            length = n;
            return n;
        }
        unsigned long size = WideSize();
        length = size;
        return size;
    }

    // Byte length of the narrow text, measured and cached on first use (provisional name).
    unsigned long NarrowLength() {
        if (!length) {
            unsigned n = 0;
            if (*narrow) {
                const char* p = narrow;
                while (*++p) {}
                n = p - narrow;
            }
            length = n;
        }
        return length;
    }

    FirePlayerContext* context;  // 0x0 (provisional)
    unsigned* wide;              // 0x8
    void* buffer10;              // 0x10
    unsigned refCount;           // 0x18
    char* narrow;                // 0x20
    unsigned long length;        // 0x28: in bytes; 0 until measured (provisional)
    FireCountedRef ref30;        // 0x30
    unsigned char flags38;       // 0x38: bits 1-7 give the widening mode (provisional)
};

// 0xf2ea40: drops one reference and deletes the object at zero; returns the new count.
int FireAtomObject4::Release() {
    int n = --refCount;
    if (n == 0) delete this;
    return n;
}

// Base of kind-6 objects (provisional name): virtual slots, then a reference count at +0x10.
struct FireAtomRefCounted {
    virtual void Slot0();
    virtual void Slot1();
    virtual void Slot2();
    virtual void Slot3();
    virtual void Slot4();
    virtual void Slot5();
    virtual struct FireAtomOwner* Slot6();
    virtual void Slot7();  // releases the object when a value lets go of it (ScriptObject's is 0xeeaa40)

    // Counts a reference unless slot 6 gives an owner (provisional name).
    void AddRef() {
        if (!Slot6()) refCount++;
    }

    char pad8[0x10 - 0x8];
    int refCount;  // 0x10
};
// Object of kind-6 atoms (provisional name): 0xf35090 builds a 0x70-byte ScriptObject (vtable 0x18e9ff8) and tags it 6.
// The slot 6 override is a guess that only the match supports: 0xf34fa0's two slot-6 calls are not merged, which the
// calls through different classes give.
struct FireAtomReleasable : FireAtomRefCounted {
    virtual struct FireAtomOwner* Slot6();
    char pad14[0x70 - 0x14];
};

// What slot 6 of a kind-6 object returns (provisional): holds a table at +0x110.
struct FireAtomOwner {
    char pad0[0x110];
    char table110[1];  // 0x110 (provisional)
};

// Object reached from a kind-3 object's +0x0 (provisional): +0x98 leads to an owner at +0x70.
struct FireAtomContextLink {
    char pad0[0x70];
    struct FireAtomOwner* owner70;  // 0x70 (provisional)
};
struct FireAtomContext {
    char pad0[0x98];
    FireAtomContextLink* link98;  // 0x98 (provisional)
};
// 0xecdc10: finds the object a kind-3 value names (provisional name and meaning).
struct FireAtomReleasable* FireAtomFind(FireAtomContext* context, void* table, void* name, int mode);

// Object of kind-3 atoms (tag 3; provisional name and layout; 0x38 bytes).
struct FireAtomObject3 {
    FireAtomObject3(PlatformPlayer* player, void* source, int mode);  // 0xeec2d0 (provisional meaning)

    // Drops one reference; the last one releases the owner and frees the name (provisional name).
    void Release() {
        if (--refCount == 0) {
            if (owner8 && owns30) {
                owner8->Slot7();
                owner8 = 0;
            }
            FireFree(buffer28);
            buffer28 = 0;
            FireFree(this);
        }
    }

    // The object this value names: the cached one, else a lookup by name (provisional name).
    struct FireAtomReleasable* Object() {
        if (owner8) return owner8;
        if (!buffer28 || !context || !context->link98) return 0;
        return FireAtomFind(context, context->link98->owner70->table110, buffer28, 2);
    }

    FireAtomContext* context;  // 0x0 (provisional)
    FireAtomReleasable* owner8;  // 0x8
    int refCount;                // 0x10
    char pad14[0x18 - 0x14];
    void* value18;   // 0x18 (provisional)
    char pad20[0x28 - 0x20];
    void* buffer28;  // 0x28
    int owns30;      // 0x30
};

// Tagged script value (provisional name): low three bits give the kind, the rest a pointer; values below 0x33 are
// constants (2 is the cleared value).
struct FireAtom {
    unsigned long bits;

    ~FireAtom() { Clear(); }

    void Clear();
    FireAtomReleasable* GetObject();
    void SetObject(FireAtomReleasable* obj);

    // Kind of the value, looking through a kind-7 box; kind 2 constants carry two more bits (provisional name).
    int Kind() const;
    // Pointer part of the value, looking through a kind-7 box (provisional name).
    void* Pointer() const;
};

// Box of kind-7 atoms (tag 7; provisional name and layout).
struct FireAtomBox {
    FireCountedObject* hold;  // 0x0
    FireAtom value;           // 0x8
};

inline int FireAtom::Kind() const {
    int v = (int)bits;
    int k = v & 7;
    if (k == 7) {
        v = (int)((FireAtomBox*)(bits & ~7ul))->value.bits;
        k = v & 7;
    }
    return k == 2 ? v & 0x1f : k;
}

inline void* FireAtom::Pointer() const {
    unsigned long v = bits;
    if ((v & 7) == 7) v = ((FireAtomBox*)(v & ~7ul))->value.bits;
    return (void*)(v & ~7ul);
}

// 0xeec150: looks up a kind-3 object in an owner's table (provisional name and meaning).
struct FireAtomObject3* FireAtomLookup(void* table);

// 0xf34d70: releases what the value points to, then clears it to 2. Written without destructors: the original has no
// terminate pads here.
void FireAtom::Clear() {
    unsigned long v = bits;
    if (v > 0x32 && ((int)v & 7)) {
        void* p = (void*)(v & ~7ul);
        switch ((int)v & 7) {
        case 3: {
            FireAtomObject3* o = (FireAtomObject3*)p;
            if (--o->refCount == 0) {
                if (o->owner8 && o->owns30) {
                    o->owner8->Slot7();
                    o->owner8 = 0;
                }
                FireFree(o->buffer28);
                o->buffer28 = 0;
                FireFree(o);
            }
            break;
        }
        case 4:
            ((FireAtomObject4*)p)->Release();
            break;
        case 6:
            ((FireAtomReleasable*)p)->Slot7();
            break;
        case 7: {
            FireAtomBox* b = (FireAtomBox*)p;
            b->value.Clear();
            FireCountedObject* o = b->hold;
            if (o) {
                if (--o->refCount < 1) o->Destroy();
                b->hold = 0;
            }
            FireFree(b);
            break;
        }
        case 1:
            FireFree(p);
            break;
        }
    }
    bits = 2;
}

// 0xf34f50: the object of a kind-6 value, or of a kind-7 box holding one; else null.
FireAtomReleasable* FireAtom::GetObject() {
    unsigned long v = bits;
    switch ((int)v & 7) {
    case 7:
        v = ((FireAtomBox*)(v & ~7ul))->value.bits;
        if ((v & 7) != 6) return 0;
        // falls through with the boxed value
    case 6:
        return (FireAtomReleasable*)(v & ~7ul);
    }
    return 0;
}

// 0xf34fa0: makes the value refer to obj (kind 6), or to the kind-3 object its owner's table gives.
void FireAtom::SetObject(FireAtomReleasable* obj) {
    if (Kind() == 6 && Pointer() == obj) return;
    Clear();
    if (!obj) return;
    if (obj->Slot6()) {
        FireAtomObject3* s = FireAtomLookup(obj->Slot6()->table110);
        if (s) {
            s->refCount++;
            bits = (unsigned long)s | 3;
        }
    } else {
        obj->AddRef();
        bits = (unsigned long)obj | 6;
    }
}

// 0xf34e70: the owner (slot 6) of the object a value refers to: a kind-6 object, or the object a kind-3 value names.
// Not yet matched: the original's null-context exit reuses the context register as the result, and its other null
// exits keep a dead "mov x0, xzr; cbnz x0" pair; ours sends all three to one "mov x0, xzr; ret".
FireAtomOwner* FireAtomGetOwner(FireAtom a) {
    FireAtomReleasable* o = 0;
    switch (a.Kind()) {
    case 3: {
        FireAtomObject3* s = (FireAtomObject3*)a.Pointer();
        if (s) o = s->Object();
        break;
    }
    case 6:
        o = a.GetObject();
        break;
    }
    return o ? o->Slot6() : 0;
}

// Up to ten counted kind-3 objects (provisional name and layout).
struct FireAtomObject3List {
    void Add(FireAtomReleasable* source, int create);

    PlatformPlayer* player;        // 0x0
    FireAtomObject3* items[10];    // 0x8
    int count;                     // 0x58
    int countWithValue;            // 0x5c: items whose value18 is set (provisional)
};

// 0xefc890: adds the kind-3 object for source (a new one when create is set and source has no owner).
void FireAtomObject3List::Add(FireAtomReleasable* source, int create) {
    if (count >= 10) return;
    FireAtomObject3* s;
    bool make = create;
    if (source && make) make = !source->Slot6();
    if (make) {
        FirePlayerContext* context = player->core->context;
        void* p = FireAlloc(context->heap, context->value40, sizeof(FireAtomObject3), 0, 0);
        if (!p) return;
        s = new (p) FireAtomObject3(player, source, 1);
    } else {
        s = FireAtomLookup(source);
        if (!s) return;
    }
    if (count >= 10) return;
    items[count] = s;
    s->refCount++;
    count++;
    if (s->value18) countWithValue++;
}

// 0xf2f610: the text as 32-bit units, widening (and freeing) the narrow form first; length becomes the wide byte size.
// 0xf30450 inlines this body, as the link-time optimizer did; always_inline stands in for that inlining (its only
// support is that it matches).
__attribute__((always_inline)) unsigned* FireAtomObject4::Wide() {
    if (narrow) {
        FirePlayerContext* c = context;
        unsigned long n = NarrowLength();
        int mode = flags38 >> 1;
        wide = FireWidenText(c->heap, narrow, n, mode);
        FireFree(narrow);
        narrow = 0;
        length = 0;
        length = WideSize();
    }
    return wide;
}

// 0xf30450: the 32-bit-unit text of a kind-4 object, or null without one.
unsigned* FireAtomWideText(FireAtomObject4* s) {
    return s ? s->Wide() : 0;
}

// Handle to a kind-4 object shared copy-on-write (provisional name and layout).
struct FireAtomTextHandle {
    FireAtomTextHandle(FirePlayerContext* context, const char* s, int kind, int mode);
    ~FireAtomTextHandle() {
        if (text) {
            text->Release();
            text = 0;
        }
    }

    void MakeUnique();
    void Func_f2fa90();

    FirePlayerContext* context;  // 0x0
    FireAtomObject4* text;       // 0x8
};
// 0xf2f8d0: replaces a shared text object by a private copy.
// Not yet matched: the original keeps the allocation's "p or null" result in its own register (x21) for the cleanup
// path; ours folds it into the allocation pointer.
void FireAtomTextHandle::MakeUnique() {
    if (!text || text->refCount < 2) return;
    FireAtomObject4* copy = new (context) FireAtomObject4(context, text);
    text->Release();
    text = copy;
}

// 0xf2ef00 (provisional name).
void FireAtomObject4Func_f2ef00(FireAtomObject4* s);

// 0xf2fa90: when the text is not empty, makes it unique and passes it to 0xf2ef00.
// Not yet matched: the original tests the 32-bit narrow length before widening it and knows a measured wide size is
// nonzero; ours tests the stored 64-bit length on both paths.
void FireAtomTextHandle::Func_f2fa90() {
    FireAtomObject4* s = text;
    if (!s || !s->Length()) return;
    MakeUnique();
    FireAtomObject4Func_f2ef00(text);
}

// Reference-counted array of values (provisional name and layout).
struct FireAtomArray {
    ~FireAtomArray() {
        if (atoms) {
            for (int i = 0; i < count; i++) atoms[i].Clear();
            if (atoms) FireFree(atoms);
        }
    }
    static void operator delete(void* p) { FireFree(p); }

    void Release();

    int refCount;  // 0x0
    int count;     // 0x4
    char pad8[0x18 - 0x8];
    FireAtom* atoms;  // 0x18
};

// 0xeead80: drops one reference; at zero clears every value and frees the array.
void FireAtomArray::Release() {
    if (--refCount == 0) delete this;
}

// 0xefc970: unregisters the object from its owner's table and hands it back to the owner (0xefb6c0 inlines this body
// in the original; FireAtom::Clear calls it).
// Not yet matched: the original tail-calls 0xeeae10 although the inlined Remove passed a stack slot's address to
// HashKey (a sign of the link-time inlining); ours cannot mark that call as a tail call, and its bucket walk keeps
// the link in a different register.
void FireCountedObject::Destroy() {
    if ((flags & 4) && owner && owner->table) owner->table->Remove((void*)(long)*id);
    if (owner && owner->freeList) FireCountedRecycle(owner->freeList, this);
}

// Owned buffer with a count (provisional).
struct FireCountedBuffer {
    ~FireCountedBuffer() {
        if (data) {
            FireFree(data);
            data = 0;
        }
        count = 0;
    }

    void* data;  // 0x0
    int count;   // 0x8
};

// Record of a buffer and three text handles (provisional name and layout).
struct FireTextTriple {
    static void operator delete(void* p) { FireFree(p); }

    FireCountedBuffer buffer;   // 0x0
    char pad10[0x18 - 0x10];
    FireAtomTextHandle text18;  // 0x18
    char pad28[0x30 - 0x28];
    FireAtomTextHandle text30;  // 0x30
    FireAtomTextHandle text40;  // 0x40
};

// Owner of FireTextTriple records (provisional).
struct FireTextTripleOwner {
    void Delete(FireTextTriple* triple);
};

// 0xf51d10: deletes a record (null allowed).
void FireTextTripleOwner::Delete(FireTextTriple* triple) {
    delete triple;
}

// 0xf8b140 (IntervalMgr::Cookie): releases the target and the name, then frees the buffer and the arguments.
IntervalMgr::Cookie::~Cookie() {
    ReleaseName();
    FreeBuffer();
    for (unsigned long i = 0; i < argCount; i++) args[i].~FireAtom();
    if (args) FireFree(args);
    args = 0;
}

inline void IntervalMgr::Cookie::ReleaseName() noexcept {
    if (FireAtomObject3* n = name) {
        if (target && n->owner8) {
            target->Slot7();
            target = 0;
        }
        name->Release();
        name = 0;
    }
}


// Byte length of s (provisional helper; the setters spell the same loop).
static inline unsigned FireTextLength(const char* s) {
    unsigned n = 0;
    if (*s) {
        const char* p = s;
        while (*++p) {}
        n = p - s;
    }
    return n;
}

// 0xf2f6c0: a handle to a new text object holding s (kind below 6 keeps it narrow; provisional reading).
// Not yet matched: as in MakeUnique, the original keeps the allocation's "p or null" result in a register of its own.
FireAtomTextHandle::FireAtomTextHandle(FirePlayerContext* c, const char* s, int kind, int mode) {
    context = c;
    text = new (c) FireAtomObject4(c, s, s ? FireTextLength(s) : 0, kind < 6, mode);
}

// Target of a FireCall (provisional): +0x70 leads to the heap.
struct FireCallTarget {
    char pad0[0x70];
    FirePlayerContext* context;  // 0x70
};

// Pending call (provisional name and layout): its target and the argument values it owns.
struct FireCall {
    FireCall(FireCallTarget* t, FireAtom* a, int n) : target(t), args(a), argCount(n) {}
    ~FireCall() {
        if (args) {
            for (int i = 0; i < argCount; i++) args[i].~FireAtom();
            if (args) FireFree(args);
            args = 0;
        }
    }
    static void operator delete(void* p) { FireFree(p); }

    FireCallTarget* target;  // 0x0
    FireAtom* args;          // 0x8
    int argCount;            // 0x10
};

// Object holding a pending call at +0x48 (provisional name and layout).
struct FireCallSlot {
    void SetCall(FireCallTarget* target, FireAtom* args, int argCount);

    char pad0[0x48];
    FireCall* pending;  // 0x48
};

// 0xf83b00: replaces the pending call (taking over args).
void FireCallSlot::SetCall(FireCallTarget* target, FireAtom* args, int argCount) {
    if (pending) {
        delete pending;
        pending = 0;
    }
    pending = new (FireAlloc(target->context->heap, 0, sizeof(FireCall), 0, 0)) FireCall(target, args, argCount);
}

// 0xf30500: the code of the unit at index as a number (NaN out of range, or 0 past the end when
// flag bit 0 is set; 0 without a text).
double FireAtomCharCodeAt(FireAtomObject4* s, int index) {
    if (!s) return 0;
    s->Wide();
    unsigned long n = s->UnitCount();
    if (index < 0) return __builtin_nan("");
    if ((unsigned long)(long)index >= n) return (s->flags38 & 1) ? 0 : __builtin_nan("");
    return s->wide[index];
}

// Reference-counted record user (FireString.cpp's FireRecordUser; destructor 0xf322f0) as a URL stream holds it.
struct FireStreamUser {
    ~FireStreamUser();
    static void operator delete(void* p) { FireFree(p); }

    void Release() {
        int n = --refCount;
        if (n == 0) delete this;
    }

    char pad0[0xc0];
    int refCount;  // 0xc0
};
// Holder of a FireStreamUser (provisional).
struct FireStreamUserRef {
    ~FireStreamUserRef() { user->Release(); }
    static void operator delete(void* p) { FireFree(p); }

    FireStreamUser* user;  // 0x0
};

// 9URLStream, vtable 0x18ea788 (only the fields its cleanup touches; names provisional).
class URLStream {
public:
    virtual ~URLStream();  // slots 0/1: 0xf814e0 / 0xf81570
    void Cleanup();

    // Frees a block and clears the pointer (provisional; its own nothrow scope gives the free a terminate pad).
    static void FreeBlock(FireAtom*& p) noexcept {
        if (p) FireFree(p);
        p = 0;
    }

    char pad8[0x40 - 0x8];
    void* value40;                  // 0x40
    char pad48[0x108 - 0x48];
    void* buffer108;                // 0x108
    char pad110[0x118 - 0x110];
    void* buffer118;                // 0x118
    unsigned headerCount;           // 0x120
    char pad124[0x128 - 0x124];
    void** headerNames;             // 0x128
    void** headerValues;            // 0x130
    FireAtom* args;                 // 0x138
    FireAtomObject3* name;          // 0x140
    char pad148[0x170 - 0x148];
    FireStreamUserRef* userRef;     // 0x170
};

// 0xf815a0: releases the target name (or else the argument), frees the buffers and headers and drops the user.
void URLStream::Cleanup() {
    if (name) {
        name->Release();
        name = 0;
    } else if (args) {
        args->Clear();
        FreeBlock(args);
    }
    FireFree(buffer108);
    buffer108 = 0;
    FireFree(buffer118);
    buffer118 = 0;
    for (unsigned short i = 0; i < headerCount; i++) {
        FireFree(headerNames[i]);
        FireFree(headerValues[i]);
    }
    if (headerCount) {
        FireFree(headerNames);
        FireFree(headerValues);
    }
    headerCount = 0;
    delete userRef;
    userRef = 0;
    value40 = 0;
}

// Request handed to the platform's URL loader (0xebe940; provisional names and layout).
struct FireUrlRequest {
    void* data0;              // 0x0
    void* value8;             // 0x8
    unsigned short value10;   // 0x10
    void* value18;            // 0x18
    void* value20;            // 0x20
    unsigned short hasBody;   // 0x28
    long value30;             // 0x30
    unsigned long value38;    // 0x38
    void* value40;            // 0x40
    void* value48;            // 0x48
    unsigned short flag50;    // 0x50
    void* stream58;           // 0x58
    unsigned short flag60;    // 0x60
    unsigned short flag62;    // 0x62
    void* value68;            // 0x68
    void* value70;            // 0x70
    unsigned short value78;   // 0x78
    void* value80;            // 0x80
    const char* version;      // 0x88
};
// 0xebe940: starts a platform request (provisional name).
unsigned short FirePlatformOpenUrl(FirePlayerCore* core, FireUrlRequest* request, int id);

// 17PlatformURLStream, vtable 0x18ea850 (only the fields slot 5 reads; names provisional).
class PlatformURLStream {
public:
    virtual ~PlatformURLStream();  // slots 0/1: 0xf8ce50 / 0xf8cea0
    bool Open();                   // slot 5: 0xf8cf00 (provisional name)
    void* stream48() { return *(void**)(stream28 + 0x20); }

    char pad8[0xc - 0x8];
    int id;                        // 0xc
    char pad10[0x28 - 0x10];
    char stream28[0x68 - 0x28];    // 0x28 (provisional)
    void* value68;                 // 0x68
    char pad70[0x88 - 0x70];
    void* value88;                 // 0x88
    char pad90[0xa8 - 0x90];
    void* valuea8;                 // 0xa8
    char padb0[0xc8 - 0xb0];
    int valuec8;                   // 0xc8
    char padcc[0xd0 - 0xcc];
    void* datad0;                  // 0xd0
    char padd8[0x108 - 0xd8];
    long value108;                 // 0x108
    unsigned value110;             // 0x110
    char pad114[0x118 - 0x114];
    void* value118;                // 0x118
    char pad120[0x148 - 0x120];
    unsigned short flags148;       // 0x148
    char pad14a[0x150 - 0x14a];
    PlatformPlayer* player;        // 0x150
};

// 0xf8cf00 (PlatformURLStream slot 5): opens the request through the platform when the stream has a target.
// Not yet matched: the original builds the request with a different store order (and no q-register zeroing).
bool PlatformURLStream::Open() {
    if (!stream48()) return false;
    FireUrlRequest r;
    r.value80 = 0;
    r.version = "9,1,116,0";
    r.value78 = 0;
    r.value68 = 0;
    r.value70 = 0;
    r.stream58 = stream28;
    r.flag60 = 0;
    r.flag62 = 0;
    r.value40 = 0;
    r.value48 = value118;
    r.value38 = value110;
    r.value30 = value108;
    r.data0 = datad0;
    r.value10 = valuec8;
    r.value8 = value88;
    r.value18 = valuea8;
    r.value20 = value68;
    r.hasBody = (value118 || value108) ? 1 : 0;
    r.flag50 = (flags148 >> 7) & 1;
    r.flag60 = (flags148 >> 5) & 1;
    r.flag62 = (flags148 >> 8) & 1;
    return FirePlatformOpenUrl(player->core, &r, id) != 0;
}
