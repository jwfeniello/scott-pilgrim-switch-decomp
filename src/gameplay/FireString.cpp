// Fire's heap string (FireText.h) and the records built from it.
#include "FireText.h"

// 0xf27e50: copies s into a new buffer from the owner's heap.
// Not yet matched: the original tests s against the buffer before testing s for null; ours tests null first.
void FireString::Set(const char* s) {
    if (data != s) Assign(s);
}

// 0xf282f0: Set(s), returning the string.
// Not yet matched: the same null-test order as 0xf27e50.
FireString& FireString::operator=(const char* s) {
    if (data != s) Assign(s);
    return *this;
}

// 0xf27f30: copies other's text (a null text empties this string).
void FireString::Set(const FireString& other) {
    if (this == &other) return;
    if (!other.data) {
        Clear();
        return;
    }
    if (data != other.data) Assign(other.data);
}


// 0xf28000: appends s, growing the buffer by 32 bytes (256 past 1 KiB) beyond the need.
void FireString::Append(const char* s) {
    if (!s || !owner) return;
    int n = 0;
    if (*s) {
        const char* p = s;
        while (*++p) {}
        n = p - s;
    }
    int newLength = length + n;
    char* d;
    if (newLength + 1 < capacity) {
        d = data;
        if (!d) return;
    } else {
        int newCapacity = newLength + (capacity > 0x3ff ? 0x101 : 0x21);
        d = (char*)FireAlloc(owner->heap, 0, newCapacity, 0, 0);
        if (!d) return;
        capacity = newCapacity;
        if (data) {
            FireMemMove(d, data, length + 1);
            if (owner && data) FireFree(data);
        }
        data = d;
    }
    FireMemMove(d + length, s, n + 1);
    length += n;
}

// 0xf28230: appends c, growing the buffer by 32 bytes when full.
void FireString::Append(char c) {
    if (!owner) return;
    char* d;
    if (length < capacity - 1) {
        d = data;
        if (!d) return;
    } else {
        d = (char*)FireAlloc(owner->heap, 0, capacity + 32, 0, 0);
        if (!d) return;
        capacity += 32;
        if (data) {
            FireMemMove(d, data, length + 1);
            if (owner && data) FireFree(data);
        }
        data = d;
    }
    d[length++] = c;
    data[length] = 0;
}

// 0xf28100: copies at most max bytes of s (padding with the terminator once s ends).
// Not yet matched: the null-test order of 0xf27e50, and the original counts the copy down (unrolled by two, with a
// separate empty-string store); ours counts up.
void FireString::Set(const char* s, int max) {
    if (data == s || !s || !owner) return;
    Clear();
    int n = 0;
    if (*s) {
        const char* p = s;
        while (*++p) {}
        n = p - s;
    }
    if (n > max) n = max;
    length = n;
    capacity = n + 1;
    char* d = (char*)FireAlloc(owner->heap, 0, capacity, 0, 0);
    data = d;
    if (!d) {
        length = 0;
        capacity = 0;
        return;
    }
    for (int i = 0; i < length; i++) {
        *d++ = *s;
        if (*s) s++;
    }
    data[length] = 0;
}

// 0xf33530: empties the strings and restores the defaults (80, 1).
void FireStringRecord::Reset() {
    text0.Clear();
    text20.Clear();
    text40.Clear();
    text60.Clear();
    value80 = 80;
    value84 = 1;
    flaga8 = false;
    text88.Clear();
    valueb8 = 0;
}

// 0xf33420: five empty strings on owner's heap, then the defaults.
FireStringRecord::FireStringRecord(FirePlayerContext* owner)
    : text0(owner), text20(owner), text40(owner), text60(owner), text88(owner), owner(owner) {
    Reset();
}

// Object deleted through its virtual destructor (provisional).
struct FireRecordAttachment {
    virtual ~FireRecordAttachment();
};

// Owner of FireSharedRecord chains (provisional): head at +0x18, tail at +0x20.
struct FireSharedRecordOwner {
    char pad0[0x18];
    struct FireSharedRecord* head;  // 0x18
    struct FireSharedRecord* tail;  // 0x20
};
struct FireRecordLinkTarget {
    char pad0[0x40];
    void* value40;  // 0x40 (provisional)
};
struct FireRecordLink {
    char pad0[0x8];
    FireRecordLinkTarget* target;  // 0x8
};

// Reference-counted record shared by FireRecordUser objects (provisional name and layout).
struct FireSharedRecord {
    ~FireSharedRecord() {
        if (owner) {
            if (prev) prev->next = next;
            else owner->head = next;
            if (next) next->prev = prev;
            else owner->tail = prev;
        }
        if (attachment) delete attachment;
        if (link && link->target) link->target->value40 = 0;
    }
    static void operator delete(void* p) { FireFree(p); }

    char pad0[0x8];
    FireStringRecord record;            // 0x8
    char padc8[0xd0 - 0xc8];
    int refCount;                       // 0xd0
    char padd4[0xe0 - 0xd4];
    FireSharedRecordOwner* owner;       // 0xe0
    FireRecordLink* link;               // 0xe8
    FireRecordAttachment* attachment;   // 0xf0
    FireSharedRecord* prev;             // 0xf8
    FireSharedRecord* next;             // 0x100
};

// Owner of FireRecordUser chains (provisional): current at +0x10, head at +0x28, tail at +0x30.
struct FireRecordUserOwner {
    char pad0[0x10];
    struct FireRecordUser* current;  // 0x10
    char pad18[0x28 - 0x18];
    struct FireRecordUser* head;     // 0x28
    struct FireRecordUser* tail;     // 0x30
};

// Reference-counted record user (provisional name; FireCountedC0 in FireMisc.cpp is the same object seen from its
// users).
struct FireRecordUser {
    ~FireRecordUser();

    FireStringRecord record;        // 0x0
    int refCount;                   // 0xc0
    char padc4[0xd8 - 0xc4];
    FireSharedRecord* shared;       // 0xd8
    FireRecordUserOwner* owner;     // 0xe0
    FireRecordUser* prev;           // 0xe8
    FireRecordUser* next;           // 0xf0
};

// 0xf322f0: drops the shared record, leaves the owner's chain, then destroys the strings.
FireRecordUser::~FireRecordUser() {
    if (shared) {
        if (--shared->refCount == 0) delete shared;
        shared = 0;
    }
    if (owner) {
        if (prev) prev->next = next;
        else owner->head = next;
        if (next) next->prev = prev;
        else owner->tail = prev;
        if (owner->current == this) owner->current = 0;
    }
}

// Text held by a player object (provisional name and layout).
struct FireTextSource {
    void Substring(unsigned start, unsigned n, FireString* out);

    PlatformPlayer* player;  // 0x0
    char* text;              // 0x8
    unsigned length;         // 0x10
};

// 0xf6eca0: n bytes from start into out (left empty when the range does not fit).
void FireTextSource::Substring(unsigned start, unsigned n, FireString* out) {
    out->Clear();
    if (!text || start + n >= length) return;
    char* p = (char*)FireAlloc(player->core->context->heap, 0, n + 1, 0, 0);
    if (!p) return;
    ((char*)FireMemMove(p, text + start, n))[n] = 0;
    out->Adopt(p, n);
}
