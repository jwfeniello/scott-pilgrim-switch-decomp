// The sample modules' base (TVirtualSample, RTTI name) and what the modules share; DareModules.cpp and
// DareModulesVolPan.cpp define the classes over it.
#pragma once
#include "DareCore.h"

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

// A handle in the Dare handle table (DareHandles.cpp).
struct DareObjectHandle {
    void* value;
    uint64_t slot;   // +0x8
    ~DareObjectHandle();   // 0xd31160
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
    virtual void Slot18(); virtual void Slot19();
    // Slots 20 and 21 (the base's own at 0xd6a890): only the handle goes.
    virtual ~TVirtualSample() {}
    char padding_8[0x4];
    uint32_t inputCount;     // +0xc
    TSampleFormat format;    // +0x10
    char padding_20[0x8];
    DareObjectHandle handle; // +0x28
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
