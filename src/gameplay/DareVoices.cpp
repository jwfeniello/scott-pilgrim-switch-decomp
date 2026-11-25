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
    SndManager() noexcept;   // 0xcf6830 (no landing pad guards it where it is inlined into 0xd5f090)
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6();
    virtual float Slot7(SndManagedObject* object);   // slot 7
    struct VoiceList {
        void Refresh(struct VirtualVoice* voice);   // 0xd7db50 (provisional names)
        // 0xd7df10: a platform voice for the entry, -1 when there is none.
        struct VirtualVoice* Create(struct ThemeEntry* entry, void* owner, uint32_t tracks);
    } voices;                  // +0x8
    char padding_9[0x37];
    SoundPlatform* platform;   // +0x40
    char padding_48[0x190];
    struct EffectContext* context;   // +0x1d8
    char padding_1e0[0x8];
    static SndManager* Get();
};
// What SndManager keeps at +0x1d8 (the effects' context; its class is not known): slots 50 and 51 bracket changes to a
// player.
struct EffectContext {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9();
    virtual void Slot10(); virtual void Slot11(); virtual void Slot12(); virtual void Slot13(); virtual void Slot14(); virtual void Slot15(); virtual void Slot16(); virtual void Slot17(); virtual void Slot18(); virtual void Slot19();
    virtual void Slot20(); virtual void Slot21(); virtual void Slot22(); virtual void Slot23(); virtual void Slot24(); virtual void Slot25(); virtual void Slot26(); virtual void Slot27(); virtual void Slot28(); virtual void Slot29();
    virtual void Slot30(); virtual void Slot31(); virtual void Slot32(); virtual void Slot33(); virtual void Slot34(); virtual void Slot35(); virtual void Slot36(); virtual void Slot37(); virtual void Slot38(); virtual void Slot39();
    virtual void Slot40(); virtual void Slot41(); virtual void Slot42(); virtual void Slot43(); virtual void Slot44(); virtual void Slot45(); virtual void Slot46(); virtual void Slot47(); virtual void Slot48(); virtual void Slot49();
    virtual void Lock();     // slot 50
    virtual void Unlock();   // slot 51
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
    void Pause();    // 0xd7e9e0 (provisional names)
    void Resume();   // 0xd7e890
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

// What a voice's track grid holds (provisional names): slot 2 of its meter reads the level.
struct VoiceMeter {
    virtual void Slot0(); virtual void Slot1();
    virtual int32_t Read(float* level);   // slot 2
};
struct VoiceTrack {
    void Update();         // 0xd7c7c0
    void UpdateTarget();   // 0xd7d120
    char padding_0[0x168];
    int32_t target;        // +0x168
    char padding_16c[0x30c];
    int32_t changed;       // +0x478
    char padding_47c[0x24];
    VoiceMeter* meter;     // +0x4a0
    char padding_4a8[0x8];
    float level;           // +0x4b0
    int32_t current;       // +0x4b4
};
// What the voices are ordered by (provisional names), at an offset that differs by kind of voice (the members before
// it do): 0x88 for hardware voices, 0xc8 for synth voices, 0xd0 for theme voices, 0xc0 for tool voices.
struct VoiceRank {
    int32_t priority;      // +0x0
    int32_t order;         // +0x4
    int32_t value8;
    float peak;            // +0xc: the loudest track level slot 35 found
};
template<class Manager> struct VoiceRankOffset;
template<> struct VoiceRankOffset<ManagerHardwareVoice> { static const unsigned value = 0x88; };
template<> struct VoiceRankOffset<ManagerSynthVoice> { static const unsigned value = 0xc8; };
template<> struct VoiceRankOffset<ManagerThemeVoice> { static const unsigned value = 0xd0; };
template<> struct VoiceRankOffset<ManagerToolVoice> { static const unsigned value = 0xc0; };

template<class Manager> struct ManagerVoiceForVirtualPlayer {
    virtual void Slot0();
    virtual void Slot1(int32_t keep);
    virtual void Slot2();
    virtual void Slot3();
    virtual void Slot4();
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8();
    virtual int32_t Compare(ManagerVoiceForVirtualPlayer* other);   // slot 9
    virtual void Slot10();
    virtual int32_t Priority();   // slot 11
    virtual int32_t Order();      // slot 12
    virtual void Slot13(); virtual void Slot14(); virtual void Slot15(); virtual void Slot16(); virtual void Slot17();
    virtual void Slot18(); virtual void Slot19(); virtual void Slot20(); virtual void Slot21(); virtual void Slot22();
    virtual int32_t Slot23(void* a, void* b);
    virtual void Slot24(); virtual void Slot25(); virtual void Slot26(); virtual void Slot27(); virtual void Slot28();
    virtual void Slot29(); virtual void Slot30(); virtual void Slot31(); virtual void Slot32();
    virtual int32_t Start();   // slot 33
    virtual void Slot34();
    virtual void Slot35();
    virtual void Slot36(); virtual void Slot37(); virtual void Slot38();
    virtual float Slot39();
    virtual void Slot40(); virtual void Slot41(); virtual void Slot42(); virtual void Slot43();
    virtual void* Slot44();
    VirtualVoice* voice;   // +0x8
    int32_t state;         // +0x10
    char padding_14[0x24];
    VoiceTrack*** tracks;  // +0x38: rows of columns
    ThemeHandle sound;     // +0x40: what the voice plays
    char padding_48[0x8];
    uint32_t columns;      // +0x50
    uint32_t rows;         // +0x54
    char padding_58[0x28];
    ThemePlayer* player;   // +0x80
    char padding_88[0x28];
    VoiceObject* object;   // +0xb0
    char padding_b8[0x8];
    ThemeHandle handle;       // +0xc0
    ThemeSettings settings;   // +0xc8
    int32_t Play(void* a, void* b);   // the synth and tool voices' slot 23 (0xd84860)
    VoiceRank& Rank() {
        return *reinterpret_cast<VoiceRank*>(reinterpret_cast<char*>(this) + VoiceRankOffset<Manager>::value);
    }
    // Updates every track and gives the loudest level (inlined into both slots that use it; always_inline stands in for
    // that).
    __attribute__((always_inline))
    float TrackPeak() {
        float peak = 0.0f;
        for (uint64_t row = 0; row < rows; ++row) {
            for (uint64_t column = 0; column < columns; ++column) {
                VoiceTrack* track = tracks[row][column];
                if (!track) continue;
                track->Update();
                track->UpdateTarget();
                int32_t target = track->target;
                if (track->current != target) {
                    VoiceMeter* meter = track->meter;
                    track->current = target;
                    if (meter && meter->Read(&track->level)) track->changed = 1;
                }
                if (peak < track->level) peak = track->level;
            }
        }
        return peak;
    }
};

// Slot 35: updates every track, notes the loudest level, then has the manager refresh the voice.
template<class Manager> void ManagerVoiceForVirtualPlayer<Manager>::Slot35() {
    Rank().peak = TrackPeak();
    SndManager::Get()->voices.Refresh(voice);
}

// Slot 33: updates the tracks and notes their peak, then has the manager make the platform voice for the sound; whether
// it could.
template<class Manager> int32_t ManagerVoiceForVirtualPlayer<Manager>::Start() {
    Rank().peak = TrackPeak();
    SndManager* manager = SndManager::Get();
    voice = manager->voices.Create(sound.Get(), this, columns);
    state = 1;
    return voice != reinterpret_cast<VirtualVoice*>(-1);
}

// Slot 9: orders two voices by priority, then by the other's current peak, then by order.
template<class Manager> int32_t ManagerVoiceForVirtualPlayer<Manager>::Compare(ManagerVoiceForVirtualPlayer* other) {
    int32_t result = Rank().priority - other->Priority();
    if (result) return result;
    float peak = other->TrackPeak();
    if (Rank().peak > peak) return 1;
    if (Rank().peak < peak) return -1;
    return Rank().order - other->Order();
}

// Slot 39: 0 for a voice of kind 3, what the platform reports for one of kind 1, else -1.
template<class Manager> float ManagerVoiceForVirtualPlayer<Manager>::Slot39() {
    SndManager* manager = SndManager::Get();
    switch (voice->kind) {
    case 3: return 0.0f;
    case 1: return manager->platform->query(voice->handle);
    }
    return -1.0f;
}

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

// Slots 3 and 4 for hardware voices (0xd7b7e0, 0xd7b860): pause or resume the player, between the context's slots 50
// and 51.
template<> void ManagerVoiceForVirtualPlayer<ManagerHardwareVoice>::Slot3() {
    SndManager* manager = SndManager::Get();
    ThemePlayer* player = this->player;
    if (!player) return;
    EffectContext* context = manager->context;
    context->Lock();
    player->Pause();
    context->Unlock();
}
template<> void ManagerVoiceForVirtualPlayer<ManagerHardwareVoice>::Slot4() {
    SndManager* manager = SndManager::Get();
    ThemePlayer* player = this->player;
    if (!player) return;
    EffectContext* context = manager->context;
    context->Lock();
    player->Resume();
    context->Unlock();
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

// What entries 1 and 6 of the sound kinds table at 0x18d2318 keep (provisional names): a managed object that is also,
// at +0x18, what plays it (a second base: its slot 0 is called virtually).
struct SoundPlayPart {
    virtual void* Slot0();
    int32_t Play(void** target, void* value, float volume);   // 0xd7e260
};
struct PlainSoundBase : SndManagedObject {
    char padding_8[0x10];
};
struct PlainSound : PlainSoundBase, SoundPlayPart {};

// Entries 1 and 6's +0x30 function (0xd5f090): plays through the part at the manager's volume for the object, with
// what the part's slot 0 gives unless the target is -1, each step under the API lock. The manager is made sure of
// before each use, once more than it is used.
int32_t PlainSound_Forward(PlainSound* object, void** target) {
    void* value = nullptr;
    if (*target != reinterpret_cast<void*>(-1)) {
        SndManager::Get();
        nn::os::LockMutex(Dare_ApiMutex);
        value = static_cast<SoundPlayPart&>(*object).Slot0();
        nn::os::UnlockMutex(Dare_ApiMutex);
    }
    SndManager::Get();
    float volume = SndManager::Get()->Slot7(object);
    nn::os::LockMutex(Dare_ApiMutex);
    int32_t result = static_cast<SoundPlayPart&>(*object).Play(target, value, volume);
    nn::os::UnlockMutex(Dare_ApiMutex);
    return result;
}

// Dare's commands (see DareAsso.cpp): slot 2 runs the command.
struct DareCommand {
    virtual void Slot0();
    virtual const char* Name();
    virtual int32_t Execute();
    virtual ~DareCommand() {}
};
// Sets an MTT channel track's volume (0xd55720; provisional name and argument names).
void SetMTTChannelTrackVolume(int32_t track, int32_t object, int32_t channel, float volume, float fade);
struct ChangeVolumeMTTChannelTrackCommand : DareCommand {
    char padding_8[0x8];
    int32_t object;      // +0x10
    int32_t channel;     // +0x14
    int32_t track;       // +0x18
    float fade;          // +0x1c
    float volume;        // +0x20
    int32_t Execute() override;
};
// Slot 2 (0xdb68a0): makes sure of the manager, then sets the volume.
int32_t ChangeVolumeMTTChannelTrackCommand::Execute() {
    int32_t track = this->track, object = this->object, channel = this->channel;
    float volume = this->volume, fade = this->fade;
    SndManager::Get();
    SetMTTChannelTrackVolume(track, object, channel, volume, fade);
    return 0;
}

}  // namespace Private
}  // namespace Dare
