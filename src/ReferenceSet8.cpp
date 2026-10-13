// Reconstructed reference ownership set; original complete class names remain unknown.
#include "ReferenceReleaseAbi.h"
namespace SingleRelease {
template<unsigned Key> struct ReleaseSet8 { Slot slot0; Slot slot1; Slot slot2; Slot slot3; Slot slot4; Slot slot5; Slot slot6; Slot slot7; ~ReleaseSet8() noexcept {} };
}
#define REFERENCE_SET_8(Key) template SingleRelease::ReleaseSet8<Key>::~ReleaseSet8();
#include "reference_set_8_instances.inc"
#undef REFERENCE_SET_8
