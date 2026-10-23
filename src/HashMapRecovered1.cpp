// Generic library ABI instantiation; original application types are unrecovered.
#include <unordered_map>
#include <stdint.h>
struct Value { uint32_t words[1]; };
template class std::unordered_map<const char*,Value>;
