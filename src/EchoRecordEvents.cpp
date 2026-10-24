// storm::echo event writers: the parent write, then one record per field.
// Generated from the field list of each original function; struct names are original addresses.
#include "EchoRecordWriter.h"
namespace EchoRecords {
struct Event_25c650 : Base<0x25c650u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    uint32_t field_40;
    uint32_t field_44;
    uint32_t field_48;
    uint32_t field_52;
    uint32_t field_56;
    uint32_t field_60;
    uint32_t field_64;
    void Write(Writer* writer);
};
void Event_25c650::Write(Writer* writer) {
    Base<0x25c650u>::Write(writer);
    writer->WriteUnsigned("pktsInternalDropped", field_32);
    writer->WriteUnsigned("pktsPendingDelay", field_36);
    writer->WriteUnsigned("pktsPendingReorder", field_40);
    writer->WriteUnsigned("pktsIntervalDuplicated", field_44);
    writer->WriteUnsigned("pktsIntervalSent", field_48);
    writer->WriteUnsigned("pktsIntervalRecv", field_52);
    writer->WriteUnsigned("bytesIntervalSent", field_56);
    writer->WriteUnsigned("bytesIntervalRecv", field_60);
    writer->WriteUnsigned("intervalDuration", field_64);
}
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
struct Event_25db60 : Base<0x25db60u> {
    char pad_0[32];
    Opaque field_32;
    char pad_33[7];
    uint16_t field_40;
    void Write(Writer* writer, uint8_t mode);
};
void Event_25db60::Write(Writer* writer, uint8_t mode) {
    Base<0x25db60u>::Write(writer, mode);
    if (ShouldWrite(writer, &field_32)) MemberWriter<0x587fc0u>::Write(&field_32, writer, mode);
    writer->WriteUnsigned("port", field_40);
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
struct Event_25f600 : Base<0x25f600u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    Object* field_40;
    Object* field_48;
    Guid field_56;
    void Write(Writer* writer, uint8_t mode);
};
void Event_25f600::Write(Writer* writer, uint8_t mode) {
    Base<0x25f600u>::Write(writer, mode);
    writer->WriteUnsigned("networkReqId", field_32);
    writer->WriteUnsigned("reqId", field_36);
    if (field_40) { NestedWriter<0x2c3210u>::Write(field_40, writer, mode); }
    if (Object* object = field_48) { writer->pending = NameView("host", 4); NestedWriter<0x5bd940u>::Write(object, writer, mode); }
    { NamedGuidField f("sessionGuid", field_56); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
}
struct Event_25f890 : Base<0x25f890u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    Object* field_40;
    Object* field_48;
    Opaque field_56;
    void Write(Writer* writer, uint8_t mode);
};
void Event_25f890::Write(Writer* writer, uint8_t mode) {
    Base<0x25f890u>::Write(writer, mode);
    writer->WriteUnsigned("networkReqId", field_32);
    writer->WriteUnsigned("reqId", field_36);
    if (field_40) { NestedWriter<0x25ee50u>::Write(field_40, writer); }
    if (Object* object = field_48) { writer->pending = NameView("host", 4); NestedWriter<0x5bd940u>::Write(object, writer, mode); }
    if (ShouldWrite(writer, &field_56)) { writer->pending = NameView("groupGuid", 9); MemberWriter<0x576eb0u>::Write(&field_56, writer, 0); }
}
struct Event_260290 : Base<0x260290u> {
    char pad_0[32];
    int32_t field_32;
    char pad_36[12];
    uint32_t field_48;
    char pad_52[4];
    Object* field_56;
    uint32_t field_64;
    uint32_t field_68;
    uint32_t field_72;
    void Write(Writer* writer);
};
void Event_260290::Write(Writer* writer) {
    Base<0x260290u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_48);
    if (field_56) { NestedWriter<0x268bf0u>::Write(field_56, writer); }
    writer->WriteSigned("role", field_64);
    { NamedField f("srefid", field_68); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    if (field_32 >= 1) {
    writer->WriteUnsigned("syncBatchBitIdx", field_72);
    }
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
struct Event_260540 : Base<0x260540u> {
    char pad_0[48];
    uint32_t field_48;
    char pad_52[4];
    Object* field_56;
    char pad_64[8];
    uint32_t field_72;
    uint32_t field_76;
    void Write(Writer* writer);
};
void Event_260540::Write(Writer* writer) {
    Base<0x260540u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_48);
    if (field_56) { NestedWriter<0x268bf0u>::Write(field_56, writer); }
    writer->WriteSigned("role", field_72);
    { NamedField f("srefid", field_76); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
}
struct Event_260e60 : Base<0x260e60u> {
    char pad_0[56];
    uint32_t field_56;
    uint32_t field_60;
    uint64_t field_64;
    void Write(Writer* writer);
};
void Event_260e60::Write(Writer* writer) {
    Base<0x260e60u>::Write(writer);
    { NamedField f("peerId", field_56); if (ShouldWrite(writer, &f)) { writer->pending = NameView("senderPeerId", 12); NamedWriter<0x2b8840u>::Write(&f, writer, 0); } }
    WriteText<0xc22610u>(writer, "netProtocolId", field_60);
    writer->WriteUnsigned("sessionTime", field_64);
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
struct Event_263d20 : Base<0x263d20u> {
    char pad_0[64];
    uint32_t field_64;
    uint32_t field_68;
    uint32_t field_72;
    uint32_t field_76;
    bool field_80;
    void Write(Writer* writer);
};
void Event_263d20::Write(Writer* writer) {
    Base<0x263d20u>::Write(writer);
    WriteText<0xc22610u>(writer, "protocolId", field_64);
    { NamedField f("peerId", field_68); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
    writer->WriteUnsigned("mementoSize", field_72);
    writer->WriteUnsigned("emptyPktSpace", field_76);
    writer->WriteBool("hierarchical", field_80);
}
struct Event_264260 : Base<0x264260u> {
    char pad_0[56];
    uint32_t field_56;
    uint32_t field_60;
    void Write(Writer* writer);
};
void Event_264260::Write(Writer* writer) {
    Base<0x264260u>::Write(writer);
    WriteText<0xc22610u>(writer, "protocolId", field_56);
    writer->WriteUnsigned("messageSizeBytes", field_60);
}
struct Event_269a10 : Base<0x269a10u> {
    char pad_0[32];
    uint32_t field_32;
    char pad_36[4];
    Object* field_40;
    void Write(Writer* writer);
};
void Event_269a10::Write(Writer* writer) {
    Base<0x269a10u>::Write(writer);
    writer->WriteSigned("role", field_32);
    if (field_40) { NestedWriter<0x268bf0u>::Write(field_40, writer); }
}
struct Event_26a590 : Base<0x26a590u> {
    char pad_0[32];
    uint32_t field_32;
    char pad_36[4];
    Object* field_40;
    char pad_48[8];
    uint32_t field_56;
    uint32_t field_60;
    Opaque field_64;
    char pad_65[7];
    Opaque field_72;
    char pad_73[19];
    bool field_92;
    void Write(Writer* writer, uint8_t mode);
};
void Event_26a590::Write(Writer* writer, uint8_t mode) {
    Base<0x26a590u>::Write(writer, mode);
    writer->WriteSigned("role", field_32);
    if (field_40) { NestedWriter<0x268bf0u>::Write(field_40, writer); }
    { NamedField f("srefid", field_56); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    { NamedField f("peerId", field_60); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
    if (ShouldWrite(writer, &field_64)) MemberWriter<0x268e40u>::Write(&field_64, writer, mode);
    if (ShouldWrite(writer, &field_72)) MemberWriter<0x2690e0u>::Write(&field_72, writer);
    writer->WriteBool("finalMasterEnabled", field_92);
}
struct Event_26a8a0 : Base<0x26a8a0u> {
    char pad_0[32];
    uint32_t field_32;
    char pad_36[4];
    Object* field_40;
    char pad_48[8];
    uint32_t field_56;
    uint32_t field_60;
    void Write(Writer* writer);
};
void Event_26a8a0::Write(Writer* writer) {
    Base<0x26a8a0u>::Write(writer);
    writer->WriteSigned("role", field_32);
    if (field_40) { NestedWriter<0x268bf0u>::Write(field_40, writer); }
    { NamedField f("srefid", field_56); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    writer->WriteUnsigned("objectRefId", field_60);
}
struct Event_26a9f0 : Base<0x26a9f0u> {
    char pad_0[32];
    uint32_t field_32;
    char pad_36[4];
    Object* field_40;
    char pad_48[8];
    uint32_t field_56;
    uint32_t field_60;
    uint32_t field_64;
    void Write(Writer* writer);
};
void Event_26a9f0::Write(Writer* writer) {
    Base<0x26a9f0u>::Write(writer);
    writer->WriteSigned("role", field_32);
    if (field_40) { NestedWriter<0x268bf0u>::Write(field_40, writer); }
    { NamedField f("srefid", field_56); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    { NamedField f("peerId", field_60); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
    writer->WriteUnsigned("objectRefId", field_64);
}
struct Event_26b070 : Base<0x26b070u> {
    char pad_0[32];
    Object* field_32;
    Object* field_40;
    uint32_t field_48;
    void Write(Writer* writer, uint8_t mode);
};
void Event_26b070::Write(Writer* writer, uint8_t mode) {
    Base<0x26b070u>::Write(writer, mode);
    if (Object* object = field_32) { writer->pending = NameView("src", 3); NestedWriter<0x5bd940u>::Write(object, writer, mode); }
    if (Object* object = field_40) { writer->pending = NameView("dst", 3); NestedWriter<0x5bd940u>::Write(object, writer, mode); }
    writer->WriteUnsigned("rttValue", field_48);
}
struct Event_26c470 : Base<0x26c470u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    uint32_t field_40;
    char pad_44[12];
    uint64_t field_56;
    uint32_t field_64;
    void Write(Writer* writer);
};
void Event_26c470::Write(Writer* writer) {
    Base<0x26c470u>::Write(writer);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    { NamedField f("peerId", field_36); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
    WriteText<0xc22610u>(writer, "protocolId", field_40);
    writer->WriteUnsigned("evtSessionTime", field_56);
    WriteText<0xc22610u>(writer, "peerChannelId", field_64);
}
struct Event_26c9c0 : Base<0x26c9c0u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    uint32_t field_40;
    uint32_t field_44;
    void Write(Writer* writer);
};
void Event_26c9c0::Write(Writer* writer) {
    Base<0x26c9c0u>::Write(writer);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    WriteText<0xc22610u>(writer, "protocolId", field_36);
    WriteText<0xc22610u>(writer, "peerChannelId", field_40);
    writer->WriteUnsigned("messageSizeBytes", field_44);
}
struct Event_26d990 : Base<0x26d990u> {
    char pad_0[32];
    Object* field_32;
    uint32_t field_40;
    void Write(Writer* writer, uint8_t mode);
};
void Event_26d990::Write(Writer* writer, uint8_t mode) {
    Base<0x26d990u>::Write(writer, mode);
    if (field_32) { NestedWriter<0x5bd940u>::Write(field_32, writer, mode); }
    writer->WriteUnsigned("pingValue", field_40);
}
struct Event_26dcf0 : Base<0x26dcf0u> {
    char pad_0[32];
    Object* field_32;
    bool field_40;
    void Write(Writer* writer, uint8_t mode);
};
void Event_26dcf0::Write(Writer* writer, uint8_t mode) {
    Base<0x26dcf0u>::Write(writer, mode);
    if (field_32) { NestedWriter<0x5bd940u>::Write(field_32, writer, mode); }
    writer->WriteBool("causedByPeerLost", field_40);
}
struct Event_271fa0 : Base<0x271fa0u> {
    char pad_0[56];
    uint32_t field_56;
    void Write(Writer* writer);
};
void Event_271fa0::Write(Writer* writer) {
    Base<0x271fa0u>::Write(writer);
    WriteText<0xc22610u>(writer, "reasonId", field_56);
}
struct Event_285e90 : Base<0x285e90u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    uint32_t field_40;
    uint32_t field_44;
    void Write(Writer* writer);
};
void Event_285e90::Write(Writer* writer) {
    Base<0x285e90u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
    writer->WriteUnsigned("sessionStep", field_40);
    writer->WriteUnsigned("priority", field_36);
    WriteText<0xc22610u>(writer, "protocolId", field_44);
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
struct Event_292b90 : Base<0x292b90u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    Object* field_40;
    uint32_t field_48;
    bool field_52;
    void Write(Writer* writer);
};
void Event_292b90::Write(Writer* writer) {
    Base<0x292b90u>::Write(writer);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    writer->WriteSigned("role", field_36);
    if (field_40) { NestedWriter<0x268bf0u>::Write(field_40, writer); }
    { NamedField f("handlerRefId", field_48); if (ShouldWrite(writer, &f)) NamedWriter<0x57e080u>::Write(&f, writer, 0); }
    writer->WriteBool("mementoActivated", field_52);
}
struct Event_293960 : Base<0x293960u> {
    char pad_0[32];
    uint32_t field_32;
    char pad_36[4];
    Object* field_40;
    void Write(Writer* writer);
};
void Event_293960::Write(Writer* writer) {
    Base<0x293960u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
    if (field_40) { NestedWriter<0x268bf0u>::Write(field_40, writer); }
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
struct Event_294280 : Base<0x294280u> {
    char pad_0[32];
    uint32_t field_32;
    Opaque field_36;
    void Write(Writer* writer, uint8_t mode);
};
void Event_294280::Write(Writer* writer, uint8_t mode) {
    Base<0x294280u>::Write(writer, mode);
    writer->WriteUnsigned("objectRefId", field_32);
    if (ShouldWrite(writer, &field_36)) MemberWriter<0x268e40u>::Write(&field_36, writer, mode);
}
struct Event_294830 : Base<0x294830u> {
    char pad_0[32];
    uint32_t field_32;
    Opaque field_36;
    void Write(Writer* writer);
};
void Event_294830::Write(Writer* writer) {
    Base<0x294830u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
    if (ShouldWrite(writer, &field_36)) MemberWriter<0x2690e0u>::Write(&field_36, writer);
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
struct Event_295430 : Base<0x295430u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    void Write(Writer* writer);
};
void Event_295430::Write(Writer* writer) {
    Base<0x295430u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
    { NamedField f("peerId", field_36); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
}
struct Event_2959c0 : Base<0x2959c0u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    void Write(Writer* writer);
};
void Event_2959c0::Write(Writer* writer) {
    Base<0x2959c0u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
    { NamedField f("peerId", field_36); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
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
struct Event_296b00 : Base<0x296b00u> {
    char pad_0[32];
    uint32_t field_32;
    bool field_36;
    char pad_37[3];
    Object* field_40;
    void Write(Writer* writer);
};
void Event_296b00::Write(Writer* writer) {
    Base<0x296b00u>::Write(writer);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    writer->WriteBool("dissolve", field_36);
    if (field_40) { NestedWriter<0x268bf0u>::Write(field_40, writer); }
}
struct Event_2970a0 : Base<0x2970a0u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    void Write(Writer* writer);
};
void Event_2970a0::Write(Writer* writer) {
    Base<0x2970a0u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
    WriteText<0xc22610u>(writer, "protocolId", field_36);
}
struct Event_297680 : Base<0x297680u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    uint32_t field_40;
    uint32_t field_44;
    uint32_t field_48;
    void Write(Writer* writer);
};
void Event_297680::Write(Writer* writer) {
    Base<0x297680u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
    WriteText<0xc22610u>(writer, "protocolId", field_36);
    writer->WriteUnsigned("refreshMin", field_40);
    writer->WriteUnsigned("refreshMax", field_44);
    writer->WriteUnsigned("refreshBg", field_48);
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
struct Event_29b440 : Base<0x29b440u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    void Write(Writer* writer);
};
void Event_29b440::Write(Writer* writer) {
    Base<0x29b440u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
    { NamedField f("peerId", field_36); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
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
struct Event_29db50 : Base<0x29db50u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    void Write(Writer* writer);
};
void Event_29db50::Write(Writer* writer) {
    Base<0x29db50u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
    { NamedField f("handlerRefId", field_36); if (ShouldWrite(writer, &f)) NamedWriter<0x57e080u>::Write(&f, writer, 0); }
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
struct Event_29f890 : Base<0x29f890u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    uint32_t field_40;
    void Write(Writer* writer);
};
void Event_29f890::Write(Writer* writer) {
    Base<0x29f890u>::Write(writer);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    WriteText<0xc22610u>(writer, "objectGroupType", field_36);
    writer->WriteUnsigned("groupObserverRefId", field_40);
}
struct Event_2a0d70 : Base<0x2a0d70u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    uint32_t field_40;
    void Write(Writer* writer);
};
void Event_2a0d70::Write(Writer* writer) {
    Base<0x2a0d70u>::Write(writer);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    WriteText<0xc22610u>(writer, "peerChannelId", field_36);
    writer->WriteUnsigned("channelHandlerRefId", field_40);
}
struct Event_2a1cb0 : Base<0x2a1cb0u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    uint32_t field_40;
    void Write(Writer* writer);
};
void Event_2a1cb0::Write(Writer* writer) {
    Base<0x2a1cb0u>::Write(writer);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    WriteText<0xc22610u>(writer, "peerChannelId", field_36);
    WriteText<0xc22610u>(writer, "protocolId", field_40);
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
struct Event_2a5420 : Base<0x2a5420u> {
    char pad_0[32];
    Object* field_32;
    uint32_t field_40;
    void Write(Writer* writer, uint8_t mode);
};
void Event_2a5420::Write(Writer* writer, uint8_t mode) {
    Base<0x2a5420u>::Write(writer, mode);
    if (field_32) { NestedWriter<0x5bd940u>::Write(field_32, writer, mode); }
    writer->WriteUnsigned("timeout", field_40);
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
struct Event_2a5fb0 : Base<0x2a5fb0u> {
    char pad_0[32];
    uint32_t field_32;
    void Write(Writer* writer);
};
void Event_2a5fb0::Write(Writer* writer) {
    Base<0x2a5fb0u>::Write(writer);
    WriteText<0xc22610u>(writer, "netObjectGroupName", field_32);
}
struct Event_2a67c0 : Base<0x2a67c0u> {
    char pad_0[32];
    uint32_t field_32;
    void Write(Writer* writer);
};
void Event_2a67c0::Write(Writer* writer) {
    Base<0x2a67c0u>::Write(writer);
    WriteText<0xc22610u>(writer, "sessionTypeId", field_32);
}
struct Event_2a92d0 : Base<0x2a92d0u> {
    char pad_0[32];
    uint32_t field_32;
    void Write(Writer* writer);
};
void Event_2a92d0::Write(Writer* writer) {
    Base<0x2a92d0u>::Write(writer);
    WriteText<0xc22610u>(writer, "peerChannelTypeName", field_32);
}
struct Event_2a9830 : Base<0x2a9830u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    void Write(Writer* writer);
};
void Event_2a9830::Write(Writer* writer) {
    Base<0x2a9830u>::Write(writer);
    WriteText<0xc22610u>(writer, "sessionTypeId", field_32);
    WriteText<0xc22610u>(writer, "peerChannelTypeName", field_36);
}
struct Event_2a9e30 : Base<0x2a9e30u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    uint32_t field_40;
    char pad_44[4];
    uint32_t field_48;
    bool field_52;
    void Write(Writer* writer, uint8_t mode);
};
void Event_2a9e30::Write(Writer* writer, uint8_t mode) {
    Base<0x2a9e30u>::Write(writer, mode);
    WriteText<0xc22610u>(writer, "peerChannelType", field_32);
    WriteText<0xc22610u>(writer, "protocolType", field_36);
    WriteText<0xc22610u>(writer, "protocolId", field_40);
    WriteText<0xc22610u>(writer, "transportMode", field_48);
    writer->WriteBool("sessionTimeSupport", field_52);
}
struct Event_2aa590 : Base<0x2aa590u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    uint32_t field_40;
    uint32_t field_44;
    uint32_t field_48;
    bool field_52;
    void Write(Writer* writer, uint8_t mode);
};
void Event_2aa590::Write(Writer* writer, uint8_t mode) {
    Base<0x2aa590u>::Write(writer, mode);
    WriteText<0xc22610u>(writer, "peerChannelTypeName", field_32);
    WriteText<0xc22610u>(writer, "protocolType", field_36);
    WriteText<0xc22610u>(writer, "protocolId", field_40);
    WriteText<0xc22610u>(writer, "dataContainerId", field_44);
    WriteText<0xc22610u>(writer, "transportMode", field_48);
    writer->WriteBool("sessionTimeSupport", field_52);
}
struct Event_2aaf80 : Base<0x2aaf80u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    uint32_t field_40;
    uint32_t field_44;
    uint32_t field_48;
    uint32_t field_52;
    bool field_56;
    void Write(Writer* writer, uint8_t mode);
};
void Event_2aaf80::Write(Writer* writer, uint8_t mode) {
    Base<0x2aaf80u>::Write(writer, mode);
    WriteText<0xc22610u>(writer, "sessionTypeId", field_32);
    WriteText<0xc22610u>(writer, "peerChannelTypeName", field_36);
    WriteText<0xc22610u>(writer, "protocolType", field_40);
    WriteText<0xc22610u>(writer, "protocolId", field_44);
    WriteText<0xc22610u>(writer, "dataContainerId", field_48);
    WriteText<0xc22610u>(writer, "transportMode", field_52);
    writer->WriteBool("sessionTimeSupport", field_56);
}
struct Event_2b9270 : Base<0x2b9270u> {
    char pad_0[48];
    Guid field_48;
    char pad_67[1];
    uint32_t field_68;
    void Write(Writer* writer);
};
void Event_2b9270::Write(Writer* writer) {
    Base<0x2b9270u>::Write(writer);
    { NamedGuidField f("sessionGuid", field_48); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
    { NamedField f("srefid", field_68); if (ShouldWrite(writer, &f)) WriteNamedReference(writer, f); }
}
struct Event_2ba5d0 : Base<0x2ba5d0u> {
    char pad_0[72];
    uint32_t field_72;
    void Write(Writer* writer);
};
void Event_2ba5d0::Write(Writer* writer) {
    Base<0x2ba5d0u>::Write(writer);
    { NamedField f("peerId", field_72); if (ShouldWrite(writer, &f)) WriteNamedReference(writer, f); }
}
struct Event_2ba860 : Base<0x2ba860u> {
    char pad_0[32];
    Guid field_32;
    char pad_51[1];
    uint32_t field_52;
    void Write(Writer* writer);
};
void Event_2ba860::Write(Writer* writer) {
    Base<0x2ba860u>::Write(writer);
    { NamedGuidField f("sessionGuid", field_32); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
    { NamedField f("srefid", field_52); if (ShouldWrite(writer, &f)) WriteNamedReference(writer, f); }
}
struct Event_2bbb80 : Base<0x2bbb80u> {
    char pad_0[56];
    uint32_t field_56;
    char pad_60[4];
    Object* field_64;
    Opaque field_72;
    char pad_73[79];
    Opaque field_152;
    void Write(Writer* writer, uint8_t mode);
};
void Event_2bbb80::Write(Writer* writer, uint8_t mode) {
    Base<0x2bbb80u>::Write(writer, mode);
    { NamedField f("peerId", field_56); if (ShouldWrite(writer, &f)) WriteNamedReference(writer, f); }
    if (field_64) { NestedWriter<0x5bd940u>::Write(field_64, writer, mode); }
    if (ShouldWrite(writer, &field_72)) MemberWriter<0x2b8b60u>::Write(&field_72, writer, mode);
    if (ShouldWrite(writer, &field_152)) MemberWriter<0x57bcb0u>::Write(&field_152, writer, mode);
}
struct Event_2bc260 : Base<0x2bc260u> {
    char pad_0[56];
    uint32_t field_56;
    char pad_60[4];
    Object* field_64;
    uint32_t field_72;
    char pad_76[4];
    Opaque field_80;
    char pad_81[79];
    Opaque field_160;
    void Write(Writer* writer, uint8_t mode);
};
void Event_2bc260::Write(Writer* writer, uint8_t mode) {
    Base<0x2bc260u>::Write(writer, mode);
    { NamedField f("peerId", field_56); if (ShouldWrite(writer, &f)) WriteNamedReference(writer, f); }
    if (field_64) { NestedWriter<0x5bd940u>::Write(field_64, writer, mode); }
    writer->WriteUnsigned("latency", field_72);
    if (ShouldWrite(writer, &field_80)) MemberWriter<0x2b8b60u>::Write(&field_80, writer, mode);
    if (ShouldWrite(writer, &field_160)) MemberWriter<0x57bcb0u>::Write(&field_160, writer, mode);
}
struct Event_2bcd10 : Base<0x2bcd10u> {
    char pad_0[56];
    uint32_t field_56;
    char pad_60[4];
    Object* field_64;
    bool field_72;
    char pad_73[7];
    Opaque field_80;
    char pad_81[23];
    Opaque field_104;
    char pad_105[7];
    Opaque field_112;
    void Write(Writer* writer, uint8_t mode);
};
void Event_2bcd10::Write(Writer* writer, uint8_t mode) {
    Base<0x2bcd10u>::Write(writer, mode);
    { NamedField f("peerId", field_56); if (ShouldWrite(writer, &f)) WriteNamedReference(writer, f); }
    if (field_64) { NestedWriter<0x5bd940u>::Write(field_64, writer, mode); }
    writer->WriteBool("connected", field_72);
    WriteNamedPair<0x57e130u>(writer, NamedPair("reason", field_104, field_80), 0);
    if (ShouldWrite(writer, &field_112)) MemberWriter<0x2b8b60u>::Write(&field_112, writer, mode);
}
struct Event_2bcf40 : Base<0x2bcf40u> {
    char pad_0[56];
    uint32_t field_56;
    void Write(Writer* writer);
};
void Event_2bcf40::Write(Writer* writer) {
    Base<0x2bcf40u>::Write(writer);
    { NamedField f("peerId", field_56); if (ShouldWrite(writer, &f)) WriteNamedReference(writer, f); }
}
struct Event_2bd090 : Base<0x2bd090u> {
    char pad_0[56];
    uint32_t field_56;
    void Write(Writer* writer);
};
void Event_2bd090::Write(Writer* writer) {
    Base<0x2bd090u>::Write(writer);
    { NamedField f("peerId", field_56); if (ShouldWrite(writer, &f)) WriteNamedReference(writer, f); }
}
struct Event_2bdfe0 : Base<0x2bdfe0u> {
    char pad_0[56];
    uint32_t field_56;
    void Write(Writer* writer);
};
void Event_2bdfe0::Write(Writer* writer) {
    Base<0x2bdfe0u>::Write(writer);
    { NamedField f("peerId", field_56); if (ShouldWrite(writer, &f)) WriteNamedReference(writer, f); }
}
struct Event_2ef210 : Base<0x2ef210u> {
    char pad_0[32];
    Guid field_32;
    char pad_51[1];
    uint32_t field_52;
    void Write(Writer* writer);
};
void Event_2ef210::Write(Writer* writer) {
    Base<0x2ef210u>::Write(writer);
    { NamedGuidField f("sessionGuid", field_32); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
    { NamedField f("srefid", field_52); if (ShouldWrite(writer, &f)) WriteNamedReference(writer, f); }
}
struct Event_2efd30 : Base<0x2efd30u> {
    char pad_0[56];
    Object* field_56;
    uint32_t field_64;
    char pad_68[4];
    uint64_t field_72;
    void Write(Writer* writer, uint8_t mode);
};
void Event_2efd30::Write(Writer* writer, uint8_t mode) {
    Base<0x2efd30u>::Write(writer, mode);
    if (field_56) { NestedWriter<0x2c3210u>::Write(field_56, writer, mode); }
    { NamedField f("handlerRefId", field_64); if (ShouldWrite(writer, &f)) NamedWriter<0x57e080u>::Write(&f, writer, 0); }
    writer->WriteUnsigned("initialTime", field_72);
}
struct Event_2f09e0 : Base<0x2f09e0u> {
    char pad_0[56];
    Guid field_56;
    void Write(Writer* writer);
};
void Event_2f09e0::Write(Writer* writer) {
    Base<0x2f09e0u>::Write(writer);
    { NamedGuidField f("peerGuid", field_56); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
}
struct Event_2f10a0 : Base<0x2f10a0u> {
    char pad_0[56];
    Guid field_56;
    char pad_75[5];
    Opaque field_80;
    char pad_81[23];
    Opaque field_104;
    void Write(Writer* writer);
};
void Event_2f10a0::Write(Writer* writer) {
    Base<0x2f10a0u>::Write(writer);
    { NamedGuidField f("peerGuid", field_56); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
    WriteNamedPair<0x57e130u>(writer, NamedPair("reason", field_104, field_80), 0);
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
struct Event_2f22c0 : Base<0x2f22c0u> {
    char pad_0[56];
    uint32_t field_56;
    char pad_60[4];
    Opaque field_64;
    char pad_65[23];
    Opaque field_88;
    void Write(Writer* writer);
};
void Event_2f22c0::Write(Writer* writer) {
    Base<0x2f22c0u>::Write(writer);
    { NamedField f("peerId", field_56); if (ShouldWrite(writer, &f)) WriteNamedReference(writer, f); }
    WriteNamedPair<0x57e130u>(writer, NamedPair("reason", field_88, field_64), 0);
}
struct Event_2f3e30 : Base<0x2f3e30u> {
    char pad_0[56];
    uint32_t field_56;
    bool field_60;
    char pad_61[3];
    Opaque field_64;
    char pad_65[23];
    Opaque field_88;
    void Write(Writer* writer);
};
void Event_2f3e30::Write(Writer* writer) {
    Base<0x2f3e30u>::Write(writer);
    { NamedField f("peerId", field_56); if (ShouldWrite(writer, &f)) WriteNamedReference(writer, f); }
    writer->WriteBool("exclusive", field_60);
    WriteNamedPair<0x57e130u>(writer, NamedPair("reason", field_88, field_64), 0);
}
struct Event_2f4520 : Base<0x2f4520u> {
    char pad_0[32];
    bool field_32;
    char pad_33[7];
    Object* field_40;
    void Write(Writer* writer, uint8_t mode);
};
void Event_2f4520::Write(Writer* writer, uint8_t mode) {
    Base<0x2f4520u>::Write(writer, mode);
    writer->WriteBool("sessionEvent", field_32);
    if (field_40) { NestedWriter<0x26d620u>::Write(field_40, writer, mode); }
}
struct Event_2f52a0 : Base<0x2f52a0u> {
    char pad_0[32];
    bool field_32;
    char pad_33[7];
    Object* field_40;
    void Write(Writer* writer, uint8_t mode);
};
void Event_2f52a0::Write(Writer* writer, uint8_t mode) {
    Base<0x2f52a0u>::Write(writer, mode);
    writer->WriteBool("sessionEvent", field_32);
    if (field_40) { NestedWriter<0x26d620u>::Write(field_40, writer, mode); }
}
struct Event_2f6ed0 : Base<0x2f6ed0u> {
    char pad_0[56];
    Object* field_56;
    uint32_t field_64;
    void Write(Writer* writer, uint8_t mode);
};
void Event_2f6ed0::Write(Writer* writer, uint8_t mode) {
    Base<0x2f6ed0u>::Write(writer, mode);
    if (field_56) { NestedWriter<0x2c3210u>::Write(field_56, writer, mode); }
    writer->WriteUnsigned("hostMigrationId", field_64);
}
struct Event_2f93e0 : Base<0x2f93e0u> {
    char pad_0[32];
    uint32_t field_32;
    char pad_36[4];
    uint64_t field_40;
    uint64_t field_48;
    void Write(Writer* writer);
};
void Event_2f93e0::Write(Writer* writer) {
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) WriteNamedReference(writer, f); }
    writer->WriteUnsigned("systemTime", field_40);
    writer->WriteUnsigned("sessionTime", field_48);
}
struct Event_2f97a0 : Base<0x2f97a0u> {
    char pad_0[32];
    uint32_t field_32;
    void Write(Writer* writer);
};
void Event_2f97a0::Write(Writer* writer) {
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) WriteNamedReference(writer, f); }
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
struct Event_328b50 : Base<0x328b50u> {
    char pad_0[56];
    bool field_56;
    bool field_57;
    char pad_58[6];
    Opaque field_64;
    char pad_65[23];
    Opaque field_88;
    void Write(Writer* writer);
};
void Event_328b50::Write(Writer* writer) {
    Base<0x328b50u>::Write(writer);
    writer->WriteBool("exclusive", field_56);
    writer->WriteBool("excludePeers", field_57);
    WriteNamedPair<0x57e130u>(writer, NamedPair("reason", field_88, field_64), 0);
}
struct Event_328d50 : Base<0x328d50u> {
    char pad_0[56];
    uint32_t field_56;
    uint32_t field_60;
    Opaque field_64;
    char pad_65[79];
    Opaque field_144;
    char pad_145[3];
    Guid field_148;
    char pad_167[1];
    uint32_t field_168;
    void Write(Writer* writer, uint8_t mode);
};
void Event_328d50::Write(Writer* writer, uint8_t mode) {
    Base<0x328d50u>::Write(writer, mode);
    writer->WriteUnsigned("remoteSRefId", field_56);
    { NamedField f("peerId", field_60); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
    if (ShouldWrite(writer, &field_64)) MemberWriter<0x2b8b60u>::Write(&field_64, writer, mode);
    if (ShouldWrite(writer, &field_144)) MemberWriter<0x585bc0u>::Write(&field_144, writer, mode);
    { NamedGuidField f("peerGuid", field_148); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
    writer->WriteUnsigned("sequence", field_168);
}
struct Event_329480 : Base<0x329480u> {
    char pad_0[56];
    uint32_t field_56;
    char pad_60[4];
    Object* field_64;
    char pad_72[8];
    bool field_80;
    char pad_81[7];
    Opaque field_88;
    char pad_89[23];
    Opaque field_112;
    char pad_113[7];
    Opaque field_120;
    void Write(Writer* writer, uint8_t mode);
};
void Event_329480::Write(Writer* writer, uint8_t mode) {
    Base<0x329480u>::Write(writer, mode);
    { NamedField f("peerId", field_56); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
    if (field_64) { NestedWriter<0x5bd940u>::Write(field_64, writer, mode); }
    writer->WriteBool("connected", field_80);
    WriteNamedPair<0x57e130u>(writer, NamedPair("reason", field_112, field_88), 0);
    if (ShouldWrite(writer, &field_120)) MemberWriter<0x2b8b60u>::Write(&field_120, writer, mode);
}
struct Event_329d50 : Base<0x329d50u> {
    char pad_0[56];
    uint32_t field_56;
    uint32_t field_60;
    Opaque field_64;
    void Write(Writer* writer, uint8_t mode);
};
void Event_329d50::Write(Writer* writer, uint8_t mode) {
    Base<0x329d50u>::Write(writer, mode);
    { NamedField f("peerId", field_56); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
    writer->WriteUnsigned("latency", field_60);
    if (ShouldWrite(writer, &field_64)) MemberWriter<0x2b8b60u>::Write(&field_64, writer, mode);
}
struct Event_33d120 : Base<0x33d120u> {
    char pad_0[97];
    Guid field_97;
    char pad_116[24];
    uint32_t field_140;
    char pad_144[24];
    Opaque field_168;
    char pad_169[43];
    Opaque field_212;
    void Write(Writer* writer);
};
void Event_33d120::Write(Writer* writer) {
    Base<0x33d120u>::Write(writer);
    { uint32_t copy = field_140;
    { NamedField f("peerId", copy); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
    }
    { NamedGuidField f("peerGuid", field_97); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
    WriteNamedPair<0x57e130u>(writer, NamedPair("reason", field_212, field_168), 0);
}
struct Event_33d570 : Base<0x33d570u> {
    char pad_0[97];
    Guid field_97;
    char pad_116[24];
    uint32_t field_140;
    char pad_144[24];
    Opaque field_168;
    char pad_169[43];
    Opaque field_212;
    void Write(Writer* writer);
};
void Event_33d570::Write(Writer* writer) {
    Base<0x33d570u>::Write(writer);
    { uint32_t copy = field_140;
    { NamedField f("peerId", copy); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
    }
    { NamedGuidField f("peerGuid", field_97); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
    WriteNamedPair<0x57e130u>(writer, NamedPair("reason", field_212, field_168), 0);
}
struct Event_33f670 : Base<0x33f670u> {
    char pad_0[97];
    Guid field_97;
    char pad_116[28];
    Opaque field_144;
    char pad_145[43];
    Opaque field_188;
    void Write(Writer* writer);
};
void Event_33f670::Write(Writer* writer) {
    Base<0x33f670u>::Write(writer);
    { NamedGuidField f("peerGuid", field_97); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
    WriteNamedPair<0x57e130u>(writer, NamedPair("reason", field_188, field_144), 0);
}
struct Event_33fa80 : Base<0x33fa80u> {
    char pad_0[97];
    Guid field_97;
    char pad_116[24];
    uint32_t field_140;
    char pad_144[24];
    Opaque field_168;
    char pad_169[43];
    Opaque field_212;
    void Write(Writer* writer);
};
void Event_33fa80::Write(Writer* writer) {
    Base<0x33fa80u>::Write(writer);
    { uint32_t copy = field_140;
    { NamedField f("peerId", copy); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
    }
    { NamedGuidField f("peerGuid", field_97); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
    WriteNamedPair<0x57e130u>(writer, NamedPair("reason", field_212, field_168), 0);
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
struct Event_3750f0 : Base<0x3750f0u> {
    char pad_0[56];
    uint32_t field_56;
    uint32_t field_60;
    void Write(Writer* writer);
};
void Event_3750f0::Write(Writer* writer) {
    Base<0x3750f0u>::Write(writer);
    { NamedField f("peerId", field_56); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
    writer->WriteUnsigned("sequence", field_60);
}
struct Event_375740 : Base<0x375740u> {
    char pad_0[56];
    uint32_t field_56;
    char pad_60[4];
    Object* field_64;
    char pad_72[8];
    bool field_80;
    char pad_81[7];
    Opaque field_88;
    char pad_89[23];
    Opaque field_112;
    void Write(Writer* writer, uint8_t mode);
};
void Event_375740::Write(Writer* writer, uint8_t mode) {
    Base<0x375740u>::Write(writer, mode);
    { NamedField f("peerId", field_56); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
    if (field_64) { NestedWriter<0x5bd940u>::Write(field_64, writer, mode); }
    writer->WriteBool("connected", field_80);
    WriteNamedPair<0x57e130u>(writer, NamedPair("reason", field_112, field_88), 0);
}
struct Event_376010 : Base<0x376010u> {
    char pad_0[32];
    uint32_t field_32;
    char pad_36[4];
    uint64_t field_40;
    uint64_t field_48;
    uint32_t field_56;
    void Write(Writer* writer, uint8_t mode);
};
void Event_376010::Write(Writer* writer, uint8_t mode) {
    Base<0x376010u>::Write(writer, mode);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    writer->WriteUnsigned("systemTime", field_40);
    writer->WriteUnsigned("sessionTime", field_48);
    writer->WriteUnsigned("peerId", field_56);
}
struct Event_377d40 : Base<0x377d40u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    void Write(Writer* writer);
};
void Event_377d40::Write(Writer* writer) {
    Base<0x377d40u>::Write(writer);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    writer->WriteUnsigned("remotePeerId", field_36);
}
struct Event_3782d0 : Base<0x3782d0u> {
    char pad_0[32];
    uint32_t field_32;
    bool field_36;
    void Write(Writer* writer);
};
void Event_3782d0::Write(Writer* writer) {
    Base<0x3782d0u>::Write(writer);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    writer->WriteBool("pause", field_36);
}
struct Event_38df20 : Base<0x38df20u> {
    char pad_0[32];
    int32_t field_32;
    char pad_36[12];
    uint32_t field_48;
    char pad_52[4];
    Object* field_56;
    Object* field_64;
    Opaque field_72;
    char pad_73[11];
    uint32_t field_84;
    Guid field_88;
    void Write(Writer* writer, uint8_t mode);
};
void Event_38df20::Write(Writer* writer, uint8_t mode) {
    Base<0x38df20u>::Write(writer, mode);
    { NamedField f("srefid", field_48); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    if (field_32 >= 1) {
    if (field_56) { NestedWriter<0x25ee50u>::Write(field_56, writer, mode); }
    if (field_64) { NestedWriter<0x5bd940u>::Write(field_64, writer, mode); }
    if (ShouldWrite(writer, &field_72)) MemberWriter<0x38ddf0u>::Write(&field_72, writer);
    }
    { NamedField f("peerId", field_84); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
    { NamedGuidField f("peerGuid", field_88); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
}
struct Event_38e510 : Base<0x38e510u> {
    char pad_0[48];
    uint32_t field_48;
    uint16_t field_52;
    Opaque field_54;
    void Write(Writer* writer, uint8_t mode);
};
void Event_38e510::Write(Writer* writer, uint8_t mode) {
    Base<0x38e510u>::Write(writer, mode);
    { NamedField f("srefid", field_48); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    if (ShouldWrite(writer, &field_54)) MemberWriter<0x576eb0u>::Write(&field_54, writer, 0);
    writer->WriteUnsigned("requestId", field_52);
}
struct Event_38eea0 : Base<0x38eea0u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    Object* field_40;
    bool field_48;
    char pad_49[7];
    Opaque field_56;
    char pad_57[23];
    Opaque field_80;
    void Write(Writer* writer, uint8_t mode);
};
void Event_38eea0::Write(Writer* writer, uint8_t mode) {
    Base<0x38eea0u>::Write(writer, mode);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    { NamedField f("peerId", field_36); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
    if (field_40) { NestedWriter<0x5bd940u>::Write(field_40, writer, mode); }
    writer->WriteBool("connected", field_48);
    WriteNamedPair<0x57e130u>(writer, NamedPair("reason", field_80, field_56), 0);
}
struct Event_38f000 : Base<0x38f000u> {
    char pad_0[32];
    uint32_t field_32;
    Guid field_36;
    char pad_55[1];
    uint32_t field_56;
    void Write(Writer* writer);
};
void Event_38f000::Write(Writer* writer) {
    Base<0x38f000u>::Write(writer);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    { NamedGuidField f("peerGuid", field_36); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
    { NamedField f("peerId", field_56); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
}
struct Event_38f140 : Base<0x38f140u> {
    char pad_0[32];
    uint32_t field_32;
    Guid field_36;
    char pad_55[1];
    uint32_t field_56;
    void Write(Writer* writer);
};
void Event_38f140::Write(Writer* writer) {
    Base<0x38f140u>::Write(writer);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    { NamedGuidField f("peerGuid", field_36); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
    { NamedField f("peerId", field_56); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
}
struct Event_38f860 : Base<0x38f860u> {
    char pad_0[32];
    uint32_t field_32;
    char pad_36[12];
    Object* field_48;
    uint16_t field_56;
    void Write(Writer* writer, uint8_t mode);
};
void Event_38f860::Write(Writer* writer, uint8_t mode) {
    Base<0x38f860u>::Write(writer, mode);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    if (field_48) { NestedWriter<0x5bd940u>::Write(field_48, writer, mode); }
    writer->WriteUnsigned("requestId", field_56);
}
struct Event_38f950 : Base<0x38f950u> {
    char pad_0[32];
    uint32_t field_32;
    char pad_36[4];
    Object* field_40;
    uint16_t field_48;
    void Write(Writer* writer, uint8_t mode);
};
void Event_38f950::Write(Writer* writer, uint8_t mode) {
    Base<0x38f950u>::Write(writer, mode);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    if (field_40) { NestedWriter<0x5bd940u>::Write(field_40, writer, mode); }
    writer->WriteUnsigned("requestId", field_48);
}
struct Event_3cbf20 : Base<0x3cbf20u> {
    char pad_0[32];
    uint32_t field_32;
    char pad_36[4];
    Object* field_40;
    uint32_t field_48;
    char pad_52[4];
    uint64_t field_56;
    void Write(Writer* writer, uint8_t mode);
};
void Event_3cbf20::Write(Writer* writer, uint8_t mode) {
    Base<0x3cbf20u>::Write(writer, mode);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    { NamedField f("handlerRefId", field_48); if (ShouldWrite(writer, &f)) NamedWriter<0x57e080u>::Write(&f, writer, 0); }
    if (field_40) { NestedWriter<0x25ee50u>::Write(field_40, writer, mode); }
    writer->WriteUnsigned("initialTime", field_56);
}
struct Event_3cc700 : Base<0x3cc700u> {
    char pad_0[32];
    uint32_t field_32;
    uint16_t field_36;
    char pad_38[26];
    Opaque field_64;
    char pad_65[23];
    Opaque field_88;
    void Write(Writer* writer);
};
void Event_3cc700::Write(Writer* writer) {
    Base<0x3cc700u>::Write(writer);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    writer->WriteUnsigned("requestId", field_36);
    WriteNamedPair<0x57e130u>(writer, NamedPair("reason", field_88, field_64), 0);
}
struct Event_3ce1f0 : Base<0x3ce1f0u> {
    char pad_0[32];
    uint16_t field_32;
    Guid field_34;
    char pad_53[3];
    uint32_t field_56;
    char pad_60[12];
    uint32_t field_72;
    uint32_t field_76;
    uint32_t field_80;
    char pad_84[4];
    uint64_t field_88;
    void Write(Writer* writer, uint8_t mode);
};
void Event_3ce1f0::Write(Writer* writer, uint8_t mode) {
    Base<0x3ce1f0u>::Write(writer, mode);
    if (ShouldWrite(writer, &field_32)) WriteReference(writer, "cid", field_32, uint16_t(0xffff));
    { NamedGuidField f("peerGuid", field_34); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
    { NamedField f("srefid", field_56); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    { NamedField f("handlerRefId", field_72); if (ShouldWrite(writer, &f)) NamedWriter<0x57e080u>::Write(&f, writer, 0); }
    { NamedField f("peerId", field_76); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
    writer->WriteUnsigned("sessionCrc", field_80);
    writer->WriteUnsigned("localGroupTime", field_88);
}
struct Event_3ce860 : Base<0x3ce860u> {
    char pad_0[32];
    uint16_t field_32;
    void Write(Writer* writer);
};
void Event_3ce860::Write(Writer* writer) {
    Base<0x3ce860u>::Write(writer);
    if (ShouldWrite(writer, &field_32)) WriteReference(writer, "cid", field_32, uint16_t(0xffff));
}
struct Event_3cef50 : Base<0x3cef50u> {
    char pad_0[32];
    uint16_t field_32;
    char pad_34[6];
    Opaque field_40;
    char pad_41[23];
    Opaque field_64;
    void Write(Writer* writer, uint8_t mode);
};
void Event_3cef50::Write(Writer* writer, uint8_t mode) {
    Base<0x3cef50u>::Write(writer, mode);
    if (ShouldWrite(writer, &field_32)) WriteReference(writer, "cid", field_32, uint16_t(0xffff));
    WriteNamedPair<0x57e130u>(writer, NamedPair("reason", field_64, field_40), 0);
}
struct Event_3cf6b0 : Base<0x3cf6b0u> {
    char pad_0[32];
    uint16_t field_32;
    char pad_34[2];
    uint32_t field_36;
    uint32_t field_40;
    char pad_44[4];
    uint64_t field_48;
    void Write(Writer* writer);
};
void Event_3cf6b0::Write(Writer* writer) {
    Base<0x3cf6b0u>::Write(writer);
    if (ShouldWrite(writer, &field_32)) WriteReference(writer, "cid", field_32, uint16_t(0xffff));
    { NamedField f("srefid", field_36); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    { NamedField f("peerId", field_40); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
    writer->WriteUnsigned("localGroupTime", field_48);
}
struct Event_3cfd30 : Base<0x3cfd30u> {
    char pad_0[32];
    uint16_t field_32;
    void Write(Writer* writer);
};
void Event_3cfd30::Write(Writer* writer) {
    Base<0x3cfd30u>::Write(writer);
    if (ShouldWrite(writer, &field_32)) WriteReference(writer, "cid", field_32, uint16_t(0xffff));
}
struct Event_3d02f0 : Base<0x3d02f0u> {
    char pad_0[32];
    uint16_t field_32;
    Guid field_34;
    char pad_53[3];
    uint32_t field_56;
    void Write(Writer* writer);
};
void Event_3d02f0::Write(Writer* writer) {
    Base<0x3d02f0u>::Write(writer);
    if (ShouldWrite(writer, &field_32)) WriteReference(writer, "cid", field_32, uint16_t(0xffff));
    { NamedGuidField f("peerGuid", field_34); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
    { NamedField f("srefid", field_56); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
}
struct Event_3d0aa0 : Base<0x3d0aa0u> {
    char pad_0[32];
    uint16_t field_32;
    char pad_34[6];
    Opaque field_40;
    char pad_41[23];
    Opaque field_64;
    void Write(Writer* writer, uint8_t mode);
};
void Event_3d0aa0::Write(Writer* writer, uint8_t mode) {
    Base<0x3d0aa0u>::Write(writer, mode);
    if (ShouldWrite(writer, &field_32)) WriteReference(writer, "cid", field_32, uint16_t(0xffff));
    WriteNamedPair<0x57e130u>(writer, NamedPair("reason", field_64, field_40), 0);
}
struct Event_3d11b0 : Base<0x3d11b0u> {
    char pad_0[32];
    uint16_t field_32;
    char pad_34[6];
    Opaque field_40;
    char pad_41[23];
    Opaque field_64;
    void Write(Writer* writer, uint8_t mode);
};
void Event_3d11b0::Write(Writer* writer, uint8_t mode) {
    Base<0x3d11b0u>::Write(writer, mode);
    if (ShouldWrite(writer, &field_32)) WriteReference(writer, "cid", field_32, uint16_t(0xffff));
    WriteNamedPair<0x57e130u>(writer, NamedPair("reason", field_64, field_40), 0);
}
struct Event_3d7380 : Base<0x3d7380u> {
    char pad_0[39];
    Guid field_39;
    void Write(Writer* writer, uint8_t mode);
};
void Event_3d7380::Write(Writer* writer, uint8_t mode) {
    Base<0x3d7380u>::Write(writer, mode);
    { NamedGuidField f("peerGuid", field_39); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
}
struct Event_3d7f30 : Base<0x3d7f30u> {
    char pad_0[39];
    Guid field_39;
    void Write(Writer* writer, uint8_t mode);
};
void Event_3d7f30::Write(Writer* writer, uint8_t mode) {
    Base<0x3d7f30u>::Write(writer, mode);
    { NamedGuidField f("peerGuid", field_39); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
}
struct Event_3d8b00 : Base<0x3d8b00u> {
    char pad_0[32];
    uint16_t field_32;
    Guid field_34;
    char pad_53[3];
    uint32_t field_56;
    char pad_60[12];
    uint16_t field_72;
    char pad_74[6];
    uint64_t field_80;
    void Write(Writer* writer, uint8_t mode);
};
void Event_3d8b00::Write(Writer* writer, uint8_t mode) {
    Base<0x3d8b00u>::Write(writer, mode);
    if (ShouldWrite(writer, &field_32)) WriteReference(writer, "cid", field_32, uint16_t(0xffff));
    { NamedGuidField f("peerGuid", field_34); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
    { NamedField f("srefid", field_56); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    writer->WriteUnsigned("requestId", field_72);
    writer->WriteUnsigned("localGroupTime", field_80);
}
struct Event_3d9370 : Base<0x3d9370u> {
    char pad_0[32];
    uint16_t field_32;
    char pad_34[6];
    Opaque field_40;
    char pad_41[23];
    Opaque field_64;
    void Write(Writer* writer, uint8_t mode);
};
void Event_3d9370::Write(Writer* writer, uint8_t mode) {
    Base<0x3d9370u>::Write(writer, mode);
    if (ShouldWrite(writer, &field_32)) WriteReference(writer, "cid", field_32, uint16_t(0xffff));
    WriteNamedPair<0x57e130u>(writer, NamedPair("reason", field_64, field_40), 0);
}
struct Event_3d9a30 : Base<0x3d9a30u> {
    char pad_0[39];
    Guid field_39;
    char pad_58[6];
    Object* field_64;
    void Write(Writer* writer, uint8_t mode);
};
void Event_3d9a30::Write(Writer* writer, uint8_t mode) {
    Base<0x3d9a30u>::Write(writer, mode);
    { NamedGuidField f("peerGuid", field_39); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
    if (field_64) { NestedWriter<0x5bd940u>::Write(field_64, writer, mode); }
}
struct Event_3daec0 : Base<0x3daec0u> {
    char pad_0[73];
    Guid field_73;
    char pad_92[96];
    uint32_t field_188;
    char pad_192[24];
    uint64_t field_216;
    void Write(Writer* writer);
};
void Event_3daec0::Write(Writer* writer) {
    { NamedGuidField f("peerGuid", field_73); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
    writer->WriteUnsigned("protocolCrc", field_188);
    writer->WriteUnsigned("time", field_216);
}
struct Event_3e4ae0 : Base<0x3e4ae0u> {
    char pad_0[39];
    Guid field_39;
    void Write(Writer* writer, uint8_t mode);
};
void Event_3e4ae0::Write(Writer* writer, uint8_t mode) {
    Base<0x3e4ae0u>::Write(writer, mode);
    { NamedGuidField f("peerGuid", field_39); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
}
struct Event_415580 : Base<0x415580u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    Object* field_40;
    uint32_t field_48;
    char pad_52[4];
    uint64_t field_56;
    bool field_64;
    void Write(Writer* writer, uint8_t mode);
};
void Event_415580::Write(Writer* writer, uint8_t mode) {
    Base<0x415580u>::Write(writer, mode);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer, 0); }
    writer->WriteSigned("role", field_36);
    if (field_40) { NestedWriter<0x268bf0u>::Write(field_40, writer, mode); }
    { NamedField f("handlerRefId", field_48); if (ShouldWrite(writer, &f)) NamedWriter<0x57e080u>::Write(&f, writer, 0); }
    writer->WriteUnsigned("activationSessionTime", field_56);
    writer->WriteBool("mementoActivated", field_64);
}
struct Event_415770 : Base<0x415770u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    void Write(Writer* writer);
};
void Event_415770::Write(Writer* writer) {
    Base<0x415770u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
    { NamedField f("peerId", field_36); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer, 0); }
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
struct Event_45f580 : Base<0x45f580u> {
    char pad_0[32];
    StormText field_32;
    void Write(Writer* writer, uint8_t mode);
};
void Event_45f580::Write(Writer* writer, uint8_t mode) {
    Base<0x45f580u>::Write(writer, mode);
    WriteTextCopy(writer, "reason", field_32);
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
struct Event_45f7d0 : Base<0x45f7d0u> {
    char pad_0[32];
    NameView field_32;
    uint32_t field_48;
    void Write(Writer* writer, uint8_t mode);
};
void Event_45f7d0::Write(Writer* writer, uint8_t mode) {
    Base<0x45f7d0u>::Write(writer, mode);
    WriteTextView(writer, "reason", field_32);
    WriteText<0xc22610u>(writer, "reasonId", field_48);
}
struct Event_45f8e0 : Base<0x45f8e0u> {
    char pad_0[32];
    NameView field_32;
    uint32_t field_48;
    void Write(Writer* writer, uint8_t mode);
};
void Event_45f8e0::Write(Writer* writer, uint8_t mode) {
    Base<0x45f8e0u>::Write(writer, mode);
    WriteTextView(writer, "reason", field_32);
    WriteText<0xc22610u>(writer, "reasonId", field_48);
}
struct Event_45f9f0 : Base<0x45f9f0u> {
    char pad_0[32];
    NameView field_32;
    uint32_t field_48;
    void Write(Writer* writer, uint8_t mode);
};
void Event_45f9f0::Write(Writer* writer, uint8_t mode) {
    Base<0x45f9f0u>::Write(writer, mode);
    WriteTextView(writer, "reason", field_32);
    WriteText<0xc22610u>(writer, "reasonId", field_48);
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
struct Event_46b670 : Base<0x46b670u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    void Write(Writer* writer);
};
void Event_46b670::Write(Writer* writer) {
    Base<0x46b670u>::Write(writer);
    writer->WriteUnsigned("group_ref_id", field_32);
    WriteText<0xc22610u>(writer, "reason", field_36);
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
struct Event_576eb0 : Base<0x576eb0u> {
    Guid field_0;
    void Write(Writer* writer);
};
void Event_576eb0::Write(Writer* writer) {
    WriteGuid(writer, "guid", field_0);
}
struct Event_585aa0 : Base<0x585aa0u> {
    char pad_0[32];
    Opaque field_32;
    char pad_33[7];
    uint64_t field_40;
    void Write(Writer* writer, uint8_t mode);
};
void Event_585aa0::Write(Writer* writer, uint8_t mode) {
    Base<0x585aa0u>::Write(writer, mode);
    if (ShouldWrite(writer, &field_32)) MemberWriter<0x587fc0u>::Write(&field_32, writer, mode);
    if (ShouldWrite(writer, &field_40)) WriteReference(writer, "cookie", field_40, ~uint64_t(0));
}
struct Event_585bc0 : Base<0x585bc0u> {
    uint32_t field_0;
    void Write(Writer* writer);
};
void Event_585bc0::Write(Writer* writer) {
    WriteReference(writer, "peerRefId", field_0, 0xffffffffu);
}
struct Event_5931e0 : Base<0x5931e0u> {
    void Write(Writer* writer);
};
void Event_5931e0::Write(Writer* writer) {
    WriteTextValue(writer, "touchedBitsHierarchical", reinterpret_cast<const TextSource<2>*>(this)->Text());
}
struct Event_5b2ba0 : Base<0x5b2ba0u> {
    char pad_0[32];
    Guid field_32;
    void Write(Writer* writer);
};
void Event_5b2ba0::Write(Writer* writer) {
    Base<0x5b2ba0u>::Write(writer);
    WriteGuid(writer, "guid", field_32);
}
struct Event_5b5a80 : Base<0x5b5a80u> {
    char pad_0[273];
    uint8_t field_273;
    char pad_274[2];
    uint32_t field_276;
    Opaque field_280;
    char pad_281[15];
    bool field_296;
    void Write(Writer* writer, uint8_t mode);
};
void Event_5b5a80::Write(Writer* writer, uint8_t mode) {
    Base<0x5b5a80u>::Write(writer, mode);
    writer->WriteUnsigned("version", field_273);
    writer->WriteUnsigned("id", field_276);
    if (mode != 2) return;
    if (ShouldWrite(writer, &field_280)) MemberWriter<0x5948d0u>::Write(&field_280, writer);
    writer->WriteBool("request", field_296);
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
struct Event_5b6e80 : Base<0x5b6e80u> {
    char pad_0[52];
    int32_t field_52;
    char pad_56[280];
    uint16_t field_336;
    uint16_t field_338;
    uint32_t field_340;
    bool field_344;
    char pad_345[3];
    uint32_t field_348;
    bool field_352;
    char pad_353[1];
    uint16_t field_354;
    bool field_356;
    char pad_357[3];
    uint32_t field_360;
    uint32_t field_364;
    void Write(Writer* writer, uint8_t mode);
};
void Event_5b6e80::Write(Writer* writer, uint8_t mode) {
    Base<0x5b6e80u>::Write(writer, mode);
    WriteTextC(writer, "protocol", unsigned(field_52) <= 3 ? NameTable<0x5b6e80u>::names[field_52] : "Unknown");
    writer->WriteUnsigned("transmissionId", field_336);
    writer->WriteUnsigned("orderId", field_354);
    writer->WriteUnsigned("confirmedId", field_338);
    if (mode != 2) return;
    writer->WriteUnsigned("confirmedIdBits", field_340);
    writer->WriteBool("immediateAck", field_344);
    writer->WriteUnsigned("allocated", field_348);
    writer->WriteBool("containsAck", field_352);
    writer->WriteBool("orderIdSet", field_356);
    writer->WriteUnsigned("expPaddingSize", field_360);
    writer->WriteUnsigned("expDatagramSize", field_364);
}
struct Event_5c27b0 : Base<0x5c27b0u> {
    char pad_0[336];
    Opaque field_336;
    char pad_337[23];
    Opaque field_360;
    char pad_361[3];
    bool field_364;
    void Write(Writer* writer, uint8_t mode);
};
void Event_5c27b0::Write(Writer* writer, uint8_t mode) {
    WriteNamedPair<0x57e130u>(writer, NamedPair("reason", field_360, field_336), mode);
    writer->WriteBool("sendDrop", field_364);
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
struct Event_5e1590 : Base<0x5e1590u> {
    char pad_0[32];
    StormText field_32;
    void Write(Writer* writer, uint8_t mode);
};
void Event_5e1590::Write(Writer* writer, uint8_t mode) {
    Base<0x5e1590u>::Write(writer, mode);
    WriteTextCopy(writer, "punchGuid", field_32);
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
struct Event_5fc0c0 : Base<0x5fc0c0u> {
    char pad_0[48];
    Opaque field_48;
    char pad_49[247];
    uint32_t field_296;
    char pad_300[4];
    uint64_t field_304;
    Opaque field_312;
    void Write(Writer* writer, uint8_t mode);
};
void Event_5fc0c0::Write(Writer* writer, uint8_t mode) {
    Base<0x5fc0c0u>::Write(writer, mode);
    if (ShouldWrite(writer, &field_48)) MemberWriter<0x5f5fe0u>::Write(&field_48, writer, mode);
    writer->WriteUnsigned("clientHandlerRefId", field_296);
    if (ShouldWrite(writer, &field_304)) WriteReference(writer, "cookie", field_304, ~uint64_t(0));
    if (ShouldWrite(writer, &field_312)) MemberWriter<0x5f5ca0u>::Write(&field_312, writer, mode);
}
struct Event_5fc270 : Base<0x5fc270u> {
    char pad_0[48];
    uint32_t field_48;
    char pad_52[4];
    uint64_t field_56;
    Opaque field_64;
    void Write(Writer* writer, uint8_t mode);
};
void Event_5fc270::Write(Writer* writer, uint8_t mode) {
    Base<0x5fc270u>::Write(writer, mode);
    writer->WriteUnsigned("clientHandlerRefId", field_48);
    if (ShouldWrite(writer, &field_56)) WriteReference(writer, "cookie", field_56, ~uint64_t(0));
    if (ShouldWrite(writer, &field_64)) MemberWriter<0x5f5ca0u>::Write(&field_64, writer, mode);
}
struct Event_5fc400 : Base<0x5fc400u> {
    char pad_0[48];
    Opaque field_48;
    char pad_49[247];
    uint32_t field_296;
    char pad_300[4];
    uint64_t field_304;
    Opaque field_312;
    void Write(Writer* writer, uint8_t mode);
};
void Event_5fc400::Write(Writer* writer, uint8_t mode) {
    Base<0x5fc400u>::Write(writer, mode);
    if (ShouldWrite(writer, &field_48)) MemberWriter<0x5f5fe0u>::Write(&field_48, writer, mode);
    writer->WriteUnsigned("clientHandlerRefId", field_296);
    if (ShouldWrite(writer, &field_304)) WriteReference(writer, "cookie", field_304, ~uint64_t(0));
    if (ShouldWrite(writer, &field_312)) MemberWriter<0x5f5ca0u>::Write(&field_312, writer, mode);
}
struct Event_5fc820 : Base<0x5fc820u> {
    char pad_0[48];
    std::map<ElementKey<0x5fc820u, 176>, Element<0x5fc820u, 1> > field_48;
    void Write(Writer* writer, uint8_t mode);
};
void Event_5fc820::Write(Writer* writer, uint8_t mode) {
    Base<0x5fc820u>::Write(writer, mode);
    if (mode == 2) {
        {
            Size index = 0;
            for (const auto& entry : field_48) {
                Size slot = writer->count;
                if (ShouldWrite(writer, &entry.second)) { writer->pending = NameView("device", 6); MemberWriter<0x5f5ca0u>::Write(&entry.second, writer, mode); }
                NameElement(writer, slot, index);
            }
        }
    }
}
struct Event_5fc990 : Base<0x5fc990u> {
    char pad_0[48];
    uint32_t field_48;
    char pad_52[4];
    uint64_t field_56;
    void Write(Writer* writer);
};
void Event_5fc990::Write(Writer* writer) {
    Base<0x5fc990u>::Write(writer);
    { NamedField f("handlerRefId", field_48); if (ShouldWrite(writer, &f)) NamedWriter<0x57e080u>::Write(&f, writer, 0); }
    if (ShouldWrite(writer, &field_56)) WriteReference(writer, "cookie", field_56, ~uint64_t(0));
}
struct Event_5fcac0 : Base<0x5fcac0u> {
    char pad_0[48];
    uint16_t field_48;
    char pad_50[6];
    Opaque field_56;
    void Write(Writer* writer, uint8_t mode);
};
void Event_5fcac0::Write(Writer* writer, uint8_t mode) {
    Base<0x5fcac0u>::Write(writer, mode);
    writer->WriteUnsigned("externalPort", field_48);
    if (ShouldWrite(writer, &field_56)) MemberWriter<0x5f5ca0u>::Write(&field_56, writer, mode);
}
struct Event_5fcb90 : Base<0x5fcb90u> {
    char pad_0[32];
    std::map<ElementKey<0x5fcb90u, 0>, Element<0x5fcb90u, 1> > field_32;
    void Write(Writer* writer, uint8_t mode);
};
void Event_5fcb90::Write(Writer* writer, uint8_t mode) {
    Base<0x5fcb90u>::Write(writer, mode);
    if (mode == 2) {
        {
            Size index = 0;
            for (const auto& entry : field_32) {
                Size slot = writer->count;
                if (ShouldWrite(writer, &entry.second)) { writer->pending = NameView("addr", 4); MemberWriter<0x57bcb0u>::Write(&entry.second, writer, mode); }
                NameElement(writer, slot, index);
            }
        }
    }
}
struct Event_611330 : Base<0x611330u> {
    char pad_0[32];
    uint32_t field_32;
    uint16_t field_36;
    char pad_38[26];
    uint64_t field_64;
    void Write(Writer* writer, uint8_t mode);
};
void Event_611330::Write(Writer* writer, uint8_t mode) {
    Base<0x611330u>::Write(writer, mode);
    { NamedField f("handlerRefId", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x57e080u>::Write(&f, writer, 0); }
    writer->WriteUnsigned("mpeLocalPort", field_36);
    writer->WriteUnsigned("headerSize", field_64);
}
struct Event_611ee0 : Base<0x611ee0u> {
    char pad_0[32];
    uint32_t field_32;
    char pad_36[4];
    Opaque field_40;
    char pad_41[199];
    uint64_t field_240;
    void Write(Writer* writer, uint8_t mode);
};
void Event_611ee0::Write(Writer* writer, uint8_t mode) {
    Base<0x611ee0u>::Write(writer, mode);
    { NamedField f("handlerRefId", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x57e080u>::Write(&f, writer, 0); }
    if (ShouldWrite(writer, &field_40)) { writer->pending = NameView("src", 3); MemberWriter<0x57bcb0u>::Write(&field_40, writer, mode); }
    writer->WriteUnsigned("dataSize", field_240);
}
struct Event_6125d0 : Base<0x6125d0u> {
    char pad_0[32];
    StormText field_32;
    void Write(Writer* writer, uint8_t mode);
};
void Event_6125d0::Write(Writer* writer, uint8_t mode) {
    Base<0x6125d0u>::Write(writer, mode);
    WriteTextCopy(writer, "configOption", field_32);
}
struct Event_612e80 : Base<0x612e80u> {
    char pad_0[32];
    bool field_32;
    char pad_33[7];
    StormText field_40;
    StormText field_64;
    void Write(Writer* writer, uint8_t mode);
};
void Event_612e80::Write(Writer* writer, uint8_t mode) {
    Base<0x612e80u>::Write(writer, mode);
    writer->WriteBool("enable", field_32);
    WriteTextCopy(writer, "detectServerUrl1", field_40);
    WriteTextCopy(writer, "detectServerUrl2", field_64);
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
struct Event_614a50 : Base<0x614a50u> {
    char pad_0[32];
    StormText field_32;
    uint32_t field_56;
    void Write(Writer* writer, uint8_t mode);
};
void Event_614a50::Write(Writer* writer, uint8_t mode) {
    Base<0x614a50u>::Write(writer, mode);
    WriteTextCopy(writer, "gatewayBehavior", field_32);
    { NamedField f("handlerRefId", field_56); if (ShouldWrite(writer, &f)) NamedWriter<0x57e080u>::Write(&f, writer, 0); }
}
struct Event_615270 : Base<0x615270u> {
    char pad_0[32];
    Opaque field_32;
    char pad_33[71];
    uint32_t field_104;
    void Write(Writer* writer, uint8_t mode);
};
void Event_615270::Write(Writer* writer, uint8_t mode) {
    Base<0x615270u>::Write(writer, mode);
    if (ShouldWrite(writer, &field_32)) MemberWriter<0x5e1100u>::Write(&field_32, writer, 0);
    writer->WriteUnsigned("keepAliveTime", field_104);
}
struct Event_615b10 : Base<0x615b10u> {
    char pad_0[32];
    StormText field_32;
    void Write(Writer* writer, uint8_t mode);
};
void Event_615b10::Write(Writer* writer, uint8_t mode) {
    Base<0x615b10u>::Write(writer, mode);
    WriteTextCopy(writer, "serverUrl", field_32);
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
struct Event_6197c0 : Base<0x6197c0u> {
    char pad_0[32];
    uint32_t field_32;
    uint8_t field_36;
    uint8_t field_37;
    char pad_38[2];
    Opaque field_40;
    char pad_41[15];
    Opaque field_56;
    char pad_57[175];
    uint16_t field_232;
    char pad_234[2];
    uint32_t field_236;
    void Write(Writer* writer, uint8_t mode);
};
void Event_6197c0::Write(Writer* writer, uint8_t mode) {
    Base<0x6197c0u>::Write(writer, mode);
    writer->WriteUnsigned("loginTimeout", field_32);
    writer->WriteUnsigned("loginRetryCount", field_36);
    writer->WriteUnsigned("challengeResponseRetryCount", field_37);
    if (ShouldWrite(writer, &field_40)) MemberWriter<0x631d00u>::Write(&field_40, writer, mode);
    if (ShouldWrite(writer, &field_56)) { writer->pending = NameView("traversalServerAddr", 19); MemberWriter<0x57bcb0u>::Write(&field_56, writer, mode); }
    writer->WriteUnsigned("traversalLocalPort", field_232);
    writer->WriteUnsigned("connectionKeepAliveTimespan", field_236);
}
struct Event_61b1d0 : Base<0x61b1d0u> {
    char pad_0[32];
    Opaque field_32;
    char pad_33[15];
    uint32_t field_48;
    char pad_52[4];
    Opaque field_56;
    void Write(Writer* writer, uint8_t mode);
};
void Event_61b1d0::Write(Writer* writer, uint8_t mode) {
    Base<0x61b1d0u>::Write(writer, mode);
    if (ShouldWrite(writer, &field_32)) MemberWriter<0x631d00u>::Write(&field_32, writer, mode);
    writer->WriteUnsigned("signature", field_48);
    if (ShouldWrite(writer, &field_56)) MemberWriter<0x57bcb0u>::Write(&field_56, writer, mode);
}
struct Event_61d380 : Base<0x61d380u> {
    char pad_0[32];
    Opaque field_32;
    char pad_33[15];
    Object* field_48;
    uint32_t field_56;
    char pad_60[4];
    uint64_t field_64;
    uint32_t field_72;
    uint32_t field_76;
    uint32_t field_80;
    uint32_t field_84;
    bool field_88;
    void Write(Writer* writer, uint8_t mode);
};
void Event_61d380::Write(Writer* writer, uint8_t mode) {
    Base<0x61d380u>::Write(writer, mode);
    if (ShouldWrite(writer, &field_32)) MemberWriter<0x631d00u>::Write(&field_32, writer, mode);
    if (field_48) { NestedWriter<0x5e1100u>::Write(field_48, writer, mode); }
    { NamedField f("handlerRefId", field_56); if (ShouldWrite(writer, &f)) NamedWriter<0x57e080u>::Write(&f, writer, 0); }
    if (ShouldWrite(writer, &field_64)) WriteReference(writer, "cookie", field_64, ~uint64_t(0));
    writer->WriteUnsigned("pktTimeout", field_72);
    writer->WriteUnsigned("maximumProbe", field_76);
    writer->WriteUnsigned("globalTimeout", field_80);
    writer->WriteUnsigned("keepAliveTimeout", field_84);
    writer->WriteBool("relayReqNeeded", field_88);
}
struct Event_61eab0 : Base<0x61eab0u> {
    char pad_0[32];
    Opaque field_32;
    char pad_33[175];
    uint64_t field_208;
    void Write(Writer* writer, uint8_t mode);
};
void Event_61eab0::Write(Writer* writer, uint8_t mode) {
    Base<0x61eab0u>::Write(writer, mode);
    if (ShouldWrite(writer, &field_32)) MemberWriter<0x57bcb0u>::Write(&field_32, writer, mode);
    writer->WriteUnsigned("probeStartTime", field_208);
}
struct Event_61ee70 : Base<0x61ee70u> {
    char pad_0[32];
    Opaque field_32;
    char pad_33[175];
    uint64_t field_208;
    void Write(Writer* writer, uint8_t mode);
};
void Event_61ee70::Write(Writer* writer, uint8_t mode) {
    Base<0x61ee70u>::Write(writer, mode);
    if (ShouldWrite(writer, &field_32)) MemberWriter<0x57bcb0u>::Write(&field_32, writer, mode);
    writer->WriteUnsigned("probeStartTime", field_208);
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
