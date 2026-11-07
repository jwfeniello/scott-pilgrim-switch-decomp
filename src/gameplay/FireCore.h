#pragma once
// Fire: Ubisoft's Flash player embedded in the game (0xec0000-0xf90000).
// Its classes live in the global namespace (RTTI names 9HashTable, 12VarHashTable, 14PlatformPlayer, ...).
// Function and field names not backed by RTTI are provisional.

// 0xf9fb50: Fire heap allocation; name and parameter meaning are guesses (all five arguments are 64-bit).
void* FireAlloc(void* heap, void* arg1, unsigned long size, void* arg3, void* arg4);
// 0xfa0140: Fire heap free (provisional name).
void FireFree(void* p);
// 0xec23d0: zero-fills a block (provisional name).
void FireZero(void* p, unsigned long size);

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
    // Item of the cookie table; non-virtual destructor at 0xf8b140 (provisional name).
    struct Cookie {
        ~Cookie();
        static void operator delete(void* p) { FireFree(p); }
    };

    // N11IntervalMgr15IntervalCookiesE, vtable 0x18ea7e0: owns its Cookie items.
    class IntervalCookies : public HashTable {
    public:
        // Spelled inline (defined in FireTables.cpp): the deleting destructor inlines it, which needs the inline hint.
        inline virtual ~IntervalCookies();                // slot 0: 0xf8b5a0 (D0 0xf8b660)
        virtual void DeleteItem(void* key, void* value);  // slot 4: 0xf8b730
    };
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

    void Release() throw() {
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

    char pad8[0xd8 - 0x8];
};

// 19PlatformECharFormat, vtable 0x18ea270.
class PlatformECharFormat : public ECharFormat {
public:
    virtual ~PlatformECharFormat();  // slots 0/1: 0xf287e0 / 0xf28830
    virtual void Slot2();            // 0xf283a0

    static void operator delete(void* p) { FireFree(p); }

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
    static void FreeBuffer(void*& p) throw() {
        if (p) {
            FireFree(p);
            p = 0;
        }
    }

    char pad8[0x20 - 0x8];
    void* buffer20;  // 0x20 (provisional)
    void* buffer28;  // 0x28 (provisional)
    char pad30[0x48 - 0x30];
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
};

// 12DelayedEvent, vtable 0x18ea678: an event run later by the player (field names provisional).
class DelayedEvent {
public:
    virtual void Slot0();  // 0xf4af50
    // 0xec9fd0 (slot 1) / 0xeca000 (slot 2, deleting): frees the owned buffer.
    virtual ~DelayedEvent() {
        if (owns40 && buffer28) FireFree(buffer28);
    }

    static void operator delete(void* p) { FireFree(p); }

    char pad8[0x28 - 0x8];
    void* buffer28;  // 0x28
    char pad30[0x40 - 0x30];
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
    virtual void Slot0();               // 0xf4ad00
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
};

// Object at PlatformPlayer+0x1608 (provisional).
struct FirePlayerCore {
    char pad0[0x40];
    void* source40;  // 0x40 (provisional)
    char pad48[0x830 - 0x48];
    FireTimer* timer;  // 0x830
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
    virtual void Slot7();                   // 0xec65e0
    virtual void Slot8();                   // 0xec6650
    virtual void Slot9();                   // 0xec6710
    virtual void Slot10();                  // 0xec6720
    virtual void Slot11();                  // 0xec6730
    virtual void Slot12();                  // 0xec6740
    virtual void Slot13();                  // 0xec8ff0
    virtual void Slot14();                  // 0xec9120
    virtual void Slot15();                  // 0xec91d0
    virtual void Slot16();                  // 0xec92d0
    virtual void Slot17();                  // 0xec9500
    virtual void Slot18();                  // 0xec6750
    virtual void Slot19();                  // 0xec6760
    virtual FireSlotResult Slot20(void* arg);  // 0xec9600
    virtual FireSlotResult Slot21(void* arg);  // 0xec97b0

    char pad8[0x3dc - 0x8];
    int frameRate;  // 0x3dc (provisional)
    char pad3e0[0x1600 - 0x3e0];
    void* value1600;       // 0x1600 (provisional)
    FirePlayerCore* core;  // 0x1608
};
