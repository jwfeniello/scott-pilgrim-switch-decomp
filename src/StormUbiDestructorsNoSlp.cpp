// Destructors of classes in the storm and ubiservices libraries, built from what they hold: libc++
// strings, vectors, lists, shared and unique pointers, pointers other threads can swap, members with
// their own destructors, and bases. These libraries are built without exceptions and with unwind tables.
//
// Generated from the decompiler's reading of each destructor and tested against the bytes. Classes
// carry their RTTI names where those are plain. Offsets come from the code. The base classes and the
// members with their own destructors are stand-ins named after an address or a key.
//
// These only match with SLP vectorization off: the original stores two vtable pointers one at a time.
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
// A libc++ vector of smart pointers.
template<class Element, class Alloc> struct LcVectorSmart {
    Element* begin;
    Element* end;
    Element* capacity;
    __attribute__((always_inline)) ~LcVectorSmart() {
        if (begin) {
            Element* p = end;
            while (p != begin) (--p)->~Element();
            end = begin;
            Alloc::Free(begin);
        }
    }
};
// A libc++ shared pointer. The first count is one less than the owners.
struct LcSharedCount {
    virtual void S0(); virtual void S1();
    virtual void OnZeroShared();
    long owners;
    void ReleaseWeak();
};
struct LcSharedPtr {
    void* object;
    LcSharedCount* count;
    __attribute__((always_inline)) ~LcSharedPtr() {
        LcSharedCount* c = count;
        if (c && __atomic_fetch_sub(&c->owners, 1, __ATOMIC_ACQ_REL) == 0) {
            c->OnZeroShared();
            c->ReleaseWeak();
        }
    }
};
// A libc++ list: the end node is part of the list.
struct LcNothing {};
template<class Alloc, class Value> struct LcList {
    struct Link { Link* prev; Link* next; };
    struct Node : Link { Value value; };
    Link end;
    size_t size;
    __attribute__((always_inline)) ~LcList() {
        if (size != 0) {
            Link* f = end.next;
            Link* l = end.prev;
            f->prev->next = l->next;
            l->next->prev = f->prev;
            size = 0;
            while (f != &end) {
                Node* np = static_cast<Node*>(f);
                f = f->next;
                np->value.~Value();
                Alloc::Free(np);
            }
        }
    }
};
// A pointer deleted in place, then cleared.
template<unsigned Slot> struct LcResetPtr {
    struct Object : VirtualSlots<Slot - 1> { virtual ~Object() noexcept; };
    Object* value;
    __attribute__((always_inline)) ~LcResetPtr() {
        Object* object = value;
        if (object) {
            delete object;
            value = nullptr;
        }
    }
};
// An object deleted through the storm allocator, which wants the most derived address.
void StormDelete(void* memory, size_t size, const char* file, int line);
struct StormObject { virtual ~StormObject(); };
template<bool Reset> struct StormOwned {
    StormObject* value;
    __attribute__((always_inline)) ~StormOwned() {
        StormObject* object = value;
        if (object) {
            void* top = dynamic_cast<void*>(object);
            object->~StormObject();
            StormDelete(top, 0, "", 0);
            if (Reset) value = nullptr;
        }
    }
};
struct NestedPrimary44035329 : VirtualSlots<17> { virtual ~NestedPrimary44035329() {} };
struct NestedSecondary44035329 : VirtualSlots<1> {};
struct Nested44035329 : NestedPrimary44035329, NestedSecondary44035329 { char padding_10[16]; LcMember<44035330> member_20; virtual void Key(); virtual ~Nested44035329() {} };
struct NestedPrimary44035331 : VirtualSlots<17> { virtual ~NestedPrimary44035331() {} };
struct NestedSecondary44035331 : VirtualSlots<1> {};
struct Nested44035331 : NestedPrimary44035331, NestedSecondary44035331 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested44035331() {} };
struct Primary29fed0 : VirtualSlots<17> { virtual ~Primary29fed0() {} };
struct Secondary29fed0_0 : VirtualSlots<1> {};
namespace storm { 
struct NetPropertyRefDataContainer : Primary29fed0, Secondary29fed0_0 { char padding_10[16]; Nested44035331 member_20; Nested44035329 member_68; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~NetPropertyRefDataContainer(); };
NetPropertyRefDataContainer::~NetPropertyRefDataContainer() {  }
}
struct NestedPrimary40734721 : VirtualSlots<17> { virtual ~NestedPrimary40734721() {} };
struct NestedSecondary40734721 : VirtualSlots<1> {};
struct Nested40734721 : NestedPrimary40734721, NestedSecondary40734721 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested40734721() {} };
namespace storm { namespace echo { namespace QOS { namespace outEvent { 
struct PingReply { char padding_8[24]; LcUniquePtr<1> member_20; char padding_28[8]; LcMember<40734723> member_30; char padding_31[55]; Nested40734721 member_68; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~PingReply(); };
PingReply::~PingReply() {  }
}}}}
struct NestedPrimary41561601 : VirtualSlots<17> { virtual ~NestedPrimary41561601() {} };
struct NestedSecondary41561601 : VirtualSlots<1> {};
struct Nested41561601 : NestedPrimary41561601, NestedSecondary41561601 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested41561601() {} };
struct Nested41561603 { char padding_8[16]; LcString<StormAlloc> member_18; virtual void Key(); virtual ~Nested41561603() {} };
namespace storm { namespace echo { namespace voicechat { 
struct SessionChatterDescriptor { char padding_8[64]; Nested41561603 member_48; Nested41561601 member_78; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~SessionChatterDescriptor(); };
SessionChatterDescriptor::~SessionChatterDescriptor() {  }
}}}
struct Nested42235649 { LcMember<42235650> member_8; virtual void Key(); virtual ~Nested42235649() {} };
struct Primary284770 : VirtualSlots<17> { virtual ~Primary284770() {} };
struct Secondary284770_0 : VirtualSlots<1> {};
namespace storm { namespace echo { 
struct PlayerDescriptor : Primary284770, Secondary284770_0 { char padding_10[72]; Nested42235649 member_58; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~PlayerDescriptor(); };
PlayerDescriptor::~PlayerDescriptor() {  }
}}
struct NestedPrimary42985473 : VirtualSlots<17> { virtual ~NestedPrimary42985473() {} };
struct NestedSecondary42985473 : VirtualSlots<1> {};
struct Nested42985473 : NestedPrimary42985473, NestedSecondary42985473 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested42985473() {} };
namespace storm { namespace echo { namespace multicast { namespace inEvent { 
struct WelcomePeerEvent { char padding_8[32]; Nested42985473 member_28; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~WelcomePeerEvent(); };
WelcomePeerEvent::~WelcomePeerEvent() {  }
}}}}
struct Primary2ee190 : VirtualSlots<17> { virtual ~Primary2ee190() {} };
struct Secondary2ee190_0 : VirtualSlots<1> {};

