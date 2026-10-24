// storm::echo field writers called by the event writers (separate translation unit, so they stay out of line).
#include "EchoRecordWriter.h"
namespace EchoRecords {
// Parent of most events: handler and cookie references, written only in mode 2.
struct EventBase { char pad_0[8]; uint32_t handlerRefId; uint64_t cookie; void Write(Writer* writer, uint8_t mode); };
void EventBase::Write(Writer* writer, uint8_t mode) {
    if (mode != 2) return;
    WriteReference(writer, "handlerRefId", handlerRefId, 0xffffffffu);
    WriteReference(writer, "cookie", cookie, ~uint64_t(0));
}
}
