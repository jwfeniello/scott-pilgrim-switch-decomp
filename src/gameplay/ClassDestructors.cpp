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
#include <stdint.h>
#define DT_INLINE 
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
struct Base682de0 { virtual ~Base682de0(); char padding[128]; };
namespace Onyx { 
struct BannerComponent : Base682de0 { AutoInline<PlainSharedBuffer<109239810>> member_88; char padding_90[8]; AutoInline<PlainSharedBuffer<109239809>> member_98; virtual void Key(); ~BannerComponent(); };
BannerComponent::~BannerComponent() {  }
}
struct Buffer109508097 { void* w0; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; } };
struct Base686f60 { virtual ~Base686f60(); char padding[80]; };
namespace Onyx { namespace Graphics { 
struct PaletteBuffer : Base686f60 { Buffer109508097 member_58; virtual void Key(); ~PaletteBuffer(); };
PaletteBuffer::~PaletteBuffer() { member_58.Destroy(); }
}}
struct Buffer109530625 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { if (w10) FreeObject(w10); } };
struct Buffer109530626 { uint64_t w0; uint64_t w8; uint64_t w10; void* w18; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w18) FreeObject(w18); } };
struct Base6874e0 { virtual ~Base6874e0(); char padding[56]; };
namespace Onyx { namespace Graphics { 
struct DisplayList : Base6874e0 { Buffer109530625 member_40; char padding_58[16]; Auto<Buffer109530626> member_68; virtual void Key(); ~DisplayList(); };
DisplayList::~DisplayList() { member_40.Destroy(); }
}}
namespace Onyx { namespace Flow { 
struct LoadingTask { AutoInline<PlainSharedPointer<110270209, 1176, true, 0>> member_8; virtual void Key(); virtual ~LoadingTask(); };
LoadingTask::~LoadingTask() {  }
}}
struct Buffer112686593 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
namespace Onyx { namespace Flow { 
struct UnloadingTask { Auto<Buffer112686593> member_8; virtual void Key(); virtual ~UnloadingTask(); };
UnloadingTask::~UnloadingTask() {  }
}}
namespace Onyx { namespace Graphics { 
struct RenderSurfaceNative { char padding_8[32]; AutoInline<PlainSharedKeep<114251265>> member_28; virtual void Key(); virtual ~RenderSurfaceNative(); };
RenderSurfaceNative::~RenderSurfaceNative() {  }
}}
struct Nested114291458 { virtual void Key(); char padding_8[8]; AutoInline<PlainCounted<7314653315, 1>> member_10; AutoInline<PlainCounted<7314653314, 3>> member_18; AutoInline<PlainCounted<7314653313, 3>> member_20; DT_INLINE ~Nested114291458() {} };
namespace EE { 
struct GlyphData { char padding_8[8]; Nested114291458 member_10; char padding_38[24]; AutoInline<PlainCounted<114291457, 1>> member_50; virtual void Key(); virtual ~GlyphData(); };
GlyphData::~GlyphData() {  }
}
struct Base6ec140 { virtual ~Base6ec140(); char padding[8]; };

struct Class6ec140 : Base6ec140 { AutoInline<PlainAtomicCounted<116134913, 2>> member_10; virtual void Key(); ~Class6ec140(); };
Class6ec140::~Class6ec140() {  }

struct Base6ec1a0 { virtual ~Base6ec1a0(); char padding[8]; };

struct Class6ec1a0 : Base6ec1a0 { AutoInline<PlainAtomicCounted<116136449, 2>> member_10; virtual void Key(); ~Class6ec1a0(); };
Class6ec1a0::~Class6ec1a0() {  }

struct Base6f5190 { virtual ~Base6f5190(); char padding[8]; };

struct Class6f5190 : Base6f5190 { AutoInline<PlainAtomicCounted<116726017, 2>> member_10; virtual void Key(); ~Class6f5190(); };
Class6f5190::~Class6f5190() {  }

struct Base6f51f0 { virtual ~Base6f51f0(); char padding[8]; };

struct Class6f51f0 : Base6f51f0 { AutoInline<PlainAtomicCounted<116727553, 2>> member_10; virtual void Key(); ~Class6f51f0(); };
Class6f51f0::~Class6f51f0() {  }

struct Base6f5a60 { virtual ~Base6f5a60(); char padding[8]; };

struct Class6f5a60 : Base6f5a60 { AutoInline<PlainAtomicCounted<116762113, 2>> member_10; virtual void Key(); ~Class6f5a60(); };
Class6f5a60::~Class6f5a60() {  }

struct Base6f5ac0 { virtual ~Base6f5ac0(); char padding[8]; };

struct Class6f5ac0 : Base6f5ac0 { AutoInline<PlainAtomicCounted<116763649, 2>> member_10; virtual void Key(); ~Class6f5ac0(); };
Class6f5ac0::~Class6f5ac0() {  }

struct Base6f5cd0 { virtual ~Base6f5cd0(); char padding[8]; };

struct Class6f5cd0 : Base6f5cd0 { AutoInline<PlainAtomicCounted<116772097, 2>> member_10; virtual void Key(); ~Class6f5cd0(); };
Class6f5cd0::~Class6f5cd0() {  }

struct Base6f5d30 { virtual ~Base6f5d30(); char padding[8]; };

struct Class6f5d30 : Base6f5d30 { AutoInline<PlainAtomicCounted<116773633, 2>> member_10; virtual void Key(); ~Class6f5d30(); };
Class6f5d30::~Class6f5d30() {  }

struct Base701480 { virtual ~Base701480(); char padding[8]; };

struct Class701480 : Base701480 { AutoInline<PlainAtomicCounted<117524481, 2>> member_10; virtual void Key(); ~Class701480(); };
Class701480::~Class701480() {  }

struct Base7014e0 { virtual ~Base7014e0(); char padding[8]; };

struct Class7014e0 : Base7014e0 { AutoInline<PlainAtomicCounted<117526017, 2>> member_10; virtual void Key(); ~Class7014e0(); };
Class7014e0::~Class7014e0() {  }

struct Base702340 { virtual ~Base702340(); char padding[8]; };

struct Class702340 : Base702340 { AutoInline<PlainAtomicCounted<117584897, 2>> member_10; virtual void Key(); ~Class702340(); };
Class702340::~Class702340() {  }

struct Base7023a0 { virtual ~Base7023a0(); char padding[8]; };

struct Class7023a0 : Base7023a0 { AutoInline<PlainAtomicCounted<117586433, 2>> member_10; virtual void Key(); ~Class7023a0(); };
Class7023a0::~Class7023a0() {  }

struct Base709730 { virtual ~Base709730(); char padding[80]; };
namespace Onyx { namespace DareAudio { 
struct ListenerComponent : Base709730 { Auto<PlainFunction<118059777>> member_58; virtual void Key(); ~ListenerComponent(); };
ListenerComponent::~ListenerComponent() {  }
}}
struct Base71aa20 { virtual ~Base71aa20(); char padding[72]; };
struct Level71aa20_1 : Base71aa20 { Member<119185923> member_50; virtual void Key1(); DT_INLINE ~Level71aa20_1() {} };
namespace Onyx { namespace DareAudio { 
struct AudioComponent : Level71aa20_1 { char padding_51[31]; Auto<PlainFunction<119185922>> member_70; Auto<PlainFunction<119185921>> member_78; virtual void Key(); ~AudioComponent(); };
AudioComponent::~AudioComponent() {  }
}}

struct Class7326f0 { char padding_8[56]; AutoInline<PlainSharedPointer<120745729, 1176, true, 1>> member_40; virtual void Key(); virtual ~Class7326f0(); };
Class7326f0::~Class7326f0() {  }


struct Class732790 { char padding_8[56]; AutoInline<PlainSharedPointer<120748289, 1176, true, 1>> member_40; virtual void Key(); virtual ~Class732790(); };
Class732790::~Class732790() {  }

struct Buffer121164545 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { if (w8) FreeObject(w8); w8 = 0; } };
struct Base738d30 { virtual ~Base738d30(); char padding[72]; };
struct Level738d30_1 : Base738d30 { Member<121164546> member_50; virtual void Key1(); DT_INLINE ~Level738d30_1() {} };
namespace Onyx { namespace Fire { 
struct Movie : Level738d30_1 { char padding_51[79]; Buffer121164545 member_a0; virtual void Key(); ~Movie() __attribute__((used)); };
inline Movie::~Movie() { member_a0.Destroy(); }
}}
struct Base793960 { virtual ~Base793960(); char padding[72]; };
struct Level793960_1 : Base793960 { Member<127112706> member_50; virtual void Key1(); DT_INLINE ~Level793960_1() {} };
namespace SPTG { namespace SaveOverlay { 
struct VisualOverlay : Level793960_1 { char padding_51[63]; PlainFunction<127112705> member_90; virtual void Key(); ~VisualOverlay(); };
VisualOverlay::~VisualOverlay() { member_90.Destroy(); }
}}
struct Base7a33d0 { virtual ~Base7a33d0(); char padding[152]; };
namespace SPTG { 
struct AchievementManager : Base7a33d0 { Auto<PlainFunction<128138498>> member_a0; char padding_a8[8]; AutoInline<PlainSharedPointer<128138497, 1176, true, 0>> member_b0; virtual void Key(); ~AchievementManager(); };
AchievementManager::~AchievementManager() {  }
}
struct Buffer128152322 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer128152323 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Base7a3730 { virtual ~Base7a3730(); char padding[96]; };
namespace SPTG { 
struct AchievementData : Base7a3730 { Auto<Buffer128152323> member_68; char padding_78[24]; Auto<Buffer128152322> member_90; char padding_a0[8]; Member<128152321> member_a8; virtual void Key(); ~AchievementData(); };
AchievementData::~AchievementData() {  }
}
struct Buffer128731137 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer128731140 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };
struct Buffer128731141 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };
struct Buffer128731142 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };
struct Base7ac480 { virtual ~Base7ac480(); char padding[344]; };
namespace SPTG { 
struct SlopeSection : Base7ac480 { Auto<Buffer128731142> member_160; char padding_170[16]; Auto<Buffer128731141> member_180; char padding_190[16]; Auto<Buffer128731140> member_1a0; char padding_1b0[32]; AutoInline<PlainPointerMember<128731139>> member_1d0; char padding_1d8[48]; AutoInline<PlainPointerMember<128731138>> member_208; char padding_210[48]; Auto<Buffer128731137> member_240; virtual void Key(); ~SlopeSection(); };
SlopeSection::~SlopeSection() {  }
}
struct Buffer128863489 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer128863490 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer128863491 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer128863492 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Base7ae4d0 { virtual ~Base7ae4d0(); char padding[120]; };
namespace SPTG { 
struct PlayfieldCollision : Base7ae4d0 { Auto<Buffer128863492> member_80; char padding_90[24]; Auto<Buffer128863491> member_a8; char padding_b8[24]; Auto<Buffer128863490> member_d0; char padding_e0[24]; Auto<Buffer128863489> member_f8; virtual void Key(); ~PlayfieldCollision(); };
PlayfieldCollision::~PlayfieldCollision() {  }
}
struct Buffer129566465 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Base7b9070 { virtual ~Base7b9070(); char padding[360]; };
namespace SPTG { 
struct PlayfieldActor : Base7b9070 { Auto<Buffer129566465> member_170; virtual void Key(); ~PlayfieldActor(); };
PlayfieldActor::~PlayfieldActor() {  }
}