struct Class2ee190 : Primary2ee190, Secondary2ee190_0 { char padding_10[16]; LcMember<49158401> member_20; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~Class2ee190(); };
Class2ee190::~Class2ee190() {  }

struct Nested54236417 { char padding_8[16]; LcString<StormAlloc> member_18; virtual void Key(); virtual ~Nested54236417() {} };
struct NestedPrimary54236419 : VirtualSlots<17> { virtual ~NestedPrimary54236419() {} };
struct NestedSecondary54236419 : VirtualSlots<1> {};
struct Nested54236419 : NestedPrimary54236419, NestedSecondary54236419 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested54236419() {} };
namespace storm { namespace echo { namespace session { 
struct SessionJoinAcceptMessage { char padding_8[272]; Nested54236419 member_118; Nested54236417 member_160; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~SessionJoinAcceptMessage(); };
SessionJoinAcceptMessage::~SessionJoinAcceptMessage() {  }
}}}
struct NestedPrimary54374145 : VirtualSlots<17> { virtual ~NestedPrimary54374145() {} };
struct NestedSecondary54374145 : VirtualSlots<1> {};
struct Nested54374145 : NestedPrimary54374145, NestedSecondary54374145 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested54374145() {} };
namespace storm { namespace echo { namespace session { 
struct SessionPeerJoiningMessage { char padding_8[72]; Nested54374145 member_50; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~SessionPeerJoiningMessage(); };
SessionPeerJoiningMessage::~SessionPeerJoiningMessage() {  }
}}}
struct NestedPrimary54556929 : VirtualSlots<17> { virtual ~NestedPrimary54556929() {} };
struct NestedSecondary54556929 : VirtualSlots<1> {};
struct Nested54556929 : NestedPrimary54556929, NestedSecondary54556929 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested54556929() {} };
namespace storm { namespace echo { namespace session { 
struct SessionChangeSessionDescriptorMessage { char padding_8[72]; Nested54556929 member_50; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~SessionChangeSessionDescriptorMessage(); };
SessionChangeSessionDescriptorMessage::~SessionChangeSessionDescriptorMessage() {  }
}}}
struct NestedPrimary56333569 : VirtualSlots<17> { virtual ~NestedPrimary56333569() {} };
struct NestedSecondary56333569 : VirtualSlots<1> {};
struct Nested56333569 : NestedPrimary56333569, NestedSecondary56333569 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested56333569() {} };
namespace storm { namespace echo { namespace player { 
struct PlayerJoinedMessage { char padding_8[24]; Nested56333569 member_20; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~PlayerJoinedMessage(); };
PlayerJoinedMessage::~PlayerJoinedMessage() {  }
}}}
struct NestedPrimary56379393 : VirtualSlots<17> { virtual ~NestedPrimary56379393() {} };
struct NestedSecondary56379393 : VirtualSlots<1> {};
struct Nested56379393 : NestedPrimary56379393, NestedSecondary56379393 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested56379393() {} };
namespace storm { namespace echo { namespace player { 
struct PlayerUpdateMessage { char padding_8[24]; Nested56379393 member_20; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~PlayerUpdateMessage(); };
PlayerUpdateMessage::~PlayerUpdateMessage() {  }
}}}
struct NestedPrimary56393985 : VirtualSlots<17> { virtual ~NestedPrimary56393985() {} };
struct NestedSecondary56393985 : VirtualSlots<1> {};
struct Nested56393985 : NestedPrimary56393985, NestedSecondary56393985 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested56393985() {} };
namespace storm { namespace echo { namespace player { 
struct AddPlayerRequestMessage { char padding_8[24]; Nested56393985 member_20; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~AddPlayerRequestMessage(); };
AddPlayerRequestMessage::~AddPlayerRequestMessage() {  }
}}}
struct NestedPrimary64647937 : VirtualSlots<17> { virtual ~NestedPrimary64647937() {} };
struct NestedSecondary64647937 : VirtualSlots<1> {};
struct Nested64647937 : NestedPrimary64647937, NestedSecondary64647937 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested64647937() {} };
namespace storm { namespace echo { namespace group { 
struct RequestMessage { char padding_8[88]; Nested64647937 member_60; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~RequestMessage(); };
RequestMessage::~RequestMessage() {  }
}}}
struct NestedPrimary64775425 : VirtualSlots<17> { virtual ~NestedPrimary64775425() {} };
struct NestedSecondary64775425 : VirtualSlots<1> {};
struct Nested64775425 : NestedPrimary64775425, NestedSecondary64775425 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested64775425() {} };
namespace storm { namespace echo { namespace group { 
struct PlayerJoinedMessage { char padding_8[48]; Nested64775425 member_38; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~PlayerJoinedMessage(); };
PlayerJoinedMessage::~PlayerJoinedMessage() {  }
}}}
struct NestedPrimary64841217 : VirtualSlots<17> { virtual ~NestedPrimary64841217() {} };
struct NestedSecondary64841217 : VirtualSlots<1> {};
struct Nested64841217 : NestedPrimary64841217, NestedSecondary64841217 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested64841217() {} };
namespace storm { namespace echo { namespace group { 
struct PlayerUpdateMessage { char padding_8[48]; Nested64841217 member_38; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~PlayerUpdateMessage(); };
PlayerUpdateMessage::~PlayerUpdateMessage() {  }
}}}
struct NestedPrimary64354817 : VirtualSlots<17> { virtual ~NestedPrimary64354817() {} };
struct NestedSecondary64354817 : VirtualSlots<1> {};
struct Nested64354817 : NestedPrimary64354817, NestedSecondary64354817 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested64354817() {} };
namespace storm { namespace echo { namespace group { 
struct HandshakeMessage { char padding_8[112]; Nested64354817 member_78; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~HandshakeMessage(); };
HandshakeMessage::~HandshakeMessage() {  }
}}}
struct Nested75614721 { char padding_8[16]; LcString<StormAlloc> member_18; virtual void Key(); virtual ~Nested75614721() {} };
struct NestedPrimary75614723 : VirtualSlots<17> { virtual ~NestedPrimary75614723() {} };
struct NestedSecondary75614723 : VirtualSlots<1> {};
struct Nested75614723 : NestedPrimary75614723, NestedSecondary75614723 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested75614723() {} };
struct Level481ca0_1 { char padding_8[24]; Nested75614723 member_20; virtual void Key1(); virtual ~Level481ca0_1() {  } };
namespace storm { namespace multicast { namespace group { 
struct PeerDisconnected : Level481ca0_1 { Nested75614721 member_68; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~PeerDisconnected(); };
PeerDisconnected::~PeerDisconnected() {  }
}}}
struct NestedPrimary75593729 : VirtualSlots<17> { virtual ~NestedPrimary75593729() {} };
struct NestedSecondary75593729 : VirtualSlots<1> {};
struct Nested75593729 : NestedPrimary75593729, NestedSecondary75593729 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested75593729() {} };
namespace storm { namespace multicast { namespace group { 
struct PeerConnected { char padding_8[24]; Nested75593729 member_20; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~PeerConnected(); };
PeerConnected::~PeerConnected() {  }
}}}
struct NestedPrimary75550465 : VirtualSlots<17> { virtual ~NestedPrimary75550465() {} };
struct NestedSecondary75550465 : VirtualSlots<1> {};
struct Nested75550465 : NestedPrimary75550465, NestedSecondary75550465 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested75550465() {} };
namespace storm { namespace multicast { namespace group { 
struct ConnectionReady { char padding_8[24]; Nested75550465 member_20; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~ConnectionReady(); };
ConnectionReady::~ConnectionReady() {  }
}}}
struct NestedPrimary75520769 : VirtualSlots<17> { virtual ~NestedPrimary75520769() {} };
struct NestedSecondary75520769 : VirtualSlots<1> {};
struct Nested75520769 : NestedPrimary75520769, NestedSecondary75520769 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested75520769() {} };
namespace storm { namespace multicast { namespace outEvent { 
struct LinkUpEvent { char padding_8[64]; LcSharedPtr member_48; Nested75520769 member_58; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~LinkUpEvent(); };
LinkUpEvent::~LinkUpEvent() {  }
}}}
struct Primary47bb50 : VirtualSlots<17> { virtual ~Primary47bb50() {} };
struct Secondary47bb50_0 : VirtualSlots<1> {};

