#pragma once
// Fire: Ubisoft's Flash player embedded in the game (0xec0000-0xf90000).
// Its classes live in the global namespace (RTTI names 9HashTable, 12VarHashTable, 14PlatformPlayer, ...).
// Function and field names not backed by RTTI are provisional.

// Placement new (Fire objects are built in FireAlloc blocks).
inline void* operator new(decltype(sizeof(0)), void* where) noexcept { return where; }

// 0xf9fb50: Fire heap allocation; name and parameter meaning are guesses (all five arguments are 64-bit).
void* FireAlloc(void* heap, void* arg1, unsigned long size, void* arg3, void* arg4);
// 0xfa0140: Fire heap free (provisional name).
void FireFree(void* p);
// 0xec23d0: zero-fills a block (provisional name).
void FireZero(void* p, unsigned long size);
// 0xec21a0: copies size bytes, overlapping blocks allowed; returns dst (provisional name; callers pass a 32-bit size).
void* FireMemMove(void* dst, const void* src, int size);

// 0x153f6d5: 0x20 for 'A'..'Z', else 0; c ^ FireCaseTable[c] lowers c (provisional name).
extern const unsigned char FireCaseTable[256];

// Object at HashTable+0x18 (provisional): the owner holding the heaps.
struct FireHeapOwner {
    char pad0[0x38];
    void* heap;  // 0x38
    char pad40[0x788 - 0x40];
    void* entryHeap;          // 0x788
    unsigned long entrySize;  // 0x790
};

// 9HashTable, vtable 0x18ea410: chained hash table; derived tables override the key slots.
class HashTable {
public:
    struct Entry {
        Entry* next;  // 0x0
        void* key;    // 0x8
        void* value;  // 0x10
    };

    // Fire objects go back to the Fire heap (the deleting destructors end in FireFree).
    static void operator delete(void* p) { FireFree(p); }

    // 0xf35730 (slot 0) / 0xf357e0 (slot 1, deleting); defined in FireHashTable.cpp.
    virtual ~HashTable();
    virtual bool HashKey(void* key, unsigned tableSize, unsigned* hash);  // slot 2: 0xf358a0
    virtual bool KeysEqual(void* a, void* b);                             // slot 3: 0xf358c0
    virtual void DeleteItem(void* key, void* value);                      // slot 4: 0xf358d0
    virtual unsigned GrowSize();                                          // slot 5: 0xf358e0
    virtual Entry* NewEntry();                                            // slot 6: 0xf358f0
    virtual void FreeEntry(Entry* entry);                                 // slot 7: 0xf35910
    virtual int Grow();                                                   // slot 8: 0xf35920

    // Empties every bucket (provisional name; inlined into the destructors).
    void RemoveAll() {
        if (count) {
            for (unsigned i = 0; i < tableSize; i++) {
                Entry* e;
                while ((e = buckets[i]) != 0) {
                    buckets[i] = e->next;
                    DeleteItem(e->key, e->value);
                    FreeEntry(e);
                }
            }
            count = 0;
        }
    }

    bool Insert(void* key, void* value);

    // Removes key's entry; false when absent (provisional name; inlined by its callers).
    bool Remove(void* key) {
        if (!buckets) return false;
        unsigned h;
        if (!HashKey(key, tableSize, &h)) return false;
        for (Entry** link = &buckets[h]; Entry* e = *link; link = &e->next) {
            if (KeysEqual(e->key, key)) {
                *link = e->next;
                DeleteItem(e->key, e->value);
                FreeEntry(e);
                count--;
                return true;
            }
        }
        return false;
    }

    Entry** buckets;       // 0x8
    unsigned count;        // 0x10
    unsigned tableSize;    // 0x14
    FireHeapOwner* owner;  // 0x18
};

// 16IntegerHashTable, vtable 0x18ea5c8: integer keys; destructor is the base one.
class IntegerHashTable : public HashTable {
public:
    virtual bool HashKey(void* key, unsigned tableSize, unsigned* hash);  // slot 2: 0xf35e90
};

// 27ScriptVariableNameHashTable, vtable 0x18ea4e8: keyed by (interned) name pointers; destructor is the base one.
class ScriptVariableNameHashTable : public HashTable {
public:
    virtual bool HashKey(void* key, unsigned tableSize, unsigned* hash);  // slot 2: 0xf35f80
    virtual bool KeysEqual(void* a, void* b);                             // slot 3: 0xf35fb0
    virtual unsigned GrowSize();                                          // slot 5: 0xf35fc0
};