struct Class7d8a50 { char padding_8[48]; AutoInline<PlainSharedKeep<131638530>> member_38; char padding_40[8]; AutoInline<PlainSharedBuffer<131638529>> member_48; virtual void Key(); virtual ~Class7d8a50() __attribute__((used)); };
inline Class7d8a50::~Class7d8a50() {  }

struct Base7f5650 { virtual ~Base7f5650(); char padding[8]; };

struct Class7f5650 : Base7f5650 { AutoInline<PlainAtomicCounted<133522689, 2>> member_10; virtual void Key(); ~Class7f5650(); };
Class7f5650::~Class7f5650() {  }

struct Base7f56b0 { virtual ~Base7f56b0(); char padding[8]; };

struct Class7f56b0 : Base7f56b0 { AutoInline<PlainAtomicCounted<133524225, 2>> member_10; virtual void Key(); ~Class7f56b0(); };
Class7f56b0::~Class7f56b0() {  }

struct Base7f5760 { virtual ~Base7f5760(); char padding[8]; };

struct Class7f5760 : Base7f5760 { AutoInline<PlainAtomicCounted<133527041, 2>> member_10; virtual void Key(); ~Class7f5760(); };
Class7f5760::~Class7f5760() {  }

struct Base7f57c0 { virtual ~Base7f57c0(); char padding[8]; };

struct Class7f57c0 : Base7f57c0 { AutoInline<PlainAtomicCounted<133528577, 2>> member_10; virtual void Key(); ~Class7f57c0(); };
Class7f57c0::~Class7f57c0() {  }

struct Base7f5a60 { virtual ~Base7f5a60(); char padding[8]; };

struct Class7f5a60 : Base7f5a60 { AutoInline<PlainAtomicCounted<133539329, 2>> member_10; virtual void Key(); ~Class7f5a60(); };
Class7f5a60::~Class7f5a60() {  }

struct Base7f5ac0 { virtual ~Base7f5ac0(); char padding[8]; };

struct Class7f5ac0 : Base7f5ac0 { AutoInline<PlainAtomicCounted<133540865, 2>> member_10; virtual void Key(); ~Class7f5ac0(); };
Class7f5ac0::~Class7f5ac0() {  }

struct Base808560 { virtual ~Base808560(); char padding[680]; };
struct Level808560_1 : Base808560 { Member<134764034> member_2b0; virtual void Key1(); DT_INLINE ~Level808560_1() {} };
namespace SPTG { 
struct StatusScreen : Level808560_1 { char padding_2b1[15]; PlainOwnedBlock<134764033, 16> member_2c0; virtual void Key(); ~StatusScreen(); };
StatusScreen::~StatusScreen() { member_2c0.Destroy(); }
}
struct Base8149f0 { virtual ~Base8149f0(); char padding[704]; };
namespace SPTG { 
struct SettingMenu : Base8149f0 { PlainOwnedBlock<135569153, 16> member_2c8; virtual void Key(); ~SettingMenu(); };
SettingMenu::~SettingMenu() { member_2c8.Destroy(); }
}
struct Base817490 { virtual ~Base817490(); char padding[704]; };
namespace SPTG { 
struct SelectDifficulty : Base817490 { PlainOwnedBlock<135743745, 16> member_2c8; virtual void Key(); ~SelectDifficulty(); };
SelectDifficulty::~SelectDifficulty() { member_2c8.Destroy(); }
}
struct Buffer137180418 { uint64_t w0; uint64_t w8; uint64_t w10; void* w18; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w18) FreeObject(w18); } };
struct Base82d350 { virtual ~Base82d350(); char padding[704]; };
namespace SPTG { 
struct NewMoveUnlocked : Base82d350 { Auto<Buffer137180418> member_2c8; char padding_2e8[8]; PlainOwnedBlock<137180417, 16> member_2f0; virtual void Key(); ~NewMoveUnlocked(); };
NewMoveUnlocked::~NewMoveUnlocked() { member_2f0.Destroy(); }
}
struct Base82dda0 { virtual ~Base82dda0(); char padding[680]; };
struct Level82dda0_1 : Base82dda0 { Member<137222658> member_2b0; virtual void Key1(); DT_INLINE ~Level82dda0_1() {} };
namespace SPTG { 
struct ServerSettingMenu : Level82dda0_1 { char padding_2b1[15]; PlainOwnedBlock<137222657, 16> member_2c0; virtual void Key(); ~ServerSettingMenu(); };
ServerSettingMenu::~ServerSettingMenu() { member_2c0.Destroy(); }
}
struct Base830190 { virtual ~Base830190(); char padding[680]; };
struct Level830190_1 : Base830190 { Member<137369858> member_2b0; virtual void Key1(); DT_INLINE ~Level830190_1() {} };
namespace SPTG { 
struct MultiplayerGameMenu : Level830190_1 { char padding_2b1[15]; PlainOwnedBlock<137369857, 16> member_2c0; virtual void Key(); ~MultiplayerGameMenu(); };
MultiplayerGameMenu::~MultiplayerGameMenu() { member_2c0.Destroy(); }
}
struct Base853ee0 { virtual ~Base853ee0(); char padding[688]; };
namespace SPTG { 
struct InShopStatus : Base853ee0 { PlainOwnedBlock<139718145, 16> member_2b8; virtual void Key(); ~InShopStatus(); };
InShopStatus::~InShopStatus() { member_2b8.Destroy(); }
}
struct Base858840 { virtual ~Base858840(); char padding[688]; };
namespace SPTG { 
struct HelpAndOptions : Base858840 { PlainOwnedBlock<140018689, 16> member_2b8; virtual void Key(); ~HelpAndOptions(); };
HelpAndOptions::~HelpAndOptions() { member_2b8.Destroy(); }
}
struct Base85bd10 { virtual ~Base85bd10(); char padding[720]; };
namespace SPTG { 
struct GamePurchaseMenu : Base85bd10 { Auto<PlainFunction<140235009>> member_2d8; virtual void Key(); ~GamePurchaseMenu(); };
GamePurchaseMenu::~GamePurchaseMenu() {  }
}
struct Buffer140673793 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer140673794 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer140673795 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer140673796 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer140673797 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer140673798 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Base862830 { virtual ~Base862830(); char padding[80]; };
struct Level862830_1 : Base862830 { Member<140673799> member_58; virtual void Key1(); DT_INLINE ~Level862830_1() {} };
namespace SPTG { 
struct FlashMenuBootup : Level862830_1 { char padding_59[31]; Auto<Buffer140673798> member_78; char padding_88[24]; Auto<Buffer140673797> member_a0; char padding_b0[24]; Auto<Buffer140673796> member_c8; char padding_d8[24]; Auto<Buffer140673795> member_f0; char padding_100[24]; Auto<Buffer140673794> member_118; char padding_128[24]; Auto<Buffer140673793> member_140; virtual void Key(); ~FlashMenuBootup(); };
FlashMenuBootup::~FlashMenuBootup() {  }
}
struct Base8695c0 { virtual ~Base8695c0(); char padding[680]; };
struct Level8695c0_1 : Base8695c0 { Member<141122562> member_2b0; virtual void Key1(); DT_INLINE ~Level8695c0_1() {} };
namespace SPTG { 
struct ExtraGameMode : Level8695c0_1 { char padding_2b1[31]; PlainOwnedBlock<141122561, 16> member_2d0; virtual void Key(); ~ExtraGameMode(); };
ExtraGameMode::~ExtraGameMode() { member_2d0.Destroy(); }
}
struct Buffer142780929 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Base882aa0 { virtual ~Base882aa0(); char padding[208]; };
struct Level882aa0_1 : Base882aa0 { Member<142780930> member_d8; virtual void Key1(); DT_INLINE ~Level882aa0_1() {} };
namespace SPTG { 
struct LevelGate : Level882aa0_1 { char padding_d9[39]; Auto<Buffer142780929> member_100; virtual void Key(); ~LevelGate(); };
LevelGate::~LevelGate() {  }
}
struct Buffer143152897 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer143152898 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Base888570 { virtual ~Base888570(); char padding[96]; };
namespace SPTG { 
struct Boundary : Base888570 { Auto<Buffer143152898> member_68; char padding_78[24]; Auto<Buffer143152897> member_90; virtual void Key(); ~Boundary(); };
Boundary::~Boundary() {  }
}
struct Buffer143303169 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Buffer143303170 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Base88aa20 { virtual ~Base88aa20(); char padding[80]; };
namespace SPTG { 
struct ParallaxUpdater : Base88aa20 { Auto<Buffer143303170> member_58; Auto<Buffer143303169> member_80; virtual void Key(); ~ParallaxUpdater(); };
ParallaxUpdater::~ParallaxUpdater() {  }
}
struct Buffer143632642 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer9192489153 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Nested143632643 { virtual void Key(); char padding_8[72]; Auto<Buffer9192489153> member_50; DT_INLINE ~Nested143632643() {} };
struct Base88fa90 { virtual ~Base88fa90(); char padding[144]; };
struct Level88fa90_1 : Base88fa90 { Nested143632643 member_98; virtual void Key1(); DT_INLINE ~Level88fa90_1() {} };
namespace SPTG { 
struct FillLineListShape : Level88fa90_1 { char padding_f8[32]; Auto<Buffer143632642> member_118; char padding_128[16]; Member<143632641> member_138; virtual void Key(); ~FillLineListShape(); };
FillLineListShape::~FillLineListShape() {  }
}
struct Buffer143704833 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer143704834 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Base890c30 { virtual ~Base890c30(); char padding[424]; };
namespace SPTG { 
struct BoundaryGraphics : Base890c30 { Auto<Buffer143704834> member_1b0; char padding_1c8[16]; Auto<Buffer143704833> member_1d8; virtual void Key(); ~BoundaryGraphics() __attribute__((used)); };
inline BoundaryGraphics::~BoundaryGraphics() {  }
}
struct Base893660 { virtual ~Base893660(); char padding[88]; };
namespace SPTG { 
struct ItemRegistry : Base893660 { AutoInline<PlainPointerMember<143877633>> member_60; virtual void Key(); ~ItemRegistry(); };
ItemRegistry::~ItemRegistry() {  }
}
struct Buffer143907586 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Base893db0 { virtual ~Base893db0(); char padding[72]; };
struct Level893db0_1 : Base893db0 { Member<143907588> member_50; virtual void Key1(); DT_INLINE ~Level893db0_1() {} };
namespace SPTG { 
struct Item : Level893db0_1 { char padding_51[39]; AutoInline<PlainSharedBuffer<143907587>> member_78; char padding_80[24]; Auto<Buffer143907586> member_98; char padding_a8[16]; AutoInline<PlainSharedBuffer<143907585>> member_b8; virtual void Key(); ~Item(); };
Item::~Item() {  }
}

