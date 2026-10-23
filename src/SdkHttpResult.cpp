// Reconstructed HTTP-status result mapping; all cases and the compiled jump
// table are verified. Reconstructed SDK networking routines; complete credited
// functions verified against the original. Reconstructed SDK HTTP routine;
// complete credited functions verified against the original. Reconstructed HTTP
// CRLF line reader; complete function verified against the original. Unmatched
// proxy CONNECT request reconstruction. Bounded behavior checks do not award
// exact-match credit; option field names are provisional.
#include <stddef.h>
#include <stdint.h>
template <unsigned Key> struct SimpleLibraryBinding {
  static void *Allocate(uint32_t, uint32_t, uint32_t, uint32_t) noexcept;
  static void Free(void *) noexcept;
};
template <class T, unsigned Key> struct SimpleLibraryAllocator {
  using value_type = T;
  template <class U> struct rebind {
    using other = SimpleLibraryAllocator<U, Key>;
  };
  SimpleLibraryAllocator() noexcept {}
  template <class U>
  SimpleLibraryAllocator(const SimpleLibraryAllocator<U, Key> &) noexcept {}
  T *allocate(size_t count) {
    return static_cast<T *>(SimpleLibraryBinding<Key>::Allocate(
        uint32_t(count * sizeof(T)), 4, 0, 0x40c00000));
  }
  void deallocate(T *ptr, size_t) noexcept {
    SimpleLibraryBinding<Key>::Free(ptr);
  }
};
template <class T, class U, unsigned Key>
bool operator==(const SimpleLibraryAllocator<T, Key> &,
                const SimpleLibraryAllocator<U, Key> &) {
  return true;
}
template <class T, class U, unsigned Key>
bool operator!=(const SimpleLibraryAllocator<T, Key> &,
                const SimpleLibraryAllocator<U, Key> &) {
  return false;
}

#include <string>

#include <new>
extern "C" void *EngineAllocate(size_t, unsigned, unsigned, unsigned);
extern "C" void EngineFree(void *);

using Temporary = std::basic_string<char, std::char_traits<char>,
                                    SimpleLibraryAllocator<char, 1>>;
using String = std::basic_string<char, std::char_traits<char>,
                                 SimpleLibraryAllocator<char, 2>>;
struct Ref {
  virtual ~Ref();
  virtual void Dispose();
  uint32_t references, padding;
  Ref() : references(0) {}
  bool TryRef(unsigned &expected, unsigned desired) {
    return __atomic_compare_exchange_n(&references, &expected, desired, false,
                                       __ATOMIC_ACQ_REL, __ATOMIC_ACQUIRE);
  }
};
struct Object : Ref {
  String text;
  Object() {}
  Object(const Temporary &s) : text(s) {}
};

struct Text;
extern "C" void ConstructSizedText(Text *, const char *, unsigned);
struct SizedTag {};
extern "C" void ConstructSdkText(Text *, const char *);
struct Text {
  Object *value;

  Text() {
    Object *p = new (EngineAllocate(sizeof(Object), 4, 0, 0x40c00000)) Object();
    value = nullptr;
    if (p) {
      __atomic_fetch_add(&p->references, 1, __ATOMIC_ACQ_REL);
      __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
    } else
      __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
  }
  Text &operator=(const Text &o) {
    if (o.get() != get()) {
      Object *p;
      unsigned count = 0;
      for (;;) {
        p = o.get();
        if (p)
          count = __atomic_load_n(&p->references, __ATOMIC_ACQUIRE);
        if (p != o.get())
          continue;
        if (!p || p->TryRef(count, count + 1))
          break;
      }
      Object *old = __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
      if (old && __atomic_sub_fetch(&old->references, 1, __ATOMIC_ACQ_REL) == 0)
        old->Dispose();
    }
    return *this;
  }

  Text(const Text &o) : value(nullptr) {
    Object *p;
    unsigned count = 0;
    for (;;) {
      p = o.get();
      if (p)
        count = __atomic_load_n(&p->references, __ATOMIC_ACQUIRE);
      if (p != o.get())
        continue;
      if (!p || p->TryRef(count, count + 1))
        break;
    }
    __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
  }
  Text(const char *s) { ConstructSdkText(this, s); }
  Text(SizedTag, const char *p, unsigned n) { ConstructSizedText(this, p, n); }
  Object *get() const { return __atomic_load_n(&value, __ATOMIC_ACQUIRE); }
  ~Text() {
    Object *p = __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
    if (p && __atomic_sub_fetch(&p->references, 1, __ATOMIC_ACQ_REL) == 0)
      p->Dispose();
  }
};