// 12VarHashTable, vtable 0x18ea478: string keys (case-insensitive unless flag bit 0; flag bit 1: owns the keys).
class VarHashTable : public HashTable {
public:
    virtual ~VarHashTable();                                              // slot 0: 0xf35b60 (D0 0xf35b40)
    virtual bool HashKey(void* key, unsigned tableSize, unsigned* hash);  // slot 2: 0xf35c30
    virtual bool KeysEqual(void* a, void* b);                             // slot 3: 0xf35c90
    virtual void DeleteItem(void* key, void* value);                      // slot 4: 0xf35d20

    unsigned char flags;  // 0x20
};

// 27CorePlayerPropertyHashTable, vtable 0x18ea558: a VarHashTable hashed on its first three letters, never grown.
class CorePlayerPropertyHashTable : public VarHashTable {
public:
    virtual bool HashKey(void* key, unsigned tableSize, unsigned* hash);  // slot 2: 0xf35d40
    virtual int Grow();                                                   // slot 8: 0xf35dc0
};

// 13EditTextTable, vtable 0x18e9e38: a VarHashTable that empties itself before the base destructor runs.
class EditTextTable : public VarHashTable {
public:
    virtual ~EditTextTable();  // slot 0: 0xec8c40 (D0 0xec8d00)
};

// 10ClassTable, vtable 0x18e9f30: a VarHashTable that empties itself before the base destructor runs.
class ClassTable : public VarHashTable {
public:
    virtual ~ClassTable();  // slot 0: 0xee4dc0 (D0 0xee4e80)
};

// 20ScriptWatchHashTable, vtable 0x18ea0e8: a ScriptVariableNameHashTable whose items it frees itself.
class ScriptWatchHashTable : public ScriptVariableNameHashTable {
public:
    virtual ~ScriptWatchHashTable();                  // slot 0: 0xefb3e0 (D0 0xefb4a0)
    virtual void DeleteItem(void* key, void* value);  // slot 4: 0xefb570
};

// 0xf8b140-owning interval manager (only its cookie table is known so far).
class IntervalMgr {
public:
    // Item of the cookie table; non-virtual destructor at 0xf8b140 (defined in FireAtom.cpp; field names provisional).
    struct Cookie {
        ~Cookie();
        static void operator delete(void* p) { FireFree(p); }

        // Steps of the destructor (provisional names; each nothrow scope gives its calls a terminate pad of its own).
        void ReleaseName() noexcept;
        void FreeBuffer() noexcept {
            FireFree(buffer10);
            buffer10 = 0;
        }

        struct FireAtomReleasable* target;  // 0x0
        struct FireAtomObject3* name;       // 0x8
        void* buffer10;                     // 0x10
        char pad18[0x20 - 0x18];
        unsigned argCount;                  // 0x20
        struct FireAtom* args;              // 0x28
        char pad30[0x3c - 0x30];
        int finished;                       // 0x3c (provisional)

        void Func_f8b230(int value);        // 0xf8b230 (provisional name)
    };

    // N11IntervalMgr15IntervalCookiesE, vtable 0x18ea7e0: owns its Cookie items.
    class IntervalCookies : public HashTable {
    public:
        // Spelled inline (defined in FireTables.cpp): the deleting destructor inlines it, which needs the inline hint.
        inline virtual ~IntervalCookies();                // slot 0: 0xf8b5a0 (D0 0xf8b660)
        virtual void DeleteItem(void* key, void* value);  // slot 4: 0xf8b730

        void Func_f8b820();
    };

    ~IntervalMgr();  // 0xf8b760

    IntervalCookies cookies;  // 0x0 (provisional name)
};

// Object at FirePlayerCore+0x40 (provisional): holds a heap at +0x30.
struct FirePlayerContext {
    char pad0[0x30];
    void* heap;  // 0x30
    char pad38[0x40 - 0x38];
    void* value40;  // 0x40: second FireAlloc argument (provisional)
    void* value48;  // 0x48: second FireAlloc argument for script text (provisional)
};

