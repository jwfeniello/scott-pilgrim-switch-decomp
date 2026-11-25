// Fire's derived hash tables outside the HashTable file (their destructors call the base destructors out of line).
#include "FireCore.h"

// 0xec8c40 (EditTextTable slot 0): empties the table while its own slots are in place.
// The deleting destructor (0xec8d00) inlines this body, as the link-time optimizer did. Spelled inline it would leave the
// class without a key function here, so always_inline stands in for that inlining (its only support is that it matches).
__attribute__((always_inline)) EditTextTable::~EditTextTable() {
    RemoveAll();
}

// 0xee4dc0 (ClassTable slot 0): empties the table while its own slots are in place.
// The deleting destructor (0xee4e80) inlines this body, as the link-time optimizer did. Spelled inline it would leave the
// class without a key function here, so always_inline stands in for that inlining (its only support is that it matches).
__attribute__((always_inline)) ClassTable::~ClassTable() {
    RemoveAll();
}

// 0xefb3e0 (ScriptWatchHashTable slot 0): empties the table while its own slots are in place.
// The deleting destructor (0xefb4a0) inlines this body, as the link-time optimizer did. Spelled inline it would leave the
// class without a key function here, so always_inline stands in for that inlining (its only support is that it matches).
__attribute__((always_inline)) ScriptWatchHashTable::~ScriptWatchHashTable() {
    RemoveAll();
}

// 0xf8b5a0 (IntervalCookies slot 0): empties the table so DeleteItem frees the cookies.
inline IntervalMgr::IntervalCookies::~IntervalCookies() {
    RemoveAll();
}

// 0xf8b760: empties the cookie table, then the table member goes.
IntervalMgr::~IntervalMgr() {
    cookies.RemoveAll();
}

// 0xf8b820: passes 0 to every cookie's 0xf8b230, then deletes the finished cookies (provisional meaning).
// Not yet matched: the original keeps the table size in w8 across the second loop (buckets in x9, compare with uxtw);
// ours reloads it (buckets in x8).
void IntervalMgr::IntervalCookies::Func_f8b820() {
    if (count) {
        for (unsigned long i = 0; i < tableSize; i++) {
            for (Entry* e = buckets[i]; e; e = e->next) ((Cookie*)e->value)->Func_f8b230(0);
        }
    }
    for (unsigned long i = 0; i < tableSize; i++) {
        Entry** link = &buckets[i];
        Entry* e = *link;
        while (e) {
            Cookie* c = (Cookie*)e->value;
            Entry* next = e->next;
            if (c->finished) {
                *link = next;
                delete c;
                FreeEntry(e);
                count--;
                e = next;
                continue;
            }
            link = &e->next;
            e = next;
        }
    }
}

// 0xf8b730 (IntervalCookies slot 4): deletes the cookie.
void IntervalMgr::IntervalCookies::DeleteItem(void* key, void* value) {
    if (value) delete (Cookie*)value;
}

// ScriptObject and FunctionScriptObject (vtables 0x18e9ff8 and 0x18ea158), as far as the latter's destructors need
// them: slots 4 and 5 are the destructors. The two calls' names are provisional.
struct ScriptObjectOwnerLink;
// What slot 6 returns (provisional): +0x48 leads to the player.
struct ScriptObjectOwner {
    char pad0[0x48];
    ScriptObjectOwnerLink* link48;  // 0x48
};
// Player's list of releasable script objects (provisional): head at +0x18, count at +0x10.
struct ScriptObjectList {
    char pad0[0x10];
    int count;                   // 0x10
    char pad14[0x18 - 0x14];
    struct ScriptObject* head;   // 0x18
};
struct ScriptObjectPlayer {
    char pad0[0xea8];
    ScriptObjectList* releasable;  // 0xea8 (provisional)
};
struct ScriptObjectOwnerLink {
    char pad0[0x3f8];
    ScriptObjectPlayer* player;  // 0x3f8
};

struct ScriptObject {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3();
    virtual ~ScriptObject();                // slots 4 and 5 (0xeea5a0)
    virtual ScriptObjectOwner* Slot6();     // 0xeeaa00: the owner, when the object is not counted (provisional)
    virtual void Slot7();                   // 0xeeaa40: drops a reference
    void Release() noexcept;                // 0xeeacc0 (no landing pad guards it)
    static void operator delete(void* p) { FireFree(p); }

    // Slot 7's body (provisional name): at the last reference of an unpinned object, frees it. Both slot 7 functions
    // carry it whole; always_inline stands in for that (its only support is that it matches).
    __attribute__((always_inline)) void DropReference() {
        if ((flags17 & 8) || Slot6()) return;
        if (--refCount) return;
        if (pinned14) return;
        Free();
    }

    bool Unpin();

    // Leaves the player's list of releasable objects and deletes the object (provisional name).
    __attribute__((always_inline)) void Free() {
        if (!player) {
            ScriptObjectOwner* o = Slot6();
            if (o && o->link48) player = o->link48->player;
        }
        if (player && !Slot6() && !(flags17 & 8)) {
            if (ScriptObjectList* list = player->releasable) {
                if (list->head == this) {
                    list->head = next;
                    if (next) next->prev = 0;
                } else {
                    if (prev) prev->next = next;
                    if (next) next->prev = prev;
                }
                prev = 0;
                next = 0;
                list->count--;
            }
        }
        __builtin_assume(this != 0);  // stands in for an unknown release-mode assertion (supported only by the match)
        delete this;
    }

    char pad8[0x10 - 0x8];
    int refCount;                  // 0x10
    unsigned short pinned14;       // 0x14 (provisional)
    char pad16[0x17 - 0x16];
    unsigned char flags17;         // 0x17: bit 3 keeps the object alive (provisional)
    ScriptObjectPlayer* player;    // 0x18
    char pad20[0x60 - 0x20];
    ScriptObject* prev;            // 0x60
    ScriptObject* next;            // 0x68
};
struct FunctionScriptObject : ScriptObject {
    ~FunctionScriptObject() override;
    void Slot7() override;                  // 0xefb890: the same body as ScriptObject's
    void ClearFunction();                   // 0xefb9d0
};

// 0xeeaa40 (ScriptObject slot 7): drops a reference.
void ScriptObject::Slot7() {
    DropReference();
}

// 0xeeb410: drops a pin; the last pin of an unreferenced object frees it (true).
bool ScriptObject::Unpin() {
    if (!pinned14) return false;
    if (--pinned14) return false;
    if (refCount) return false;
    Free();
    return true;
}

// 0xefb890 (FunctionScriptObject slot 7): drops a reference (an identical copy of ScriptObject's).
void FunctionScriptObject::Slot7() {
    DropReference();
}
// Slot 4 (0xefb7e0): releases what the object holds and its function, then destroys the base. The deleting destructor
// (slot 5, 0xefb830) inlines this body; always_inline stands in for that inlining (its only support is that it
// matches).
__attribute__((always_inline)) FunctionScriptObject::~FunctionScriptObject() {
    Release();
    ClearFunction();
}
