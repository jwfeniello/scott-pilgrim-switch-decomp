// Working names and ABI views; complete original declarations remain unknown.
// Switches a member-function-pointer handler, notifying leave/enter codes.
#include <stdint.h>
struct Listener;
typedef void (Listener::*Handler)(uint32_t);
template<unsigned Key> struct HandlerSlot {
    Listener* target;
    Handler current;
    Handler previous;
    int32_t state;
    void Switch(Handler next);
};
template<unsigned Key> void HandlerSlot<Key>::Switch(Handler next) {
    if (state != -1) (target->*current)(0x2713);
    (target->*current)(0x2712);
    previous = current;
    current = next;
    (target->*current)(0x2711);
    if (state != -1) (target->*current)(0x2713);
}
#define HANDLER_SLOT_SWITCH(Key) template struct HandlerSlot<Key>;
