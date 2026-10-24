// Working names and ABI views; complete original declarations remain unknown.
// Clears a HUD pool slot bit, then destroys the object.
#include <stdint.h>
template<unsigned Key> struct HudPooled { virtual ~HudPooled(); char data[64]; };
template<unsigned Key> struct HudPoolStorage { char header[8]; uint32_t used; char padding[12]; HudPooled<Key>* storage; };
template<unsigned Key> struct HudPool {
    static HudPoolStorage<Key>* instance;
    static void Release(HudPooled<Key>* object);
};
template<unsigned Key> void HudPool<Key>::Release(HudPooled<Key>* object) {
    HudPoolStorage<Key>* pool = instance;
    uint32_t index = uint32_t(object - pool->storage);
    pool->used &= ~(1u << index);
    object->~HudPooled();
}
#define HUD_POOL_RELEASE(Key) template struct HudPool<Key>;
