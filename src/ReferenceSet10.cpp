// Reconstructed reference ownership set; original complete class names remain unknown.
#include "ReferenceReleaseAbi.h"
namespace SingleRelease {
template<unsigned Key> struct ReleaseSet10 { Slot slot0; Slot slot1; Slot slot2; Slot slot3; Slot slot4; Slot slot5; Slot slot6; Slot slot7; Slot slot8; Slot slot9; ~ReleaseSet10() noexcept {} };
}
#define REFERENCE_SET_10(Key) template SingleRelease::ReleaseSet10<Key>::~ReleaseSet10();
#include "reference_set_10_instances.inc"
#undef REFERENCE_SET_10
