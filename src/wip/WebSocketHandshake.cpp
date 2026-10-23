// Unmatched WebSocketHandshakeRequest constructor. Bounded behavior checks do
// not award exact credit. SDK string constructors. Object corresponds to
// ubiservices::String::InternalContent through RTTI. Allocator names and their
// distinction are provisional; distinct string allocator views select the
// matching converting constructor.
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
  Text(const char *s) { ConstructSdkText(this, s); }
  Object *get() const { return __atomic_load_n(&value, __ATOMIC_ACQUIRE); }
  ~Text() {
    Object *p = __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
    if (p && __atomic_sub_fetch(&p->references, 1, __ATOMIC_ACQ_REL) == 0)
      p->Dispose();
  }
};
struct Empty {};
struct KeyTuple {
  const Text *key;
};
struct Node {
  unsigned char prefix[40];
  Text value;
};
extern "C" __attribute__((visibility("hidden"))) const Empty Piecewise;
extern "C" Node *LookupHeader(void *, const Text &, const Empty &, KeyTuple &&,
                              Empty &&);
extern "C" void DetachText(Text *, bool);
extern "C" void InsertText(String *, const char *, const char *, const char *);
struct Headers {
  void *unused;
  unsigned char tree[24];
};
struct TextList {
  Text *begin;
  Text *end;
  Text *capacity;
};
static Text &Lookup(Headers *self, const Text &key) {
  return LookupHeader(self->tree, key, Piecewise, KeyTuple{&key}, Empty{})
      ->value;
}
static void Append(Text &d, const char *data, size_t n) {
  DetachText(&d, true);
  InsertText(&d.get()->text, d.get()->text.end().base(), data, data + n);
}

extern "C" Text FormatText(const char *, ...);
extern "C" Text ConcatText(const Text &, const char *);
extern "C" Text GenerateKey();
extern "C" Text MakeWebSocketAccept(const Text &);
extern "C" void AppendWebSocketHeaders(Headers *, const TextList *,
                                       const char *);
struct Environment {
  unsigned char unknown[16];
  unsigned kind;
};
extern "C" Environment *CurrentEnvironment;
struct Options {
  void *unknown;
  TextList protocols;
  TextList extensions;
  unsigned version;
};
struct HttpRequest {
  virtual ~HttpRequest();
  unsigned char unknown[8];
  Headers headers;
  unsigned char rest[104];
  HttpRequest(const void *, const void *);
};
struct Handshake : HttpRequest {
  Text first;
  unsigned short flags;
  Text expected;
  virtual ~Handshake();
  Handshake(const void *, const void *, const Options *);
};
extern "C" void SetupHandshake(Handshake *, const void *);
Handshake::Handshake(const void *url, const void *config,
                     const Options *options)
    : HttpRequest(url, config), first(), flags(0), expected() {
  unsigned env = CurrentEnvironment->kind;
  {
    Text key("User-Agent");
    if (env - 1u < 2)
      Lookup(&headers, key) = ConcatText(
          FormatText("UbiServices_SDK_2020.Release.7_%s64", "SWITCH"),
          "_beta_cn");
    else
      Lookup(&headers, key) =
          FormatText("UbiServices_SDK_2020.Release.7_%s64", "SWITCH");
  }
  {
    Text key("Upgrade");
    Lookup(&headers, key) = Text("websocket");
  }
  {
    Text key("Connection");
    Lookup(&headers, key) = Text("Upgrade");
  }
  {
    Text key("Sec-WebSocket-Key");
    Lookup(&headers, key) = GenerateKey();
  }
  {
    Text key("Sec-WebSocket-Version");
    Lookup(&headers, key) = FormatText("%u", options->version);
  }
  AppendWebSocketHeaders(&headers, &options->protocols,
                         "Sec-WebSocket-Protocol");
  AppendWebSocketHeaders(&headers, &options->extensions,
                         "Sec-WebSocket-Extensions");
  {
    Text key("Sec-WebSocket-Key");
    expected = MakeWebSocketAccept(Lookup(&headers, key));
  }
  SetupHandshake(this, url);
}
