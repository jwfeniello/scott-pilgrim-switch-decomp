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
struct Base726ad0 { virtual ~Base726ad0(); char padding[72]; };
struct Level726ad0_1 : Base726ad0 { Member<119975173> member_50; virtual void Key1(); DT_INLINE ~Level726ad0_1() {} };
namespace Onyx { namespace DLC { 
struct DLCTask : Level726ad0_1 { char padding_51[15]; ListenerOut<119975172> member_60; ListenerOut<119975171> member_78; ListenerOut<119975170> member_90; ListenerOut<119975169> member_a8; virtual void Key(); ~DLCTask(); };
DLCTask::~DLCTask() {  }
}}
struct Base72b740 { virtual ~Base72b740(); char padding[256]; };
namespace Onyx { namespace DLC { 
struct QueryContent : Base72b740 { ListenerInline<120288259> member_108; ListenerOut<120288258> member_120; char padding_138[8]; Auto<PlainFunction<120288257>> member_140; virtual void Key(); ~QueryContent(); };
QueryContent::~QueryContent() {  }
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
struct Base78e5b0 { virtual ~Base78e5b0(); char padding[72]; };
struct Level78e5b0_1 : Base78e5b0 { Member<126769922> member_50; virtual void Key1(); DT_INLINE ~Level78e5b0_1() {} };
namespace SPTG { 
struct CharacterIcon : Level78e5b0_1 { char padding_51[319]; ListenerOut<126769921> member_190; virtual void Key(); ~CharacterIcon(); };
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
struct StatisticsNotifier : Level79b7e0_1 { char padding_51[15]; ListenerOut<127630849> member_60; virtual void Key(); ~StatisticsNotifier(); };
StatisticsNotifier::~StatisticsNotifier() {  }
}
struct Base7a43f0 { virtual ~Base7a43f0(); char padding[88]; };
namespace SPTG { 
struct SPTGSavegame : Base7a43f0 { ListenerOut<128204548> member_60; ListenerOut<128204547> member_78; ListenerOut<128204546> member_90; ListenerOut<128204545> member_a8; virtual void Key(); ~SPTGSavegame(); };
SPTGSavegame::~SPTGSavegame() {  }
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
struct Base824440 { virtual ~Base824440(); char padding[688]; };
namespace SPTG { 
struct PublisherScreen : Base824440 { ListenerInline<136594434> member_2b8; ListenerInline<136594433> member_2d0; virtual void Key(); ~PublisherScreen(); };
PublisherScreen::~PublisherScreen() {  }
}
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
struct LevelSecretManager : Level883620_1 { char padding_59[15]; ListenerOut<142828034> member_68; Member<142828033> member_80; virtual void Key(); ~LevelSecretManager(); };
LevelSecretManager::~LevelSecretManager() {  }
}
struct Base886700 { virtual ~Base886700(); char padding[160]; };
namespace SPTG { 
struct CameraTrigger : Base886700 { ListenerInline<143028226> member_a8; ListenerInline<143028225> member_c0; virtual void Key(); ~CameraTrigger(); };
CameraTrigger::~CameraTrigger() {  }
}
struct Base88e7e0 { virtual ~Base88e7e0(); char padding[72]; };
struct Level88e7e0_1 : Base88e7e0 { Member<143556098> member_50; virtual void Key1(); DT_INLINE ~Level88e7e0_1() {} };
namespace SPTG { 
struct CheckPoint : Level88e7e0_1 { char padding_51[15]; ListenerOut<143556097> member_60; virtual void Key(); ~CheckPoint(); };
CheckPoint::~CheckPoint() {  }
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
struct Base908b80 { virtual ~Base908b80(); char padding[160]; };
namespace SPTG { 
struct CheckLevelUnlokcedAction : Base908b80 { ListenerInline<151566338> member_a8; ListenerInline<151566337> member_c0; virtual void Key(); ~CheckLevelUnlokcedAction(); };
CheckLevelUnlokcedAction::~CheckLevelUnlokcedAction() {  }
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
struct Base934050 { virtual ~Base934050(); char padding[80]; };
namespace SPTG { 
struct GamePauseMonitor : Base934050 { ListenerInline<154404098> member_58; ListenerInline<154404097> member_70; virtual void Key(); ~GamePauseMonitor(); };
GamePauseMonitor::~GamePauseMonitor() {  }
}
struct Base937160 { virtual ~Base937160(); char padding[72]; };
struct Level937160_1 : Base937160 { Member<154605058> member_50; virtual void Key1(); DT_INLINE ~Level937160_1() {} };
namespace SPTG { 
struct AudioEventComponent : Level937160_1 { char padding_51[15]; ListenerOut<154605057> member_60; virtual void Key(); ~AudioEventComponent(); };
AudioEventComponent::~AudioEventComponent() {  }
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
struct Basea30740 { virtual ~Basea30740(); char padding[3392]; };
struct Levela30740_1 : Basea30740 { Member<170947588> member_d48; virtual void Key1(); DT_INLINE ~Levela30740_1() {} };
namespace SPTG { 
struct SuperFightingRobotAI : Levela30740_1 { char padding_d49[63]; ListenerOut<170947587> member_d88; ListenerInline<170947586> member_da0; ListenerInline<170947585> member_db8; virtual void Key(); ~SuperFightingRobotAI(); };
SuperFightingRobotAI::~SuperFightingRobotAI() {  }
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

struct Baseaf4310 { virtual ~Baseaf4310(); char padding[144]; };
namespace Onyx { 
struct AnimaticInstance : Baseaf4310 { ListenerOut<183775494> member_98; ListenerOut<183775493> member_b0; ListenerOut<183775492> member_c8; ListenerOut<183775491> member_e0; ListenerOut<183775490> member_f8; Member<183775489> member_110; virtual void Key(); ~AnimaticInstance(); };
AnimaticInstance::~AnimaticInstance() {  }
}
struct Buffer190738434 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Baseb5e700 { virtual ~Baseb5e700(); char padding[96]; };
struct Levelb5e700_2 : Baseb5e700 { Member<190738435> member_68; virtual void Key2(); DT_INLINE ~Levelb5e700_2() {} };
struct Levelb5e700_1 : Levelb5e700_2 { char padding_69[15]; Auto<Buffer190738434> member_78; virtual void Key1(); DT_INLINE ~Levelb5e700_1() {} };
namespace Onyx { 
struct RenderDirectorBase : Levelb5e700_1 { char padding_a0[8]; ListenerOut<190738433> member_a8; virtual void Key(); ~RenderDirectorBase(); };
RenderDirectorBase::~RenderDirectorBase() {  }
}
struct Baseb99bb0 { virtual ~Baseb99bb0(); char padding[80]; };
namespace Onyx { namespace Collision { 
struct Collision2D : Baseb99bb0 { ListenerInline<194624258> member_58; ListenerInline<194624257> member_70; virtual void Key(); ~Collision2D(); };
Collision2D::~Collision2D() {  }
}}
struct Basebabe80 { virtual ~Basebabe80(); char padding[96]; };
struct Levelbabe80_1 : Basebabe80 { ListenerOut<195815426> member_68; virtual void Key1(); DT_INLINE ~Levelbabe80_1() {} };

struct Classbabe80 : Levelbabe80_1 { char padding_80[8]; Member<195815425> member_88; virtual void Key(); ~Classbabe80(); };
Classbabe80::~Classbabe80() {  }

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
struct Basec8c910 { virtual ~Basec8c910(); char padding[120]; };
namespace Onyx { 
struct ScrollingText : Basec8c910 { ListenerOut<210538756> member_80; ListenerOut<210538755> member_98; ListenerOut<210538754> member_b0; char padding_c8[48]; Member<210538753> member_f8; virtual void Key(); ~ScrollingText(); };
ScrollingText::~ScrollingText() {  }
}
struct Basec8e2b0 { virtual ~Basec8e2b0(); char padding[72]; };
struct Levelc8e2b0_1 : Basec8e2b0 { Member<210643714> member_50; virtual void Key1(); DT_INLINE ~Levelc8e2b0_1() {} };
namespace Onyx { 
struct SaveTransform : Levelc8e2b0_1 { char padding_51[15]; ListenerOut<210643713> member_60; virtual void Key(); ~SaveTransform(); };
SaveTransform::~SaveTransform() {  }
}
struct Basec96750 { virtual ~Basec96750(); char padding[80]; };
namespace Onyx { namespace Graphics { 
struct SetAmbientGroup : Basec96750 { ListenerOut<211186947> member_58; ListenerOut<211186946> member_70; ListenerOut<211186945> member_88; virtual void Key(); ~SetAmbientGroup(); };
SetAmbientGroup::~SetAmbientGroup() {  }
}}
struct Buffer211990018 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Baseca2b60 { virtual ~Baseca2b60(); char padding[104]; };
struct Levelca2b60_1 : Baseca2b60 { Auto<Buffer211990018> member_70; virtual void Key1(); DT_INLINE ~Levelca2b60_1() {} };
namespace Onyx { 
struct WaypointLinkGraphicsCatalog : Levelca2b60_1 { char padding_98[8]; ListenerOut<211990017> member_a0; virtual void Key(); ~WaypointLinkGraphicsCatalog(); };
WaypointLinkGraphicsCatalog::~WaypointLinkGraphicsCatalog() {  }
}
struct Buffer213222146 { uint64_t w0; uint64_t w8; uint64_t w10; uint64_t w18; void* w20; __attribute__((always_inline)) void Destroy() { w10 = 0; if (w20) FreeObject(w20); w20 = 0; w8 = 0; w10 = 0; } };
struct Basecb5830 { virtual ~Basecb5830(); char padding[104]; };
struct Levelcb5830_1 : Basecb5830 { Auto<Buffer213222146> member_70; virtual void Key1(); DT_INLINE ~Levelcb5830_1() {} };
namespace Onyx { 
struct DirectionalArrowCatalog : Levelcb5830_1 { char padding_98[8]; ListenerOut<213222145> member_a0; virtual void Key(); ~DirectionalArrowCatalog(); };
DirectionalArrowCatalog::~DirectionalArrowCatalog() {  }
}
struct Basecd12d0 { virtual ~Basecd12d0(); char padding[72]; };
struct Levelcd12d0_1 : Basecd12d0 { Member<215035138> member_50; virtual void Key1(); DT_INLINE ~Levelcd12d0_1() {} };
namespace Onyx { 
struct CollisionWalkLocomotor : Levelcd12d0_1 { char padding_51[55]; ListenerOut<215035137> member_88; virtual void Key(); ~CollisionWalkLocomotor(); };
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
struct Basece0070 { virtual ~Basece0070(); char padding[72]; };
struct Levelce0070_1 : Basece0070 { Member<216008450> member_50; virtual void Key1(); DT_INLINE ~Levelce0070_1() {} };
namespace Onyx { 
struct CounterToText : Levelce0070_1 { char padding_51[15]; ListenerOut<216008449> member_60; virtual void Key(); ~CounterToText(); };
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
struct BillboardCatalog : Levelcee5a0_1 { char padding_98[8]; ListenerOut<216947201> member_a0; virtual void Key(); ~BillboardCatalog(); };
BillboardCatalog::~BillboardCatalog() {  }
}
