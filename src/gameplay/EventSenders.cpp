// Component methods that send one Onyx event from a member callback/target
// pair. Two forms appear: SendEvent, where the callback fills one payload that
// is then sent, and SendValue, where the callback and the listener each get a
// payload built from the same value. Key labels an original function extent;
// payload types are stand-ins named by layout, and the classes below are
// views of the fields each method touches.
#include "BaseCharacter.h"
#include "OnyxEvents.h"

template<unsigned Key, uint32_t Hash, unsigned Offset> struct EventSender {
    char padding[Offset];
    onyx::EventCallback* callback;
    onyx::EventTarget* target;
    void Send();
};
template<unsigned Key, uint32_t Hash, unsigned Offset> void EventSender<Key, Hash, Offset>::Send() {
    onyx::SendEvent<Hash>(callback, target);
}

// A scalar constant payload.
template<unsigned Key, uint32_t Hash, unsigned Offset, class T, T Value> struct ValueSender {
    char padding[Offset];
    onyx::EventCallback* callback;
    onyx::EventTarget* target;
    void Send();
};
template<unsigned Key, uint32_t Hash, unsigned Offset, class T, T Value> void ValueSender<Key, Hash, Offset, T, Value>::Send() {
    onyx::SendValue<Hash, T>(callback, target, Value);
}

// A payload built by its default constructor.
template<unsigned Key, uint32_t Hash, unsigned Offset, class T> struct DefaultSender {
    char padding[Offset];
    onyx::EventCallback* callback;
    onyx::EventTarget* target;
    void Send();
};
template<unsigned Key, uint32_t Hash, unsigned Offset, class T> void DefaultSender<Key, Hash, Offset, T>::Send() {
    onyx::SendValue<Hash, T>(callback, target);
}

// A payload copied from a default-constructed value.
template<unsigned Key, uint32_t Hash, unsigned Offset, class T> struct CopySender {
    char padding[Offset];
    onyx::EventCallback* callback;
    onyx::EventTarget* target;
    void Send();
};
template<unsigned Key, uint32_t Hash, unsigned Offset, class T> void CopySender<Key, Hash, Offset, T>::Send() {
    onyx::SendValue<Hash, T>(callback, target, T());
}

// Payload layouts. Constructors store each field (padding is left alone).
struct PayloadU32U64 { uint32_t a; uint64_t b; PayloadU32U64() : a(0), b(0) {} };
struct PayloadU32Bool { uint32_t a; bool b; PayloadU32Bool() : a(0), b(false) {} };
struct PayloadU64x2 { uint64_t a, b; PayloadU64x2() : a(0), b(0) {} };
struct PayloadU64x3 { uint64_t a, b, c; PayloadU64x3() : a(0), b(0), c(0) {} };
// The 32-bit field is stored before the 64-bit one.
struct PayloadU64U32 { uint64_t a; uint32_t b; PayloadU64U32() { b = 0; a = 0; } };
struct PayloadU32x5 { uint32_t a, b, c, d, e; PayloadU32x5() : a(15), b(4), c(0), d(1), e(0) {} };
struct PayloadByteU32x2 { uint8_t a; uint32_t b, c; PayloadByteU32x2() : a(0), b(1), c(0xffffffffu) {} };
struct PayloadI32x2ByteU32x2 { int32_t a, b; uint8_t c; uint32_t d, e; PayloadI32x2ByteU32x2() : a(-1), b(0), c(0), d(0), e(0) {} };
// Black, opaque.
struct PayloadColor { uint8_t r, g, b, a; PayloadColor() : r(0), g(0), b(0), a(255) {} };
// Left uninitialized; at least 12 bytes (the frame does not say how many more).
struct PayloadUninitialized16 { uint64_t a, b; PayloadUninitialized16() {} };
struct PayloadUninitialized24 { uint64_t a, b, c; PayloadUninitialized24() {} };
struct PayloadZeroMinusOne { uint32_t a; int32_t b; PayloadZeroMinusOne() : a(0), b(-1) {} };
struct PayloadZeroFour { uint32_t a, b; PayloadZeroFour() : a(0), b(4) {} };

template struct EventSender<0x798ad0u, 0x6cda69a4u, 0x98u>;
template struct EventSender<0x809e80u, 0x48acec0fu, 0x1f8u>;
template struct EventSender<0x876e90u, 0x48acec0cu, 0x1b0u>;
template struct EventSender<0x87a860u, 0x48acec0fu, 0x1f8u>;
template struct EventSender<0xcc9b60u, 0x00cfb35du, 0x50u>;

