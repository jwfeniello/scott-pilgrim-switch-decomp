// Onyx completion events: a callback and listener notification gated by the
// project settings. About a thousand game functions reference the settings gate.
// Names are provisional; layouts and call order come from matching code.
#pragma once
#include <stdint.h>
#include "OnyxComponents.h"

namespace onyx {

// Global project settings; a built-in default is used until a project installs
// its own. Events are only sent when `enabled` is set (or the target forces it).
// Same layout and default as DispatchSettings in src/GuardedCallbackDispatch.cpp.
typedef uint32_t SettingsLimits __attribute__((vector_size(16)));
struct ProjectSettings {
    uint32_t enabled;
    char name[128];
    uint32_t unknown, count, padding;
    SettingsLimits limits;
    uint32_t tail;
    ProjectSettings() noexcept {
        tail = 0;
        __builtin_memset(this, 0, 132);
        typedef char NameWord __attribute__((vector_size(8), aligned(1)));
        *reinterpret_cast<NameWord*>(name) = NameWord{'U', 'N', 'K', 'N', 'O', 'W', 'N', ' '};
        *reinterpret_cast<NameWord*>(name + 8) = NameWord{'P', 'R', 'O', 'J', 'E', 'C', 'T', ' '};
        __builtin_memcpy(name + 16, "NAME", 4);
        name[20] = 0;
        count = 13;
        limits = SettingsLimits{12, 12, 0x7fffffff, 0x7fffffff};
    }
};

// What an event is sent to: flag bit 1 sends it even when the settings disable
// events; the listener handle receives the notification.
struct EventTarget {
    char padding[0x38];
    uint8_t flags;
    char padding_39[7];
    ComponentHandle* listener;
};
// Data an event carries; the callback fills it. The empty user-provided
// destructor makes the sends run under an exception cleanup.
struct EventPayload { uint64_t data; EventPayload() {} ~EventPayload() {} };
struct EventCallback {
    void* context;
    void (*invoke)(EventCallback* self, EventPayload* payload);
};

}  // namespace onyx

extern "C" onyx::ProjectSettings* Onyx_ProjectSettings;
extern "C" void Event_Notify(onyx::TrackingMap* registry, onyx::ComponentHandle* listener, uint32_t hash, onyx::EventPayload* payload);

namespace onyx {

__attribute__((always_inline)) inline ProjectSettings& Settings() {
    if (!Onyx_ProjectSettings) {
        static ProjectSettings defaults;
        Onyx_ProjectSettings = &defaults;
    }
    return *Onyx_ProjectSettings;
}

// Sends an event: the callback fills the payload, then the target's listener is notified.
template<uint32_t Hash> __attribute__((always_inline)) inline void SendEvent(EventCallback*& callback, EventTarget*& target) {
    if (!(target && (target->flags & 2)) && !Settings().enabled) return;
    EventPayload payload;
    if (callback) callback->invoke(callback, &payload);
    if (target && target->listener) Event_Notify(Accessor_Tracking, target->listener, Hash, &payload);
}

// The same with a payload the caller has already built.
template<uint32_t Hash, class Payload> __attribute__((always_inline)) inline void SendEvent(EventCallback*& callback, EventTarget*& target, Payload& payload) {
    if (!(target && (target->flags & 2)) && !Settings().enabled) return;
    if (callback) callback->invoke(callback, reinterpret_cast<EventPayload*>(&payload));
    if (target && target->listener) Event_Notify(Accessor_Tracking, target->listener, Hash, reinterpret_cast<EventPayload*>(&payload));
}

// Value events: the callback and the listener each get their own payload,
// constructed in place from the same arguments (none value-initializes it).
template<class T> struct ValuePayload {
    T value;
    template<class... Args> __attribute__((always_inline)) ValuePayload(const Args&... args) : value(args...) {}
    ~ValuePayload() {}
};
// The listener half is a separate inline step; this gives the two payloads
// the stack slot order the original code has.
template<uint32_t Hash, class T, class... Args> __attribute__((always_inline)) inline void NotifyValue(EventTarget*& target, const Args&... args) {
    if (target && target->listener) {
        ValuePayload<T> payload(args...);
        Event_Notify(Accessor_Tracking, target->listener, Hash, reinterpret_cast<EventPayload*>(&payload));
    }
}
template<uint32_t Hash, class T, class... Args> __attribute__((always_inline)) inline void SendValue(EventCallback*& callback, EventTarget*& target, const Args&... args) {
    if (!(target && (target->flags & 2)) && !Settings().enabled) return;
    if (callback) {
        ValuePayload<T> payload(args...);
        callback->invoke(callback, reinterpret_cast<EventPayload*>(&payload));
    }
    NotifyValue<Hash, T>(target, args...);
}

}  // namespace onyx
