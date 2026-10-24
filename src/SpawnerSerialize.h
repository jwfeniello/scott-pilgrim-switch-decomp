// Working names and ABI views; complete original declarations remain unknown.
// Object spawner serialization: base, two members and a u32 through the stream.
#include <stdint.h>
struct Stream { virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5();
    virtual uint32_t Transfer(void* data, uint32_t size); };
struct Archive { uint64_t position; Stream* stream; };
struct Context;
struct Member50 { void Serialize(Context* context); };
struct Member58 { void Serialize(Archive& archive, Context* context); };
template<unsigned Key> struct SpawnerBase { void Serialize(Archive& archive, Context* context); };
template<unsigned Key> struct Spawner : SpawnerBase<Key> {
    char padding[0x50]; Member50 m50; char p51[7]; Member58 m58; char p59[0xd8 - 0x59]; uint32_t value;
    void Serialize(Archive& archive, Context* context);
};
template<unsigned Key> void Spawner<Key>::Serialize(Archive& archive, Context* context) {
    SpawnerBase<Key>::Serialize(archive, context);
    m50.Serialize(context);
    m58.Serialize(archive, context);
    uint32_t v = value;
    archive.position += archive.stream->Transfer(&v, 4);
    value = v;
}
#define SPAWNER_SERIALIZE(Key) template struct Spawner<Key>;