struct Class8b9c90 { char padding_8[40]; AutoInline<PlainSharedKeep<146393345>> member_30; virtual void Key(); virtual ~Class8b9c90(); };
Class8b9c90::~Class8b9c90() {  }


struct Class8b9e90 { char padding_8[40]; AutoInline<PlainSharedKeep<146401537>> member_30; virtual void Key(); virtual ~Class8b9e90(); };
Class8b9e90::~Class8b9e90() {  }

struct Buffer146626818 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer9384116417 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Nested146626819 { virtual void Key(); char padding_8[72]; Auto<Buffer9384116417> member_50; DT_INLINE ~Nested146626819() {} };
struct Base8bd590 { virtual ~Base8bd590(); char padding[144]; };
struct Level8bd590_1 : Base8bd590 { Nested146626819 member_98; virtual void Key1(); DT_INLINE ~Level8bd590_1() {} };
namespace SPTG { 
struct FillLineListGroupShape : Level8bd590_1 { char padding_f8[32]; Auto<Buffer146626818> member_118; char padding_128[8]; Member<146626817> member_130; virtual void Key(); ~FillLineListGroupShape(); };
FillLineListGroupShape::~FillLineListGroupShape() {  }
}
struct Buffer9388228673 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Nested146691073 { virtual void Key(); char padding_8[72]; Auto<Buffer9388228673> member_50; DT_INLINE ~Nested146691073() {} };
struct Base8be540 { virtual ~Base8be540(); char padding[144]; };
namespace Onyx { namespace Graphics { 
struct ShapeComponent : Base8be540 { Nested146691073 member_98; virtual void Key(); ~ShapeComponent(); };
ShapeComponent::~ShapeComponent() {  }
}}

struct Class8cc810 { char padding_8[40]; AutoInline<PlainSharedKeep<147620097>> member_30; virtual void Key(); virtual ~Class8cc810(); };
Class8cc810::~Class8cc810() {  }

struct Buffer147639041 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer147639042 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Base8cccb0 { virtual ~Base8cccb0(); char padding[72]; };
struct Level8cccb0_1 : Base8cccb0 { Member<147639044> member_50; virtual void Key1(); DT_INLINE ~Level8cccb0_1() {} };
namespace SPTG { 
struct BitmapFont : Level8cccb0_1 { char padding_51[23]; AutoInline<PlainSharedBuffer<147639043>> member_68; char padding_70[32]; Auto<Buffer147639042> member_90; char padding_a0[24]; Auto<Buffer147639041> member_b8; virtual void Key(); ~BitmapFont(); };
BitmapFont::~BitmapFont() {  }
}
struct Buffer147729921 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };
struct Base8ce2e0 { virtual ~Base8ce2e0(); char padding[144]; };
namespace SPTG { 
struct AnimationInfoHolderSwitch : Base8ce2e0 { Auto<Buffer147729921> member_98; virtual void Key(); ~AnimationInfoHolderSwitch(); };
AnimationInfoHolderSwitch::~AnimationInfoHolderSwitch() {  }
}
struct Buffer147761665 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };
struct Base8ceaa0 { virtual ~Base8ceaa0(); char padding[96]; };
namespace SPTG { 
struct AnimationInfoHolderBank : Base8ceaa0 { Auto<Buffer147761665> member_68; virtual void Key(); ~AnimationInfoHolderBank(); };
AnimationInfoHolderBank::~AnimationInfoHolderBank() {  }
}
struct Base8de640 { virtual ~Base8de640(); char padding[88]; };
struct Level8de640_1 : Base8de640 { Member<148792324> member_60; virtual void Key1(); DT_INLINE ~Level8de640_1() {} };
namespace SPTG { 
struct GameplayFlow : Level8de640_1 { char padding_61[39]; AutoInline<PlainPointerMember<148792323>> member_88; char padding_90[48]; AutoInline<PlainPointerMember<148792322>> member_c0; char padding_c8[48]; AutoInline<PlainPointerMember<148792321>> member_f8; virtual void Key(); ~GameplayFlow() __attribute__((used)); };
inline GameplayFlow::~GameplayFlow() {  }
}
struct Buffer149519105 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };
struct Base8e97b0 { virtual ~Base8e97b0(); char padding[184]; };
namespace SPTG { 
struct ActorEdgeNavigationAction : Base8e97b0 { Auto<Buffer149519105> member_c0; virtual void Key(); ~ActorEdgeNavigationAction(); };
ActorEdgeNavigationAction::~ActorEdgeNavigationAction() {  }
}
struct Buffer149634305 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };
struct Base8eb3d0 { virtual ~Base8eb3d0(); char padding[192]; };
namespace SPTG { 
struct ActorCircleNavigationAction : Base8eb3d0 { Auto<Buffer149634305> member_c8; virtual void Key(); ~ActorCircleNavigationAction(); };
ActorCircleNavigationAction::~ActorCircleNavigationAction() {  }
}
struct Base8f0920 { virtual ~Base8f0920(); char padding[192]; };
namespace SPTG { 
struct MoveIconInWorldMapAction : Base8f0920 { AutoInline<PlainSharedBuffer<149983746>> member_c8; char padding_d0[8]; AutoInline<PlainSharedBuffer<149983745>> member_d8; virtual void Key(); ~MoveIconInWorldMapAction(); };
MoveIconInWorldMapAction::~MoveIconInWorldMapAction() {  }
}
namespace SPTG { 
struct ProjectileSpawnInfo { char padding_8[88]; Auto<PlainFunction<150813953>> member_60; virtual void Key(); virtual ~ProjectileSpawnInfo(); };
ProjectileSpawnInfo::~ProjectileSpawnInfo() {  }
}
struct Buffer151477761 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Buffer151477762 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Base9075e0 { virtual ~Base9075e0(); char padding[168]; };
namespace SPTG { 
struct PadControlModifier : Base9075e0 { Auto<Buffer151477762> member_b0; char padding_c8[8]; Auto<Buffer151477761> member_d0; virtual void Key(); ~PadControlModifier(); };
PadControlModifier::~PadControlModifier() {  }
}
struct Buffer153323521 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer153323522 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Base923880 { virtual ~Base923880(); char padding[216]; };
namespace SPTG { 
struct BattleRoyalModeAction : Base923880 { Auto<Buffer153323522> member_e0; char padding_f8[16]; Auto<Buffer153323521> member_108; virtual void Key(); ~BattleRoyalModeAction() __attribute__((used)); };
inline BattleRoyalModeAction::~BattleRoyalModeAction() {  }
}
struct Buffer153383169 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer153383170 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Base924710 { virtual ~Base924710(); char padding[184]; };
namespace SPTG { 
struct ArenaModeAction : Base924710 { Auto<Buffer153383170> member_c0; char padding_d8[16]; Auto<Buffer153383169> member_e8; virtual void Key(); ~ArenaModeAction() __attribute__((used)); };
inline ArenaModeAction::~ArenaModeAction() {  }
}
struct Buffer153660929 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Buffer153660930 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Buffer153660931 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Base928ae0 { virtual ~Base928ae0(); char padding[96]; };
namespace SPTG { 
struct UnspawnManager : Base928ae0 { Auto<Buffer153660931> member_68; char padding_80[8]; Auto<Buffer153660930> member_88; Auto<Buffer153660929> member_b0; virtual void Key(); ~UnspawnManager(); };
UnspawnManager::~UnspawnManager() {  }
}
struct Base9290c0 { virtual ~Base9290c0(); char padding[104]; };
namespace SPTG { 
struct SPTG_Flow : Base9290c0 { AutoInline<PlainPointerMember<153684993>> member_70; virtual void Key(); ~SPTG_Flow(); };
SPTG_Flow::~SPTG_Flow() {  }
}
struct Buffer154258689 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer154258690 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Base931cd0 { virtual ~Base931cd0(); char padding[112]; };
namespace SPTG { 
struct VolumeMonitor : Base931cd0 { Auto<Buffer154258690> member_78; char padding_90[16]; Auto<Buffer154258689> member_a0; virtual void Key(); ~VolumeMonitor() __attribute__((used)); };
inline VolumeMonitor::~VolumeMonitor() {  }
}
struct Base9327b0 { virtual ~Base9327b0(); char padding[88]; };

struct Class9327b0 : Base9327b0 { AutoInline<PlainPointerMember<154303233>> member_60; virtual void Key(); ~Class9327b0(); };
Class9327b0::~Class9327b0() {  }

struct Base932aa0 { virtual ~Base932aa0(); char padding[96]; };
namespace SPTG { 
struct DropCoinSwitch : Base932aa0 { AutoInline<PlainPointerMember<154315265>> member_68; virtual void Key(); ~DropCoinSwitch(); };
DropCoinSwitch::~DropCoinSwitch() {  }
}
namespace SPTG { 
struct EventExecute { AutoInline<PlainSlotOwned<154596097, 1>> member_8; virtual void Key(); virtual ~EventExecute(); };
EventExecute::~EventExecute() {  }
}
struct Nested154646273 { virtual void Key(); AutoInline<PlainSlotOwned<9897361473, 1>> member_8; DT_INLINE ~Nested154646273() {} };

struct Class937b70 { char padding_8[32]; Nested154646273 member_28; virtual void Key(); virtual ~Class937b70(); };
Class937b70::~Class937b70() {  }

struct Nested154648321 { virtual void Key(); AutoInline<PlainSlotOwned<9897492545, 1>> member_8; DT_INLINE ~Nested154648321() {} };

struct Class937bf0 { char padding_8[32]; Nested154648321 member_28; virtual void Key(); virtual ~Class937bf0(); };
Class937bf0::~Class937bf0() {  }

