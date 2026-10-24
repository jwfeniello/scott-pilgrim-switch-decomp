// Working names and ABI views; complete original declarations remain unknown.
// Circular list destructor returning nodes through the Dare allocator.
#include <stdint.h>
struct DareAllocator {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual void Free(void* pointer);
};
extern "C" DareAllocator* Dare_Allocator;
extern "C" uint32_t Dare_AllocatorEnabled;
inline void DareFree(void* pointer) { if (pointer && Dare_AllocatorEnabled) { if (DareAllocator* a = Dare_Allocator) a->Free(pointer); } }
template<unsigned Key> struct DareListNode { DareListNode* prev; DareListNode* next; };
template<unsigned Key> struct DareList {
    DareListNode<Key>* prev; DareListNode<Key>* next; uint64_t size;
    ~DareList();
};
template<unsigned Key> DareList<Key>::~DareList() {
    DareListNode<Key>* head = reinterpret_cast<DareListNode<Key>*>(this);
    for (DareListNode<Key>* n = next; n != head;) { DareListNode<Key>* following = n->next; DareFree(n); n = following; }
    prev = head; size = 0; next = head;
}
#define DARE_LIST(Key) template struct DareList<Key>;