// Fire's heap string (provisional name FireString): a buffer allocated from its owner's heap.
struct FireString {
    // Empty string drawing on owner's heap (provisional reading of the 31 at +0x10).
    FireString(FirePlayerContext* o) { data = 0; length = 0; capacity = 0; owner = o; value10 = 31; }

    // 0xf27f00: frees the buffer when the string has an owner.
    ~FireString() {
        if (data && owner) FireFree(data);
    }

    // Frees the buffer and empties the string (provisional name; inlined into the setters).
    void Clear() {
        if (data && owner) {
            FireFree(data);
            data = 0;
            length = 0;
            capacity = 0;
        }
    }

    // Copies s into a new buffer from the owner's heap; nothing without an owner or when s is the buffer (provisional
    // name). The original inlines it into each setter; always_inline stands in for that inlining (its only support is
    // that it matches).
    __attribute__((always_inline)) void Assign(const char* s) {
        if (s == 0) return;
        if (owner == 0) return;
        Clear();
        int len = 0;
        if (*s) {
            const char* p = s;
            while (*++p) {}
            len = p - s;
        }
        length = len;
        capacity = len + 1;
        char* d = (char*)FireAlloc(owner->heap, 0, capacity, 0, 0);
        data = d;
        if (d) {
            while (*s) *d++ = *s++;
            *d = 0;
        } else {
            length = 0;
            capacity = 0;
        }
    }

    void Set(const char* s);
    void Set(const FireString& other);
    FireString& operator=(const char* s);
    void Append(const char* s);
    void Append(char c);
    void Set(const char* s, int max);

    // Takes p (n bytes plus the terminator) as the buffer when the string has an owner (provisional name).
    void Adopt(char* p, unsigned n) {
        if (!owner) return;
        Clear();
        length = n;
        capacity = n + 1;
        data = p;
    }

    char* data;                  // 0x0
    int length;                  // 0x8
    int capacity;                // 0xc
    int value10;                 // 0x10: 31 when constructed (provisional)
    FirePlayerContext* owner;    // 0x18: its heap backs the buffer (provisional)
};

// Record of five strings and a few settings (provisional name and layout; the strings sit 0x20 bytes apart).
struct FireStringRecord {
    FireStringRecord(FirePlayerContext* owner);
    ~FireStringRecord();  // 0xf34b70: the five string destructors
    void Reset();

    FireString text0;     // 0x0
    FireString text20;    // 0x20
    FireString text40;    // 0x40
    FireString text60;    // 0x60
    int value80;          // 0x80
    int value84;          // 0x84
    FireString text88;    // 0x88
    bool flaga8;          // 0xa8
    char pada9[0xb0 - 0xa9];
    FirePlayerContext* owner;  // 0xb0
    short valueb8;        // 0xb8
};

// Reference-counted block held by PlatformECharFormat+0xd8 (provisional name and layout).
struct FireRefBlock {
    void* data;         // 0x0
    unsigned refCount;  // 0x8

    ~FireRefBlock() { data = 0; }
    static void operator delete(void* p) { FireFree(p); }
};

// Owning reference to a FireRefBlock (provisional): its destructor drops the reference. The original's release runs
// in a destructor of its own (no base-destructor cleanup around it), which a member like this gives.
struct FireRefBlockRef {
    FireRefBlock* block;

    ~FireRefBlockRef() { Release(); }

    void Release() noexcept {
        if (block) {
            if (--block->refCount == 0) delete block;
            block = 0;
        }
    }
};

// 11ECharFormat, vtable 0x18ea3d8: base character format (destructor 0xf2b2c0).
class ECharFormat {
public:
    virtual ~ECharFormat();

    void Func_f2b740(class EDevice* device, int value);  // 0xf2b740 (provisional name)

    ECharFormat& operator=(const ECharFormat& other);

    // Four 32-bit values copied as one block (provisional).
    struct Block16 {
        int v[4];
    };
    // Fixed 32-byte name (provisional): copies at most 31 bytes.
    struct Name32 {
        void Set(const Name32& other) {
            const char* s = other.text;
            for (int i = 0; i < 32; i++) {
                text[i] = *s;
                if (*s) s++;
            }
            text[31] = 0;
        }
        char text[32];
    };

