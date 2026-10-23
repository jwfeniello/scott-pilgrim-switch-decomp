// SDK string constructors. Object corresponds to
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
struct Text {
  Object *value;
};
extern "C" void ConstructSdkText(Text *self, const char *s) {
  void *storage = EngineAllocate(sizeof(Object), 4, 0, 0x40c00000);
  const Temporary temporary = s ? Temporary(s) : Temporary();
  Object *p = new (storage) Object(temporary);
  self->value = nullptr;
  __atomic_fetch_add(&p->references, 1, __ATOMIC_ACQ_REL);
  __atomic_exchange_n(&self->value, p, __ATOMIC_ACQ_REL);
}

extern "C" void ConstructSizedSdkText(Text *self, const char *s, size_t count) {
  void *storage = EngineAllocate(sizeof(Object), 4, 0, 0x40c00000);
  const Temporary temporary = s ? Temporary(s, count) : Temporary();
  Object *p = new (storage) Object(temporary);
  self->value = nullptr;
  __atomic_fetch_add(&p->references, 1, __ATOMIC_ACQ_REL);
  __atomic_exchange_n(&self->value, p, __ATOMIC_ACQ_REL);
}

using Wide = std::basic_string<wchar_t, std::char_traits<wchar_t>,
                               SimpleLibraryAllocator<wchar_t, 1>>;
extern "C" void ConvertWide(const Wide &, Temporary &);
static void Install(Text *self, Object *p) {
  self->value = nullptr;
  if (p) {
    __atomic_fetch_add(&p->references, 1, __ATOMIC_ACQ_REL);
    __atomic_exchange_n(&self->value, p, __ATOMIC_ACQ_REL);
  } else
    __atomic_exchange_n(&self->value, nullptr, __ATOMIC_ACQ_REL);
}
static void FromWide(Text *self, void *storage, Wide wide) {
  Temporary converted;
  ConvertWide(wide, converted);
  Install(self, new (storage) Object(converted));
}
extern "C" void ConstructWideSdkText(Text *self, const wchar_t *s) {
  void *storage = EngineAllocate(sizeof(Object), 4, 0, 0x40c00000);
  if (s) {
    FromWide(self, storage, Wide(s));
  } else
    Install(self, new (storage) Object());
}

extern "C" void ConstructSizedWideSdkText(Text *self, const wchar_t *s,
                                          size_t count) {
  void *storage = EngineAllocate(sizeof(Object), 4, 0, 0x40c00000);
  if (s) {
    FromWide(self, storage, Wide(s, count));
  } else
    Install(self, new (storage) Object());
}
