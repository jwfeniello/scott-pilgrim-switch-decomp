// The boss classes (RTTI: Onyx::Component::Compose<Boss>; Lynette and Envy derive
// from TagTeamMember): their own states, each followed by its getter, and the
// overrides the sources define. Names are provisional.
#pragma once
#include "Boss.h"

namespace SPTG {

// vtable 0x188c9c0, 268 slots
struct TagTeamMember : Boss {
    SPTG_SLOT(238)   // overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    SPTG_SLOT(258)
    SPTG_SLOT(259)
    SPTG_SLOT(260)
    SPTG_SLOT(261)
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267
};
// vtable 0x188a8a0, 272 slots
struct Todd : Boss {
    int State98(int event); State State98Ptr();   // slots 98, 99, override Boss
    int State106(int event); State State106Ptr();   // slots 106, 107, override Boss
    int State122(int event); State State122Ptr();   // slots 122, 123, override Boss
    int State172(int event); State State172Ptr();   // slots 172, 173, override Boss
    int State186(int event); State State186Ptr();   // slots 186, 187, override Boss
    int State200(int event); State State200Ptr();   // slots 200, 201, override Boss
    SPTG_SLOT(234)   // overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    SPTG_SLOT(237)   // overrides Boss
    SPTG_SLOT(240)   // overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State248(int event); virtual State State248Ptr();   // slots 248, 249, overrides Boss
    virtual int State256(int event); virtual State State256Ptr();   // slots 256, 257, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271
};
// vtable 0x1896e38, 284 slots
struct GigaGideon : Boss {
    int State96(int event); State State96Ptr();   // slots 96, 97, override Boss
    int State106(int event); State State106Ptr();   // slots 106, 107, override Boss
    int State116(int event); State State116Ptr();   // slots 116, 117, override Boss
    int State172(int event); State State172Ptr();   // slots 172, 173, override Boss
    SPTG_SLOT(234)   // overrides Boss
    SPTG_SLOT(241)   // overrides Boss
    SPTG_SLOT(242)   // overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271
    virtual int State272(int event); virtual State State272Ptr();   // slots 272, 273
    virtual int State274(int event); virtual State State274Ptr();   // slots 274, 275
    virtual int State276(int event); virtual State State276Ptr();   // slots 276, 277
    virtual int State278(int event); virtual State State278Ptr();   // slots 278, 279
    virtual int State280(int event); virtual State State280Ptr();   // slots 280, 281
    virtual int State282(int event); virtual State State282Ptr();   // slots 282, 283
};
// vtable 0x18977d0, 260 slots
struct Gideon : Boss {
    int State98(int event); State State98Ptr();   // slots 98, 99, override Boss
    int State196(int event); State State196Ptr();   // slots 196, 197, override Boss
    SPTG_SLOT(234)   // overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    SPTG_SLOT(237)   // overrides Boss
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
};
// vtable 0x1896478, 266 slots
struct SuperGideon : Boss {
    int State122(int event); State State122Ptr();   // slots 122, 123, override Boss
    int State172(int event); State State172Ptr();   // slots 172, 173, override Boss
    int State186(int event); State State186Ptr();   // slots 186, 187, override Boss
    int State196(int event); State State196Ptr();   // slots 196, 197, override Boss
    SPTG_SLOT(234)   // overrides Boss
    SPTG_SLOT(243)   // overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State256(int event); virtual State State256Ptr();   // slots 256, 257, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
};
// vtable 0x1895a88, 272 slots
struct KenKyle : Boss {
    int State114(int event); State State114Ptr();   // slots 114, 115, override Boss
    int State122(int event); State State122Ptr();   // slots 122, 123, override Boss
    int State172(int event); State State172Ptr();   // slots 172, 173, override Boss
    int State186(int event); State State186Ptr();   // slots 186, 187, override Boss
    int State196(int event); State State196Ptr();   // slots 196, 197, override Boss
    int State198(int event); State State198Ptr();   // slots 198, 199, override Boss
    SPTG_SLOT(234)   // overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    SPTG_SLOT(240)   // overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247, overrides Boss
    virtual int State248(int event); virtual State State248Ptr();   // slots 248, 249, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271
};
// vtable 0x18949c8, 268 slots
struct LucasLee : Boss {
    int State108(int event); State State108Ptr();   // slots 108, 109, override Boss
    SPTG_SLOT(234)   // overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    SPTG_SLOT(237)   // overrides Boss
    SPTG_SLOT(239)   // overrides Boss
    SPTG_SLOT(241)   // overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247, overrides Boss
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255, overrides Boss
    virtual int State256(int event); virtual State State256Ptr();   // slots 256, 257, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267
};
// vtable 0x1891ed8, 272 slots
struct Roxy : Boss {
    int State122(int event); State State122Ptr();   // slots 122, 123, override Boss
    SPTG_SLOT(234)   // overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271
};
// vtable 0x1890e58, 260 slots
struct RoxyMirror : Boss {
    int State96(int event); State State96Ptr();   // slots 96, 97, override Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
};
// vtable 0x1899b20, 266 slots
struct Chau : Boss {
    int State116(int event); State State116Ptr();   // slots 116, 117, override Boss
    int State172(int event); State State172Ptr();   // slots 172, 173, override Boss
    int State196(int event); State State196Ptr();   // slots 196, 197, override Boss
    SPTG_SLOT(234)   // overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    SPTG_SLOT(237)   // overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
};
// vtable 0x1898018, 284 slots
struct Lynette : TagTeamMember {
    SPTG_SLOT(234)   // overrides TagTeamMember
    SPTG_SLOT(237)   // overrides TagTeamMember
    SPTG_SLOT(238)   // overrides TagTeamMember
    SPTG_SLOT(241)   // overrides TagTeamMember
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides TagTeamMember
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255, overrides TagTeamMember
    SPTG_SLOT(259)   // overrides TagTeamMember
    SPTG_SLOT(260)   // overrides TagTeamMember
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263, overrides TagTeamMember
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265, overrides TagTeamMember
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271
    virtual int State272(int event); virtual State State272Ptr();   // slots 272, 273
    virtual int State274(int event); virtual State State274Ptr();   // slots 274, 275
    virtual int State276(int event); virtual State State276Ptr();   // slots 276, 277
    virtual int State278(int event); virtual State State278Ptr();   // slots 278, 279
    virtual int State280(int event); virtual State State280Ptr();   // slots 280, 281
    virtual int State282(int event); virtual State State282Ptr();   // slots 282, 283
};
// vtable 0x1892fb8, 269 slots
struct Patel : Boss {
    SPTG_SLOT(234)   // overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    SPTG_SLOT(237)   // overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247, overrides Boss
    virtual int State256(int event); virtual State State256Ptr();   // slots 256, 257, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267
    SPTG_SLOT(268)
};
// vtable 0x1898a48, 274 slots
struct Envy : TagTeamMember {
    int State122(int event); State State122Ptr();   // slots 122, 123, override TagTeamMember
    int State186(int event); State State186Ptr();   // slots 186, 187, override TagTeamMember
    int State198(int event); State State198Ptr();   // slots 198, 199, override TagTeamMember
    SPTG_SLOT(234)   // overrides TagTeamMember
    SPTG_SLOT(241)   // overrides TagTeamMember
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides TagTeamMember
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255, overrides TagTeamMember
    SPTG_SLOT(259)   // overrides TagTeamMember
    SPTG_SLOT(260)   // overrides TagTeamMember
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263, overrides TagTeamMember
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271
    virtual int State272(int event); virtual State State272Ptr();   // slots 272, 273
};
// vtable 0x1894150, 266 slots
struct NegaScott : Boss {
    SPTG_SLOT(234)   // overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
};
// vtable 0x1893860, 272 slots
struct HipsterChick : Boss {
    int State96(int event); State State96Ptr();   // slots 96, 97, override Boss
    int State106(int event); State State106Ptr();   // slots 106, 107, override Boss
    int State108(int event); State State108Ptr();   // slots 108, 109, override Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271
};
// vtable 0x188fc40, 284 slots
struct SuperFightingRobotAI : Boss {
    int State96(int event); State State96Ptr();   // slots 96, 97, override Boss
    SPTG_SLOT(258)
    SPTG_SLOT(259)
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271
    virtual int State272(int event); virtual State State272Ptr();   // slots 272, 273
    virtual int State274(int event); virtual State State274Ptr();   // slots 274, 275
    virtual int State276(int event); virtual State State276Ptr();   // slots 276, 277
    virtual int State278(int event); virtual State State278Ptr();   // slots 278, 279
    virtual int State280(int event); virtual State State280Ptr();   // slots 280, 281
    virtual int State282(int event); virtual State State282Ptr();   // slots 282, 283
};
// vtable 0x188eb08, 274 slots
struct SuperFightingRobotHand : Boss {
    int State96(int event); State State96Ptr();   // slots 96, 97, override Boss
    int State106(int event); State State106Ptr();   // slots 106, 107, override Boss
    int State108(int event); State State108Ptr();   // slots 108, 109, override Boss
    int State172(int event); State State172Ptr();   // slots 172, 173, override Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247, overrides Boss
    virtual int State248(int event); virtual State State248Ptr();   // slots 248, 249, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271
    virtual int State272(int event); virtual State State272Ptr();   // slots 272, 273
};
// vtable 0x188d260, 258 slots
struct SuperFightingRobotTorso : Boss {

};
// vtable 0x188da98, 258 slots
struct SuperFightingRobotShoulder : Boss {

};
// vtable 0x188e2d0, 258 slots
struct SuperFightingRobotHead : Boss {

};

}  // namespace SPTG
