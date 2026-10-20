// Public RapidJSON templates with a provisional allocator ABI view.
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <new>
struct Pool {
 static const bool kNeedFree = false;
 void *head; size_t capacity; void *user; unsigned reserved;
 Pool():head(0),capacity(2048),user(0) {}
 void* Malloc(size_t);
 void* Realloc(void*,size_t,size_t);
 static void Free(void*);
};
#define RAPIDJSON_48BITPOINTER_OPTIMIZATION 0
#define RAPIDJSON_ASSERT(x) ((void)0)
#include <rapidjson/document.h>
using Doc=rapidjson::GenericDocument<rapidjson::UTF8<>,Pool,Pool>;
extern "C" void ParseJson(Doc* doc,const char* s) {doc->Parse<0>(s);}

#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>
using Buffer=rapidjson::GenericStringBuffer<rapidjson::UTF8<>,Pool>;
extern "C" bool WriteJson(Doc* doc,Buffer* buffer) {
 rapidjson::Writer<Buffer,rapidjson::UTF8<>,rapidjson::UTF8<>,Pool> writer(*buffer);
 return doc->Accept(writer);
}
