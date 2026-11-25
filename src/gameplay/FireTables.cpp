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

// 0xf8b730 (IntervalCookies slot 4): deletes the cookie.
void IntervalMgr::IntervalCookies::DeleteItem(void* key, void* value) {
    if (value) delete (Cookie*)value;
}

// ScriptObject and FunctionScriptObject (vtables 0x18e9ff8 and 0x18ea158), as far as the latter's destructors need
// them: slots 4 and 5 are the destructors. The two calls' names are provisional.
struct ScriptObject {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3();
    virtual ~ScriptObject();                // slots 4 and 5 (0xeea5a0)
    void Release() noexcept;                // 0xeeacc0 (no landing pad guards it)
    static void operator delete(void* p) { FireFree(p); }
};
struct FunctionScriptObject : ScriptObject {
    ~FunctionScriptObject() override;
    void ClearFunction();                   // 0xefb9d0
};
// Slot 4 (0xefb7e0): releases what the object holds and its function, then destroys the base. The deleting destructor
// (slot 5, 0xefb830) inlines this body; always_inline stands in for that inlining (its only support is that it
// matches).
__attribute__((always_inline)) FunctionScriptObject::~FunctionScriptObject() {
    Release();
    ClearFunction();
}
