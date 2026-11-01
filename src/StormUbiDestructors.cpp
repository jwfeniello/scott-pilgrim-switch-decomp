// Destructors of classes in the storm and ubiservices libraries, built from what they hold: libc++
// strings, vectors and unique pointers, pointers other threads can swap, members with their own
// destructors, and bases. These libraries are built without exceptions and with unwind tables.
//
// Generated from the decompiler's reading of each destructor and tested against the bytes. Classes
// carry their RTTI names where those are plain. Offsets come from the code. The base classes and the
// members with their own destructors are stand-ins named after an address or a key.
#include <stdint.h>
#include <stddef.h>
// The storm library frees through a call that takes a file and a line, both empty here.
void StormFree(void* memory, const char* file, int line);
void UbiFree(void* memory);
struct StormAlloc { static __attribute__((always_inline)) void Free(void* memory) { StormFree(memory, "", 0); } };
struct UbiAlloc { static __attribute__((always_inline)) void Free(void* memory) { UbiFree(memory); } };
// A libc++ string: the first bit says whether it is long.
template<class Alloc> struct LcString {
    size_t capacity;
    size_t size;
    char* data;
    __attribute__((always_inline)) ~LcString() { if (*reinterpret_cast<unsigned char*>(this) & 1) Alloc::Free(data); }
};
// A libc++ vector of plain values.
template<class Alloc> struct LcVector {
    void* begin;
    void* end;
    void* capacity;
    __attribute__((always_inline)) ~LcVector() {
        if (begin) {
            end = begin;
            Alloc::Free(begin);
        }
    }
};
// A libc++ vector of values with destructors, destroyed from the back.
template<unsigned long Key, unsigned Size, bool Virtual> struct LcVectorElement { ~LcVectorElement() noexcept; char data[Size]; };
template<unsigned long Key, unsigned Size> struct LcVectorElement<Key, Size, true> { virtual ~LcVectorElement() noexcept; char data[Size - 8]; };
template<unsigned long Key, unsigned Size, bool Virtual, class Alloc> struct LcVectorOf {
    typedef LcVectorElement<Key, Size, Virtual> Element;
    Element* begin;
    Element* end;
    Element* capacity;
    __attribute__((always_inline)) ~LcVectorOf() {
        if (begin) {
            Element* p = end;
            while (p != begin) (--p)->~Element();
            end = begin;
            Alloc::Free(begin);
        }
    }
};
// Virtual functions before the one that matters.
template<unsigned Count> struct VirtualSlots : VirtualSlots<Count - 1> { virtual void Slot(VirtualSlots*); };
template<> struct VirtualSlots<0> {};
// A libc++ unique pointer: taken out first, then deleted through its deleting destructor.
template<unsigned Slot> struct LcUniquePtr {
    struct Object : VirtualSlots<Slot - 1> { virtual ~Object() noexcept; };
    Object* value;
    __attribute__((always_inline)) ~LcUniquePtr() {
        Object* object = value;
        value = nullptr;
        if (object) delete object;
    }
};
// A pointer other threads can swap: taken out atomically, then a count at +8.
template<unsigned Slot> struct LcSwappedRef {
    struct Object : VirtualSlots<Slot> { virtual void Release(); unsigned count; };
    Object* value;
    __attribute__((always_inline)) ~LcSwappedRef() {
        Object* object = __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
        if (object && __atomic_sub_fetch(&object->count, 1, __ATOMIC_ACQ_REL) == 0) object->Release();
    }
};
template<unsigned long Key> struct LcMember { ~LcMember() noexcept; };
// A libc++ map: the tree destroys itself from its root.
template<unsigned long Key> struct LcTree {
    void* begin;
    void* root;
    size_t size;
    static void Destroy(LcTree*, void*);
    __attribute__((always_inline)) ~LcTree() { Destroy(this, root); }
};
namespace ubiservices { 
struct WebSocketStream { char padding_8[8]; LcSwappedRef<2> member_10; LcSwappedRef<2> member_18; virtual void Key(); virtual ~WebSocketStream(); };
WebSocketStream::~WebSocketStream() {}
}
namespace ubiservices { 
struct EventConfigInfo { char padding_8[24]; LcTree<22878721> member_20; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~EventConfigInfo(); };
EventConfigInfo::~EventConfigInfo() {}
}
namespace ubiservices { 
struct HttpResponse { char padding_8[8]; LcTree<16578563> member_10; LcSwappedRef<2> member_28; char padding_30[8]; LcSwappedRef<2> member_38; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~HttpResponse(); };
HttpResponse::~HttpResponse() {}
}
namespace ubiservices { 
struct NotificationUbiServices { char padding_8[8]; LcSwappedRef<2> member_10; LcSwappedRef<2> member_18; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~NotificationUbiServices(); };
NotificationUbiServices::~NotificationUbiServices() {}
}
namespace ubiservices { 
struct ClubNotification { char padding_8[8]; LcSwappedRef<2> member_10; LcSwappedRef<2> member_18; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~ClubNotification(); };
ClubNotification::~ClubNotification() {}
}
namespace ubiservices { 
struct FriendNotification { char padding_8[8]; LcSwappedRef<2> member_10; LcSwappedRef<2> member_18; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~FriendNotification(); };
FriendNotification::~FriendNotification() {}
}
struct Nested22050563 { char padding_8[8]; LcTree<22050566> member_10; LcSwappedRef<2> member_28; char padding_30[8]; LcSwappedRef<2> member_38; virtual void Key(); virtual ~Nested22050563() {} };
namespace ubiservices { 
struct WebSocketConnection { char padding_8[24]; LcSwappedRef<2> member_20; LcSwappedRef<2> member_28; Nested22050563 member_30; LcSwappedRef<2> member_70; LcSwappedRef<2> member_78; virtual void Key(); virtual ~WebSocketConnection(); };
WebSocketConnection::~WebSocketConnection() {}
}
struct Nested22366723 { LcSwappedRef<2> member_8; virtual void Key(); virtual ~Nested22366723() {} };
struct Base1554a0 { virtual ~Base1554a0(); char padding[288]; };
namespace ubiservices { 
struct JobExtendedStorageUpload : Base1554a0 { LcMember<22366725> member_128; char padding_129[15]; Nested22366723 member_138; char padding_148[8]; LcUniquePtr<1> member_150; LcVector<UbiAlloc> member_158; virtual void Key(); virtual ~JobExtendedStorageUpload(); };
JobExtendedStorageUpload::~JobExtendedStorageUpload() {}
}
namespace ubiservices { 
struct EventInfoPlayerPlayTime { char padding_8[8]; LcSwappedRef<2> member_10; char padding_18[16]; LcVector<UbiAlloc> member_28; char padding_40[8]; LcSwappedRef<2> member_48; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~EventInfoPlayerPlayTime(); };
EventInfoPlayerPlayTime::~EventInfoPlayerPlayTime() {}
}
namespace ubiservices { 
struct EventInfoCustom { char padding_8[8]; LcSwappedRef<2> member_10; char padding_18[16]; LcVector<UbiAlloc> member_28; char padding_40[8]; LcSwappedRef<2> member_48; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~EventInfoCustom(); };
EventInfoCustom::~EventInfoCustom() {}
}
namespace ubiservices { 
struct EventInfoPlayerAchievement { char padding_8[8]; LcSwappedRef<2> member_10; char padding_18[16]; LcVector<UbiAlloc> member_28; char padding_40[8]; LcSwappedRef<2> member_48; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~EventInfoPlayerAchievement(); };
EventInfoPlayerAchievement::~EventInfoPlayerAchievement() {}
}
struct Nested22487809 { LcSwappedRef<2> member_8; virtual void Key(); virtual ~Nested22487809() {} };
struct Base157230 { virtual ~Base157230(); char padding[144]; };
namespace ubiservices { 
struct HttpStreamPut : Base157230 { Nested22487809 member_98; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~HttpStreamPut(); };
HttpStreamPut::~HttpStreamPut() {}
}
struct Base157360 { virtual ~Base157360(); char padding[280]; };
namespace ubiservices { 
struct JobRequestLeaderboard : Base157360 { LcSwappedRef<2> member_120; char padding_128[16]; LcVector<UbiAlloc> member_138; char padding_150[8]; LcSwappedRef<2> member_158; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~JobRequestLeaderboard(); };
JobRequestLeaderboard::~JobRequestLeaderboard() {}
}
struct Base157970 { virtual ~Base157970(); char padding[280]; };
namespace ubiservices { 
struct JobRequestLeaderboardCentered : Base157970 { LcSwappedRef<2> member_120; char padding_128[16]; LcSwappedRef<2> member_138; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~JobRequestLeaderboardCentered(); };
JobRequestLeaderboardCentered::~JobRequestLeaderboardCentered() {}
}
struct NestedBase22531585 { virtual ~NestedBase22531585(); char padding[8]; };
struct Nested22531585 : NestedBase22531585 { LcSwappedRef<2> member_10; virtual void Key(); virtual ~Nested22531585() {} };
struct Base157ce0 { virtual ~Base157ce0(); char padding[328]; };
namespace ubiservices { 
struct JobRetryWebSocketInit : Base157ce0 { Nested22531585 member_150; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~JobRetryWebSocketInit(); };
JobRetryWebSocketInit::~JobRetryWebSocketInit() {}
}
struct Base15a130 { virtual ~Base15a130(); char padding[288]; };
namespace ubiservices { 
struct JobRequestOwnUserLocalization : Base15a130 { LcSwappedRef<2> member_128; LcSwappedRef<2> member_130; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~JobRequestOwnUserLocalization(); };
JobRequestOwnUserLocalization::~JobRequestOwnUserLocalization() {}
}
namespace ubiservices { namespace String { 
struct InternalContent { char padding_8[8]; LcString<UbiAlloc> member_10; virtual void Key(); virtual ~InternalContent(); };
InternalContent::~InternalContent() {}
}}
struct Base15b620 { virtual ~Base15b620(); char padding[144]; };
namespace ubiservices { 
struct WebSocketHandshakeRequest : Base15b620 { LcSwappedRef<2> member_98; char padding_a0[8]; LcSwappedRef<2> member_a8; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~WebSocketHandshakeRequest(); };
WebSocketHandshakeRequest::~WebSocketHandshakeRequest() {}
}
struct Base15d750 { virtual ~Base15d750(); char padding[280]; };
namespace ubiservices { 
struct JobQueueUnsentEvents : Base15d750 { LcSwappedRef<2> member_120; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~JobQueueUnsentEvents(); };
JobQueueUnsentEvents::~JobQueueUnsentEvents() {}
}
struct Base15efc0 { virtual ~Base15efc0(); char padding[320]; };
namespace ubiservices { 
struct JobManageConnection : Base15efc0 { LcSwappedRef<2> member_148; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~JobManageConnection(); };
JobManageConnection::~JobManageConnection() {}
}
namespace ubiservices { 
struct PopulationCache { char padding_8[8]; LcTree<23618049> member_10; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~PopulationCache(); };
PopulationCache::~PopulationCache() {}
}

