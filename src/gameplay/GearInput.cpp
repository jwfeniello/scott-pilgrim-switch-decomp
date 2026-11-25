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
// Gear::GamePadInterface: 52 slots, its destructor at 44 and 45. Slot names are provisional.
struct GamePadBlock { float values[12]; };   // what slot 3 takes: 48 bytes (the field names aren't known)
struct GamePadInterface {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2();
    virtual void SetBlock(const GamePadBlock& block);                  // slot 3
    virtual bool Slot4(uint8_t button);                                // slot 4: slot 5's
    virtual bool Slot5(uint8_t button);                                // slot 5: the button's value at least +0x180
    virtual uint8_t Slot6(uint8_t button);                            // slot 6
    virtual const float* Slot7(int32_t index);                         // slot 7: two values per index
    virtual const float* Slot8();                                      // slot 8: two values
    virtual float Slot9();                                             // slot 9
    virtual const float* Slot10(int32_t index);                        // slot 10: three values per index
    virtual void Slot11();
    virtual const float* Slot12();                                     // slot 12: four values
    virtual const float* Slot13();                                     // slot 13: one value
    virtual void Slot14(); virtual void Slot15();
    virtual const float* Slot16();                                     // slot 16: three values
    virtual void Slot17(); virtual void Slot18();
    virtual const float* Slot19();                                     // slot 19: three values
    virtual const float* Slot20();                                     // slot 20: nine values
    virtual void Slot21();
    virtual uint8_t Threshold();                                       // slot 22: what slot 5 compares with
    virtual void Slot23(); virtual void Slot24(); virtual void Slot25();
    virtual void Slot26(); virtual void Slot27(); virtual void Slot28(); virtual void Slot29(); virtual void Slot30();
    virtual void Slot31();
    virtual void Vibrate(uint32_t left, uint32_t right, uint32_t leftTime, uint32_t rightTime);   // slot 32
    virtual void VibrateLeft(uint32_t strength, uint32_t time);       // slot 33
    virtual void VibrateRight(uint32_t strength, uint32_t time);      // slot 34
    virtual void EnableVibration(bool enabled);                        // slot 35
    virtual void StopVibration();                                      // slot 36
    virtual void Slot37(); virtual void Slot38(); virtual void Slot39(); virtual void Slot40(); virtual void Slot41();
    virtual void Slot42(); virtual void Slot43();
    virtual ~GamePadInterface() {}                                     // slots 44, 45
    virtual void Slot46();
    virtual bool Pressed(uint8_t button);                              // slot 47
    virtual void Slot48(); virtual void Slot49();
    virtual bool AnyPressed();                                         // slot 50
    virtual void Slot51();
};
// Gear::KeyboardInterface: slot 0 tells whether a key is down, slot 1 the same through the keyboard's own index.
struct KeyboardInterface {
    virtual bool KeyDown(uint8_t key);                                 // slot 0
    virtual bool Slot1(uint8_t key);                                   // slot 1
};
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
    void Remove(InteractiveDevice* device);   // 0xaaa9f0 (name provisional)
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
GEAR_INPUT_CLASS(KeyboardHook, InteractiveDeviceHookBase<KeyboardInterface>)      // IsA 0xaad5e0
GEAR_INPUT_CLASS(MouseHook, InteractiveDeviceHookBase<MouseInterface>)            // IsA 0xaae030
GEAR_INPUT_CLASS(TimeFilteredKeyboard, KeyboardHook)                              // IsA 0xaacfa0
GEAR_INPUT_CLASS(TimeFilteredMouse, MouseHook)                                    // IsA 0xaad930
// Two tables of the 27 buttons (0x192aec1 and 0x192aedc), filled with 0xff the first time a button is read; the flag
// at 0x192aec0 says they're ready. A button with an entry other than 0xff in the first can have its value overridden.
// The names are provisional.
extern uint8_t ButtonTablesReady;   // bit 0 (tested as a bit: only the match supports that spelling)
extern uint8_t ButtonTableA[27];
extern uint8_t ButtonTableB[27];
__attribute__((always_inline)) inline void PrepareButtonTables() {
    if (!(ButtonTablesReady & 1)) {
        __builtin_memset(ButtonTableA, 0xff, sizeof(ButtonTableA));
        __builtin_memset(ButtonTableB, 0xff, sizeof(ButtonTableB));
        ButtonTablesReady = 1;
    }
}
// A value per button and the overrides (0 for none).
struct ButtonValues {
    uint8_t values[27];
    uint8_t overrides[27];
    __attribute__((always_inline)) uint8_t Get(uint8_t button) const {
        PrepareButtonTables();
        if (ButtonTableA[button] != 0xff)
            if (uint8_t value = overrides[button]) return value;
        return values[button];
    }
};

