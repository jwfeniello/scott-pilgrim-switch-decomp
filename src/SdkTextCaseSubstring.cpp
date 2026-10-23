// SDK uppercase and substring helpers. Names and allocator views are
// provisional. Reconstructed SDK text-buffer flush/growth helper; descriptive
// names are provisional; allocator declarations preserve the matching library
// ABI.
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
};

#include <ctype.h>
using Output = std::basic_string<char, std::char_traits<char>,
                                 SimpleLibraryAllocator<char, 3>>;
static Object *Get(const Text *s) {
  return __atomic_load_n(&s->value, __ATOMIC_ACQUIRE);
}
extern "C" Output UpperSdkText(const Text *self) {
  Output result(Get(self)->text);
  for (auto it = result.begin(); it != result.end(); ++it)
    *it = toupper(static_cast<unsigned char>(*it));
  return result;
}

extern "C" Output SubstringSdkText(const Text *self, size_t position,
                                   size_t count) {
  return Output(Get(self)->text.substr(position, count).c_str());
}
