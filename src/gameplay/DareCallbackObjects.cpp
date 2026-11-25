// Dare's callback objects (RTTI names: Dare::CDataSource and the *CallbackObject classes derived from it): their
// destructors. CDataSource keeps the clients that listen to it in a tree and tells each one when it goes away. Member
// names are provisional.
#include "DareCore.h"
#include <stdint.h>

namespace Dare {

struct CDataSource;

// What a CDataSource's tree holds: something told (slot 0) when the source is destroyed.
struct CDataSourceClient {
    virtual void SourceDestroyed(CDataSource* source);   // slot 0
};

// A node of the clients' tree (+0 left, +8 right, +0x10 parent).
struct CDataSourceNode {
    CDataSourceNode* left;     // +0x0
    CDataSourceNode* right;    // +0x8
    CDataSourceNode* parent;   // +0x10
    uint64_t key;              // +0x18
    CDataSourceClient* client; // +0x20
};
// Frees a subtree (0xd14310).
void DestroyCDataSourceTree(CDataSourceNode* node);
// 0xd14370: the same, as a call that cannot throw.
inline void FreeCDataSourceTree(CDataSourceNode* root) noexcept { DestroyCDataSourceTree(root); }

// The tree's header, laid out like a node: leftmost, rightmost, root.
struct CDataSourceClients {
    CDataSourceNode* leftmost;   // +0x0
    CDataSourceNode* rightmost;  // +0x8
    CDataSourceNode* root;       // +0x10
    __attribute__((always_inline)) ~CDataSourceClients() { FreeCDataSourceTree(root); }
    CDataSourceNode* End() { return reinterpret_cast<CDataSourceNode*>(this); }
    // The in-order successor (the header comes after the rightmost node).
    static CDataSourceNode* Next(CDataSourceNode* node) {
        if (!node->parent) return node;
        if (node->right) {
            node = node->right;
            while (CDataSourceNode* left = node->left) node = left;
            return node;
        }
        CDataSourceNode* parent = node->parent;
        if (parent->right == node) {
            do {
                node = parent;
                parent = parent->parent;
            } while (node == parent->right);
        }
        if (node->right != parent) node = parent;
        return node;
    }
};

struct CDataSource {
    virtual ~CDataSource();
    virtual void Slot2();
    char padding_8[0x8];
    CDataSourceClients clients;   // +0x10
};

// Slot 0 (0xd14390): tells every client the source is going away. Not yet matched: the walk to the right subtree's
// leftmost node keeps one register fewer here (the original loads the left link into a third register and copies it
// back), and the cleanup path calls the tree's destroyer directly where the original calls 0xd14370 with the root. The
// *CallbackObject destructors (slots 0 and 1, e.g. 0xd5c870/0xd5c940) and their thunks inline this and wait on it.
__attribute__((always_inline)) CDataSource::~CDataSource() {
    for (CDataSourceNode* node = clients.leftmost; node != clients.End(); node = CDataSourceClients::Next(node))
        node->client->SourceDestroyed(this);
}

}  // namespace Dare