// What a pad reads in a frame (0x118 bytes): a game pad keeps one at +0x10, the time filter its last copy at +0x30.
// Bit 0 of the flags marks it as read; a reset of an unread one sets bits 0 and 15 and zeroes everything but 0x54-0xa4.
// Field names follow the interface slots that return them.
struct GamePadReading {
    uint32_t flags;
    float sticks[2][2];                // +0x4: slot 7
    float values10[2][3];              // +0x14: slot 10
    float values8[2];                  // +0x2c: slot 8
    float values12[4];                 // +0x34: slot 12
    float value13;                     // +0x44: slot 13
    float value9;                      // +0x48: slot 9
    uint8_t unknown4c[0x8];
    uint8_t unknown54[0x50];           // +0x54: not reset
    ButtonValues buttons;              // +0xa4
    uint8_t unknownda[0x2];
    float values16[3];                 // +0xdc: slot 16
    float values19[3];                 // +0xe8: slot 19
    float values20[3][3];              // +0xf4: slot 20
    __attribute__((always_inline)) void Reset() {
        if (flags & 1) return;
        flags |= 0x8001;
        __builtin_memset(sticks, 0, offsetof(GamePadReading, unknown54) - offsetof(GamePadReading, sticks));
        __builtin_memset(&buttons, 0, sizeof(buttons));
        __builtin_memset(unknownda, 0, sizeof(GamePadReading) - offsetof(GamePadReading, unknownda));
    }
};

// Gear::GamePadHook (vtable 0x189db68): passes each of the 50 game-pad slots on to the interface below it
// (+0x28); its overriders fill slots 14-63 of its first vtable in the interface's order (0xaab7a0-0xaabae0, credited
// to older builds, so only declared here).
struct GamePadHook : InteractiveDeviceHookBase<GamePadInterface> {
    static const char Name[];
    const char* ClassName() const override;
    bool IsA(const char* name) const override;
    void Slot0() override;
    void Slot1() override;
    void Slot2() override;
    void SetBlock(const GamePadBlock& block) override;
    bool Slot4(uint8_t button) override;
    bool Slot5(uint8_t button) override;
    uint8_t Slot6(uint8_t button) override;
    const float* Slot7(int32_t index) override;
    const float* Slot8() override;
    float Slot9() override;
    const float* Slot10(int32_t index) override;
    void Slot11() override;
    const float* Slot12() override;
    const float* Slot13() override;
    void Slot14() override;
    void Slot15() override;
    const float* Slot16() override;
    void Slot17() override;
    void Slot18() override;
    const float* Slot19() override;
    const float* Slot20() override;
    void Slot21() override;
    uint8_t Threshold() override;
    void Slot23() override;
    void Slot24() override;
    void Slot25() override;
    void Slot26() override;
    void Slot27() override;
    void Slot28() override;
    void Slot29() override;
    void Slot30() override;
    void Slot31() override;
    void Vibrate(uint32_t left, uint32_t right, uint32_t leftTime, uint32_t rightTime) override;
    void VibrateLeft(uint32_t strength, uint32_t time) override;
    void VibrateRight(uint32_t strength, uint32_t time) override;
    void EnableVibration(bool enabled) override;
    void StopVibration() override;
    void Slot37() override;
    void Slot38() override;
    void Slot39() override;
    void Slot40() override;
    void Slot41() override;
    void Slot42() override;
    void Slot43() override;
    void Slot46() override;
    bool Pressed(uint8_t button) override;
    void Slot48() override;
    void Slot49() override;
    bool AnyPressed() override;
    void Slot51() override;
};
bool GamePadHook::IsA(const char* name) const {
    return CompareNames(name, Name) == 0 || InteractiveDeviceHookBase<GamePadInterface>::IsA(name);
}
// Gear::TimeFilteredGamePad (vtable 0x189df28): keeps what it last read from the pad and tells whether each reading
// moved; analog values count as moved past 2e-6. Slots 64-95 are its own; their names are provisional.
struct TimeFilteredGamePad : GamePadHook {
    static const char Name[];
    const char* ClassName() const override;
    bool IsA(const char* name) const override;   // 0xaab210
    void DeviceSlot4() override;                 // slot 4
    virtual void Slot64(); virtual void Slot65(); virtual void Slot66();
    virtual bool PressedNow(uint8_t button);     // slot 67
    virtual void Slot68();
    virtual bool ReleasedNow(uint8_t button);    // slot 69
    virtual void Slot70(); virtual void Slot71();
    virtual int32_t Delta6(uint8_t button);      // slot 72
    virtual void Slot73();
    virtual void Slot74(); virtual void Slot75(); virtual void Slot76(); virtual void Slot77(); virtual void Slot78();
    virtual void Slot79(); virtual void Slot80(); virtual void Slot81(); virtual void Slot82(); virtual void Slot83();
    virtual bool Moved13();                      // slot 84
    virtual bool Moved16();                      // slot 85
    virtual bool Moved19();                      // slot 86
    virtual bool Moved20();                      // slot 87
    virtual bool Changed6(uint8_t button);       // slot 88
    virtual bool Changed7(int32_t index);        // slot 89
    virtual bool Changed10(int32_t index);       // slot 90
    virtual bool Changed8();                     // slot 91
    virtual bool Moved9();                       // slot 92
    virtual bool Moved12();                      // slot 93
    virtual void Slot94(); virtual void Slot95();
    GamePadReading last;               // +0x30
};
bool TimeFilteredGamePad::IsA(const char* name) const { return CompareNames(name, Name) == 0 || GamePadHook::IsA(name); }

