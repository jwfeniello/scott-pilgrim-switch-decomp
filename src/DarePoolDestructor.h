// Working names and ABI views; complete original declarations remain unknown.
// Dare::Private::DarePoolBase<T, N, Policy> destructors: return every pooled object to the Dare allocator, then free the pointer array.
#include <stdint.h>
typedef __SIZE_TYPE__ Size;
struct DareAllocator {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual void Free(void* pointer);
};
extern "C" DareAllocator* Dare_Allocator;
extern "C" uint32_t Dare_AllocatorEnabled;
__attribute__((always_inline)) inline void DareFree(void* pointer) { if (Dare_AllocatorEnabled) { if (DareAllocator* a = Dare_Allocator) a->Free(pointer); } }
namespace Dare { namespace Private {
template<unsigned Key> struct PoolObject;
// Dare vector of pooled object pointers.
template<class T> struct DareVector {
    Size capacity; Size size; Size reserved; T* data;
    void Clear() { size = 0; }
    ~DareVector() {
        Clear();
        if (data) DareFree(data);
        data = nullptr; capacity = 0; size = 0;
    }
};
// Dare::Private::DarePoolBase<T, N, Policy>: returns every pooled object, then frees the pointer array.
template<unsigned Key, unsigned VectorOffset> struct DarePoolBase {
    char storage[VectorOffset - 8];
    DareVector<PoolObject<Key>*> objects;
    // Returns every pooled object to the Dare allocator, newest first.
    void ReleaseObjects() {
        PoolObject<Key>** data = objects.data;
        for (PoolObject<Key>** p = data + objects.size; p != data; ) { --p; DareFree(*p); --objects.size; }
    }
    virtual ~DarePoolBase();
};
template<unsigned Key, unsigned VectorOffset> DarePoolBase<Key, VectorOffset>::~DarePoolBase() {
    ReleaseObjects();
}
}}
#define DARE_POOL_DESTRUCTOR(Key, Offset) template struct Dare::Private::DarePoolBase<Key, Offset>;
