// Dare::Private's voice managers (RTTI names): slot 39 of ManagerVoiceForVirtualPlayer<T>. Member names are provisional.
#include <stddef.h>
#include <stdint.h>

void* DareAllocate(size_t size, uint32_t alignment);   // 0x722190

namespace Dare {
namespace Private {

// The functions of the platform's sound layer that SndManager keeps a table of (+0x40).
struct SoundPlatform {
    void* functions[5];
    float (*query)(void* handle);   // +0x28
};
// Dare::Private::SndManager, made on first use and kept in the global at 0x19397f0.
struct SndManager {
    static void* operator new(size_t size) { return DareAllocate(size, 8); }
    SndManager();   // 0xcf6830
    char padding_0[0x40];
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

template<class Manager> struct ManagerVoiceForVirtualPlayer {
    void* vtable;
    VirtualVoice* voice;   // +0x8
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

template struct ManagerVoiceForVirtualPlayer<ManagerHardwareVoice>;   // slot 39 at 0xd7c570
template struct ManagerVoiceForVirtualPlayer<ManagerSynthVoice>;      // 0xd850a0
template struct ManagerVoiceForVirtualPlayer<ManagerThemeVoice>;      // 0xd8a7e0
template struct ManagerVoiceForVirtualPlayer<ManagerToolVoice>;       // 0xd8e440

}  // namespace Private
}  // namespace Dare
