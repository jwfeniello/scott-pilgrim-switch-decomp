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
    { NamedField f("peerId", field_36); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer); }
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
struct Event_29b440 : Base<0x29b440u> {
    char pad_0[32];
    uint32_t field_32;
    uint32_t field_36;
    void Write(Writer* writer);
};
void Event_29b440::Write(Writer* writer) {
    Base<0x29b440u>::Write(writer);
    writer->WriteUnsigned("objectRefId", field_32);
    { NamedField f("peerId", field_36); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer); }
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
    { NamedField f("handlerRefId", field_36); if (ShouldWrite(writer, &f)) NamedWriter<0x57e080u>::Write(&f, writer); }
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
struct Event_2f09e0 : Base<0x2f09e0u> {
    char pad_0[56];
    Guid field_56;
    void Write(Writer* writer);
};
void Event_2f09e0::Write(Writer* writer) {
    Base<0x2f09e0u>::Write(writer);
    { NamedGuidField f("peerGuid", field_56); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
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
    { NamedField f("peerId", field_56); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer); }
    writer->WriteUnsigned("sequence", field_60);
}
struct Event_376010 : Base<0x376010u> {
    char pad_0[32];
    uint32_t field_32;
    char pad_36[4];
    uint64_t field_40;
    uint64_t field_48;
    uint32_t field_56;
    void Write(Writer* writer);
};
void Event_376010::Write(Writer* writer) {
    Base<0x376010u>::Write(writer);
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer); }
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
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer); }
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
    { NamedField f("srefid", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer); }
    writer->WriteBool("pause", field_36);
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
struct Event_3d7380 : Base<0x3d7380u> {
    char pad_0[39];
    Guid field_39;
    void Write(Writer* writer);
};
void Event_3d7380::Write(Writer* writer) {
    Base<0x3d7380u>::Write(writer);
    { NamedGuidField f("peerGuid", field_39); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
}
struct Event_3d7f30 : Base<0x3d7f30u> {
    char pad_0[39];
    Guid field_39;
    void Write(Writer* writer);
};
void Event_3d7f30::Write(Writer* writer) {
    Base<0x3d7f30u>::Write(writer);
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
    void Write(Writer* writer);
};
void Event_3d8b00::Write(Writer* writer) {
    Base<0x3d8b00u>::Write(writer);
    if (ShouldWrite(writer, &field_32)) WriteReference(writer, "cid", field_32, uint16_t(0xffff));
    { NamedGuidField f("peerGuid", field_34); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
    { NamedField f("srefid", field_56); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8790u>::Write(&f, writer); }
    writer->WriteUnsigned("requestId", field_72);
    writer->WriteUnsigned("localGroupTime", field_80);
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
    void Write(Writer* writer);
};
void Event_3e4ae0::Write(Writer* writer) {
    Base<0x3e4ae0u>::Write(writer);
    { NamedGuidField f("peerGuid", field_39); if (ShouldWrite(writer, &f)) WriteNamedGuid(writer, f); }
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
    { NamedField f("peerId", field_36); if (ShouldWrite(writer, &f)) NamedWriter<0x2b8840u>::Write(&f, writer); }
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
struct Event_576eb0 : Base<0x576eb0u> {
    Guid field_0;
    void Write(Writer* writer);
};
void Event_576eb0::Write(Writer* writer) {
    WriteGuid(writer, "guid", field_0);
}
struct Event_585bc0 : Base<0x585bc0u> {
    uint32_t field_0;
    void Write(Writer* writer);
};
void Event_585bc0::Write(Writer* writer) {
    WriteReference(writer, "peerRefId", field_0, 0xffffffffu);
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
struct Event_611330 : Base<0x611330u> {
    char pad_0[32];
    uint32_t field_32;
    uint16_t field_36;
    char pad_38[26];
    uint64_t field_64;
    void Write(Writer* writer);
};
void Event_611330::Write(Writer* writer) {
    Base<0x611330u>::Write(writer);
    { NamedField f("handlerRefId", field_32); if (ShouldWrite(writer, &f)) NamedWriter<0x57e080u>::Write(&f, writer); }
    writer->WriteUnsigned("mpeLocalPort", field_36);
    writer->WriteUnsigned("headerSize", field_64);
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
