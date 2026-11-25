// The sound paths' destructors (RTTI names: CPath and the paths derived from it). DarePaths.cpp has the paths' other
// slots; these are separate views of the same classes. Member names are provisional.
#include "DareCore.h"
#include <stdint.h>

// The handle every path holds at +0x8 (see DareHandles.cpp; its destructor is 0xd31160).
struct DareObjectHandle {
    void* value;
    uint64_t slot;
    ~DareObjectHandle();
};

// CPath: 20 slots, the destructors first.
struct CPath {
    virtual ~CPath() {}   // slots 0 and 1 (0xd6a910, 0xd6b240)
    virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6();
    virtual void Slot7(); virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11();
    virtual void Slot12(); virtual void Slot13(); virtual void Slot14(); virtual void Slot15(); virtual void Slot16();
    virtual void Slot17(); virtual void Slot18(); virtual void Slot19();
    DareObjectHandle handle;   // +0x8
    char padding_18[0x18];
};

// What a path's slot 19 hands its playing sample (provisional names).
struct PathPlayParameters {
    float position;     // +0x0: in parts of the sample's length
    int32_t value4;     // +0x4
    float rate;         // +0x8
    int32_t valueC;     // +0xc
    int32_t value10;    // +0x10
    int32_t playing;    // +0x14: the position means something only while set
    int32_t value18;    // +0x18
};
struct PathSampleState {
    char padding_0[0x1c];
    uint32_t frames;    // +0x1c
    char padding_20[0x24];
    int32_t position;   // +0x44: in frames
    int32_t value48;    // +0x48
    int32_t playing;    // +0x4c
    float rate;         // +0x50
    int32_t value54;    // +0x54
    int32_t value58;    // +0x58
    int32_t value5c;    // +0x5c
    // Takes the parameters, the position turned into frames at the rate.
    void Set(const PathPlayParameters* parameters) {
        value54 = parameters->value4;
        float rate = parameters->rate;
        this->rate = rate;
        position = static_cast<int32_t>(rate * (parameters->position * static_cast<float>(frames)));
        value58 = parameters->valueC;
        value48 = parameters->value10;
        playing = parameters->playing;
        value5c = parameters->value18;
    }
    // Gives them back, the position in parts of the length again (0 when not playing).
    void Get(PathPlayParameters* parameters) const {
        parameters->playing = playing;
        parameters->value4 = value54;
        parameters->position = playing ? static_cast<float>(position) / (rate * static_cast<float>(frames)) : 0.0f;
        __builtin_memcpy(&parameters->rate, &rate, sizeof(rate));   // copied as bits (the original reloads it)
        parameters->valueC = value58;
        parameters->value18 = value5c;
        parameters->value10 = value48;
    }
};
// What a path without a sample reports.
inline void ClearPlayParameters(PathPlayParameters* parameters) {
    parameters->position = 0.0f;
    parameters->value4 = 0;
    parameters->rate = 0.0f;
    parameters->value10 = 0;
    parameters->playing = 0;
    parameters->value18 = 0;
}

// SynthPath: stopped when it goes.
struct SynthPath : CPath {
    ~SynthPath() override;
    void Stop();   // 0xd87dc0
    void GetPlayParameters(PathPlayParameters* parameters);
    void SetPlayParameters(const PathPlayParameters* parameters);
    char padding_30[0x28];
    PathSampleState* state;   // +0x58
};
// Slot 18 (0xd891d0): what its sample plays with.
void SynthPath::GetPlayParameters(PathPlayParameters* parameters) {
    if (PathSampleState* playing = state) playing->Get(parameters);
    else ClearPlayParameters(parameters);
}
// Slot 19 (0xd89250): hands the parameters to its sample, when it has one.
void SynthPath::SetPlayParameters(const PathPlayParameters* parameters) {
    if (PathSampleState* playing = state) playing->Set(parameters);
}
// Slots 0 and 1 (0xd88ea0, 0xd88ef0; the deleting one has this inlined).
__attribute__((always_inline)) SynthPath::~SynthPath() { Stop(); }

// OneShotMULTITRACKPathBase and the 3D path on it, which frees its buffer at +0xc0.
struct OneShotMULTITRACKPathBase : CPath {
    ~OneShotMULTITRACKPathBase() override;   // 0xd6b720
};
struct OneShotMULTITRACK3DPath : OneShotMULTITRACKPathBase {
    ~OneShotMULTITRACK3DPath() override;
    char padding_30[0x90];
    void* buffer;   // +0xc0
};
// Slots 0 and 1 (0xd776b0, 0xd77720; the deleting one has this inlined).
__attribute__((always_inline)) OneShotMULTITRACK3DPath::~OneShotMULTITRACK3DPath() {
    if (buffer) {
        DareFree(buffer);
        buffer = nullptr;
    }
}

