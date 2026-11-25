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

// 0xf28c90 (PlatformEDevice slot 5): on the last unlock, drops the character formats' blocks (the editor's when there
// is one, else the device's own), then ends the drawing mode.
void PlatformEDevice::Slot5() {
    if (!lockCount || --lockCount) return;
    if (RichEdit* edit = richEdit) {
        int n = edit->formatCount;
        PlatformECharFormat* f = edit->formats;
        for (int i = 0; i < n; i++, f++) f->block.Release();
        richEdit->charFormat.block.Release();
    } else {
        charFormat.block.Release();
    }
    switch (mode30) {
    case 1:
        value128 = 0;
        break;
    case 2:
        FreeBuffer(buffer20);
        FreeBuffer(buffer28);
        break;
    }
    flag3a = false;
    mode30 = 0;
}

// 0xf2b350: copies every field (the face name as at most 31 bytes).
// Not yet matched: the original walks the name from a separate this+0x48 base and compares its counter in 32 bits, and
// copies the two ints at +0xa8 separately; ours addresses from this, compares in 64 bits and merges the int copies.
ECharFormat& ECharFormat::operator=(const ECharFormat& other) {
    if (this == &other) return *this;
    font8.Set(other.font8);
    text28.Set(other.text28);
    face48.Set(other.face48);
    text68.Set(other.text68);
    text88.Set(other.text88);
    valuea8 = other.valuea8;
    valueac = other.valueac;
    blockb0 = other.blockb0;
    valuec8 = other.valuec8;
    valued0 = other.valued0;
    return *this;
}

// 0xf25cb0: resets the indices and frees the buffer.
FireRichEditSpan::~FireRichEditSpan() {
    end8 = -1;
    value0 = 0;
    start4 = -1;
    if (buffer) {
        FireFree(buffer);
        buffer = 0;
    }
}

// Text reference release (provisional; inlined into the RichEdit destructor).
FireTextRef::~FireTextRef() {
    if (text) {
        FireTextRelease(text);
        text = 0;
    }
}

// 0xf25830 (RichEdit slot 0): unregisters the name, frees the buffers, items, formats, lines and blocks, clears the
// value and releases the texture; then the members and the base go.
RichEdit::~RichEdit() {
    if (value90 && name && *name) FireUnregisterName(player->namesc50, name, this);
    FireFree(buffer508);
    FireFree(name);
    FireFree(buffer70);
    if (items) {
        for (int i = 0; i < itemCount; i++) {
            FireRichEditItem* item = items[i];
            item->~FireRichEditItem();
            if (player) FireFree(item);
            else FireRichEditItem::operator delete(item);
        }
        FireFree(items);
    }
    if (ownsBuffer40) {
        if (buffer40) FireFree(buffer40);
        buffer40 = 0;
        value48 = 0;
    }
    delete[] formats;
    delete[] lines;
    FireFree(bufferf0);
    while (FireRichEditBlock* b = blocks) {
        blocks = b->next;
        delete b;
    }
    valuea8.Clear();
    ReleaseTexture();
}
