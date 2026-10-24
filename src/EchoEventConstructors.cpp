// Working names and ABI views; member names and parameter types are provisional.
// storm::echo event constructors (SDK, strict aliasing, libc++ 8 shared_ptr). Class names come from the
// original vtables; the base part sets the handler reference to -1 and takes the default cookie.
#include <stdint.h>
#include <memory>
namespace storm { namespace echo {
// Cookie given to new events (a module-local global); it is a default argument of the base constructor.
extern __attribute__((visibility("hidden"))) uint64_t DefaultCookie;
struct Event {
    virtual ~Event();
    uint32_t handlerRefId; uint64_t cookie; uint64_t reserved;
    explicit Event(uint64_t c = DefaultCookie) : handlerRefId(0xffffffffu), cookie(c), reserved(0) {}
};
struct Object;
// A reference parameter read as consecutive 32-bit words.
template<unsigned N> struct Words { uint32_t words[N]; };
// Object events: two 32-bit identifiers and the object, which the constructor takes by value.
struct ObjectEvent : Event {
    uint32_t first; uint32_t second; std::shared_ptr<Object> object;
    ObjectEvent(uint32_t a, uint32_t b, std::shared_ptr<Object> o) : first(a), second(b), object(std::move(o)) {}
};
}}
namespace storm { namespace echo { namespace lan { namespace outEvent {
struct MatchmakingPortBindingResult : Event {
    uint16_t field_32;
    uint16_t field_34;
    bool field_36;
    MatchmakingPortBindingResult(uint16_t p0, uint16_t p1, bool p2);
    ~MatchmakingPortBindingResult();
};
MatchmakingPortBindingResult::MatchmakingPortBindingResult(uint16_t p0, uint16_t p1, bool p2) : field_32(p0), field_34(p1), field_36(p2) {}
}}}}
namespace storm { namespace echo { namespace lan { namespace outEvent {
struct DiscoveryPortBindingResult : Event {
    uint16_t field_32;
    uint16_t field_34;
    bool field_36;
    DiscoveryPortBindingResult(uint16_t p0, uint16_t p1, bool p2);
    ~DiscoveryPortBindingResult();
};
DiscoveryPortBindingResult::DiscoveryPortBindingResult(uint16_t p0, uint16_t p1, bool p2) : field_32(p0), field_34(p1), field_36(p2) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct MasterResolved : ObjectEvent {
    uint32_t field_56;
    MasterResolved(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, uint32_t p3);
    ~MasterResolved();
};
MasterResolved::MasterResolved(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, uint32_t p3) : ObjectEvent(p0, p1, std::move(p2)), field_56(p3) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct ReplicaResolved : ObjectEvent {
    uint32_t field_56;
    ReplicaResolved(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, uint32_t p3);
    ~ReplicaResolved();
};
ReplicaResolved::ReplicaResolved(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, uint32_t p3) : ObjectEvent(p0, p1, std::move(p2)), field_56(p3) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct LoopbackResolved : ObjectEvent {

    LoopbackResolved(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2);
    ~LoopbackResolved();
};
LoopbackResolved::LoopbackResolved(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2) : ObjectEvent(p0, p1, std::move(p2)) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct ResolvedReplicaReady : ObjectEvent {
    uint32_t field_56;
    ResolvedReplicaReady(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, uint32_t p3);
    ~ResolvedReplicaReady();
};
ResolvedReplicaReady::ResolvedReplicaReady(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, uint32_t p3) : ObjectEvent(p0, p1, std::move(p2)), field_56(p3) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct RejectedReplica : ObjectEvent {
    uint32_t field_56;
    RejectedReplica(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, uint32_t p3);
    ~RejectedReplica();
};
RejectedReplica::RejectedReplica(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, uint32_t p3) : ObjectEvent(p0, p1, std::move(p2)), field_56(p3) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct ResolvedLoopbackReady : ObjectEvent {

    ResolvedLoopbackReady(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2);
    ~ResolvedLoopbackReady();
};
ResolvedLoopbackReady::ResolvedLoopbackReady(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2) : ObjectEvent(p0, p1, std::move(p2)) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct MasterGone : ObjectEvent {
    uint32_t field_56;
    MasterGone(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, uint32_t p3);
    ~MasterGone();
};
MasterGone::MasterGone(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, uint32_t p3) : ObjectEvent(p0, p1, std::move(p2)), field_56(p3) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct ReplicaGone : ObjectEvent {
    uint32_t field_56;
    ReplicaGone(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, uint32_t p3);
    ~ReplicaGone();
};
ReplicaGone::ReplicaGone(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, uint32_t p3) : ObjectEvent(p0, p1, std::move(p2)), field_56(p3) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct LoopbackGone : ObjectEvent {

    LoopbackGone(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2);
    ~LoopbackGone();
};
LoopbackGone::LoopbackGone(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2) : ObjectEvent(p0, p1, std::move(p2)) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct FinalMasterUpdate : ObjectEvent {
    bool field_56;
    FinalMasterUpdate(bool p0, uint32_t p1, uint32_t p2, std::shared_ptr<Object> p3);
    ~FinalMasterUpdate();
};
FinalMasterUpdate::FinalMasterUpdate(bool p0, uint32_t p1, uint32_t p2, std::shared_ptr<Object> p3) : ObjectEvent(p1, p2, std::move(p3)), field_56(p0) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct MasterRoleMigrated : ObjectEvent {
    uint32_t field_56;
    uint32_t field_60;
    MasterRoleMigrated(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, std::shared_ptr<Object> p4);
    ~MasterRoleMigrated();
};
MasterRoleMigrated::MasterRoleMigrated(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, std::shared_ptr<Object> p4) : ObjectEvent(p2, p3, std::move(p4)), field_56(p0), field_60(p1) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct MasterRoleLost : ObjectEvent {
    uint32_t field_56;
    MasterRoleLost(uint32_t p0, uint32_t p1, uint32_t p2, std::shared_ptr<Object> p3);
    ~MasterRoleLost();
};
MasterRoleLost::MasterRoleLost(uint32_t p0, uint32_t p1, uint32_t p2, std::shared_ptr<Object> p3) : ObjectEvent(p1, p2, std::move(p3)), field_56(p0) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct GiveMasterRoleFail : ObjectEvent {
    uint32_t field_56;
    uint32_t field_60;
    uint32_t field_64;
    GiveMasterRoleFail(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, uint32_t p3, const Words<2>& p4);
    ~GiveMasterRoleFail();
};
GiveMasterRoleFail::GiveMasterRoleFail(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, uint32_t p3, const Words<2>& p4) : ObjectEvent(p0, p1, std::move(p2)), field_56(p3), field_60(p4.words[0]), field_64(p4.words[1]) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct ReplaceGoneMaster : ObjectEvent {

    ReplaceGoneMaster(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2);
    ~ReplaceGoneMaster();
};
ReplaceGoneMaster::ReplaceGoneMaster(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2) : ObjectEvent(p0, p1, std::move(p2)) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct AcquireMasterRoleFail : ObjectEvent {
    uint32_t field_56;
    uint32_t field_60;
    AcquireMasterRoleFail(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, const Words<2>& p3);
    ~AcquireMasterRoleFail();
};
AcquireMasterRoleFail::AcquireMasterRoleFail(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, const Words<2>& p3) : ObjectEvent(p0, p1, std::move(p2)), field_56(p3.words[0]), field_60(p3.words[1]) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct SessionMigrationStart : ObjectEvent {

    SessionMigrationStart(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2);
    ~SessionMigrationStart();
};
SessionMigrationStart::SessionMigrationStart(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2) : ObjectEvent(p0, p1, std::move(p2)) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct SessionMigrationEnd : ObjectEvent {

    SessionMigrationEnd(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2);
    ~SessionMigrationEnd();
};
SessionMigrationEnd::SessionMigrationEnd(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2) : ObjectEvent(p0, p1, std::move(p2)) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct MementoTransmissionThresholdRaise : ObjectEvent {
    uint32_t field_56;
    uint32_t field_60;
    MementoTransmissionThresholdRaise(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, const Words<1>& p3, uint32_t p4);
    ~MementoTransmissionThresholdRaise();
};
MementoTransmissionThresholdRaise::MementoTransmissionThresholdRaise(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, const Words<1>& p3, uint32_t p4) : ObjectEvent(p0, p1, std::move(p2)), field_56(p4), field_60(p3.words[0]) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct MementoTransmissionThresholdClear : ObjectEvent {
    uint32_t field_56;
    uint32_t field_60;
    MementoTransmissionThresholdClear(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, const Words<1>& p3, uint32_t p4);
    ~MementoTransmissionThresholdClear();
};
MementoTransmissionThresholdClear::MementoTransmissionThresholdClear(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, const Words<1>& p3, uint32_t p4) : ObjectEvent(p0, p1, std::move(p2)), field_56(p4), field_60(p3.words[0]) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct MessageTransmissionThresholdRaise : ObjectEvent {
    uint32_t field_56;
    MessageTransmissionThresholdRaise(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, uint32_t p3);
    ~MessageTransmissionThresholdRaise();
};
MessageTransmissionThresholdRaise::MessageTransmissionThresholdRaise(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, uint32_t p3) : ObjectEvent(p0, p1, std::move(p2)), field_56(p3) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct MessageTransmissionThresholdClear : ObjectEvent {
    uint32_t field_56;
    MessageTransmissionThresholdClear(uint32_t p0, uint32_t p1, const std::shared_ptr<Object>& p2, uint32_t p3);
    ~MessageTransmissionThresholdClear();
};
MessageTransmissionThresholdClear::MessageTransmissionThresholdClear(uint32_t p0, uint32_t p1, const std::shared_ptr<Object>& p2, uint32_t p3) : ObjectEvent(p0, p1, p2), field_56(p3) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct AddReplicaFail : ObjectEvent {
    uint32_t field_56;
    AddReplicaFail(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, uint32_t p3);
    ~AddReplicaFail();
};
AddReplicaFail::AddReplicaFail(uint32_t p0, uint32_t p1, std::shared_ptr<Object> p2, uint32_t p3) : ObjectEvent(p0, p1, std::move(p2)), field_56(p3) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct ReadyFail : ObjectEvent {
    uint32_t field_56;
    ReadyFail(const Words<1>& p0, uint32_t p1, uint32_t p2, const std::shared_ptr<Object>& p3);
    ~ReadyFail();
};
ReadyFail::ReadyFail(const Words<1>& p0, uint32_t p1, uint32_t p2, const std::shared_ptr<Object>& p3) : ObjectEvent(p1, p2, p3), field_56(p0.words[0]) {}
}}}}
namespace storm { namespace echo { namespace object { namespace outEvent {
struct OversizeMessage : ObjectEvent {
    uint32_t field_56;
    uint32_t field_60;
    OversizeMessage(const Words<1>& p0, uint32_t p1, uint32_t p2, uint32_t p3, const std::shared_ptr<Object>& p4);
    ~OversizeMessage();
};
OversizeMessage::OversizeMessage(const Words<1>& p0, uint32_t p1, uint32_t p2, uint32_t p3, const std::shared_ptr<Object>& p4) : ObjectEvent(p2, p3, p4), field_56(p0.words[0]), field_60(p1) {}
}}}}
