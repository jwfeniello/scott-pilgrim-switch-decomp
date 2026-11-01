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
struct Buffer121162241 { void* w0; __attribute__((always_inline)) void Destroy() { if (w0) FreeObject(w0); w0 = 0; } };
struct Base738ca0 { virtual ~Base738ca0(); char padding[72]; };
struct Level738ca0_1 : Base738ca0 { Member<121162242> member_50; virtual void Key1(); DT_INLINE ~Level738ca0_1() {} };
namespace Onyx { namespace Fire { 
struct Movie : Level738ca0_1 { char padding_51[87]; Buffer121162241 member_a8; virtual void Key(); ~Movie(); };
Movie::~Movie() { member_a8.Destroy(); }
}}
struct Base793960 { virtual ~Base793960(); char padding[72]; };
struct Level793960_1 : Base793960 { Member<127112706> member_50; virtual void Key1(); DT_INLINE ~Level793960_1() {} };
namespace SPTG { namespace SaveOverlay { 
struct VisualOverlay : Level793960_1 { char padding_51[63]; PlainFunction<127112705> member_90; virtual void Key(); ~VisualOverlay(); };
VisualOverlay::~VisualOverlay() { member_90.Destroy(); }
}}
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
struct Buffer143702273 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer143702274 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Base890b90 { virtual ~Base890b90(); char padding[432]; };
namespace SPTG { 
struct BoundaryGraphics : Base890b90 { Auto<Buffer143702274> member_1b8; char padding_1c8[24]; Auto<Buffer143702273> member_1e0; virtual void Key(); ~BoundaryGraphics(); };
BoundaryGraphics::~BoundaryGraphics() {  }
}
struct Buffer143907586 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Base893db0 { virtual ~Base893db0(); char padding[72]; };
struct Level893db0_1 : Base893db0 { Member<143907588> member_50; virtual void Key1(); DT_INLINE ~Level893db0_1() {} };
namespace SPTG { 
struct Item : Level893db0_1 { char padding_51[39]; AutoInline<PlainSharedBuffer<143907587>> member_78; char padding_80[24]; Auto<Buffer143907586> member_98; char padding_a8[16]; AutoInline<PlainSharedBuffer<143907585>> member_b8; virtual void Key(); ~Item(); };
Item::~Item() {  }
}
struct Buffer147639041 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer147639042 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Base8cccb0 { virtual ~Base8cccb0(); char padding[72]; };
struct Level8cccb0_1 : Base8cccb0 { Member<147639044> member_50; virtual void Key1(); DT_INLINE ~Level8cccb0_1() {} };
namespace SPTG { 
struct BitmapFont : Level8cccb0_1 { char padding_51[23]; AutoInline<PlainSharedBuffer<147639043>> member_68; char padding_70[32]; Auto<Buffer147639042> member_90; char padding_a0[24]; Auto<Buffer147639041> member_b8; virtual void Key(); ~BitmapFont(); };
BitmapFont::~BitmapFont() {  }
}
struct Base8f0920 { virtual ~Base8f0920(); char padding[192]; };
namespace SPTG { 
struct MoveIconInWorldMapAction : Base8f0920 { AutoInline<PlainSharedBuffer<149983746>> member_c8; char padding_d0[8]; AutoInline<PlainSharedBuffer<149983745>> member_d8; virtual void Key(); ~MoveIconInWorldMapAction(); };
MoveIconInWorldMapAction::~MoveIconInWorldMapAction() {  }
}
struct Buffer153320961 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer153320962 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Base9237e0 { virtual ~Base9237e0(); char padding[224]; };
namespace SPTG { 
struct BattleRoyalModeAction : Base9237e0 { Auto<Buffer153320962> member_e8; char padding_f8[24]; Auto<Buffer153320961> member_110; virtual void Key(); ~BattleRoyalModeAction(); };
BattleRoyalModeAction::~BattleRoyalModeAction() {  }
}
struct Buffer153380609 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer153380610 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Base924670 { virtual ~Base924670(); char padding[192]; };
namespace SPTG { 
struct ArenaModeAction : Base924670 { Auto<Buffer153380610> member_c8; char padding_d8[24]; Auto<Buffer153380609> member_f0; virtual void Key(); ~ArenaModeAction(); };
ArenaModeAction::~ArenaModeAction() {  }
}
struct Buffer154256129 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Buffer154256130 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Base931c30 { virtual ~Base931c30(); char padding[120]; };
namespace SPTG { 
struct VolumeMonitor : Base931c30 { Auto<Buffer154256130> member_80; char padding_90[24]; Auto<Buffer154256129> member_a8; virtual void Key(); ~VolumeMonitor(); };
VolumeMonitor::~VolumeMonitor() {  }
}
struct Base9c5eb0 { virtual ~Base9c5eb0(); char padding[128]; };
namespace SPTG { 
struct InteractiveEffet : Base9c5eb0 { PlainFunction<163965697> member_88; virtual void Key(); ~InteractiveEffet(); };
InteractiveEffet::~InteractiveEffet() { member_88.Destroy(); }
}
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
struct Buffer188808449 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Baseb40fd0 { virtual ~Baseb40fd0(); char padding[72]; };
struct Levelb40fd0_2 : Baseb40fd0 { Member<188808451> member_50; virtual void Key2(); DT_INLINE ~Levelb40fd0_2() {} };
struct Levelb40fd0_1 : Levelb40fd0_2 { char padding_51[47]; Member<188808450> member_80; virtual void Key1(); DT_INLINE ~Levelb40fd0_1() {} };
namespace Onyx { namespace Graphics { 
struct SkinnedMorph : Levelb40fd0_1 { char padding_81[63]; Auto<Buffer188808449> member_c0; virtual void Key(); ~SkinnedMorph(); };
SkinnedMorph::~SkinnedMorph() {  }
}}
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
struct Buffer195579393 { uint64_t w0; void* w8; __attribute__((always_inline)) void Destroy() { w0 = 0; if (w8) FreeObject(w8); } };
struct Baseba84e0 { virtual ~Baseba84e0(); char padding[208]; };
namespace Onyx { namespace Behavior { 
struct StateMachine : Baseba84e0 { AutoInline<PlainPointerMember<195579394>> member_d8; char padding_e0[56]; Auto<Buffer195579393> member_118; virtual void Key(); ~StateMachine(); };
StateMachine::~StateMachine() {  }
}}
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
struct Basebf1550 { virtual ~Basebf1550(); char padding[80]; };

struct Damper : Basebf1550 { PlainFunction<200365313> member_58; virtual void Key(); ~Damper(); };
Damper::~Damper() { member_58.Destroy(); }

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
struct Basec82590 { virtual ~Basec82590(); char padding[112]; };
namespace Onyx { 
struct SpawnerPositionner : Basec82590 { PlainFunction<209869057> member_78; virtual void Key(); ~SpawnerPositionner(); };
SpawnerPositionner::~SpawnerPositionner() { member_78.Destroy(); }
}
struct Basec82b20 { virtual ~Basec82b20(); char padding[72]; };
struct Levelc82b20_1 : Basec82b20 { Member<209891842> member_50; virtual void Key1(); DT_INLINE ~Levelc82b20_1() {} };
namespace Onyx { 
struct ProximitySpawnPointLocker : Levelc82b20_1 { char padding_51[55]; PlainFunction<209891841> member_88; virtual void Key(); ~ProximitySpawnPointLocker(); };
ProximitySpawnPointLocker::~ProximitySpawnPointLocker() { member_88.Destroy(); }
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
