// Working names and ABI views; complete original declarations remain unknown.
// Recursive binary-tree destroy through the Dare allocator.
#include <stdint.h>
struct DareAllocator {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual void Free(void* pointer);
};
extern "C" DareAllocator* Dare_Allocator;
extern "C" uint32_t Dare_AllocatorEnabled;
inline void DareFree(void* pointer) { if (Dare_AllocatorEnabled) { if (DareAllocator* a = Dare_Allocator) a->Free(pointer); } }
template<unsigned Key> struct DareNode { DareNode* left; DareNode* right; };
template<unsigned Key> __attribute__((noinline)) void DestroyDareTree(DareNode<Key>* node) {
    if (node) {
        DestroyDareTree(node->left);
        DareNode<Key>* right = node->right;
        DareFree(node);
        DestroyDareTree(right);
    }
}
#define DARE_TREE_DESTROY(Key) template void DestroyDareTree<Key>(DareNode<Key>*);
