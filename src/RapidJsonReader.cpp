// Public RapidJSON templates with a provisional allocator ABI view.
// Pool method definitions and full game linking remain unestablished.
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