// Whether two analog readings are the same to within 2e-6 (the moved tests are its negation: unordered counts as
// moved).
__attribute__((always_inline)) inline bool Near(float a, float b, float epsilon = 2e-6f) {
    return __builtin_fabsf(a - b) <= epsilon;
}

// Slot 4 (0xaab330): slot 4 of what it reads from, then a reset of its last reading.
void TimeFilteredGamePad::DeviceSlot4() {
    if (target) target->DeviceSlot4();
    last.Reset();
}
// Slot 84 (0xaac140).
bool TimeFilteredGamePad::Moved13() { return !Near(*Slot13(), last.value13); }
// Slot 85 (0xaac180).
bool TimeFilteredGamePad::Moved16() {
    const float* now = Slot16();
    return !Near(now[0], last.values16[0]) || !Near(now[1], last.values16[1]) || !Near(now[2], last.values16[2]);
}
// Slot 86 (0xaac200).
bool TimeFilteredGamePad::Moved19() {
    const float* now = Slot19();
    return !Near(now[0], last.values19[0]) || !Near(now[1], last.values19[1]) || !Near(now[2], last.values19[2]);
}
// Slot 67 (0xaabb60): the button reaches the threshold now and didn't before.
bool TimeFilteredGamePad::PressedNow(uint8_t button) { return last.buttons.Get(button) < Threshold() && Slot5(button); }
// Slot 69 (0xaabc40): the button reached the threshold before and doesn't now.
bool TimeFilteredGamePad::ReleasedNow(uint8_t button) {
    return last.buttons.Get(button) >= Threshold() && !Slot5(button);
}
// Slot 72 (0xaabd50): how far the button's value moved.
int32_t TimeFilteredGamePad::Delta6(uint8_t button) {
    uint8_t now = Slot6(button);
    return now - last.buttons.Get(button);
}
// Slot 87 (0xaac280): nine values, to within 4e-6.
bool TimeFilteredGamePad::Moved20() {
    const float* now = Slot20();
    const float* was = last.values20[0];
    return !Near(now[0], was[0], 4e-6f) || !Near(now[1], was[1], 4e-6f) || !Near(now[2], was[2], 4e-6f) ||
           !Near(now[3], was[3], 4e-6f) || !Near(now[4], was[4], 4e-6f) || !Near(now[5], was[5], 4e-6f) ||
           !Near(now[6], was[6], 4e-6f) || !Near(now[7], was[7], 4e-6f) || !Near(now[8], was[8], 4e-6f);
}
// Slot 88 (0xaac3c0).
bool TimeFilteredGamePad::Changed6(uint8_t button) {
    uint8_t now = Slot6(button);
    return last.buttons.Get(button) != now;
}
// Slot 89 (0xaac460).
bool TimeFilteredGamePad::Changed7(int32_t index) {
    const float* now = Slot7(index);
    return now[0] != last.sticks[index][0] || now[1] != last.sticks[index][1];
}
// Slot 90 (0xaac4c0).
bool TimeFilteredGamePad::Changed10(int32_t index) {
    const float* now = Slot10(index);
    return now[0] != last.values10[index][0] || now[1] != last.values10[index][1] || now[2] != last.values10[index][2];
}
// Slot 91 (0xaac540, credited to an older build).
bool TimeFilteredGamePad::Changed8() {
    const float* now = Slot8();
    return now[0] != last.values8[0] || now[1] != last.values8[1];
}
// Slot 93 (0xaac5d0): four values, to within 1e-6.
bool TimeFilteredGamePad::Moved12() {
    const float* now = Slot12();
    return !Near(now[0], last.values12[0], 1e-6f) || !Near(now[1], last.values12[1], 1e-6f) ||
           !Near(now[2], last.values12[2], 1e-6f) || !Near(now[3], last.values12[3], 1e-6f);
}
// Slot 92 (0xaac590).
bool TimeFilteredGamePad::Moved9() { return !Near(Slot9(), last.value9); }

