// Destructors built from what classes hold.
//
// The members are real kinds of object: a tracked listener, an owned callback, a vector's buffer,
// a shared counted buffer, a strong handle, a list of owned objects. Their cleanup is what the
// destructors inline. A class's own body runs some of it by hand when the original's exception
// table shows a landing pad that destroys the base.
//
// Generated from the decompiler's reading of each destructor and tested against the bytes. Classes
// carry their RTTI names where those are plain. Offsets come from the code. Nothing else about these
// classes is known here, so the base classes and the members with their own destructors are stand-ins
// named after the original function's address or a key.
//
// These declare their member destructors inline, which raises the inlining threshold.
#include <stdint.h>
#define DT_INLINE inline
#include <stddef.h>
inline void* operator new(size_t, void* address) noexcept { return address; }
struct DecodeAllocator { virtual void Slot0(); virtual void Slot1(); virtual void* Allocate(size_t size); virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Free(void*); };
struct DecodeAllocators { char unknown[0x370]; DecodeAllocator* values[256]; };
extern "C" { extern DecodeAllocators* DecodeAllocatorManager; uint8_t DecodeAllocatorIndex(DecodeAllocators*, void*); }
__attribute__((always_inline)) inline void FreeObject(void* p) {
    DecodeAllocators* m = DecodeAllocatorManager;
    m->values[DecodeAllocatorIndex(m, p)]->Free(p);
}
struct FunctionBase {
    virtual ~FunctionBase() noexcept;
};
__attribute__((always_inline)) inline void DestroyFunction(FunctionBase* d) {
    DecodeAllocators* m = DecodeAllocatorManager;
    DecodeAllocator* a = m->values[DecodeAllocatorIndex(m, d)];
    d->~FunctionBase();
    a->Free(d);
}
// A member with a destructor, built from the same cleanup a class body can run by hand.
template<class T> struct Auto : T { ~Auto() noexcept { this->Destroy(); } };
template<class T> struct AutoInline : T { DT_INLINE ~AutoInline() noexcept { this->Destroy(); } };

template<unsigned long Key> struct PlainFunction {
    FunctionBase* value;
    __attribute__((always_inline)) void Destroy() { if (value) DestroyFunction(value); }
};
template<unsigned long Key> using Function = Auto<PlainFunction<Key>>;

