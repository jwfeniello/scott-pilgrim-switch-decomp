// Field offsets describe touched ownership slots, not recovered complete classes.
#include "ReferenceReleaseAbi.h"
namespace SingleRelease {
template<unsigned Key,unsigned Offset> struct ReleaseBase { char unknown[Offset-8]; virtual ~ReleaseBase(); };
template<unsigned Key,unsigned Offset0,unsigned Offset1> struct ReleaseMembers2 : ReleaseBase<Key,Offset1> {
    Slot slot1;
    char gap0[Offset0-Offset1-8];
    Slot slot0;
    ~ReleaseMembers2() noexcept {}
};
}
#define REFERENCE_MEMBERS_2(Key,Offset0,Offset1) template SingleRelease::ReleaseMembers2<Key,Offset0,Offset1>::~ReleaseMembers2();
#include "reference_members_2_instances.inc"
#undef REFERENCE_MEMBERS_2
