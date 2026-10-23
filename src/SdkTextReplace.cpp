// Reconstructed SDK first-occurrence string replacement. Names are descriptive.
// Search bounds and empty-needle behavior preserve the original function.
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
};

#include <cstring>
using Output = std::basic_string<char, std::char_traits<char>,
                                 SimpleLibraryAllocator<char, 3>>;
static Object *Get(const Text *s) {
  return __atomic_load_n(&s->value, __ATOMIC_ACQUIRE);
}
extern "C" Temporary PrefixSdkText(const Text *, size_t);
static size_t Find(const Text *self, const char *needle) {
  size_t length = strlen(needle);
  if (!length)
    return size_t(-1);
  const String &s = Get(self)->text;
  for (size_t i = 0; i < s.size(); ++i) {
    if (s[i] == needle[0]) {
      size_t j = 1;
      while (j < length && i + j <= s.size() && s[i + j] == needle[j])
        ++j;
      if (j >= length)
        return i;
    }
  }
  return size_t(-1);
}
extern "C" Output ReplaceCharacters(const Text *self, const char *from,
                                    const char *to) {
  size_t pos = Find(self, from);
  if (pos == size_t(-1))
    return Output(Get(self)->text);
  else {
    Temporary prefix = PrefixSdkText(self, pos);
    size_t start = pos + strlen(from);
    Temporary suffix = Get(self)->text.size() < start
                           ? Temporary()
                           : Temporary(Get(self)->text.c_str() + start);
    Output result(prefix);
    result.append(to);
    result.append(suffix.data(), suffix.size());
    return result;
  }
}
