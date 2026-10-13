// Working names and touched-field ABI views; original complete declarations remain unknown.
#include <stdint.h>
template<unsigned Key,uint32_t A,uint32_t B> __attribute__((noinline)) bool MatchesTwoIdentities(void*,uint32_t id) { return id==A || id==B; }
template<unsigned Key,uint32_t A,uint32_t B,uint32_t C> __attribute__((noinline)) bool MatchesThreeIdentities(void*,uint32_t id) { return id==C ? true : ((id==A) | (id==B)); }
template<unsigned Key,uint32_t A,uint32_t B,uint32_t C,uint32_t D> __attribute__((noinline)) bool MatchesFourIdentities(void*,uint32_t id) { return id==D ? true : (id==C ? true : ((id==A) | (id==B))); }
#define IDENTITY_FOUR(Key,A,B,C,D) template bool MatchesFourIdentities<Key,A,B,C,D>(void*,uint32_t);
#include "identity_four_instances.inc"
#undef IDENTITY_FOUR