struct Class47bb50 : Primary47bb50, Secondary47bb50_0 { char padding_10[16]; LcTree<75216129> member_20; virtual void Key(); virtual ~Class47bb50(); };
Class47bb50::~Class47bb50() {  }

struct Primary47bbb0 : VirtualSlots<17> { virtual ~Primary47bbb0() {} };
struct Secondary47bbb0_0 : VirtualSlots<1> {};

struct Class47bbb0 : Primary47bbb0, Secondary47bbb0_0 { char padding_10[16]; LcTree<75217665> member_20; virtual void Key(); virtual ~Class47bbb0(); };
Class47bbb0::~Class47bbb0() {  }

struct Primary47bee0 : VirtualSlots<17> { virtual ~Primary47bee0() {} };
struct Secondary47bee0_0 : VirtualSlots<1> {};

struct Class47bee0 : Primary47bee0, Secondary47bee0_0 { char padding_10[16]; LcTree<75230721> member_20; virtual void Key(); virtual ~Class47bee0(); };
Class47bee0::~Class47bee0() {  }

struct NestedPrimary75643137 : VirtualSlots<17> { virtual ~NestedPrimary75643137() {} };
struct NestedSecondary75643137 : VirtualSlots<1> {};
struct Nested75643137 : NestedPrimary75643137, NestedSecondary75643137 { char padding_10[48]; LcUniquePtr<1> member_40; virtual void Key(); virtual ~Nested75643137() {} };
namespace storm { namespace multicast { namespace group { 
struct PlayerJoined { char padding_8[24]; Nested75643137 member_20; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~PlayerJoined(); };
PlayerJoined::~PlayerJoined() {  }
}}}
struct Primary489c20 : VirtualSlots<17> { virtual ~Primary489c20() {} };
struct Secondary489c20_0 : VirtualSlots<1> {};

