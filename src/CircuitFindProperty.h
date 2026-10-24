// Working names and ABI views; complete original declarations remain unknown.
// Circuit reflection lookup: match a property by flags, type ID and name in the guarded list.
#include <stdint.h>
namespace CircuitProperties {
// Reflection record (see MetadataRegistry.cpp): vtable, next, name, flags.
struct Property {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2();
    virtual uint32_t TypeId();
    Property* next; const char* name; uint32_t flags;
};
struct PropertyRef { void* object; Property* property; uint32_t type; };
template<unsigned Key> struct PropertyList { Property* head; PropertyList() : head(nullptr) {} };
template<unsigned Key> PropertyList<Key>& Properties() { static PropertyList<Key> list; return list; }
__attribute__((always_inline)) inline bool SameName(const char* a, const char* b) {
    if (a == b) return true;
    char x, y;
    do { x = *a; y = *b; if (!(x | y)) return true; ++a; ++b; } while (x == y);
    return false;
}
template<unsigned Key, uint32_t TypeId> struct Publisher {
    bool FindProperty(PropertyRef* out, const char* name, uint32_t mask);
};
template<unsigned Key, uint32_t TypeId> bool Publisher<Key, TypeId>::FindProperty(PropertyRef* out, const char* name, uint32_t mask) {
    out->object = this;
    out->type = TypeId;
    Property* p = Properties<Key>().head;
    if (!p) return false;
    uint32_t type = out->type;
    while (p) {
        if (type && (mask & ~p->flags) == 0 && p->TypeId() == type && SameName(p->name, name)) break;
        p = p->next;
    }
    if (!p) return false;
    out->property = p;
    return true;
}
}
#define CIRCUIT_FIND_PROPERTY(Key, TypeId) template struct CircuitProperties::Publisher<Key, TypeId>;
