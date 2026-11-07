// Dare::DareThread (RTTI name): slots that SND_PackageManager, Renderer and CAudioRenderer inherit from it. The slot and
// member names are provisional.
#include <stdint.h>

namespace Dare {

struct DareThread {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3();
    virtual int32_t Slot4();                             // slot 4
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual bool Slot8(bool changed);                    // slot 8 (0xdc0ff0)
    virtual void Slot9(); virtual void Slot10(); virtual void Slot11(); virtual void Slot12(); virtual void Slot13();
    virtual int32_t Configure(int32_t value, int32_t mode);   // slot 14
    char padding_8[0x13c];
    int32_t value;      // +0x144
    int32_t value148;   // +0x148
    int32_t mode;       // +0x14c
};

// Slot 4 (0xd379e0): 7. The original guards a function-local static whose construction compiles to nothing; the empty
// static here is a guess at that shape.
struct DareThreadStatic {
    DareThreadStatic() {}
};
int32_t DareThread::Slot4() {
    static DareThreadStatic once;
    return 7;
}

// Slot 14 (0xd37b10): stores `value` (and -1 at +0x148), takes a nonzero `mode`, and tells slot 8 whether the mode
// changed.
int32_t DareThread::Configure(int32_t value, int32_t mode) {
    value148 = -1;
    this->value = value;
    bool changed = false;
    if (mode) {
        int32_t previous = this->mode;
        this->mode = mode;
        changed = previous != mode;
    }
    return Slot8(changed);
}

}  // namespace Dare
