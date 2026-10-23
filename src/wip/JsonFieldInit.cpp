// Unmatched ABI reconstruction of 0x45720 (368 bytes).
// One allocation-size instruction differs; no exact-match credit.
#include <new>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
extern "C" void *EngineAllocate(size_t, unsigned, unsigned, unsigned);
struct Value;
struct JsonRoot {
  virtual ~JsonRoot();
  virtual void Dispose();
  uint32_t references, padding;
  bool TryRef(uint32_t &expected, uint32_t desired) {
    return __atomic_compare_exchange_n(&references, &expected, desired, false,
                                       __ATOMIC_ACQ_REL, __ATOMIC_ACQUIRE);
  }
};
extern "C" {
extern void *JsonViewTable[];
void EngineFree(void *);
}
struct Owner {
  JsonRoot *value;
  JsonRoot *get() const { return __atomic_load_n(&value, __ATOMIC_ACQUIRE); }
  Owner(const Owner &other) : value(nullptr) {
    uint32_t count = 0;
    JsonRoot *p;
    for (;;) {
      p = other.get();
      if (p)
        count = __atomic_load_n(&p->references, __ATOMIC_ACQUIRE);
      if (p != other.get())
        continue;
      if (!p)
        break;
      if (p->TryRef(count, count + 1))
        break;
    }
    __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
  }
  ~Owner() {
    JsonRoot *p = __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
    if (p && __atomic_sub_fetch(&p->references, 1, __ATOMIC_ACQ_REL) == 0)
      p->Dispose();
  }
};
struct JsonView;
struct JsonOwner : Owner {
  JsonOwner(const JsonView &);
  const char *name;
  Value *cursor;
  JsonOwner(const JsonOwner &other)
      : Owner(other), name(other.name), cursor(other.cursor) {}
  JsonOwner(const Owner &root, const char *n, Value *v)
      : Owner(root), name(n), cursor(v) {}
};
struct JsonView {
  void **table;
  uint32_t flags, padding;
  JsonOwner *owner;
  JsonView(JsonOwner value) : table(JsonViewTable + 2), flags(0) {
    owner = new (EngineAllocate(24, 4, 0, 0x40c00000)) JsonOwner(value);
  }
  ~JsonView() {
    JsonOwner *p = owner;
    owner = nullptr;
    table = JsonViewTable + 2;
    if (p) {
      p->~JsonOwner();
      EngineFree(p);
    }
  }
};
JsonOwner::JsonOwner(const JsonView &other)
    : Owner(*other.owner), name(other.owner->name),
      cursor(other.owner->cursor) {}
struct JsonDocument {
  void **table;
  void **viewTable;
  uint64_t unknown;
  JsonOwner *owner;
  Value *parent;
  char *allocatedName;
  char inlineName[16];
};
static char *AllocateChars(size_t count) {
  if (!count)
    return nullptr;
  uint32_t *block = static_cast<uint32_t *>(
      EngineAllocate(uint32_t(count + 8), 4, 0, 0x40c00000));
  block[0] = count;
  block[1] = 8;
  char *data = reinterpret_cast<char *>(block + 2);
  for (uint32_t i = 0; size_t(i) < size_t(count); ++i)
    new (data + i) char;
  return data;
}
extern "C" void InitSdkJsonField(JsonDocument *self, const JsonView &other,
                                 const char *name, Value *parent) {
  *reinterpret_cast<uint32_t *>(&self->unknown) = 0;
  self->viewTable = JsonViewTable + 2;
  self->owner = new (EngineAllocate(24, 4, 0, 0x40c00000)) JsonOwner(other);
  self->parent = parent;
  self->allocatedName = nullptr;
  size_t size = strlen(name) + 1;
  self->allocatedName = nullptr;
  if (size > 16) {
    self->allocatedName = AllocateChars(uint32_t(size));
    memcpy(self->allocatedName, name, size);
    self->inlineName[0] = 0;
  } else
    memcpy(self->inlineName, name, size);
}
