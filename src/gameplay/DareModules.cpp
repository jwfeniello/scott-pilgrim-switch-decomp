// The sample modules of Dare's older layer: TVirtualSample and the classes over it (RTTI names). Each takes one input,
// whose format it checks first. Method names are provisional, from what the code does.
#include <stdint.h>

// A module's sample format (16 bytes at +0x10). Connect copies the input's into a local before Accepts reads it.
struct TSampleFormat {
    uint64_t first, second;
};

struct TVirtualSample {
    virtual int Connect(TVirtualSample* source);   // slot 0
    virtual int Slot1();
    virtual int Disconnect(int keep);              // slot 2
    virtual void Slot3();
    virtual int Accepts(const TSampleFormat* format);     // slot 4
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
    char padding_20[0x30];
    TVirtualSample* input;   // +0x50
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