template struct ValueSender<0xac7590u, 0x2c330623u, 0u, uint64_t, 0>;
template struct ValueSender<0xad7310u, 0x34a7206cu, 0u, uint64_t, 0>;
template struct ValueSender<0xad7640u, 0x0f3d0b0cu, 0u, uint64_t, 0>;
template struct ValueSender<0xad9930u, 0x7c134948u, 0u, uint64_t, 0>;
template struct ValueSender<0xb28bd0u, 0x36748415u, 0u, uint64_t, 0>;
template struct ValueSender<0xb5e160u, 0x7ed22b68u, 0u, uint64_t, 0>;
template struct ValueSender<0xc7cee0u, 0x56e32782u, 0u, uint64_t, 0>;
template struct ValueSender<0x8af450u, 0x5f17513du, 0u, bool, false>;
template struct ValueSender<0x8b42b0u, 0x62bf16f3u, 0u, bool, false>;
template struct ValueSender<0xcc4da0u, 0x37621cc3u, 0u, bool, false>;
template struct ValueSender<0x7cc500u, 0x3ce00b3bu, 0u, bool, true>;
template struct ValueSender<0xb78c50u, 0x1850f13eu, 0u, uint8_t, 8>;
template struct ValueSender<0xc79960u, 0x5f83d28cu, 0u, uint8_t, 8>;
template struct ValueSender<0x7c26c0u, 0x2564a869u, 0u, uint32_t, 2>;
template struct ValueSender<0x87f0d0u, 0x75e74a39u, 0u, int32_t, -1>;

template struct DefaultSender<0xad1c20u, 0x37d20937u, 0u, PayloadU64x2>;
template struct DefaultSender<0xad1f50u, 0x7b6cac53u, 0u, PayloadU64x2>;
template struct DefaultSender<0x678db0u, 0x07f0dad9u, 0u, PayloadU32U64>;
template struct DefaultSender<0x679410u, 0x766dac00u, 0u, PayloadU32Bool>;
template struct DefaultSender<0xb9a4b0u, 0x667f2c12u, 0u, PayloadU64x3>;
template struct DefaultSender<0xb9a7e0u, 0x2cd68640u, 0u, PayloadU64x3>;
template struct DefaultSender<0xbc6600u, 0x40c84c48u, 0u, PayloadU64U32>;
template struct DefaultSender<0x7c1a20u, 0x78a96a64u, 0u, PayloadU32x5>;
template struct DefaultSender<0x7ea6c0u, 0x13e0c623u, 0u, PayloadByteU32x2>;
template struct DefaultSender<0x70d6c0u, 0x29b78d52u, 0u, PayloadI32x2ByteU32x2>;
template struct DefaultSender<0x7189d0u, 0x73022897u, 0u, PayloadUninitialized16>;
template struct DefaultSender<0x71b630u, 0x6d6ebf75u, 0u, PayloadUninitialized16>;

template struct DefaultSender<0x71e3c0u, 0x2f64d01du, 0u, PayloadUninitialized24>;
template struct DefaultSender<0x7cc830u, 0x760e9e60u, 0u, PayloadZeroMinusOne>;
template struct DefaultSender<0x67fbd0u, 0x2ee3feeau, 0u, PayloadZeroFour>;

template struct CopySender<0xc93180u, 0x3939ece8u, 0u, PayloadColor>;

// Sets a field to 1, then sends.
template<unsigned Key, uint32_t Hash, unsigned Offset, unsigned FieldOffset, class Field> struct MarkSender {
    char padding[Offset];
    onyx::EventCallback* callback;
    onyx::EventTarget* target;
    char padding_field[FieldOffset - Offset - 16];
    Field field;
    void Send();
};
template<unsigned Key, uint32_t Hash, unsigned Offset, unsigned FieldOffset, class Field> void MarkSender<Key, Hash, Offset, FieldOffset, Field>::Send() {
    field = 1;
    onyx::SendEvent<Hash>(callback, target);
}
template struct MarkSender<0x899c70u, 0x255c0afeu, 0x8u, 0x9cu, bool>;
template struct MarkSender<0xc70510u, 0x255c0afeu, 0x8u, 0x99u, bool>;
template struct MarkSender<0x906f20u, 0x3a6530b8u, 0x80u, 0x98u, uint16_t>;

// Component enable steps: set the active flag, then send unless a byte is set.
template<unsigned Key, uint32_t Hash, unsigned SkipOffset> struct EnableSender {
    char padding[0x20];
    onyx::EventCallback* callback;   // +0x20
    onyx::EventTarget* target;       // +0x28
    char padding_30[8];
    uint32_t flags;                  // +0x38
    char padding_3c[SkipOffset - 0x3c];
    bool skip;
    void Enable();
};
template<unsigned Key, uint32_t Hash, unsigned SkipOffset> void EnableSender<Key, Hash, SkipOffset>::Enable() {
    flags |= 2;
    if (skip) return;
    onyx::SendEvent<Hash>(callback, target);
}
template struct EnableSender<0xa05dd0u, 0x44174b43u, 0x90u>;
template struct EnableSender<0xac6ce0u, 0x44174b43u, 0x4au>;

// Sends only while flag bit 0 is set.
struct Sender8df6f0 {
    char padding[0x38];
    uint32_t flags;                  // +0x38
    char padding_3c[0x2c];
    onyx::EventCallback* callback;   // +0x68
    onyx::EventTarget* target;       // +0x70
    void Send();
};
void Sender8df6f0::Send() {
    if (flags & 1) onyx::SendEvent<0x2f791788u>(callback, target);
}