// Gear::GamePad and the pads under it. The game-pad interface is the first base, so InteractiveDevice sits at +0x8:
// each IsA fills a new slot (53) of the first vtable and slot 1 of the second through a thunk. IsA reads no member,
// so the thunk carries the whole test and the original has it twice.
// Gear::GamePad (thunk 0xaa4b90).
// What a button is read from (12 bytes; field names provisional): -1 in both words for nothing.
struct ButtonMapping {
    int32_t first;
    int32_t second;
    uint8_t third;
};

// A block of memory a pad owns: emptied, then given back to the allocator that owns its address. Here the allocator's
// slot 6 may throw (HardwareGamePad's destructor has landing pads around both frees and doesn't tail-call the last),
// unlike MemInterface's as GearDevices.cpp sees it; the view type is a guess at that.
struct ThrowingAllocator {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5();
    virtual void Free(void* block);    // slot 6
};
struct GamePadBuffer {
    MemInterface* allocator;
    uint64_t count;
    void* data;
    ~GamePadBuffer() {
        count = 0;
        if (void* block = data) reinterpret_cast<ThrowingAllocator*>(AllocatorFor(block))->Free(block);
    }
};
struct GamePad : GamePadInterface, InteractiveDevice {
    static const char Name[];
    const char* ClassName() const override;   // slot 52
    bool IsA(const char* name) const override;   // slot 53
    // Slots 54-67: GamePad's own, some of them its InteractiveDevice overrides (thunks 0xaa4c10-0xaa4de0); which is
    // which isn't known yet.
    virtual void Slot54();
    virtual void SetMapping(uint8_t button, const ButtonMapping& mapping);   // slot 55
    virtual void Slot56(); virtual void Slot57(); virtual void Slot58();
    virtual void Slot59(); virtual void Slot60(); virtual void Slot61(); virtual void Slot62(); virtual void Slot63();
    virtual void ResetReading();       // slot 64
    virtual void Slot65(); virtual void Slot66(); virtual void Slot67();
    void SetBlock(const GamePadBlock& block) override;
    bool Slot4(uint8_t button) override;
    bool Slot5(uint8_t button) override;
    uint8_t Slot6(uint8_t button) override;
    void StopVibration() override;
    ~GamePad() override;
    GamePadReading reading;            // +0x10
    GamePadBlock block;                // +0x128
    char padding_158[0x8];
    GamePadBuffer buffer160;           // +0x160
    char padding_178[0x8];
    uint8_t threshold;                 // +0x180
};
bool GamePad::IsA(const char* name) const { return CompareNames(name, Name) == 0 || InteractiveDevice::IsA(name); }
// Slot 3 (0xaa4060): keeps the block.
void GamePad::SetBlock(const GamePadBlock& value) { block = value; }
// Slot 4 (0xaa4090, credited to an older build): slot 5's answer.
bool GamePad::Slot4(uint8_t button) { return Slot5(button); }
// Slot 5 (0xaa40a0): whether the button's value reaches the threshold.
bool GamePad::Slot5(uint8_t button) { return reading.buttons.Get(button) >= threshold; }
// Slot 6 (0xaa4120): the button's value.
uint8_t GamePad::Slot6(uint8_t button) { return reading.buttons.Get(button); }
// 0xaa4850: the buffer at +0x160 goes. The pads' destructors inline it, except on GamePadKeyboard's cleanup path.
GamePad::~GamePad() {}
// Slot 64 (0xaa4a70): resets the reading unless it has been read.
// Not yet matched (nor TimeFilteredGamePad's slot 4, 0xaab330): the original clears the buttons (0xa4-0xda) and the
// rest (0xda-0x118) as two blocks; clang merges the two adjacent clears into one, whatever the order.
void GamePad::ResetReading() { reading.Reset(); }
// Slot 36 (0xaa43d0): no vibration on either side.
void GamePad::StopVibration() { Vibrate(0, 0, 0, 0); }

