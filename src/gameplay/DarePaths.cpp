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
   
    virtual float Position();                    // slot 11
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
    char padding_68[0x8];
    int32_t* layerStarted; // +0x70
    float offset;          // +0x78
    char padding_7c[0xc];
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

// Slot 11 (0xd8da20): the inner path's position (-1 without one), moved by +0x78 once every layer has started and the
// position isn't -1 or -2.
float CMultitrack3DLoopingPath::Position() {
    if (!inner) return -1.0f;
    float position = inner->Position();
    int32_t started = 1;
    for (uint32_t i = 0; i < layerCount; ++i)
        if (!layerStarted[i]) started = 0;
    if (position != -2.0f && position != -1.0f && started) position += offset;
    return position;
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

// A volume ramp a multitrack path keeps per track.
struct PathRamp {
    char padding_0[0x1c];
    uint32_t rate;       // +0x1c
    char padding_20[0x24];
    int32_t steps;       // +0x44
    float target;        // +0x48
    int32_t active;      // +0x4c
    float duration;      // +0x50
    int32_t mode;        // +0x54
    float from;          // +0x58
    float start;         // +0x5c
    // Heads for `value` over `time` (at once when that's 0).
    void Set(float value, float time, int32_t mode) {
        if (time != 0.0f) {
            duration = time;
            this->mode = mode;
            if (!active) start = target;
            steps = static_cast<int32_t>(rate * time);
            from = start;
            target = value;
            active = 1;
        } else {
            active = 0;
            duration = 0.0f;
            target = value;
        }
    }
};
struct MultitrackTrack {
    char padding_0[0x48];
    PathRamp* ramp;      // +0x48
};

// Its base (RTTI name); slot 23 is 0xd6c290.
struct OneShotMULTITRACK3DPath {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9();
    virtual void Slot10(); virtual void Slot11(); virtual void Slot12(); virtual void Slot13(); virtual void Slot14();
    virtual void Slot15();
    virtual void Slot16(float value, float time, int32_t mode, int32_t index, int32_t id);   // slot 16
    virtual void Slot17(float value, float time, int32_t mode, int32_t index, int32_t id);   // slot 17
    virtual void Slot18(); virtual void Slot19();
    virtual void Slot20(); virtual void Slot21(); virtual void Slot22();
    virtual int32_t Slot23();                      // slot 23
    char padding_8[0x78];
    PathRamp** ramps;           // +0x80
    MultitrackTrack** tracks;   // +0x88
    char padding_90[0x18];
    int32_t id;                 // +0xa8
    int32_t trackCount;         // +0xac
    char padding_b0[0x38];
    int32_t* trackChannels;     // +0xe8
};
// The allocator 0xd6ec70 uses (names provisional).
void* PathAllocate(uint64_t size, int32_t flags);                  // 0x722190
void* PathReallocate(void* block, uint64_t size, int32_t flags);   // 0x722280

struct OneShotMULTITRACKPath : OneShotMULTITRACK3DPath {
    void Slot16(float value, float time, int32_t mode, int32_t index, int32_t id) override;
    void Slot17(float value, float time, int32_t mode, int32_t index, int32_t id) override;
    int32_t Slot23() override;
};

// Slot 16 (0xd6bec0): ramps track `index`'s own ramp, when `id` is this path's.
void OneShotMULTITRACKPath::Slot16(float value, float time, int32_t mode, int32_t index, int32_t id) {
    if (index < 0 || id != this->id || index >= trackCount || !tracks[index]) return;
    PathRamp* ramp = tracks[index]->ramp;
    if (ramp) ramp->Set(value, time, mode);
}

// Slot 17 (0xd6bf50): ramps the path's ramp for track `index`, when `id` is this path's.
void OneShotMULTITRACKPath::Slot17(float value, float time, int32_t mode, int32_t index, int32_t id) {
    if (index < 0 || id != this->id || index >= trackCount || !tracks[index]) return;
    ramps[index]->Set(value, time, mode);
}

// Slot 23 (0xd6ec70): the base's slot 23, then a channel per track (-1 for each), resized when the track count changed.
int32_t OneShotMULTITRACKPath::Slot23() {
    int32_t previous = trackCount;
    int32_t result = OneShotMULTITRACK3DPath::Slot23();
    if (result < 0) return result;
    if (!trackChannels)
        trackChannels = static_cast<int32_t*>(PathAllocate(static_cast<uint32_t>(trackCount) * sizeof(int32_t), 0));
    else if (previous != trackCount)
        trackChannels = static_cast<int32_t*>(PathReallocate(trackChannels, static_cast<uint32_t>(trackCount) * sizeof(int32_t), 0));
    if (trackCount)
        for (uint32_t i = 0; i < static_cast<uint32_t>(trackCount); ++i) trackChannels[i] = -1;
    return 0;
}

// SMemory (RTTI name): a sound played from memory. Member names are provisional.
struct SMemory {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual void Seek(uint32_t position);   // slot 8
    int32_t pending;     // +0x8
    char padding_c[0x34];
    uint32_t position;   // +0x40
    char padding_44[0x24];
    uint32_t size;       // +0x68
};

// Slot 8 (0xd6d640): moves to `position` when it's within the size; past it, to the end only when the size minus the
// position (unsigned) is at most 500.
void SMemory::Seek(uint32_t position) {
    if (position > size) {
        if (size - position <= 500) this->position = size;
    } else {
        this->position = position;
        pending = 0;
    }
}
