// RTTI-backed stream types with a reconstructed empty allocator ABI.
#pragma once
#include <sstream>
#include <stddef.h>
#include <stdint.h>
extern "C" void *UbiStreamAllocate(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void UbiStreamFree(void *);
namespace ubiservices {
template <class T> struct ContainerAllocator {
  using value_type = T;
  template <class U> struct rebind {
    using other = ContainerAllocator<U>;
  };
  ContainerAllocator() noexcept {}
  template <class U>
  ContainerAllocator(const ContainerAllocator<U> &) noexcept {}
  T *allocate(size_t n) {
    return static_cast<T *>(
        UbiStreamAllocate(uint32_t(n * sizeof(T)), 4, 0, 0x40c00000));
  }
  void deallocate(T *p, size_t) noexcept { UbiStreamFree(p); }
};
template <class T, class U>
bool operator==(const ContainerAllocator<T> &, const ContainerAllocator<U> &) {
  return true;
}
template <class T, class U>
bool operator!=(const ContainerAllocator<T> &, const ContainerAllocator<U> &) {
  return false;
}
template <class C>
struct BasicStringStream
    : std::basic_stringstream<C, std::char_traits<C>, ContainerAllocator<C>> {
  BasicStringStream() {
    this->setf(std::ios_base::boolalpha | std::ios_base::showbase);
  }
  ~BasicStringStream() override {}
};
} // namespace ubiservices
