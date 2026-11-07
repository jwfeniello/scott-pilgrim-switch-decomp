// Gear's files: what a device opens. A file reports through its state (+0x20): an error code for Gear's error report
// and, when a listener is set, the listener.
#include "GearCore.h"

namespace nn { namespace os {
struct MutexType;
void LockMutex(MutexType* mutex);
void UnlockMutex(MutexType* mutex);
} }  // namespace nn::os

namespace Gear {

struct File;
// What +0x20 of a file points to.
struct FileState {
    char padding_0[0xb8];
    void (*listener)(void* context, FileState* state, File* file, uint32_t status);   // +0xb8
    void* context;                     // +0xc0
    char padding_c8[0x4];
    uint32_t status;                   // +0xcc
};

// Gear::File (the RTTI name comes from SndGear's copy of Gear): the base of every file. Slot names are provisional.
struct File {
    virtual ~File();
    virtual bool Remaining(uint64_t* out);          // slot 2
    virtual bool Seek(const uint64_t* position);    // slot 3: -1 for the end
    virtual void FileSlot4();
    virtual void FileSlot5();
    virtual bool AtEnd();                           // slot 6
    virtual void FileSlot7();
    virtual void FileSlot8();
    char padding_8[0x18];
    FileState* state;                  // +0x20
    uint8_t flags;                     // +0x28: bit 0 while open
    // Reports a status as an error and tells the listener.
    __attribute__((always_inline)) void Notify(uint32_t status) {
        FileState* s = state;
        Error(status);
        if (s->listener) s->listener(s->context, s, this, status);
    }
    // Sets the state's status first.
    __attribute__((always_inline)) void Report(uint32_t status) {
        state->status = status;
        Notify(status);
    }
};

// What a memory file reads: a block of memory, its size at +0x10.
struct MemoryBlock {
    char padding_0[0x10];
    uint32_t size;                     // +0x10
};
// The parts of Gear::MemFileDevice its files use.
struct MemFileDeviceView {
    char padding_0[0xf8];
    nn::os::MutexType* mutex;          // +0xf8
    char padding_100[0x28];
    MemoryBlock* block;                // +0x128
};

// Gear::MemFile (vtable 0x189c338): a file over a block of memory.
struct MemFile : File {
    bool Seek(const uint64_t* position) override;
    bool AtEnd() override;
    char padding_29[0x107];
    uint32_t position;                 // +0x130
    MemFileDeviceView* device;         // +0x138
};

// Slot 3 (0xa9e460): -1 seeks to the end; a position past the end reports error 2.
bool MemFile::Seek(const uint64_t* position) {
    nn::os::LockMutex(device->mutex);
    bool result;
    if (*position == uint64_t(-1)) {
        this->position = device->block->size;
        result = true;
    } else if (uint32_t(*position) <= device->block->size) {
        this->position = uint32_t(*position);
        result = true;
    } else {
        Report(2);
        result = false;
    }
    nn::os::UnlockMutex(device->mutex);
    return result;
}

// Slot 6 (0xa9e540): whether nothing is left to read (error 4 when the file isn't open). A successful read of what's
// left clears the state's status, and only a status that was set reaches the listener.
bool MemFile::AtEnd() {
    uint64_t remaining = 0;
    if (!(flags & 1)) {
        Error(4);
    } else if (Remaining(&remaining)) {
        FileState* s = state;
        uint32_t previous = s->status;
        s->status = 0;
        if (previous) Notify(0);
        else Error(0);
    }
    return remaining == 0;
}

}  // namespace Gear