// Gear::HardwareGamePad (thunk 0xaa4ed0 for IsA 0xaa4e10).
struct HardwareGamePad : GamePad {
    static const char Name[];
    const char* ClassName() const override;
    bool IsA(const char* name) const override;
    ~HardwareGamePad() override;
    char padding_188[0x8];
    GamePadBuffer buffer190;           // +0x190
};
bool HardwareGamePad::IsA(const char* name) const { return CompareNames(name, Name) == 0 || GamePad::IsA(name); }
// 0xaa3f80 (no vtable slot: GamePadEE's destructor calls it): the two buffers go, this one first.
HardwareGamePad::~HardwareGamePad() {}

// Gear::VibrationEnabledGamePad: two motors, each with a strength and an end time (0 for none) against the clock at
// +0x1c4; slot 68 applies them.
struct VibrationEnabledGamePad : HardwareGamePad {
    static const char Name[];
    const char* ClassName() const override;
    bool IsA(const char* name) const override;
    virtual void ApplyVibration();     // slot 68
    void Vibrate(uint32_t left, uint32_t right, uint32_t leftTime, uint32_t rightTime) override;
    void VibrateLeft(uint32_t strength, uint32_t time) override;
    void VibrateRight(uint32_t strength, uint32_t time) override;
    void EnableVibration(bool enabled) override;
    char padding_1a8[0x8];
    bool vibrating;                    // +0x1b0
    bool enabled;                      // +0x1b1
    char padding_1b2[0x2];
    uint32_t leftEnd;                  // +0x1b4
    uint32_t rightEnd;                 // +0x1b8
    uint32_t left;                     // +0x1bc
    uint32_t right;                    // +0x1c0
    uint32_t now;                      // +0x1c4
};
bool VibrationEnabledGamePad::IsA(const char* name) const {
    return CompareNames(name, Name) == 0 || HardwareGamePad::IsA(name);
}
// Slot 32 (0xaa5010).
void VibrationEnabledGamePad::Vibrate(uint32_t left, uint32_t right, uint32_t leftTime, uint32_t rightTime) {
    this->left = left;
    this->right = right;
    leftEnd = leftTime ? now + leftTime : 0;
    rightEnd = rightTime ? now + rightTime : 0;
    ApplyVibration();
}
// Slot 33 (0xaa5060, credited to an older build).
void VibrationEnabledGamePad::VibrateLeft(uint32_t strength, uint32_t time) {
    left = strength;
    leftEnd = time ? now + time : 0;
    ApplyVibration();
}
// Slot 34 (0xaa5090, credited to an older build).
void VibrationEnabledGamePad::VibrateRight(uint32_t strength, uint32_t time) {
    right = strength;
    rightEnd = time ? now + time : 0;
    ApplyVibration();
}
// Slot 35 (0xaa50c0, credited to an older build): applies only a change.
void VibrationEnabledGamePad::EnableVibration(bool on) {
    if (enabled == on) return;
    enabled = on;
    ApplyVibration();
}

// The state a GamePadEE reads (+0x1c8): a byte per button at +0x10, their count at +0x18.
struct GamePadState {
    char padding_0[0x10];
    uint8_t* buttons;                  // +0x10
    uint64_t count;                    // +0x18
    void Release() noexcept;           // 0xaa61d0 (GamePadEE's destructor has no landing pad around it)
};
// Where each of Gear's buttons is in the state (0x19254d0, 12 bytes each).
struct GamePadButton {
    int32_t index;
    char padding_4[0x8];
};
extern const GamePadButton GamePadButtons[];

