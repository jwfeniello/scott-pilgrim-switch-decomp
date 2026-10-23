// Unmatched proxy CONNECT request reconstruction. Bounded behavior checks
// do not award exact-match credit; option field names are provisional.
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
  Object *get() const { return __atomic_load_n(&value, __ATOMIC_ACQUIRE); }
  ~Text() {
    Object *p = __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
    if (p && __atomic_sub_fetch(&p->references, 1, __ATOMIC_ACQ_REL) == 0)
      p->Dispose();
  }
};

#include <stdlib.h>
struct Range {
  size_t offset, count;
  bool valid() const { return offset != size_t(-1) && count != size_t(-1); }
};
extern "C" void ParseUri(struct Uri *);
struct Uri {
  void *reserved;
  Text source;
  Range fields[9];
  Uri(const Text &s) : source(s), fields{} { ParseUri(this); }
};
extern "C" Text SliceText(const Text *, size_t, size_t);
extern "C" void DetachText(Text *, bool);
extern "C" void InsertText(String *, const char *, const char *, const char *);
static void Append(Text &d, const char *p, size_t n) {
  DetachText(&d, true);
  InsertText(&d.get()->text, d.get()->text.end().base(), p, p + n);
}

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

#include "UbisoftStringStream.h"

extern "C" Text BuildUriTail(const Uri *);
extern "C" int ReadUriPort(const Uri *);
extern "C" size_t FindSdkText(const Text &, const char *);
struct Handshake {
  void *reserved;
  Text url;
  Headers headers;
  unsigned char rest[104];
  Text target;
  unsigned short port;
  Text expected;
};
static Text Field(const Uri &u, unsigned index) {
  return u.fields[index].valid() ? SliceText(&u.source, u.fields[index].offset,
                                             u.fields[index].count)
                                 : Text();
}
static unsigned short Port(const Text &text) {
  Uri u(text);
  unsigned short port = ReadUriPort(&u);
  if (!port) {
    Text protocol =
        u.fields[0].valid()
            ? SliceText(&u.source, u.fields[0].offset, u.fields[0].count)
            : Text("http");
    port = protocol.get()->text == "wss" ? 443 : 80;
  }
  return port;
}

#include <vector>
using Bytes =
    std::vector<unsigned char, SimpleLibraryAllocator<unsigned char, 1>>;
extern "C" Text FormatText(const char *, ...);
extern "C" Temporary EncodeBase64(const Bytes &);
struct Environment {
  unsigned char unknown[16];
  unsigned kind;
};
extern "C" Environment *CurrentEnvironment;
struct ProxyOptions {
  void *reserved;
  Text field8;
  unsigned char unknown16[8];
  Text field24;
  Text field32;
};
static Text ProxyAuth(const ProxyOptions &p) {
  Text credentials = FormatText("%s:%s", p.field8.get()->text.c_str(),
                                p.field32.get()->text.c_str());
  Bytes bytes;
  const char *begin = credentials.get()->text.data();
  bytes.assign(begin, begin + credentials.get()->text.size());
  return FormatText("Proxy-Authorization: Basic %s",
                    EncodeBase64(bytes).c_str());
}
extern "C" Text BuildProxyConnect(const Handshake *self,
                                  const ProxyOptions *proxy) {
  Uri uri(self->url);
  ubiservices::BasicStringStream<char> stream;
  stream << "CONNECT " << Field(uri, 3).get()->text.c_str() << ":" << self->port
         << " " << "HTTP/1.1" << "\r\n";
  if (CurrentEnvironment->kind == 2 &&
      FindSdkText(Field(uri, 3), "gaap.ubiservices.ubi.com") != size_t(-1))
    stream << "Host: public-ws-ubiservices.ubi.com" << "\r\n";
  else
    stream << "Host: " << Field(uri, 3).get()->text.c_str() << "\r\n";
  stream << "Proxy-Connection: keep-alive" << "\r\n";
  stream << "Connection: keep-alive" << "\r\n";
  if (!proxy->field24.get()->text.empty()) {
    Text auth = ProxyAuth(*proxy);
    stream << auth.get()->text.c_str() << "\r\n";
  }
  stream << "\r\n";
  return Text(stream.str().c_str());
}
