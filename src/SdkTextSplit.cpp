// Delimiter-set split with a result limit. Independent reconstructed ABI views.
// String copy construction preserves the observed converting-copy behavior;
// this derived type and allocator identities are provisional, not recovered
// names. Reconstructed SDK text-buffer flush/growth helper; descriptive names
// are provisional; allocator declarations preserve the matching library ABI.
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
using StringBase = std::basic_string<char, std::char_traits<char>,
                                     SimpleLibraryAllocator<char, 2>>;
struct StringView {
  const StringBase &s;
  operator std::basic_string_view<char>() const { return s; }
};
struct String : StringBase {
  using StringBase::StringBase;
  String(const String &s) : StringBase(StringView{s}) {}
  template <class T> String(const T &s) : StringBase(s) {}
};
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
#include <vector>
using Strings = std::vector<String, SimpleLibraryAllocator<String, 4>>;
static Temporary Suffix(const Text *self, size_t start) {
  return Get(self)->text.size() < start
             ? Temporary()
             : Temporary(Get(self)->text.c_str() + start);
}
static_assert(sizeof(String) == 24, "string ABI");
static_assert(sizeof(Strings) == 24, "vector ABI");
extern "C" Strings SplitSdkText(const Text *self, const char *delimiters,
                                size_t limit) {
  Strings result;
  if (limit == 0 || Get(self)->text.empty())
    return result;
  if (limit == 1) {
    result.push_back(Get(self)->text);
    return result;
  }
  size_t start = Get(self)->text.find_first_not_of(delimiters);
  size_t end = Get(self)->text.find_first_of(delimiters, start);
  size_t count = 0;
  while (start != String::npos || end != String::npos) {
    if (++count >= limit) {
      result.emplace_back(Suffix(self, start));
      break;
    }
    result.emplace_back(
        end == String::npos
            ? Suffix(self, start)
            : Temporary(Get(self)->text.data() + start, end - start));
    start = Get(self)->text.find_first_not_of(delimiters, end);
    end = Get(self)->text.find_first_of(delimiters, start);
  }
  return result;
}
