// Reconstructed frame builder. Shared-buffer type names are provisional.
// Repeated atomic reads and observed initialization order are intentional.
#include <cstring>
#include <new>
#include <stddef.h>
#include <stdint.h>
extern "C" void *EngineAllocate(size_t, unsigned, unsigned, unsigned);
extern "C" void EngineFree(void *);
struct Ref {
  virtual ~Ref();
  virtual void Dispose();
  int references;
  unsigned padding;
  Ref() : references(0) {}
  bool TryRef(int &expected, int desired) {
    return __atomic_compare_exchange_n(&references, &expected, desired, false,
                                       __ATOMIC_ACQ_REL, __ATOMIC_ACQUIRE);
  }
};
struct Object : Ref {
  unsigned char *data;
  unsigned capacity, size;
  unsigned char owned;
  unsigned flags;
  Object(unsigned char *p, unsigned n) : data(p), owned(0), flags(2) {
    capacity = n;
    size = n;
  }
};
struct Owner {
  Object *value;
  Object *get() const { return __atomic_load_n(&value, __ATOMIC_ACQUIRE); }
  Owner() : value(nullptr) {}
  Owner(Object *p) : value(nullptr) {
    if (p) {
      __atomic_fetch_add(&p->references, 1, __ATOMIC_ACQ_REL);
      __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
    } else
      __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
  }
  Owner(const Owner &o) : value(nullptr) {
    int count = 0;
    Object *p;
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
    Object *p = __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
    if (p && __atomic_sub_fetch(&p->references, 1, __ATOMIC_ACQ_REL) == 0)
      p->Dispose();
  }
  Owner &operator=(const Owner &o) {
    if (o.get() != get()) {
      int count = 0;
      Object *p;
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
};

struct Header : Owner {
  unsigned length;
};

static unsigned char *AllocateBytes(unsigned n) {
  if (!n)
    return nullptr;
  auto *p = static_cast<unsigned *>(EngineAllocate(n + 8, 4, 0, 0x40c00000));
  p[0] = n;
  p[1] = 8;
  return reinterpret_cast<unsigned char *>(p + 2);
}
static void Append(Owner destination, Owner source) {
  Object *d = destination.get();
  const void *data = source.get()->data;
  unsigned n = source.get()->size;
  unsigned total = d->size + n;
  if (d->capacity < total) {
    unsigned cap = total * 2;
    unsigned char *p = AllocateBytes(cap);
    if (d->data) {
      memcpy(p, d->data, d->size);
      unsigned char *old = d->data;
      d->data = nullptr;
      if (old)
        EngineFree(old - reinterpret_cast<unsigned *>(old)[-1]);
    }
    d->data = p;
    d->capacity = cap;
  }
  memcpy(d->data + d->size, data, n);
  d->size = total;
}
extern "C" uint16_t HostToNetwork16(uint16_t);
extern "C"
    __attribute__((visibility("hidden"))) unsigned char EndianInitialized;
extern "C" bool BuildFrame(Header *self, const Owner *payload, bool masked,
                           unsigned mask, bool fragmented) {
  *static_cast<Owner *>(self) = Owner();
  self->length = 0;
  size_t n = payload->get() ? payload->get()->size : 0;
  self->length = 2;
  if (n >= 126 && n < 65536)
    self->length = 4;
  else if (n >= 65536)
    self->length = 10;
  if (masked)
    self->length += 4;
  *static_cast<Owner *>(self) =
      Owner(new (EngineAllocate(40, 4, 0, 0x40c00000))
                Object(AllocateBytes(self->length), self->length));
  memset(self->get()->data, 0, self->length);
  self->get()->owned = 1;
  if (!payload->get()) {
    self->get()->data[0] &= 0xf0;
    self->get()->data[0] |= 8;
  } else {
    unsigned char opcode = payload->get()->flags;
    self->get()->data[0] &= 0xf0;
    self->get()->data[0] |= opcode;
    unsigned n = payload->get()->size;
    if (n < 126)
      self->get()->data[1] |= n;
    else if (n < 65536) {
      self->get()->data[1] |= 126;
      uint16_t v = HostToNetwork16(n);
      memcpy(self->get()->data + 2, &v, 2);
    } else {
      self->get()->data[1] |= 127;
      if (!(EndianInitialized & 1))
        EndianInitialized = 1;
      uint64_t v = __builtin_bswap64(uint64_t(n));
      memcpy(self->get()->data + 2, &v, 8);
    }
    Append(*self, *payload);
  }
  if (!fragmented)
    self->get()->data[0] |= 128;
  if (masked) {
    self->get()->data[1] |= 128;
    memcpy(self->get()->data + (self->length - 4), &mask, 4);
  }
  return true;
}
