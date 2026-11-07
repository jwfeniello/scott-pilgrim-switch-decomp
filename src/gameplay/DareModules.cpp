// The sample modules of Dare's older layer: TVirtualSample and the classes over it (RTTI names). Each takes one input,
// whose format it checks first. Method names are provisional, from what the code does.
#include <stdint.h>

// A module's sample format (16 bytes at +0x10). Connect copies the input's into a local before Accepts reads it.
struct TSampleFormat {
    uint32_t type;
    uint32_t value4;
    uint32_t channels;   // +0x8
    uint32_t valueC;
};
// A block of samples: its size (in bytes, or in frames once divided) and where they are.
struct TSampleBuffer {
    uint32_t size;
    void* data;          // +0x8
};

struct TVirtualSample {
    virtual int Connect(TVirtualSample* source);   // slot 0
    virtual int Slot1();
    virtual int Disconnect(int keep);              // slot 2
    virtual void Slot3();
    virtual int Accepts(const TSampleFormat* format);     // slot 4
    virtual int Slot5(const TSampleFormat* format);       // slot 5
    virtual int Slot6(const TSampleFormat* format);       // slot 6
    virtual void Slot7(); virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11();
    virtual void Slot12(); virtual void Slot13(); virtual void Slot14(); virtual void Slot15();
    virtual void Read(const TSampleBuffer* buffer, uint32_t* written);   // slot 16
    virtual void ReadFrames(TSampleBuffer* frames, uint32_t* produced);  // slot 17
    char padding_8[0x4];
    uint32_t inputCount;     // +0xc
    TSampleFormat format;    // +0x10
};

// Connects `source` unless an input is already there or its format is refused.
#define T_CONNECT(Class) \
    int Class::Connect(TVirtualSample* source) { \
        if (inputCount) return -1; \
        TSampleFormat format = source->format; \
        if (!Accepts(&format)) return -1; \
        input = source; \
        ++inputCount; \
        return 0; \
    }
// Lets go of the input unless `keep` is set; 1 when there was one.
#define T_DISCONNECT(Class) \
    int Class::Disconnect(int keep) { \
        uint32_t count = inputCount; \
        if (keep || !count) return 0; \
        inputCount = count - 1; \
        input = nullptr; \
        return 1; \
    }

struct TEffect : TVirtualSample {
    int Connect(TVirtualSample* source) override;
    int Slot5(const TSampleFormat* format) override;
    char padding_20[0x30];
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
    char padding_20[0x18];
    TVirtualSample* input;   // +0x38
};
struct TFader : TVirtualSample {
    int Connect(TVirtualSample* source) override;
    int Disconnect(int keep) override;
    char padding_20[0x18];
    TVirtualSample* input;   // +0x38
};
struct TImaAdpcm : TVirtualSample {
    int Connect(TVirtualSample* source) override;
    int Disconnect(int keep) override;
    char padding_20[0x20];
    TVirtualSample* input;   // +0x40
};
struct TPCM : TVirtualSample {
    int Connect(TVirtualSample* source) override;
    int Disconnect(int keep) override;
    char padding_20[0x20];
    TVirtualSample* input;   // +0x40
};
struct TVolPanGeneric : TVirtualSample {
    int Disconnect(int keep) override;
    char padding_20[0x20];
    TVirtualSample* input;   // +0x40
};
struct TPitchShifterGeneric : TVirtualSample {
    int Disconnect(int keep) override;
    char padding_20[0x38];
    TVirtualSample* input;   // +0x58
};
struct TMultiTrack : TVirtualSample {
    int Disconnect(int keep) override;
    char padding_20[0x18];
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

T_CONNECT(TEffect)          // 0xd70510
T_CONNECT(TConverter)       // 0xd70b10
T_CONNECT(TFader)           // 0xd74c60
T_CONNECT(TImaAdpcm)        // 0xd75620
T_CONNECT(TPCM)             // 0xd75fa0
T_DISCONNECT(TVolPanGeneric)        // 0xd72010
T_DISCONNECT(TPitchShifterGeneric)  // 0xd72b00
T_DISCONNECT(TFader)                // 0xd74d40
T_DISCONNECT(TImaAdpcm)             // 0xd75700
T_DISCONNECT(TPCM)                  // 0xd76080
T_DISCONNECT(TMultiTrack)           // 0xd766e0
