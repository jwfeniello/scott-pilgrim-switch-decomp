// Gear's input devices and the hooks that stand between them and the game. Gear names its classes itself: slot 0
// gives a class's name, slot 1 tests a name against the class and its bases.
#include "GearCore.h"

namespace Gear {

// Gear's name comparison, -1, 0 or 1 like strcmp, on signed characters.
__attribute__((always_inline)) inline int CompareNames(const char* a, const char* b) {
    while (*a || *b) {
        signed char x = *a++, y = *b++;
        int order = x < y ? -1 : y < x;
        if (order) return order;
    }
    return 0;
}

// The interfaces the game reads devices through; a hook implements its device's at +0x10.
struct GamePadInterface { virtual void GamePadSlot0(); };
struct KeyboardInterface { virtual void KeyboardSlot0(); };
struct MouseInterface { virtual void MouseSlot0(); };

// Gear::InteractiveDevice: the root of the input classes. Its destructor is slot 8; slot 2 is the device's index in
// the input registry, 0xff for none.
struct InteractiveDevice {
    static const char Name[];          // "InteractiveDevice" (0x1318b61)
    virtual const char* ClassName() const;           // slot 0
    virtual bool IsA(const char* name) const { return CompareNames(name, Name) == 0; }   // slot 1
    virtual uint8_t Index() const;                   // slot 2
    virtual void DeviceSlot3();
    virtual void DeviceSlot4();
    virtual void DeviceSlot5();
    virtual void DeviceSlot6();
    virtual void DeviceSlot7();
    virtual ~InteractiveDevice() {}                  // slots 8, 9
    virtual void DeviceSlot10();
    virtual void DeviceSlot11();
    virtual void DeviceSlot12();
    virtual void DeviceSlot13();
};

// What the global at 0x192aeb8 points to: the input devices by index, each the top of its chain of hooks.
struct InputRegistry {
    char padding_0[0x110];
    uint64_t count;                    // +0x110
    char padding_118[0x30];
    InteractiveDevice** devices;       // +0x148
    void SetTop(InteractiveDevice* device, uint8_t index) {
        if (index < count) devices[index] = device;
    }
};
extern InputRegistry* Inputs;          // 0x192aeb8

// Gear::InteractiveDeviceHook: something stacked on a device (or on another hook) that the game reads in its place.
struct InteractiveDeviceHook : InteractiveDevice {
    static const char Name[];          // "InteractiveDeviceHook" (0x14ee51f)
    bool IsA(const char* name) const override { return CompareNames(name, Name) == 0 || InteractiveDevice::IsA(name); }
    InteractiveDevice* target;         // +0x8: what this hook reads from, a device or the hook below
};

// Gear::InteractiveDeviceHookBase<Interface>: one per kind of device (vtables 0x189d308 for game pads, 0x189e418 for
// keyboards, 0x189e840 for mice). Each instance keeps its own copy of the name, defined where the device is: the name
// test reads it from memory rather than knowing it.
template<class Interface> struct InteractiveDeviceHookBase : InteractiveDeviceHook, Interface {
    static const char Name[];
    const char* ClassName() const override { return Name; }
    bool IsA(const char* name) const override { return CompareNames(name, Name) == 0 || InteractiveDeviceHook::IsA(name); }
    ~InteractiveDeviceHookBase() override;
    InteractiveDeviceHookBase* below;  // +0x18
    InteractiveDeviceHookBase* above;  // +0x20
    Interface* targetInterface;        // +0x28
};
// Slot 8 (0xaa9b10, 0xaacd80, 0xaad6e0): takes the hook out of its device's chain; the top hook hands the registry's
// entry to the hook below it, or back to the device. The registry update takes the device and index as arguments: with
// locals instead, each call gets its own landing pad, where the original shares one.
template<class Interface> InteractiveDeviceHookBase<Interface>::~InteractiveDeviceHookBase() {
    if (below) below->above = above;
    if (above) {
        above->below = below;
        if (below) {
            above->targetInterface = below;
            above->target = below;
        } else {
            above->targetInterface = targetInterface;
            above->target = target;
        }
    } else if (target && target->Index() != 0xff) {
        if (below) Inputs->SetTop(below, below->Index());
        else Inputs->SetTop(target, target->Index());
    }
}

template struct InteractiveDeviceHookBase<GamePadInterface>;
template struct InteractiveDeviceHookBase<KeyboardInterface>;
template struct InteractiveDeviceHookBase<MouseInterface>;

// The hooks for each kind of device (vtables 0x189db68, 0x189e548, 0x189e978) and the time filters over them
// (0x189df28, 0x189e678, 0x189eab0).
#define GEAR_INPUT_CLASS(Class, Base)     struct Class : Base {         static const char Name[];         const char* ClassName() const override;         bool IsA(const char* name) const override;     };     bool Class::IsA(const char* name) const { return CompareNames(name, Name) == 0 || Base::IsA(name); }
GEAR_INPUT_CLASS(GamePadHook, InteractiveDeviceHookBase<GamePadInterface>)        // IsA 0xaaca20
GEAR_INPUT_CLASS(KeyboardHook, InteractiveDeviceHookBase<KeyboardInterface>)      // IsA 0xaad5e0
GEAR_INPUT_CLASS(MouseHook, InteractiveDeviceHookBase<MouseInterface>)            // IsA 0xaae030
GEAR_INPUT_CLASS(TimeFilteredGamePad, GamePadHook)                                // IsA 0xaab210
GEAR_INPUT_CLASS(TimeFilteredKeyboard, KeyboardHook)                              // IsA 0xaacfa0
GEAR_INPUT_CLASS(TimeFilteredMouse, MouseHook)                                    // IsA 0xaad930

}  // namespace Gear