    FireString font8;        // 0x8 (provisional names from here on)
    FireString text28;       // 0x28
    Name32 face48;           // 0x48
    FireString text68;       // 0x68
    FireString text88;       // 0x88
    int valuea8;             // 0xa8
    int valueac;             // 0xac
    Block16 blockb0;         // 0xb0
    char padc0[0xc8 - 0xc0]; // 0xc0: not copied by operator=
    long valuec8;            // 0xc8
    int valued0;             // 0xd0
};

// 19PlatformECharFormat, vtable 0x18ea270.
class PlatformECharFormat : public ECharFormat {
public:
    virtual ~PlatformECharFormat();  // slots 0/1: 0xf287e0 / 0xf28830
    virtual void Slot2();            // 0xf283a0

    static void operator delete(void* p) { FireFree(p); }
    static void operator delete[](void* p) { FireFree(p); }

    FireRefBlockRef block;  // 0xd8 (provisional name)
};

// 7EDevice, vtable 0x18ea348: base drawing device; its destructor (0xf29460) frees two buffers.
class EDevice {
public:
    virtual ~EDevice() {
        FreeBuffer(buffer20);
        FreeBuffer(buffer28);
    }

    // Frees and clears one buffer (provisional; its own nothrow scope gives each free a separate terminate pad).
    static void FreeBuffer(void*& p) noexcept {
        if (p) {
            FireFree(p);
            p = 0;
        }
    }

    char pad8[0x10 - 0x8];
    class RichEdit* richEdit;  // 0x10: the editor drawing through this device, if any (provisional)
    char pad18[0x20 - 0x18];
    void* buffer20;  // 0x20 (provisional)
    void* buffer28;  // 0x28 (provisional)
    int mode30;      // 0x30: 1 or 2 while drawing (provisional)
    int lockCount;   // 0x34 (provisional)
    char pad38[0x3a - 0x38];
    bool flag3a;     // 0x3a (provisional)
    char pad3b[0x48 - 0x3b];
};

// 15PlatformEDevice, vtable 0x18ea2b0 (14 slots; the first eleven are declared).
class PlatformEDevice : public EDevice {
public:
    virtual ~PlatformEDevice();  // slots 0/1: 0xf28890 / 0xf28920
    virtual void Slot2();        // 0xf28940
    virtual void Slot3();        // 0xf28950
    virtual void Slot4();        // 0xf28c80
    virtual void Slot5();        // 0xf28c90
    virtual void Slot6();        // 0xf28dc0
    virtual void Slot7();        // 0xf29000
    virtual void Slot8();        // 0xf29090
    virtual void Slot9();        // 0xf29200
    virtual void Slot10(int value);  // 0xf29210

    PlatformECharFormat charFormat;  // 0x48 (provisional name)
    void* value128;                  // 0x128 (provisional)
};

// Fire's hardware-abstraction ("achw") device objects (names provisional except the RTTI class names).
// Object reached from a device's context whose slot 4 gives the player (provisional).
struct AchwPlayerSource {
    virtual void Slot0();
    virtual void Slot1();
    virtual void Slot2();
    virtual void Slot3();
    virtual class PlatformPlayer* Player();  // slot 4
};
struct AchwContextEntry {
    char pad0[0x58];
    AchwPlayerSource* source;  // 0x58
};
// Usage counter of an AchwContext (provisional): index 0 totals, the others count per bucket.
struct AchwUsage {
    int value0;  // 0x0 (provisional)
    int bytes;   // 0x4
    int value8;  // 0x8 (provisional)
};
// Device object manager (provisional name): usage counters, the chain of live objects, and the player source.
struct AchwContext {
    // Takes o out of the chain and the counters, tells it so, then deletes it when it deletes itself (provisional).
    void Remove(class achwBaseDeviceObject* o);

    AchwUsage usage[4];                  // 0x0
    class achwBaseDeviceObject* head;    // 0x30
    class achwBaseDeviceObject* tail;    // 0x38
    AchwContextEntry** entries;          // 0x40
};

// 20achwBaseDeviceObject, vtable 0x18e9b40.
class achwBaseDeviceObject {
public:
    // Slots 0/1: 0xec52b0 / 0xec52c0. The body holds a statement that compiles to nothing (an assertion in release, by
    // the look of it); (void)0 stands in for it, which keeps the vtable store an empty body would drop.
    virtual ~achwBaseDeviceObject() { (void)0; }
    static void operator delete(void* p) { FireFree(p); }
    virtual void Slot2();               // 0xec52d0
    virtual void Release(int how) = 0;  // slot 3 (provisional name; AchwContext::Remove passes 0)

