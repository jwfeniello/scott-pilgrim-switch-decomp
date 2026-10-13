// Reconstructed callback-removal family; original method names are unknown.
// The callback host's member signature is backed by the original wrapper RTTI.
// Addresses are supplied only through checked ELF relocations.
#include <stdint.h>
#include <stddef.h>

struct EventBase;
struct CallbackHost { void* unused; void* cache; void First(const EventBase&); void Second(const EventBase&); };
using Member = void (CallbackHost::*)(const EventBase&);
struct Callable { virtual ~Callable(); virtual void Slot2(); virtual bool Matches(Callable*); };
extern "C" void ListenerInvoke();
struct CallbackRecord : Callable {
    void (*invoke)(); CallbackHost* owner; Member member;
    CallbackRecord(CallbackHost* h,Member m) { owner=h; member=m; invoke=ListenerInvoke; }
    virtual ~CallbackRecord();
};
inline void* operator new(size_t,void* address) noexcept {return address;}
struct Allocator { virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Free(void*); };
struct Allocators { char padding[0x370]; Allocator* values[256]; };
struct Node { void* unknown; void* key; Callable* predicate; char padding[0x10]; Node* next; };
struct Map { void* mutex; char padding[0x20]; Node* free_head; Node* buckets[4003]; };
static_assert(sizeof(CallbackRecord)==40 && offsetof(Node,next)==0x28 && offsetof(Map,buckets)==0x30, "original layouts");
extern "C" {
extern unsigned char* ListenerContext;
extern Allocators* ListenerAllocators;
extern Map* ListenerTracking;
void ListenerInvoke();
void* ListenerAllocate(void*,size_t);
uint8_t ListenerAllocatorIndex(Allocators*,void*);
void ListenerLock(void*) noexcept;
void ListenerUnlock(void*) noexcept;
}
struct Lock {
    Map* map;
    __attribute__((always_inline)) Lock(Map* m):map(m) { ListenerLock(m->mutex); }
    __attribute__((always_inline)) ~Lock() noexcept(false) { if(map) ListenerUnlock(map->mutex); }
};
struct Owner {
    CallbackRecord* callback;
    __attribute__((always_inline)) ~Owner() {
        if(callback) {
            Allocators* manager=ListenerAllocators;
            Allocator* allocator=manager->values[ListenerAllocatorIndex(manager,callback)];
            static_cast<Callable*>(callback)->~Callable();
            allocator->Free(callback);
        }
    }
};
static __attribute__((always_inline)) inline void remove(Map* map, Callable* match) {
    Node** buckets=reinterpret_cast<Node**>(reinterpret_cast<uintptr_t>(map)+offsetof(Map,buckets));
    Lock lock(map);
    for(size_t i=0;i<4003;++i) {
        Node** bucket=&buckets[i];
        Node* previous=nullptr;
        Node* node=*bucket;
        while(node) {
            bool erase=node->predicate->Matches(match);
            Node* next=node->next;
            if(erase) {
                node->next=map->free_head;
                map->free_head=node;
                *(previous ? &previous->next : bucket)=next;
            } else previous=node;
            node=next;
        }
    }
}
static __attribute__((always_inline)) inline void unregister_callback(CallbackHost* host,Member member) {
    Map* map=ListenerTracking;
    unsigned char* pool=ListenerContext+0x50;
    CallbackRecord* callback=new(ListenerAllocate(pool,sizeof(CallbackRecord))) CallbackRecord(host,member);
    Owner owner{callback};
    remove(map,static_cast<Callable*>(callback));
}
extern "C" void InitializeTrackedReference(CallbackHost* host) {
    host->cache=nullptr;
    unregister_callback(host,&CallbackHost::First);
    unregister_callback(host,&CallbackHost::Second);
}
