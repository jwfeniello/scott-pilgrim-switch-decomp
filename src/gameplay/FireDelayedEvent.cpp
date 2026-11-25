// Fire's delayed player events (12DelayedEvent and subclasses).
#include "FireCore.h"

// 0xf4ae00 (DelayedNavigationEvent slot 1): frees the navigation request, then the DelayedEvent base.
// The deleting destructor (0xf4aea0) inlines this body, as the link-time optimizer did. Spelled inline it is no longer
// the key function, so always_inline stands in for that inlining (its only support is that it matches).
__attribute__((always_inline)) DelayedNavigationEvent::~DelayedNavigationEvent() {
    if (request) delete request;
    request = 0;
}
