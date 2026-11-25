// Fire's rich text editor (8RichEdit, vtable 0x18ea228) and its members.
#include "FireCore.h"

// RichEdit fields used by its item list (provisional view; offsets from the RichEdit object).
struct FireRichEditItems {
    void RemoveItems(int first, int last);

    // Destroys and frees one item (provisional name): with a player the storage goes back directly.
    void DeleteItem(FireRichEditItem* item) {
        item->~FireRichEditItem();
        if (playera0) FireFree(item);
        else FireRichEditItem::operator delete(item);
    }

    char pad0[0xa0];
    void* playera0;  // 0xa0 (provisional)
    char pada8[0x2c0 - 0xa8];
    FireRichEditItem** items;  // 0x2c0
    int count;                 // 0x2c8
};

// 0xf17d50: deletes items first..last and closes the gap.
// Not yet matched: the original computes the remaining count in 64 bits (ldrsw, sub of n + 1) and does not unroll
// the moving loop; ours works in 32 bits and unrolls it by two.
void FireRichEditItems::RemoveItems(int first, int last) {
    int n = last - first;
    if (n < 0) return;
    for (int i = 0; i <= n; i++) DeleteItem(items[first + i]);
    int newCount = count - (n + 1);
    for (int i = first; i < newCount; i++) items[i] = items[i + n + 1];
    count = newCount;
}

// 0xf24f40: frees the four caches (two plain chains, two node chains) and the texture.
void RichEdit::ClearCaches() {
    while (FireChainLink* l = linksc8) {
        FireChainLink* next = l->next;
        FireFree(l);
        linksc8 = next;
    }
    while (FireChainNode* n = nodesd0) {
        FireChainNode* next = n->next;
        n->~FireChainNode();
        FireFree(n);
        nodesd0 = next;
    }
    while (FireChainLink* l = linksd8) {
        FireChainLink* next = l->next;
        FireFree(l);
        linksd8 = next;
    }
    while (FireChainNode* n = nodese0) {
        FireChainNode* next = n->next;
        n->~FireChainNode();
        FireFree(n);
        nodese0 = next;
    }
    ReleaseTexture();
}
