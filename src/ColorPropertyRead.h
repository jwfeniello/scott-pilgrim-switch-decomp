// Working names and ABI views; complete original declarations remain unknown.
// Reads a four-byte colour material property through the stream.
#include <stdint.h>
struct Stream { virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5();
    virtual uint32_t Transfer(void* data, uint32_t size); };
struct Archive {
    uint64_t position; Stream* stream;
    __attribute__((always_inline)) void Read(void* data, uint32_t size) { position += stream->Transfer(data, size); }
};
template<unsigned Key> struct ColorProperty {
    char header[8]; uint8_t r, g, b, a;
    __attribute__((always_inline)) void Set(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) { r = red; g = green; b = blue; a = alpha; }
    void Read(Archive& archive);
};
template<unsigned Key> void ColorProperty<Key>::Read(Archive& archive) {
    uint8_t red, green, blue, alpha;
    archive.Read(&red, 1); archive.Read(&green, 1); archive.Read(&blue, 1); archive.Read(&alpha, 1);
    Set(red, green, blue, alpha);
}
#define COLOR_PROPERTY_READ(Key) template struct ColorProperty<Key>;
