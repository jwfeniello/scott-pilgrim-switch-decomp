// libc++ container code instantiated in the storm and ubiservices libraries. A map tree destroys its nodes recursively. The element and node
// types are stand-ins named after the function's address: their sizes and what their cleanup calls come
// from the code. Generated from the decompiler's reading and tested against the bytes.
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
// A pointer deleted in place, then cleared.
template<unsigned Slot> struct LcResetPtr {
    struct Object : VirtualSlots<Slot - 1> { virtual ~Object() noexcept; };
    Object* value;
    __attribute__((always_inline)) ~LcResetPtr() {
        Object* object = value;
        if (object) {
            delete object;
            value = nullptr;
        }
    }
};
// An object deleted through the storm allocator, which wants the most derived address.
void StormDelete(void* memory, size_t size, const char* file, int line);
struct StormObject { virtual ~StormObject(); };
template<bool Reset> struct StormOwned {
    StormObject* value;
    __attribute__((always_inline)) ~StormOwned() {
        StormObject* object = value;
        if (object) {
            void* top = dynamic_cast<void*>(object);
            object->~StormObject();
            StormDelete(top, 0, "", 0);
            if (Reset) value = nullptr;
        }
    }
};
struct NestedBase23299073 { virtual ~NestedBase23299073(); char padding[8]; };
struct Nested23299073 : NestedBase23299073 { LcSwappedRef<2> member_10; virtual void Key(); virtual ~Nested23299073() {} };
struct Node163840 { Node163840* left; Node163840* right; void* parent; uint64_t black; char padding_20[8]; Nested23299073 member_28; };
struct Tree163840 { void Destroy(Node163840* node); };
void Tree163840::Destroy(Node163840* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node163840(); UbiAlloc::Free(node); } }
struct NestedBase23310849 { virtual ~NestedBase23310849(); char padding[8]; };
struct Nested23310849 : NestedBase23310849 { LcSwappedRef<2> member_10; virtual void Key(); virtual ~Nested23310849() {} };
struct Node163b20 { Node163b20* left; Node163b20* right; void* parent; uint64_t black; char padding_20[8]; Nested23310849 member_28; };
struct Tree163b20 { void Destroy(Node163b20* node); };
void Tree163b20::Destroy(Node163b20* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node163b20(); UbiAlloc::Free(node); } }
struct Node28b5f0 { Node28b5f0* left; Node28b5f0* right; void* parent; uint64_t black; LcMember<42688257> member_20; };
struct Tree28b5f0 { void Destroy(Node28b5f0* node); };
void Tree28b5f0::Destroy(Node28b5f0* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node28b5f0(); StormAlloc::Free(node); } }
struct Node2fb810 { Node2fb810* left; Node2fb810* right; void* parent; uint64_t black; char padding_20[8]; LcSharedPtr member_28; };
struct Tree2fb810 { void Destroy(Node2fb810* node); };
void Tree2fb810::Destroy(Node2fb810* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node2fb810(); StormAlloc::Free(node); } }
struct Node373150 { Node373150* left; Node373150* right; void* parent; uint64_t black; char padding_20[8]; LcVector<StormAlloc> member_28; };
struct Tree373150 { void Destroy(Node373150* node); };
void Tree373150::Destroy(Node373150* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node373150(); StormAlloc::Free(node); } }
struct Node3d1480 { Node3d1480* left; Node3d1480* right; void* parent; uint64_t black; char padding_20[24]; LcUniquePtr<1> member_38; };
struct Tree3d1480 { void Destroy(Node3d1480* node); };
void Tree3d1480::Destroy(Node3d1480* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node3d1480(); StormAlloc::Free(node); } }
struct Node3e19a0 { Node3e19a0* left; Node3e19a0* right; void* parent; uint64_t black; LcMember<65116673> member_20; };
struct Tree3e19a0 { void Destroy(Node3e19a0* node); };
void Tree3e19a0::Destroy(Node3e19a0* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node3e19a0(); StormAlloc::Free(node); } }
struct Node3e1a00 { Node3e1a00* left; Node3e1a00* right; void* parent; uint64_t black; char padding_20[8]; LcMember<65118209> member_28; };
struct Tree3e1a00 { void Destroy(Node3e1a00* node); };
void Tree3e1a00::Destroy(Node3e1a00* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node3e1a00(); StormAlloc::Free(node); } }
struct Node485280 { Node485280* left; Node485280* right; void* parent; uint64_t black; LcString<StormAlloc> member_20; LcString<StormAlloc> member_38; };
struct Tree485280 { void Destroy(Node485280* node); };
void Tree485280::Destroy(Node485280* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node485280(); StormAlloc::Free(node); } }
struct Node48c780 { Node48c780* left; Node48c780* right; void* parent; uint64_t black; char padding_20[8]; LcString<StormAlloc> member_28; };
struct Tree48c780 { void Destroy(Node48c780* node); };
void Tree48c780::Destroy(Node48c780* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node48c780(); StormAlloc::Free(node); } }
struct Node4b5e40 { Node4b5e40* left; Node4b5e40* right; void* parent; uint64_t black; char padding_20[24]; LcUniquePtr<1> member_38; };
struct Tree4b5e40 { void Destroy(Node4b5e40* node); };
void Tree4b5e40::Destroy(Node4b5e40* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node4b5e40(); StormAlloc::Free(node); } }
struct Node4d44f0 { Node4d44f0* left; Node4d44f0* right; void* parent; uint64_t black; char padding_20[24]; LcResetPtr<1> member_38; };
struct Tree4d44f0 { void Destroy(Node4d44f0* node); };
void Tree4d44f0::Destroy(Node4d44f0* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node4d44f0(); StormAlloc::Free(node); } }
struct Node5cc760 { Node5cc760* left; Node5cc760* right; void* parent; uint64_t black; char padding_20[16]; LcList<StormAlloc, LcNothing> member_30; };
struct Tree5cc760 { void Destroy(Node5cc760* node); };
void Tree5cc760::Destroy(Node5cc760* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node5cc760(); StormAlloc::Free(node); } }
struct Node5cc810 { Node5cc810* left; Node5cc810* right; void* parent; uint64_t black; char padding_20[16]; LcTree<97288449> member_30; };
struct Tree5cc810 { void Destroy(Node5cc810* node); };
void Tree5cc810::Destroy(Node5cc810* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node5cc810(); StormAlloc::Free(node); } }
struct Node60ef00 { Node60ef00* left; Node60ef00* right; void* parent; uint64_t black; char padding_20[8]; LcSharedPtr member_28; };
struct Tree60ef00 { void Destroy(Node60ef00* node); };
void Tree60ef00::Destroy(Node60ef00* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node60ef00(); StormAlloc::Free(node); } }
struct Node60ef90 { Node60ef90* left; Node60ef90* right; void* parent; uint64_t black; LcMember<101644545> member_20; };
struct Tree60ef90 { void Destroy(Node60ef90* node); };
void Tree60ef90::Destroy(Node60ef90* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node60ef90(); StormAlloc::Free(node); } }
struct Node617e70 { Node617e70* left; Node617e70* right; void* parent; uint64_t black; LcMember<102229761> member_20; };
struct Tree617e70 { void Destroy(Node617e70* node); };
void Tree617e70::Destroy(Node617e70* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node617e70(); StormAlloc::Free(node); } }
struct Node61fb70 { Node61fb70* left; Node61fb70* right; void* parent; uint64_t black; LcMember<102741761> member_20; };
struct Tree61fb70 { void Destroy(Node61fb70* node); };
void Tree61fb70::Destroy(Node61fb70* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node61fb70(); StormAlloc::Free(node); } }
struct Node620b60 { Node620b60* left; Node620b60* right; void* parent; uint64_t black; LcMember<102807041> member_20; };
struct Tree620b60 { void Destroy(Node620b60* node); };
void Tree620b60::Destroy(Node620b60* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node620b60(); StormAlloc::Free(node); } }
struct Node624340 { Node624340* left; Node624340* right; void* parent; uint64_t black; char padding_20[8]; LcMember<103035905> member_28; };
struct Tree624340 { void Destroy(Node624340* node); };
void Tree624340::Destroy(Node624340* node) { if (node) { Destroy(node->left); Destroy(node->right); node->~Node624340(); StormAlloc::Free(node); } }
