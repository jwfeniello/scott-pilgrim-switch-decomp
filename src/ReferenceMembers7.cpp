// Field offsets describe touched ownership slots, not recovered complete classes.
#include "ReferenceReleaseAbi.h"
namespace SingleRelease {
template<unsigned Key,unsigned Offset> struct ReleaseBase { char unknown[Offset-8]; virtual ~ReleaseBase(); };
template<unsigned Key,unsigned Offset0,unsigned Offset1,unsigned Offset2,unsigned Offset3,unsigned Offset4,unsigned Offset5,unsigned Offset6> struct ReleaseMembers7 : ReleaseBase<Key,Offset6> {
    Slot slot6;
    char gap5[Offset5-Offset6-8];
    Slot slot5;
    char gap4[Offset4-Offset5-8];
    Slot slot4;
    char gap3[Offset3-Offset4-8];
    Slot slot3;
    char gap2[Offset2-Offset3-8];
    Slot slot2;
    char gap1[Offset1-Offset2-8];
    Slot slot1;
    char gap0[Offset0-Offset1-8];
    Slot slot0;
    ~ReleaseMembers7() noexcept {}
};
}
#define REFERENCE_MEMBERS_7(Key,Offset0,Offset1,Offset2,Offset3,Offset4,Offset5,Offset6) template SingleRelease::ReleaseMembers7<Key,Offset0,Offset1,Offset2,Offset3,Offset4,Offset5,Offset6>::~ReleaseMembers7();
#include "reference_members_7_instances.inc"
#undef REFERENCE_MEMBERS_7
