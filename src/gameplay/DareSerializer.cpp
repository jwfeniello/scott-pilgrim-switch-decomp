// SndGear::BinaryReaderSerializer (RTTI name): its small slots. The slot, member and map names are provisional.
#include <stdint.h>

namespace SndGear {

// A node of the serializer's map from addresses to addresses: a red-black tree whose end node holds the root as its
// parent.
struct AddressMapNode {
    AddressMapNode* children[2];   // left, right
    AddressMapNode* parent;        // +0x10 (the root, in the end node)
    int64_t color;                 // +0x18
    const void* key;               // +0x20
    void* value;                   // +0x28
};
struct AddressMap {
    AddressMapNode end;            // only its first 0x18 bytes are used
    AddressMapNode* End() { return &end; }
    // The first node whose key isn't below `key`, or null.
    AddressMapNode* LowerBound(const void* key) {
        AddressMapNode* result = nullptr;
        for (AddressMapNode* node = end.parent; node; node = node->children[node->key < key])
            if (!(node->key < key)) result = node;
        return result;
    }
    AddressMapNode* Find(const void* key) {
        AddressMapNode* node = LowerBound(key);
        return node && !(key < node->key) ? node : End();
    }
};

struct BinaryReaderSerializer {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9();
    virtual void Slot10(); virtual void Slot11(); virtual void Slot12(); virtual void Slot13(); virtual void Slot14();
    virtual void Slot15(); virtual void Slot16(); virtual void Slot17(); virtual void Slot18(); virtual void Slot19();
    virtual void Slot20(); virtual void Slot21(); virtual void Slot22(); virtual void Slot23(); virtual void Slot24();
    virtual void Slot25(); virtual void Slot26(); virtual void Slot27(); virtual void Slot28(); virtual void Slot29();
    virtual void Slot30();
    virtual void Slot31(const void* address, const void* other);   // slot 31
    virtual void* Lookup(const void* address);                     // slot 32
    virtual bool Contains(const void* address);                    // slot 33
    virtual void Slot34(const void* address);                      // slot 34
    int32_t mode;                  // +0x8
    char padding_c[0xc];
    AddressMap addresses;          // +0x18
};

// Slot 32 (0xdbced0): what `address` maps to, or null. Not matched yet: the original tests the lower bound for null
// alone, then its key and the end together.
void* BinaryReaderSerializer::Lookup(const void* address) {
    AddressMapNode* node = addresses.Find(address);
    return node != addresses.End() ? node->value : nullptr;
}

// Slot 33 (0xdbcf30).
bool BinaryReaderSerializer::Contains(const void* address) { return addresses.Find(address) != addresses.End(); }

// Slot 34 (0xdbcf80): hands an address not seen yet to slot 31, with itself as the second argument when +0x8 is 0.
void BinaryReaderSerializer::Slot34(const void* address) {
    if (Contains(address)) return;
    if (mode)
        Slot31(address, nullptr);
    else
        Slot31(address, address);
}

}  // namespace SndGear
