// storm::echo event writers: the parent write, then one record per field.
// Generated from the field list of each original function; struct names are original addresses.
#include "EchoRecordWriter.h"
namespace EchoRecords {
struct Event_25c9f0 : Base<0x25c9f0u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    void Write(Writer* writer);
};
void Event_25c9f0::Write(Writer* writer) {
    Base<0x25c9f0u>::Write(writer);
    writer->WriteUnsigned("timeSliceTaken", field_32);
    writer->WriteUnsigned("timeSliceLimit", field_36);
}
struct Event_25cb20 : Base<0x25cb20u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    bool field_40;
    void Write(Writer* writer);
};
void Event_25cb20::Write(Writer* writer) {
    Base<0x25cb20u>::Write(writer);
    writer->WriteUnsigned("timeSliceTaken", field_32);
    writer->WriteUnsigned("timeSliceLimit", field_36);
    writer->WriteBool("aborted", field_40);
}
struct Event_25cca0 : Base<0x25cca0u> {
    char pad_0[32];
    uint32_t field_32;
    void Write(Writer* writer);
};
void Event_25cca0::Write(Writer* writer) {
    Base<0x25cca0u>::Write(writer);
    writer->WriteUnsigned("elapsedTime", field_32);
}
struct Event_25f270 : Base<0x25f270u> {
    char pad_0[32];
    uint16_t field_32;
    uint16_t field_34;
    bool field_36;
    void Write(Writer* writer);
};
void Event_25f270::Write(Writer* writer) {
    Base<0x25f270u>::Write(writer);
    writer->WriteUnsigned("requestedPort", field_32);
    writer->WriteUnsigned("bindPort", field_34);
    writer->WriteBool("successful", field_36);
}
struct Event_25f400 : Base<0x25f400u> {
    char pad_0[32];
    uint16_t field_32;
    uint16_t field_34;
    bool field_36;
    void Write(Writer* writer);
};
void Event_25f400::Write(Writer* writer) {
    Base<0x25f400u>::Write(writer);
    writer->WriteUnsigned("requestedPort", field_32);
    writer->WriteUnsigned("bindPort", field_34);
    writer->WriteBool("successful", field_36);
}
struct Event_260440 : Base<0x260440u> {
    char pad_0[48];
    uint32_t field_48;
    void Write(Writer* writer);
};
void Event_260440::Write(Writer* writer) {
    Base<0x260440u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_48);
}
struct Event_262b90 : Base<0x262b90u> {
    char pad_0[72];
    bool field_72;
    bool field_73;
    void Write(Writer* writer);
};
void Event_262b90::Write(Writer* writer) {
    Base<0x262b90u>::Write(writer);
    writer->WriteBool("hierarchical", field_72);
    writer->WriteBool("server-corrected", field_73);
}
struct Event_2631b0 : Base<0x2631b0u> {
    char pad_0[56];
    bool field_56;
    void Write(Writer* writer);
};
void Event_2631b0::Write(Writer* writer) {
    Base<0x2631b0u>::Write(writer);
    writer->WriteBool("finalMaster", field_56);
}
struct Event_28efd0 : Base<0x28efd0u> {
    char pad_0[32];
    uint32_t field_32;
    void Write(Writer* writer);
};
void Event_28efd0::Write(Writer* writer) {
    Base<0x28efd0u>::Write(writer);
    writer->WriteUnsigned("requestId", field_32);
}
struct Event_293c20 : Base<0x293c20u> {
    char pad_0[32];
    uint32_t field_32;
    void Write(Writer* writer);
};
void Event_293c20::Write(Writer* writer) {
    Base<0x293c20u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
}
struct Event_294d90 : Base<0x294d90u> {
    char pad_0[32];
    uint32_t field_32;
    void Write(Writer* writer);
};
void Event_294d90::Write(Writer* writer) {
    Base<0x294d90u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
}
struct Event_295f40 : Base<0x295f40u> {
    char pad_0[32];
    uint32_t field_32;
    void Write(Writer* writer);
};
void Event_295f40::Write(Writer* writer) {
    Base<0x295f40u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
}
struct Event_296480 : Base<0x296480u> {
    char pad_0[32];
    uint32_t field_32;
    bool field_36;
    void Write(Writer* writer);
};
void Event_296480::Write(Writer* writer) {
    Base<0x296480u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
    writer->WriteBool("dissolve", field_36);
}
struct Event_2993d0 : Base<0x2993d0u> {
    char pad_0[32];
    uint32_t field_32;
    void Write(Writer* writer);
};
void Event_2993d0::Write(Writer* writer) {
    Base<0x2993d0u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
}
struct Event_299e40 : Base<0x299e40u> {
    char pad_0[56];
    uint32_t field_56;
    void Write(Writer* writer);
};
void Event_299e40::Write(Writer* writer) {
    Base<0x299e40u>::Write(writer);
    writer->WriteUnsigned("dstexcludedPeerId", field_56);
}
struct Event_29a3b0 : Base<0x29a3b0u> {
    char pad_0[56];
    uint32_t field_56;
    void Write(Writer* writer);
};
void Event_29a3b0::Write(Writer* writer) {
    Base<0x29a3b0u>::Write(writer);
    writer->WriteUnsigned("dstPeerId", field_56);
}
struct Event_29a8f0 : Base<0x29a8f0u> {
    char pad_0[32];
    uint32_t field_32;
    void Write(Writer* writer);
};
void Event_29a8f0::Write(Writer* writer) {
    Base<0x29a8f0u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
}
struct Event_29b9e0 : Base<0x29b9e0u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    void Write(Writer* writer);
};
void Event_29b9e0::Write(Writer* writer) {
    Base<0x29b9e0u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
    writer->WriteUnsigned("batchIndex", field_36);
}
struct Event_29bcf0 : Base<0x29bcf0u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    void Write(Writer* writer);
};
void Event_29bcf0::Write(Writer* writer) {
    Base<0x29bcf0u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
    writer->WriteUnsigned("batchIndex", field_36);
}
struct Event_29c3c0 : Base<0x29c3c0u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    void Write(Writer* writer);
};
void Event_29c3c0::Write(Writer* writer) {
    Base<0x29c3c0u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
    writer->WriteUnsigned("batchIndex", field_36);
}
struct Event_29c960 : Base<0x29c960u> {
    char pad_0[32];
    uint32_t field_32;
    void Write(Writer* writer);
};
void Event_29c960::Write(Writer* writer) {
    Base<0x29c960u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
}
struct Event_29cea0 : Base<0x29cea0u> {
    char pad_0[32];
    uint32_t field_32;
    void Write(Writer* writer);
};
void Event_29cea0::Write(Writer* writer) {
    Base<0x29cea0u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
}
struct Event_29e0d0 : Base<0x29e0d0u> {
    char pad_0[32];
    uint32_t field_32;
    void Write(Writer* writer);
};
void Event_29e0d0::Write(Writer* writer) {
    Base<0x29e0d0u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
}
struct Event_29e610 : Base<0x29e610u> {
    char pad_0[32];
    uint32_t field_32;
    void Write(Writer* writer);
};
void Event_29e610::Write(Writer* writer) {
    Base<0x29e610u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
}
struct Event_2a2b30 : Base<0x2a2b30u> {
    char pad_0[56];
    uint32_t field_56;
    void Write(Writer* writer);
};
void Event_2a2b30::Write(Writer* writer) {
    Base<0x2a2b30u>::Write(writer);
    writer->WriteUnsigned("dst", field_56);
}
struct Event_2a3c70 : Base<0x2a3c70u> {
    char pad_0[56];
    uint32_t field_56;
    void Write(Writer* writer);
};
void Event_2a3c70::Write(Writer* writer) {
    Base<0x2a3c70u>::Write(writer);
    writer->WriteUnsigned("dst", field_56);
}
struct Event_2a5a80 : Base<0x2a5a80u> {
    char pad_0[56];
    uint32_t field_56;
    void Write(Writer* writer);
};
void Event_2a5a80::Write(Writer* writer) {
    Base<0x2a5a80u>::Write(writer);
    writer->WriteUnsigned("timeout", field_56);
}
struct Event_2f1a60 : Base<0x2f1a60u> {
    char pad_0[32];
    bool field_32;
    void Write(Writer* writer);
};
void Event_2f1a60::Write(Writer* writer) {
    Base<0x2f1a60u>::Write(writer);
    writer->WriteBool("sessionEvent", field_32);
}
struct Event_31c7b0 : Base<0x31c7b0u> {
    char pad_0[32];
    uint32_t field_32;
    void Write(Writer* writer);
};
void Event_31c7b0::Write(Writer* writer) {
    Base<0x31c7b0u>::Write(writer);
    writer->WriteSigned("step", field_32);
}
struct Event_31c840 : Base<0x31c840u> {
    char pad_0[32];
    uint32_t field_32;
    void Write(Writer* writer);
};
void Event_31c840::Write(Writer* writer) {
    Base<0x31c840u>::Write(writer);
    writer->WriteSigned("step", field_32);
}
struct Event_33fff0 : Base<0x33fff0u> {
    char pad_0[100];
    uint32_t field_100;
    void Write(Writer* writer);
};
void Event_33fff0::Write(Writer* writer) {
    Base<0x33fff0u>::Write(writer);
    writer->WriteUnsigned("peerSRefId", field_100);
}
struct Event_43e200 : Base<0x43e200u> {
    char pad_0[40];
    uint64_t field_40;
    void Write(Writer* writer);
};
void Event_43e200::Write(Writer* writer) {
    Base<0x43e200u>::Write(writer);
    writer->WriteUnsigned("sessionTime", field_40);
}
struct Event_45f730 : Base<0x45f730u> {
    char pad_0[32];
    uint64_t field_32;
    void Write(Writer* writer);
};
void Event_45f730::Write(Writer* writer) {
    Base<0x45f730u>::Write(writer);
    writer->WriteUnsigned("initialSessionTime", field_32);
}
struct Event_46b490 : Base<0x46b490u> {
    char pad_0[32];
    uint32_t field_32;
    void Write(Writer* writer);
};
void Event_46b490::Write(Writer* writer) {
    Base<0x46b490u>::Write(writer);
    writer->WriteUnsigned("group_ref_id", field_32);
}
struct Event_46b520 : Base<0x46b520u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    char pad_40[24];
    uint64_t field_64;
    void Write(Writer* writer);
};
void Event_46b520::Write(Writer* writer) {
    Base<0x46b520u>::Write(writer);
    writer->WriteUnsigned("group_ref_id", field_32);
    writer->WriteUnsigned("peer_id", field_36);
    writer->WriteUnsigned("connected_peer_count", field_64);
}
struct Event_55d6d0 : Base<0x55d6d0u> {
    char pad_0[56];
    uint32_t field_56;
    void Write(Writer* writer);
};
void Event_55d6d0::Write(Writer* writer) {
    Base<0x55d6d0u>::Write(writer);
    writer->WriteSigned("step", field_56);
}
struct Event_5b60d0 : Base<0x5b60d0u> {
    char pad_0[273];
    uint8_t field_273;
    void Write(Writer* writer);
};
void Event_5b60d0::Write(Writer* writer) {
    Base<0x5b60d0u>::Write(writer);
    writer->WriteUnsigned("version", field_273);
}
struct Event_5c2d30 : Base<0x5c2d30u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    void Write(Writer* writer);
};
void Event_5c2d30::Write(Writer* writer) {
    Base<0x5c2d30u>::Write(writer);
    writer->WriteUnsigned("timeSliceTaken", field_32);
    writer->WriteUnsigned("timeSliceLimit", field_36);
}
struct Event_5e2e90 : Base<0x5e2e90u> {
    char pad_0[32];
    bool field_32;
    uint8_t field_33;
    void Write(Writer* writer);
};
void Event_5e2e90::Write(Writer* writer) {
    Base<0x5e2e90u>::Write(writer);
    writer->WriteBool("enable", field_32);
    writer->WriteUnsigned("deviceFoundCount", field_33);
}
struct Event_613890 : Base<0x613890u> {
    char pad_0[32];
    uint16_t field_32;
    void Write(Writer* writer);
};
void Event_613890::Write(Writer* writer) {
    Base<0x613890u>::Write(writer);
    writer->WriteUnsigned("localPort", field_32);
}
struct Event_616b20 : Base<0x616b20u> {
    char pad_0[32];
    bool field_32;
    void Write(Writer* writer);
};
void Event_616b20::Write(Writer* writer) {
    Base<0x616b20u>::Write(writer);
    writer->WriteBool("enable", field_32);
}
struct Event_617260 : Base<0x617260u> {
    char pad_0[32];
    uint16_t field_32;
    uint16_t field_34;
    uint8_t field_36;
    void Write(Writer* writer);
};
void Event_617260::Write(Writer* writer) {
    Base<0x617260u>::Write(writer);
    writer->WriteUnsigned("localPort", field_32);
    writer->WriteUnsigned("requestMapPort", field_34);
    writer->WriteUnsigned("requestedMapPortRetry", field_36);
}
struct Event_617850 : Base<0x617850u> {
    char pad_0[32];
    uint16_t field_32;
    void Write(Writer* writer);
};
void Event_617850::Write(Writer* writer) {
    Base<0x617850u>::Write(writer);
    writer->WriteUnsigned("mappedPort", field_32);
}
struct Event_621320 : Base<0x621320u> {
    char pad_0[32];
    uint16_t field_32;
    void Write(Writer* writer);
};
void Event_621320::Write(Writer* writer) {
    Base<0x621320u>::Write(writer);
    writer->WriteUnsigned("mappedPort", field_32);
}
}
