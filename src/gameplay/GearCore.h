// Gear, Ubisoft's core library under Onyx: devices, files, streams, memory and input. Class names are the RTTI names;
// member and function names are provisional unless a comment says where they come from.
#pragma once
#include <stddef.h>
#include <stdint.h>

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

// What the global at 0x1926be0 points to: the registry of mounted devices.
struct DeviceManager {
    void Unregister(DeviceInterface* device);         // 0xa83130
    void RemoveAlias(DeviceAliasInterface* alias);    // 0xa98450
};
extern DeviceManager* Devices;   // 0x1926be0

// The next device type number (0x295e278); each device class takes one the first time it's asked (slot 4).
extern uint32_t NextDeviceType;

// Gear::DeviceInterface (vtable 0x189aff0): the base of every device, an interface of 21 slots after the destructor.
// Its destructor isn't empty in the original (it sets the vtable, 0xa82f80, which clang skips for an empty body); the
// null statement stands for whatever compiled to nothing there, likely a disabled assertion. The asynchronous devices'
// defaults for slots 5-18 report error 4 and return 0, slot 19's returns null and slot 20's does nothing; their real
// signatures aren't known yet.
struct DeviceInterface {
    virtual ~DeviceInterface() { ; }                                              // slots 0, 1
    virtual bool Attributes(const char* path, void* reserved, uint32_t* out) = 0; // slot 2: 0xa9 for async devices
    virtual void* Item(uint32_t index) = 0;                                       // slot 3: an entry of a list
    virtual uint32_t Type() = 0;                                                  // slot 4
    virtual bool Slot5() = 0;
    virtual bool Slot6() = 0;
    virtual bool Slot7() = 0;
    virtual bool Slot8() = 0;
    virtual bool Slot9() = 0;
    virtual bool Slot10() = 0;
    virtual bool Slot11() = 0;
    virtual bool Slot12() = 0;
    virtual bool Slot13() = 0;
    virtual bool Slot14() = 0;
    virtual bool Slot15() = 0;
    virtual bool Slot16() = 0;
    virtual bool Slot17() = 0;
    virtual bool Slot18() = 0;
    virtual void* Slot19() = 0;
    virtual void Slot20() = 0;
    virtual void Slot21() = 0;
    virtual void Slot22() = 0;
    char padding_8[0xc8];
};
static_assert(sizeof(DeviceInterface) == 0xd0, "DeviceInterface size");

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