    AchwContext* context;          // 0x8 (provisional)
    achwBaseDeviceObject* prev;    // 0x10
    achwBaseDeviceObject* next;    // 0x18
    unsigned char bucket;          // 0x20
    bool deleteOnRemove;           // 0x21 (provisional)
    short slot;                    // 0x22 (provisional)
    int size;                      // 0x24 (provisional)
    int value28;                   // 0x28 (provisional)
};

inline void AchwContext::Remove(achwBaseDeviceObject* o) {
    if (o->next) o->next->prev = o->prev;
    else tail = o->prev;
    (!o->prev ? head : o->prev->next) = o->next;
    o->prev = 0;
    o->next = 0;
    usage[0].bytes -= o->size;
    usage[o->bucket].bytes -= o->size;
    o->Release(0);
    o->slot = -1;
    if (o->deleteOnRemove) {
        __builtin_assume(o != 0);  // stands in for an unknown release-mode assertion (supported only by the match)
        delete o;
    } else {
        o->size = 0;
        o->value28 = 0;
    }
}

// 8RichEdit, vtable 0x18ea228: only the fields the device code reaches are declared (names provisional).
// RichEdit's member at +0xb0 (provisional name and layout): two indices and an owned buffer.
struct FireRichEditSpan {
    ~FireRichEditSpan();

    int value0;    // 0x0
    int start4;    // 0x4 (provisional)
    int end8;      // 0x8 (provisional)
    void* buffer;  // 0x10
};

// Item of RichEdit's list at +0x2c0 (provisional; destructor 0xf11440). Its own operator delete checks for null.
struct FireRichEditItem {
    ~FireRichEditItem();
    static void operator delete(void* p) {
        if (p) FireFree(p);
    }
};

// RichEdit line record (provisional; 0x68 bytes, destructor 0xf118b0).
struct FireRichEditLine {
    ~FireRichEditLine();
    static void operator delete[](void* p) { FireFree(p); }
    char pad0[0x68];
};
// RichEdit text block chained at +0x510 (provisional; destructor 0xf114c0, next block at +0x70).
struct FireRichEditBlock {
    ~FireRichEditBlock();
    static void operator delete(void* p) { FireFree(p); }
    char pad0[0x70];
    FireRichEditBlock* next;  // 0x70
};
// Kind-4 script text (FireAtom.cpp's FireAtomObject4); only its Release (0xf2ea40) is needed here.
struct FireAtomObject4;
int FireTextRelease(FireAtomObject4* text);
// Reference to a script text (provisional; destructor 0xf2f8b0).
struct FireTextRef {
    ~FireTextRef();
    void* context;          // 0x0
    FireAtomObject4* text;  // 0x8
};
// 0xee3280: unregisters a named object from a player table (provisional name).
void FireUnregisterName(void* table, const char* name, void* object);
// Value word (FireAtom.cpp's FireAtom); only Clear (0xf34d70) is needed here.
struct FireValue {
    unsigned long bits;
    void Clear();

    // Kind of the value, looking through a kind-7 box (FireAtom::Kind in FireAtom.cpp).
    int Kind() const {
        int v = (int)bits;
        int k = v & 7;
        if (k == 7) {
            v = (int)((const FireValue*)(bits & ~7ul))[1].bits;  // the boxed value at +0x8
            k = v & 7;
        }
        return k == 2 ? v & 0x1f : k;
    }
};
// Player fields a RichEdit reaches (provisional).
struct FireRichEditPlayer {
    char pad0[0xc50];
    char namesc50[1];  // 0xc50 (provisional)
};

// Simple chain link (provisional).
struct FireChainLink {
    FireChainLink* next;  // 0x0
};
// Chain node with its own destructor (0xeffd80) and the next node at +0x18 (provisional).
struct FireChainNode {
    ~FireChainNode();
    static void operator delete(void* p) { FireFree(p); }
    char pad0[0x18];
    FireChainNode* next;  // 0x18
};
// 0xec1410: frees a texture handle (provisional name).
void FireFreeTexture(void* texture);