struct Base937dc0 { virtual ~Base937dc0(); char padding[152]; };
struct Level937dc0_1 : Base937dc0 { Member<154655746> member_a0; virtual void Key1(); DT_INLINE ~Level937dc0_1() {} };
namespace SPTG { 
struct AudioAction : Level937dc0_1 { char padding_a1[23]; PlainSlotOwned<154655745, 1> member_b8; virtual void Key(); ~AudioAction() __attribute__((used)); };
inline AudioAction::~AudioAction() { member_b8.Destroy(); }
}
struct Buffer155889665 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer155889666 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Base94ab00 { virtual ~Base94ab00(); char padding[104]; };
struct Level94ab00_1 : Base94ab00 { Auto<Buffer155889666> member_70; virtual void Key1(); DT_INLINE ~Level94ab00_1() {} };
namespace SPTG { 
struct StrikerCatalog : Level94ab00_1 { char padding_98[16]; Auto<Buffer155889665> member_a8; virtual void Key(); ~StrikerCatalog() __attribute__((used)); };
inline StrikerCatalog::~StrikerCatalog() {  }
}
struct Buffer155934209 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer155934210 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Base94b5e0 { virtual ~Base94b5e0(); char padding[104]; };
struct Level94b5e0_1 : Base94b5e0 { Auto<Buffer155934210> member_70; virtual void Key1(); DT_INLINE ~Level94b5e0_1() {} };

struct Class94b5e0 : Level94b5e0_1 { char padding_98[16]; Auto<Buffer155934209> member_a8; virtual void Key(); ~Class94b5e0() __attribute__((used)); };
inline Class94b5e0::~Class94b5e0() {  }

struct Buffer156474369 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer156474370 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Base9539c0 { virtual ~Base9539c0(); char padding[104]; };
struct Level9539c0_1 : Base9539c0 { Auto<Buffer156474370> member_70; virtual void Key1(); DT_INLINE ~Level9539c0_1() {} };
namespace SPTG { 
struct ProjectileSpawnerCatalog : Level9539c0_1 { char padding_98[16]; Auto<Buffer156474369> member_a8; virtual void Key(); ~ProjectileSpawnerCatalog() __attribute__((used)); };
inline ProjectileSpawnerCatalog::~ProjectileSpawnerCatalog() {  }
}
struct Buffer156519169 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer156519170 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Base9544b0 { virtual ~Base9544b0(); char padding[104]; };
struct Level9544b0_1 : Base9544b0 { Auto<Buffer156519170> member_70; virtual void Key1(); DT_INLINE ~Level9544b0_1() {} };

struct Class9544b0 : Level9544b0_1 { char padding_98[16]; Auto<Buffer156519169> member_a8; virtual void Key(); ~Class9544b0() __attribute__((used)); };
inline Class9544b0::~Class9544b0() {  }

struct Buffer157087233 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };
struct Base95cf60 { virtual ~Base95cf60(); char padding[72]; };
struct Level95cf60_1 : Base95cf60 { Member<157087234> member_50; virtual void Key1(); DT_INLINE ~Level95cf60_1() {} };
namespace SPTG { 
struct PlayerInfo : Level95cf60_1 { char padding_51[39]; Auto<Buffer157087233> member_78; virtual void Key(); ~PlayerInfo(); };
PlayerInfo::~PlayerInfo() {  }
}
struct Buffer161478657 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer161478658 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Base99ff80 { virtual ~Base99ff80(); char padding[104]; };
struct Level99ff80_1 : Base99ff80 { Auto<Buffer161478658> member_70; virtual void Key1(); DT_INLINE ~Level99ff80_1() {} };
namespace SPTG { 
struct PickupSpawnerCatalog : Level99ff80_1 { char padding_98[16]; Auto<Buffer161478657> member_a8; virtual void Key(); ~PickupSpawnerCatalog() __attribute__((used)); };
inline PickupSpawnerCatalog::~PickupSpawnerCatalog() {  }
}
struct Buffer161523457 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer161523458 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Base9a0a70 { virtual ~Base9a0a70(); char padding[104]; };
struct Level9a0a70_1 : Base9a0a70 { Auto<Buffer161523458> member_70; virtual void Key1(); DT_INLINE ~Level9a0a70_1() {} };

struct Class9a0a70 : Level9a0a70_1 { char padding_98[16]; Auto<Buffer161523457> member_a8; virtual void Key(); ~Class9a0a70() __attribute__((used)); };
inline Class9a0a70::~Class9a0a70() {  }


struct Class9ab4a0 { AutoInline<PlainSharedPointer<162220545, 1176, true, 0>> member_8; virtual void Key(); virtual ~Class9ab4a0(); };
Class9ab4a0::~Class9ab4a0() {  }


struct Class9ab540 { AutoInline<PlainSharedPointer<162223105, 1176, true, 0>> member_8; virtual void Key(); virtual ~Class9ab540(); };
Class9ab540::~Class9ab540() {  }


struct Class9acec0 { AutoInline<PlainSharedPointer<162327553, 1176, true, 0>> member_8; virtual void Key(); virtual ~Class9acec0(); };
Class9acec0::~Class9acec0() {  }


struct Class9acf60 { AutoInline<PlainSharedPointer<162330113, 1176, true, 0>> member_8; virtual void Key(); virtual ~Class9acf60(); };
Class9acf60::~Class9acf60() {  }

struct Buffer163395585 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer163395586 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Base9bd380 { virtual ~Base9bd380(); char padding[104]; };
struct Level9bd380_1 : Base9bd380 { Auto<Buffer163395586> member_70; virtual void Key1(); DT_INLINE ~Level9bd380_1() {} };
namespace SPTG { 
struct InteractiveObjectSpawnerCatalog : Level9bd380_1 { char padding_98[16]; Auto<Buffer163395585> member_a8; virtual void Key(); ~InteractiveObjectSpawnerCatalog() __attribute__((used)); };
inline InteractiveObjectSpawnerCatalog::~InteractiveObjectSpawnerCatalog() {  }
}
struct Buffer163440385 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer163440386 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Base9bde70 { virtual ~Base9bde70(); char padding[104]; };
struct Level9bde70_1 : Base9bde70 { Auto<Buffer163440386> member_70; virtual void Key1(); DT_INLINE ~Level9bde70_1() {} };

struct Class9bde70 : Level9bde70_1 { char padding_98[16]; Auto<Buffer163440385> member_a8; virtual void Key(); ~Class9bde70() __attribute__((used)); };
inline Class9bde70::~Class9bde70() {  }

struct Buffer163905281 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Base9c4ff0 { virtual ~Base9c4ff0(); char padding[96]; };
struct Level9c4ff0_1 : Base9c4ff0 { Member<163905282> member_68; virtual void Key1(); DT_INLINE ~Level9c4ff0_1() {} };
namespace SPTG { 
struct InteractiveObjectCatalog : Level9c4ff0_1 { char padding_69[15]; Auto<Buffer163905281> member_78; virtual void Key(); ~InteractiveObjectCatalog(); };
InteractiveObjectCatalog::~InteractiveObjectCatalog() {  }
}
struct Buffer163961089 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Base9c5d90 { virtual ~Base9c5d90(); char padding[96]; };
struct Level9c5d90_1 : Base9c5d90 { Member<163961090> member_68; virtual void Key1(); DT_INLINE ~Level9c5d90_1() {} };

struct Class9c5d90 : Level9c5d90_1 { char padding_69[15]; Auto<Buffer163961089> member_78; virtual void Key(); ~Class9c5d90(); };
Class9c5d90::~Class9c5d90() {  }

struct Base9c5eb0 { virtual ~Base9c5eb0(); char padding[128]; };
namespace SPTG { 
struct InteractiveEffet : Base9c5eb0 { PlainFunction<163965697> member_88; virtual void Key(); ~InteractiveEffet(); };
InteractiveEffet::~InteractiveEffet() { member_88.Destroy(); }
}
struct Buffer164008961 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer164008962 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Base9c6940 { virtual ~Base9c6940(); char padding[104]; };
struct Level9c6940_1 : Base9c6940 { Auto<Buffer164008962> member_70; virtual void Key1(); DT_INLINE ~Level9c6940_1() {} };
namespace SPTG { 
struct EnemySpawnerCatalog : Level9c6940_1 { char padding_98[16]; Auto<Buffer164008961> member_a8; virtual void Key(); ~EnemySpawnerCatalog() __attribute__((used)); };
inline EnemySpawnerCatalog::~EnemySpawnerCatalog() {  }
}
struct Buffer164053761 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer164053762 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Base9c7430 { virtual ~Base9c7430(); char padding[104]; };
struct Level9c7430_1 : Base9c7430 { Auto<Buffer164053762> member_70; virtual void Key1(); DT_INLINE ~Level9c7430_1() {} };

struct Class9c7430 : Level9c7430_1 { char padding_98[16]; Auto<Buffer164053761> member_a8; virtual void Key(); ~Class9c7430() __attribute__((used)); };
inline Class9c7430::~Class9c7430() {  }

struct Buffer168132865 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Basea05810 { virtual ~Basea05810(); char padding[80]; };
namespace SPTG { 
struct SelectedActorRecorder : Basea05810 { Member<168132866> member_58; char padding_59[55]; Auto<Buffer168132865> member_90; virtual void Key(); ~SelectedActorRecorder(); };
SelectedActorRecorder::~SelectedActorRecorder() {  }
}
struct Buffer168461313 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer168461314 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Basea0a840 { virtual ~Basea0a840(); char padding[136]; };
struct Levela0a840_1 : Basea0a840 { Auto<Buffer168461314> member_90; virtual void Key1(); DT_INLINE ~Levela0a840_1() {} };

struct Classa0a840 : Levela0a840_1 { char padding_b8[16]; Auto<Buffer168461313> member_c8; virtual void Key(); ~Classa0a840(); };
Classa0a840::~Classa0a840() {  }

struct Buffer168464385 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer168464386 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Basea0a900 { virtual ~Basea0a900(); char padding[136]; };
struct Levela0a900_1 : Basea0a900 { Auto<Buffer168464386> member_90; virtual void Key1(); DT_INLINE ~Levela0a900_1() {} };

struct Classa0a900 : Levela0a900_1 { char padding_b8[16]; Auto<Buffer168464385> member_c8; virtual void Key(); ~Classa0a900() __attribute__((used)); };
inline Classa0a900::~Classa0a900() {  }

struct Buffer168473602 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer168473603 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Basea0ab40 { virtual ~Basea0ab40(); char padding[136]; };
struct Levela0ab40_2 : Basea0ab40 { Auto<Buffer168473603> member_90; virtual void Key2(); DT_INLINE ~Levela0ab40_2() {} };
struct Levela0ab40_1 : Levela0ab40_2 { char padding_b8[16]; Auto<Buffer168473602> member_c8; virtual void Key1(); DT_INLINE ~Levela0ab40_1() {} };
namespace SPTG { 
struct ControllableSpawnerCatalog : Levela0ab40_1 { char padding_e0[24]; AutoInline<PlainPointerMember<168473601>> member_f8; virtual void Key(); ~ControllableSpawnerCatalog(); };
ControllableSpawnerCatalog::~ControllableSpawnerCatalog() {  }
}

