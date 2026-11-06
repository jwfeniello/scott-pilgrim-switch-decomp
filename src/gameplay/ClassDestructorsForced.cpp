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
// These keep the inlining of their member destructors forced.
#include <stdint.h>
#define DT_INLINE __attribute__((always_inline))
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
// What a boxed shared pointer (Kind 4) holds: an object whose destructor is its ninth virtual.
struct BoxedValue {
    virtual void V0(); virtual void V1(); virtual void V2(); virtual void V3();
    virtual void V4(); virtual void V5(); virtual void V6(); virtual void V7();
    virtual ~BoxedValue();
};
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
            } else if (Kind == 4) {
                // A box holding a pointer to the object: the object goes, then the box (read again), and
                // the reference is cleared.
                if (v) {
                    if (BoxedValue* inner = *static_cast<BoxedValue**>(v)) {
                        DecodeAllocators* m = DecodeAllocatorManager;
                        DecodeAllocator* a = m->values[DecodeAllocatorIndex(m, inner)];
                        inner->~BoxedValue();
                        a->Free(inner);
                    }
                    if (object) FreeObject(object);
                    object = nullptr;
                }
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
struct Buffer110665729 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Base698a00 { virtual ~Base698a00(); char padding[72]; };
struct Level698a00_1 : Base698a00 { Member<110665731> member_50; virtual void Key1(); DT_INLINE ~Level698a00_1() {} };
namespace Onyx { 
struct SpawnTicket : Level698a00_1 { char padding_51[47]; ListenerOut<110665730> member_80; char padding_98[16]; Auto<Buffer110665729> member_a8; virtual void Key(); ~SpawnTicket(); };
SpawnTicket::~SpawnTicket() {  }
}
struct Element111323907 { char data[8]; ~Element111323907() noexcept; };
struct Array111323907 { uint64_t w0; uint64_t w8; Element111323907* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element111323907(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element111323907(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base6a2ab0 { virtual ~Base6a2ab0(); char padding[80]; };

struct Class6a2ab0 : Base6a2ab0 { AutoInline<Array111323907> member_58; char padding_70[8]; AutoInline<PlainStrongHandle<111323906, true>> member_78; AutoInline<PlainStrongHandle<111323905, true>> member_80; virtual void Key(); ~Class6a2ab0(); };
Class6a2ab0::~Class6a2ab0() {  }

struct Base6a8450 { virtual ~Base6a8450(); char padding[72]; };
struct Level6a8450_1 : Base6a8450 { Member<111691010> member_50; virtual void Key1(); DT_INLINE ~Level6a8450_1() {} };
namespace Onyx { namespace Flow { 
struct Game : Level6a8450_1 { char padding_51[23]; AutoInline<PlainOwnedList<111691009>> member_68; virtual void Key(); DT_INLINE ~Game(); };
Game::~Game() {  }
}}
struct Base6bc2d0 { virtual ~Base6bc2d0(); char padding[104]; };
namespace Onyx { 
struct Profile : Base6bc2d0 { AutoInline<PlainOwnedList<112995586>> member_70; char padding_88[8]; Auto<PlainFunction<112995585>> member_90; virtual void Key(); DT_INLINE ~Profile(); };
Profile::~Profile() {  }
}
struct Base7059f0 { virtual ~Base7059f0(); char padding[72]; };
namespace Onyx { namespace DareAudio { 
struct WiiMoteSpeakerComponent : Base7059f0 { ListenerOut<117808898> member_50; Auto<PlainFunction<117808897>> member_68; virtual void Key(); DT_INLINE ~WiiMoteSpeakerComponent(); };
WiiMoteSpeakerComponent::~WiiMoteSpeakerComponent() {  }
}}
struct Buffer118095617 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Element118095620 { virtual ~Element118095620() noexcept; char data[104]; };
struct Array118095620 { uint64_t w0; uint64_t w8; Element118095620* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element118095620(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element118095620(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base709ff0 { virtual ~Base709ff0(); char padding[160]; };
namespace Onyx { namespace DareAudio { 
struct RolloffGraphics : Base709ff0 { AutoInline<Array118095620> member_a8; char padding_c0[8]; Member<118095619> member_c8; char padding_c9[63]; AutoInline<PlainStrongHandle<118095618, true>> member_108; char padding_110[8]; Auto<Buffer118095617> member_118; virtual void Key(); ~RolloffGraphics(); };
RolloffGraphics::~RolloffGraphics() {  }
}}
struct Base71b8a0 { virtual ~Base71b8a0(); char padding[72]; };
namespace Onyx { namespace DareAudio { 
struct AudioWaveMarkerComponent : Base71b8a0 { ListenerOut<119245314> member_50; Auto<PlainFunction<119245313>> member_68; virtual void Key(); DT_INLINE ~AudioWaveMarkerComponent(); };
AudioWaveMarkerComponent::~AudioWaveMarkerComponent() {  }
}}
struct Base71e630 { virtual ~Base71e630(); char padding[72]; };
namespace Onyx { namespace DareAudio { 
struct AudioNotificationComponent : Base71e630 { ListenerOut<119431938> member_50; Auto<PlainFunction<119431937>> member_68; virtual void Key(); DT_INLINE ~AudioNotificationComponent(); };
AudioNotificationComponent::~AudioNotificationComponent() {  }
}}
struct Base71ee30 { virtual ~Base71ee30(); char padding[96]; };
namespace Onyx { namespace DareAudio { 
struct Audio2DAmbientComponent : Base71ee30 { ListenerOut<119464708> member_68; ListenerOut<119464707> member_80; Member<119464706> member_98; char padding_99[3]; Member<119464705> member_9c; virtual void Key(); ~Audio2DAmbientComponent(); };
Audio2DAmbientComponent::~Audio2DAmbientComponent() {  }
}}
struct Base726ad0 { virtual ~Base726ad0(); char padding[72]; };
struct Level726ad0_1 : Base726ad0 { Member<119975173> member_50; virtual void Key1(); DT_INLINE ~Level726ad0_1() {} };
namespace Onyx { namespace DLC { 
struct DLCTask : Level726ad0_1 { char padding_51[15]; ListenerOut<119975172> member_60; ListenerOut<119975171> member_78; ListenerOut<119975170> member_90; ListenerOut<119975169> member_a8; virtual void Key(); ~DLCTask(); };
DLCTask::~DLCTask() {  }
}}
struct Base72a960 { virtual ~Base72a960(); char padding[256]; };
namespace Onyx { namespace DLC { 
struct UpdateTask : Base72a960 { ListenerOut<120231429> member_108; ListenerOut<120231428> member_120; ListenerOut<120231427> member_138; ListenerOut<120231426> member_150; char padding_168[16]; AutoInline<PlainSharedPointer<120231425, 1176, true, 1>> member_178; virtual void Key(); ~UpdateTask(); };
UpdateTask::~UpdateTask() {  }
}}
struct Base72b740 { virtual ~Base72b740(); char padding[256]; };
namespace Onyx { namespace DLC { 
struct QueryContent : Base72b740 { ListenerInline<120288259> member_108; ListenerOut<120288258> member_120; char padding_138[8]; Auto<PlainFunction<120288257>> member_140; virtual void Key(); ~QueryContent(); };
QueryContent::~QueryContent() {  }
}}
struct Base72d4a0 { virtual ~Base72d4a0(); char padding[72]; };
namespace Onyx { namespace DLC { 
struct ProgressTask : Base72d4a0 { ListenerOut<120408578> member_50; char padding_68[16]; Auto<PlainFunction<120408577>> member_78; virtual void Key(); DT_INLINE ~ProgressTask(); };
ProgressTask::~ProgressTask() {  }
}}
struct Base731430 { virtual ~Base731430(); char padding[256]; };
namespace Onyx { namespace DLC { 
struct DownloadTask : Base731430 { ListenerOut<120668933> member_108; ListenerOut<120668932> member_120; ListenerOut<120668931> member_138; ListenerOut<120668930> member_150; char padding_168[16]; AutoInline<PlainSharedPointer<120668929, 1176, true, 1>> member_178; virtual void Key(); ~DownloadTask(); };
DownloadTask::~DownloadTask() {  }
}}
struct Base73cc60 { virtual ~Base73cc60(); char padding[80]; };
namespace Onyx { namespace Fire { 
struct FireActionScriptTrigger : Base73cc60 { ListenerOut<121423363> member_58; char padding_70[8]; AutoInline<PlainSharedBuffer<121423362>> member_78; Member<121423361> member_80; virtual void Key(); ~FireActionScriptTrigger(); };
FireActionScriptTrigger::~FireActionScriptTrigger() {  }
}}
struct Base7653d0 { virtual ~Base7653d0(); char padding[72]; };
struct Level7653d0_1 : Base7653d0 { Member<124075268> member_50; virtual void Key1(); DT_INLINE ~Level7653d0_1() {} };
namespace SPTG { 
struct WorldMapWaypoint : Level7653d0_1 { char padding_51[79]; ListenerOut<124075267> member_a0; ListenerOut<124075266> member_b8; char padding_d0[16]; AutoInline<PlainSharedBuffer<124075265>> member_e0; virtual void Key(); ~WorldMapWaypoint(); };
WorldMapWaypoint::~WorldMapWaypoint() {  }
}
struct Base78e5b0 { virtual ~Base78e5b0(); char padding[72]; };
struct Level78e5b0_1 : Base78e5b0 { Member<126769922> member_50; virtual void Key1(); DT_INLINE ~Level78e5b0_1() {} };
namespace SPTG { 
struct CharacterIcon : Level78e5b0_1 { char padding_51[319]; ListenerOut<126769921> member_190; virtual void Key(); DT_INLINE ~CharacterIcon(); };
CharacterIcon::~CharacterIcon() {  }
}
struct Base79a2a0 { virtual ~Base79a2a0(); char padding[72]; };
struct Level79a2a0_1 : Base79a2a0 { Member<127543811> member_50; virtual void Key1(); DT_INLINE ~Level79a2a0_1() {} };
namespace SPTG { 
struct GamePurchaser : Level79a2a0_1 { char padding_51[47]; ListenerOut<127543810> member_80; ListenerOut<127543809> member_98; virtual void Key(); ~GamePurchaser(); };
GamePurchaser::~GamePurchaser() {  }
}
struct Base79b7e0 { virtual ~Base79b7e0(); char padding[72]; };
struct Level79b7e0_1 : Base79b7e0 { Member<127630850> member_50; virtual void Key1(); DT_INLINE ~Level79b7e0_1() {} };
namespace SPTG { 
struct StatisticsNotifier : Level79b7e0_1 { char padding_51[15]; ListenerOut<127630849> member_60; virtual void Key(); DT_INLINE ~StatisticsNotifier(); };
StatisticsNotifier::~StatisticsNotifier() {  }
}
struct Base7a43f0 { virtual ~Base7a43f0(); char padding[88]; };
namespace SPTG { 
struct SPTGSavegame : Base7a43f0 { ListenerOut<128204548> member_60; ListenerOut<128204547> member_78; ListenerOut<128204546> member_90; ListenerOut<128204545> member_a8; virtual void Key(); ~SPTGSavegame(); };
SPTGSavegame::~SPTGSavegame() {  }
}
struct Element128257285 { char data[8]; ~Element128257285() noexcept; };
struct Array128257285 { uint64_t w0; uint64_t w8; Element128257285* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element128257285(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element128257285(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base7a50d0 { virtual ~Base7a50d0(); char padding[72]; };
struct Level7a50d0_1 : Base7a50d0 { Member<128257290> member_50; virtual void Key1(); DT_INLINE ~Level7a50d0_1() {} };

struct Class7a50d0 : Level7a50d0_1 { char padding_51[63]; AutoInline<PlainStrongHandle<128257289, true>> member_90; AutoInline<PlainStrongHandle<128257288, true>> member_98; AutoInline<PlainStrongHandle<128257287, true>> member_a0; AutoInline<PlainStrongHandle<128257286, true>> member_a8; char padding_b0[8]; AutoInline<Array128257285> member_b8; char padding_d0[8]; AutoInline<PlainStrongHandle<128257284, true>> member_d8; AutoInline<PlainStrongHandle<128257283, true>> member_e0; AutoInline<PlainStrongHandle<128257282, true>> member_e8; AutoInline<PlainStrongHandle<128257281, true>> member_f0; virtual void Key(); ~Class7a50d0(); };
Class7a50d0::~Class7a50d0() {  }

struct Element129623553 { char data[8]; ~Element129623553() noexcept; };
struct Array129623553 { uint64_t w0; uint64_t w8; Element129623553* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element129623553(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element129623553(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Element129623554 { char data[8]; ~Element129623554() noexcept; };
struct Array129623554 { uint64_t w0; uint64_t w8; Element129623554* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element129623554(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element129623554(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base7b9e60 { virtual ~Base7b9e60(); char padding[72]; };

struct Class7b9e60 : Base7b9e60 { AutoInline<PlainStrongHandle<129623555, true>> member_50; char padding_58[8]; AutoInline<Array129623554> member_60; char padding_78[16]; AutoInline<Array129623553> member_88; virtual void Key(); ~Class7b9e60(); };
Class7b9e60::~Class7b9e60() {  }

struct Element130002689 { char data[72]; ~Element130002689() noexcept; };
struct Array130002689 { uint64_t w0; uint64_t w8; Element130002689* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element130002689(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element130002689(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base7bfaf0 { virtual ~Base7bfaf0(); char padding[80]; };
namespace SPTG { 
struct SessionSelection : Base7bfaf0 { ListenerOut<129787904> member_58; ListenerOut<129730560> member_70; ListenerOut<129773568> member_88; ListenerOut<129759232> member_a0; ListenerOut<129744896> member_b8; ListenerOut<129730560> member_d0; ListenerOut<129716224> member_e8; char padding_100[24]; AutoInline<Array130002689> member_118; virtual void Key(); ~SessionSelection(); };
SessionSelection::~SessionSelection() {  }
}
struct Base7c29e0 { virtual ~Base7c29e0(); char padding[88]; };
namespace SPTG { 
struct GameSession : Base7c29e0 { ListenerOut<130194949> member_60; ListenerOut<130194948> member_78; ListenerOut<130194947> member_90; ListenerOut<130194946> member_a8; ListenerOut<130194945> member_c0; virtual void Key(); ~GameSession(); };
GameSession::~GameSession() {  }
}
struct Base7ce3a0 { virtual ~Base7ce3a0(); char padding[72]; };
namespace SPTG { 
struct NetworkingInitializer : Base7ce3a0 { ListenerOut<130955781> member_50; ListenerOut<130955780> member_68; ListenerOut<130955779> member_80; ListenerOut<130955778> member_98; ListenerOut<130955777> member_b0; virtual void Key(); ~NetworkingInitializer(); };
NetworkingInitializer::~NetworkingInitializer() {  }
}
struct Base7f7480 { virtual ~Base7f7480(); char padding[96]; };
struct Level7f7480_1 : Base7f7480 { Member<133646346> member_68; virtual void Key1(); DT_INLINE ~Level7f7480_1() {} };
namespace SPTG { 
struct Leaderboard : Level7f7480_1 { char padding_69[31]; ListenerOut<133646345> member_88; ListenerOut<133646344> member_a0; ListenerOut<133646343> member_b8; ListenerOut<133646342> member_d0; ListenerOut<133646341> member_e8; ListenerOut<133646340> member_100; char padding_118[8]; AutoInline<PlainSharedPointer<133646339, 1176, true, 0>> member_120; Member<133646338> member_130; char padding_131[63]; AutoInline<PlainPointerMember<133646337>> member_170; virtual void Key(); ~Leaderboard(); };
Leaderboard::~Leaderboard() {  }
}
struct Base824440 { virtual ~Base824440(); char padding[688]; };
namespace SPTG { 
struct PublisherScreen : Base824440 { ListenerInline<136594434> member_2b8; ListenerInline<136594433> member_2d0; virtual void Key(); ~PublisherScreen(); };
PublisherScreen::~PublisherScreen() {  }
}
struct Buffer137992194 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer137992195 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer137992196 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer137992197 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer137992198 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer137992199 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer137992200 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer137992201 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer137992202 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer137992203 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer137992204 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer137992205 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer137992206 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer137992207 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer137992208 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer137992209 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer137992210 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer137992211 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Base839980 { virtual ~Base839980(); char padding[752]; };
namespace SPTG { 
struct MainMenu_XBOX_Trail : Base839980 { ListenerOut<124275200> member_2f8; ListenerOut<124260864> member_310; ListenerOut<124275200> member_328; char padding_340[32]; AutoInline<PlainSharedBuffer<137992213>> member_360; char padding_368[8]; AutoInline<PlainSharedBuffer<137992212>> member_370; char padding_378[8]; Auto<Buffer137992211> member_380; char padding_398[16]; Auto<Buffer137992210> member_3a8; char padding_3c0[16]; Auto<Buffer137992209> member_3d0; char padding_3e8[16]; Auto<Buffer137992208> member_3f8; char padding_410[16]; Auto<Buffer137992207> member_420; char padding_438[16]; Auto<Buffer137992206> member_448; char padding_460[16]; Auto<Buffer137992205> member_470; char padding_488[16]; Auto<Buffer137992204> member_498; char padding_4b0[16]; Auto<Buffer137992203> member_4c0; char padding_4d8[16]; Auto<Buffer137992202> member_4e8; char padding_500[16]; Auto<Buffer137992201> member_510; char padding_528[16]; Auto<Buffer137992200> member_538; char padding_550[16]; Auto<Buffer137992199> member_560; char padding_578[16]; Auto<Buffer137992198> member_588; char padding_5a0[16]; Auto<Buffer137992197> member_5b0; char padding_5c8[16]; Auto<Buffer137992196> member_5d8; char padding_5f0[16]; Auto<Buffer137992195> member_600; char padding_618[16]; Auto<Buffer137992194> member_628; char padding_640[8]; Auto<PlainFunction<137992193>> member_648; virtual void Key(); ~MainMenu_XBOX_Trail(); };
MainMenu_XBOX_Trail::~MainMenu_XBOX_Trail() {  }
}
struct Base84b8e0 { virtual ~Base84b8e0(); char padding[680]; };

struct Class84b8e0 : Base84b8e0 { Member<139169284> member_2b0; char padding_2b1[15]; AutoInline<PlainStrongHandle<139169283, true>> member_2c0; AutoInline<PlainStrongHandle<139169282, true>> member_2c8; AutoInline<PlainStrongHandle<139169281, true>> member_2d0; virtual void Key(); ~Class84b8e0(); };
Class84b8e0::~Class84b8e0() {  }

struct Base8516d0 { virtual ~Base8516d0(); char padding[680]; };
namespace SPTG { 
struct KissMovie : Base8516d0 { Member<139554054> member_2b0; char padding_2b1[15]; AutoInline<PlainStrongHandle<139554053, true>> member_2c0; AutoInline<PlainStrongHandle<139554052, true>> member_2c8; AutoInline<PlainStrongHandle<139554051, true>> member_2d0; AutoInline<PlainStrongHandle<139554050, true>> member_2d8; AutoInline<PlainStrongHandle<139554049, true>> member_2e0; virtual void Key(); ~KissMovie(); };
KissMovie::~KissMovie() {  }
}
struct Base861480 { virtual ~Base861480(); char padding[72]; };
struct Level861480_2 : Base861480 { Member<140593155> member_50; virtual void Key2(); DT_INLINE ~Level861480_2() {} };
struct Level861480_1 : Level861480_2 { char padding_51[31]; AutoInline<PlainOwnedList<140593154>> member_70; virtual void Key1(); DT_INLINE ~Level861480_1() {} };
namespace SPTG { 
struct FlashMenuSpawner : Level861480_1 { char padding_88[16]; AutoInline<PlainStrongHandle<140593153, true>> member_98; virtual void Key(); ~FlashMenuSpawner(); };
FlashMenuSpawner::~FlashMenuSpawner() {  }
}
struct Base861bf0 { virtual ~Base861bf0(); char padding[72]; };
struct Level861bf0_1 : Base861bf0 { Member<140623618> member_50; virtual void Key1(); DT_INLINE ~Level861bf0_1() {} };

struct Class861bf0 : Level861bf0_1 { char padding_51[31]; AutoInline<PlainOwnedList<140623617>> member_70; virtual void Key(); ~Class861bf0(); };
Class861bf0::~Class861bf0() {  }

struct Base86e050 { virtual ~Base86e050(); char padding[688]; };
namespace SPTG { 
struct DialogBox : Base86e050 { ListenerInline<141427970> member_2b8; ListenerInline<141427969> member_2d0; virtual void Key(); ~DialogBox(); };
DialogBox::~DialogBox() {  }
}
struct Base8746d0 { virtual ~Base8746d0(); char padding[688]; };
namespace SPTG { 
struct ConfirmBox : Base8746d0 { ListenerOut<141847811> member_2b8; ListenerOut<141847810> member_2d0; char padding_2e8[48]; AutoInline<PlainSharedBuffer<141847809>> member_318; virtual void Key(); ~ConfirmBox(); };
ConfirmBox::~ConfirmBox() {  }
}
struct Base87f710 { virtual ~Base87f710(); char padding[72]; };
struct Level87f710_1 : Base87f710 { Member<142569731> member_50; virtual void Key1(); DT_INLINE ~Level87f710_1() {} };
namespace SPTG { 
struct SwitchLevelGate : Level87f710_1 { char padding_51[95]; ListenerOut<142569730> member_b0; ListenerOut<142569729> member_c8; virtual void Key(); ~SwitchLevelGate(); };
SwitchLevelGate::~SwitchLevelGate() {  }
}
struct Base883620 { virtual ~Base883620(); char padding[80]; };
struct Level883620_1 : Base883620 { Member<142828035> member_58; virtual void Key1(); DT_INLINE ~Level883620_1() {} };
namespace SPTG { 
struct LevelSecretManager : Level883620_1 { char padding_59[15]; ListenerOut<142828034> member_68; Member<142828033> member_80; virtual void Key(); DT_INLINE ~LevelSecretManager(); };
LevelSecretManager::~LevelSecretManager() {  }
}
struct Base886700 { virtual ~Base886700(); char padding[160]; };
namespace SPTG { 
struct CameraTrigger : Base886700 { ListenerInline<143028226> member_a8; ListenerInline<143028225> member_c0; virtual void Key(); ~CameraTrigger(); };
CameraTrigger::~CameraTrigger() {  }
}
struct Element143129090 { char data[8]; ~Element143129090() noexcept; };
struct Array143129090 { uint64_t w0; uint64_t w8; Element143129090* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element143129090(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element143129090(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Element143129091 { char data[8]; ~Element143129091() noexcept; };
struct Array143129091 { uint64_t w0; uint64_t w8; Element143129091* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element143129091(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element143129091(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base887fa0 { virtual ~Base887fa0(); char padding[80]; };

struct Class887fa0 : Base887fa0 { AutoInline<Array143129091> member_58; char padding_70[16]; AutoInline<Array143129090> member_80; char padding_98[8]; AutoInline<PlainStrongHandle<143129089, true>> member_a0; virtual void Key(); ~Class887fa0(); };
Class887fa0::~Class887fa0() {  }

struct Base88e7e0 { virtual ~Base88e7e0(); char padding[72]; };
struct Level88e7e0_1 : Base88e7e0 { Member<143556098> member_50; virtual void Key1(); DT_INLINE ~Level88e7e0_1() {} };
namespace SPTG { 
struct CheckPoint : Level88e7e0_1 { char padding_51[15]; ListenerOut<143556097> member_60; virtual void Key(); DT_INLINE ~CheckPoint(); };
CheckPoint::~CheckPoint() {  }
}
struct Element143758600 { char data[8]; ~Element143758600() noexcept; };
struct Array143758600 { uint64_t w0; uint64_t w8; Element143758600* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element143758600(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element143758600(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Element143758601 { char data[8]; ~Element143758601() noexcept; };
struct Array143758601 { uint64_t w0; uint64_t w8; Element143758601* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element143758601(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element143758601(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base891950 { virtual ~Base891950(); char padding[80]; };

struct Class891950 : Base891950 { AutoInline<Array143758601> member_58; char padding_70[16]; AutoInline<Array143758600> member_80; char padding_98[8]; AutoInline<PlainStrongHandle<143758599, true>> member_a0; AutoInline<PlainStrongHandle<143758598, true>> member_a8; AutoInline<PlainStrongHandle<143758597, true>> member_b0; AutoInline<PlainStrongHandle<143758596, true>> member_b8; AutoInline<PlainStrongHandle<143758595, true>> member_c0; AutoInline<PlainStrongHandle<143758594, true>> member_c8; AutoInline<PlainStrongHandle<143758593, true>> member_d0; virtual void Key(); ~Class891950(); };
Class891950::~Class891950() {  }

struct Base8991f0 { virtual ~Base8991f0(); char padding[72]; };
struct Level8991f0_2 : Base8991f0 { Member<144252675> member_50; virtual void Key2(); DT_INLINE ~Level8991f0_2() {} };
struct Level8991f0_1 : Level8991f0_2 { char padding_51[31]; AutoInline<PlainOwnedList<144252674>> member_70; virtual void Key1(); DT_INLINE ~Level8991f0_1() {} };
namespace SPTG { 
struct HudObjectSpawner : Level8991f0_1 { char padding_88[16]; AutoInline<PlainStrongHandle<144252673, true>> member_98; virtual void Key(); ~HudObjectSpawner(); };
HudObjectSpawner::~HudObjectSpawner() {  }
}
struct Base8995b0 { virtual ~Base8995b0(); char padding[72]; };
struct Level8995b0_1 : Base8995b0 { Member<144268034> member_50; virtual void Key1(); DT_INLINE ~Level8995b0_1() {} };

struct Class8995b0 : Level8995b0_1 { char padding_51[31]; AutoInline<PlainOwnedList<144268033>> member_70; virtual void Key(); ~Class8995b0(); };
Class8995b0::~Class8995b0() {  }

struct Buffer144329729 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Base89a4c0 { virtual ~Base89a4c0(); char padding[80]; };
struct Level89a4c0_1 : Base89a4c0 { Member<144329732> member_58; virtual void Key1(); DT_INLINE ~Level89a4c0_1() {} };
namespace SPTG { 
struct NewMoveAnimationLoader : Level89a4c0_1 { char padding_59[15]; ListenerOut<144329731> member_68; ListenerOut<144329730> member_80; char padding_98[24]; Auto<Buffer144329729> member_b0; virtual void Key(); ~NewMoveAnimationLoader(); };
NewMoveAnimationLoader::~NewMoveAnimationLoader() {  }
}
struct Element145541635 { char data[8]; ~Element145541635() noexcept; };
struct Array145541635 { uint64_t w0; uint64_t w8; Element145541635* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element145541635(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element145541635(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Element145541636 { char data[8]; ~Element145541636() noexcept; };
struct Array145541636 { uint64_t w0; uint64_t w8; Element145541636* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element145541636(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element145541636(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base8acca0 { virtual ~Base8acca0(); char padding[72]; };

struct Class8acca0 : Base8acca0 { AutoInline<PlainStrongHandle<145541637, true>> member_50; char padding_58[8]; AutoInline<Array145541636> member_60; char padding_78[16]; AutoInline<Array145541635> member_88; char padding_a0[8]; AutoInline<PlainStrongHandle<145541634, true>> member_a8; AutoInline<PlainStrongHandle<145541633, true>> member_b0; virtual void Key(); ~Class8acca0(); };
Class8acca0::~Class8acca0() {  }

struct Element145587202 { char data[8]; ~Element145587202() noexcept; };
struct Array145587202 { uint64_t w0; uint64_t w8; Element145587202* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element145587202(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element145587202(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Element145587203 { char data[8]; ~Element145587203() noexcept; };
struct Array145587203 { uint64_t w0; uint64_t w8; Element145587203* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element145587203(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element145587203(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base8ad7c0 { virtual ~Base8ad7c0(); char padding[72]; };

struct Class8ad7c0 : Base8ad7c0 { AutoInline<PlainStrongHandle<145587205, true>> member_50; AutoInline<PlainStrongHandle<145587204, true>> member_58; char padding_60[8]; AutoInline<Array145587203> member_68; char padding_80[16]; AutoInline<Array145587202> member_90; char padding_a8[8]; AutoInline<PlainStrongHandle<145587201, true>> member_b0; virtual void Key(); ~Class8ad7c0(); };
Class8ad7c0::~Class8ad7c0() {  }

struct Buffer145734916 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Base8afbd0 { virtual ~Base8afbd0(); char padding[104]; };
struct Level8afbd0_1 : Base8afbd0 { Auto<Buffer145734916> member_70; virtual void Key1(); DT_INLINE ~Level8afbd0_1() {} };
namespace SPTG { 
struct GUIObjectDirector : Level8afbd0_1 { char padding_98[8]; ListenerOut<145734915> member_a0; ListenerOut<145734914> member_b8; char padding_d0[8]; AutoInline<PlainStrongHandle<145734913, true>> member_d8; virtual void Key(); ~GUIObjectDirector(); };
GUIObjectDirector::~GUIObjectDirector() {  }
}
struct Base8b6650 { virtual ~Base8b6650(); char padding[72]; };
struct Level8b6650_1 : Base8b6650 { Member<146171149> member_50; virtual void Key1(); DT_INLINE ~Level8b6650_1() {} };
namespace SPTG { 
struct GUIObject : Level8b6650_1 { char padding_51[127]; ListenerOut<146171148> member_d0; ListenerOut<146171147> member_e8; ListenerOut<146171146> member_100; ListenerOut<146171145> member_118; ListenerOut<146171144> member_130; ListenerOut<146171143> member_148; ListenerOut<146171142> member_160; ListenerOut<146171141> member_178; ListenerOut<146171140> member_190; ListenerOut<146171139> member_1a8; ListenerOut<146171138> member_1c0; AutoInline<PlainStrongHandle<146171137, true>> member_1d8; virtual void Key(); ~GUIObject(); };
GUIObject::~GUIObject() {  }
}
struct Element146444801 { char data[16]; ~Element146444801() noexcept; };
struct Array146444801 { uint64_t w0; uint64_t w8; Element146444801* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element146444801(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element146444801(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base8ba920 { virtual ~Base8ba920(); char padding[72]; };
struct Level8ba920_1 : Base8ba920 { Member<146444803> member_50; virtual void Key1(); DT_INLINE ~Level8ba920_1() {} };
namespace SPTG { 
struct GraphicsObject : Level8ba920_1 { char padding_51[63]; AutoInline<PlainStrongHandle<146444802, true>> member_90; char padding_98[8]; AutoInline<Array146444801> member_a0; virtual void Key(); ~GraphicsObject(); };
GraphicsObject::~GraphicsObject() {  }
}
struct Base8baf10 { virtual ~Base8baf10(); char padding[280]; };
struct Level8baf10_1 : Base8baf10 { Member<146469122> member_120; virtual void Key1(); DT_INLINE ~Level8baf10_1() {} };
namespace SPTG { 
struct StaticAnimatedObject : Level8baf10_1 { char padding_121[31]; AutoInline<PlainStrongHandle<146469121, true>> member_140; virtual void Key(); ~StaticAnimatedObject(); };
StaticAnimatedObject::~StaticAnimatedObject() {  }
}
struct Buffer9398616193 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Nested146853378 { virtual void Key(); char padding_8[64]; Auto<Buffer9398616193> member_48; DT_INLINE ~Nested146853378() {} };
struct Base8c0ce0 { virtual ~Base8c0ce0(); char padding[416]; };
namespace SPTG { 
struct LevelSectionGraphics : Base8c0ce0 { Member<146853379> member_1a8; char padding_1a9[63]; Nested146853378 member_1e8; char padding_248[8]; AutoInline<PlainStrongHandle<146853377, true>> member_250; virtual void Key(); ~LevelSectionGraphics(); };
LevelSectionGraphics::~LevelSectionGraphics() {  }
}
struct Base8cbaa0 { virtual ~Base8cbaa0(); char padding[288]; };
namespace SPTG { 
struct BitmapFontTextComponent : Base8cbaa0 { ListenerOut<147565058> member_128; char padding_140[8]; AutoInline<PlainSharedBuffer<147565057>> member_148; virtual void Key(); ~BitmapFontTextComponent(); };
BitmapFontTextComponent::~BitmapFontTextComponent() {  }
}
struct Base8e28f0 { virtual ~Base8e28f0(); char padding[168]; };
struct Level8e28f0_1 : Base8e28f0 { Member<149065475> member_b0; virtual void Key1(); DT_INLINE ~Level8e28f0_1() {} };
namespace SPTG { 
struct ActorTrapAction : Level8e28f0_1 { char padding_b1[15]; ListenerInline<149065474> member_c0; char padding_d8[120]; AutoInline<PlainStrongHandle<149065473, true>> member_150; virtual void Key(); ~ActorTrapAction(); };
ActorTrapAction::~ActorTrapAction() {  }
}
struct Element149911041 { char data[16]; ~Element149911041() noexcept; };
struct Array149911041 { uint64_t w0; uint64_t w8; Element149911041* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element149911041(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element149911041(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base8ef760 { virtual ~Base8ef760(); char padding[72]; };
struct Level8ef760_1 : Base8ef760 { Member<149911045> member_50; virtual void Key1(); DT_INLINE ~Level8ef760_1() {} };
namespace SPTG { 
struct ActionTrigger : Level8ef760_1 { char padding_51[87]; ListenerOut<149911044> member_a8; ListenerOut<149911043> member_c0; ListenerOut<149911042> member_d8; char padding_f0[8]; AutoInline<Array149911041> member_f8; virtual void Key(); ~ActionTrigger(); };
ActionTrigger::~ActionTrigger() {  }
}
struct Element150282753 { char data[8]; ~Element150282753() noexcept; };
struct Array150282753 { uint64_t w0; uint64_t w8; Element150282753* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element150282753(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element150282753(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Element150282754 { char data[8]; ~Element150282754() noexcept; };
struct Array150282754 { uint64_t w0; uint64_t w8; Element150282754* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element150282754(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element150282754(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base8f5220 { virtual ~Base8f5220(); char padding[72]; };

struct Class8f5220 : Base8f5220 { AutoInline<PlainStrongHandle<150282757, true>> member_50; AutoInline<PlainStrongHandle<150282756, true>> member_58; AutoInline<PlainStrongHandle<150282755, true>> member_60; char padding_68[8]; AutoInline<Array150282754> member_70; char padding_88[16]; AutoInline<Array150282753> member_98; virtual void Key(); ~Class8f5220(); };
Class8f5220::~Class8f5220() {  }

struct Element150617091 { char data[8]; ~Element150617091() noexcept; };
struct Array150617091 { uint64_t w0; uint64_t w8; Element150617091* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element150617091(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element150617091(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base8fa3c0 { virtual ~Base8fa3c0(); char padding[160]; };

struct Class8fa3c0 : Base8fa3c0 { AutoInline<Array150617091> member_a8; char padding_c0[8]; AutoInline<PlainStrongHandle<150617090, true>> member_c8; AutoInline<PlainStrongHandle<150617089, true>> member_d0; virtual void Key(); ~Class8fa3c0(); };
Class8fa3c0::~Class8fa3c0() {  }

struct Element151166465 { virtual ~Element151166465() noexcept; char data[40]; };
struct Array151166465 { uint64_t w0; uint64_t w8; Element151166465* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element151166465(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element151166465(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
namespace SPTG { 
struct EnemySpawnInfo { char padding_8[48]; AutoInline<Array151166465> member_38; virtual void Key(); virtual ~EnemySpawnInfo() __attribute__((used)); };
inline EnemySpawnInfo::~EnemySpawnInfo() {  }
}
struct Buffer151272705 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Element151272706 { virtual ~Element151272706() noexcept; char data[32]; };
struct Array151272706 { uint64_t w0; uint64_t w8; Element151272706* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element151272706(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element151272706(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base9043d0 { virtual ~Base9043d0(); char padding[160]; };
namespace SPTG { 
struct SpawnControllableAction : Base9043d0 { ListenerInline<151272707> member_a8; char padding_c0[8]; AutoInline<Array151272706> member_c8; char padding_e0[24]; Auto<Buffer151272705> member_f8; virtual void Key(); ~SpawnControllableAction(); };
SpawnControllableAction::~SpawnControllableAction() {  }
}
struct Base908b80 { virtual ~Base908b80(); char padding[160]; };
namespace SPTG { 
struct CheckLevelUnlokcedAction : Base908b80 { ListenerInline<151566338> member_a8; ListenerInline<151566337> member_c0; virtual void Key(); ~CheckLevelUnlokcedAction(); };
CheckLevelUnlokcedAction::~CheckLevelUnlokcedAction() {  }
}
struct Element151819265 { char data[8]; ~Element151819265() noexcept; };
struct Array151819265 { uint64_t w0; uint64_t w8; Element151819265* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element151819265(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element151819265(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Element151819266 { virtual ~Element151819266() noexcept; char data[40]; };
struct Array151819266 { uint64_t w0; uint64_t w8; Element151819266* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element151819266(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element151819266(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base90c940 { virtual ~Base90c940(); char padding[152]; };
struct Level90c940_1 : Base90c940 { Member<151819267> member_a0; virtual void Key1(); DT_INLINE ~Level90c940_1() {} };
namespace SPTG { 
struct SpawnInteractiveObjectActionEx : Level90c940_1 { char padding_a1[23]; AutoInline<Array151819266> member_b8; char padding_d0[32]; AutoInline<Array151819265> member_f0; virtual void Key(); ~SpawnInteractiveObjectActionEx(); };
SpawnInteractiveObjectActionEx::~SpawnInteractiveObjectActionEx() {  }
}
struct Base90d720 { virtual ~Base90d720(); char padding[152]; };
struct Level90d720_1 : Base90d720 { Member<151876098> member_a0; virtual void Key1(); DT_INLINE ~Level90d720_1() {} };
namespace SPTG { 
struct SpawnInteractiveObjectAction : Level90d720_1 { char padding_a1[39]; AutoInline<PlainStrongHandle<151876097, true>> member_c8; virtual void Key(); ~SpawnInteractiveObjectAction(); };
SpawnInteractiveObjectAction::~SpawnInteractiveObjectAction() {  }
}
struct Base9156d0 { virtual ~Base9156d0(); char padding[240]; };
namespace SPTG { 
struct ExtraModeScoringAction : Base9156d0 { ListenerOut<152399107> member_f8; ListenerOut<152399106> member_110; ListenerOut<152399105> member_128; virtual void Key(); ~ExtraModeScoringAction(); };
ExtraModeScoringAction::~ExtraModeScoringAction() {  }
}
struct Buffer153175297 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Base921450 { virtual ~Base921450(); char padding[152]; };
struct Level921450_1 : Base921450 { Member<153175299> member_a0; virtual void Key1(); DT_INLINE ~Level921450_1() {} };
namespace SPTG { 
struct ChaseModeAction : Level921450_1 { char padding_a1[15]; ListenerInline<153175298> member_b0; char padding_c8[32]; Auto<Buffer153175297> member_e8; virtual void Key(); ~ChaseModeAction(); };
ChaseModeAction::~ChaseModeAction() {  }
}
struct Element153307650 { char data[8]; ~Element153307650() noexcept; };
struct Array153307650 { uint64_t w0; uint64_t w8; Element153307650* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element153307650(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element153307650(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base9234a0 { virtual ~Base9234a0(); char padding[152]; };

struct Class9234a0 : Base9234a0 { AutoInline<PlainStrongHandle<153307651, true>> member_a0; char padding_a8[8]; AutoInline<Array153307650> member_b0; char padding_c8[8]; AutoInline<PlainStrongHandle<153307649, true>> member_d0; virtual void Key(); ~Class9234a0(); };
Class9234a0::~Class9234a0() {  }

struct Element153583875 { char data[8]; ~Element153583875() noexcept; };
struct Array153583875 { uint64_t w0; uint64_t w8; Element153583875* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element153583875(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element153583875(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base927810 { virtual ~Base927810(); char padding[160]; };

struct Class927810 : Base927810 { AutoInline<Array153583875> member_a8; char padding_c0[8]; AutoInline<PlainStrongHandle<153583874, true>> member_c8; AutoInline<PlainStrongHandle<153583873, true>> member_d0; virtual void Key(); ~Class927810(); };
Class927810::~Class927810() {  }

struct Element153937409 { char data[40]; ~Element153937409() noexcept; };
struct Array153937409 { uint64_t w0; uint64_t w8; Element153937409* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element153937409(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element153937409(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base92ce60 { virtual ~Base92ce60(); char padding[96]; };
namespace SPTG { 
struct SimpleMergeStrategy : Base92ce60 { AutoInline<PlainPointerMember<153937410>> member_68; char padding_70[40]; AutoInline<Array153937409> member_98; virtual void Key(); ~SimpleMergeStrategy(); };
SimpleMergeStrategy::~SimpleMergeStrategy() {  }
}
struct Base932130 { virtual ~Base932130(); char padding[88]; };
struct Level932130_1 : Base932130 { AutoInline<PlainPointerMember<154276610>> member_60; virtual void Key1(); DT_INLINE ~Level932130_1() {} };
namespace SPTG { 
struct SoundMaterialSwitch : Level932130_1 { char padding_68[32]; AutoInline<PlainStrongHandle<154276609, true>> member_88; virtual void Key(); ~SoundMaterialSwitch(); };
SoundMaterialSwitch::~SoundMaterialSwitch() {  }
}
struct Base934050 { virtual ~Base934050(); char padding[80]; };
namespace SPTG { 
struct GamePauseMonitor : Base934050 { ListenerInline<154404098> member_58; ListenerInline<154404097> member_70; virtual void Key(); ~GamePauseMonitor(); };
GamePauseMonitor::~GamePauseMonitor() {  }
}
struct Base937160 { virtual ~Base937160(); char padding[72]; };
struct Level937160_1 : Base937160 { Member<154605058> member_50; virtual void Key1(); DT_INLINE ~Level937160_1() {} };
namespace SPTG { 
struct AudioEventComponent : Level937160_1 { char padding_51[15]; ListenerOut<154605057> member_60; virtual void Key(); DT_INLINE ~AudioEventComponent(); };
AudioEventComponent::~AudioEventComponent() {  }
}
struct Base964e90 { virtual ~Base964e90(); char padding[480]; };
struct Level964e90_1 : Base964e90 { Member<157608211> member_1e8; virtual void Key1(); DT_INLINE ~Level964e90_1() {} };
namespace SPTG { 
struct BaseCharacter : Level964e90_1 { char padding_1e9[79]; AutoInline<PlainStrongHandle<157608210, true>> member_238; AutoInline<PlainStrongHandle<157608209, true>> member_240; char padding_248[96]; AutoInline<PlainStrongHandle<157608208, true>> member_2a8; char padding_2b0[224]; AutoInline<PlainStrongHandle<157608207, true>> member_390; char padding_398[40]; ListenerOut<157608206> member_3c0; ListenerOut<157608205> member_3d8; ListenerOut<157608204> member_3f0; ListenerOut<157608203> member_408; ListenerOut<157608202> member_420; ListenerOut<157608201> member_438; ListenerOut<157608200> member_450; ListenerOut<157608199> member_468; AutoInline<PlainStrongHandle<157608198, true>> member_480; AutoInline<PlainStrongHandle<157608197, true>> member_488; char padding_490[80]; AutoInline<PlainStrongHandle<157608196, true>> member_4e0; char padding_4e8[152]; AutoInline<PlainStrongHandle<157608195, true>> member_580; char padding_588[80]; AutoInline<PlainStrongHandle<157608194, true>> member_5d8; char padding_5e0[368]; ListenerInline<157608193> member_750; virtual void Key(); ~BaseCharacter(); };
BaseCharacter::~BaseCharacter() {  }
}
struct Buffer161450241 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Buffer161450242 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Element10332815554 { virtual ~Element10332815554() noexcept; char data[40]; };
struct Array10332815554 { uint64_t w0; uint64_t w8; Element10332815554* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element10332815554(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element10332815554(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Nested161450243 { virtual void Key(); char padding_8[48]; AutoInline<Array10332815554> member_38; DT_INLINE ~Nested161450243() {} };
struct Base99f890 { virtual ~Base99f890(); char padding[112]; };
namespace SPTG { 
struct PileOnMgr : Base99f890 { Nested161450243 member_78; char padding_c8[32]; Auto<Buffer161450242> member_e8; char padding_100[56]; Auto<Buffer161450241> member_138; virtual void Key(); ~PileOnMgr(); };
PileOnMgr::~PileOnMgr() {  }
}
struct Buffer163039745 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };
struct Buffer163039746 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };
struct Base9b7ca0 { virtual ~Base9b7ca0(); char padding[1920]; };
namespace SPTG { 
struct NPC : Base9b7ca0 { ListenerOut<163039747> member_788; char padding_7a0[32]; Auto<Buffer163039746> member_7c0; char padding_7d0[16]; Auto<Buffer163039745> member_7e0; virtual void Key(); ~NPC(); };
NPC::~NPC() {  }
}
struct Base9bc2f0 { virtual ~Base9bc2f0(); char padding[488]; };
namespace SPTG { 
struct LaserBeams : Base9bc2f0 { ListenerOut<163327748> member_1f0; ListenerOut<163327747> member_208; ListenerOut<163327746> member_220; char padding_238[96]; AutoInline<PlainStrongHandle<163327745, true>> member_298; virtual void Key(); ~LaserBeams(); };
LaserBeams::~LaserBeams() {  }
}
struct Base9bfb50 { virtual ~Base9bfb50(); char padding[488]; };
namespace SPTG { 
struct InteractiveObjectEx : Base9bfb50 { ListenerOut<163558664> member_1f0; ListenerOut<163558663> member_208; ListenerOut<163558662> member_220; ListenerOut<163558661> member_238; char padding_250[128]; AutoInline<PlainStrongHandle<163558660, true>> member_2d0; char padding_2d8[80]; AutoInline<PlainStrongHandle<163558659, true>> member_328; char padding_330[80]; AutoInline<PlainStrongHandle<163558658, true>> member_380; char padding_388[80]; AutoInline<PlainStrongHandle<163558657, true>> member_3d8; virtual void Key(); ~InteractiveObjectEx(); };
InteractiveObjectEx::~InteractiveObjectEx() {  }
}
struct Element164363265 { char data[8]; ~Element164363265() noexcept; };
struct Array164363265 { uint64_t w0; uint64_t w8; Element164363265* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element164363265(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element164363265(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base9cbfc0 { virtual ~Base9cbfc0(); char padding[2960]; };
namespace SPTG { 
struct EnemyStuntman : Base9cbfc0 { AutoInline<Array164363265> member_b98; virtual void Key(); ~EnemyStuntman() __attribute__((used)); };
inline EnemyStuntman::~EnemyStuntman() {  }
}
struct Buffer165748993 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Element165748998 { char data[24]; ~Element165748998() noexcept; };
struct Array165748998 { uint64_t w0; uint64_t w8; Element165748998* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element165748998(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element165748998(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Element165748999 { char data[120]; ~Element165748999() noexcept; };
struct Array165748999 { uint64_t w0; uint64_t w8; Element165748999* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element165748999(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element165748999(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base9e1210 { virtual ~Base9e1210(); char padding[1920]; };
struct Level9e1210_1 : Base9e1210 { Member<165749000> member_788; virtual void Key1(); DT_INLINE ~Level9e1210_1() {} };
namespace SPTG { 
struct Enemy : Level9e1210_1 { char padding_789[103]; AutoInline<Array165748999> member_7f0; char padding_808[56]; AutoInline<Array165748998> member_840; char padding_858[8]; AutoInline<PlainStrongHandle<165748997, true>> member_860; AutoInline<PlainStrongHandle<165748996, true>> member_868; char padding_870[120]; AutoInline<PlainStrongHandle<165748995, true>> member_8e8; char padding_8f0[360]; Member<165748994> member_a58; char padding_a59[159]; Auto<Buffer165748993> member_af8; virtual void Key(); ~Enemy(); };
Enemy::~Enemy() {  }
}
struct Element165931777 { char data[8]; ~Element165931777() noexcept; };
struct Array165931777 { uint64_t w0; uint64_t w8; Element165931777* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element165931777(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element165931777(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base9e3eb0 { virtual ~Base9e3eb0(); char padding[2960]; };
namespace SPTG { 
struct EnemyOneHitWonder : Base9e3eb0 { AutoInline<Array165931777> member_b98; virtual void Key(); ~EnemyOneHitWonder() __attribute__((used)); };
inline EnemyOneHitWonder::~EnemyOneHitWonder() {  }
}
struct Element165977857 { char data[8]; ~Element165977857() noexcept; };
struct Array165977857 { uint64_t w0; uint64_t w8; Element165977857* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element165977857(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element165977857(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base9e49f0 { virtual ~Base9e49f0(); char padding[2960]; };
namespace SPTG { 
struct EnemySasuke : Base9e49f0 { AutoInline<Array165977857> member_b98; virtual void Key(); ~EnemySasuke() __attribute__((used)); };
inline EnemySasuke::~EnemySasuke() {  }
}
struct Element166054914 { char data[8]; ~Element166054914() noexcept; };
struct Array166054914 { uint64_t w0; uint64_t w8; Element166054914* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element166054914(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element166054914(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base9e5cc0 { virtual ~Base9e5cc0(); char padding[2960]; };
struct Level9e5cc0_1 : Base9e5cc0 { AutoInline<Array166054914> member_b98; virtual void Key1(); DT_INLINE ~Level9e5cc0_1() {} };
namespace SPTG { 
struct EnemyGuyOnFire : Level9e5cc0_1 { char padding_bb0[136]; AutoInline<PlainStrongHandle<166054913, true>> member_c38; virtual void Key(); ~EnemyGuyOnFire(); };
EnemyGuyOnFire::~EnemyGuyOnFire() {  }
}
struct Element166085891 { char data[8]; ~Element166085891() noexcept; };
struct Array166085891 { uint64_t w0; uint64_t w8; Element166085891* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element166085891(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element166085891(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base9e6450 { virtual ~Base9e6450(); char padding[2960]; };
struct Level9e6450_1 : Base9e6450 { AutoInline<Array166085891> member_b98; virtual void Key1(); DT_INLINE ~Level9e6450_1() {} };
namespace SPTG { 
struct EnemyChargingCrowd : Level9e6450_1 { char padding_bb0[136]; AutoInline<PlainStrongHandle<166085890, true>> member_c38; char padding_c40[120]; AutoInline<PlainStrongHandle<166085889, true>> member_cb8; virtual void Key(); ~EnemyChargingCrowd(); };
EnemyChargingCrowd::~EnemyChargingCrowd() {  }
}
struct Element166886401 { char data[8]; ~Element166886401() noexcept; };
struct Array166886401 { uint64_t w0; uint64_t w8; Element166886401* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element166886401(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element166886401(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base9f27c0 { virtual ~Base9f27c0(); char padding[4512]; };
namespace SPTG { 
struct EnemyJake : Base9f27c0 { AutoInline<PlainStrongHandle<166886402, true>> member_11a8; char padding_11b0[32]; AutoInline<Array166886401> member_11d0; virtual void Key(); ~EnemyJake(); };
EnemyJake::~EnemyJake() {  }
}
struct Element167623169 { char data[8]; ~Element167623169() noexcept; };
struct Array167623169 { uint64_t w0; uint64_t w8; Element167623169* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element167623169(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element167623169(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Base9fdba0 { virtual ~Base9fdba0(); char padding[2960]; };
namespace SPTG { 
struct EnemyForestElves : Base9fdba0 { AutoInline<Array167623169> member_b98; virtual void Key(); ~EnemyForestElves() __attribute__((used)); };
inline EnemyForestElves::~EnemyForestElves() {  }
}
struct Element167878657 { char data[8]; ~Element167878657() noexcept; };
struct Array167878657 { uint64_t w0; uint64_t w8; Element167878657* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element167878657(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element167878657(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Basea01a00 { virtual ~Basea01a00(); char padding[2952]; };
namespace SPTG { 
struct EnemyAerial : Basea01a00 { ListenerOut<167878661> member_b90; char padding_ba8[128]; AutoInline<PlainStrongHandle<167878660, true>> member_c28; char padding_c30[120]; AutoInline<PlainStrongHandle<167878659, true>> member_ca8; char padding_cb0[128]; AutoInline<PlainStrongHandle<167878658, true>> member_d30; char padding_d38[80]; AutoInline<Array167878657> member_d88; virtual void Key(); ~EnemyAerial(); };
EnemyAerial::~EnemyAerial() {  }
}
struct Buffer168788993 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Basea0f840 { virtual ~Basea0f840(); char padding[504]; };
namespace SPTG { 
struct BreakableObject : Basea0f840 { ListenerOut<168788996> member_200; ListenerOut<168788995> member_218; ListenerOut<168788994> member_230; char padding_248[64]; Auto<Buffer168788993> member_288; virtual void Key(); ~BreakableObject(); };
BreakableObject::~BreakableObject() {  }
}
struct Element169103618 { char data[8]; ~Element169103618() noexcept; };
struct Array169103618 { uint64_t w0; uint64_t w8; Element169103618* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element169103618(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element169103618(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Basea14510 { virtual ~Basea14510(); char padding[104]; };
namespace SPTG { 
struct BaseBossAI : Basea14510 { AutoInline<Array169103618> member_70; char padding_88[56]; ListenerInline<169103617> member_c0; virtual void Key(); ~BaseBossAI(); };
BaseBossAI::~BaseBossAI() {  }
}
struct Nested169805569 { virtual void Key(); char padding_8[88]; Auto<PlainFunction<10867556417>> member_60; DT_INLINE ~Nested169805569() {} };
struct Basea1f070 { virtual ~Basea1f070(); char padding[3392]; };
struct Levela1f070_1 : Basea1f070 { Member<169805578> member_d48; virtual void Key1(); DT_INLINE ~Levela1f070_1() {} };
namespace SPTG { 
struct Todd : Levela1f070_1 { char padding_d49[135]; AutoInline<PlainStrongHandle<169805577, true>> member_dd0; char padding_dd8[104]; AutoInline<PlainStrongHandle<169805576, true>> member_e40; char padding_e48[112]; AutoInline<PlainStrongHandle<169805575, true>> member_eb8; char padding_ec0[112]; AutoInline<PlainStrongHandle<169805574, true>> member_f30; char padding_f38[112]; AutoInline<PlainStrongHandle<169805573, true>> member_fa8; char padding_fb0[112]; AutoInline<PlainStrongHandle<169805572, true>> member_1020; char padding_1028[112]; AutoInline<PlainStrongHandle<169805571, true>> member_1098; char padding_10a0[112]; AutoInline<PlainStrongHandle<169805570, true>> member_1110; char padding_1118[8]; Nested169805569 member_1120; virtual void Key(); ~Todd(); };
Todd::~Todd() {  }
}
struct Basea281e0 { virtual ~Basea281e0(); char padding[3432]; };
namespace SPTG { 
struct SuperFightingRobotHand : Basea281e0 { ListenerOut<170401285> member_d70; char padding_d88[104]; AutoInline<PlainStrongHandle<170401284, true>> member_df0; char padding_df8[112]; AutoInline<PlainStrongHandle<170401283, true>> member_e68; char padding_e70[112]; AutoInline<PlainStrongHandle<170401282, true>> member_ee0; char padding_ee8[120]; AutoInline<PlainStrongHandle<170401281, true>> member_f60; virtual void Key(); ~SuperFightingRobotHand(); };
SuperFightingRobotHand::~SuperFightingRobotHand() {  }
}
struct Basea30740 { virtual ~Basea30740(); char padding[3392]; };
struct Levela30740_1 : Basea30740 { Member<170947588> member_d48; virtual void Key1(); DT_INLINE ~Levela30740_1() {} };
namespace SPTG { 
struct SuperFightingRobotAI : Levela30740_1 { char padding_d49[63]; ListenerOut<170947587> member_d88; ListenerInline<170947586> member_da0; ListenerInline<170947585> member_db8; virtual void Key(); ~SuperFightingRobotAI(); };
SuperFightingRobotAI::~SuperFightingRobotAI() {  }
}
struct Buffer171587586 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Basea3a380 { virtual ~Basea3a380(); char padding[3416]; };
namespace SPTG { 
struct RoxyMirror : Basea3a380 { Auto<Buffer171587586> member_d60; char padding_d78[88]; AutoInline<PlainStrongHandle<171587585, true>> member_dd0; virtual void Key(); ~RoxyMirror(); };
RoxyMirror::~RoxyMirror() {  }
}
struct Buffer171670785 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer171670786 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer171670787 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Basea3b7d0 { virtual ~Basea3b7d0(); char padding[3560]; };
namespace SPTG { 
struct Roxy : Basea3b7d0 { AutoInline<PlainStrongHandle<171670794, true>> member_df0; char padding_df8[112]; AutoInline<PlainStrongHandle<171670793, true>> member_e68; char padding_e70[112]; AutoInline<PlainStrongHandle<171670792, true>> member_ee0; char padding_ee8[112]; AutoInline<PlainStrongHandle<171670791, true>> member_f58; char padding_f60[112]; AutoInline<PlainStrongHandle<171670790, true>> member_fd0; char padding_fd8[112]; AutoInline<PlainStrongHandle<171670789, true>> member_1048; char padding_1050[112]; AutoInline<PlainStrongHandle<171670788, true>> member_10c0; char padding_10c8[16]; Auto<Buffer171670787> member_10d8; char padding_10f0[16]; Auto<Buffer171670786> member_1100; char padding_1118[32]; Auto<Buffer171670785> member_1138; virtual void Key(); ~Roxy(); };
Roxy::~Roxy() {  }
}
struct Nested172112129 { virtual void Key(); char padding_8[88]; Auto<PlainFunction<11015176257>> member_60; DT_INLINE ~Nested172112129() {} };
struct Basea42390 { virtual ~Basea42390(); char padding[3504]; };
namespace SPTG { 
struct HipsterChick : Basea42390 { AutoInline<PlainStrongHandle<172112130, true>> member_db8; char padding_dc0[8]; Nested172112129 member_dc8; virtual void Key(); ~HipsterChick(); };
HipsterChick::~HipsterChick() {  }
}
struct Nested172235265 { virtual void Key(); char padding_8[88]; Auto<PlainFunction<11023056961>> member_60; DT_INLINE ~Nested172235265() {} };
struct Basea441a0 { virtual ~Basea441a0(); char padding[3504]; };
namespace SPTG { 
struct NegaScott : Basea441a0 { AutoInline<PlainStrongHandle<172235274, true>> member_db8; char padding_dc0[112]; AutoInline<PlainStrongHandle<172235273, true>> member_e30; char padding_e38[112]; AutoInline<PlainStrongHandle<172235272, true>> member_ea8; char padding_eb0[112]; AutoInline<PlainStrongHandle<172235271, true>> member_f20; char padding_f28[112]; AutoInline<PlainStrongHandle<172235270, true>> member_f98; char padding_fa0[112]; AutoInline<PlainStrongHandle<172235269, true>> member_1010; char padding_1018[112]; AutoInline<PlainStrongHandle<172235268, true>> member_1088; char padding_1090[112]; AutoInline<PlainStrongHandle<172235267, true>> member_1100; char padding_1108[112]; AutoInline<PlainStrongHandle<172235266, true>> member_1178; char padding_1180[8]; Nested172235265 member_1188; virtual void Key(); ~NegaScott(); };
NegaScott::~NegaScott() {  }
}
struct Basea47080 { virtual ~Basea47080(); char padding[3392]; };
struct Levela47080_1 : Basea47080 { Member<172427270> member_d48; virtual void Key1(); DT_INLINE ~Levela47080_1() {} };
namespace SPTG { 
struct LucasLee : Levela47080_1 { char padding_d49[119]; AutoInline<PlainStrongHandle<172427269, true>> member_dc0; char padding_dc8[112]; AutoInline<PlainStrongHandle<172427268, true>> member_e38; char padding_e40[112]; AutoInline<PlainStrongHandle<172427267, true>> member_eb0; char padding_eb8[112]; AutoInline<PlainStrongHandle<172427266, true>> member_f28; char padding_f30[112]; AutoInline<PlainStrongHandle<172427265, true>> member_fa0; virtual void Key(); ~LucasLee(); };
LucasLee::~LucasLee() {  }
}
struct Basea508a0 { virtual ~Basea508a0(); char padding[216]; };
namespace SPTG { 
struct SuperGideonAI : Basea508a0 { AutoInline<PlainStrongHandle<173050370, true>> member_e0; char padding_e8[8]; ListenerOut<173050369> member_f0; virtual void Key(); DT_INLINE ~SuperGideonAI(); };
SuperGideonAI::~SuperGideonAI() {  }
}
struct Basea55f00 { virtual ~Basea55f00(); char padding[216]; };
namespace SPTG { 
struct GigaGideonAI : Basea55f00 { AutoInline<PlainStrongHandle<173404162, true>> member_e0; char padding_e8[8]; ListenerOut<173404161> member_f0; virtual void Key(); DT_INLINE ~GigaGideonAI(); };
GigaGideonAI::~GigaGideonAI() {  }
}
struct Nested174024449 { virtual void Key(); char padding_8[88]; Auto<PlainFunction<11137564737>> member_60; DT_INLINE ~Nested174024449() {} };
struct Basea5f670 { virtual ~Basea5f670(); char padding[3504]; };
namespace SPTG { 
struct Gideon : Basea5f670 { AutoInline<PlainStrongHandle<174024456, true>> member_db8; char padding_dc0[112]; AutoInline<PlainStrongHandle<174024455, true>> member_e30; char padding_e38[112]; AutoInline<PlainStrongHandle<174024454, true>> member_ea8; char padding_eb0[112]; AutoInline<PlainStrongHandle<174024453, true>> member_f20; char padding_f28[112]; AutoInline<PlainStrongHandle<174024452, true>> member_f98; char padding_fa0[112]; AutoInline<PlainStrongHandle<174024451, true>> member_1010; char padding_1018[112]; AutoInline<PlainStrongHandle<174024450, true>> member_1088; char padding_1090[8]; Nested174024449 member_1098; virtual void Key(); ~Gideon(); };
Gideon::~Gideon() {  }
}
struct Buffer174173953 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer174173954 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer174173958 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Basea61af0 { virtual ~Basea61af0(); char padding[3488]; };
namespace SPTG { 
struct Lynette : Basea61af0 { Auto<Buffer174173958> member_da8; char padding_dc0[112]; AutoInline<PlainStrongHandle<174173957, true>> member_e30; char padding_e38[112]; AutoInline<PlainStrongHandle<174173956, true>> member_ea8; char padding_eb0[112]; AutoInline<PlainStrongHandle<174173955, true>> member_f20; char padding_f28[64]; Auto<Buffer174173954> member_f68; char padding_f80[16]; Auto<Buffer174173953> member_f90; virtual void Key(); ~Lynette(); };
Lynette::~Lynette() {  }
}
struct Buffer174668034 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer174668035 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Basea69390 { virtual ~Basea69390(); char padding[3392]; };
struct Levela69390_1 : Basea69390 { Member<174668045> member_d48; virtual void Key1(); DT_INLINE ~Levela69390_1() {} };
namespace SPTG { 
struct Chau : Levela69390_1 { char padding_d49[127]; AutoInline<PlainStrongHandle<174668044, true>> member_dc8; char padding_dd0[112]; AutoInline<PlainStrongHandle<174668043, true>> member_e40; char padding_e48[112]; AutoInline<PlainStrongHandle<174668042, true>> member_eb8; char padding_ec0[112]; AutoInline<PlainStrongHandle<174668041, true>> member_f30; char padding_f38[112]; AutoInline<PlainStrongHandle<174668040, true>> member_fa8; char padding_fb0[112]; AutoInline<PlainStrongHandle<174668039, true>> member_1020; char padding_1028[112]; AutoInline<PlainStrongHandle<174668038, true>> member_1098; char padding_10a0[112]; AutoInline<PlainStrongHandle<174668037, true>> member_1110; char padding_1118[112]; AutoInline<PlainStrongHandle<174668036, true>> member_1188; char padding_1190[64]; Auto<Buffer174668035> member_11d0; char padding_11e8[16]; Auto<Buffer174668034> member_11f8; char padding_1210[8]; ListenerOut<174668033> member_1218; virtual void Key(); ~Chau(); };
Chau::~Chau() {  }
}
struct Buffer181153538 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Baseacc2f0 { virtual ~Baseacc2f0(); char padding[80]; };
struct Levelacc2f0_1 : Baseacc2f0 { Auto<Buffer181153538> member_58; virtual void Key1(); DT_INLINE ~Levelacc2f0_1() {} };
namespace Onyx { 
struct SkeletonEvaluationContextCreator : Levelacc2f0_1 { char padding_70[8]; AutoInline<PlainStrongHandle<181153537, true>> member_78; virtual void Key(); ~SkeletonEvaluationContextCreator(); };
SkeletonEvaluationContextCreator::~SkeletonEvaluationContextCreator() {  }
}
struct Basead36d0 { virtual ~Basead36d0(); char padding[136]; };
namespace Onyx { 
struct MenuEventScheme : Basead36d0 { ListenerOut<181628164> member_90; ListenerOut<181628163> member_a8; ListenerOut<181628162> member_c0; ListenerOut<181628161> member_d8; virtual void Key(); ~MenuEventScheme(); };
MenuEventScheme::~MenuEventScheme() {  }
}
struct Basead6920 { virtual ~Basead6920(); char padding[72]; };
namespace Onyx { 
struct MenuItem : Basead6920 { ListenerOut<181834244> member_50; ListenerOut<181834243> member_68; ListenerInline<181834242> member_80; ListenerInline<181834241> member_98; virtual void Key(); ~MenuItem(); };
MenuItem::~MenuItem() {  }
}
struct Basead87f0 { virtual ~Basead87f0(); char padding[168]; };
struct Levelad87f0_1 : Basead87f0 { Member<181960451> member_b0; virtual void Key1(); DT_INLINE ~Levelad87f0_1() {} };
namespace Onyx { 
struct Button : Levelad87f0_1 { char padding_b1[31]; ListenerOut<181960450> member_d0; ListenerOut<181960449> member_e8; virtual void Key(); ~Button(); };
Button::~Button() {  }
}
struct Baseaef080 { virtual ~Baseaef080(); char padding[96]; };
struct Levelaef080_1 : Baseaef080 { ListenerOut<183437314> member_68; virtual void Key1(); DT_INLINE ~Levelaef080_1() {} };

struct Classaef080 : Levelaef080_1 { char padding_80[8]; Member<183437313> member_88; virtual void Key(); ~Classaef080(); };
Classaef080::~Classaef080() {  }

struct Buffer183465729 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Buffer183465731 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Baseaef770 { virtual ~Baseaef770(); char padding[96]; };
struct Levelaef770_2 : Baseaef770 { ListenerOut<183465734> member_68; virtual void Key2(); DT_INLINE ~Levelaef770_2() {} };
struct Levelaef770_1 : Levelaef770_2 { char padding_80[8]; Member<183465733> member_88; virtual void Key1(); DT_INLINE ~Levelaef770_1() {} };
namespace Onyx { 
struct BasicAnimator : Levelaef770_1 { char padding_89[23]; AutoInline<PlainOwnedList<183465732>> member_a0; char padding_b8[24]; Auto<Buffer183465731> member_d0; char padding_e8[8]; Member<183465730> member_f0; char padding_f1[127]; Auto<Buffer183465729> member_170; virtual void Key(); ~BasicAnimator(); };
BasicAnimator::~BasicAnimator() {  }
}
struct Baseaf4310 { virtual ~Baseaf4310(); char padding[144]; };
namespace Onyx { 
struct AnimaticInstance : Baseaf4310 { ListenerOut<183775494> member_98; ListenerOut<183775493> member_b0; ListenerOut<183775492> member_c8; ListenerOut<183775491> member_e0; ListenerOut<183775490> member_f8; Member<183775489> member_110; virtual void Key(); ~AnimaticInstance(); };
AnimaticInstance::~AnimaticInstance() {  }
}
struct Element183881985 { char data[8]; ~Element183881985() noexcept; };
struct Array183881985 { uint64_t w0; uint64_t w8; Element183881985* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element183881985(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element183881985(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Baseaf5d10 { virtual ~Baseaf5d10(); char padding[72]; };
struct Levelaf5d10_1 : Baseaf5d10 { Member<183881986> member_50; virtual void Key1(); DT_INLINE ~Levelaf5d10_1() {} };

struct Classaf5d10 : Levelaf5d10_1 { char padding_51[31]; AutoInline<Array183881985> member_70; virtual void Key(); ~Classaf5d10(); };
Classaf5d10::~Classaf5d10() {  }

struct Baseaf5fe0 { virtual ~Baseaf5fe0(); char padding[88]; };
struct Levelaf5fe0_1 : Baseaf5fe0 { ListenerOut<183893506> member_60; virtual void Key1(); DT_INLINE ~Levelaf5fe0_1() {} };
namespace Onyx { 
struct AnimaticEventRouter : Levelaf5fe0_1 { char padding_78[8]; AutoInline<PlainStrongHandle<183893505, true>> member_80; virtual void Key(); ~AnimaticEventRouter(); };
AnimaticEventRouter::~AnimaticEventRouter() {  }
}
struct Element188158723 { char data[8]; ~Element188158723() noexcept; };
struct Array188158723 { uint64_t w0; uint64_t w8; Element188158723* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element188158723(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element188158723(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Baseb37130 { virtual ~Baseb37130(); char padding[72]; };
struct Levelb37130_1 : Baseb37130 { Member<188158724> member_50; virtual void Key1(); DT_INLINE ~Levelb37130_1() {} };
namespace Onyx { namespace Graphics { namespace Particle { 
struct EmitterGroupGraphics : Levelb37130_1 { char padding_51[71]; AutoInline<Array188158723> member_98; char padding_b0[8]; AutoInline<PlainStrongHandle<188158722, true>> member_b8; AutoInline<PlainStrongHandle<188158721, true>> member_c0; virtual void Key(); ~EmitterGroupGraphics(); };
EmitterGroupGraphics::~EmitterGroupGraphics() {  }
}}}
struct Element189059074 { virtual ~Element189059074() noexcept; char data[80]; };
struct Array189059074 { uint64_t w0; uint64_t w8; Element189059074* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element189059074(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element189059074(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Buffer189059075 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Buffer189059076 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Baseb44d00 { virtual ~Baseb44d00(); char padding[72]; };
struct Levelb44d00_2 : Baseb44d00 { Member<189059077> member_50; virtual void Key2(); DT_INLINE ~Levelb44d00_2() {} };
struct Levelb44d00_1 : Levelb44d00_2 { char padding_51[103]; Auto<Buffer189059076> member_b8; char padding_d0[16]; Auto<Buffer189059075> member_e0; virtual void Key1(); DT_INLINE ~Levelb44d00_1() {} };
namespace Onyx { namespace Graphics { 
struct MorphInstanceNative : Levelb44d00_1 { char padding_f8[24]; AutoInline<Array189059074> member_110; char padding_128[8]; AutoInline<PlainStrongHandle<189059073, true>> member_130; virtual void Key(); ~MorphInstanceNative(); };
MorphInstanceNative::~MorphInstanceNative() {  }
}}
struct Element189070849 { char data[8]; ~Element189070849() noexcept; };
struct Array189070849 { uint64_t w0; uint64_t w8; Element189070849* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element189070849(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element189070849(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Baseb44fe0 { virtual ~Baseb44fe0(); char padding[72]; };
struct Levelb44fe0_1 : Baseb44fe0 { Member<189070850> member_50; virtual void Key1(); DT_INLINE ~Levelb44fe0_1() {} };

struct Classb44fe0 : Levelb44fe0_1 { char padding_51[55]; AutoInline<Array189070849> member_88; virtual void Key(); ~Classb44fe0(); };
Classb44fe0::~Classb44fe0() {  }

struct Buffer189134338 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Baseb45f60 { virtual ~Baseb45f60(); char padding[80]; };
struct Levelb45f60_1 : Baseb45f60 { Auto<Buffer189134338> member_58; virtual void Key1(); DT_INLINE ~Levelb45f60_1() {} };
namespace Onyx { namespace Graphics { 
struct MorphEvaluationContextCreator : Levelb45f60_1 { char padding_70[8]; AutoInline<PlainStrongHandle<189134337, true>> member_78; virtual void Key(); ~MorphEvaluationContextCreator(); };
MorphEvaluationContextCreator::~MorphEvaluationContextCreator() {  }
}}
struct Element189241089 { virtual ~Element189241089() noexcept; char data[48]; };
struct Array189241089 { uint64_t w0; uint64_t w8; Element189241089* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element189241089(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element189241089(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Buffer189241090 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Baseb47970 { virtual ~Baseb47970(); char padding[72]; };
struct Levelb47970_2 : Baseb47970 { Member<189241092> member_50; virtual void Key2(); DT_INLINE ~Levelb47970_2() {} };
struct Levelb47970_1 : Levelb47970_2 { char padding_51[63]; Member<189241091> member_90; virtual void Key1(); DT_INLINE ~Levelb47970_1() {} };
namespace Onyx { namespace Graphics { 
struct ModularMeshInstance : Levelb47970_1 { char padding_91[23]; Auto<Buffer189241090> member_a8; char padding_c0[16]; AutoInline<Array189241089> member_d0; virtual void Key(); ~ModularMeshInstance(); };
ModularMeshInstance::~ModularMeshInstance() {  }
}}
struct Element189504769 { char data[8]; ~Element189504769() noexcept; };
struct Array189504769 { uint64_t w0; uint64_t w8; Element189504769* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element189504769(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element189504769(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Baseb4b9d0 { virtual ~Baseb4b9d0(); char padding[72]; };

struct Classb4b9d0 : Baseb4b9d0 { Member<189504770> member_50; char padding_51[87]; AutoInline<Array189504769> member_a8; virtual void Key(); ~Classb4b9d0(); };
Classb4b9d0::~Classb4b9d0() {  }

struct Element189714178 { char data[8]; ~Element189714178() noexcept; };
struct Array189714178 { uint64_t w0; uint64_t w8; Element189714178* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element189714178(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element189714178(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Element189714179 { char data[8]; ~Element189714179() noexcept; };
struct Array189714179 { uint64_t w0; uint64_t w8; Element189714179* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element189714179(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element189714179(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Baseb4ecf0 { virtual ~Baseb4ecf0(); char padding[72]; };
struct Levelb4ecf0_1 : Baseb4ecf0 { Member<189714180> member_50; virtual void Key1(); DT_INLINE ~Levelb4ecf0_1() {} };

struct Classb4ecf0 : Levelb4ecf0_1 { char padding_51[71]; AutoInline<Array189714179> member_98; char padding_b0[16]; AutoInline<Array189714178> member_c0; char padding_d8[8]; AutoInline<PlainStrongHandle<189714177, true>> member_e0; virtual void Key(); ~Classb4ecf0(); };
Classb4ecf0::~Classb4ecf0() {  }

struct Element189727745 { virtual ~Element189727745() noexcept; char data[48]; };
struct Array189727745 { uint64_t w0; uint64_t w8; Element189727745* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element189727745(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element189727745(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Baseb4f040 { virtual ~Baseb4f040(); char padding[232]; };
namespace Onyx { namespace Graphics { 
struct MeshInstance : Baseb4f040 { AutoInline<Array189727745> member_f0; virtual void Key(); ~MeshInstance() __attribute__((used)); };
inline MeshInstance::~MeshInstance() {  }
}}
struct Buffer190738434 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Baseb5e700 { virtual ~Baseb5e700(); char padding[96]; };
struct Levelb5e700_2 : Baseb5e700 { Member<190738435> member_68; virtual void Key2(); DT_INLINE ~Levelb5e700_2() {} };
struct Levelb5e700_1 : Levelb5e700_2 { char padding_69[15]; Auto<Buffer190738434> member_78; virtual void Key1(); DT_INLINE ~Levelb5e700_1() {} };
namespace Onyx { 
struct RenderDirectorBase : Levelb5e700_1 { char padding_a0[8]; ListenerOut<190738433> member_a8; virtual void Key(); ~RenderDirectorBase(); };
RenderDirectorBase::~RenderDirectorBase() {  }
}
struct Baseb70f50 { virtual ~Baseb70f50(); char padding[72]; };

struct Classb70f50 : Baseb70f50 { Member<191952132> member_50; char padding_51[15]; AutoInline<PlainStrongHandle<191952131, true>> member_60; AutoInline<PlainStrongHandle<191952130, true>> member_68; AutoInline<PlainStrongHandle<191952129, true>> member_70; virtual void Key(); ~Classb70f50(); };
Classb70f50::~Classb70f50() {  }

struct Baseb713e0 { virtual ~Baseb713e0(); char padding[120]; };
namespace Onyx { namespace Graphics { namespace EvolutionDevelopment { 
struct Scene : Baseb713e0 { AutoInline<PlainOwnedList<191970817>> member_80; virtual void Key(); DT_INLINE ~Scene(); };
Scene::~Scene() {  }
}}}
struct Baseb8c120 { virtual ~Baseb8c120(); char padding[72]; };
struct Levelb8c120_1 : Baseb8c120 { Member<193729026> member_50; virtual void Key1(); DT_INLINE ~Levelb8c120_1() {} };
namespace Onyx { namespace Graphics { namespace EvolutionDevelopment { 
struct ScreenRenderSetup : Levelb8c120_1 { char padding_51[23]; AutoInline<PlainOwnedList<193729025>> member_68; virtual void Key(); DT_INLINE ~ScreenRenderSetup(); };
ScreenRenderSetup::~ScreenRenderSetup() {  }
}}}
struct Element193787649 { char data[40]; ~Element193787649() noexcept; };
struct Array193787649 { uint64_t w0; uint64_t w8; Element193787649* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element193787649(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element193787649(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Baseb8cf70 { virtual ~Baseb8cf70(); char padding[80]; };
namespace Onyx { namespace Graphics { namespace EvolutionDevelopment { 
struct ScreenDescriptor : Baseb8cf70 { AutoInline<Array193787649> member_58; virtual void Key(); ~ScreenDescriptor(); };
ScreenDescriptor::~ScreenDescriptor() {  }
}}}
struct Baseb99bb0 { virtual ~Baseb99bb0(); char padding[80]; };
namespace Onyx { namespace Collision { 
struct Collision2D : Baseb99bb0 { ListenerInline<194624258> member_58; ListenerInline<194624257> member_70; virtual void Key(); ~Collision2D(); };
Collision2D::~Collision2D() {  }
}}
struct Element195572225 { char data[8]; ~Element195572225() noexcept; };
struct Array195572225 { uint64_t w0; uint64_t w8; Element195572225* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element195572225(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element195572225(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Element195572226 { char data[8]; ~Element195572226() noexcept; };
struct Array195572226 { uint64_t w0; uint64_t w8; Element195572226* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element195572226(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element195572226(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Element195572227 { char data[8]; ~Element195572227() noexcept; };
struct Array195572227 { uint64_t w0; uint64_t w8; Element195572227* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element195572227(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element195572227(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Baseba8320 { virtual ~Baseba8320(); char padding[80]; };

struct Classba8320 : Baseba8320 { AutoInline<Array195572227> member_58; char padding_70[16]; AutoInline<Array195572226> member_80; char padding_98[16]; AutoInline<Array195572225> member_a8; virtual void Key(); ~Classba8320(); };
Classba8320::~Classba8320() {  }

struct Basebabe80 { virtual ~Basebabe80(); char padding[96]; };
struct Levelbabe80_1 : Basebabe80 { ListenerOut<195815426> member_68; virtual void Key1(); DT_INLINE ~Levelbabe80_1() {} };

struct Classbabe80 : Levelbabe80_1 { char padding_80[8]; Member<195815425> member_88; virtual void Key(); ~Classbabe80(); };
Classbabe80::~Classbabe80() {  }

struct Basebbf9a0 { virtual ~Basebbf9a0(); char padding[96]; };
struct Levelbbf9a0_1 : Basebbf9a0 { ListenerOut<197106178> member_68; virtual void Key1(); DT_INLINE ~Levelbbf9a0_1() {} };

struct Classbbf9a0 : Levelbbf9a0_1 { char padding_80[8]; AutoInline<PlainStrongHandle<197106177, true>> member_88; virtual void Key(); ~Classbbf9a0(); };
Classbbf9a0::~Classbbf9a0() {  }

struct Element197210113 { char data[8]; ~Element197210113() noexcept; };
struct Array197210113 { uint64_t w0; uint64_t w8; Element197210113* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element197210113(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element197210113(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Basebc1300 { virtual ~Basebc1300(); char padding[96]; };
struct Levelbc1300_1 : Basebc1300 { ListenerOut<197210114> member_68; virtual void Key1(); DT_INLINE ~Levelbc1300_1() {} };

struct Classbc1300 : Levelbc1300_1 { char padding_80[16]; AutoInline<Array197210113> member_90; virtual void Key(); ~Classbc1300(); };
Classbc1300::~Classbc1300() {  }

struct Buffer197214978 { uint64_t w0; uint64_t w8; void* w10; __attribute__((always_inline)) void Destroy() { w8 = 0; if (w10) FreeObject(w10); } };
struct Basebc1430 { virtual ~Basebc1430(); char padding[184]; };
namespace Onyx { 
struct Mixer : Basebc1430 { AutoInline<PlainOwnedList<197214979>> member_c0; char padding_d8[24]; Auto<Buffer197214978> member_f0; char padding_108[8]; Member<197214977> member_110; virtual void Key(); ~Mixer(); };
Mixer::~Mixer() {  }
}
struct Basebc9d30 { virtual ~Basebc9d30(); char padding[72]; };
namespace Onyx { 
struct ActionComponent : Basebc9d30 { ListenerOut<197776131> member_50; ListenerOut<197776130> member_68; ListenerOut<197776129> member_80; virtual void Key(); ~ActionComponent(); };
ActionComponent::~ActionComponent() {  }
}
struct Basec71530 { virtual ~Basec71530(); char padding[72]; };
namespace Onyx { 
struct TimeElapsedTrigger : Basec71530 { ListenerOut<208753411> member_50; ListenerOut<208753410> member_68; ListenerOut<208753409> member_80; virtual void Key(); ~TimeElapsedTrigger(); };
TimeElapsedTrigger::~TimeElapsedTrigger() {  }
}
struct Basec7b700 { virtual ~Basec7b700(); char padding[80]; };
struct Levelc7b700_1 : Basec7b700 { ListenerOut<209416196> member_58; virtual void Key1(); DT_INLINE ~Levelc7b700_1() {} };
namespace Onyx { 
struct EnterExitTrigger : Levelc7b700_1 { char padding_70[64]; ListenerOut<209416195> member_b0; ListenerOut<209416194> member_c8; ListenerOut<209416193> member_e0; virtual void Key(); ~EnterExitTrigger(); };
EnterExitTrigger::~EnterExitTrigger() {  }
}
struct Basec7c440 { virtual ~Basec7c440(); char padding[80]; };
struct Levelc7c440_1 : Basec7c440 { ListenerOut<209470466> member_58; virtual void Key1(); DT_INLINE ~Levelc7c440_1() {} };
namespace Onyx { 
struct CollisionTrigger : Levelc7c440_1 { char padding_70[64]; ListenerInline<209470465> member_b0; virtual void Key(); ~CollisionTrigger(); };
CollisionTrigger::~CollisionTrigger() {  }
}
struct Basec83440 { virtual ~Basec83440(); char padding[80]; };
struct Levelc83440_1 : Basec83440 { ListenerOut<209929218> member_58; virtual void Key1(); DT_INLINE ~Levelc83440_1() {} };
namespace Onyx { 
struct RandomZoneSphere : Levelc83440_1 { char padding_70[16]; AutoInline<PlainStrongHandle<209929217, true>> member_80; virtual void Key(); ~RandomZoneSphere(); };
RandomZoneSphere::~RandomZoneSphere() {  }
}
struct Basec842d0 { virtual ~Basec842d0(); char padding[80]; };
struct Levelc842d0_1 : Basec842d0 { ListenerOut<209988866> member_58; virtual void Key1(); DT_INLINE ~Levelc842d0_1() {} };
namespace Onyx { 
struct RandomZoneCapsule : Levelc842d0_1 { char padding_70[16]; AutoInline<PlainStrongHandle<209988865, true>> member_80; virtual void Key(); ~RandomZoneCapsule(); };
RandomZoneCapsule::~RandomZoneCapsule() {  }
}
struct Basec849e0 { virtual ~Basec849e0(); char padding[80]; };
struct Levelc849e0_1 : Basec849e0 { ListenerOut<210017794> member_58; virtual void Key1(); DT_INLINE ~Levelc849e0_1() {} };
namespace Onyx { 
struct RandomZoneBox : Levelc849e0_1 { char padding_70[16]; AutoInline<PlainStrongHandle<210017793, true>> member_80; virtual void Key(); ~RandomZoneBox(); };
RandomZoneBox::~RandomZoneBox() {  }
}
struct Basec8c910 { virtual ~Basec8c910(); char padding[120]; };
namespace Onyx { 
struct ScrollingText : Basec8c910 { ListenerOut<210538756> member_80; ListenerOut<210538755> member_98; ListenerOut<210538754> member_b0; char padding_c8[48]; Member<210538753> member_f8; virtual void Key(); ~ScrollingText(); };
ScrollingText::~ScrollingText() {  }
}
struct Basec8e2b0 { virtual ~Basec8e2b0(); char padding[72]; };
struct Levelc8e2b0_1 : Basec8e2b0 { Member<210643714> member_50; virtual void Key1(); DT_INLINE ~Levelc8e2b0_1() {} };
namespace Onyx { 
struct SaveTransform : Levelc8e2b0_1 { char padding_51[15]; ListenerOut<210643713> member_60; virtual void Key(); DT_INLINE ~SaveTransform(); };
SaveTransform::~SaveTransform() {  }
}
struct Basec91670 { virtual ~Basec91670(); char padding[80]; };
namespace Onyx { namespace Graphics { 
struct SetLightGroup : Basec91670 { ListenerOut<211020288> member_58; ListenerOut<211020288> member_70; ListenerOut<211005952> member_88; ListenerOut<210991616> member_a0; virtual void Key(); ~SetLightGroup(); };
SetLightGroup::~SetLightGroup() {  }
}}
struct Basec94470 { virtual ~Basec94470(); char padding[80]; };
namespace Onyx { namespace Graphics { 
struct SetFogGroup : Basec94470 { ListenerOut<211020288> member_58; ListenerOut<211005952> member_70; ListenerOut<211165952> member_88; ListenerOut<211165952> member_a0; ListenerOut<211005952> member_b8; ListenerOut<210991616> member_d0; virtual void Key(); ~SetFogGroup(); };
SetFogGroup::~SetFogGroup() {  }
}}
struct Basec96750 { virtual ~Basec96750(); char padding[80]; };
namespace Onyx { namespace Graphics { 
struct SetAmbientGroup : Basec96750 { ListenerOut<211186947> member_58; ListenerOut<211186946> member_70; ListenerOut<211186945> member_88; virtual void Key(); ~SetAmbientGroup(); };
SetAmbientGroup::~SetAmbientGroup() {  }
}}
struct Element211517954 { virtual ~Element211517954() noexcept; char data[48]; };
struct Array211517954 { uint64_t w0; uint64_t w8; Element211517954* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element211517954(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element211517954(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Basec9b820 { virtual ~Basec9b820(); char padding[232]; };
struct Levelc9b820_1 : Basec9b820 { AutoInline<Array211517954> member_f0; virtual void Key1(); DT_INLINE ~Levelc9b820_1() {} };
namespace Onyx { namespace Graphics { 
struct MeshInstanceLevelOfDetail : Levelc9b820_1 { char padding_108[8]; AutoInline<PlainStrongHandle<211517953, true>> member_110; virtual void Key(); ~MeshInstanceLevelOfDetail(); };
MeshInstanceLevelOfDetail::~MeshInstanceLevelOfDetail() {  }
}}
struct Element211713538 { virtual ~Element211713538() noexcept; char data[48]; };
struct Array211713538 { uint64_t w0; uint64_t w8; Element211713538* w10; __attribute__((always_inline)) void Destroy() { if (w10 && w8) { w10[0].~Element211713538(); for (uint64_t i = 1; i < w8; ++i) w10[i].~Element211713538(); } w8 = 0; void* memory = w10; if (memory) FreeObject(memory); } };
struct Basec9e7e0 { virtual ~Basec9e7e0(); char padding[232]; };
struct Levelc9e7e0_1 : Basec9e7e0 { AutoInline<Array211713538> member_f0; virtual void Key1(); DT_INLINE ~Levelc9e7e0_1() {} };

struct Classc9e7e0 : Levelc9e7e0_1 { char padding_108[8]; AutoInline<PlainStrongHandle<211713537, true>> member_110; virtual void Key(); ~Classc9e7e0(); };
Classc9e7e0::~Classc9e7e0() {  }

struct Buffer211990018 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Baseca2b60 { virtual ~Baseca2b60(); char padding[104]; };
struct Levelca2b60_1 : Baseca2b60 { Auto<Buffer211990018> member_70; virtual void Key1(); DT_INLINE ~Levelca2b60_1() {} };
namespace Onyx { 
struct WaypointLinkGraphicsCatalog : Levelca2b60_1 { char padding_98[8]; ListenerOut<211990017> member_a0; virtual void Key(); DT_INLINE ~WaypointLinkGraphicsCatalog(); };
WaypointLinkGraphicsCatalog::~WaypointLinkGraphicsCatalog() {  }
}
struct Basecb1ea0 { virtual ~Basecb1ea0(); char padding[72]; };
struct Levelcb1ea0_1 : Basecb1ea0 { Member<212986372> member_50; virtual void Key1(); DT_INLINE ~Levelcb1ea0_1() {} };
namespace Onyx { 
struct DirectionalArrowGraphics : Levelcb1ea0_1 { char padding_51[63]; ListenerOut<212986371> member_90; AutoInline<PlainStrongHandle<212986370, true>> member_a8; AutoInline<PlainStrongHandle<212986369, true>> member_b0; virtual void Key(); ~DirectionalArrowGraphics(); };
DirectionalArrowGraphics::~DirectionalArrowGraphics() {  }
}
struct Buffer213222146 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Basecb5830 { virtual ~Basecb5830(); char padding[104]; };
struct Levelcb5830_1 : Basecb5830 { Auto<Buffer213222146> member_70; virtual void Key1(); DT_INLINE ~Levelcb5830_1() {} };
namespace Onyx { 
struct DirectionalArrowCatalog : Levelcb5830_1 { char padding_98[8]; ListenerOut<213222145> member_a0; virtual void Key(); DT_INLINE ~DirectionalArrowCatalog(); };
DirectionalArrowCatalog::~DirectionalArrowCatalog() {  }
}
struct Basecc08b0 { virtual ~Basecc08b0(); char padding[72]; };
struct Levelcc08b0_1 : Basecc08b0 { ListenerOut<214019072> member_50; virtual void Key1(); DT_INLINE ~Levelcc08b0_1() {} };
namespace Onyx { namespace Gameplay { namespace Circuits { 
struct LerpedVector3PublisherCircuit : Levelcc08b0_1 { ListenerOut<210991616> member_68; ListenerOut<210991616> member_80; virtual void Key(); ~LerpedVector3PublisherCircuit(); };
LerpedVector3PublisherCircuit::~LerpedVector3PublisherCircuit() {  }
}}}
struct Basecc2130 { virtual ~Basecc2130(); char padding[72]; };
struct Levelcc2130_1 : Basecc2130 { ListenerOut<211005952> member_50; virtual void Key1(); DT_INLINE ~Levelcc2130_1() {} };
namespace Onyx { namespace Gameplay { namespace Circuits { 
struct LerpedU32PublisherCircuit : Levelcc2130_1 { ListenerOut<210991616> member_68; ListenerOut<210991616> member_80; virtual void Key(); ~LerpedU32PublisherCircuit(); };
LerpedU32PublisherCircuit::~LerpedU32PublisherCircuit() {  }
}}}
struct Basecc2c50 { virtual ~Basecc2c50(); char padding[72]; };
struct Levelcc2c50_1 : Basecc2c50 { ListenerOut<211165952> member_50; virtual void Key1(); DT_INLINE ~Levelcc2c50_1() {} };
namespace Onyx { namespace Gameplay { namespace Circuits { 
struct LerpedF32PublisherCircuit : Levelcc2c50_1 { ListenerOut<210991616> member_68; ListenerOut<210991616> member_80; virtual void Key(); ~LerpedF32PublisherCircuit(); };
LerpedF32PublisherCircuit::~LerpedF32PublisherCircuit() {  }
}}}
struct Basecc3760 { virtual ~Basecc3760(); char padding[72]; };
struct Levelcc3760_1 : Basecc3760 { ListenerOut<211020288> member_50; virtual void Key1(); DT_INLINE ~Levelcc3760_1() {} };
namespace Onyx { namespace Gameplay { namespace Circuits { 
struct LerpedColorPublisherCircuit : Levelcc3760_1 { ListenerOut<210991616> member_68; ListenerOut<210991616> member_80; virtual void Key(); ~LerpedColorPublisherCircuit(); };
LerpedColorPublisherCircuit::~LerpedColorPublisherCircuit() {  }
}}}
struct Basecc5750 { virtual ~Basecc5750(); char padding[72]; };
struct Levelcc5750_1 : Basecc5750 { ListenerOut<214019072> member_50; virtual void Key1(); DT_INLINE ~Levelcc5750_1() {} };
namespace Onyx { namespace Gameplay { namespace Circuits { 
struct Vector3ConstantPublisherCircuit : Levelcc5750_1 { ListenerOut<214019072> member_68; virtual void Key(); ~Vector3ConstantPublisherCircuit(); };
Vector3ConstantPublisherCircuit::~Vector3ConstantPublisherCircuit() {  }
}}}
struct Basecc5d10 { virtual ~Basecc5d10(); char padding[72]; };
struct Levelcc5d10_1 : Basecc5d10 { ListenerOut<211020288> member_50; virtual void Key1(); DT_INLINE ~Levelcc5d10_1() {} };
namespace Onyx { namespace Gameplay { namespace Circuits { 
struct ColorConstantPublisherCircuit : Levelcc5d10_1 { ListenerOut<211020288> member_68; virtual void Key(); ~ColorConstantPublisherCircuit(); };
ColorConstantPublisherCircuit::~ColorConstantPublisherCircuit() {  }
}}}
struct Basecc6310 { virtual ~Basecc6310(); char padding[72]; };
struct Levelcc6310_1 : Basecc6310 { ListenerOut<211165952> member_50; virtual void Key1(); DT_INLINE ~Levelcc6310_1() {} };
namespace Onyx { namespace Gameplay { namespace Circuits { 
struct F32ConstantPublisherCircuit : Levelcc6310_1 { ListenerOut<211165952> member_68; virtual void Key(); ~F32ConstantPublisherCircuit(); };
F32ConstantPublisherCircuit::~F32ConstantPublisherCircuit() {  }
}}}
struct Basecc6880 { virtual ~Basecc6880(); char padding[72]; };
struct Levelcc6880_1 : Basecc6880 { ListenerOut<211005952> member_50; virtual void Key1(); DT_INLINE ~Levelcc6880_1() {} };
namespace Onyx { namespace Gameplay { namespace Circuits { 
struct U32ConstantPublisherCircuit : Levelcc6880_1 { ListenerOut<211005952> member_68; virtual void Key(); ~U32ConstantPublisherCircuit(); };
U32ConstantPublisherCircuit::~U32ConstantPublisherCircuit() {  }
}}}
struct Basecc7c10 { virtual ~Basecc7c10(); char padding[72]; };
namespace Onyx { namespace Gameplay { namespace Circuits { 
struct TimerCircuit : Basecc7c10 { ListenerOut<211165952> member_50; ListenerOut<214239488> member_68; ListenerOut<210991616> member_80; ListenerOut<210991616> member_98; virtual void Key(); ~TimerCircuit(); };
TimerCircuit::~TimerCircuit() {  }
}}}
struct Basecd12d0 { virtual ~Basecd12d0(); char padding[72]; };
struct Levelcd12d0_1 : Basecd12d0 { Member<215035138> member_50; virtual void Key1(); DT_INLINE ~Levelcd12d0_1() {} };
namespace Onyx { 
struct CollisionWalkLocomotor : Levelcd12d0_1 { char padding_51[55]; ListenerOut<215035137> member_88; virtual void Key(); DT_INLINE ~CollisionWalkLocomotor(); };
CollisionWalkLocomotor::~CollisionWalkLocomotor() {  }
}
struct Basecd89d0 { virtual ~Basecd89d0(); char padding[72]; };
struct Levelcd89d0_1 : Basecd89d0 { Member<215522563> member_50; virtual void Key1(); DT_INLINE ~Levelcd89d0_1() {} };
namespace Onyx { namespace Gameplay { 
struct DistanceTrigger : Levelcd89d0_1 { char padding_51[15]; ListenerInline<215522562> member_60; ListenerInline<215522561> member_78; virtual void Key(); ~DistanceTrigger(); };
DistanceTrigger::~DistanceTrigger() {  }
}}
struct Basecda600 { virtual ~Basecda600(); char padding[72]; };
namespace Onyx { 
struct EventAccumulator : Basecda600 { ListenerInline<215638019> member_50; ListenerInline<215638018> member_68; ListenerInline<215638017> member_80; virtual void Key(); ~EventAccumulator(); };
EventAccumulator::~EventAccumulator() {  }
}
struct Basecdc620 { virtual ~Basecdc620(); char padding[128]; };
struct Levelcdc620_1 : Basecdc620 { ListenerOut<215769602> member_88; virtual void Key1(); DT_INLINE ~Levelcdc620_1() {} };
namespace Onyx { 
struct DirectionalShaker : Levelcdc620_1 { char padding_a0[8]; AutoInline<PlainStrongHandle<215769601, true>> member_a8; virtual void Key(); ~DirectionalShaker(); };
DirectionalShaker::~DirectionalShaker() {  }
}
struct Basece0070 { virtual ~Basece0070(); char padding[72]; };
struct Levelce0070_1 : Basece0070 { Member<216008450> member_50; virtual void Key1(); DT_INLINE ~Levelce0070_1() {} };
namespace Onyx { 
struct CounterToText : Levelce0070_1 { char padding_51[15]; ListenerOut<216008449> member_60; virtual void Key(); DT_INLINE ~CounterToText(); };
CounterToText::~CounterToText() {  }
}
struct Basece2280 { virtual ~Basece2280(); char padding[72]; };
namespace Onyx { 
struct Counter : Basece2280 { ListenerOut<216147972> member_50; ListenerOut<216147971> member_68; ListenerOut<216147970> member_80; ListenerOut<216147969> member_98; virtual void Key(); ~Counter(); };
Counter::~Counter() {  }
}
struct Basece2f20 { virtual ~Basece2f20(); char padding[96]; };
namespace Onyx { 
struct Collectable : Basece2f20 { ListenerInline<216199683> member_68; ListenerInline<216199682> member_80; ListenerInline<216199681> member_98; virtual void Key(); ~Collectable(); };
Collectable::~Collectable() {  }
}
struct Baseceb930 { virtual ~Baseceb930(); char padding[72]; };
struct Levelceb930_1 : Baseceb930 { Member<216765194> member_50; virtual void Key1(); DT_INLINE ~Levelceb930_1() {} };
namespace Onyx { 
struct Character : Levelceb930_1 { char padding_51[63]; ListenerOut<216765193> member_90; ListenerOut<216765192> member_a8; ListenerOut<216765191> member_c0; ListenerOut<216765190> member_d8; ListenerOut<216765189> member_f0; ListenerOut<216765188> member_108; ListenerOut<216765187> member_120; ListenerOut<216765186> member_138; ListenerOut<216765185> member_150; virtual void Key(); ~Character(); };
Character::~Character() {  }
}
struct Buffer216947202 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Basecee5a0 { virtual ~Basecee5a0(); char padding[104]; };
struct Levelcee5a0_1 : Basecee5a0 { Auto<Buffer216947202> member_70; virtual void Key1(); DT_INLINE ~Levelcee5a0_1() {} };
namespace Onyx { 
struct BillboardCatalog : Levelcee5a0_1 { char padding_98[8]; ListenerOut<216947201> member_a0; virtual void Key(); DT_INLINE ~BillboardCatalog(); };
BillboardCatalog::~BillboardCatalog() {  }
}
// Onyx navigation and control components whose one member is a boxed shared pointer (see Kind 4).
struct Basead6520 { virtual ~Basead6520(); char padding[200]; };
struct Basebf1900 { virtual ~Basebf1900(); char padding[80]; };
// The same base as Basec9e7e0 above (its destructor is at 0xc9e7e0), seen with Cursor's member 0x118 bytes in.
struct Basec9e7e0_118 { virtual ~Basec9e7e0_118(); char padding[272]; };
struct Basece6320 { virtual ~Basece6320(); char padding[128]; };
namespace Onyx { 
struct MenuCursor : Basead6520 { AutoInline<PlainSharedPointer<181918465, 1176, true, 4>> member_d0; virtual void Key(); DT_INLINE ~MenuCursor(); };
MenuCursor::~MenuCursor() {  }
struct FreeSpaceNavigator : Basebf1900 { AutoInline<PlainSharedPointer<210342401, 1176, true, 4>> member_58; virtual void Key(); DT_INLINE ~FreeSpaceNavigator(); };
FreeSpaceNavigator::~FreeSpaceNavigator() {  }
struct Cursor : Basec9e7e0_118 { AutoInline<PlainSharedPointer<211724289, 1176, true, 4>> member_118; virtual void Key(); DT_INLINE ~Cursor(); };
Cursor::~Cursor() {  }
struct Positionner : Basebf1900 { AutoInline<PlainSharedPointer<214764289, 1176, true, 4>> member_58; virtual void Key(); DT_INLINE ~Positionner(); };
Positionner::~Positionner() {  }
struct Orienter : Basebf1900 { AutoInline<PlainSharedPointer<214806017, 1176, true, 4>> member_58; virtual void Key(); DT_INLINE ~Orienter(); };
Orienter::~Orienter() {  }
struct CharacterController : Basece6320 { AutoInline<PlainSharedPointer<216420097, 1176, true, 4>> member_88; virtual void Key(); DT_INLINE ~CharacterController(); };
CharacterController::~CharacterController() {  }
struct FreePositionner : Basebf1900 { AutoInline<PlainSharedPointer<214813697, 1176, true, 4>> member_58; virtual void Key(); DT_INLINE ~FreePositionner(); };
FreePositionner::~FreePositionner() {  }
struct FreeOrienter : Basebf1900 { AutoInline<PlainSharedPointer<214840065, 1176, true, 4>> member_58; virtual void Key(); DT_INLINE ~FreeOrienter(); };
FreeOrienter::~FreeOrienter() {  }
}
struct Basecae410 { virtual ~Basecae410(); char padding[128]; };
namespace Onyx { 
struct LightDirectionalGraphics : Basecae410 { char padding_88[16]; AutoInline<PlainStrongHandle<212746499, true>> member_98; AutoInline<PlainStrongHandle<212746498, true>> member_a0; AutoInline<PlainStrongHandle<212746497, true>> member_a8; virtual void Key(); DT_INLINE ~LightDirectionalGraphics(); };
LightDirectionalGraphics::~LightDirectionalGraphics() {  }
}