class RichEdit : public achwBaseDeviceObject {
public:
    virtual ~RichEdit();  // slots 0/1: 0xf25830 / 0xf25bb0
    void Release(int how);  // slot 3: 0xf25bd0

    void ClearCaches();

    // Frees the texture: through the manager when it holds a slot, directly otherwise (provisional name). Inlined
    // into 0xf24f40 and the destructor; always_inline stands in for that inlining (its only support is that it matches).
    __attribute__((always_inline)) void ReleaseTexture() {
        if (texture) {
            if (slot >= 0) {
                context->Remove(this);
            } else {
                FireFreeTexture(texture);
                texture = 0;
            }
            textureScaleX = 0;
            textureScaleY = 0;
        }
    }

    char pad2c[0x40 - 0x2c];
    void* buffer40;             // 0x40 (provisional names from here on)
    long value48;               // 0x48
    char pad50[0x68 - 0x50];
    char* name;                 // 0x68
    void* buffer70;             // 0x70
    char pad78[0x90 - 0x78];
    void* value90;              // 0x90
    char pad98[0xa0 - 0x98];
    FireRichEditPlayer* player; // 0xa0
    FireValue valuea8;          // 0xa8
    FireRichEditSpan span;      // 0xb0
    FireChainLink* linksc8;     // 0xc8
    FireChainNode* nodesd0;     // 0xd0
    FireChainLink* linksd8;     // 0xd8
    FireChainNode* nodese0;     // 0xe0
    void* buffere8;                   // 0xe8 (provisional)
    void* bufferf0;                   // 0xf0
    PlatformECharFormat charFormat;   // 0xf8
    char pad1d8[0x230 - 0x1d8];
    bool ownsBuffer40;                // 0x230
    char pad231[0x2c0 - 0x231];
    FireRichEditItem** items;         // 0x2c0
    int itemCount;                    // 0x2c8
    char pad2cc[0x2d8 - 0x2cc];
    FireRichEditLine line;            // 0x2d8
    FireTextRef textRef;              // 0x340
    char pad350[0x358 - 0x350];
    PlatformECharFormat* formats;     // 0x358 (array from new[])
    FireRichEditLine* lines;          // 0x360 (array from new[])
    char pad368[0x370 - 0x368];
    int formatCount;                  // 0x370
    char pad374[0x388 - 0x374];
    PlatformEDevice device;           // 0x388
    char pad[0x508 - 0x388 - sizeof(PlatformEDevice)];
    void* buffer508;                  // 0x508
    FireRichEditBlock* blocks;        // 0x510
    char pad518[0x530 - 0x518];
    void* texture;                    // 0x530
    float textureScaleX;              // 0x538 (provisional)
    float textureScaleY;              // 0x53c (provisional)
};

// 12DelayedEvent, vtable 0x18ea678: an event run later by the player (field names provisional).
class DelayedEvent {
public:
    virtual const char* TypeName();  // slot 0: 0xf4af50
    // 0xec9fd0 (slot 1) / 0xeca000 (slot 2, deleting): frees the owned buffer.
    virtual ~DelayedEvent() {
        if (owns40 && buffer28) FireFree(buffer28);
    }

    static void operator delete(void* p) { FireFree(p); }
    // Allocation from a player heap (provisional; no null check before construction, so not noexcept).
    static void* operator new(decltype(sizeof(0)) size, void* heap) { return FireAlloc(heap, 0, size, 0, 0); }

    // Event of a type with one value (provisional; inlined where events are queued).
    DelayedEvent(int type, long value) : type(type), value10(value) {
        value18 = 0;
        value20 = 0;
        buffer28 = 0;
        value30 = 0;
        next = 0;
        owns40 = 0;
    }

    int type;  // 0x8: kEvent... constant
    long value10;    // 0x10 (provisional names from here on)
    long value18;    // 0x18
    long value20;    // 0x20
    void* buffer28;  // 0x28
    long value30;    // 0x30
    DelayedEvent* next;  // 0x38: next queued event
    void* owns40;    // 0x40
};

// String held by a navigation request (provisional): kinds 1 and 2 own their data.
struct FireNavString {
    void* data;           // 0x0
    unsigned short kind;  // 0x8
};

// Request held by DelayedNavigationEvent+0x48 (provisional).
struct FireNavRequest {
    FireNavString* url;  // 0x0