struct Classadf9a0 { char padding_8[40]; AutoInline<PlainSharedKeep<182426113>> member_30; virtual void Key(); virtual ~Classadf9a0(); };
Classadf9a0::~Classadf9a0() {  }

struct Buffer184078082 { uint64_t w0; uint64_t w8; uint64_t w10; void* w18; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w18) FreeObject(w18); } };
struct Baseaf8cf0 { virtual ~Baseaf8cf0(); char padding[72]; };
struct Levelaf8cf0_2 : Baseaf8cf0 { Member<184078084> member_50; virtual void Key2(); DT_INLINE ~Levelaf8cf0_2() {} };
struct Levelaf8cf0_1 : Levelaf8cf0_2 { char padding_51[63]; Member<184078083> member_90; virtual void Key1(); DT_INLINE ~Levelaf8cf0_1() {} };
namespace Onyx { 
struct SkinnedMeshComponent : Levelaf8cf0_1 { char padding_91[15]; Auto<Buffer184078082> member_a0; char padding_c0[8]; PlainFunction<184078081> member_c8; virtual void Key(); ~SkinnedMeshComponent(); };
SkinnedMeshComponent::~SkinnedMeshComponent() { member_c8.Destroy(); }
}
struct Buffer11809620097 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Nested184525314 { virtual void Key(); char padding_8[72]; Auto<Buffer11809620097> member_50; DT_INLINE ~Nested184525314() {} };
struct Baseaffa20 { virtual ~Baseaffa20(); char padding[144]; };
struct Levelaffa20_1 : Baseaffa20 { Nested184525314 member_98; virtual void Key1(); DT_INLINE ~Levelaffa20_1() {} };
namespace Onyx { namespace Graphics { 
struct SphereShape : Levelaffa20_1 { char padding_f8[32]; Member<184525313> member_118; virtual void Key(); ~SphereShape(); };
SphereShape::~SphereShape() {  }
}}
struct Buffer11816353921 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Nested184630530 { virtual void Key(); char padding_8[72]; Auto<Buffer11816353921> member_50; DT_INLINE ~Nested184630530() {} };
struct Baseb013d0 { virtual ~Baseb013d0(); char padding[144]; };
struct Levelb013d0_1 : Baseb013d0 { Nested184630530 member_98; virtual void Key1(); DT_INLINE ~Levelb013d0_1() {} };
namespace Onyx { namespace Graphics { 
struct RingShape : Levelb013d0_1 { char padding_f8[24]; Member<184630529> member_110; virtual void Key(); ~RingShape(); };
RingShape::~RingShape() {  }
}}
struct Buffer11819843713 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Nested184685058 { virtual void Key(); char padding_8[72]; Auto<Buffer11819843713> member_50; DT_INLINE ~Nested184685058() {} };
struct Baseb02120 { virtual ~Baseb02120(); char padding[144]; };
struct Levelb02120_1 : Baseb02120 { Nested184685058 member_98; virtual void Key1(); DT_INLINE ~Levelb02120_1() {} };
namespace Onyx { namespace Graphics { 
struct QuadShape : Levelb02120_1 { char padding_f8[24]; Member<184685057> member_110; virtual void Key(); ~QuadShape(); };
QuadShape::~QuadShape() {  }
}}
struct Buffer11823841409 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Nested184747522 { virtual void Key(); char padding_8[72]; Auto<Buffer11823841409> member_50; DT_INLINE ~Nested184747522() {} };
struct Baseb03060 { virtual ~Baseb03060(); char padding[144]; };
struct Levelb03060_1 : Baseb03060 { Nested184747522 member_98; virtual void Key1(); DT_INLINE ~Levelb03060_1() {} };
namespace Onyx { namespace Graphics { 
struct PyramidShape : Levelb03060_1 { char padding_f8[32]; Member<184747521> member_118; virtual void Key(); ~PyramidShape(); };
PyramidShape::~PyramidShape() {  }
}}
struct Buffer11829444737 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Nested184835074 { virtual void Key(); char padding_8[72]; Auto<Buffer11829444737> member_50; DT_INLINE ~Nested184835074() {} };
struct Baseb045c0 { virtual ~Baseb045c0(); char padding[144]; };
struct Levelb045c0_1 : Baseb045c0 { Nested184835074 member_98; virtual void Key1(); DT_INLINE ~Levelb045c0_1() {} };
namespace Onyx { namespace Graphics { 
struct PlaneShape : Levelb045c0_1 { char padding_f8[40]; Member<184835073> member_120; virtual void Key(); ~PlaneShape(); };
PlaneShape::~PlaneShape() {  }
}}
struct Buffer184918786 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer11834802369 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Nested184918787 { virtual void Key(); char padding_8[72]; Auto<Buffer11834802369> member_50; DT_INLINE ~Nested184918787() {} };
struct Baseb05a30 { virtual ~Baseb05a30(); char padding[144]; };
struct Levelb05a30_1 : Baseb05a30 { Nested184918787 member_98; virtual void Key1(); DT_INLINE ~Levelb05a30_1() {} };
namespace Onyx { namespace Graphics { 
struct LineListShape : Levelb05a30_1 { char padding_f8[32]; Auto<Buffer184918786> member_118; char padding_128[16]; Member<184918785> member_138; virtual void Key(); ~LineListShape(); };
LineListShape::~LineListShape() {  }
}}
struct Buffer11838259329 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Nested184972802 { virtual void Key(); char padding_8[72]; Auto<Buffer11838259329> member_50; DT_INLINE ~Nested184972802() {} };
struct Baseb06760 { virtual ~Baseb06760(); char padding[144]; };
struct Levelb06760_1 : Baseb06760 { Nested184972802 member_98; virtual void Key1(); DT_INLINE ~Levelb06760_1() {} };
namespace Onyx { namespace Graphics { 
struct CylinderShape : Levelb06760_1 { char padding_f8[32]; Member<184972801> member_118; virtual void Key(); ~CylinderShape(); };
CylinderShape::~CylinderShape() {  }
}}
struct Buffer11844419713 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Nested185069058 { virtual void Key(); char padding_8[72]; Auto<Buffer11844419713> member_50; DT_INLINE ~Nested185069058() {} };
struct Baseb07ee0 { virtual ~Baseb07ee0(); char padding[144]; };
struct Levelb07ee0_1 : Baseb07ee0 { Nested185069058 member_98; virtual void Key1(); DT_INLINE ~Levelb07ee0_1() {} };
namespace Onyx { namespace Graphics { 
struct ConeShape : Levelb07ee0_1 { char padding_f8[32]; Member<185069057> member_118; virtual void Key(); ~ConeShape(); };
ConeShape::~ConeShape() {  }
}}
struct Buffer11849531521 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Nested185148930 { virtual void Key(); char padding_8[72]; Auto<Buffer11849531521> member_50; DT_INLINE ~Nested185148930() {} };
struct Baseb09260 { virtual ~Baseb09260(); char padding[144]; };
struct Levelb09260_1 : Baseb09260 { Nested185148930 member_98; virtual void Key1(); DT_INLINE ~Levelb09260_1() {} };
namespace Onyx { namespace Graphics { 
struct CapsuleShape : Levelb09260_1 { char padding_f8[40]; Member<185148929> member_120; virtual void Key(); ~CapsuleShape(); };
CapsuleShape::~CapsuleShape() {  }
}}
struct Buffer11861655681 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Nested185338370 { virtual void Key(); char padding_8[72]; Auto<Buffer11861655681> member_50; DT_INLINE ~Nested185338370() {} };
struct Baseb0c0a0 { virtual ~Baseb0c0a0(); char padding[144]; };
struct Levelb0c0a0_1 : Baseb0c0a0 { Nested185338370 member_98; virtual void Key1(); DT_INLINE ~Levelb0c0a0_1() {} };
namespace Onyx { namespace Graphics { 
struct BoxShape : Levelb0c0a0_1 { char padding_f8[32]; Member<185338369> member_118; virtual void Key(); ~BoxShape(); };
BoxShape::~BoxShape() {  }
}}
struct Buffer186270977 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Buffer186270978 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Buffer186270979 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Buffer186270980 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Baseb1a450 { virtual ~Baseb1a450(); char padding[104]; };
namespace Onyx { namespace Graphics { namespace Particle { namespace Emitter { 
struct EmitterSimple : Baseb1a450 { Auto<Buffer186270980> member_70; char padding_88[8]; Auto<Buffer186270979> member_90; Auto<Buffer186270978> member_b8; Auto<Buffer186270977> member_e0; virtual void Key(); ~EmitterSimple(); };
EmitterSimple::~EmitterSimple() {  }
}}}}
struct Baseb214b0 { virtual ~Baseb214b0(); char padding[112]; };
namespace Onyx { namespace Graphics { namespace Particle { namespace Effect { 
struct EffectTextureStep : Baseb214b0 { AutoInline<PlainPointerMember<186731265>> member_78; virtual void Key(); ~EffectTextureStep(); };
EffectTextureStep::~EffectTextureStep() {  }
}}}}
struct Baseb221b0 { virtual ~Baseb221b0(); char padding[144]; };
namespace Onyx { namespace Graphics { namespace Particle { namespace Effect { 
struct EffectSpawner : Baseb221b0 { AutoInline<PlainPointerMember<186784514>> member_98; char padding_a0[48]; AutoInline<PlainPointerMember<186784513>> member_d0; virtual void Key(); ~EffectSpawner(); };
EffectSpawner::~EffectSpawner() {  }
}}}}
struct Baseb23870 { virtual ~Baseb23870(); char padding[144]; };
namespace Onyx { namespace Graphics { namespace Particle { namespace Effect { 
struct EffectSequencer : Baseb23870 { AutoInline<PlainPointerMember<186877697>> member_98; virtual void Key(); ~EffectSequencer(); };
EffectSequencer::~EffectSequencer() {  }
}}}}
struct Baseb24430 { virtual ~Baseb24430(); char padding[168]; };
namespace Onyx { namespace Graphics { namespace Particle { namespace Effect { 
struct EffectScale : Baseb24430 { AutoInline<PlainPointerMember<186925825>> member_b0; virtual void Key(); ~EffectScale(); };
EffectScale::~EffectScale() {  }
}}}}
struct Baseb25f10 { virtual ~Baseb25f10(); char padding[136]; };
namespace Onyx { namespace Graphics { namespace Particle { namespace Effect { 
struct EffectRandom : Baseb25f10 { AutoInline<PlainPointerMember<187035905>> member_90; virtual void Key(); ~EffectRandom(); };
EffectRandom::~EffectRandom() {  }
}}}}
struct Baseb29440 { virtual ~Baseb29440(); char padding[120]; };
namespace Onyx { namespace Graphics { namespace Particle { namespace Effect { 
struct EffectColor : Baseb29440 { AutoInline<PlainPointerMember<187253761>> member_80; virtual void Key(); ~EffectColor(); };
EffectColor::~EffectColor() {  }
}}}}
struct Buffer188488961 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer188488962 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Baseb3c1d0 { virtual ~Baseb3c1d0(); char padding[72]; };
struct Levelb3c1d0_1 : Baseb3c1d0 { Member<188488963> member_50; virtual void Key1(); DT_INLINE ~Levelb3c1d0_1() {} };
namespace Onyx { namespace Graphics { 
struct MorphInstanceBase : Levelb3c1d0_1 { char padding_51[111]; Auto<Buffer188488962> member_c0; char padding_d0[24]; Auto<Buffer188488961> member_e8; virtual void Key(); ~MorphInstanceBase(); };
MorphInstanceBase::~MorphInstanceBase() {  }
}}
struct Buffer188505089 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Baseb3c5c0 { virtual ~Baseb3c5c0(); char padding[360]; };
struct Levelb3c5c0_1 : Baseb3c5c0 { Member<188505090> member_170; virtual void Key1(); DT_INLINE ~Levelb3c5c0_1() {} };
namespace Onyx { namespace Graphics { 
struct SkinnedMorphInstance : Levelb3c5c0_1 { char padding_171[31]; Auto<Buffer188505089> member_190; virtual void Key(); ~SkinnedMorphInstance(); };
SkinnedMorphInstance::~SkinnedMorphInstance() {  }
}}
struct Buffer188810753 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Baseb41060 { virtual ~Baseb41060(); char padding[72]; };
struct Levelb41060_2 : Baseb41060 { Member<188810755> member_50; virtual void Key2(); DT_INLINE ~Levelb41060_2() {} };
struct Levelb41060_1 : Levelb41060_2 { char padding_51[47]; Member<188810754> member_80; virtual void Key1(); DT_INLINE ~Levelb41060_1() {} };
namespace Onyx { namespace Graphics { 
struct SkinnedMorph : Levelb41060_1 { char padding_81[55]; Auto<Buffer188810753> member_b8; virtual void Key(); ~SkinnedMorph() __attribute__((used)); };
inline SkinnedMorph::~SkinnedMorph() {  }
}}
struct Buffer188908289 { uint64_t w0; void* w8; uint64_t w10; __attribute__((always_inline)) void Destroy() { if (w8) FreeObject(w8); w8 = 0; w10 = 0; } };
struct Buffer188908290 { uint64_t w0; void* w8; uint64_t w10; __attribute__((always_inline)) void Destroy() { if (w8) FreeObject(w8); w8 = 0; w10 = 0; } };
struct Baseb42830 { virtual ~Baseb42830(); char padding[72]; };
namespace Onyx { namespace Graphics { 
struct MorphTarget : Baseb42830 { Auto<Buffer188908290> member_50; char padding_68[8]; Auto<Buffer188908289> member_70; virtual void Key(); ~MorphTarget() __attribute__((used)); };
inline MorphTarget::~MorphTarget() {  }
}}
struct Buffer188922625 { uint64_t w0; void* w8; uint64_t w10; __attribute__((always_inline)) void Destroy() { if (w8) FreeObject(w8); w8 = 0; w10 = 0; } };
struct Buffer188922626 { uint64_t w0; void* w8; uint64_t w10; __attribute__((always_inline)) void Destroy() { if (w8) FreeObject(w8); w8 = 0; w10 = 0; } };
struct Baseb42bb0 { virtual ~Baseb42bb0(); char padding[72]; };
namespace Onyx { namespace Graphics { 
struct MorphTargetNative : Baseb42bb0 { Auto<Buffer188922626> member_50; char padding_68[8]; Auto<Buffer188922625> member_70; virtual void Key(); ~MorphTargetNative() __attribute__((used)); };
inline MorphTargetNative::~MorphTargetNative() {  }
}}
struct Buffer188931329 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };
struct Baseb42dd0 { virtual ~Baseb42dd0(); char padding[160]; };
namespace Onyx { namespace Graphics { 
struct MorphSkin : Baseb42dd0 { Auto<Buffer188931329> member_a8; virtual void Key(); ~MorphSkin(); };
MorphSkin::~MorphSkin() {  }
}}
struct Buffer189176578 { uint64_t w0; void* w8; uint64_t w10; __attribute__((always_inline)) void Destroy() { if (w8) FreeObject(w8); w8 = 0; w10 = 0; } };
struct Buffer189176579 { uint64_t w0; void* w8; uint64_t w10; __attribute__((always_inline)) void Destroy() { if (w8) FreeObject(w8); w8 = 0; w10 = 0; } };
struct Buffer189176580 { uint64_t w0; void* w8; uint64_t w10; __attribute__((always_inline)) void Destroy() { if (w8) FreeObject(w8); w8 = 0; w10 = 0; } };
struct Buffer189176581 { uint64_t w0; void* w8; uint64_t w10; __attribute__((always_inline)) void Destroy() { if (w8) FreeObject(w8); w8 = 0; w10 = 0; } };
struct Baseb469b0 { virtual ~Baseb469b0(); char padding[72]; };
namespace Onyx { namespace Graphics { 
struct MorphBaseTarget : Baseb469b0 { Auto<Buffer189176581> member_50; char padding_68[8]; Auto<Buffer189176580> member_70; char padding_88[8]; Auto<Buffer189176579> member_90; char padding_a8[8]; Auto<Buffer189176578> member_b0; char padding_c8[8]; PlainFunction<189176577> member_d0; virtual void Key(); ~MorphBaseTarget(); };
MorphBaseTarget::~MorphBaseTarget() { member_d0.Destroy(); }
}}
struct Baseb57f40 { virtual ~Baseb57f40(); char padding[200]; };
namespace Onyx { 
struct ViewToTexture : Baseb57f40 { AutoInline<PlainSlotOwned<190313473, 1>> member_d0; virtual void Key(); ~ViewToTexture(); };
ViewToTexture::~ViewToTexture() {  }
}
struct Buffer190769921 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Baseb5eeb0 { virtual ~Baseb5eeb0(); char padding[96]; };
struct Levelb5eeb0_1 : Baseb5eeb0 { Member<190769922> member_68; virtual void Key1(); DT_INLINE ~Levelb5eeb0_1() {} };