struct Class16c400 { char padding_8[8]; LcTree<23871489> member_10; virtual void Key(); virtual ~Class16c400(); };
Class16c400::~Class16c400() {}


struct Class16c420 { char padding_8[8]; LcTree<23872001> member_10; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~Class16c420(); };
Class16c420::~Class16c420() {}


struct Class181ae0 { char padding_8[8]; LcTree<25275905> member_10; virtual void Key(); virtual ~Class181ae0(); };
Class181ae0::~Class181ae0() {}


struct Class181b00 { char padding_8[8]; LcTree<25276417> member_10; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~Class181b00(); };
Class181b00::~Class181b00() {}

struct Nested25289985 { char padding_8[8]; LcSwappedRef<2> member_10; virtual void Key(); virtual ~Nested25289985() {} };

struct Class181e50 { char padding_8[8]; Nested25289985 member_10; virtual void Key(); virtual ~Class181e50(); };
Class181e50::~Class181e50() {}

struct Nested25291521 { char padding_8[8]; LcSwappedRef<2> member_10; virtual void Key(); virtual ~Nested25291521() {} };

struct Class181eb0 { char padding_8[8]; Nested25291521 member_10; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~Class181eb0(); };
Class181eb0::~Class181eb0() {}


struct Class192d20 { char padding_8[8]; LcTree<26399233> member_10; virtual void Key(); virtual ~Class192d20(); };
Class192d20::~Class192d20() {}


