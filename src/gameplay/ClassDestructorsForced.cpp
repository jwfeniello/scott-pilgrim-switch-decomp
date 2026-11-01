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
// An owned block whose buffer is a counted array.
template<unsigned long Key, unsigned Offset> struct PlainOwnedBlock {
    struct Block { char padding[Offset]; char* data; };
    Block* value;
    __attribute__((always_inline)) void Destroy() {
        if (value) {
            DecodeAllocators* m = DecodeAllocatorManager;
            DecodeAllocator* a = m->values[DecodeAllocatorIndex(m, value)];
            if (value->data) FreeObject(value->data - 4);
            a->Free(value);
        }
        value = nullptr;
    }
};
// A list of owned objects: the head is a node without a value.
struct OwnedValue { virtual ~OwnedValue(); };
template<unsigned long Key> struct PlainOwnedList {
    struct Node { Node* prev; Node* next; OwnedValue* value; };
    Node* prev;
    Node* next;
    uint64_t count;
    __attribute__((always_inline)) void Destroy() {
        Node* head = reinterpret_cast<Node*>(this);
        Node* node = next;
        if (node != head) {
            do {
                Node* following = node->next;
                OwnedValue* v = node->value;
                if (v) {
                    DecodeAllocators* m = DecodeAllocatorManager;
                    DecodeAllocator* a = m->values[DecodeAllocatorIndex(m, v)];
                    v->~OwnedValue();
                    a->Free(v);
                }
                if (node) FreeObject(node);
                node = following;
            } while (node != head);
        }
        next = head;
        count = 0;
        prev = head;
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
struct TrackingNode { void* padding; void* key; char data[0x18]; TrackingNode* next; };
struct TrackingMap { void* mutex; char padding[0x20]; TrackingNode* free_head; TrackingNode* buckets[4003]; };
extern "C" { extern TrackingMap* HandleTracking; void HandleLock(void*); void HandleUnlock(void*) noexcept; }
__attribute__((always_inline)) inline void UnlockHandles(TrackingMap* map) noexcept { HandleUnlock(map->mutex); }
struct HandleObject { virtual ~HandleObject(); };
struct HandleRecord { char padding[8]; HandleObject* object; unsigned references; };
template<unsigned long Key> struct PlainStrongHandle {
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
                }
            }
            value = nullptr;
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
struct Base7059f0 { virtual ~Base7059f0(); char padding[72]; };
namespace Onyx { namespace DareAudio { 
struct WiiMoteSpeakerComponent : Base7059f0 { ListenerOut<117808898> member_50; Auto<PlainFunction<117808897>> member_68; virtual void Key(); ~WiiMoteSpeakerComponent(); };
WiiMoteSpeakerComponent::~WiiMoteSpeakerComponent() {  }
}}
struct Base71b8a0 { virtual ~Base71b8a0(); char padding[72]; };
namespace Onyx { namespace DareAudio { 
struct AudioWaveMarkerComponent : Base71b8a0 { ListenerOut<119245314> member_50; Auto<PlainFunction<119245313>> member_68; virtual void Key(); ~AudioWaveMarkerComponent(); };
AudioWaveMarkerComponent::~AudioWaveMarkerComponent() {  }
}}
struct Base71e630 { virtual ~Base71e630(); char padding[72]; };
namespace Onyx { namespace DareAudio { 
struct AudioNotificationComponent : Base71e630 { ListenerOut<119431938> member_50; Auto<PlainFunction<119431937>> member_68; virtual void Key(); ~AudioNotificationComponent(); };
AudioNotificationComponent::~AudioNotificationComponent() {  }
}}
struct Base71ee30 { virtual ~Base71ee30(); char padding[96]; };
namespace Onyx { namespace DareAudio { 
struct Audio2DAmbientComponent : Base71ee30 { ListenerOut<119464708> member_68; ListenerOut<119464707> member_80; Member<119464706> member_98; char padding_99[3]; Member<119464705> member_9c; virtual void Key(); ~Audio2DAmbientComponent(); };
Audio2DAmbientComponent::~Audio2DAmbientComponent() {  }
}}
struct Base72d4a0 { virtual ~Base72d4a0(); char padding[72]; };
namespace Onyx { namespace DLC { 
struct ProgressTask : Base72d4a0 { ListenerOut<120408578> member_50; char padding_68[16]; Auto<PlainFunction<120408577>> member_78; virtual void Key(); ~ProgressTask(); };
ProgressTask::~ProgressTask() {  }
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
struct Base8746d0 { virtual ~Base8746d0(); char padding[688]; };
namespace SPTG { 
struct ConfirmBox : Base8746d0 { ListenerOut<141847811> member_2b8; ListenerOut<141847810> member_2d0; char padding_2e8[48]; AutoInline<PlainSharedBuffer<141847809>> member_318; virtual void Key(); ~ConfirmBox(); };
ConfirmBox::~ConfirmBox() {  }
}
struct Base883620 { virtual ~Base883620(); char padding[80]; };
struct Level883620_1 : Base883620 { Member<142828035> member_58; virtual void Key1(); DT_INLINE ~Level883620_1() {} };
namespace SPTG { 
struct LevelSecretManager : Level883620_1 { char padding_59[15]; ListenerOut<142828034> member_68; Member<142828033> member_80; virtual void Key(); ~LevelSecretManager(); };
LevelSecretManager::~LevelSecretManager() {  }
}
struct Buffer144329729 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Base89a4c0 { virtual ~Base89a4c0(); char padding[80]; };
struct Level89a4c0_1 : Base89a4c0 { Member<144329732> member_58; virtual void Key1(); DT_INLINE ~Level89a4c0_1() {} };
namespace SPTG { 
struct NewMoveAnimationLoader : Level89a4c0_1 { char padding_59[15]; ListenerOut<144329731> member_68; ListenerOut<144329730> member_80; char padding_98[24]; Auto<Buffer144329729> member_b0; virtual void Key(); ~NewMoveAnimationLoader(); };
NewMoveAnimationLoader::~NewMoveAnimationLoader() {  }
}
struct Base8cbaa0 { virtual ~Base8cbaa0(); char padding[288]; };
namespace SPTG { 
struct BitmapFontTextComponent : Base8cbaa0 { ListenerOut<147565058> member_128; char padding_140[8]; AutoInline<PlainSharedBuffer<147565057>> member_148; virtual void Key(); ~BitmapFontTextComponent(); };
BitmapFontTextComponent::~BitmapFontTextComponent() {  }
}
struct Buffer163039745 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };
struct Buffer163039746 { void* w0; uint64_t w8; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; w8 = 0; } };
struct Base9b7ca0 { virtual ~Base9b7ca0(); char padding[1920]; };
namespace SPTG { 
struct NPC : Base9b7ca0 { ListenerOut<163039747> member_788; char padding_7a0[32]; Auto<Buffer163039746> member_7c0; char padding_7d0[16]; Auto<Buffer163039745> member_7e0; virtual void Key(); ~NPC(); };
NPC::~NPC() {  }
}
struct Buffer168788993 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Basea0f840 { virtual ~Basea0f840(); char padding[504]; };
namespace SPTG { 
struct BreakableObject : Basea0f840 { ListenerOut<168788996> member_200; ListenerOut<168788995> member_218; ListenerOut<168788994> member_230; char padding_248[64]; Auto<Buffer168788993> member_288; virtual void Key(); ~BreakableObject(); };
BreakableObject::~BreakableObject() {  }
}
struct Baseaef080 { virtual ~Baseaef080(); char padding[96]; };
struct Levelaef080_1 : Baseaef080 { ListenerOut<183437314> member_68; virtual void Key1(); DT_INLINE ~Levelaef080_1() {} };

struct Classaef080 : Levelaef080_1 { char padding_80[8]; Member<183437313> member_88; virtual void Key(); ~Classaef080(); };
Classaef080::~Classaef080() {  }

struct Basebabe80 { virtual ~Basebabe80(); char padding[96]; };
struct Levelbabe80_1 : Basebabe80 { ListenerOut<195815426> member_68; virtual void Key1(); DT_INLINE ~Levelbabe80_1() {} };

struct Classbabe80 : Levelbabe80_1 { char padding_80[8]; Member<195815425> member_88; virtual void Key(); ~Classbabe80(); };
Classbabe80::~Classbabe80() {  }

struct Basec8c910 { virtual ~Basec8c910(); char padding[120]; };
namespace Onyx { 
struct ScrollingText : Basec8c910 { ListenerOut<210538756> member_80; ListenerOut<210538755> member_98; ListenerOut<210538754> member_b0; char padding_c8[48]; Member<210538753> member_f8; virtual void Key(); ~ScrollingText(); };
ScrollingText::~ScrollingText() {  }
}