// A callback that also tracks its registration; +0x10 says whether it is registered.
template<unsigned long Key> struct ListenerOut {
    Function<Key> function;
    void* owner;
    bool registered;
    DT_INLINE ~ListenerOut() noexcept { if (registered) Disconnect(this); }
    static void Disconnect(void*);
};
template<unsigned long Key> struct PlainListenerOut {
    PlainFunction<Key> function;
    void* owner;
    bool registered;
    __attribute__((always_inline)) void Destroy() { if (registered) Disconnect(this); function.Destroy(); }
    static void Disconnect(void*);
};
template<unsigned long Key> struct ListenerWide {
    Function<Key> function;
    void* owner;
    uint64_t registered;
    DT_INLINE ~ListenerWide() noexcept { if (registered) Disconnect(this); }
    static void Disconnect(void*);
};
template<unsigned long Key> struct PlainListenerWide {
    PlainFunction<Key> function;
    void* owner;
    uint64_t registered;
    __attribute__((always_inline)) void Destroy() { if (registered) Disconnect(this); function.Destroy(); }
    static void Disconnect(void*);
};
extern unsigned char* AllocatorContext;
void* AllocateFunction(void*, size_t);
struct FunctionMatch : FunctionBase {
    virtual FunctionBase* Clone() const;
    virtual bool Equals(const FunctionBase* other) const;
};
struct TrackedNode { void* unknown; void* key; FunctionMatch* predicate; char padding[0x10]; TrackedNode* next; };
struct TrackedMap { void* mutex; char padding[0x20]; TrackedNode* free_head; TrackedNode* buckets[4003]; };
extern "C" {
extern TrackedMap* ListenerTracking;
void ListenerLock(void*) noexcept;
void ListenerUnlock(void*) noexcept;
}
struct TrackedLock {
    TrackedMap* map;
    __attribute__((always_inline)) TrackedLock(TrackedMap* m) : map(m) { ListenerLock(m->mutex); }
    __attribute__((always_inline)) ~TrackedLock() noexcept(false) { if (map) ListenerUnlock(map->mutex); }
};
struct FunctionOwner {
    FunctionBase* value;
    __attribute__((always_inline)) ~FunctionOwner() { if (value) DestroyFunction(value); }
};
__attribute__((always_inline)) inline void RemoveMatching(TrackedMap* map, FunctionBase* match) {
    TrackedNode** buckets = reinterpret_cast<TrackedNode**>(reinterpret_cast<uintptr_t>(map) + offsetof(TrackedMap, buckets));
    TrackedLock lock(map);
    for (size_t i = 0; i < 4003; ++i) {
        TrackedNode** bucket = &buckets[i];
        TrackedNode* previous = nullptr;
        TrackedNode* node = *bucket;
        while (node) {
            bool erase = node->predicate->Equals(match);
            TrackedNode* next = node->next;
            if (erase) {
                node->next = map->free_head;
                map->free_head = node;
                *(previous ? &previous->next : bucket) = next;
            } else previous = node;
            node = next;
        }
    }
}
template<class T> struct ListenerHook : FunctionMatch {
    void (*invoke)();
    T* owner;
    void (T::*member)(const void*);
    __attribute__((always_inline)) ListenerHook(T* o, void (T::*m)(const void*)) : owner(o), member(m) { invoke = Invoke; }
    ~ListenerHook() noexcept;
    static void Invoke();
};
template<unsigned long Key> struct ListenerInline {
    Function<Key> function;
    void* target;
    bool registered;
    void First(const void*);
    void Second(const void*);
    __attribute__((always_inline)) void Remove(void (ListenerInline::*member)(const void*)) {
        TrackedMap* map = ListenerTracking;
        ListenerHook<ListenerInline>* match = new (AllocateFunction(AllocatorContext + 0x50, 40)) ListenerHook<ListenerInline>(this, member);
        FunctionOwner owner{match};
        RemoveMatching(map, match);
    }
    DT_INLINE ~ListenerInline() noexcept {
        if (registered) {
            target = nullptr;
            Remove(&ListenerInline::First);
            Remove(&ListenerInline::Second);
        }
    }
};
// An owned block whose buffer is a counted array: it was allocated with a count in front of it.
struct CountedArray {
    char* data;
    __attribute__((always_inline)) ~CountedArray() {
        char* p = data;
        if (p) {
            DecodeAllocators* n = DecodeAllocatorManager;
            n->values[DecodeAllocatorIndex(n, p)]->Free(p - 4);
        }
    }
};
template<unsigned long Key, unsigned Offset> struct PlainOwnedBlock {
    struct Block { char padding[Offset]; CountedArray data; };
    Block* value;
    __attribute__((always_inline)) void Destroy() {
        Block* block = value;
        if (block) {
            DecodeAllocators* m = DecodeAllocatorManager;
            DecodeAllocator* a = m->values[DecodeAllocatorIndex(m, block)];
            block->~Block();
            a->Free(block);
        }
        value = nullptr;
    }
};
// A list of owned objects: the head is a node without a value.
struct OwnedValue { virtual ~OwnedValue(); };
template<unsigned long Key> struct PlainOwnedList {
    struct Value {
        OwnedValue* object;
        __attribute__((always_inline)) ~Value() {
            OwnedValue* v = object;
            if (v) {
                DecodeAllocators* m = DecodeAllocatorManager;
                DecodeAllocator* a = m->values[DecodeAllocatorIndex(m, v)];
                v->~OwnedValue();
                a->Free(v);
            }
        }
    };
    struct Node { Node* prev; Node* next; Value value; };
    Node* prev;
    Node* next;
    uint64_t count;
    __attribute__((always_inline)) void Destroy() {
        Node* head = reinterpret_cast<Node*>(this);
        Node* node = next;
        if (node != head) {
            do {
                Node* following = node->next;
                node->~Node();
                if (node) FreeObject(node);
                node = following;
            } while (node != head);
        }
        count = 0;
        next = head;
        prev = head;
    }
};
// An owned object whose destructor is not virtual.
template<unsigned long Key> struct OwnedObjectBody { ~OwnedObjectBody() noexcept; };
template<unsigned long Key, bool Reset> struct PlainOwnedObject {
    OwnedObjectBody<Key>* value;
    __attribute__((always_inline)) void Destroy() {
        if (value) {
            DecodeAllocators* m = DecodeAllocatorManager;
            DecodeAllocator* a = m->values[DecodeAllocatorIndex(m, value)];
            value->~OwnedObjectBody<Key>();
            a->Free(value);
        }
        if (Reset) value = nullptr;
    }
};
// A string: kind 2 means the block is shared and counted, and it came from malloc.
extern "C" void free(void*);
template<unsigned long Key> struct PlainCountedString {
    unsigned* data;
    uint64_t length;
    uint32_t kind;
    __attribute__((always_inline)) void Destroy() {
        if (kind == 2 && __atomic_sub_fetch(data, 1, __ATOMIC_RELAXED) == 0) free(data);
    }
};
// A count at the start of the block, shared by whoever holds the pointer.
template<unsigned long Key> struct PlainSharedBuffer {
    unsigned* value;
    __attribute__((always_inline)) void Destroy() {
        if (value) {
            if (__atomic_sub_fetch(value, 1, __ATOMIC_RELAXED) == 0) {
                if (value) FreeObject(value);
            }
            value = nullptr;
        }
    }
};
template<unsigned long Key> struct PlainSharedKeep {
    unsigned* value;
    __attribute__((always_inline)) void Destroy() {
        if (value && __atomic_sub_fetch(value, 1, __ATOMIC_RELAXED) == 0) {
            if (value) FreeObject(value);
        }
    }
};
// Virtual functions before the one that matters.
template<unsigned Count> struct VirtualSlots : VirtualSlots<Count - 1> { virtual void Slot(VirtualSlots*); };
template<> struct VirtualSlots<0> {};
// An object counted at +8. It releases itself through a virtual function when the count reaches zero.
template<unsigned long Key, unsigned Slot> struct PlainCounted {
    struct Object : VirtualSlots<Slot> { virtual void Release(); unsigned count; };
    Object* value;
    __attribute__((always_inline)) void Destroy() {
        Object* object = value;
        if (object && __atomic_sub_fetch(&object->count, 1, __ATOMIC_RELAXED) == 0) object->Release();
    }
};
// The second virtual function is the deleting destructor: those objects delete themselves.
template<unsigned long Key> struct PlainCounted<Key, 1> {
    struct Object { virtual ~Object() noexcept; unsigned count; };
    Object* value;
    __attribute__((always_inline)) void Destroy() {
        Object* object = value;
        if (object && __atomic_sub_fetch(&object->count, 1, __ATOMIC_RELAXED) == 0) delete object;
    }
};
// The same, for a pointer other threads can swap: it is taken out before it is released.
template<unsigned long Key, unsigned Slot> struct PlainAtomicCounted {
    struct Object : VirtualSlots<Slot> { virtual void Release(); unsigned count; };
    Object* value;
    __attribute__((always_inline)) void Destroy() {
        Object* object = __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
        if (object && __atomic_sub_fetch(&object->count, 1, __ATOMIC_ACQ_REL) == 0) object->Release();
    }
};
// An owned object whose virtual destructor comes after other virtual functions.
template<unsigned long Key, unsigned Slot> struct PlainSlotOwned {
    struct Object : VirtualSlots<Slot> { virtual ~Object() noexcept; };
    Object* value;
    __attribute__((always_inline)) void Destroy() {
        Object* object = value;
        if (object) {
            DecodeAllocators* m = DecodeAllocatorManager;
            DecodeAllocator* a = m->values[DecodeAllocatorIndex(m, object)];
            object->~Object();
            a->Free(object);
        }
    }
};
// A shared pointer: the object and a counter taken from one of the engine's pools. What deleting the
// object takes depends on its class: a virtual destructor (Kind 0), a plain one (1), none (2), or a
// deleter that was not inlined (3).
extern "C" void FreeToCounterPool(void* pool, void* counter);
template<unsigned long Key> struct SharedObjectBody { ~SharedObjectBody() noexcept; };
template<unsigned long Key, unsigned Pool, bool Reset, unsigned Kind> struct PlainSharedPointer {
    void* object;
    unsigned* counter;
    static void Delete(void*);
    __attribute__((always_inline)) void Destroy() {
        if (__atomic_sub_fetch(counter, 1, __ATOMIC_RELAXED) == 0) {
            FreeToCounterPool(AllocatorContext + Pool, counter);
            if (Reset) counter = nullptr;
            void* v = object;
            if (Kind == 3) {
                Delete(v);
            } else if (v) {
                DecodeAllocators* m = DecodeAllocatorManager;
                DecodeAllocator* a = m->values[DecodeAllocatorIndex(m, v)];
                if (Kind == 0) static_cast<OwnedValue*>(v)->~OwnedValue();
                if (Kind == 1) static_cast<SharedObjectBody<Key>*>(v)->~SharedObjectBody<Key>();
                a->Free(v);
            }
        }
    }
};
struct TrackingNode { void* padding; void* key; char data[0x18]; TrackingNode* next; };
struct TrackingMap { void* mutex; char padding[0x20]; TrackingNode* free_head; TrackingNode* buckets[4003]; };
extern "C" { extern TrackingMap* HandleTracking; void HandleLock(void*) noexcept; void HandleUnlock(void*) noexcept; }
__attribute__((always_inline)) inline void UnlockHandles(TrackingMap* map) noexcept { HandleUnlock(map->mutex); }
struct HandleObject { virtual ~HandleObject(); };
struct HandleRecord { char padding[8]; HandleObject* object; unsigned references; };
template<unsigned long Key, bool ResetInDelete> struct PlainStrongHandle {
    HandleRecord* value;
    __attribute__((always_inline)) void Destroy() {
        if (value) {
            if (__atomic_sub_fetch(&value->references, 1, __ATOMIC_RELAXED) == 0) {
                if (value) {
                    HandleObject* object = value->object;
                    if (object) {
                        DecodeAllocators* m = DecodeAllocatorManager;
                        DecodeAllocator* a = m->values[DecodeAllocatorIndex(m, object)];
                        object->~HandleObject();
                        a->Free(object);
                    }
                    HandleRecord* handle = value;
                    if (handle) {
                        DecodeAllocators* m = DecodeAllocatorManager;
                        DecodeAllocator* a = m->values[DecodeAllocatorIndex(m, handle)];
                        {
                            TrackingMap* map = HandleTracking;
                            HandleLock(map->mutex);
                            TrackingNode** bucket = &map->buckets[(reinterpret_cast<uintptr_t>(handle) >> 2) % 4003];
                            TrackingNode* node = *bucket;
                            if (!node) goto unlock;
                            {
                                TrackingNode* previous = nullptr;
                                do {
                                    TrackingNode* next = node->next;
                                    if (node->key == handle) {
                                        node->next = map->free_head;
                                        map->free_head = node;
                                        *(previous ? &previous->next : bucket) = next;
                                    } else {
                                        previous = node;
                                    }
                                    node = next;
                                } while (node);
                            }
                            if (!map) goto unlocked;
                        unlock:
                            UnlockHandles(map);
                        unlocked:;
                        }
                        a->Free(handle);
                    }
                    if (ResetInDelete) value = nullptr;
                }
            }
            if (!ResetInDelete) value = nullptr;
        }
    }
};
template<unsigned long Key> struct Member { ~Member() noexcept; };
template<unsigned long Key> struct PlainPointerMember {
    void* value;
    static void Delete(void*);
    __attribute__((always_inline)) void Destroy() { Delete(value); }
};
struct Element137297666 { char data[72]; ~Element137297666() noexcept; };
struct Array137297666 { uint64_t w0; uint64_t w8; uint64_t w10; Element137297666* w18; __attribute__((always_inline)) void Destroy() { if (w18 && w10) { w18[0].~Element137297666(); for (uint64_t i = 1; i < w10; ++i) w18[i].~Element137297666(); } w10 = 0; void* memory = w18; if (memory) FreeObject(memory); } };
struct Base82eff0 { virtual ~Base82eff0(); char padding[680]; };
struct Level82eff0_1 : Base82eff0 { Member<137297668> member_2b0; virtual void Key1(); DT_INLINE ~Level82eff0_1() {} };
namespace SPTG { 
struct ServerListMenu : Level82eff0_1 { char padding_2b1[15]; ListenerOut<137297667> member_2c0; char padding_2d8[8]; PlainOwnedBlock<137297665, 16> member_2e0; AutoInline<Array137297666> member_2e8; virtual void Key(); ~ServerListMenu(); };
ServerListMenu::~ServerListMenu() { member_2e0.Destroy(); }
}
struct Baseac78a0 { virtual ~Baseac78a0(); char padding[80]; };
namespace Onyx { 
struct SkeletonComponent : Baseac78a0 { ListenerOut<180849154> member_58; PlainFunction<180849153> member_70; virtual void Key(); ~SkeletonComponent(); };
SkeletonComponent::~SkeletonComponent() { member_70.Destroy(); }
}
struct Baseb93c00 { virtual ~Baseb93c00(); char padding[96]; };
namespace Onyx { namespace Collision { 
struct Sphere : Baseb93c00 { ListenerOut<194232322> member_68; char padding_80[16]; PlainFunction<194232321> member_90; virtual void Key(); ~Sphere(); };
Sphere::~Sphere() { member_90.Destroy(); }
}}
struct Basec6c050 { virtual ~Basec6c050(); char padding[72]; };
struct Levelc6c050_1 : Basec6c050 { Member<208405766> member_50; virtual void Key1(); DT_INLINE ~Levelc6c050_1() {} };
namespace Onyx { 
struct WaypointNavigator : Levelc6c050_1 { char padding_51[63]; ListenerOut<208405765> member_90; ListenerOut<208405764> member_a8; ListenerOut<208405763> member_c0; ListenerOut<208405762> member_d8; PlainFunction<208405761> member_f0; virtual void Key(); ~WaypointNavigator(); };
WaypointNavigator::~WaypointNavigator() { member_f0.Destroy(); }
}
struct Basecc4400 { virtual ~Basecc4400(); char padding[72]; };
struct Levelcc4400_1 : Basecc4400 { ListenerOut<214188035> member_50; virtual void Key1(); DT_INLINE ~Levelcc4400_1() {} };
namespace Onyx { namespace Gameplay { namespace Circuits { 
struct F32CurveValuePublisherCircuit : Levelcc4400_1 { ListenerOut<214188034> member_68; PlainFunction<214188033> member_80; virtual void Key(); ~F32CurveValuePublisherCircuit(); };
F32CurveValuePublisherCircuit::~F32CurveValuePublisherCircuit() { member_80.Destroy(); }
}}}
