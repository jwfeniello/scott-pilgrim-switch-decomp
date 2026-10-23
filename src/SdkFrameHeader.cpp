// Reconstructed shared-buffer frame header reader. Layout/type names
// provisional.
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
};
struct Owner {
  Object *value;
  Object *get() const { return __atomic_load_n(&value, __ATOMIC_ACQUIRE); }
  Owner(Object *p) : value(nullptr) {
    if (p) {
      __atomic_fetch_add(&p->references, 1, __ATOMIC_ACQ_REL);
      __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
    } else
      __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
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
extern "C" bool ReadFrameHeader(Header *self, const Owner *input) {
  if (!input->get() || input->get()->size < 2)
    return false;
  if (self->length)
    return true;
  *static_cast<Owner *>(self) = *input;
  self->length = 2;
  if ((self->get()->data[1] & 127) == 127)
    self->length += 8;
  else if ((self->get()->data[1] & 127) >= 126)
    self->length += 2;
  if (self->get()->data[1] & 128)
    self->length += 4;
  return true;
}
