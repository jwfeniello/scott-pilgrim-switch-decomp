// SDK string prefix and replacement wrapper. Names are descriptive.
// ReplaceCharacters remains bound to the original external helper.
// Reconstructed SDK text-buffer flush/growth helper; descriptive names are
// provisional; allocator declarations preserve the matching library ABI.
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
  Object(const Temporary &s) : text(s) {}
};

struct Text {
  Object *value;
  Object *get() const { return __atomic_load_n(&value, __ATOMIC_ACQUIRE); }
  Text(Object *p) : value(nullptr) {
    __atomic_fetch_add(&p->references, 1, __ATOMIC_ACQ_REL);
    __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
  }
  ~Text() {
    Object *p = __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
    if (p && __atomic_sub_fetch(&p->references, 1, __ATOMIC_ACQ_REL) == 0)
      p->Dispose();
  }
};
extern "C" Temporary ReplaceCharacters(const Text *, const char *,
                                       const char *);
extern "C" Text ReplaceSdkText(const Text *self, const Text *from,
                               const Text *to) {
  Temporary replaced = ReplaceCharacters(self, from->get()->text.c_str(),
                                         to->get()->text.c_str());
  return Text(new (EngineAllocate(40, 4, 0, 0x40c00000)) Object(replaced));
}

static Object *Get(const Text *s) {
  return __atomic_load_n(&s->value, __ATOMIC_ACQUIRE);
}
extern "C" Temporary PrefixSdkText(const Text *self, size_t count) {
  if (count <= Get(self)->text.size())
    return Temporary(Get(self)->text.data(), count);
  else
    return Temporary(Get(self)->text);
}
