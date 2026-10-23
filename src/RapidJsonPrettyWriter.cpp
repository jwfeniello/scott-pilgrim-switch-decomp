// Public RapidJSON 1.1.0 templates with the recovered allocator ABI.
// Public RapidJSON templates with a provisional allocator ABI view.
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <new>
struct Pool {
  static const bool kNeedFree = false;
  void *head;
  size_t capacity;
  void *user;
  unsigned reserved;
  Pool() : head(0), capacity(2048), user(0) {}
  void *Malloc(size_t);
  void *Realloc(void *, size_t, size_t);
  static void Free(void *);
};
#define RAPIDJSON_48BITPOINTER_OPTIMIZATION 0
#define RAPIDJSON_ASSERT(x) ((void)0)
#include <rapidjson/document.h>

#include <rapidjson/pointer.h>
#include <rapidjson/prettywriter.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>
using Encoding = rapidjson::UTF8<>;
using Allocator = Pool;
using Value = rapidjson::GenericValue<Encoding, Allocator>;
using Document = rapidjson::GenericDocument<Encoding, Allocator, Allocator>;
using Buffer = rapidjson::GenericStringBuffer<Encoding, Allocator>;
template class rapidjson::GenericValue<Encoding, Allocator>;
template class rapidjson::GenericDocument<Encoding, Allocator, Allocator>;
template class rapidjson::GenericStringBuffer<Encoding, Allocator>;
template class rapidjson::Writer<Buffer, Encoding, Encoding, Allocator>;
template class rapidjson::PrettyWriter<Buffer, Encoding, Encoding, Allocator>;
extern "C" void CopyValue(Value *p, const Value &q, Allocator &a) {
  p->CopyFrom(q, a);
}
extern "C" void ParseJson(Document *p, const char *s) {
  p->Parse<PARSE_FLAGS>(s);
}
extern "C" void ParseInPlace(Document *p, char *s) {
  p->ParseInsitu<PARSE_FLAGS>(s);
}
extern "C" void ParseJsonLength(Document *p, const char *s, size_t n) {
  p->Parse<PARSE_FLAGS>(s, n);
}
extern "C" bool WriteJson(Value *v, Buffer *b) {
  rapidjson::Writer<Buffer, Encoding, Encoding, Allocator> writer(*b);
  return v->Accept(writer);
}
extern "C" bool PrettyJson(Value *v, Buffer *b) {
  rapidjson::PrettyWriter<Buffer, Encoding, Encoding, Allocator> writer(*b);
  return v->Accept(writer);
}
