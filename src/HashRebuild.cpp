// Working names and touched-field ABI views; original complete declarations remain unknown.
#include <stdint.h>
using Size=__SIZE_TYPE__;
struct HashNode { HashNode* next; Size hash; uint32_t value; };
struct HashRebuildView { HashNode** buckets; Size bucket_count; HashNode first; };
template<unsigned Key> struct HashRebuildBinding {
    static char allocation_context;
    static void* Allocate(Size,Size,uint32_t,void*,const char*,uint32_t);
    static void Free(void*,const char*,uint32_t);
};
static __attribute__((always_inline)) Size ConstrainHash(Size h,Size n) { return !(n&(n-1))?h&(n-1):(h<n?h:h%n); }
template<unsigned Key,uint32_t Flags> __attribute__((noinline)) void RebuildHashBuckets(HashRebuildView* self,Size n) {
    if(n==0) { HashNode** old=self->buckets; self->buckets=nullptr; if(old)HashRebuildBinding<Key>::Free(old,"",0);self->bucket_count=0;return;}
    HashNode** fresh=n>0?static_cast<HashNode**>(HashRebuildBinding<Key>::Allocate(n*8,8,Flags,&HashRebuildBinding<Key>::allocation_context,"",0)):nullptr;
    HashNode** old=self->buckets;self->buckets=fresh;
    if(old)HashRebuildBinding<Key>::Free(old,"",0);
    self->bucket_count=n;
    if(n>0) {
        for(Size i=0;i<n;++i)self->buckets[i]=nullptr;
        HashNode* pp=&self->first;HashNode* cp=pp->next;
        if(cp) {
            Size ch=ConstrainHash(cp->hash,n);
            self->buckets[ch]=pp;Size ph=ch;
            for(pp=cp,cp=cp->next;cp;cp=pp->next) {
                ch=ConstrainHash(cp->hash,n);
                if(ch==ph)pp=cp;
                else if(!self->buckets[ch]) {self->buckets[ch]=pp;pp=cp;ph=ch;}
                else {
                    HashNode* np=cp;
                    for(;np->next && cp->value==np->next->value;np=np->next) {}
                    pp->next=np->next;
                    np->next=self->buckets[ch]->next;
                    self->buckets[ch]->next=cp;
                }
            }
        }
    }
}
#define HASH_REBUILD(Key,Flags) template void RebuildHashBuckets<Key,Flags>(HashRebuildView*,Size);
#include "hash_rebuild_instances.inc"
#undef HASH_REBUILD
