// Working names and touched-field ABI views; original complete declarations remain unknown.
#include "ReferenceReleaseAbi.h"
namespace SingleRelease {
template<unsigned Key> struct LayerRoot {char unknown[0x48];virtual ~LayerRoot();};
template<unsigned Key,unsigned Offset> struct LayerMember {char unknown[Offset-0x50];~LayerMember() noexcept;};
template<unsigned Key,unsigned Offset> struct LayerIntermediate : LayerRoot<Key> {LayerMember<Key,Offset> member;~LayerIntermediate() noexcept {}};
template<unsigned Key,unsigned Offset> struct LayerOwner : LayerIntermediate<Key,Offset> {Slot slot;__attribute__((noinline)) ~LayerOwner() noexcept {}};
}
#define LAYERED_REFERENCE_DESTRUCTOR(Key,Offset) template struct SingleRelease::LayerOwner<Key,Offset>;
#include "layered_reference_destructor_instances.inc"
#undef LAYERED_REFERENCE_DESTRUCTOR
