// Reconstructed SDK networking routines; complete credited functions verified
// against the original. Reconstructed SDK HTTP routine; complete credited
// functions verified against the original. Reconstructed HTTP CRLF line reader;
// complete function verified against the original. Unmatched proxy CONNECT
// request reconstruction. Bounded behavior checks do not award exact-match
// credit; option field names are provisional.
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

struct Buffer : Ref {
  unsigned char *data;
  unsigned capacity, size;
};
struct Owner {
  Buffer *value;
  Buffer *get() const { return __atomic_load_n(&value, __ATOMIC_ACQUIRE); }
  Owner() : value(nullptr) {}
  Owner(Buffer *p) : value(nullptr) {
    if (p) {
      __atomic_fetch_add(&p->references, 1, __ATOMIC_ACQ_REL);
      __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
    } else
      __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
  }
  Owner(const Owner &o) : value(nullptr) {
    unsigned count = 0;
    Buffer *p;
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
  ~Owner() {
    Buffer *p = __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
    if (p && __atomic_sub_fetch(&p->references, 1, __ATOMIC_ACQ_REL) == 0)
      p->Dispose();
  }
  Owner &operator=(const Owner &o) {
    if (o.get() != get()) {
      unsigned count = 0;
      Buffer *p;
      for (;;) {
        p = o.get();
        if (p)
          count = __atomic_load_n(&p->references, __ATOMIC_ACQUIRE);
        if (p != o.get())
          continue;
        if (!p || p->TryRef(count, count + 1))
          break;
      }
      Buffer *old = __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
      if (old && __atomic_sub_fetch(&old->references, 1, __ATOMIC_ACQ_REL) == 0)
        old->Dispose();
    }
    return *this;
  }
};

extern "C" void ConstructSizedText(Text *, const char *, unsigned);
static unsigned FindLine(Owner owner, unsigned start) {
  const unsigned char *data = owner.get()->data;
  for (unsigned i = start; i < owner.get()->size; ++i) {
    if (size_t(i) + 2 > owner.get()->size)
      break;
    if (data[i] == '\r' && data[i + 1] == '\n')
      return i;
  }
  return unsigned(-1);
}
static Text Extract(Owner owner, unsigned offset, unsigned end) {
  if (end == offset)
    return Text();
  return Text(SizedTag{},
              reinterpret_cast<const char *>(owner.get()->data) + offset,
              end - offset);
}

#include <cstring>
#include <map>
#include <utility>
extern "C" int CompareText(const Text &, const Text &);
struct Less {
  bool operator()(const Text &a, const Text &b) const {
    return CompareText(a, b) < 0;
  }
};
using Tree = std::map<Text, Text, Less,
                      SimpleLibraryAllocator<std::pair<const Text, Text>, 1>>;
struct Headers {
  void *reserved;
  Tree tree;
  Text raw;
  Headers() {}
  Headers &operator=(Headers &&o) {
    tree = std::move(o.tree);
    raw = o.raw;
    return *this;
  }
};

struct Response {
  void *context;
  Text line;
  Headers headers;
  Text body;
};

extern "C" int ReadStatusCode(const Response *);
extern "C" bool IsRedirect(const Response *self) {
  if (unsigned(ReadStatusCode(self) - 300) <= 7) {
    auto found = self->headers.tree.find(Text("location"));
    if (found != self->headers.tree.end())
      return true;
  }
  return false;
}
