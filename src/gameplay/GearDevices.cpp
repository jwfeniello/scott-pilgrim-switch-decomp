// Gear's devices. Each device leaves the registry as it is destroyed, and each device class numbers itself (slot 4)
// the first time it's asked.
#include "GearCore.h"

namespace Gear {

// Gear::AsynchDevice (vtable 0x189b140, its thread's at 0x189b258): a device served by its own thread, which it
// derives from at +0xd0. The two asynchronous devices below both shut it down first thing in their destructors.
struct AsynchDevice : DeviceInterface, Thread {
    ~AsynchDevice() override;          // 0xa7de60
    bool Attributes(const char* path, void* reserved, uint32_t* out) override;
    void* Item(uint32_t index) override;
    bool Slot5() override;
    bool Slot6() override;
    bool Slot7() override;
    bool Slot8() override;
    bool Slot9() override;
    bool Slot10() override;
    bool Slot11() override;
    bool Slot12() override;
    bool Slot13() override;
    bool Slot14() override;
    bool Slot15() override;
    bool Slot16() override;
    bool Slot17() override;
    bool Slot18() override;
    void* Slot19() override;
    void Slot20() override;
    void Slot21() override;
    void Slot22() override;
    virtual void Slot23();
    virtual void Slot24();
    virtual void Slot25();
    virtual void Slot26();
    virtual void Slot27();
    virtual void Slot28();
    virtual void Slot29();
    virtual void Slot30();
    virtual void Slot31();
    virtual void Slot32();
    void Shutdown();                   // 0xa82f90: leaves the registry, stops and waits for the thread, drops the queue
    char padding_220[0x1e0];
    MemInterface* allocator;           // +0x400
};

// Gear::AsynchGeneric (vtable 0x189b4f8).
struct AsynchGeneric : AsynchDevice {
    ~AsynchGeneric() override;
    uint32_t Type() override;
};
AsynchGeneric::~AsynchGeneric() { Shutdown(); }

// Something held through +0x738 of the platform device: an object with a reference count at +0x8.
struct SharedObject {
    virtual ~SharedObject();
    int32_t references;                // +0x8
};
struct SharedHolder {
    SharedObject* object;
};

// Gear::AsynchPlatformSpecific (vtable 0x189b6b0).
struct AsynchPlatformSpecific : AsynchDevice {
    inline ~AsynchPlatformSpecific() override;
    uint32_t Type() override;
    char padding_408[0x330];
    SharedHolder* holder;              // +0x738
};
// Declared inline: without the hint clang doesn't inline it into the deleting destructor, which the original does.
inline AsynchPlatformSpecific::~AsynchPlatformSpecific() {
    Shutdown();
    if (SharedHolder* held = holder) {
        MemInterface* from = allocator;
        if (SharedObject* object = held->object) {
            if (__atomic_sub_fetch(&object->references, 1, __ATOMIC_RELAXED) == 0) delete object;
        }
        from->Free(held);
    }
    holder = nullptr;
}
uint32_t AsynchGeneric::Type() {   // 0xa843a0
    static uint32_t type = NextDeviceType++;
    return type;
}
uint32_t AsynchPlatformSpecific::Type() {   // 0xa84b50
    static uint32_t type = NextDeviceType++;
    return type;
}

// Gear::DiskDevice (vtable 0x189bf88).
struct DiskDevice : DeviceInterface {
    ~DiskDevice() override;
    uint32_t Type() override;
    bool Attributes(const char* path, void* reserved, uint32_t* out) override;
    void* Item(uint32_t index) override;
    bool Slot5() override;
    bool Slot6() override;
    bool Slot7() override;
    bool Slot8() override;
    bool Slot9() override;
    bool Slot10() override;
    bool Slot11() override;
    bool Slot12() override;
    bool Slot13() override;
    bool Slot14() override;
    bool Slot15() override;
    bool Slot16() override;
    bool Slot17() override;
    bool Slot18() override;
    void* Slot19() override;
    void Slot20() override;
    void Slot21() override;
    void Slot22() override;
};
DiskDevice::~DiskDevice() { Devices->Unregister(this); }
uint32_t DiskDevice::Type() {   // 0xa987b0
    static uint32_t type = NextDeviceType++;
    return type;
}

// Gear::MemDevice (vtable 0x189bec0).
struct MemDevice : DeviceInterface {
    ~MemDevice() override;
    uint32_t Type() override;
    bool Attributes(const char* path, void* reserved, uint32_t* out) override;
    void* Item(uint32_t index) override;
    bool Slot5() override;
    bool Slot6() override;
    bool Slot7() override;
    bool Slot8() override;
    bool Slot9() override;
    bool Slot10() override;
    bool Slot11() override;
    bool Slot12() override;
    bool Slot13() override;
    bool Slot14() override;
    bool Slot15() override;
    bool Slot16() override;
    bool Slot17() override;
    bool Slot18() override;
    void* Slot19() override;
    void Slot20() override;
    void Slot21() override;
    void Slot22() override;
};
MemDevice::~MemDevice() { Devices->Unregister(this); }
uint32_t MemDevice::Type() {   // 0xa998f0
    static uint32_t type = NextDeviceType++;
    return type;
}

// Gear::MemFileDevice (vtable 0x189c1e8).
struct MemFileDevice : DeviceInterface {
    uint32_t Type() override;
    bool Attributes(const char* path, void* reserved, uint32_t* out) override;
    void* Item(uint32_t index) override;
    bool Slot5() override;
    bool Slot6() override;
    bool Slot7() override;
    bool Slot8() override;
    bool Slot9() override;
    bool Slot10() override;
    bool Slot11() override;
    bool Slot12() override;
    bool Slot13() override;
    bool Slot14() override;
    bool Slot15() override;
    bool Slot16() override;
    bool Slot17() override;
    bool Slot18() override;
    void* Slot19() override;
    void Slot20() override;
    void Slot21() override;
    void Slot22() override;
};
uint32_t MemFileDevice::Type() {   // 0xa9d4a0
    static uint32_t type = NextDeviceType++;
    return type;
}

// Gear::ZLibDevice (vtable 0x189cfd8).
struct ZLibDevice : DeviceInterface {
    ~ZLibDevice() override;
    uint32_t Type() override;
    bool Attributes(const char* path, void* reserved, uint32_t* out) override;
    void* Item(uint32_t index) override;
    bool Slot5() override;
    bool Slot6() override;
    bool Slot7() override;
    bool Slot8() override;
    bool Slot9() override;
    bool Slot10() override;
    bool Slot11() override;
    bool Slot12() override;
    bool Slot13() override;
    bool Slot14() override;
    bool Slot15() override;
    bool Slot16() override;
    bool Slot17() override;
    bool Slot18() override;
    void* Slot19() override;
    void Slot20() override;
    void Slot21() override;
    void Slot22() override;
};
ZLibDevice::~ZLibDevice() { Devices->Unregister(this); }
uint32_t ZLibDevice::Type() {   // 0xaa02f0
    static uint32_t type = NextDeviceType++;
    return type;
}

// Gear::DeviceAlias (vtable 0x189bdb8): an alias that leaves the registry if it was added.
struct DeviceAlias : DeviceAliasInterface {
    ~DeviceAlias() override;
    char padding_8[0x20];
    bool registered;                   // +0x28
};
DeviceAlias::~DeviceAlias() {
    if (registered) Devices->RemoveAlias(this);
}

}  // namespace Gear
