// Working names and ABI views; complete original declarations remain unknown.
// storm::echo session message destructors with a polymorphic payload holding text.
#include <stdint.h>
extern "C" void Storm_Free(void* pointer, const char* file, int line) noexcept;
struct StormText {
    uint8_t flags; char inline_text[15]; char* heap;
    ~StormText() { if (flags & 1) Storm_Free(heap, "", 0); }
};
template<unsigned Key, unsigned TextOffset> struct Payload { virtual ~Payload() {} char padding[TextOffset - 8]; StormText text; };
template<unsigned Key, unsigned PayloadOffset, unsigned TextOffset> struct SessionMessage {
    virtual ~SessionMessage();
    char padding[PayloadOffset - 8];
    Payload<Key, TextOffset - PayloadOffset> payload;
    static void operator delete(void* p) { Storm_Free(p, "", 0); }
};
template<unsigned Key, unsigned P, unsigned T> SessionMessage<Key, P, T>::~SessionMessage() {}
#define SESSION_MESSAGE(Key, P, T) template struct SessionMessage<Key, P, T>;