struct Classb5eeb0 : Levelb5eeb0_1 { char padding_69[15]; Auto<Buffer190769921> member_78; virtual void Key(); ~Classb5eeb0(); };
Classb5eeb0::~Classb5eeb0() {  }

struct Baseb5f0d0 { virtual ~Baseb5f0d0(); char padding[216]; };
namespace Onyx { 
struct View : Baseb5f0d0 { AutoInline<PlainSlotOwned<190778625, 1>> member_e0; virtual void Key(); ~View(); };
View::~View() {  }
}
struct Buffer191184641 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Baseb653f0 { virtual ~Baseb653f0(); char padding[72]; };
struct Levelb653f0_1 : Baseb653f0 { Member<191184642> member_50; virtual void Key1(); DT_INLINE ~Levelb653f0_1() {} };
namespace Onyx { namespace Graphics { namespace NewMaterialSystem { 
struct MaterialSystem : Levelb653f0_1 { char padding_51[31]; Auto<Buffer191184641> member_70; virtual void Key(); ~MaterialSystem(); };
MaterialSystem::~MaterialSystem() {  }
}}}
struct Buffer12293177409 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Nested192080897 { virtual void Key(); char padding_8[96]; Auto<Buffer12293177409> member_68; DT_INLINE ~Nested192080897() {} };
namespace Onyx { namespace Graphics { namespace EvolutionDevelopment { 
struct BasicRendererTransparent { char padding_8[8]; Nested192080897 member_10; virtual void Key(); virtual ~BasicRendererTransparent(); };
BasicRendererTransparent::~BasicRendererTransparent() {  }
}}}
struct Buffer192084737 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
namespace Onyx { namespace Graphics { namespace EvolutionDevelopment { namespace MaterialScript { 
struct DrawRenderUnitHelper { char padding_8[96]; Auto<Buffer192084737> member_68; virtual void Key(); virtual ~DrawRenderUnitHelper(); };
DrawRenderUnitHelper::~DrawRenderUnitHelper() {  }
}}}}
struct Buffer12293652545 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Nested192088321 { virtual void Key(); char padding_8[96]; Auto<Buffer12293652545> member_68; DT_INLINE ~Nested192088321() {} };
namespace Onyx { namespace Graphics { namespace EvolutionDevelopment { 
struct BasicRendererOpaque { char padding_8[8]; Nested192088321 member_10; virtual void Key(); virtual ~BasicRendererOpaque(); };
BasicRendererOpaque::~BasicRendererOpaque() {  }
}}}
struct Buffer12361728065 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Nested193152001 { virtual void Key(); char padding_8[96]; Auto<Buffer12361728065> member_68; DT_INLINE ~Nested193152001() {} };
namespace Onyx { namespace Graphics { namespace EvolutionDevelopment { 
struct RendererUnlit { char padding_8[16]; Nested193152001 member_18; virtual void Key(); virtual ~RendererUnlit(); };
RendererUnlit::~RendererUnlit() {  }
}}}
struct Buffer12362072129 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Nested193157377 { virtual void Key(); char padding_8[96]; Auto<Buffer12362072129> member_68; DT_INLINE ~Nested193157377() {} };
namespace Onyx { namespace Graphics { namespace EvolutionDevelopment { 
struct BasicRendererSkyBox { char padding_8[8]; Nested193157377 member_10; virtual void Key(); virtual ~BasicRendererSkyBox(); };
BasicRendererSkyBox::~BasicRendererSkyBox() {  }
}}}
struct Baseb89560 { virtual ~Baseb89560(); char padding[72]; };
struct Levelb89560_1 : Baseb89560 { Member<193549826> member_50; virtual void Key1(); DT_INLINE ~Levelb89560_1() {} };
namespace Onyx { namespace Graphics { namespace EvolutionDevelopment { 
struct ScreenRenderSetupSetter : Levelb89560_1 { char padding_51[31]; AutoInline<PlainSharedBuffer<193549825>> member_70; virtual void Key(); ~ScreenRenderSetupSetter(); };
ScreenRenderSetupSetter::~ScreenRenderSetupSetter() {  }
}}}
struct Buffer194705665 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer194705666 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer194705667 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer194705668 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Baseb9af90 { virtual ~Baseb9af90(); char padding[176]; };
namespace Onyx { namespace Collision { 
struct Polygon : Baseb9af90 { Auto<Buffer194705668> member_b8; char padding_c8[24]; Auto<Buffer194705667> member_e0; char padding_f0[32]; Auto<Buffer194705666> member_110; char padding_120[24]; Auto<Buffer194705665> member_138; virtual void Key(); ~Polygon(); };
Polygon::~Polygon() {  }
}}

