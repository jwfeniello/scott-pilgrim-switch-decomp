// Working names and touched-field ABI views; original complete declarations remain unknown.
#include "ReferenceReleaseAbi.h"
namespace ComponentSlot {
struct PropertyLookup {uint32_t first,second;};
struct Owner {char unknown[0xe0];void* lookup;};
struct Source {Owner* owner;virtual ~Source();virtual SingleRelease::Slot Read(const PropertyLookup*);};
template<unsigned Key> struct Binding {static PropertyLookup* Lookup(void*,uint32_t);static void Assign(void*,const SingleRelease::Slot*);};
}
template<unsigned Key,uint32_t Hash> __attribute__((noinline)) void AssignComponentSlot(void* self,ComponentSlot::Source* source) {
    ComponentSlot::PropertyLookup* info=ComponentSlot::Binding<Key>::Lookup(source->owner->lookup,Hash);
    if(info->second && info->first) {
        SingleRelease::Slot value=source->Read(info);
        ComponentSlot::Binding<Key>::Assign(self,&value);
    }
}
#define COMPONENT_SLOT_ASSIGN(Key,Hash) template void AssignComponentSlot<Key,Hash>(void*,ComponentSlot::Source*);
#include "component_slot_assign_instances.inc"
#undef COMPONENT_SLOT_ASSIGN
