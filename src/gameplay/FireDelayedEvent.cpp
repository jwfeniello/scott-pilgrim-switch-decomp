// Fire's delayed player events (12DelayedEvent and subclasses).
#include "FireCore.h"

// 0xf4ae00 (DelayedNavigationEvent slot 1): frees the navigation request, then the DelayedEvent base.
// Not yet matched: the deleting destructor (0xf4aea0) inlines this body in the original, which needs the inline hint;
// spelled inline it is no longer the key function, and Slot0 (0xf4ad00, unmatched) would have to be defined here.
DelayedNavigationEvent::~DelayedNavigationEvent() {
    if (request) delete request;
    request = 0;
}
