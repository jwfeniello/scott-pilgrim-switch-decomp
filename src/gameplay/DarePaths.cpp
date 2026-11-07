// The sound paths (RTTI names: ThemePath, LoopingPath, CMultitrack3DLoopingPath and the other CPath subclasses): their
// small slots. The slot and member names are provisional, as is TrackPath, the base whose slot 13 most paths share (its
// vtable isn't in the binary).
#include <stdint.h>

// What 0xd359b0 resolves a path's handle to.
struct PathHandleEntry {
    int32_t value0;
    int32_t kind;          // +0x4
};
struct PathHandle {
    void* value;
    PathHandleEntry* Get();   // 0xd359b0
};

// What a path's slot 12 hands back.
struct PathTrack {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9();
    virtual void Slot10(); virtual void Slot11(); virtual void Slot12(); virtual void Slot13(); virtual void Slot14();
    virtual int32_t IsPlaying();                 // slot 15
    virtual void Slot16(); virtual void Slot17(); virtual void Slot18();
    virtual int32_t Slot19();                    // slot 19
};

// What the theme and multitrack paths' layer arrays hold.
struct ThemeLayer {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9();
    virtual void Slot10();
    virtual float Position();                    // slot 11
    virtual void Slot12();
    virtual void Slot13();
    virtual void Slot14();
};

struct TrackPath {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3();
    virtual void Slot4();
    virtual void Slot5();
    virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9(); virtual void Slot10();
    virtual float Position();                    // slot 11
    virtual PathTrack* Track(uint32_t index);    // slot 12
    virtual int32_t AnyTrackPlaying();            // slot 13
    virtual void Slot14();
    virtual void Slot15(float value, int32_t flag);   // slot 15
    virtual void Slot16(float a, float b, int32_t c, int32_t d, int32_t e);   // slot 16
    virtual void Slot17(float a, float b, int32_t c, int32_t d, int32_t e);   // slot 17
    virtual void Slot18(); virtual void Slot19();
    PathHandle handle;     // +0x8
    char padding_10[0x18];
    uint32_t trackCount;   // +0x28
};

// Slot 13 (0xd6ab10): whether any of the tracks is playing.
int32_t TrackPath::AnyTrackPlaying() {
    uint32_t i = 0;
    int32_t playing = 0;
    for (; i < trackCount; ++i) {
        PathTrack* track = Track(i);
        if (track) playing = playing || track->IsPlaying();
    }
    return playing;
}

struct ThemePath {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3();
    virtual void Slot4();                        // slot 4
    virtual void Slot5();                        // slot 5
    virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9(); virtual void Slot10();
    virtual float Position();                    // slot 11
    virtual PathTrack* Track(uint32_t index);    // slot 12
    virtual void Slot13();
    virtual int32_t Slot14();                    // slot 14
    virtual void Slot15(float value, int32_t flag);   // slot 15
    virtual void Slot16(float a, float b, int32_t c, int32_t d, int32_t e);   // slot 16
    virtual void Slot17(float a, float b, int32_t c, int32_t d, int32_t e);   // slot 17
    virtual void Slot18(); virtual void Slot19();
    char padding_8[0x40];
    ThemeLayer** layers;   // +0x48
    char padding_50[0x28];
    uint32_t layerCount;   // +0x78
    TrackPath* main;       // +0x80
    TrackPath* inner;      // +0x88
};

// Slot 4 (0xd8c560): slot 4 of the main path, then slot 13 of each layer.
void ThemePath::Slot4() {
    if (main) main->Slot4();
    for (uint32_t i = 0; i < layerCount; ++i)
        if (layers[i]) layers[i]->Slot13();
}

// Slot 5 (0xd8c5c0): slot 5 of the main path, then slot 14 of each layer.
void ThemePath::Slot5() {
    if (main) main->Slot5();
    for (uint32_t i = 0; i < layerCount; ++i)
        if (layers[i]) layers[i]->Slot14();
}

// Slot 11 (0xd8c760): the furthest layer's position (0 at least).
float ThemePath::Position() {
    float position = 0.0f;
    for (uint32_t i = 0; i < layerCount; ++i) {
        float layer = layers[i]->Position();
        if (layer > position) position = layer;
    }
    return position;
}

// Slot 14 (0xd8c7e0): whether slot 19 holds for every track.
int32_t ThemePath::Slot14() {
    int32_t result = 1;
    for (uint32_t i = 0; i < layerCount; ++i) result &= Track(i)->Slot19();
    return result;
}

// Slot 15 (0xd8c850): passes (value, flag) on to the main and inner paths.
void ThemePath::Slot15(float value, int32_t flag) {
    if (main) main->Slot15(value, flag);
    if (inner) inner->Slot15(value, flag);
}

