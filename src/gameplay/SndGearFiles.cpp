// SndGear: the sound engine's own copy of Gear (its classes carry SndGear RTTI names). The code is Gear's (see
// GearFiles.cpp, GearMemory.cpp and GearDevices.cpp) over SndGear's layouts and globals. Member and function names
// follow the Gear versions and are provisional.
#include <stddef.h>
#include <stdint.h>

namespace nn { namespace os {
struct MutexType;
void LockMutex(MutexType* mutex);
void UnlockMutex(MutexType* mutex);
} }  // namespace nn::os
extern "C" void* memcpy(void* to, const void* from, size_t size) noexcept;   // 0xfa3330

namespace SndGear {

// SndGear's error report (0x18d7de8), the counterpart of Gear::ReportError.
extern void (*ReportError)(int level, const uint32_t* code);
__attribute__((always_inline)) inline void Error(uint32_t code) { ReportError(0, &code); }

struct File;
// What +0x28 of a file points to.
struct FileState {
    char padding_0[0xc8];
    void (*listener)(void* context, FileState* state, File* file, uint32_t status);   // +0xc8
    void* context;                     // +0xd0
    char padding_d8[0x4];
    uint32_t status;                   // +0xdc
};

// SndGear::File: the base of every file.
struct File {
    virtual ~File();
    virtual bool Remaining(uint64_t* out);          // slot 2
    virtual bool Seek(const uint64_t* position);    // slot 3: -1 for the end
    virtual void FileSlot4();
    virtual void FileSlot5();
    virtual bool AtEnd();                           // slot 6
    virtual void FileSlot7();
    virtual void FileSlot8();
    char padding_8[0x20];
    FileState* state;                  // +0x28
    uint8_t flags;                     // +0x30: bit 0 while open
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
// The parts of SndGear::MemFileDevice its files use.
struct MemFileDeviceView {
    char padding_0[0x128];
    nn::os::MutexType* mutex;          // +0x128
    char padding_130[0x28];
    MemoryBlock* block;                // +0x158
};

// SndGear::MemFile: a file over a block of memory.
struct MemFile : File {
    bool Seek(const uint64_t* position) override;
    bool AtEnd() override;
    char padding_31[0xb];
    uint32_t position;                 // +0x3c
    MemFileDeviceView* device;         // +0x40
};

// Slot 3 (0xdba140): -1 seeks to the end; a position past the end reports error 2.
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

// Slot 6 (0xdba220): whether nothing is left to read (error 4 when the file isn't open). A successful read of what's
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

// SndGear::StaticMemoryBlockProvider: a fixed block of memory read and written by offset, as a memory file's
// contents. Reads stop at what has been written (error 2 past it), writes at the block's end.
struct StaticMemoryBlockProvider {
    virtual ~StaticMemoryBlockProvider();
    virtual uint32_t Read(void* to, uint32_t offset, uint32_t count);          // slot 2
    virtual uint32_t Write(const void* from, uint32_t offset, uint32_t count); // slot 3
    char padding_8[8];
    uint32_t size;                     // +0x10: how much has been written
    char padding_14[4];
    uint8_t* data;                     // +0x18
    char padding_20[4];
    uint32_t capacity;                 // +0x24
};

uint32_t StaticMemoryBlockProvider::Read(void* to, uint32_t offset, uint32_t count) {   // slot 2 (0xdb9340)
    if (offset + count > size) {
        if (offset >= size) {
            Error(2);
            return 0;
        }
        count = size - offset;
    }
    if (count) memcpy(to, data + offset, count);
    return count;
}

uint32_t StaticMemoryBlockProvider::Write(const void* from, uint32_t offset, uint32_t count) {   // slot 3 (0xdb93c0)
    uint32_t written = offset + count > capacity ? capacity - offset : count;
    if (written) {
        memcpy(data + offset, from, written);
        if (offset + written > size) size = offset + written;
    }
    return written;
}

// The word at 0x1948b38, read or written through one function, the counterpart of Gear's (0xa81230). The code is
// folded with a slot of SndGear::DList::DRoot<...> (slot 2), so the vtable lists it there.
extern uint32_t Setting1948b38;
void ExchangeSetting(bool read, uint32_t* value) {   // 0xdb72b0
    uint32_t* to = read ? value : &Setting1948b38;
    *to = read ? Setting1948b38 : *value;
}

// The next device type number (0x295e294), the counterpart of Gear::NextDeviceType.
extern uint32_t NextDeviceType;

// SndGear::MemFileDevice: slot 4 is the device's type, numbered on first use.
struct MemFileDevice {
    virtual ~MemFileDevice();
    virtual bool DeviceSlot2();
    virtual void* DeviceSlot3();
    virtual uint32_t Type();           // slot 4
};
uint32_t MemFileDevice::Type() {   // slot 4 (0xdb9840)
    static uint32_t type = NextDeviceType++;
    return type;
}

}  // namespace SndGear