// OneShotSILENCEPath: a CPath that is also five small interfaces (the vtables at +0x68 to +0x88, three slots each; which
// classes they are is not known) and owns the sample at +0x90.
#define DARE_PATH_INTERFACE(Name) \
    struct Name { \
        virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); \
    };
DARE_PATH_INTERFACE(PathInterface68)
DARE_PATH_INTERFACE(PathInterface70)
DARE_PATH_INTERFACE(PathInterface78)
DARE_PATH_INTERFACE(PathInterface80)
DARE_PATH_INTERFACE(PathInterface88)
// What the silence path owns: destroyed through its slot 20 (as TVirtualSample's destructors are) and freed through Dare.
struct PathSample {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9();
    virtual void Slot10(); virtual void Slot11(); virtual void Slot12(); virtual void Slot13(); virtual void Slot14();
    virtual void Slot15(); virtual void Slot16(); virtual void Slot17(); virtual void Slot18(); virtual void Slot19();
    virtual ~PathSample();   // slots 20 and 21
};
// The silence path's fields before its interfaces (their names are not known).
struct SilencePathFields : CPath {
    char padding_30[0x38];
};
struct OneShotSILENCEPath : SilencePathFields, PathInterface68, PathInterface70, PathInterface78, PathInterface80, PathInterface88 {
    ~OneShotSILENCEPath() override;
    virtual void Slot20(); virtual void Slot21(); virtual void Slot22(); virtual void Slot23(); virtual void Slot24();
    virtual void Slot25(); virtual void Slot26();
    PathSample* sample;   // +0x90
};
// Slots 0 and 1 (0xd6a380, 0xd6a920; the deleting one has this inlined): destroys and frees the sample.
__attribute__((always_inline)) OneShotSILENCEPath::~OneShotSILENCEPath() {
    if (PathSample* owned = sample) {
        owned->~PathSample();
        DareFree(owned);
        sample = nullptr;
    }
}

// CEffectPath: a CPath with an effect chain (DareEffectChainBase<TEffect, _SND_tdstToolFormat>, whose destructor is
// 0xd713d0) at +0x30; the chain's vtables at +0x38 and +0x40 are of classes not known yet. It owns two samples.
struct EffectChainInterface38 {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2();
};
struct EffectChainInterface40 {
    virtual void Slot0();
};
struct PathEffectChain {
    virtual ~PathEffectChain();   // slots 0 and 1 (0xd713d0)
    virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6();
    virtual void Slot7(); virtual void Slot8(); virtual void Slot9();
};
struct CEffectPath : CPath, PathEffectChain, EffectChainInterface38, EffectChainInterface40 {
    ~CEffectPath() override;
    virtual void Slot20(); virtual void Slot21(); virtual void Slot22(); virtual void Slot23();
    char padding_48[0x38];
    PathSample* samples[2];  // +0x80 (that the chain is only 0x18 bytes is not known; the samples' offsets are)
    void* value90;           // +0x90
    int32_t value98;         // +0x98
};
// Slot 0 (0xd6f5a0): destroys and frees both samples (a loop: the original shares one landing pad between them) and resets +0x90 and +0x98.
CEffectPath::~CEffectPath() {
    for (int32_t i = 0; i < 2; ++i) {
        if (PathSample* owned = samples[i]) {
            owned->~PathSample();
            DareFree(owned);
            samples[i] = nullptr;
        }
    }
    value90 = nullptr;
    value98 = -1;
}

// OneShotSAMPLEPath: its sample's state is reached through what it plays (+0x78).
struct PathSampleSource {
    char padding_0[0x48];
    PathSampleState* state;   // +0x48
};
struct OneShotSAMPLEPath : CPath {
    void GetPlayParameters(PathPlayParameters* parameters);
    void SetPlayParameters(const PathPlayParameters* parameters);
    char padding_30[0x48];
    PathSampleSource* source;   // +0x78
};
// Slot 19 (0xd782c0): hands the parameters to its sample, when it has one.
void OneShotSAMPLEPath::SetPlayParameters(const PathPlayParameters* parameters) {
    if (PathSampleState* playing = source->state) playing->Set(parameters);
}
// Slot 18 (0xd78240): what its sample plays with.
void OneShotSAMPLEPath::GetPlayParameters(PathPlayParameters* parameters) {
    if (PathSampleState* playing = source->state) playing->Get(parameters);
    else ClearPlayParameters(parameters);
}