struct Class192d40 { char padding_8[8]; LcTree<26399745> member_10; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~Class192d40(); };
Class192d40::~Class192d40() {}


struct Class194330 { char padding_8[8]; LcTree<26489601> member_10; virtual void Key(); virtual ~Class194330(); };
Class194330::~Class194330() {}


struct Class194350 { char padding_8[8]; LcTree<26490113> member_10; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~Class194350(); };
Class194350::~Class194350() {}


struct Class197e00 { char padding_8[16]; LcSwappedRef<2> member_18; LcSwappedRef<2> member_20; virtual void Key(); virtual ~Class197e00(); };
Class197e00::~Class197e00() {}


struct Class197eb0 { char padding_8[16]; LcSwappedRef<2> member_18; LcSwappedRef<2> member_20; static void operator delete(void* p) { UbiAlloc::Free(p); } virtual void Key(); virtual ~Class197eb0(); };
Class197eb0::~Class197eb0() {}

struct Nested43143425 { char padding_8[24]; LcVector<StormAlloc> member_20; virtual void Key(); virtual ~Nested43143425() {} };
namespace storm { 
struct NetPropertyDeserializationOp { char padding_8[16]; Nested43143425 member_18; virtual void Key(); virtual ~NetPropertyDeserializationOp(); };
NetPropertyDeserializationOp::~NetPropertyDeserializationOp() {}
}
namespace storm { namespace echo { namespace voicechat { 
struct SessionChatterGoneMessage { LcMember<41634049> member_8; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~SessionChatterGoneMessage(); };
SessionChatterGoneMessage::~SessionChatterGoneMessage() {}
}}}
namespace storm { namespace echo { namespace voicechat { 
struct SessionChatterDiscoveredMessage { LcMember<41651969> member_8; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~SessionChatterDiscoveredMessage(); };
SessionChatterDiscoveredMessage::~SessionChatterDiscoveredMessage() {}
}}}
namespace storm { namespace echo { namespace lan { namespace outEvent { 
struct DiscoveredSession { char padding_8[32]; LcUniquePtr<1> member_28; LcUniquePtr<1> member_30; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~DiscoveredSession(); };
DiscoveredSession::~DiscoveredSession() {}
}}}}
namespace storm { namespace echo { namespace lan { namespace outEvent { 
struct DiscoveredGroup { char padding_8[32]; LcUniquePtr<1> member_28; LcUniquePtr<1> member_30; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~DiscoveredGroup(); };
DiscoveredGroup::~DiscoveredGroup() {}
}}}}
namespace storm { namespace echo { namespace peer { namespace outEvent { 
struct RttEvent { char padding_8[24]; LcUniquePtr<1> member_20; LcUniquePtr<1> member_28; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~RttEvent(); };
RttEvent::~RttEvent() {}
}}}}
namespace storm { namespace echo { namespace session { namespace resultEvent { 
struct Create { char padding_8[64]; LcUniquePtr<1> member_48; LcUniquePtr<1> member_50; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~Create(); };
Create::~Create() {}
}}}}
namespace storm { namespace echo { namespace session { namespace outEvent { 
struct HostMigrationStart { char padding_8[48]; LcString<StormAlloc> member_38; char padding_50[8]; LcVector<StormAlloc> member_58; LcVector<StormAlloc> member_70; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~HostMigrationStart(); };
HostMigrationStart::~HostMigrationStart() {}
}}}}
namespace storm { namespace echo { namespace session { namespace resultEvent { 
struct Join { char padding_8[64]; LcUniquePtr<1> member_48; LcUniquePtr<1> member_50; LcUniquePtr<1> member_58; char padding_60[88]; LcUniquePtr<1> member_b8; char padding_c0[40]; LcString<StormAlloc> member_e8; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~Join(); };
Join::~Join() {}
}}}}
namespace storm { namespace echo { namespace session { namespace resultEvent { 
struct AddPlayer { char padding_8[48]; LcString<StormAlloc> member_38; char padding_50[8]; LcUniquePtr<1> member_58; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~AddPlayer(); };
AddPlayer::~AddPlayer() {}
}}}}
namespace storm { namespace echo { namespace session { namespace outEvent { 
struct SessionCreated { char padding_8[48]; LcUniquePtr<1> member_38; LcUniquePtr<1> member_40; LcUniquePtr<1> member_48; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~SessionCreated(); };
SessionCreated::~SessionCreated() {}
}}}}
namespace storm { namespace echo { namespace session { namespace outEvent { 
struct SessionJoined { char padding_8[48]; LcUniquePtr<1> member_38; LcUniquePtr<1> member_40; LcUniquePtr<1> member_48; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~SessionJoined(); };
SessionJoined::~SessionJoined() {}
}}}}
namespace storm { namespace echo { namespace session { namespace outEvent { 
struct PeerDiscovered { char padding_8[56]; LcUniquePtr<1> member_40; char padding_48[80]; LcMember<48934913> member_98; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~PeerDiscovered(); };
PeerDiscovered::~PeerDiscovered() {}
}}}}
namespace storm { namespace echo { namespace session { namespace outEvent { 
struct PeerConnected { char padding_8[56]; LcUniquePtr<1> member_40; char padding_48[88]; LcMember<48955649> member_a0; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~PeerConnected(); };
PeerConnected::~PeerConnected() {}
}}}}
namespace storm { namespace echo { namespace session { namespace outEvent { 
struct PeerGone { char padding_8[56]; LcUniquePtr<1> member_40; char padding_48[8]; LcString<StormAlloc> member_50; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~PeerGone(); };
PeerGone::~PeerGone() {}
}}}}
namespace storm { namespace echo { namespace session { namespace outEvent { 
struct HostElected { char padding_8[56]; LcUniquePtr<1> member_40; LcUniquePtr<1> member_48; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~HostElected(); };
HostElected::~HostElected() {}
}}}}
namespace storm { namespace echo { namespace voicechat { 
struct ChatterRegisterProtocolMainInitParams { LcVector<StormAlloc> member_8; virtual void Key(); virtual ~ChatterRegisterProtocolMainInitParams(); };
ChatterRegisterProtocolMainInitParams::~ChatterRegisterProtocolMainInitParams() {}
}}}
namespace storm { namespace echo { namespace session { namespace internal { namespace outEvent { 
struct HostMigrationStart { char padding_8[48]; LcString<StormAlloc> member_38; char padding_50[8]; LcVector<StormAlloc> member_58; LcVector<StormAlloc> member_70; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~HostMigrationStart(); };
HostMigrationStart::~HostMigrationStart() {}
}}}}}
namespace storm { namespace echo { 
struct ProductEchoImplMainInitEvent { char padding_8[72]; LcVector<StormAlloc> member_50; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~ProductEchoImplMainInitEvent(); };
ProductEchoImplMainInitEvent::~ProductEchoImplMainInitEvent() {}
}}
namespace storm { namespace echo { 
struct CTransmissionId { char padding_8[16]; LcVector<StormAlloc> member_18; virtual void Key(); virtual ~CTransmissionId(); };
CTransmissionId::~CTransmissionId() {}
}}
namespace storm { namespace echo { namespace group { namespace resultEvent { 
struct Create { char padding_8[48]; LcUniquePtr<1> member_38; LcUniquePtr<1> member_40; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~Create(); };
Create::~Create() {}
}}}}
namespace storm { namespace echo { namespace group { namespace resultEvent { 
struct RequestAddPeer { char padding_8[56]; LcString<StormAlloc> member_40; char padding_58[8]; LcUniquePtr<1> member_60; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~RequestAddPeer(); };
RequestAddPeer::~RequestAddPeer() {}
}}}}
namespace storm { namespace echo { namespace group { namespace resultEvent { 
struct AddPlayer { char padding_8[48]; LcString<StormAlloc> member_38; char padding_50[8]; LcUniquePtr<1> member_58; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~AddPlayer(); };
AddPlayer::~AddPlayer() {}
}}}}
namespace storm { namespace echo { namespace group { namespace outEvent { 
struct PeerGone { char padding_8[32]; LcUniquePtr<1> member_28; char padding_30[8]; LcString<StormAlloc> member_38; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~PeerGone(); };
PeerGone::~PeerGone() {}
}}}}
namespace storm { namespace echo { namespace group { namespace outEvent { 
struct AddPeerRequest { char padding_8[32]; LcUniquePtr<1> member_28; LcUniquePtr<1> member_30; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~AddPeerRequest(); };
AddPeerRequest::~AddPeerRequest() {}
}}}}
namespace storm { namespace echo { namespace group { namespace inEvent { 
struct RequestAddPeer { char padding_8[32]; LcUniquePtr<1> member_28; LcUniquePtr<1> member_30; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~RequestAddPeer(); };
RequestAddPeer::~RequestAddPeer() {}
}}}}
namespace storm { 
struct NetPropertySerializationOp { char padding_8[16]; LcVector<StormAlloc> member_18; virtual void Key(); virtual ~NetPropertySerializationOp(); };
NetPropertySerializationOp::~NetPropertySerializationOp() {}
}
namespace storm { namespace echo { namespace object { namespace internal { namespace inEvent { 
struct Create { char padding_8[32]; LcUniquePtr<1> member_28; char padding_30[24]; LcMember<70288385> member_48; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~Create(); };
Create::~Create() {}
}}}}}
namespace storm { 
struct NetPropertySetTouchedOp { char padding_8[16]; LcVector<StormAlloc> member_18; virtual void Key(); virtual ~NetPropertySetTouchedOp(); };
NetPropertySetTouchedOp::~NetPropertySetTouchedOp() {}
}
struct Base4a79d0 { virtual ~Base4a79d0(); };
namespace storm { 
struct SimpleSessionHandler : Base4a79d0 {  static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~SimpleSessionHandler(); };
SimpleSessionHandler::~SimpleSessionHandler() {}
}
namespace storm { namespace mm { 
struct CompressionAlgorithm { char padding_8[8]; LcMember<84499459> member_10; char padding_11[31]; LcMember<84499458> member_30; char padding_31[151]; LcMember<84499457> member_c8; virtual void Key(); virtual ~CompressionAlgorithm(); };
CompressionAlgorithm::~CompressionAlgorithm() {}
}}
struct Base52cf30 { virtual ~Base52cf30(); char padding[104]; };
namespace storm { namespace mm { 
struct ClientProtocolRequestBroker : Base52cf30 { LcTree<86831873> member_70; virtual void Key(); virtual ~ClientProtocolRequestBroker(); };
ClientProtocolRequestBroker::~ClientProtocolRequestBroker() {}
}}
namespace storm { namespace mm { 
struct ProtocolRequestBrokerInterface { LcMember<87092226> member_8; char padding_9[39]; LcMember<87092225> member_30; virtual void Key(); virtual ~ProtocolRequestBrokerInterface(); };
ProtocolRequestBrokerInterface::~ProtocolRequestBrokerInterface() {}
}}
namespace storm { 
struct DataBuffer { char padding_8[16]; LcVector<StormAlloc> member_18; virtual void Key(); virtual ~DataBuffer(); };
DataBuffer::~DataBuffer() {}
}
struct Base5854a0 { virtual ~Base5854a0(); };
namespace storm { namespace common { namespace NetworkHelper { 
struct NetworkInterfaceDiscoveredEvent : Base5854a0 {  static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~NetworkInterfaceDiscoveredEvent(); };
NetworkInterfaceDiscoveredEvent::~NetworkInterfaceDiscoveredEvent() {}
}}}
struct Base5857f0 { virtual ~Base5857f0(); };
namespace storm { namespace common { namespace NetworkHelper { 
struct NetworkInterfaceLostEvent : Base5857f0 {  static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~NetworkInterfaceLostEvent(); };
NetworkInterfaceLostEvent::~NetworkInterfaceLostEvent() {}
}}}
namespace storm { 
struct NetPropertyTouchedBitsRetrievalOp { char padding_8[24]; LcVector<StormAlloc> member_20; virtual void Key(); virtual ~NetPropertyTouchedBitsRetrievalOp(); };
NetPropertyTouchedBitsRetrievalOp::~NetPropertyTouchedBitsRetrievalOp() {}
}
namespace storm { namespace common { namespace NetworkHelper { 
struct DNSResolvedEvent { char padding_8[40]; LcMember<93165057> member_30; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~DNSResolvedEvent(); };
DNSResolvedEvent::~DNSResolvedEvent() {}
}}}
struct Base58e350 { virtual ~Base58e350(); };
namespace storm { namespace common { namespace Tracking { 
struct TrackingDataEvent : Base58e350 {  static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~TrackingDataEvent(); };
TrackingDataEvent::~TrackingDataEvent() {}
}}}
struct Base5b8fa0 { virtual ~Base5b8fa0(); };
namespace storm { 
struct PeerDescriptor : Base5b8fa0 {  static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~PeerDescriptor(); };
PeerDescriptor::~PeerDescriptor() {}
}
namespace storm { namespace transport { 
struct PacketEventObserver { LcTree<96598785> member_8; virtual void Key(); virtual ~PacketEventObserver(); };
PacketEventObserver::~PacketEventObserver() {}
}}
namespace storm { namespace transport { namespace internalEvent { 
struct UpdateLinkRecvPacket { char padding_8[32]; LcMember<96659201> member_28; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~UpdateLinkRecvPacket(); };
UpdateLinkRecvPacket::~UpdateLinkRecvPacket() {}
}}}
struct Nested98350081 { char padding_8[16]; LcString<StormAlloc> member_18; virtual void Key(); virtual ~Nested98350081() {} };
struct Base5dcb40 { virtual ~Base5dcb40(); char padding[80]; };
namespace storm { namespace punch { 
struct ProductPunchClientImpl_Main : Base5dcb40 { Nested98350081 member_58; virtual void Key(); virtual ~ProductPunchClientImpl_Main(); };
ProductPunchClientImpl_Main::~ProductPunchClientImpl_Main() {}
}}
struct Base5e35a0 { virtual ~Base5e35a0(); char padding[96]; };
namespace storm { namespace punch { 
struct PunchMpeAdapter : Base5e35a0 { LcString<StormAlloc> member_68; LcMember<98785795> member_80; char padding_81[7]; LcTree<98785794> member_88; LcMember<98785793> member_a0; virtual void Key(); virtual ~PunchMpeAdapter(); };
PunchMpeAdapter::~PunchMpeAdapter() {}
}}
