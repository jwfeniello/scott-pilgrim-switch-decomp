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
    bool Slot6(const Path& path, void* out) override;
    bool Exists(const Path& path) override;
    bool IsFolder(const Path& path) override;
    bool IsFile(const Path& path) override;
    bool Slot10(const Path& path) override;
    bool Slot11(const Path& path) override;
    int32_t Slot12(const Path& path) override;
    int32_t Slot13(const Path& path) override;
    int32_t Slot14(const Path& path) override;
    bool Slot15(const Path& path) override;
    bool Slot16(const Path& path) override;
    bool Slot17(const Path& from, const Path& to) override;
    bool Slot18(const Path& from, const Path& to) override;
    void* Slot19(const Path& path, void* arg) override;
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

// The platform's file system (EE layer): the object at 0x195b660 and its path query (0xe08c10), which fills in a
// value the disk device doesn't use. Both names are provisional.
extern void* PlatformFileSystem;
bool QueryPlatformPath(void* fileSystem, const char* path, uint32_t* info);

// Gear::DiskDevice (vtable 0x189bf88).
struct DiskDevice : DeviceInterface {
    ~DiskDevice() override;
    uint32_t Type() override;
    bool Attributes(const char* path, void* reserved, uint32_t* out) override;
    void* Item(uint32_t index) override;
    bool Slot5() override;
    bool Slot6(const Path& path, void* out) override;
    bool Exists(const Path& path) override;
    bool IsFolder(const Path& path) override;
    bool IsFile(const Path& path) override;
    bool Slot10(const Path& path) override;
    bool Slot11(const Path& path) override;
    int32_t Slot12(const Path& path) override;
    int32_t Slot13(const Path& path) override;
    int32_t Slot14(const Path& path) override;
    bool Slot15(const Path& path) override;
    bool Slot16(const Path& path) override;
    bool Slot17(const Path& from, const Path& to) override;
    bool Slot18(const Path& from, const Path& to) override;
    void* Slot19(const Path& path, void* arg) override;
    void Slot20() override;
    void Slot21() override;
    void Slot22() override;
};
DiskDevice::~DiskDevice() { Devices->Unregister(this); }
uint32_t DiskDevice::Type() {   // 0xa987b0
    static uint32_t type = NextDeviceType++;
    return type;
}

// Slot 2 (0xa98680): attributes 0xe9 for any path the platform knows.
// Not yet matched: the original sets the return value before storing the attributes; here the store comes first.
bool DiskDevice::Attributes(const char* path, void* reserved, uint32_t* out) {
    uint32_t info;
    if (QueryPlatformPath(PlatformFileSystem, path, &info)) {
        *out = 0xe9;
        return true;
    }
    uint32_t code = 5;
    ReportError(0, &code);
    return false;
}

// Slot 9 (0xa98940): a path that exists and isn't a folder.
bool DiskDevice::IsFile(const Path& path) {
    if (Exists(path)) return !IsFolder(path);
    Error(5);
    return false;
}

// Gear::MemDevice (vtable 0x189bec0).
struct MemDevice : DeviceInterface {
    ~MemDevice() override;
    uint32_t Type() override;
    bool Attributes(const char* path, void* reserved, uint32_t* out) override;
    void* Item(uint32_t index) override;
    bool Slot5() override;
    bool Slot6(const Path& path, void* out) override;
    bool Exists(const Path& path) override;
    bool IsFolder(const Path& path) override;
    bool IsFile(const Path& path) override;
    bool Slot10(const Path& path) override;
    bool Slot11(const Path& path) override;
    int32_t Slot12(const Path& path) override;
    int32_t Slot13(const Path& path) override;
    int32_t Slot14(const Path& path) override;
    bool Slot15(const Path& path) override;
    bool Slot16(const Path& path) override;
    bool Slot17(const Path& from, const Path& to) override;
    bool Slot18(const Path& from, const Path& to) override;
    void* Slot19(const Path& path, void* arg) override;
    void Slot20() override;
    void Slot21() override;
    void Slot22() override;
};
MemDevice::~MemDevice() { Devices->Unregister(this); }
uint32_t MemDevice::Type() {   // 0xa998f0
    static uint32_t type = NextDeviceType++;
    return type;
}

// Slot 9 (0xa99da0), as DiskDevice's.
bool MemDevice::IsFile(const Path& path) {
    if (Exists(path)) return !IsFolder(path);
    Error(5);
    return false;
}