struct Classba5eb0 { char padding_8[16]; AutoInline<PlainSharedPointer<195422977, 1176, true, 2>> member_18; virtual void Key(); virtual ~Classba5eb0(); };
Classba5eb0::~Classba5eb0() {  }


struct Classba5f40 { char padding_8[16]; AutoInline<PlainSharedPointer<195425281, 1176, true, 2>> member_18; virtual void Key(); virtual ~Classba5f40(); };
Classba5f40::~Classba5f40() {  }


struct Classba6600 { char padding_8[16]; AutoInline<PlainSharedPointer<195452929, 1176, true, 2>> member_18; virtual void Key(); virtual ~Classba6600(); };
Classba6600::~Classba6600() {  }


struct Classba6690 { char padding_8[16]; AutoInline<PlainSharedPointer<195455233, 1176, true, 2>> member_18; virtual void Key(); virtual ~Classba6690(); };
Classba6690::~Classba6690() {  }

struct Baseba78e0 { virtual ~Baseba78e0(); char padding[72]; };
struct Levelba78e0_1 : Baseba78e0 { Member<195530243> member_50; virtual void Key1(); DT_INLINE ~Levelba78e0_1() {} };
namespace Onyx { namespace Behavior { 
struct Transition : Levelba78e0_1 { char padding_51[15]; PlainSlotOwned<195530241, 1> member_60; PlainSlotOwned<195530242, 1> member_68; virtual void Key(); ~Transition(); };
Transition::~Transition() { member_60.Destroy(); member_68.Destroy(); }
}}
struct Buffer195581185 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Baseba8550 { virtual ~Baseba8550(); char padding[208]; };
namespace Onyx { namespace Behavior { 
struct StateMachine : Baseba8550 { AutoInline<PlainPointerMember<195581186>> member_d8; char padding_e0[48]; Auto<Buffer195581185> member_110; virtual void Key(); ~StateMachine() __attribute__((used)); };
inline StateMachine::~StateMachine() {  }
}}

struct Classbad530 { char padding_8[16]; AutoInline<PlainSharedPointer<195908353, 1176, true, 2>> member_18; virtual void Key(); virtual ~Classbad530(); };
Classbad530::~Classbad530() {  }


struct Classbad5c0 { char padding_8[16]; AutoInline<PlainSharedPointer<195910657, 1176, true, 2>> member_18; virtual void Key(); virtual ~Classbad5c0(); };
Classbad5c0::~Classbad5c0() {  }

struct Basebb64e0 { virtual ~Basebb64e0(); char padding[104]; };
namespace Onyx { namespace Behavior { 
struct Modifier : Basebb64e0 { PlainSlotOwned<196496897, 1> member_70; virtual void Key(); ~Modifier(); };
Modifier::~Modifier() { member_70.Destroy(); }
}}
struct Buffer196517890 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Basebb6a00 { virtual ~Basebb6a00(); char padding[112]; };
namespace Onyx { namespace Behavior { 
struct Generator : Basebb6a00 { PlainFunction<196517889> member_78; Auto<Buffer196517890> member_80; virtual void Key(); ~Generator(); };
Generator::~Generator() { member_78.Destroy(); }
}}
struct Buffer196524033 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };

struct Classbb6b80 { char padding_8[16]; Auto<Buffer196524033> member_18; virtual void Key(); virtual ~Classbb6b80(); };
Classbb6b80::~Classbb6b80() {  }

struct Buffer196539393 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };

struct Classbb6f40 { char padding_8[16]; Auto<Buffer196539393> member_18; virtual void Key(); virtual ~Classbb6f40(); };
Classbb6f40::~Classbb6f40() {  }

struct Buffer196640257 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };

struct Classbb87e0 { char padding_8[16]; Auto<Buffer196640257> member_18; virtual void Key(); virtual ~Classbb87e0(); };
Classbb87e0::~Classbb87e0() {  }

struct Buffer196744449 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };

struct Classbba150 { char padding_8[16]; Auto<Buffer196744449> member_18; virtual void Key(); virtual ~Classbba150(); };
Classbba150::~Classbba150() {  }

struct Buffer196804865 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };

struct Classbbb010 { char padding_8[16]; Auto<Buffer196804865> member_18; virtual void Key(); virtual ~Classbbb010(); };
Classbbb010::~Classbbb010() {  }

struct Buffer196948226 { uint64_t w0; uint64_t w8; uint64_t w10; void* w18; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w18) FreeObject(w18); } };
struct Basebbd310 { virtual ~Basebbd310(); char padding[72]; };
namespace Onyx { 
struct EventTrack : Basebbd310 { PlainFunction<196948225> member_50; Auto<Buffer196948226> member_58; virtual void Key(); ~EventTrack(); };
EventTrack::~EventTrack() { member_50.Destroy(); }
}
struct Buffer196976897 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };

struct Classbbda10 { char padding_8[16]; Auto<Buffer196976897> member_18; virtual void Key(); virtual ~Classbbda10(); };
Classbbda10::~Classbbda10() {  }

struct Buffer197115393 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Basebbfbe0 { virtual ~Basebbfbe0(); char padding[136]; };
namespace Onyx { 
struct Transitionner : Basebbfbe0 { Member<197115395> member_90; char padding_91[87]; Member<197115394> member_e8; char padding_e9[111]; Auto<Buffer197115393> member_158; virtual void Key(); ~Transitionner(); };
Transitionner::~Transitionner() {  }
}
struct Basebc3920 { virtual ~Basebc3920(); char padding[112]; };
namespace Onyx { 
struct AnimationSet : Basebc3920 { Member<197366274> member_78; char padding_79[103]; AutoInline<PlainPointerMember<197366273>> member_e0; virtual void Key(); ~AnimationSet(); };
AnimationSet::~AnimationSet() {  }
}
struct Buffer197465089 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Basebc5140 { virtual ~Basebc5140(); char padding[72]; };
struct Levelbc5140_1 : Basebc5140 { Member<197465090> member_50; virtual void Key1(); DT_INLINE ~Levelbc5140_1() {} };
namespace Onyx { 
struct AnimationKit : Levelbc5140_1 { char padding_51[63]; Auto<Buffer197465089> member_90; virtual void Key(); ~AnimationKit(); };
AnimationKit::~AnimationKit() {  }
}
struct Basebe7650 { virtual ~Basebe7650(); char padding[72]; };
struct Levelbe7650_1 : Basebe7650 { Member<199714050> member_50; virtual void Key1(); DT_INLINE ~Levelbe7650_1() {} };
namespace Onyx { namespace Localization { 
struct TextLocalizer : Levelbe7650_1 { char padding_51[23]; AutoInline<PlainSharedBuffer<199714049>> member_68; virtual void Key(); ~TextLocalizer(); };
TextLocalizer::~TextLocalizer() {  }
}}
struct Buffer200190209 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };
namespace Onyx { namespace Localization { 
struct CustomProperty { char padding_8[24]; Auto<Buffer200190209> member_20; virtual void Key(); virtual ~CustomProperty(); };
CustomProperty::~CustomProperty() {  }
}}
struct Buffer200220673 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };
namespace Onyx { namespace Localization { 
struct Dialog { char padding_8[24]; Auto<Buffer200220673> member_20; virtual void Key(); virtual ~Dialog(); };
Dialog::~Dialog() {  }
}}
struct Buffer200271361 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };
namespace Onyx { namespace Localization { 
struct Team { char padding_8[32]; Auto<Buffer200271361> member_28; virtual void Key(); virtual ~Team(); };
Team::~Team() {  }
}}
struct Buffer200281345 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };
namespace Onyx { namespace Localization { 
struct StringTable { char padding_8[16]; Auto<Buffer200281345> member_18; virtual void Key(); virtual ~StringTable(); };
StringTable::~StringTable() {  }
}}
struct Basebf1550 { virtual ~Basebf1550(); char padding[80]; };

struct Damper : Basebf1550 { PlainFunction<200365313> member_58; virtual void Key(); ~Damper(); };
Damper::~Damper() { member_58.Destroy(); }

namespace Onyx { 
struct StringDescriptor { char padding_8[8]; AutoInline<PlainSharedKeep<200408321>> member_10; virtual void Key(); virtual ~StringDescriptor(); };
StringDescriptor::~StringDescriptor() {  }
}
namespace Onyx { 
struct XorPredicate { PlainFunction<200414721> member_8; PlainFunction<200414722> member_10; virtual void Key(); virtual ~XorPredicate() __attribute__((used)); };
inline XorPredicate::~XorPredicate() { member_8.Destroy(); member_10.Destroy(); }
}

struct Classbf22a0 { PlainFunction<200419841> member_8; PlainFunction<200419842> member_10; virtual void Key(); virtual ~Classbf22a0() __attribute__((used)); };
inline Classbf22a0::~Classbf22a0() { member_8.Destroy(); member_10.Destroy(); }

namespace Onyx { 
struct OrPredicate { PlainFunction<200425985> member_8; PlainFunction<200425986> member_10; virtual void Key(); virtual ~OrPredicate() __attribute__((used)); };
inline OrPredicate::~OrPredicate() { member_8.Destroy(); member_10.Destroy(); }
}

struct Classbf2550 { PlainFunction<200430849> member_8; PlainFunction<200430850> member_10; virtual void Key(); virtual ~Classbf2550() __attribute__((used)); };
inline Classbf2550::~Classbf2550() { member_8.Destroy(); member_10.Destroy(); }

namespace Onyx { 
struct NotPredicate { Auto<PlainFunction<200448769>> member_8; virtual void Key(); virtual ~NotPredicate(); };
NotPredicate::~NotPredicate() {  }
}
namespace Onyx { 
struct AndPredicate { PlainFunction<200456705> member_8; PlainFunction<200456706> member_10; virtual void Key(); virtual ~AndPredicate() __attribute__((used)); };
inline AndPredicate::~AndPredicate() { member_8.Destroy(); member_10.Destroy(); }
}

struct Classbf2cd0 { PlainFunction<200461569> member_8; PlainFunction<200461570> member_10; virtual void Key(); virtual ~Classbf2cd0() __attribute__((used)); };
inline Classbf2cd0::~Classbf2cd0() { member_8.Destroy(); member_10.Destroy(); }

