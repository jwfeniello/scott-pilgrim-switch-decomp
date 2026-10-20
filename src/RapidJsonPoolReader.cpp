// Public RapidJSON templates with a reconstructed pool allocation ABI view.
// Reallocation, freeing, original types and complete game linking remain unestablished.
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <new>
extern "C" void* EngineAllocate(size_t,unsigned,unsigned,unsigned);
struct Chunk { size_t capacity, size; Chunk* next; };
struct Pool {
 static const bool kNeedFree = false;
 Chunk *head; size_t capacity; void *user; unsigned reserved;
 Pool():head(0),capacity(2048),user(0) {}
 void* Malloc(size_t size) {
  if (!size) return 0;
  size = (size + 7) & ~size_t(7);
  if (!head || head->size + size > head->capacity) {
   size_t cap = capacity > size ? capacity : size;
   if (!(cap + sizeof(Chunk))) return 0;
   Chunk* chunk = static_cast<Chunk*>(EngineAllocate(cap+sizeof(Chunk),4,0,0x40c00000));
   if (!chunk) return 0;
   chunk->capacity=cap; chunk->size=0; chunk->next=head; head=chunk;
  }
  void* result=reinterpret_cast<char*>(head+1)+head->size;
  head->size+=size; return result;
 }
 void* Realloc(void*,size_t,size_t);
 static void Free(void*);
};
#define RAPIDJSON_48BITPOINTER_OPTIMIZATION 0
#define RAPIDJSON_ASSERT(x) ((void)0)
#include <rapidjson/document.h>
using Doc=rapidjson::GenericDocument<rapidjson::UTF8<>,Pool,Pool>;
extern "C" void ParseJson(Doc* doc,const char* s) {doc->Parse<0>(s);}