struct Class489c20 : Primary489c20, Secondary489c20_0 { char padding_10[16]; LcTree<76136961> member_20; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~Class489c20(); };
Class489c20::~Class489c20() {  }

struct Primary48ae00 : VirtualSlots<17> { virtual ~Primary48ae00() {} };
struct Secondary48ae00_0 : VirtualSlots<1> {};

struct Class48ae00 : Primary48ae00, Secondary48ae00_0 { char padding_10[16]; LcTree<76210177> member_20; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~Class48ae00(); };
Class48ae00::~Class48ae00() {  }

struct Primary48c010 : VirtualSlots<17> { virtual ~Primary48c010() {} };
struct Secondary48c010_0 : VirtualSlots<1> {};

struct Class48c010 : Primary48c010, Secondary48c010_0 { char padding_10[16]; LcTree<76284161> member_20; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~Class48c010(); };
Class48c010::~Class48c010() {  }

struct Primary4a1d40 : VirtualSlots<127> { virtual ~Primary4a1d40(); char padding[80]; };
struct Secondary4a1d40_0 : VirtualSlots<14> {};
struct Secondary4a1d40_1 : VirtualSlots<6> {};
struct Secondary4a1d40_2 : VirtualSlots<1> {};
namespace storm { 
struct SimplePeerChannelController : Primary4a1d40, Secondary4a1d40_0, Secondary4a1d40_1, Secondary4a1d40_2 { LcMember<77714433> member_70; virtual void Key(); virtual ~SimplePeerChannelController(); };
SimplePeerChannelController::~SimplePeerChannelController() {  }
}
struct Primary58ca10 : VirtualSlots<17> { virtual ~Primary58ca10() {} };
struct Secondary58ca10_0 : VirtualSlots<1> {};
namespace storm { 
struct NetPropertyDataContainer : Primary58ca10, Secondary58ca10_0 { char padding_10[16]; LcMember<93102337> member_20; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~NetPropertyDataContainer(); };
NetPropertyDataContainer::~NetPropertyDataContainer() {  }
}
struct NestedPrimary96005121 : VirtualSlots<17> { virtual ~NestedPrimary96005121() {} };
struct NestedSecondary96005121 : VirtualSlots<1> {};
struct Nested96005121 : NestedPrimary96005121, NestedSecondary96005121 { char padding_10[16]; LcMember<96005122> member_20; virtual void Key(); virtual ~Nested96005121() {} };

