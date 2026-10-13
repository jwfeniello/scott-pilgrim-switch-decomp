// Field offsets describe touched ownership slots, not recovered complete classes.
#include "ReferenceReleaseAbi.h"
namespace SingleRelease {
template<unsigned Key,unsigned Offset> struct ReleaseBase { char unknown[Offset-8]; virtual ~ReleaseBase(); };
template<unsigned Key,unsigned Offset0,unsigned Offset1,unsigned Offset2,unsigned Offset3,unsigned Offset4,unsigned Offset5,unsigned Offset6,unsigned Offset7,unsigned Offset8,unsigned Offset9,unsigned Offset10> struct ReleaseMembers11 : ReleaseBase<Key,Offset10> {
    Slot slot10;
    char gap9[Offset9-Offset10-8];
    Slot slot9;
    char gap8[Offset8-Offset9-8];
    Slot slot8;
    char gap7[Offset7-Offset8-8];
    Slot slot7;
    char gap6[Offset6-Offset7-8];
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
    ~ReleaseMembers11() noexcept {}
};
}
#define REFERENCE_MEMBERS_11(Key,Offset0,Offset1,Offset2,Offset3,Offset4,Offset5,Offset6,Offset7,Offset8,Offset9,Offset10) template SingleRelease::ReleaseMembers11<Key,Offset0,Offset1,Offset2,Offset3,Offset4,Offset5,Offset6,Offset7,Offset8,Offset9,Offset10>::~ReleaseMembers11();
#include "reference_members_11_instances.inc"
#undef REFERENCE_MEMBERS_11
