// Reconstructed handshake header-list helper. Names describe recovered ABI
// views. SDK string constructors. Object corresponds to
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
extern "C" void AppendWebSocketHeaders(Headers *self, const TextList *items,
                                       const char *name) {
  auto it = items->begin;
  while (items->end != items->begin) {
    {
      Text key(name);
      Text &d = Lookup(self, key);
      const char *p = it->get()->text.data();
      size_t n = it->get()->text.size();
      Append(d, p, n);
    }
    ++it;
    if (it == items->end)
      break;
    {
      Text key(name);
      Append(Lookup(self, key), ",", 1);
    }
  }
}
