// TVolPanGeneric and TPitchShifterGeneric (RTTI names), which the original builds apart from the other modules: their
// destructors' cleanup calls a second copy of TVirtualSample's (0xd729b0, not 0xd6a890).
#include "DareModules.h"

// The second base both classes have at +0x38 (its name and virtuals are unknown).
struct TModuleSecondBase {
    virtual void Slot0();
};

struct TVolPanGeneric : TVirtualSample, TModuleSecondBase {
    int Disconnect(int keep) override;
    ~TVolPanGeneric() override;
    virtual void Slot22(); virtual void Slot23(); virtual void Slot24(); virtual void Slot25(); virtual void Slot26();
    TVirtualSample* input;   // +0x40
    char padding_48[0x40];
    void* buffer;            // +0x88
    uint32_t bufferSize;     // +0x90
};
struct TPitchShifterGeneric : TVirtualSample, TModuleSecondBase {
    int Disconnect(int keep) override;
    ~TPitchShifterGeneric() override;
    virtual void Slot22(); virtual void Slot23(); virtual void Slot24(); virtual void Slot25(); virtual void Slot26();
    virtual void Slot27();
    char padding_40[0x18];
    TVirtualSample* input;   // +0x58
    uint32_t value60;        // +0x60
    char padding_64[0x14];
    uint32_t bufferSize;     // +0x78
    void* buffer;            // +0x80
};

T_DISCONNECT(TVolPanGeneric)        // 0xd72010
T_DISCONNECT(TPitchShifterGeneric)  // 0xd72b00

// Slots 20 and 21 (0xd72620, 0xd726b0): frees the buffer, if there is one.
__attribute__((always_inline)) TVolPanGeneric::~TVolPanGeneric() {
    if (buffer) {
        DareFree(buffer);
        buffer = nullptr;
        bufferSize = 0;
    }
}

// Slots 20 and 21 (0xd73110, 0xd731a0): frees the buffer, if there is one, clearing +0x60 too.
__attribute__((always_inline)) TPitchShifterGeneric::~TPitchShifterGeneric() {
    if (buffer) {
        DareFree(buffer);
        buffer = nullptr;
        bufferSize = 0;
        value60 = 0;
    }
}
