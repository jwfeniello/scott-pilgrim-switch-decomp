// Working names and ABI views; complete original declarations remain unknown.
// Component map lookup by type key that appends the matching active components to a caller vector.
#include <stdint.h>
using Size=__SIZE_TYPE__; using Difference=__PTRDIFF_TYPE__;
struct CollectionObject {
    virtual ~CollectionObject(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual bool Active(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11();
    virtual bool IsType(uint32_t);
};
struct CollectionAllocator {
    virtual void Slot0(); virtual void Slot1(); virtual void* Allocate(uint32_t);
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Free(void*);
};
struct CollectionAllocators { char pad[0x370]; CollectionAllocator* values[256]; };
struct CollectionNode { uint32_t key,pad; char unknown[0x10]; Size count; void* unused; CollectionObject** data; CollectionNode* next; };
struct CollectionMap { char pad[0x498]; uint32_t buckets_count,unused; CollectionNode** buckets; void* unknown; uint32_t type; };
struct CollectionKeys { char pad[0x10]; Size count; const uint32_t* data; };
template<unsigned Key> struct CollectionBinding {
    static uint32_t default_mode;
    static CollectionAllocators* allocators;
    static uint8_t AllocatorIndex(CollectionAllocators*,void*);
};
template<unsigned Key> struct ObjectVector {
    CollectionAllocator* allocator;
    Size capacity,size; void* unknown; void* data;
    __attribute__((always_inline)) void InsertSpace(Size index,Size amount) {
        Size total=index+amount;
        if(capacity < total) {
            Size grown=capacity+capacity/2;
            if(grown<total)grown=total;
            CollectionObject** fresh;
            if(uint32_t(grown)) {
                CollectionAllocator* chosen=allocator;
                CollectionObject** old=static_cast<CollectionObject**>(data);
                fresh=static_cast<CollectionObject**>(chosen->Allocate(uint32_t(grown*8)));
                capacity=grown;
                if(old && fresh) {
                    if(fresh!=old) __builtin_memcpy(fresh,old,index*8);
                    Size tail=size-index;
                    if(tail) __builtin_memmove(fresh+total-tail,old+index,tail*8);
                    if(fresh!=old) {
                        CollectionAllocators* manager=CollectionBinding<Key>::allocators;
                        CollectionAllocator* a=manager->values[CollectionBinding<Key>::AllocatorIndex(manager,old)];
                        a->Free(old);
                    }
                }
            } else { capacity=grown; fresh=nullptr; }
            data=fresh;
        }
    }
    __attribute__((always_inline)) void Push(CollectionObject* object) {
        Size index=size;
        InsertSpace(index,1);
        Size current=size;
        *reinterpret_cast<CollectionObject**>(reinterpret_cast<uintptr_t>(data)+current*8)=object;
        size=current+1;
    }
};
inline __attribute__((always_inline)) CollectionNode* FirstNode(CollectionMap* map) {
    if(!map->buckets)return nullptr;
    for(uint32_t i=0;i<map->buckets_count;i++)if(map->buckets[i])return map->buckets[i];
    return nullptr;
}
inline __attribute__((always_inline)) CollectionNode* NextNode(CollectionMap* map,CollectionNode* node) {
    if(!map->buckets)return nullptr;
    if(node->next)return node->next;
    uint32_t count=map->buckets_count;
    for(uint32_t i=node->key%count+1;i<count;i++)if(map->buckets[i])return map->buckets[i];
    return nullptr;
}

template<unsigned Key,uint32_t Hash> struct ComponentMap : CollectionMap {
    void CollectByKey(uint32_t key,ObjectVector<Key>* out);
};
template<unsigned Key,uint32_t Hash> void ComponentMap<Key,Hash>::CollectByKey(uint32_t key,ObjectVector<Key>* out) {
    if(!buckets)return;
    CollectionNode* node=buckets[key%buckets_count];
    while(node && node->key!=key)node=node->next;
    if(!node)return;
    out->InsertSpace(out->size,node->count);
    Size count=node->count; CollectionObject** begin=node->data;
    if(type==Hash) {
        for(CollectionObject** i=begin,**end=begin+count;i!=end;++i)if((*i)->Active())out->Push(*i);
    } else {
        for(CollectionObject** i=begin,**end=begin+count;i!=end;++i)if((*i)->Active() && *i && (*i)->IsType(Hash))out->Push(*i);
    }
}
#define COMPONENT_MAP_COLLECT_BY_KEY(Key, Hash) template void ComponentMap<Key,Hash>::CollectByKey(uint32_t,ObjectVector<Key>*);
