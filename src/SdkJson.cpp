// Reconstructed SDK JSON operations using public RapidJSON templates.
// ABI view names are provisional; only manifest-listed complete functions are
// matched. Pool reallocation remains an external dependency.
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <new>
extern "C" void EngineFree(void *);
extern "C" void *EngineAllocate(size_t, unsigned, unsigned, unsigned);
struct Chunk {
  size_t capacity, size;
  Chunk *next;
};
struct Pool {
  static const bool kNeedFree = false;
  Chunk *head;
  size_t capacity;
  void *user;
  unsigned reserved;
  Pool() : head(0), capacity(2048), user(0) {}
  ~Pool() {
    while (head) {
      if (head == user) {
        head->size = 0;
        break;
      }
      Chunk *next = head->next;
      EngineFree(head);
      head = next;
    }
  }
  void *Malloc(size_t size) {
    if (!size)
      return 0;
    size = (size + 7) & ~size_t(7);
    if (!head || head->size + size > head->capacity) {
      size_t cap = capacity > size ? capacity : size;
      if (!(cap + sizeof(Chunk)))
        return 0;
      Chunk *chunk = static_cast<Chunk *>(
          EngineAllocate(cap + sizeof(Chunk), 4, 0, 0x40c00000));
      if (!chunk)
        return 0;
      chunk->capacity = cap;
      chunk->size = 0;
      chunk->next = head;
      head = chunk;
    }
    void *result = reinterpret_cast<char *>(head + 1) + head->size;
    head->size += size;
    return result;
  }
  void *Realloc(void *, size_t, size_t);
  static void Free(void *);
};
#define RAPIDJSON_48BITPOINTER_OPTIMIZATION 0
#define RAPIDJSON_ASSERT(x) ((void)0)
#include <rapidjson/document.h>
using Doc = rapidjson::GenericDocument<rapidjson::UTF8<>, Pool, Pool>;

#include "UbisoftStringStream.h"
using Value = rapidjson::GenericValue<rapidjson::UTF8<>, Pool>;
struct Ref {
  virtual ~Ref();
  virtual void Dispose();
  unsigned references, padding;
};
struct StringObject : Ref {
  std::basic_string<char, std::char_traits<char>,
                    ubiservices::ContainerAllocator<char>>
      text;
};
struct Text {
  StringObject *value;
  const char *c_str() const {
    return __atomic_load_n(&value, __ATOMIC_ACQUIRE)->text.c_str();
  }
};
struct JsonRoot : Ref {
  Doc *document;
};
struct JsonOwner {
  JsonRoot *value;
  uint64_t unknown;
  Value *cursor;
  JsonRoot *get() const { return __atomic_load_n(&value, __ATOMIC_ACQUIRE); }
};
struct JsonDocument {
  void **table;
  void **viewTable;
  uint64_t unknown;
  JsonOwner *owner;
  Value *parent;
  const char *allocatedName;
  char inlineName[16];
  const char *name() const {
    return inlineName[0] ? inlineName : (allocatedName ? allocatedName : "");
  }
  Pool &allocator() const { return owner->get()->document->GetAllocator(); }
  void SetValue(const Value &);
};
struct Writer {
  void **table;
  JsonDocument *document;
};
static_assert(sizeof(Value) == 24, "JSON value ABI");
static_assert(sizeof(Doc) == 104, "JSON document ABI");
static_assert(offsetof(JsonDocument, owner) == 24, "JSON owner ABI");
static_assert(offsetof(JsonDocument, inlineName) == 48, "JSON key ABI");
extern "C" Writer *SetSdkJsonText(Writer *self, const Text *text) {
  Value value(text->c_str(),
              self->document->owner->get()->document->GetAllocator());
  self->document->SetValue(value);
  return self;
}

extern "C" void SetSdkJsonValue(JsonDocument *self, Value *value) {
  auto member = self->parent->FindMember(self->name());
  if (member != self->parent->MemberEnd()) {
    member->value = *value;
    self->owner->cursor = &member->value;
  } else {
    Value name(self->name(), self->allocator());
    self->parent->AddMember(name, *value, self->allocator());
    Value lookup(self->name(), self->allocator());
    self->owner->cursor = &(*self->parent)[lookup];
  }
}

extern "C" Writer *SetSdkJsonCString(Writer *self, const char *text) {
  Value value(text, self->document->allocator());
  self->document->SetValue(value);
  return self;
}
extern "C" Writer *SetSdkJsonInt(Writer *self, int number) {
  Value value(number);
  self->document->SetValue(value);
  return self;
}
#ifndef NO_FLOAT
extern "C" Writer *SetSdkJsonDouble(Writer *self, double number) {
  self->document->SetValue(Value(number));
  return self;
}
#endif
struct JsonView {
  void *table;
  uint64_t unknown;
  JsonOwner *owner;
};
extern "C" void AddSdkJsonMember(Writer *self, const char *key,
                                 const JsonView *other) {
  Value name(key, self->document->allocator());
  self->document->owner->cursor->AddMember(
      name, Value(*other->owner->cursor, self->document->allocator()).Move(),
      self->document->allocator());
}
#include <vector>
extern "C" void SdkStringArrayToJson(const std::vector<Text> *items,
                                     Value *value, Pool *pool) {
  value->SetArray();
  if (items->size()) {
    value->Reserve(items->size(), *pool);
    for (auto it = items->begin(); it != items->end(); ++it) {
      auto string = rapidjson::StringRef(it->c_str());
      Value text(string.s, *pool);
      value->PushBack(text, *pool);
    }
  }
}