struct Class5b8ec0 { Nested96005121 member_8; virtual void Key(); virtual ~Class5b8ec0(); };
Class5b8ec0::~Class5b8ec0() {  }

struct Nested96396289 { LcMember<96396290> member_8; virtual void Key(); virtual ~Nested96396289() {} };
struct Primary5bee40 : VirtualSlots<17> { virtual ~Primary5bee40() {} };
struct Secondary5bee40_0 : VirtualSlots<1> {};
namespace storm { 
struct ApplicationDescriptor : Primary5bee40, Secondary5bee40_0 { char padding_10[128]; LcSharedPtr member_90; Nested96396289 member_a0; static void operator delete(void* p) { StormAlloc::Free(p); } virtual void Key(); virtual ~ApplicationDescriptor(); };
ApplicationDescriptor::~ApplicationDescriptor() {  }
}
struct NestedPrimary96834305 : VirtualSlots<17> { virtual ~NestedPrimary96834305() {} };
struct NestedSecondary96834305 : VirtualSlots<1> {};
struct Nested96834305 : NestedPrimary96834305, NestedSecondary96834305 { char padding_10[16]; LcMember<96834306> member_20; virtual void Key(); virtual ~Nested96834305() {} };

struct Class5c5930 { Nested96834305 member_8; virtual void Key(); virtual ~Class5c5930(); };
Class5c5930::~Class5c5930() {  }

struct Nested98406657 { char padding_8[16]; LcString<StormAlloc> member_18; virtual void Key(); virtual ~Nested98406657() {} };
namespace storm { namespace punch { 
struct ProductPunchClientImplMainStartupParams { Nested98406657 member_8; virtual void Key(); virtual ~ProductPunchClientImplMainStartupParams(); };
ProductPunchClientImplMainStartupParams::~ProductPunchClientImplMainStartupParams() {  }
}}
struct Nested98465281 { char padding_8[16]; LcString<StormAlloc> member_18; virtual void Key(); virtual ~Nested98465281() {} };
namespace storm { namespace punch { 
struct UpnpImplNetworkStartupParam { Nested98465281 member_8; virtual void Key(); virtual ~UpnpImplNetworkStartupParam(); };
UpnpImplNetworkStartupParam::~UpnpImplNetworkStartupParam() {  }
}}
struct Nested98466305 { char padding_8[16]; LcString<StormAlloc> member_18; virtual void Key(); virtual ~Nested98466305() {} };
namespace storm { namespace punch { 
struct TraversalImplNetworkStartupParam { Nested98466305 member_8; virtual void Key(); virtual ~TraversalImplNetworkStartupParam(); };
TraversalImplNetworkStartupParam::~TraversalImplNetworkStartupParam() {  }
}}
