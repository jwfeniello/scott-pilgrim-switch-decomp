// Reconstructed WebSocket payload consumption; complete function verified
// against the original.
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

extern "C" uint16_t NetworkToHost16(uint16_t);
extern "C"
    __attribute__((visibility("hidden"))) unsigned char EndianInitialized;
static void SetOpcode(Owner destination, unsigned opcode) {
  destination.get()->flags = opcode;
}
static void AppendData(Owner destination, const void *data, unsigned n) {
  Object *d = destination.get();
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
static void ConsumeBytes(Owner input, unsigned n) {
  Object *d = input.get();
  if (d->size < n)
    d->size = 0;
  else {
    d->size -= n;
    memmove(d->data, d->data + n, d->size);
  }
}
static size_t PayloadLength(Header *self) {
  unsigned char tag = self->get()->data[1] & 127;
  size_t n = tag;
  if (n <= 125)
    return n;
  if (tag == 126) {
    uint16_t raw;
    memcpy(&raw, self->get()->data + 2, 2);
    return NetworkToHost16(raw);
  }
  if (tag == 127) {
    uint64_t raw;
    memcpy(&raw, self->get()->data + 2, 8);
    if (!(EndianInitialized & 1))
      EndianInitialized = 1;
    return __builtin_bswap64(raw);
  }
  return 0;
}
extern "C" void ConsumeFrame(Header *self, const Owner *destination) {
  size_t n = PayloadLength(self);
  if (self->get()->data[0] & 15)
    SetOpcode(*destination, self->get()->data[0] & 15);
  AppendData(*destination, self->get()->data + self->length, n);
  ConsumeBytes(*self, self->length + n);
  self->length = 0;
}
