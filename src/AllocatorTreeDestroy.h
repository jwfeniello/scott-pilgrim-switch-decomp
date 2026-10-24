// Working names and ABI views; complete original declarations remain unknown.
// Recursive binary-tree destroy returning nodes to the allocator manager.
#include <stdint.h>
struct Allocator {
    virtual void Slot0(); virtual void Slot1(); virtual void* Allocate(uint32_t);
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Free(void*);
};
struct AllocatorManager { char padding[0x370]; Allocator* allocators[256]; };
extern "C" AllocatorManager* Accessor_Allocators;
extern "C" uint8_t Accessor_AllocatorIndex(AllocatorManager*, void*);
__attribute__((always_inline)) inline Allocator* AllocatorFor(void* object) {
    AllocatorManager* manager = Accessor_Allocators;
    return manager->allocators[Accessor_AllocatorIndex(manager, object)];
}
template<unsigned Key> struct TreeNode { TreeNode* left; TreeNode* right; };
template<unsigned Key> __attribute__((noinline)) void DestroyTree(TreeNode<Key>* node) {
    if (node) {
        DestroyTree(node->left);
        TreeNode<Key>* right = node->right;
        AllocatorFor(node)->Free(node);
        DestroyTree(right);
    }
}
#define ALLOCATOR_TREE_DESTROY(Key) template void DestroyTree<Key>(TreeNode<Key>*);
