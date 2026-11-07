// Gear, Ubisoft's core library under Onyx: devices, files, streams, memory and input. Class names are the RTTI names;
// member and function names are provisional unless a comment says where they come from.
#pragma once
#include <stddef.h>
#include <stdint.h>

#ifndef GEAR_PLACEMENT_NEW
#define GEAR_PLACEMENT_NEW
inline void* operator new(size_t, void* address) noexcept { return address; }
#endif

namespace Gear {

struct DeviceInterface;
struct DeviceAliasInterface;

// Gear::MemInterface (vtable 0x1842090): an allocator. Only the slots used so far are named.
struct MemInterface {
    virtual ~MemInterface();                    // slots 0, 1
    virtual void* Alloc(uint32_t size);         // slot 2
    virtual void Slot3();
    virtual void Slot4();
    virtual void Slot5();
    virtual void Free(void* block) noexcept;    // slot 6
};

// What the global at 0x1926bd8 points to: the table of allocators, one per memory range (allocations are freed through
// the one that owns their address).
struct MemManager {
    char padding_0[0x370];
    MemInterface* allocators[256];      // +0x370
    uint8_t IndexOf(const void* block);  // 0xa82b30
};
extern MemManager* Memory;              // 0x1926bd8
extern MemInterface* DefaultAllocator;  // 0x1926bb8
void* Allocate(MemInterface* allocator, size_t size);   // 0xa972b0

// The length of a C string, a word at a time (the classic magic-number loop), as the setters inline it.
__attribute__((always_inline)) inline uint32_t StringLength(const char* text) {
    const char* p = text;
    for (; reinterpret_cast<uintptr_t>(p) & 3; ++p)
        if (*p == 0) return p - text;
    const uint32_t* word = reinterpret_cast<const uint32_t*>(p);
    for (;;) {
        uint32_t bits = *word++;
        if ((((bits + 0x7efefeffu) ^ ~bits) & ~0x7efefeffu) != 0) {
            const char* c = reinterpret_cast<const char*>(word - 1);
            if (c[0] == 0) return c - text;
            if (c[1] == 0) return c - text + 1;
            if (c[2] == 0) return c - text + 2;
            if (c[3] == 0) return c - text + 3;
        }
    }
}
__attribute__((always_inline)) inline MemInterface* AllocatorFor(const void* block) {
    MemManager* manager = Memory;
    return manager->allocators[manager->IndexOf(block)];
}

// Gear's strings share their characters: a buffer with a reference count, the characters at +0x18. A string keeps the
// allocator it was made with, but its buffer is freed through the allocator that owns its address.
struct StringBuffer {
    int32_t references;
    char padding_4[0x14];
    char chars[1];                      // +0x18
};
struct String {
    MemInterface* allocator;
    StringBuffer* buffer;
    String() : allocator(DefaultAllocator), buffer(nullptr) {}
    ~String() {
        if (buffer) {
            if (__atomic_sub_fetch(&buffer->references, 1, __ATOMIC_RELAXED) == 0) {
                if (StringBuffer* old = buffer) AllocatorFor(old)->Free(old);
            }
            buffer = nullptr;
        }
    }
    String& operator=(const String& other) {
        if (this != &other && buffer != other.buffer) {
            StringBuffer* old = buffer;
            if (other.buffer) {
                __atomic_add_fetch(&other.buffer->references, 1, __ATOMIC_RELAXED);
                buffer = other.buffer;
            } else {
                buffer = nullptr;
            }
            if (old && __atomic_sub_fetch(&old->references, 1, __ATOMIC_RELAXED) == 0) AllocatorFor(old)->Free(old);
        }
        return *this;
    }
    const char* Chars() const { return buffer ? buffer->chars : ""; }
    String& Assign(const char* text, uint32_t length);   // 0x6c7b40
};

// Path's plain fields, a base of its own: they're set before the vtable when a path is made, and copied as one
// 21-byte block (a base's data size) when one is assigned. The name is provisional.
struct PathInfo {
    PathInfo() : stamp(0x80000000), device(nullptr), value18(0), flag1c(0) {}
    int32_t stamp;                     // +0x8 in Path: the registry's count (+0x364) when the device was found;
                                       // 0x80000000 when new, and again whenever the first name is set
    int32_t valueC;                    // +0xc
    DeviceInterface* device;           // +0x10: the device the path was found on
    int32_t value18;                   // +0x18
    uint8_t flag1c;                    // +0x1c
};

// Gear::Path (vtable 0x189c4b8, 0x40 bytes). Slot 3 deletes it through the default allocator, slot 5 is the second
// name's characters.
struct Path : PathInfo {
    Path() = default;
    // 0xaa0c60: the path a filter device reads through, made from what follows the first ':' of the outer path's
    // second name. Only the filters call it, and its one copy sits among their code; the signature is provisional.
    explicit Path(const Path* outer);
    virtual ~Path();
    virtual Path* Clone() const;                   // slot 2
    virtual void Destroy();                        // slot 3
    virtual void Slot4(char* out, uint32_t size) const;
    virtual const char* Name30() const;            // slot 5
    virtual void SetName20(const char* name);      // slot 6
    virtual void SetName30(const char* name);      // slot 7
    virtual void Slot8();
    String name20;                     // +0x20
    String name30;                     // +0x30
};

// What the global at 0x1926be0 points to: the registry of mounted devices. Resolve finds a path's device and keeps it
// in the path, unless it was found since the registry last changed. The forwarders after DeviceInterface resolve their own
// copy of a path and pass it to the device's slot; only the filter devices have them in the binary, inlined, so they
// may be the filters' own.
struct DeviceManager {
    void Unregister(DeviceInterface* device);         // 0xa83130
    void RemoveAlias(DeviceAliasInterface* alias);    // 0xa98450
    bool Resolve(const Path& path);                   // 0xaa1000
    bool Slot6(const Path& path, void* out);
    bool Exists(const Path& path);
    bool IsFolder(const Path& path);
    bool IsFile(const Path& path);
    bool Slot10(const Path& path);
    bool Slot11(const Path& path);
    int32_t Slot12(const Path& path);
    int32_t Slot13(const Path& path);
    int32_t Slot14(const Path& path);
    bool Slot15(const Path& path);
    bool Slot16(const Path& path);
    bool Slot17(const Path& from, const Path& to, bool flag);   // 0xaa1e10: slots 17 and 18, the flag clear and set
    void* Slot19(const Path& path, void* arg);
};
extern DeviceManager* Devices;   // 0x1926be0

// Gear reports errors through the function at 0x189b308, with level 0 and the code: 4 for an operation a device doesn't
// support, 5 for a path that isn't there.
extern void (*ReportError)(int level, const uint32_t* code);
__attribute__((always_inline)) inline void Error(uint32_t code) { ReportError(0, &code); }

// The next device type number (0x295e278); each device class takes one the first time it's asked (slot 4).
extern uint32_t NextDeviceType;

// Gear::DeviceInterface (vtable 0x189aff0): the base of every device, an interface of 21 slots after the destructor.
// Its destructor isn't empty in the original (it sets the vtable, 0xa82f80, which clang skips for an empty body); the
// null statement stands for whatever compiled to nothing there, likely a disabled assertion. The asynchronous devices'
// defaults for slots 5-18 report error 4 and return 0, slot 19's returns null and slot 20's does nothing; most real
// signatures aren't known yet, and the names of 7-9 are provisional.
struct DeviceInterface {
    virtual ~DeviceInterface() { ; }                                              // slots 0, 1
    virtual bool Attributes(const char* path, void* reserved, uint32_t* out) = 0; // slot 2: 0xa9 for async devices
    virtual void* Item(uint32_t index) = 0;                                       // slot 3: an entry of a list
    virtual uint32_t Type() = 0;                                                  // slot 4
    virtual bool Slot5() = 0;
    virtual bool Slot6(const Path& path, void* out) = 0;
    virtual bool Exists(const Path& path) = 0;                                    // slot 7
    virtual bool IsFolder(const Path& path) = 0;                                  // slot 8
    virtual bool IsFile(const Path& path) = 0;                                    // slot 9: 7 and not 8
    virtual bool Slot10(const Path& path) = 0;
    virtual bool Slot11(const Path& path) = 0;
    virtual int32_t Slot12(const Path& path) = 0;   // -1 when the path has no device
    virtual int32_t Slot13(const Path& path) = 0;   // -1 when the path has no device
    virtual int32_t Slot14(const Path& path) = 0;   // -1 when the path has no device
    virtual bool Slot15(const Path& path) = 0;
    virtual bool Slot16(const Path& path) = 0;
    virtual bool Slot17(const Path& from, const Path& to) = 0;
    virtual bool Slot18(const Path& from, const Path& to) = 0;
    virtual void* Slot19(const Path& path, void* arg) = 0;
    virtual void Slot20() = 0;
    virtual void Slot21() = 0;
    virtual void Slot22() = 0;
    char padding_8[0xc8];
};
static_assert(sizeof(DeviceInterface) == 0xd0, "DeviceInterface size");

inline bool DeviceManager::Slot6(const Path& path, void* out) { return Resolve(path) && path.device->Slot6(path, out); }
inline bool DeviceManager::Exists(const Path& path) { return Resolve(path) && path.device->Exists(path); }
inline bool DeviceManager::IsFolder(const Path& path) { return Resolve(path) && path.device->IsFolder(path); }
inline bool DeviceManager::IsFile(const Path& path) { return Resolve(path) && path.device->IsFile(path); }
// Slots 10 and 11 fail with error 13 when the path is already there.
inline bool DeviceManager::Slot10(const Path& path) {
    if (!Resolve(path)) return false;
    if (Exists(path)) {
        Error(13);
        return false;
    }
    return path.device->Slot10(path);
}
inline bool DeviceManager::Slot11(const Path& path) {
    if (!Resolve(path)) return false;
    if (Exists(path)) {
        Error(13);
        return false;
    }
    return path.device->Slot11(path);
}
inline int32_t DeviceManager::Slot12(const Path& path) { return Resolve(path) ? path.device->Slot12(path) : -1; }
inline int32_t DeviceManager::Slot13(const Path& path) { return Resolve(path) ? path.device->Slot13(path) : -1; }
inline int32_t DeviceManager::Slot14(const Path& path) { return Resolve(path) ? path.device->Slot14(path) : -1; }
// Slot 15 goes to slot 10 when the path isn't there yet, and fails on a folder.
inline bool DeviceManager::Slot15(const Path& path) {
    if (!Resolve(path)) return false;
    if (!path.device->Exists(path)) return path.device->Slot10(path);
    if (path.device->IsFolder(path)) return false;
    return path.device->Slot15(path);
}
inline bool DeviceManager::Slot16(const Path& path) { return Resolve(path) && path.device->Slot16(path); }
// Slot 19 is for folders only (error 1 otherwise).
inline void* DeviceManager::Slot19(const Path& path, void* arg) {
    if (!Resolve(path)) return nullptr;
    if (!IsFolder(path)) {
        Error(1);
        return nullptr;
    }
    return path.device->Slot19(path, arg);
}

// Gear::DeviceAliasInterface (vtable 0x189bdd8): a name standing for a device; as DeviceInterface's, its destructor
// sets the vtable.
struct DeviceAliasInterface {
    virtual ~DeviceAliasInterface() { ; }
};

// Gear::Thread (vtable 0x189b400). Slot 6 waits for the thread to end (-1: no time limit).
struct Thread {
    virtual ~Thread();                 // 0xa82c40
    virtual void ThreadSlot2();
    virtual void ThreadSlot3();
    virtual void ThreadSlot4();
    virtual void ThreadSlot5();
    virtual void Wait(int32_t timeout);   // slot 6
    char padding_8[0x148];
};

}  // namespace Gear
