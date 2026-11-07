// Dare::Private's buses: the slots PhysicalBus, MasterBus and ReverbBus share (RTTI names). The slot and member names
// are provisional.
#include <stdint.h>

namespace Dare {
namespace Private {

struct BusVoice {
    virtual void Slot0(); virtual void Slot1();
    virtual int32_t Slot2(const void* value);           // slot 2
    virtual void Slot3(); virtual void Slot4();
    virtual int32_t Slot5(int32_t value, void* data);   // slot 5
    int32_t value8;
    int32_t id;                 // +0xc
};
struct BusVoiceList {
    char padding_0[0x10];
    uint64_t count;             // +0x10
    void* reserved;
    BusVoice** voices;          // +0x20
};
struct BusVoiceSlot {
    BusVoiceList* list;
    void Refresh(int32_t index);   // 0xd229e0
    // Puts the voice with this id in *found; false when the list has none.
    bool Find(int32_t id, BusVoice** found) {
        for (BusVoice **voice = list->voices, **last = voice + list->count; voice != last; ++voice) {
            if ((*voice)->id == id) {
                *found = *voice;
                return true;
            }
        }
        return false;
    }
};
// 0x24 bytes.
struct BusVoiceSetting {
    int32_t id;
    char value[0x20];   // +0x4
};
struct BusVoiceSettings {
    uint64_t capacity;
    uint64_t count;              // +0x8
    BusVoiceSetting* settings;   // +0x10
};
// 0x178 bytes.
struct BusVoiceGroup {
    uint32_t count;
    char padding_4[0x15c];
    BusVoiceSlot slots[3];   // +0x160
};

struct PhysicalBus;
// A link in a bus's list of the buses that feed it.
struct BusLink {
    BusLink* previous;
    BusLink* next;
    PhysicalBus* bus;
};

struct PhysicalBus {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9();
    virtual void Slot10();
    virtual int32_t RefreshVoices();                    // slot 11
    virtual void Slot12(); virtual void Slot13(); virtual void Slot14(); virtual void Slot15(); virtual void Slot16();
    virtual void Slot17(); virtual void Slot18();
    virtual int32_t UpdateVolume();                     // slot 19
    virtual int32_t SetParentVolume(float volume);      // slot 20
    virtual void Slot21(); virtual void Slot22(); virtual void Slot23();
    virtual int32_t ApplyVoiceSettings(const BusVoiceSettings* settings, uint32_t slot);   // slot 24
    virtual int32_t ForwardToVoice(int32_t id, int32_t value, void* data, uint32_t slot);   // slot 25
    int32_t dirty;              // +0x8
    char padding_c[0x14];
    BusLink children;           // +0x20: the list's head
    char padding_38[0x30];
    float volume;               // +0x68
    float parentVolume;         // +0x6c
    float effectiveVolume;      // +0x70
    char padding_74[0x4fc];
    uint64_t groupCount;        // +0x570
    BusVoiceGroup* groups;      // +0x578
};

// Slot 11 (0xd21550): refreshes every voice slot of every group, telling each its index.
int32_t PhysicalBus::RefreshVoices() {
    for (BusVoiceGroup *group = groups, *end = groups + groupCount; group != end; ++group)
        for (uint32_t i = 0; i < group->count; ++i) group->slots[i].Refresh(i);
    return 0;
}

// Slot 19 (0xd1e980): recomputes this bus's volume and hands it to the buses that feed it, stopping at the first error.
int32_t PhysicalBus::UpdateVolume() {
    effectiveVolume = volume * parentVolume;
    dirty = 1;
    int32_t result = 0;
    BusLink* end = &children;
    for (BusLink* link = children.next; end != link; link = link->next) {
        int32_t status = link->bus->SetParentVolume(effectiveVolume);
        if (status < 0) return status;
        result = status;
    }
    return result;
}

// Slot 24 (0xd218c0): hands each setting's value to slot 2 of the voice with its id in each group's list `slot`, moving
// on to the next group at the first id the list lacks; returns the last voice's answer, or 0x8000e00b.
int32_t PhysicalBus::ApplyVoiceSettings(const BusVoiceSettings* settings, uint32_t slot) {
    int32_t result = static_cast<int32_t>(0x8000e00bu);
    for (BusVoiceGroup *group = groups, *end = groups + groupCount; group != end; ++group) {
        BusVoiceSlot& voices = group->slots[slot];
        if (!voices.list) continue;
        for (BusVoiceSetting* setting = settings->settings; setting != settings->settings + settings->count; ++setting) {
            BusVoice* voice;
            if (!voices.Find(setting->id, &voice)) break;
            result = voice->Slot2(setting->value);
        }
    }
    return result;
}

// Slot 25 (0xd219b0): passes (value, data) to slot 5 of the voice with this id in each group's list `slot`; returns the
// last voice's answer, or 0x8000e009 when no voice had the id.
int32_t PhysicalBus::ForwardToVoice(int32_t id, int32_t value, void* data, uint32_t slot) {
    int32_t result = static_cast<int32_t>(0x8000e009u);
    for (BusVoiceGroup *group = groups, *end = groups + groupCount; group != end; ++group) {
        BusVoiceList* list = group->slots[slot].list;
        if (!list) continue;
        for (BusVoice **voice = list->voices, **last = voice + list->count; voice != last; ++voice) {
            if ((*voice)->id == id) {
                result = (*voice)->Slot5(value, data);
                break;
            }
        }
    }
    return result;
}

}  // namespace Private
}  // namespace Dare