    ~FireNavRequest() {
        FireNavString* s = url;
        if (s) {
            if (s->kind == 2) FireFree(s->data);
            else if (s->kind == 1) FireFree(s->data);
            FireFree(s);
        }
    }
    static void operator delete(void* p) { FireFree(p); }
};

// 22DelayedNavigationEvent, vtable 0x18ea638.
class DelayedNavigationEvent : public DelayedEvent {
public:
    const char* TypeName() override;    // slot 0: 0xf4ad00
    virtual ~DelayedNavigationEvent();  // slots 1/2: 0xf4ae00 / 0xf4aea0

    FireNavRequest* request;  // 0x48
};

// Object whose slot 3 takes the player's frame interval (provisional).
struct FireIntervalTarget {
    virtual void Slot0();
    virtual void Slot1();
    virtual void Slot2();
    virtual void SetIntervalMs(long ms);  // slot 3
};

// Player timer at core+0x830 (provisional).
struct FireTimer {
    FireIntervalTarget** target;  // 0x0
    char pad8[0x28 - 0x8];
    long intervalMs;  // 0x28
    char pad30[0x60 - 0x30];
    int state60;  // 0x60 (provisional)
};


// First base of FirePlayerCore (provisional).
struct FirePlayerCoreBase {
    char pad0[0x38];
    void* heap38;                // 0x38: heap for player-owned arrays (provisional)
    FirePlayerContext* context;  // 0x40 (provisional)
    char pad48[0x830 - 0x48];
};
// Second base of FirePlayerCore at +0x830 (provisional): 0xf90a60 converts a core to it with a null check, the mark
// of a base class.
struct FireTimerClient {
    FireTimer* timer;  // 0x0 (core+0x830)
};

// Object at PlatformPlayer+0x1608 (provisional).
struct FirePlayerCore : FirePlayerCoreBase, FireTimerClient {
    void Func_ebc150();  // 0xebc150 (provisional name)
    void Func_ebe3f0(struct FireLoadRequest* request);  // 0xebe3f0 (provisional name)
};

// Object at PlatformPlayer+0x960 (provisional name and layout).
struct FirePlayerMovie {
    unsigned char kind;  // 0x0 (provisional)
    char pad1[0x18 - 0x1];
    void* value18;       // 0x18 (provisional)
};

// Node of a tree walked in preorder (provisional name and layout).
struct FireDisplayNode {
    void Func_f060b0();  // 0xf060b0 (provisional name)

    // Next node in preorder below root, or null (provisional; inlined by the player).
    FireDisplayNode* Next(FireDisplayNode* root) {
        if (child) return child;
        FireDisplayNode* p = this;
        while (!p->sibling) {
            p = p->parent;
            if (p == root) return 0;
        }
        return p->sibling;
    }

    char pad0[0x8];
    FireDisplayNode* parent;   // 0x8
    FireDisplayNode* sibling;  // 0x10
    FireDisplayNode* child;    // 0x18
    char pad20[0x30 - 0x20];
};

// Rectangle of four ints (provisional).
struct FireRect {
    int v[4];
};

// Load request built by PlatformPlayer slot 8 (provisional names and meanings).
struct FireLoadRequest {
    const char* url;             // 0x0
    short urlLength;             // 0x8
    const char* target;          // 0x10
    unsigned long targetLength;  // 0x18
    struct FireLoadSettings* settings;  // 0x20
    short flag40;                // 0x28
    short flag42;                // 0x2a
    void* value48;               // 0x30
};

// Settings block passed to a load request (provisional; 24 bytes copied whole).
struct FireLoadSettings {
    long v[3];
};

// Value returned by PlatformPlayer slots 20/21 (provisional): built by the constructor at 0xf335f0.
struct FireSlotResult {
    FireSlotResult(void* source, void* arg, void* a3, int a4, void* a5);
    ~FireSlotResult();
    void* data[4];
};

