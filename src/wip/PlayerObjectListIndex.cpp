// Reconstructed player object-list search. Original class names and complete declarations are provisional.
#include <stdint.h>
#include <stddef.h>
namespace PlayerObjectLookup {
struct Object {virtual ~Object();virtual void EnsureReady();};
struct Handle {void* unknown;Object* object;};
struct Item {unsigned char unknown[0x80];Handle* cached;};
struct Allocator {
    virtual void Slot0();virtual void Slot1();virtual void Slot2();
    virtual void Slot3();virtual void Slot4();virtual void Slot5();
    virtual void Free(void*);
};
struct Manager {unsigned char unknown[0x370];Allocator* allocators[256];};
extern "C" {
extern void* PlayerListTypeInfo;
extern void* PlayerListResolver;
extern Manager* PlayerListAllocators;
Item* PlayerGetLevelItem(void*) noexcept;
void PlayerResolve(void*,uint32_t,Handle**);
void PlayerCollectObjects(Object*,void*);
uint8_t PlayerAllocatorIndex(Manager*,void*);
}
struct List {
    void* vtable;
    uint64_t unknown8;
    uint64_t count;
    uint64_t unknown24;
    Object** items;
    __attribute__((always_inline)) List():vtable(static_cast<char*>(PlayerListTypeInfo)+0x50),unknown8(0),count(0),items(nullptr) {}
    __attribute__((always_inline)) ~List() {
        count=0;
        Object** owned=items;
        if(owned) {
            Manager* manager=PlayerListAllocators;
            Allocator* allocator=manager->allocators[PlayerAllocatorIndex(manager,owned)];
            allocator->Free(owned);
        }
    }
};
#ifdef LEAF_NEGATIVE_CONTROL
extern "C" void LeafAddedSideEffect();
#define LEAF_CHECK LeafAddedSideEffect();
#else
#define LEAF_CHECK
#endif
extern "C" __attribute__((noinline)) int PlayerObjectListIndex(void* player,Object* target) {
    LEAF_CHECK
    List list;
    Item* item=PlayerGetLevelItem(static_cast<char*>(player)+0x60);
    Handle** cache=&item->cached;
    Handle* handle=*cache;
    if(!handle || !handle->object) {
        PlayerResolve(PlayerListResolver,0x4f08e67a,cache);
        (*cache)->object->EnsureReady();
        handle=*cache;
    }
    PlayerCollectObjects(handle?handle->object:nullptr,&list);
    if(list.count) {size_t n=0;Object** p=list.items,**end=p+list.count;
    do {if(*p==target && *p) return int(n);++p;++n;}while(p!=end);}
    return -1;
}
}