struct Result {
  int code;
  Text message;
  void *context;
  int flags;
  Result(int c, const Text &t)
      : code(c), message(t), context(nullptr), flags(-1) {}
};
extern "C" Result ResultFromStatus(int status) {
  switch (status) {
  case 200:
    return Result(0, Text("HTTP OK"));
  case 0xc9:
    return Result(0, Text("HTTP Created"));
  case 0xca:
    return Result(0, Text("HTTP Accepted"));
  case 0xcb:
    return Result(0x59, Text("Non Authoritative Information"));
  case 0xcc:
    return Result(0x5a, Text("No Content"));
  case 0xcd:
    return Result(0x5b, Text("Reset Content"));
  case 0xce:
    return Result(0x5c, Text("Partial Content"));
  case 0xe2:
    return Result(0x5d, Text("IM Used"));
  case 300:
    return Result(0x5e, Text("Multiple Choices"));
  case 0x12d:
    return Result(0x5f, Text("Moved Permanently"));
  case 0x12e:
    return Result(0x60, Text("Found"));
  case 0x12f:
    return Result(0x61, Text("See Other"));
  case 0x130:
    return Result(0x62, Text("Not Modified"));
  case 0x131:
    return Result(99, Text("Use Proxy"));
  case 0x132:
    return Result(100, Text("Switch Proxy"));
  case 0x133:
    return Result(0x65, Text("Temporary Redirect"));
  case 0x134:
    return Result(0x66, Text("Permanent Redirect"));
  case 400:
    return Result(0x67, Text("Bad Request"));
  case 0x191:
    return Result(0x68, Text("Unauthorized"));
  case 0x192:
    return Result(0x69, Text("Payment Required"));
  case 0x193:
    return Result(0x6a, Text("Forbidden"));
  case 0x194:
    return Result(0x6b, Text("Not Found"));
  case 0x195:
    return Result(0x6c, Text("Method Not Allowed"));
  case 0x196:
    return Result(0x6d, Text("Not Acceptable"));
  case 0x197:
    return Result(0x6d, Text("Not Acceptable"));
  case 0x198:
    return Result(0x6e, Text("Proxy Authentication Required"));
  case 0x199:
    return Result(0x70, Text("Conflict"));
  case 0x19a:
    return Result(0x71, Text("Gone"));
  case 0x19b:
    return Result(0x72, Text("Length Required"));
  case 0x19c:
    return Result(0x73, Text("Precondition Failed"));
  case 0x19d:
    return Result(0x74, Text("Payload Too Large"));
  case 0x19e:
    return Result(0x75, Text("Url Too Long"));
  case 0x19f:
    return Result(0x76, Text("Unsupported Media Type"));
  case 0x1a0:
    return Result(0x77, Text("Range Not Satisfiable"));
  case 0x1a1:
    return Result(0x78, Text("Expectations Failed"));
  case 0x1a5:
    return Result(0x79, Text("Misdirected Request"));
  case 0x1aa:
    return Result(0x7b, Text("Upgrade Required"));
  case 0x1ac:
    return Result(0x7c, Text("Precondition Required"));
  case 0x1ad:
    return Result(0x7d, Text("Too Many Requests"));
  case 0x1af:
    return Result(0x7e, Text("Request Header Fields Too Large"));
  case 0x1bc:
    return Result(0x7f, Text("No Response"));
  case 0x1c3:
    return Result(0x80, Text("Unavailable For Legal Reasons"));
  case 0x1ef:
    return Result(0x81, Text("SSL Certificate Error"));
  case 0x1f0:
    return Result(0x82, Text("SSL Certificate Required"));
  case 0x1f1:
    return Result(0x83, Text("HTTP Request Sent To HTTPS Port"));
  case 499:
    return Result(0x84, Text("Client Closed Request"));
  case 500:
    return Result(0x85, Text("Internal Server Error"));
  case 0x1f5:
    return Result(0x86, Text("Not Implemented"));
  case 0x1f6:
    return Result(0x87, Text("Bad Gateway"));
  case 0x1f7:
    return Result(0x88, Text("Service Unavailable"));
  case 0x1f8:
    return Result(0x89, Text("Gateway Timeout"));
  case 0x1f9:
    return Result(0x8a, Text("Version Not Supported"));
  case 0x1fa:
    return Result(0x8b, Text("Variant Also Negotiates"));
  case 0x1fe:
    return Result(0x8c, Text("Not Extended"));
  case 0x1ff:
    return Result(0x8d, Text("Network Authentication Required"));
  default:
    return Result(0x8e, Text("HTTP failure"));
  }
}
