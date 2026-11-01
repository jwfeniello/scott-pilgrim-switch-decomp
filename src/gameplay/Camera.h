// The level's camera as actors see it, reached through the singleton at AnimatedAiActor +0x88. ComponentSerialize.h
// has a view of LevelCamera that only serialization uses, and ActionEvents.cpp has its own view of the shaker.
#pragma once
#include "BaseCharacter.h"

namespace SPTG {

// SPTG::CameraBlock (type 0x55e5c01c).
struct CameraBlock : onyx::Component {
    char padding_8[0x44];
    int32_t active;                  // +0x4c
    char padding_50[0x4];
    ScreenRect rect;                 // +0x54
};
// One running shake (40 bytes).
struct ShakeSlot {
    char data[40];
    void Start(const char* settings);  // 0x8fb610
};
// One of the shaker's presets; its settings start at +0x4c.
struct ShakePreset : onyx::Component {
    char padding_8[0x44];
    char settings[1];                 // +0x4c
};
// SPTG::CameraShaker (type 0x3ddae46b).
struct CameraShaker : onyx::Component {
    char padding_8[0x68];
    onyx::ComponentHandle** presets;  // +0x70
    char padding_78[0x20];
    ShakeSlot* slots;                 // +0x98
    int FreeSlot();                   // 0x8fb2b0
};
// SPTG::LevelCamera (type 0x67f2aa4d).
struct LevelCamera : onyx::Component {
    char padding_8[0x68];
    onyx::ComponentHandle* shaker;    // +0x70, CameraShaker
    onyx::ComponentHandle* block;     // +0x78, CameraBlock
    char padding_80[0x20];
    onyx::ComponentHandle* transform; // +0xa0
};

}  // namespace SPTG
