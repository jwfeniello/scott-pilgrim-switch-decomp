// Fire's derived hash tables outside the HashTable file (their destructors call the base destructors out of line).
#include "FireCore.h"

// 0xec8c40 (EditTextTable slot 0): empties the table while its own slots are in place.
// Not yet matched: the deleting destructor (0xec8d00) inlines this body in the original; that needs the inline hint, but
// spelled inline this destructor would leave the class without a key function here, so no vtable or destructors get emitted.
EditTextTable::~EditTextTable() {
    RemoveAll();
}

// 0xee4dc0 (ClassTable slot 0): empties the table while its own slots are in place.
// Not yet matched: the deleting destructor (0xee4e80) inlines this body in the original; that needs the inline hint, but
// spelled inline this destructor would leave the class without a key function here, so no vtable or destructors get emitted.
ClassTable::~ClassTable() {
    RemoveAll();
}

// 0xefb3e0 (ScriptWatchHashTable slot 0): empties the table while its own slots are in place.
// Not yet matched: the deleting destructor (0xefb4a0) inlines this body in the original; that needs the inline hint, but
// spelled inline this destructor needs DeleteItem (0xefb570, unmatched) defined here as the key function, so no vtable or destructors get emitted.
ScriptWatchHashTable::~ScriptWatchHashTable() {
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
