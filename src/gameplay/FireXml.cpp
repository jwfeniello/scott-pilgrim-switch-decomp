// Fire's XML objects (6XMLDom, 7XMLDoms, 7XMLNode, 6XMLDoc) and the pointer array they use.
#include "FireText.h"

// Item kinds of FirePtrArray whose deleting destructor is vtable slot 1 (provisional).
struct FireArrayItem {
    virtual ~FireArrayItem();
};
// Item kind of FirePtrArray whose deleting destructor is vtable slot 5 (provisional; ScriptObject's destructors sit
// in slots 4 and 5).
struct FireArrayScriptItem {
    virtual void Slot0();
    virtual void Slot1();
    virtual void Slot2();
    virtual void Slot3();
    virtual ~FireArrayScriptItem();
};

// Growable array of pointers that may own its items (provisional name; kind 1/2 items are FireArrayItem, kind 3
// items FireArrayScriptItem).
struct FirePtrArray {
    unsigned count;     // 0x0
    unsigned capacity;  // 0x4
    void** data;        // 0x8
    int kind;           // 0x10
    bool owns;          // 0x14
    PlatformPlayer* player;  // 0x18: its core's heap38 backs the storage (provisional)

    ~FirePtrArray() { Clear(); }
    void Clear();
    // Deletes item index when the array owns its items (provisional; inlined into Clear and RemoveAt).
    void DeleteItem(int index) {
        if (owns) {
            switch (kind) {
            case 1:
                if (data[index]) delete (FireArrayItem*)data[index];
                data[index] = 0;
                break;
            case 2:
                if (data[index]) delete (FireArrayItem*)data[index];
                data[index] = 0;
                break;
            case 3:
                if (data[index]) delete (FireArrayScriptItem*)data[index];
                data[index] = 0;
                break;
            }
        }
    }
    void RemoveAt(unsigned index);
};

// 0xf6ffd0: deletes every owned item, then frees the storage.
void FirePtrArray::Clear() {
    for (unsigned i = 0; i < count; i++) DeleteItem(i);
    if (data) {
        FireFree(data);
        data = 0;
    }
    count = 0;
    capacity = 0;
}

// 0xf70080: deletes item index (when owned) and closes the gap.
void FirePtrArray::RemoveAt(unsigned index) {
    if (index >= count || !capacity || !data) return;
    DeleteItem(index);
    for (unsigned i = index + 1; i < count; i++) data[i - 1] = data[i];
    count--;
}

// Object reached from an XMLDom item (provisional): its +0x28 node keeps a back pointer at +0x30.
struct FireXmlTarget {
    char pad0[0x28];
    class XMLNode* link28;  // 0x28 (provisional)
};
struct FireXmlDomItem {
    char pad0[0x8];
    FireXmlTarget* target8;  // 0x8 (provisional)
};

// 7XMLNode, vtable 0x18ea710: reference-counted XML node.
class XMLNode {
public:
    virtual ~XMLNode();  // slots 0/1: 0xf70680 / 0xf708f0

    static void operator delete(void* p) { FireFree(p); }

    bool VisitTree();  // 0xf6fa60
    bool Visit();      // 0xf6fab0 (provisional name)
    void SetValue(const char* s);

    XMLNode* next;     // 0x8 (provisional)
    char pad10[0x18 - 0x10];
    void* value18;     // 0x18 (provisional)
    XMLNode* firstChild;  // 0x20 (provisional)
    char pad28[0x2a - 0x28];
    unsigned char state2a;   // 0x2a (provisional)
    char pad2b[0x30 - 0x2b];
    class XMLDom* dom;    // 0x30: the XMLDom holding this node's item (provisional)
    PlatformPlayer* player;  // 0x38 (provisional)
    char pad40[0x50 - 0x40];
    FireString* value;       // 0x50 (provisional)
    char pad58[0x78 - 0x58];
    void* item78;         // 0x78: this node's item (provisional)
    int refCount;  // 0x80 (provisional)
    char pad84[0x98 - 0x84];
    struct FireXmlBlob* blob;  // 0x98 (provisional)
};

// 0xf6fa60: visits the children's subtrees first, then the node; stops at the first failure (provisional meaning).
bool XMLNode::VisitTree() {
    for (XMLNode* c = firstChild; c; c = c->next) {
        if (!c->VisitTree()) return false;
    }
    return Visit();
}

// Shared buffer of an XMLNode (provisional): freed with the last reference.
struct FireXmlBlob {
    ~FireXmlBlob() {
        if (buffer) {
            FireFree(buffer);
            buffer = 0;
        }
    }
    static void operator delete(void* p) { FireFree(p); }

    char pad0[0x8];
    void* buffer;   // 0x8
    char pad10[0x14 - 0x10];
    int refCount;   // 0x14
};

