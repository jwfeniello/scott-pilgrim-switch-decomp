// Dare::Private's voice managers (RTTI names): slot 39 of ManagerVoiceForVirtualPlayer<T>. Member names are provisional.
#include <stddef.h>
#include <stdint.h>

void* DareAllocate(size_t size, uint32_t alignment);   // 0x722190

namespace nn { namespace os {
struct MutexType;
void LockMutex(MutexType* mutex) noexcept;
void UnlockMutex(MutexType* mutex) noexcept;
} }  // namespace nn::os
extern "C" nn::os::MutexType* Dare_ApiMutex;   // 0x19397c8 (name provisional)

namespace Dare {
namespace Private {

// The functions of the platform's sound layer that SndManager keeps a table of (+0x40).
struct SoundPlatform {
    void* functions[5];
    float (*query)(void* handle);   // +0x28
};
// Dare::Private::SndManager, made on first use and kept in the global at 0x19397f0.
// What SndManager's slot 7 reads (its class is unknown): slot 27 gives a float.
struct SndManagedObject {
    virtual void Slot0();
    virtual void Slot1();
    virtual void Slot2();
    virtual void Slot3();
    virtual void Slot4();
    virtual void Slot5();
    virtual void Slot6();
    virtual void Slot7();
    virtual void Slot8();
    virtual void Slot9();
    virtual void Slot10();
    virtual void Slot11();
    virtual void Slot12();
    virtual void Slot13();
    virtual void Slot14();
    virtual void Slot15();
    virtual void Slot16();
    virtual void Slot17();
    virtual void Slot18();
    virtual void Slot19();
    virtual void Slot20();
    virtual void Slot21();
    virtual void Slot22();
    virtual void Slot23();
    virtual void Slot24();
    virtual void Slot25();
    virtual void Slot26();
    virtual float Slot27();
};

struct SndManager {
    static void* operator new(size_t size) { return DareAllocate(size, 8); }
    SndManager();   // 0xcf6830
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6();
    virtual float Slot7(SndManagedObject* object);   // slot 7
    char padding_8[0x38];
    SoundPlatform* platform;   // +0x40
    char padding_48[0x1a0];
    static SndManager* Get();
};
extern "C" SndManager* Dare_SndManager;   // 0x19397f0
inline SndManager* SndManager::Get() {
    SndManager* manager = Dare_SndManager;
    if (!manager) {
        manager = new SndManager;
        Dare_SndManager = manager;
    }
    return manager;
}
static_assert(sizeof(SndManager) == 0x1e8, "SndManager size");

// What a virtual player's voice holds: the platform handle (+0x8) and its kind (+0x18).
struct VirtualVoice {
    char padding_0[0x8];
    void* handle;      // +0x8
    char padding_10[0x8];
    int32_t kind;      // +0x18
};

struct ManagerHardwareVoice;
struct ManagerSynthVoice;
struct ManagerThemeVoice;
struct ManagerToolVoice;

// A theme voice's settings (0xd4f100 copies one).
struct ThemeSettings {
    char padding_0[0xc];
    int32_t valid;     // +0xc
    void Assign(const ThemeSettings* other);   // 0xd4f100
};
struct PlayerState {
    char padding_0[0x16c];
    int32_t value16c;         // +0x16c
    int32_t value170;         // +0x170
};
// The virtual player a manager voice plays through (its theme settings matter only to theme voices).
struct ThemePlayer {
    char padding_0[0x10];
    ThemeSettings defaults;   // +0x10
    char padding_20[0x60];
    PlayerState* state;       // +0x80
    char padding_88[0x40];
    ThemeSettings current;    // +0xc8
};
struct VoiceObject {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9();
    virtual void Slot10(); virtual void Slot11(); virtual void Slot12();
    virtual void Stop(int32_t keep);   // slot 13
};

// What 0xd359b0 resolves a theme voice's handle to.
struct ThemeEntry {
    int32_t value0;
    int32_t kind;          // +0x4
    char padding_8[0x54];
    char part5c[0x18];     // +0x5c
    char part74[0x8];      // +0x74
};
struct ThemeHandle {
    void* value;
    ThemeEntry* Get();     // 0xd359b0
    // The part of the entry for its kind (+0x5c for kind 6, +0x74 for kind 1), or null.
    void* Part() {
        if (!Get()) return nullptr;
        switch (Get()->kind) {
        case 1:
            return Get()->part74;
        case 6:
            return Get()->part5c;
        }
        return nullptr;
    }
};

struct ManagerThemeVoice {
    char padding_0[0xa8];
    ThemeHandle handle;    // +0xa8
    void* Part();
};

// Slot 0 (0xd8aed0).
void* ManagerThemeVoice::Part() { return handle.Part(); }

template<class Manager> struct ManagerVoiceForVirtualPlayer {
    void* vtable;
    VirtualVoice* voice;   // +0x8
    int32_t state;         // +0x10
    char padding_14[0x6c];
    ThemePlayer* player;   // +0x80
    char padding_88[0x28];
    VoiceObject* object;   // +0xb0
    char padding_b8[0x8];
    ThemeHandle handle;       // +0xc0
    ThemeSettings settings;   // +0xc8
    int32_t Play(void* a, void* b);   // the synth and tool voices' slot 23 (0xd84860)
    int32_t Slot23(void* a, void* b);
    void* Slot44();
    void Slot1(int32_t keep);
    // Slot 39: 0 for a voice of kind 3, -1 for any kind but 1, else what the platform reports for it. Not credited:
    // the original tests kind 3 first with these registers; every order that tests it first here swaps them.
    float Slot39() {
        SndManager* manager = SndManager::Get();
        int32_t kind = voice->kind;
        if (kind == 3) return 0.0f;
        if (kind != 1) return -1.0f;
        return manager->platform->query(voice->handle);
    }
};

// Slot 23 for theme voices (0xd8a2f0): takes the player's settings (its current ones when valid) before doing what the
// other voices' slot 23 does; 0 without a player.
template<> int32_t ManagerVoiceForVirtualPlayer<ManagerThemeVoice>::Slot23(void* a, void* b) {
    ThemePlayer* player = this->player;
    if (!player) return 0;
    if (player->current.valid)
        settings.Assign(&player->current);
    else
        settings.Assign(&player->defaults);
    return Play(a, b);
}

// Slot 44 for theme voices (0xd8ae60): the part of the theme entry for its kind, as ManagerThemeVoice's slot 0.
template<> void* ManagerVoiceForVirtualPlayer<ManagerThemeVoice>::Slot44() { return handle.Part(); }

// Slot 1 for synth voices (0xd84520): stops the object at +0xb0 if the voice is in state 2 (clearing the player state's
// +0x16c/+0x170 first unless `keep`), and moves to state 3 unless `keep`.
template<> void ManagerVoiceForVirtualPlayer<ManagerSynthVoice>::Slot1(int32_t keep) {
    if (state == 2) {
        if (keep) {
            object->Stop(keep);
            return;
        }
        player->state->value170 = 0;
        player->state->value16c = 0;
        object->Stop(keep);
    } else if (keep) {
        return;
    }
    state = 3;
}

template struct ManagerVoiceForVirtualPlayer<ManagerHardwareVoice>;   // slot 39 at 0xd7c570
template struct ManagerVoiceForVirtualPlayer<ManagerSynthVoice>;      // 0xd850a0
template struct ManagerVoiceForVirtualPlayer<ManagerThemeVoice>;      // 0xd8a7e0
template struct ManagerVoiceForVirtualPlayer<ManagerToolVoice>;       // 0xd8e440

// Slot 7 (0xcf88f0): `object`'s slot 27, under the API lock.
float SndManager::Slot7(SndManagedObject* object) {
    nn::os::LockMutex(Dare_ApiMutex);
    float result = object->Slot27();
    nn::os::UnlockMutex(Dare_ApiMutex);
    return result;
}

}  // namespace Private
}  // namespace Dare
