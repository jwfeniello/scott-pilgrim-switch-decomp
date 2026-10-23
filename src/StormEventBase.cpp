// Recovered 48-byte event-base ABI used by Storm asynchronous events.
#include <stddef.h>
#include <stdint.h>
namespace StormEventAbi {
struct Status { int32_t code, detail; };
struct EventBase {
    void** table;
    uint32_t invalid;
    uint32_t padding;
    uint64_t first;
    uint64_t second;
    Status status;
    uint64_t token;
};
extern "C" {
extern __attribute__((visibility("hidden"))) uint64_t DefaultEventValue;
extern void* EventTable[];
void InitializeEventBase(EventBase* self, const Status& status, const uint64_t& token) {
    self->first = DefaultEventValue;
    self->invalid = 0xffffffff;
    self->second = 0;
    self->table = EventTable + 2;
    self->status.code = status.code;
    self->status.detail = status.detail;
    self->token = token;
}
}
static_assert(sizeof(Status) == 8, "status ABI view");
static_assert(sizeof(EventBase) == 0x30, "event base size");
static_assert(offsetof(EventBase, status) == 0x20, "status offset");
static_assert(offsetof(EventBase, token) == 0x28, "token offset");
}