// Gear::MemFileDevice (vtable 0x189c1e8).
struct MemFileDevice : DeviceInterface {
    uint32_t Type() override;
    bool Attributes(const char* path, void* reserved, uint32_t* out) override;
    void* Item(uint32_t index) override;
    bool Slot5() override;
    bool Slot6(const Path& path, void* out) override;
    bool Exists(const Path& path) override;
    bool IsFolder(const Path& path) override;
    bool IsFile(const Path& path) override;
    bool Slot10(const Path& path) override;
    bool Slot11(const Path& path) override;
    int32_t Slot12(const Path& path) override;
    int32_t Slot13(const Path& path) override;
    int32_t Slot14(const Path& path) override;
    bool Slot15(const Path& path) override;
    bool Slot16(const Path& path) override;
    bool Slot17(const Path& from, const Path& to) override;
    bool Slot18(const Path& from, const Path& to) override;
    void* Slot19(const Path& path, void* arg) override;
    void Slot20() override;
    void Slot21() override;
    void Slot22() override;
};
uint32_t MemFileDevice::Type() {   // 0xa9d4a0
    static uint32_t type = NextDeviceType++;
    return type;
}

// Gear::FilterDevice (vtable 0x189bdf8): a device that reads another device's files through a filter. It leaves
// Attributes (slot 2) and slots 21 and 22 to each filter, so it is abstract; the filters share its type number.
struct FilterDevice : DeviceInterface {
    ~FilterDevice() override;
    void* Item(uint32_t index) override;
    uint32_t Type() override;
    bool Slot5() override;
    bool Slot6(const Path& path, void* out) override;
    bool Exists(const Path& path) override;
    bool IsFolder(const Path& path) override;
    bool IsFile(const Path& path) override;
    bool Slot10(const Path& path) override;
    bool Slot11(const Path& path) override;
    int32_t Slot12(const Path& path) override;
    int32_t Slot13(const Path& path) override;
    int32_t Slot14(const Path& path) override;
    bool Slot15(const Path& path) override;
    bool Slot16(const Path& path) override;
    bool Slot17(const Path& from, const Path& to) override;
    bool Slot18(const Path& from, const Path& to) override;
    void* Slot19(const Path& path, void* arg) override;
    void Slot20() override;
};
FilterDevice::~FilterDevice() { Devices->Unregister(this); }
uint32_t FilterDevice::Type() {   // 0xaa02f0
    static uint32_t type = NextDeviceType++;
    return type;
}

// The slots a filter passes on: each to the same slot of the device its inner path is on.
bool FilterDevice::Slot6(const Path& path, void* out) {   // 0xaa03e0
    return Devices->Slot6(Path(&path), out);
}
bool FilterDevice::Exists(const Path& path) {   // 0xaa0470
    return Devices->Exists(Path(&path));
}
bool FilterDevice::IsFolder(const Path& path) {   // 0xaa04f0
    return Devices->IsFolder(Path(&path));
}
bool FilterDevice::IsFile(const Path& path) {   // 0xaa0570
    return Devices->IsFile(Path(&path));
}
bool FilterDevice::Slot10(const Path& path) {   // 0xaa05f0
    return Devices->Slot10(Path(&path));
}
bool FilterDevice::Slot11(const Path& path) {   // 0xaa06b0
    return Devices->Slot11(Path(&path));
}
int32_t FilterDevice::Slot12(const Path& path) {   // 0xaa0770
    return Devices->Slot12(Path(&path));
}
int32_t FilterDevice::Slot13(const Path& path) {   // 0xaa07f0
    return Devices->Slot13(Path(&path));
}
int32_t FilterDevice::Slot14(const Path& path) {   // 0xaa0870
    return Devices->Slot14(Path(&path));
}
bool FilterDevice::Slot15(const Path& path) {   // 0xaa08f0
    return Devices->Slot15(Path(&path));
}
bool FilterDevice::Slot16(const Path& path) {   // 0xaa09b0
    return Devices->Slot16(Path(&path));
}
bool FilterDevice::Slot17(const Path& from, const Path& to) {   // 0xaa0a30
    return Devices->Slot17(Path(&from), Path(&to), false);
}
bool FilterDevice::Slot18(const Path& from, const Path& to) {   // 0xaa0ac0
    return Devices->Slot17(Path(&from), Path(&to), true);
}
void* FilterDevice::Slot19(const Path& path, void* arg) {   // 0xaa0b50
    return Devices->Slot19(Path(&path), arg);
}

// Gear::ZLibDevice (vtable 0x189cfd8): a filter, with two slots of its own after the interface's.
struct ZLibDevice : FilterDevice {
    ~ZLibDevice() override;
    bool Attributes(const char* path, void* reserved, uint32_t* out) override;
    void Slot21() override;
    void Slot22() override;
    virtual void Slot23();
    virtual void Slot24();
};
ZLibDevice::~ZLibDevice() {}

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
