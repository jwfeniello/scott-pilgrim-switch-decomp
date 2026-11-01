// Destructors of classes in the storm and ubiservices libraries, built from what they hold: libc++
// strings, vectors, lists, shared and unique pointers, pointers other threads can swap, members with
// their own destructors, and bases. These libraries are built without exceptions and with unwind tables.
//
// Generated from the decompiler's reading of each destructor and tested against the bytes. Classes
// carry their RTTI names where those are plain. Offsets come from the code. The base classes and the
// members with their own destructors are stand-ins named after an address or a key.
//
// These only match with SLP vectorization off: the original stores two vtable pointers one at a time.
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
struct Nested42235649 { LcMember<42235650> member_8; virtual void Key(); virtual ~Nested42235649() {} };
struct Primary284770 : VirtualSlots<17> { virtual ~Primary284770() {} };
struct Secondary284770 { virtual void SecondaryKey(); };
namespace storm { namespace echo { 
struct PlayerDescriptor : Primary284770, Secondary284770 { char padding_10[72]; Nested42235649 member_58; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~PlayerDescriptor(); };
PlayerDescriptor::~PlayerDescriptor() {}
}}
struct Primary2ee190 : VirtualSlots<17> { virtual ~Primary2ee190() {} };
struct Secondary2ee190 { virtual void SecondaryKey(); };

struct Class2ee190 : Primary2ee190, Secondary2ee190 { char padding_10[16]; LcMember<49158401> member_20; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~Class2ee190(); };
Class2ee190::~Class2ee190() {}

struct Primary47bb50 : VirtualSlots<17> { virtual ~Primary47bb50() {} };
struct Secondary47bb50 { virtual void SecondaryKey(); };

struct Class47bb50 : Primary47bb50, Secondary47bb50 { char padding_10[16]; LcTree<75216129> member_20; virtual void Key(); virtual ~Class47bb50(); };
Class47bb50::~Class47bb50() {}

struct Primary47bbb0 : VirtualSlots<17> { virtual ~Primary47bbb0() {} };
struct Secondary47bbb0 { virtual void SecondaryKey(); };

struct Class47bbb0 : Primary47bbb0, Secondary47bbb0 { char padding_10[16]; LcTree<75217665> member_20; virtual void Key(); virtual ~Class47bbb0(); };
Class47bbb0::~Class47bbb0() {}

struct Primary47bee0 : VirtualSlots<17> { virtual ~Primary47bee0() {} };
struct Secondary47bee0 { virtual void SecondaryKey(); };

struct Class47bee0 : Primary47bee0, Secondary47bee0 { char padding_10[16]; LcTree<75230721> member_20; virtual void Key(); virtual ~Class47bee0(); };
Class47bee0::~Class47bee0() {}

struct Primary489c20 : VirtualSlots<17> { virtual ~Primary489c20() {} };
struct Secondary489c20 { virtual void SecondaryKey(); };

struct Class489c20 : Primary489c20, Secondary489c20 { char padding_10[16]; LcTree<76136961> member_20; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~Class489c20(); };
Class489c20::~Class489c20() {}

struct Primary48ae00 : VirtualSlots<17> { virtual ~Primary48ae00() {} };
struct Secondary48ae00 { virtual void SecondaryKey(); };

struct Class48ae00 : Primary48ae00, Secondary48ae00 { char padding_10[16]; LcTree<76210177> member_20; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~Class48ae00(); };
Class48ae00::~Class48ae00() {}

struct Primary48c010 : VirtualSlots<17> { virtual ~Primary48c010() {} };
struct Secondary48c010 { virtual void SecondaryKey(); };

struct Class48c010 : Primary48c010, Secondary48c010 { char padding_10[16]; LcTree<76284161> member_20; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~Class48c010(); };
Class48c010::~Class48c010() {}

struct Primary58ca10 : VirtualSlots<17> { virtual ~Primary58ca10() {} };
struct Secondary58ca10 { virtual void SecondaryKey(); };
namespace storm { 
struct NetPropertyDataContainer : Primary58ca10, Secondary58ca10 { char padding_10[16]; LcMember<93102337> member_20; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~NetPropertyDataContainer(); };
NetPropertyDataContainer::~NetPropertyDataContainer() {}
}
struct Nested96396289 { LcMember<96396290> member_8; virtual void Key(); virtual ~Nested96396289() {} };
struct Primary5bee40 : VirtualSlots<17> { virtual ~Primary5bee40() {} };
struct Secondary5bee40 { virtual void SecondaryKey(); };
namespace storm { 
struct ApplicationDescriptor : Primary5bee40, Secondary5bee40 { char padding_10[128]; LcSharedPtr member_90; Nested96396289 member_a0; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~ApplicationDescriptor(); };
ApplicationDescriptor::~ApplicationDescriptor() {}
}
struct Nested98406657 { char padding_8[16]; LcString<StormAlloc> member_18; virtual void Key(); virtual ~Nested98406657() {} };
namespace storm { namespace punch { 
struct ProductPunchClientImplMainStartupParams { Nested98406657 member_8; virtual void Key(); virtual ~ProductPunchClientImplMainStartupParams(); };
ProductPunchClientImplMainStartupParams::~ProductPunchClientImplMainStartupParams() {}
}}
struct Nested98465281 { char padding_8[16]; LcString<StormAlloc> member_18; virtual void Key(); virtual ~Nested98465281() {} };
namespace storm { namespace punch { 
struct UpnpImplNetworkStartupParam { Nested98465281 member_8; virtual void Key(); virtual ~UpnpImplNetworkStartupParam(); };
UpnpImplNetworkStartupParam::~UpnpImplNetworkStartupParam() {}
}}
struct Nested98466305 { char padding_8[16]; LcString<StormAlloc> member_18; virtual void Key(); virtual ~Nested98466305() {} };
namespace storm { namespace punch { 
struct TraversalImplNetworkStartupParam { Nested98466305 member_8; virtual void Key(); virtual ~TraversalImplNetworkStartupParam(); };
TraversalImplNetworkStartupParam::~TraversalImplNetworkStartupParam() {}
}}
