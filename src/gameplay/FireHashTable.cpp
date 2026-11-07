// Fire's HashTable family (9HashTable and its derived tables).
#include "FireCore.h"

// 0xf35730 (slot 0): frees every entry, then the bucket array.
// Spelled inline in this file only: the deleting destructors here inline it (needs the inline hint), while the
// derived destructors in other files (0xf8b5a0, 0xefb3e0) tail-call it, so its body is not in the header.
inline HashTable::~HashTable() {
    RemoveAll();
    FireFree(buckets);
}

// 0xf358a0 (slot 2): the key itself modulo the table size (already credited elsewhere; kept for the vtable).
bool HashTable::HashKey(void* key, unsigned tableSize, unsigned* hash) {
    *hash = (unsigned)(unsigned long)key % tableSize;
    return true;
}

// 0xf358c0 (slot 3): keys compare by identity (already credited elsewhere).
bool HashTable::KeysEqual(void* a, void* b) {
    return a == b;
}

// 0xf358d0 (slot 4): the base table owns nothing (already credited elsewhere).
void HashTable::DeleteItem(void* key, void* value) {
}

// 0xf358e0 (slot 5): next table size, 2n+1 (already credited elsewhere).
unsigned HashTable::GrowSize() {
    return tableSize * 2 + 1;
}

// 0xf358f0 (slot 6): an entry from the owner's entry heap (already credited elsewhere).
HashTable::Entry* HashTable::NewEntry() {
    return (Entry*)FireAlloc(owner->entryHeap, 0, owner->entrySize, 0, 0);
}

// 0xf35910 (slot 7): frees an entry (already credited elsewhere).
void HashTable::FreeEntry(Entry* entry) {
    FireFree(entry);
}

// 0xf35920 (slot 8): rehashes every entry into a bucket array of GrowSize() buckets; 0 ok, 1 hash failed, 4 no memory.
// Not yet matched: the original copies GrowSize()'s result to w9 before loading owner->heap; ours copies it after.
int HashTable::Grow() {
    if (!buckets) return 1;
    unsigned newSize = GrowSize();
    Entry** newBuckets = (Entry**)FireAlloc(owner->heap, 0, (unsigned long)newSize * sizeof(Entry*), 0, 0);
    if (!newBuckets) return 4;
    FireZero(newBuckets, (unsigned long)newSize * sizeof(Entry*));
    unsigned oldSize = tableSize;
    for (unsigned i = 0; i < oldSize; i++) {
        Entry* e = buckets[i];
        while (e) {
            Entry* next = e->next;
            unsigned h;
            if (!HashKey(e->key, newSize, &h)) {
                FireFree(newBuckets);
                return 1;
            }
            e->next = newBuckets[h];
            newBuckets[h] = e;
            e = next;
        }
    }
    FireFree(buckets);
    buckets = newBuckets;
    tableSize = newSize;
    return 0;
}

// 0xf35a30: sets key -> value (replacing an equal key's item), then grows once the table is full; false on failure.
bool HashTable::Insert(void* key, void* value) {
    unsigned h;
    if (!buckets) return false;
    if (!HashKey(key, tableSize, &h)) return false;
    if (!buckets) return false;
    unsigned index = h;
    Entry* e;
    for (e = buckets[index]; e; e = e->next) {
        if (KeysEqual(e->key, key)) {
            DeleteItem(e->key, e->value);
            break;
        }
    }
    if (!e) {
        e = NewEntry();
        if (!e) return false;
        e->next = buckets[index];
        buckets[index] = e;
        count++;
    }
    e->key = key;
    e->value = value;
    if (count >= tableSize && Grow() == 1) return false;
    return true;
}

// 0xf35e90 (IntegerHashTable slot 2): multiplicative hash of the low 32 bits modulo the table size (credited elsewhere).
bool IntegerHashTable::HashKey(void* key, unsigned tableSize, unsigned* hash) {
    *hash = (unsigned)((unsigned long)(unsigned)(unsigned long)key * 0x4e17 % tableSize);
    return true;
}

// 0xf35f80 (ScriptVariableNameHashTable slot 2): pointer hash masked to the (power of two) table size; null keys fail.
bool ScriptVariableNameHashTable::HashKey(void* key, unsigned tableSize, unsigned* hash) {
    if (key) *hash = (tableSize - 1) & ((unsigned)(unsigned long)key >> 2) * 0x4e17;
    return key != 0;
}

// 0xf35fb0 (ScriptVariableNameHashTable slot 3): identity compare (credited elsewhere).
bool ScriptVariableNameHashTable::KeysEqual(void* a, void* b) {
    return a == b;
}

// 0xf35fc0 (ScriptVariableNameHashTable slot 5): doubles, keeping a power of two (credited elsewhere).
unsigned ScriptVariableNameHashTable::GrowSize() {
    return tableSize * 2;
}

// 0xf35b60 (VarHashTable slot 0): empties the table while the string-key slots are still in place.
VarHashTable::~VarHashTable() {
    RemoveAll();
}

// 0xf35d20 (VarHashTable slot 4): frees the key when the table owns its keys (credited elsewhere).
void VarHashTable::DeleteItem(void* key, void* value) {
    if (flags & 2) FireFree(key);
}

// 0xf35c90 (VarHashTable slot 3): string compare, case-insensitive unless flag bit 0.
// Not yet matched: the original keeps the table in x8 and c2 in w10, steps s2 before s1, and compares separately on the
// case-sensitive exit.
bool VarHashTable::KeysEqual(void* a, void* b) {
    if (!a || !b) return false;
    const unsigned char* s1 = (const unsigned char*)a;
    const unsigned char* s2 = (const unsigned char*)b;
    unsigned char c1, c2;
    if (flags & 1) {
        do {
            c1 = *s1;
            c2 = *s2;
            if (!c1) break;
            s1++;
            s2++;
        } while (c1 == c2);
    } else {
        do {
            c1 = *s1 ^ FireCaseTable[*s1];
            c2 = *s2 ^ FireCaseTable[*s2];
            if (!c1) break;
            s1++;
            s2++;
        } while (c1 == c2);
    }
    return c1 == c2;
}

// 0xf35d40 (CorePlayerPropertyHashTable slot 2): case-insensitive hash of the first three letters.
bool CorePlayerPropertyHashTable::HashKey(void* key, unsigned tableSize, unsigned* hash) {
    if (key) {
        const unsigned char* s = (const unsigned char*)key;
        unsigned c0 = (unsigned char)(s[0] ^ FireCaseTable[s[0]]);
        unsigned h1 = 0, h2 = 0;
        if (s[1]) {
            h1 = (unsigned char)(s[1] ^ FireCaseTable[s[1]]) * 0x17c;
            if (s[2]) h2 = (unsigned char)(s[2] ^ FireCaseTable[s[2]]) * 0x2b3;
        }
        *hash = (c0 * 0x122 ^ (h1 + h2)) % tableSize;
    }
    return key != 0;
}

// 0xf35dc0 (CorePlayerPropertyHashTable slot 8): the property table never grows (credited elsewhere).
int CorePlayerPropertyHashTable::Grow() {
    return 0;
}
