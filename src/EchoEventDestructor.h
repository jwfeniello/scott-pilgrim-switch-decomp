// Working names and ABI views; complete original declarations remain unknown.
// storm::echo event destructors that release a heap text buffer.
#include <stdint.h>
extern "C" void Storm_Free(void* pointer, const char* file, int line) noexcept;
struct StormText {
    uint8_t flags; char inline_text[15]; char* heap;
    ~StormText() { if (flags & 1) Storm_Free(heap, "", 0); }
};
template<unsigned Key, unsigned Offset> struct EchoEvent {
    virtual ~EchoEvent();
    char padding[Offset - 8];
    StormText text;
    static void operator delete(void* p) { Storm_Free(p, "", 0); }
};
template<unsigned Key, unsigned Offset> EchoEvent<Key, Offset>::~EchoEvent() {}
#define ECHO_EVENT(Key, Offset) template struct EchoEvent<Key, Offset>;
