// The sample modules of Dare's older layer: TVirtualSample and the classes over it (RTTI names). Each takes one input,
// whose format it checks first. Method names are provisional, from what the code does.
#include "DareModules.h"

struct TEffect : TVirtualSample {
    int Connect(TVirtualSample* source) override;
    int Slot5(const TSampleFormat* format) override;
    char padding_38[0x18];
    TVirtualSample* input;   // +0x50
    char padding_58[0x8];
};
// An effect chain's second base (at +0x60), which its format goes to.
struct TChainOutput {
    virtual void Slot0(); virtual void Slot1();
    virtual int Slot2(const TSampleFormat* format);   // slot 2
    char padding_8[0x10];
    TSampleFormat outputFormat;   // +0x18
};
// An effect chain's stages (+0x90).
struct TChainStages {
    char padding_0[0x18];
    int32_t built;           // +0x18
    char padding_1c[0x44];
    TVirtualSample* source;  // +0x60
    void Rebuild();          // 0xd6fcc0
};
struct TEffectChain : TEffect, TChainOutput {
    int Connect(TVirtualSample* source) override;
    int Slot6(const TSampleFormat* format) override;
    char padding_88[0x8];
    TChainStages stages;     // +0x90
};
struct TConverter : TVirtualSample {
    int Connect(TVirtualSample* source) override;
    ~TConverter() override;
    TVirtualSample* input;   // +0x38
    char padding_40[0x8];
    void* buffer;            // +0x48
    uint32_t bufferSize;     // +0x50
};
struct TFader : TVirtualSample {
    int Connect(TVirtualSample* source) override;
    int Disconnect(int keep) override;
    TVirtualSample* input;   // +0x38
};
struct TImaAdpcm : TVirtualSample {
    int Connect(TVirtualSample* source) override;
    int Disconnect(int keep) override;
    ~TImaAdpcm() override;
    char padding_38[0x8];
    TVirtualSample* input;   // +0x40
    char padding_48[0x18];
    void* buffer;            // +0x60
};
struct TPCM : TVirtualSample {
    int Connect(TVirtualSample* source) override;
    int Disconnect(int keep) override;
    char padding_38[0x8];
    TVirtualSample* input;   // +0x40
};
struct TMultiTrack : TVirtualSample {
    int Disconnect(int keep) override;
    TVirtualSample* input;   // +0x38
};

// Slot 16 (0xd6a720), which every module shares: reads `buffer->size` bytes of 16-bit samples as frames through slot
// 17, handing back how many bytes it produced.
void TVirtualSample::Read(const TSampleBuffer* buffer, uint32_t* written) {
    TSampleBuffer frames;
    frames.size = buffer->size / (format.channels * sizeof(int16_t));
    frames.data = buffer->data;
    uint32_t produced = 0;
    ReadFrames(&frames, &produced);
    *written = produced * format.channels * sizeof(int16_t);
}

// TEffect's slot 5 (0xd70650): type 3 with +0x4 clear, mono or stereo. Not matched yet: the original shares one
// return-0 block between the first two tests.
int TEffect::Slot5(const TSampleFormat* format) {
    if (format->type == 3 && !format->value4) return format->channels == 1 || format->channels == 2;
    return 0;
}

// TEffectChain's Connect (0xd71610): as the others, but also hands the source to the stages unless they're built.
int TEffectChain::Connect(TVirtualSample* source) {
    if (inputCount) return -1;
    TSampleFormat format = source->format;
    if (!Accepts(&format)) return -1;
    input = source;
    if (!stages.built) {
        stages.source = source;
        stages.Rebuild();
    }
    ++inputCount;
    return 0;
}

// TEffectChain's slot 6 (0xd717c0): takes a format slot 5 accepts, passing it on to the output (which keeps a copy
// when it takes it).
int TEffectChain::Slot6(const TSampleFormat* newFormat) {
    if (!Slot5(newFormat)) return 0;
    format = *newFormat;
    if (Slot2(&format)) outputFormat = format;
    return 1;
}

// The stream file functions and count it uses (names provisional).
void StreamClose(int64_t file);              // 0x722a20
extern "C" int32_t Dare_OpenStreamCount;     // 0x1945e10

// SStream (RTTI name): a sound streamed from a file. Member names are provisional.
struct SStream : TVirtualSample {
    ~SStream() override;
    char padding_38[0x8];
    int64_t file;        // +0x40
    int64_t file2;       // +0x48
    char padding_50[0x18];
    uint32_t counted;    // +0x68
};

// Slots 20 and 21 (0xd6d040, 0xd6d0d0): closes both files and leaves the open-stream count. The deleting one has this
// body inlined, which the attribute gives.
__attribute__((always_inline)) SStream::~SStream() {
    if (file != -1) StreamClose(file);
    if (file2 != -1) StreamClose(file2);
    if (counted) {
        --Dare_OpenStreamCount;
        counted = 0;
    }
}

// SZeroLatencyStream (RTTI name): an SStream with nothing of its own to destroy; its deleting destructor (0xd6db50) is
// SStream's inlined.
struct SZeroLatencyStream : SStream {
    ~SZeroLatencyStream() override;
};
__attribute__((always_inline)) SZeroLatencyStream::~SZeroLatencyStream() {}

// Slots 20 and 21 (0xd712c0, 0xd71340): frees the buffer.
__attribute__((always_inline)) TConverter::~TConverter() {
    void* data = buffer;
    if (Dare_AllocatorEnabled && data) {
        if (DareAllocator* allocator = Dare_Allocator) allocator->Free(data);
    }
    buffer = nullptr;
    bufferSize = 0;
}

// Slots 20 and 21 (0xd75c50, 0xd75cd0): frees the buffer, as TConverter's does.
__attribute__((always_inline)) TImaAdpcm::~TImaAdpcm() {
    void* data = buffer;
    if (Dare_AllocatorEnabled && data) {
        if (DareAllocator* allocator = Dare_Allocator) allocator->Free(data);
    }
    buffer = nullptr;
}

T_CONNECT(TEffect)          // 0xd70510
T_CONNECT(TConverter)       // 0xd70b10
T_CONNECT(TFader)           // 0xd74c60
T_CONNECT(TImaAdpcm)        // 0xd75620
T_CONNECT(TPCM)             // 0xd75fa0
T_DISCONNECT(TFader)                // 0xd74d40
T_DISCONNECT(TImaAdpcm)             // 0xd75700
T_DISCONNECT(TPCM)                  // 0xd76080
T_DISCONNECT(TMultiTrack)           // 0xd766e0