struct Basec1cc90 { virtual ~Basec1cc90(); char padding[8]; };

struct Classc1cc90 : Basec1cc90 { AutoInline<PlainAtomicCounted<203213057, 2>> member_10; virtual void Key(); ~Classc1cc90(); };
Classc1cc90::~Classc1cc90() {  }

struct Basec1ccf0 { virtual ~Basec1ccf0(); char padding[8]; };

struct Classc1ccf0 : Basec1ccf0 { AutoInline<PlainAtomicCounted<203214593, 2>> member_10; virtual void Key(); ~Classc1ccf0(); };
Classc1ccf0::~Classc1ccf0() {  }

struct Basec56dd0 { virtual ~Basec56dd0(); char padding[856]; };
namespace Onyx { namespace Strategy { 
struct Write : Basec56dd0 { AutoInline<PlainSharedBuffer<207019265>> member_360; virtual void Key(); ~Write(); };
Write::~Write() {  }
}}
struct Basec57b50 { virtual ~Basec57b50(); char padding[864]; };
namespace Onyx { namespace Strategy { 
struct Delete : Basec57b50 { AutoInline<PlainSharedBuffer<207074561>> member_368; virtual void Key(); ~Delete(); };
Delete::~Delete() {  }
}}
struct Basec57da0 { virtual ~Basec57da0(); char padding[856]; };
namespace Onyx { namespace Strategy { 
struct Read : Basec57da0 { AutoInline<PlainSharedBuffer<207084033>> member_360; virtual void Key(); ~Read(); };
Read::~Read() {  }
}}

struct Classc58c90 { char padding_8[8]; AutoInline<PlainSharedPointer<207145217, 1176, true, 3>> member_10; virtual void Key(); virtual ~Classc58c90(); };
Classc58c90::~Classc58c90() {  }


struct Classc58cf0 { char padding_8[8]; AutoInline<PlainSharedPointer<207146753, 1176, true, 3>> member_10; virtual void Key(); virtual ~Classc58cf0(); };
Classc58cf0::~Classc58cf0() {  }

struct Basec6e350 { virtual ~Basec6e350(); char padding[72]; };
struct Levelc6e350_1 : Basec6e350 { Member<208549122> member_50; virtual void Key1(); DT_INLINE ~Levelc6e350_1() {} };
namespace Onyx { 
struct Waypoint : Levelc6e350_1 { char padding_51[47]; PlainSlotOwned<208549121, 2> member_80; virtual void Key(); ~Waypoint() __attribute__((used)); };
inline Waypoint::~Waypoint() { member_80.Destroy(); }
}
struct Basec6eff0 { virtual ~Basec6eff0(); char padding[80]; };
namespace Onyx { 
struct LinearWaypointLink : Basec6eff0 { PlainSlotOwned<208600833, 2> member_58; virtual void Key(); ~LinearWaypointLink(); };
LinearWaypointLink::~LinearWaypointLink() { member_58.Destroy(); }
}
struct Basec6f8a0 { virtual ~Basec6f8a0(); char padding[80]; };
namespace Onyx { 
struct WaypointLink : Basec6f8a0 { PlainSlotOwned<208636417, 2> member_58; virtual void Key(); ~WaypointLink(); };
WaypointLink::~WaypointLink() { member_58.Destroy(); }
}
struct Basec6f980 { virtual ~Basec6f980(); char padding[80]; };
namespace Onyx { 
struct BezierWaypointLink : Basec6f980 { PlainSlotOwned<208640001, 2> member_58; virtual void Key(); ~BezierWaypointLink(); };
BezierWaypointLink::~BezierWaypointLink() { member_58.Destroy(); }
}
struct Basec82590 { virtual ~Basec82590(); char padding[112]; };
namespace Onyx { 
struct SpawnerPositionner : Basec82590 { PlainFunction<209869057> member_78; virtual void Key(); ~SpawnerPositionner(); };
SpawnerPositionner::~SpawnerPositionner() { member_78.Destroy(); }
}
struct Basec82bc0 { virtual ~Basec82bc0(); char padding[72]; };
struct Levelc82bc0_1 : Basec82bc0 { Member<209894402> member_50; virtual void Key1(); DT_INLINE ~Levelc82bc0_1() {} };
namespace Onyx { 
struct ProximitySpawnPointLocker : Levelc82bc0_1 { char padding_51[55]; PlainFunction<209894401> member_88; virtual void Key(); ~ProximitySpawnPointLocker() __attribute__((used)); };
inline ProximitySpawnPointLocker::~ProximitySpawnPointLocker() { member_88.Destroy(); }
}
namespace Onyx { 
struct ButtonPredicate { PlainSlotOwned<210228993, 1> member_8; PlainFunction<210228994> member_10; virtual void Key(); virtual ~ButtonPredicate() __attribute__((used)); };
inline ButtonPredicate::~ButtonPredicate() { member_8.Destroy(); member_10.Destroy(); }
}
namespace Onyx { 
struct AxisPredicate { PlainSlotOwned<210317057, 1> member_8; PlainSlotOwned<210317058, 1> member_10; virtual void Key(); virtual ~AxisPredicate() __attribute__((used)); };
inline AxisPredicate::~AxisPredicate() { member_8.Destroy(); member_10.Destroy(); }
}
struct Buffer211284994 { uint64_t w0; void* w8; uint64_t w10; __attribute__((always_inline)) void Destroy() { if (w8) FreeObject(w8); w8 = 0; w10 = 0; } };
struct Basec97f40 { virtual ~Basec97f40(); char padding[144]; };
namespace Onyx { 
struct PrimitiveComponent : Basec97f40 { PlainFunction<211284993> member_98; char padding_a0[112]; Auto<Buffer211284994> member_110; virtual void Key(); ~PrimitiveComponent(); };
PrimitiveComponent::~PrimitiveComponent() { member_98.Destroy(); }
}
struct Basecc9690 { virtual ~Basecc9690(); char padding[112]; };
namespace Onyx { namespace Gameplay { namespace Circuits { 
struct IfCircuit : Basecc9690 { AutoInline<PlainSharedBuffer<214526209>> member_78; virtual void Key(); ~IfCircuit(); };
IfCircuit::~IfCircuit() {  }
}}}
struct Basecca3f0 { virtual ~Basecca3f0(); char padding[72]; };
struct Levelcca3f0_1 : Basecca3f0 { Member<214580995> member_50; virtual void Key1(); DT_INLINE ~Levelcca3f0_1() {} };
namespace Onyx { namespace Gameplay { namespace Circuits { 
struct AssignCircuit : Levelcca3f0_1 { char padding_51[55]; AutoInline<PlainSharedBuffer<214580994>> member_88; char padding_90[8]; AutoInline<PlainSharedBuffer<214580993>> member_98; virtual void Key(); ~AssignCircuit(); };
AssignCircuit::~AssignCircuit() {  }
}}}
struct Baseccad20 { virtual ~Baseccad20(); char padding[72]; };
struct Levelccad20_1 : Baseccad20 { Member<214618627> member_50; virtual void Key1(); DT_INLINE ~Levelccad20_1() {} };
namespace Onyx { namespace Gameplay { namespace Circuits { 
struct ComputeCircuit : Levelccad20_1 { char padding_51[95]; AutoInline<PlainSharedBuffer<214618626>> member_b0; char padding_b8[8]; AutoInline<PlainSharedBuffer<214618625>> member_c0; virtual void Key(); ~ComputeCircuit(); };
ComputeCircuit::~ComputeCircuit() {  }
}}}
struct Baseccbe40 { virtual ~Baseccbe40(); char padding[72]; };
struct Levelccbe40_1 : Baseccbe40 { Member<214688771> member_50; virtual void Key1(); DT_INLINE ~Levelccbe40_1() {} };
namespace Onyx { namespace Gameplay { namespace Circuits { 
struct CompareCircuit : Levelccbe40_1 { char padding_51[31]; AutoInline<PlainSharedBuffer<214688770>> member_70; char padding_78[8]; AutoInline<PlainSharedBuffer<214688769>> member_80; virtual void Key(); ~CompareCircuit(); };
CompareCircuit::~CompareCircuit() {  }
}}}
namespace EE { 
struct SwapChain { char padding_8[48]; AutoInline<PlainCounted<233983493, 3>> member_38; AutoInline<PlainCounted<233983492, 3>> member_40; AutoInline<PlainCounted<233983491, 3>> member_48; AutoInline<PlainCounted<233983490, 3>> member_50; AutoInline<PlainCounted<233983489, 3>> member_58; virtual void Key(); virtual ~SwapChain(); };
SwapChain::~SwapChain() {  }
}
struct Baseeb2d60 { virtual ~Baseeb2d60(); char padding[184]; };
namespace EE { 
struct SwitchTouchInput : Baseeb2d60 { AutoInline<PlainCounted<246601217, 3>> member_c0; virtual void Key(); ~SwitchTouchInput(); };
SwitchTouchInput::~SwitchTouchInput() {  }
}
struct Baseeb32e0 { virtual ~Baseeb32e0(); char padding[184]; };
namespace EE { 
struct SwitchKeyboardInput : Baseeb32e0 { AutoInline<PlainCounted<246623746, 3>> member_c0; AutoInline<PlainCounted<246623745, 3>> member_c8; virtual void Key(); ~SwitchKeyboardInput(); };
SwitchKeyboardInput::~SwitchKeyboardInput() {  }
}
struct Baseeb36f0 { virtual ~Baseeb36f0(); char padding[184]; };
namespace EE { 
struct SwitchMouseInput : Baseeb36f0 { AutoInline<PlainCounted<246640386, 3>> member_c0; AutoInline<PlainCounted<246640385, 3>> member_c8; virtual void Key(); ~SwitchMouseInput(); };
SwitchMouseInput::~SwitchMouseInput() {  }
}
struct Baseeb3ef0 { virtual ~Baseeb3ef0(); char padding[200]; };
namespace EE { 
struct SwitchGamePad : Baseeb3ef0 { AutoInline<PlainCounted<246673156, 3>> member_d0; AutoInline<PlainCounted<246673155, 3>> member_d8; AutoInline<PlainCounted<246673154, 3>> member_e0; AutoInline<PlainCounted<246673153, 3>> member_e8; virtual void Key(); ~SwitchGamePad(); };
SwitchGamePad::~SwitchGamePad() {  }
}
namespace EE { 
struct BatchTexture { char padding_8[8]; AutoInline<PlainCounted<246896643, 1>> member_10; AutoInline<PlainCounted<246896642, 3>> member_18; AutoInline<PlainCounted<246896641, 3>> member_20; virtual void Key(); virtual ~BatchTexture(); };
BatchTexture::~BatchTexture() {  }
}