// 0xf6eee0: sets the node's text value (creating the string on first use) and drops the shared buffer.
void XMLNode::SetValue(const char* s) {
    FireString* v = value;
    state2a = 0;
    if (!v) {
        FirePlayerCore* core = player->core;
        FirePlayerContext* context = core->context;
        v = new (FireAlloc(core->heap38, 0, sizeof(FireString), 0, 0)) FireString(context);
        value = v;
        if (!v) return;
    }
    if (blob) {
        if (--blob->refCount == 0) delete blob;
        blob = 0;
    }
    if (s) value->Set(s);
    else value->Clear();
    state2a = 2;
}

// 6XMLDom, vtable 0x18ea6b0.
class XMLDom {
public:
    virtual ~XMLDom();  // slots 0/1: 0xf701b0 / 0xf70260

    bool Finish();
    void AddTree(XMLNode* node);

    static void operator delete(void* p) { FireFree(p); }

    // Drops the document reference (provisional name; its own nothrow scope gives the delete a plain terminate pad).
    void ReleaseDoc() noexcept {
        if (doc) {
            if (--doc->refCount == 0) delete doc;
            doc = 0;
        }
    }

    FirePtrArray items;  // 0x8 (provisional name)
    XMLNode* doc;  // 0x28 (provisional name)
};

// 0xf701b0 (XMLDom slot 0): drops the document, clears the items' back pointers, then empties the item array.
XMLDom::~XMLDom() {
    ReleaseDoc();
    for (unsigned long i = 0, n = items.count; i < n; i++) {
        FireXmlTarget* t = ((FireXmlDomItem*)items.data[i])->target8;
        if (t && t->link28) t->link28->dom = 0;
    }
    items.Clear();
}

// 0xf70280: visits every item's node (stopping at a failure), then clears the back pointers, empties the items and
// drops the document (provisional name and meaning).
bool XMLDom::Finish() {
    for (unsigned long i = 0; i < items.count; i++) {
        FireXmlDomItem* item = items.capacity && items.data ? (FireXmlDomItem*)items.data[i] : 0;
        if (item && item->target8 && item->target8->link28 && !item->target8->link28->Visit()) return false;
    }
    for (unsigned long i = 0, n = items.count; i < n; i++) {
        FireXmlTarget* t = ((FireXmlDomItem*)items.data[i])->target8;
        if (t && t->link28) t->link28->dom = 0;
    }
    items.Clear();
    if (doc) {
        if (--doc->refCount == 0) delete doc;
        doc = 0;
    }
    return true;
}

// 7XMLDoms, vtable 0x18ea6e0: two pointer arrays (destructor 0xf704d0 empties both).
class XMLDoms {
public:
    virtual ~XMLDoms();

    void Add(XMLNode* doc);

    FirePtrArray array8;     // 0x8 (provisional name)
    FirePtrArray docs;       // 0x28 (provisional name)
};

// 0xf70540: adds doc once (counting a reference), growing the array by 100 entries at a time.
void XMLDoms::Add(XMLNode* doc) {
    if (!doc) return;
    unsigned n = docs.count;
    for (unsigned i = 0; i < n; i++) {
        if (docs.data[i] == doc) return;
    }
    doc->value18 = 0;
    doc->refCount++;
    if (n + 1 > docs.capacity) {
        docs.capacity += 100;
        void** p = (void**)FireAlloc(docs.player->core->heap38, 0, (unsigned long)docs.capacity * 8, 0, 0);
        if (p) {
            for (unsigned i = 0; i < docs.count; i++) p[i] = docs.data[i];
        }
        FireFree(docs.data);
        docs.data = p;
    }
    if (!docs.data) {
        docs.count = 0;
        docs.capacity = 0;
        return;
    }
    docs.data[docs.count++] = doc;
}

// 0xf70360: moves the items of node's subtree into this XMLDom (children first), growing by 100 entries at a time.
void XMLDom::AddTree(XMLNode* node) {
    if (!node) return;
    for (XMLNode* c = node->firstChild; c; c = c->next) AddTree(c);
    if (void* item = node->item78) {
        if (XMLDom* old = node->dom) {
            for (unsigned i = 0; i < old->items.count; i++) {
                if (old->items.data[i] == item) {
                    old->items.RemoveAt(i);
                    break;
                }
            }
        }
        if (items.count + 1 > items.capacity) {
            items.capacity += 100;
            void** p = (void**)FireAlloc(items.player->core->heap38, 0, (unsigned long)items.capacity * 8, 0, 0);
            if (p) {
                for (unsigned i = 0; i < items.count; i++) p[i] = items.data[i];
            }
            FireFree(items.data);
            items.data = p;
        }
        if (items.data) {
            items.data[items.count++] = item;
        } else {
            items.count = 0;
            items.capacity = 0;
        }
    }
    node->dom = this;
}
