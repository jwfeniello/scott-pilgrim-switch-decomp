// Public libc++ templates over provisional allocator and element ABI views.
#include <stddef.h>
#include <stdint.h>
template <unsigned Key> struct LibraryBinding {

  static void *Allocate(size_t, size_t, uint32_t, void *, const char *,
                        uint32_t);
  static void Free(void *, const char *, uint32_t) noexcept;
};
template <class T, unsigned Key> struct GameAllocationContext {
  static char context;
};
template <class T, unsigned Key, uint32_t Flags = 0x41201000>
struct LibraryAllocator {
  using value_type = T;
  template <class U> struct rebind {
    using other = LibraryAllocator<U, Key, Flags>;
  };
  LibraryAllocator() noexcept {}
  template <class U>
  LibraryAllocator(const LibraryAllocator<U, Key, Flags> &) noexcept {}
  T *allocate(size_t count) {
    return static_cast<T *>(LibraryBinding<Key>::Allocate(
        sizeof(T) * count, alignof(T), Flags,
        &GameAllocationContext<T, Key>::context, "", 0));
  }
  void deallocate(T *value, size_t) noexcept {
    LibraryBinding<Key>::Free(value, "", 0);
  }
};
template <class T, class U, unsigned Key, uint32_t Flags>
bool operator==(const LibraryAllocator<T, Key, Flags> &,
                const LibraryAllocator<U, Key, Flags> &) {
  return true;
}
template <class T, class U, unsigned Key, uint32_t Flags>
bool operator!=(const LibraryAllocator<T, Key, Flags> &,
                const LibraryAllocator<U, Key, Flags> &) {
  return false;
}

#include <cstring>
#include <string>
#include <typeinfo>
#include <vector>
struct TypeInfo {
  void *table;
  char *name;
};
template <class T> struct StringType {
  static TypeInfo type;
};
template <class T> struct StringAllocator {
  using value_type = T;
  template <class U> struct rebind {
    using other = StringAllocator<U>;
  };
  StringAllocator() {}
  template <class U> StringAllocator(const StringAllocator<U> &) {}
  T *allocate(size_t n) {
    return static_cast<T *>(LibraryBinding<1>::Allocate(
        n * sizeof(T), alignof(T), 0x41201007,
        const_cast<char *>(typeid(T).name()), "", 0));
  }
  void deallocate(T *p, size_t) { LibraryBinding<1>::Free(p, "", 0); }
};

template <class T, class U>
bool operator==(const StringAllocator<T> &, const StringAllocator<U> &) {
  return true;
}
template <class T, class U>
bool operator!=(const StringAllocator<T> &, const StringAllocator<U> &) {
  return false;
}
template class std::basic_string<char, std::char_traits<char>,
                                 StringAllocator<char>>;
using String =
    std::basic_string<char, std::char_traits<char>, StringAllocator<char>>;
struct Record1 {
  String first;
  unsigned flags;
  Record1(const Record1 &);
};
Record1::Record1(const Record1 &o) : first(o.first), flags(o.flags) {}
struct Record2 {
  String first, second;
  unsigned flags;
  Record2(const Record2 &);
};
Record2::Record2(const Record2 &o)
    : first(o.first), second(o.second), flags(o.flags) {}
struct Pair {
  String first, second;
  Pair(const Pair &);
};
Pair::Pair(const Pair &o) : first(o.first), second(o.second) {}
