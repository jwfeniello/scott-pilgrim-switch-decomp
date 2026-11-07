// Fire's platform character format (19PlatformECharFormat).
#include "FireCore.h"

// 0xf287e0 (PlatformECharFormat slot 0): the block member drops its reference, then the ECharFormat base runs.
PlatformECharFormat::~PlatformECharFormat() {
}

// 0xf28890 (PlatformEDevice slot 0): destroys the character format member, then the EDevice base frees its buffers.
PlatformEDevice::~PlatformEDevice() {
    charFormat.block.Release();
}

// 0xf29210 (PlatformEDevice slot 10): forwards to the character format member with this device.
void PlatformEDevice::Slot10(int value) {
    charFormat.Func_f2b740(this, value);
}