// 14PlatformPlayer, vtable 0x18e9bf8 (33 slots; only the first ones are declared).
class PlatformPlayer {
public:
    virtual void Slot0();                   // 0xec6520
    virtual void Slot1();                   // 0xec6530
    virtual void Slot2();                   // 0xec6540
    virtual void Slot3();                   // 0xec6560
    virtual void Slot4();                   // 0xec6570
    virtual bool SetFrameRate(int fps);     // slot 5: 0xec6580 (provisional name)
    virtual void Slot6();                   // 0xec65d0
    virtual void Slot7();                   // 0xec65e0: sets value1600 to a copy of "."
    virtual int Slot8(const char* url, void* value, const char* target, int unused, bool flag42, bool flag40,
                      struct FireLoadSettings* settings);  // 0xec6650 (provisional meanings)
    virtual void Slot9();                   // 0xec6710
    virtual void Slot10();                  // 0xec6720
    virtual void Slot11();                  // 0xec6730
    virtual void Slot12();                  // 0xec6740
    virtual void Slot13();                  // 0xec8ff0
    virtual void Slot14();                  // 0xec9120
    virtual int Slot15(class URLStream* stream);  // 0xec91d0 (provisional meaning)
    virtual void Slot16();                  // 0xec92d0
    virtual void Slot17(class URLStream* stream, bool keep);  // 0xec9500 (provisional meaning)
    virtual void Slot18();                  // 0xec6750
    virtual void Slot19();                  // 0xec6760
    virtual FireSlotResult Slot20(void* arg);  // 0xec9600
    virtual FireSlotResult Slot21(void* arg);  // 0xec97b0
    virtual void Slot22();                  // 0xec97f0
    virtual int Slot23();                   // 0xec9800
    virtual void Slot24();                  // 0xec9b00
    virtual void Slot25();                  // 0xec6770
    virtual void Slot26();                  // 0xec9c70
    virtual void Slot27();                  // 0xec9c90
    virtual void Slot28(int code);          // 0xec6780

    void RunEvent(DelayedEvent* e);  // 0xec9cf0 (provisional name)

    char pad8[0x10 - 0x8];
    char value10[0x3dc - 0x10];  // 0x10: sub-object some streams point at (provisional)
    int frameRate;  // 0x3dc (provisional)
    char pad3e0[0x740 - 0x3e0];
    char value740[0x30];  // 0x740 (provisional)
    FireDisplayNode displayRoot;  // 0x770 (provisional)
    char pad7a0[0x814 - 0x7a0];
    unsigned flags814;    // 0x814 (provisional)
    char pad818[0x8ac - 0x818];
    bool flag8ac;         // 0x8ac (provisional)
    unsigned char flag8ad;  // 0x8ad (provisional)
    char pad8ae[0x8d8 - 0x8ae];
    FireRect dirty8d8;    // 0x8d8: INT_MIN in every field when empty (provisional)
    int value8e8;         // 0x8e8 (provisional)
    char pad8ec[0x960 - 0x8ec];
    FirePlayerMovie* movie;  // 0x960 (provisional name)
    char pad968[0xec0 - 0x968];
    int valueec0;         // 0xec0 (provisional)
    char padec4[0xf18 - 0xec4];
    FireLoadSettings defaultSettings;  // 0xf18 (provisional)
    char padf30[0x1011 - 0xf30];
    bool flag1011;  // 0x1011: set while slot 13 runs (provisional)
    char pad1012[0x1248 - 0x1012];
    unsigned flags1248;  // 0x1248 (provisional)
    int value124c;       // 0x124c (provisional)
    char pad1250[0x15e8 - 0x1250];
    int value15e8;  // 0x15e8 (provisional)
    char pad15ec[0x1600 - 0x15ec];
    void* value1600;       // 0x1600 (provisional)
    FirePlayerCore* core;  // 0x1608
    char pad1610[0x162c - 0x1610];
    int flag162c;  // 0x162c (provisional names from here on)
    int flag1630;  // 0x1630
    int flag1634;  // 0x1634
    int flag1638;  // 0x1638
    char pad163c[0x1680 - 0x163c];
    int value1680;  // 0x1680
    char pad1684[0x1690 - 0x1684];
    int flag1690;  // 0x1690
    int flag1694;  // 0x1694
    char pad1698[0x16a0 - 0x1698];
    int flag16a0;  // 0x16a0
    unsigned short value16a4;  // 0x16a4
    int value16a8;  // 0x16a8
    char pad16ac[0x16b8 - 0x16ac];
    DelayedEvent* eventHead;  // 0x16b8: queued events (provisional)
    DelayedEvent* eventTail;  // 0x16c0
};
