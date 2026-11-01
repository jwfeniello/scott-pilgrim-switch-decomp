// Destructors of classes in the storm and ubiservices libraries, built from what they hold: libc++
// strings, vectors, lists, shared and unique pointers, pointers other threads can swap, members with
// their own destructors, and bases. These libraries are built without exceptions and with unwind tables.
//
// Generated from the decompiler's reading of each destructor and tested against the bytes. Classes
// carry their RTTI names where those are plain. Offsets come from the code. The base classes and the
// members with their own destructors are stand-ins named after an address or a key.
//
// These only match at -O3.
#include <stdint.h>
#include <stddef.h>
// The storm library frees through a call that takes a file and a line, both empty here.
void StormFree(void* memory, const char* file, int line);
void UbiFree(void* memory);
struct StormAlloc { static __attribute__((always_inline)) void Free(void* memory) { StormFree(memory, "", 0); } };
struct UbiAlloc { static __attribute__((always_inline)) void Free(void* memory) { UbiFree(memory); } };
// A libc++ string: the first bit says whether it is long.
template<class Alloc> struct LcString {
    size_t capacity;
    size_t size;
    char* data;
    __attribute__((always_inline)) ~LcString() { if (*reinterpret_cast<unsigned char*>(this) & 1) Alloc::Free(data); }
};
// A libc++ vector of plain values.
template<class Alloc> struct LcVector {
    void* begin;
    void* end;
    void* capacity;
    __attribute__((always_inline)) ~LcVector() {
        if (begin) {
            end = begin;
            Alloc::Free(begin);
        }
    }
};
// A libc++ vector of values with destructors, destroyed from the back.
template<unsigned long Key, unsigned Size, bool Virtual> struct LcVectorElement { ~LcVectorElement() noexcept; char data[Size]; };
template<unsigned long Key, unsigned Size> struct LcVectorElement<Key, Size, true> { virtual ~LcVectorElement() noexcept; char data[Size - 8]; };
template<unsigned long Key, unsigned Size, bool Virtual, class Alloc> struct LcVectorOf {
    typedef LcVectorElement<Key, Size, Virtual> Element;
    Element* begin;
    Element* end;
    Element* capacity;
    __attribute__((always_inline)) ~LcVectorOf() {
        if (begin) {
            Element* p = end;
            while (p != begin) (--p)->~Element();
            end = begin;
            Alloc::Free(begin);
        }
    }
};
// Virtual functions before the one that matters.
template<unsigned Count> struct VirtualSlots : VirtualSlots<Count - 1> { virtual void Slot(VirtualSlots*); };
template<> struct VirtualSlots<0> {};
// A libc++ unique pointer: taken out first, then deleted through its deleting destructor.
template<unsigned Slot> struct LcUniquePtr {
    struct Object : VirtualSlots<Slot - 1> { virtual ~Object() noexcept; };
    Object* value;
    __attribute__((always_inline)) ~LcUniquePtr() {
        Object* object = value;
        value = nullptr;
        if (object) delete object;
    }
};
// A pointer other threads can swap: taken out atomically, then a count at +8.
template<unsigned Slot> struct LcSwappedRef {
    struct Object : VirtualSlots<Slot> { virtual void Release(); unsigned count; };
    Object* value;
    __attribute__((always_inline)) ~LcSwappedRef() {
        Object* object = __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
        if (object && __atomic_sub_fetch(&object->count, 1, __ATOMIC_ACQ_REL) == 0) object->Release();
    }
};
template<unsigned long Key> struct LcMember { ~LcMember() noexcept; };
// A libc++ map: the tree destroys itself from its root.
template<unsigned long Key> struct LcTree {
    void* begin;
    void* root;
    size_t size;
    static void Destroy(LcTree*, void*);
    __attribute__((always_inline)) ~LcTree() { Destroy(this, root); }
};
// A libc++ vector of smart pointers.
template<class Element, class Alloc> struct LcVectorSmart {
    Element* begin;
    Element* end;
    Element* capacity;
    __attribute__((always_inline)) ~LcVectorSmart() {
        if (begin) {
            Element* p = end;
            while (p != begin) (--p)->~Element();
            end = begin;
            Alloc::Free(begin);
        }
    }
};
// A libc++ shared pointer. The first count is one less than the owners.
struct LcSharedCount {
    virtual void S0(); virtual void S1();
    virtual void OnZeroShared();
    long owners;
    void ReleaseWeak();
};
struct LcSharedPtr {
    void* object;
    LcSharedCount* count;
    __attribute__((always_inline)) ~LcSharedPtr() {
        LcSharedCount* c = count;
        if (c && __atomic_fetch_sub(&c->owners, 1, __ATOMIC_ACQ_REL) == 0) {
            c->OnZeroShared();
            c->ReleaseWeak();
        }
    }
};
// A libc++ list: the end node is part of the list.
struct LcNothing {};
template<class Alloc, class Value> struct LcList {
    struct Link { Link* prev; Link* next; };
    struct Node : Link { Value value; };
    Link end;
    size_t size;
    __attribute__((always_inline)) ~LcList() {
        if (size != 0) {
            Link* f = end.next;
            Link* l = end.prev;
            f->prev->next = l->next;
            l->next->prev = f->prev;
            size = 0;
            while (f != &end) {
                Node* np = static_cast<Node*>(f);
                f = f->next;
                np->value.~Value();
                Alloc::Free(np);
            }
        }
    }
};
struct Level156aa0_1 { char padding_8[8]; LcSwappedRef<2> member_10; char padding_18[16]; LcVector<UbiAlloc> member_28; char padding_40[8]; LcSwappedRef<2> member_48; virtual void Key1(); virtual ~Level156aa0_1() {} };
namespace ubiservices { 
struct EventInfoPlayerNewsImpression : Level156aa0_1 { LcSwappedRef<2> member_50; LcSwappedRef<2> member_58; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~EventInfoPlayerNewsImpression(); };
EventInfoPlayerNewsImpression::~EventInfoPlayerNewsImpression() {}
}
struct Level1565f0_1 { char padding_8[8]; LcSwappedRef<2> member_10; char padding_18[16]; LcVector<UbiAlloc> member_28; char padding_40[8]; LcSwappedRef<2> member_48; virtual void Key1(); virtual ~Level1565f0_1() {} };
namespace ubiservices { 
struct EventInfoContextStart : Level1565f0_1 { LcSwappedRef<2> member_50; LcSwappedRef<2> member_58; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~EventInfoContextStart(); };
EventInfoContextStart::~EventInfoContextStart() {}
}
struct Level156720_1 { char padding_8[8]; LcSwappedRef<2> member_10; char padding_18[16]; LcVector<UbiAlloc> member_28; char padding_40[8]; LcSwappedRef<2> member_48; virtual void Key1(); virtual ~Level156720_1() {} };
namespace ubiservices { 
struct EventInfoContextStop : Level156720_1 { LcSwappedRef<2> member_50; LcSwappedRef<2> member_58; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~EventInfoContextStop(); };
EventInfoContextStop::~EventInfoContextStop() {}
}
struct Level156bd0_1 { char padding_8[8]; LcSwappedRef<2> member_10; char padding_18[16]; LcVector<UbiAlloc> member_28; char padding_40[8]; LcSwappedRef<2> member_48; virtual void Key1(); virtual ~Level156bd0_1() {} };
namespace ubiservices { 
struct EventInfoPlayerProgression : Level156bd0_1 { LcSwappedRef<2> member_50; LcSwappedRef<2> member_58; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~EventInfoPlayerProgression(); };
EventInfoPlayerProgression::~EventInfoPlayerProgression() {}
}
struct NestedBase22842626 { virtual ~NestedBase22842626(); char padding[8]; };
struct Nested22842626 : NestedBase22842626 { LcSwappedRef<2> member_10; virtual void Key(); virtual ~Nested22842626() {} };
struct NestedBase22842628 { virtual ~NestedBase22842628(); char padding[8]; };
struct Nested22842628 : NestedBase22842628 { LcSwappedRef<2> member_10; virtual void Key(); virtual ~Nested22842628() {} };
struct Base15c8d0 { virtual ~Base15c8d0(); char padding[280]; };
namespace ubiservices { 
struct JobUpdateSessionInfoWithLatestFirstPartyData : Base15c8d0 { Nested22842628 member_120; Nested22842626 member_138; char padding_150[8]; LcSwappedRef<2> member_158; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~JobUpdateSessionInfoWithLatestFirstPartyData(); };
JobUpdateSessionInfoWithLatestFirstPartyData::~JobUpdateSessionInfoWithLatestFirstPartyData() {}
}
struct NestedBase22995713 { virtual ~NestedBase22995713(); char padding[8]; };
struct Nested22995713 : NestedBase22995713 { LcSwappedRef<2> member_10; virtual void Key(); virtual ~Nested22995713() {} };
struct NestedBase22995715 { virtual ~NestedBase22995715(); char padding[8]; };
struct Nested22995715 : NestedBase22995715 { LcSwappedRef<2> member_10; virtual void Key(); virtual ~Nested22995715() {} };
struct Base15ee30 { virtual ~Base15ee30(); char padding[280]; };
namespace ubiservices { 
struct JobInitiateConnection : Base15ee30 { LcSwappedRef<2> member_120; Nested22995715 member_128; char padding_140[16]; Nested22995713 member_150; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~JobInitiateConnection(); };
JobInitiateConnection::~JobInitiateConnection() {}
}