struct GamePadEE : VibrationEnabledGamePad {
    static const char Name[];
    const char* ClassName() const override;
    bool IsA(const char* name) const override;
    ~GamePadEE() override;
    virtual void Slot69();             // slot 69
    bool Pressed(uint8_t button) override;
    bool AnyPressed() override;
    void SetMapping(uint8_t button, const ButtonMapping& mapping) override;
    GamePadState* state;               // +0x1c8
    char padding_1d0[0x100];
    ButtonMapping mappings[27];        // +0x2d0
    uint8_t mapped[27];                // +0x414: bit 0 when the button has a mapping
};
bool GamePadEE::IsA(const char* name) const { return CompareNames(name, Name) == 0 || VibrationEnabledGamePad::IsA(name); }
// Slots 44 and 45 (0xaa51e0, 0xaa5220).
GamePadEE::~GamePadEE() { state->Release(); }
// Slot 47 (0xaa5260): whether the button is down.
bool GamePadEE::Pressed(uint8_t button) {
    int32_t index = GamePadButtons[button].index;
    return state->buttons[index] != 0;
}
// Slot 55 (0xaa5490): sets a button's mapping and whether it has one.
// Not yet matched: the original sets or clears bit 0 on separate branches, each reading the byte; clang selects.
void GamePadEE::SetMapping(uint8_t button, const ButtonMapping& mapping) {
    ButtonMapping& to = mappings[button];
    to.first = mapping.first;
    to.second = mapping.second;
    to.third = mapping.third;
    if (mapping.second != -1 || mapping.first != -1) mapped[button] |= 1;
    else mapped[button] &= ~1;
}
// Slot 50 (0xaa5310): whether any button is down.
bool GamePadEE::AnyPressed() {
    for (uint64_t i = 0; state->count > i; ++i)
        if (state->buttons[i]) return true;
    return false;
}
// Gear::GamePadKeyboard (IsA 0xaa9ff0, thunk 0xaaa900): a game pad played on a keyboard (+0x238); each button has a
// key (0x1925620, 5 bytes each).
struct GamePadKey {
    uint8_t key;
    char padding_1[0x4];
};
extern const GamePadKey GamePadKeys[];
struct GamePadKeyboard : GamePad {
    static const char Name[];
    const char* ClassName() const override;
    bool IsA(const char* name) const override;
    ~GamePadKeyboard() override;
    virtual void Slot68(); virtual void Slot69();   // its own slots 68 and 69
    bool Pressed(uint8_t button) override;
    bool AnyPressed() override;
    char padding_188[0xb0];
    KeyboardInterface* keyboard;       // +0x238
};
// Slots 44 and 45 (0xaa9e20 and its deleting form): leaves the input registry.
GamePadKeyboard::~GamePadKeyboard() { Inputs->Remove(this); }
bool GamePadKeyboard::IsA(const char* name) const { return CompareNames(name, Name) == 0 || GamePad::IsA(name); }
// Slot 47 (0xaa9ef0): whether the button's key is down (no without a keyboard).
bool GamePadKeyboard::Pressed(uint8_t button) {
    if (!keyboard) return false;
    return keyboard->KeyDown(GamePadKeys[button].key);
}
// Slot 50 (0xaa9f60): whether any of the 256 keys is down.
bool GamePadKeyboard::AnyPressed() {
    if (!keyboard) return false;
    for (int key = 0; key <= 0xff; ++key)
        if (keyboard->Slot1(key)) return true;
    return false;
}
// Gear::GamePadMouse (IsA 0xaaac30, thunk 0xaab110): a game pad played with a mouse.
struct GamePadMouse : GamePad {
    static const char Name[];
    const char* ClassName() const override;
    bool IsA(const char* name) const override;
    ~GamePadMouse() override;
    virtual void Slot68(); virtual void Slot69();   // its own slots 68 and 69
};
bool GamePadMouse::IsA(const char* name) const { return CompareNames(name, Name) == 0 || GamePad::IsA(name); }
// Slots 44 and 45 (0xaaab50 and its deleting form): leaves the input registry.
GamePadMouse::~GamePadMouse() { Inputs->Remove(this); }
// Gear::Keyboard the same way; KeyboardEE keeps its test (thunk 0xaa3cf0).
struct Keyboard : KeyboardInterface, InteractiveDevice {
    static const char Name[];
    const char* ClassName() const override;
    bool IsA(const char* name) const override;
};
bool Keyboard::IsA(const char* name) const { return CompareNames(name, Name) == 0 || InteractiveDevice::IsA(name); }

}  // namespace Gear