// Slots 16 (0xd8c8c0) and 17 (0xd8c960): pass their arguments on to the main and inner paths.
void ThemePath::Slot16(float a, float b, int32_t c, int32_t d, int32_t e) {
    if (main) main->Slot16(a, b, c, d, e);
    if (inner) inner->Slot16(a, b, c, d, e);
}
void ThemePath::Slot17(float a, float b, int32_t c, int32_t d, int32_t e) {
    if (main) main->Slot17(a, b, c, d, e);
    if (inner) inner->Slot17(a, b, c, d, e);
}

struct LoopingPath {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9();
    virtual void Slot10();
    virtual float Position();                    // slot 11
    virtual void Slot12(); virtual void Slot13(); virtual void Slot14();
    virtual void Slot15(float value, int32_t flag);   // slot 15
    virtual void Slot16(float a, float b, int32_t c, int32_t d, int32_t e);   // slot 16
    virtual void Slot17(float a, float b, int32_t c, int32_t d, int32_t e);   // slot 17
    virtual void Slot18(); virtual void Slot19();
    PathHandle handle;     // +0x8
    char padding_10[0x78];
    TrackPath* inner;      // +0x88
    char padding_90[0xc];
    int32_t offsetEnabled; // +0x9c
    float offset;          // +0xa0
};

// Slot 11 (0xd878f0): the inner path's position (-1 without one), moved by +0xa0 when that's enabled and the position
// isn't -1 or -2.
float LoopingPath::Position() {
    if (!inner) return -1.0f;
    float position = inner->Position();
    int32_t enabled = offsetEnabled;
    if (position != -2.0f && position != -1.0f && enabled) position += offset;
    return position;
}

// Slots 15 (0xd87970), 16 (0xd879d0) and 17 (0xd87a60): pass their arguments on to the inner path when the handle's
// entry is of kind 6.
void LoopingPath::Slot15(float value, int32_t flag) {
    if (handle.Get()->kind == 6) inner->Slot15(value, flag);
}
void LoopingPath::Slot16(float a, float b, int32_t c, int32_t d, int32_t e) {
    if (handle.Get()->kind == 6) inner->Slot16(a, b, c, d, e);
}
void LoopingPath::Slot17(float a, float b, int32_t c, int32_t d, int32_t e) {
    if (handle.Get()->kind == 6) inner->Slot17(a, b, c, d, e);
}

struct CMultitrack3DLoopingPath {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3();
    virtual void Slot4();                        // slot 4
    virtual void Slot5();                        // slot 5
    virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9(); virtual void Slot10();
    virtual void Slot11();
    virtual PathTrack* Track(uint32_t index);    // slot 12
    virtual void Slot13();
    virtual int32_t Slot14();                    // slot 14
    virtual void Slot15(float value, int32_t flag);   // slot 15
    virtual void Slot16(float a, float b, int32_t c, int32_t d, int32_t e);   // slot 16
    virtual void Slot17(float a, float b, int32_t c, int32_t d, int32_t e);   // slot 17
    virtual void Slot18(); virtual void Slot19();
    PathHandle handle;     // +0x8
    char padding_10[0x48];
    TrackPath* inner;      // +0x58
    ThemeLayer** layers;   // +0x60
    char padding_68[0x20];
    uint32_t layerCount;   // +0x88
};

// Slot 4 (0xd8d8a0): slot 13 of each layer, then slot 4 of the inner path.
void CMultitrack3DLoopingPath::Slot4() {
    for (uint32_t i = 0; i < layerCount; ++i)
        if (layers[i]) layers[i]->Slot13();
    if (inner) inner->Slot4();
}

// Slot 5 (0xd8d910): slot 14 of each layer, then slot 5 of the inner path.
void CMultitrack3DLoopingPath::Slot5() {
    for (uint32_t i = 0; i < layerCount; ++i)
        if (layers[i]) layers[i]->Slot14();
    if (inner) inner->Slot5();
}

// Slot 14 (0xd8daf0): whether slot 19 holds for every track.
int32_t CMultitrack3DLoopingPath::Slot14() {
    int32_t result = 1;
    for (uint32_t i = 0; i < layerCount; ++i) result &= Track(i)->Slot19();
    return result;
}

// Slots 15 (0xd8db60), 16 (0xd8dbc0) and 17 (0xd8dc50): pass their arguments on to the inner path when the handle's
// entry is of kind 6.
void CMultitrack3DLoopingPath::Slot15(float value, int32_t flag) {
    if (handle.Get()->kind == 6) inner->Slot15(value, flag);
}
void CMultitrack3DLoopingPath::Slot16(float a, float b, int32_t c, int32_t d, int32_t e) {
    if (handle.Get()->kind == 6) inner->Slot16(a, b, c, d, e);
}
void CMultitrack3DLoopingPath::Slot17(float a, float b, int32_t c, int32_t d, int32_t e) {
    if (handle.Get()->kind == 6) inner->Slot17(a, b, c, d, e);
}