// Sends once per arming.
struct Sender7cd3c0 {
    char padding[0xb0];
    onyx::EventCallback* callback;   // +0xb0
    onyx::EventTarget* target;       // +0xb8
    char padding_c0[8];
    bool armed;                      // +0xc8
    void Send();
};
void Sender7cd3c0::Send() {
    if (armed) {
        onyx::SendEvent<0x3adc9eaau>(callback, target);
        armed = false;
    }
}

// Sends when the argument's id matches.
struct IdHolder932ee0 { char padding[0x10]; uint32_t id; };
struct Sender932ee0 {
    char padding[0x70];
    onyx::EventCallback* callback;   // +0x70
    onyx::EventTarget* target;       // +0x78
    char padding_80[8];
    uint32_t id;                     // +0x88
    void Send(const IdHolder932ee0* holder);
};
void Sender932ee0::Send(const IdHolder932ee0* holder) {
    if (holder->id == id) onyx::SendEvent<0x535478f3u>(callback, target);
}

// Sends while the game state's +0xe0 flag is set, marking itself first.
struct Sender8626d0 {
    char padding[8];
    onyx::EventCallback* callback;   // +0x8
    onyx::EventTarget* target;       // +0x10
    char padding_18[0x38];
    bool sent;                       // +0x50
    void Send();
};
void Sender8626d0::Send() {
    if (SPTG::Game_State && SPTG::Game_State->flagE0) {
        sent = true;
        onyx::SendEvent<0x255c0afeu>(callback, target);
    }
}

// Skipped while one global byte is 1 and another is 0.
extern "C" uint8_t Global_1924cb0;
extern "C" uint8_t Global_1925089;
struct Sender81a880 {
    char padding[0x1f8];
    onyx::EventCallback* callback;   // +0x1f8
    onyx::EventTarget* target;       // +0x200
    void Send();
};
void Sender81a880::Send() {
    if (Global_1924cb0 == 1 && Global_1925089 == 0) return;
    onyx::SendEvent<0x48acec0fu>(callback, target);
}

// One payload built by the caller, filled by the callback and then sent.
// A 32-bit value in an 8-byte-aligned payload.
struct alignas(8) Aligned32 { uint32_t value; Aligned32(uint32_t v) : value(v) {} };
template<unsigned Key, uint32_t Hash> struct FieldSender {
    char padding[0x50];
    onyx::EventCallback* callback;   // +0x50
    onyx::EventTarget* target;       // +0x58
    char padding_60[0x20];
    uint32_t value;                  // +0x80
    void Send();
};
template<unsigned Key, uint32_t Hash> void FieldSender<Key, Hash>::Send() {
    onyx::ValuePayload<Aligned32> payload(value);
    onyx::SendEvent<Hash>(callback, target, payload);
}
template struct FieldSender<0xcc6550u, 0x51404a1eu>;
template struct FieldSender<0xcc6ac0u, 0x1184faefu>;

struct Pair64x32 { uint64_t a; uint32_t b; };
// Copied field by field.
struct PairPayload { uint64_t a; uint32_t b; PairPayload(const Pair64x32& p) : a(p.a), b(p.b) {} ~PairPayload() {} };
struct Sendercc59d0 {
    char padding[0x50];
    onyx::EventCallback* callback;   // +0x50
    onyx::EventTarget* target;       // +0x58
    char padding_60[0x20];
    Pair64x32 value;                 // +0x80
    void Send();
};
void Sendercc59d0::Send() {
    PairPayload payload(value);
    onyx::SendEvent<0x2fdfd54bu>(callback, target, payload);
}

// Payloads taken from the arguments.
struct Pair64x2 { uint64_t a, b; };
struct Sender71b010 {
    char padding[0x50];
    onyx::EventCallback* callback;   // +0x50
    onyx::EventTarget* target;       // +0x58
    void Send(Pair64x2 value);
};
void Sender71b010::Send(Pair64x2 value) {
    onyx::ValuePayload<Pair64x2> payload(value);
    onyx::SendEvent<0x6d6ebf75u>(callback, target, payload);
}
struct Quad71dd90 {
    uint32_t a; uint64_t b; uint32_t c, d;
    Quad71dd90(uint32_t a_, uint64_t b_, uint32_t c_, uint32_t d_) : a(a_), b(b_), c(c_), d(d_) {}
    ~Quad71dd90() {}
};
struct Sender71dd90 {
    char padding[0x50];
    onyx::EventCallback* callback;   // +0x50
    onyx::EventTarget* target;       // +0x58
    void Send(uint32_t a, uint64_t b, uint32_t c, uint32_t d);
};
void Sender71dd90::Send(uint32_t a, uint64_t b, uint32_t c, uint32_t d) {
    Quad71dd90 payload(a, b, c, d);
    onyx::SendEvent<0x2f64d01du>(callback, target, payload);
}
