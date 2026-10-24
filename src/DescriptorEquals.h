// Working names and ABI views; complete original declarations remain unknown.
// Chained equality of a base and two net values.
#include <stdint.h>
struct NetValue { bool Equals(const NetValue& other) const; };
template<unsigned Key, unsigned Second> struct Descriptor {
    char header[0x28]; NetValue first; char padding[Second - 0x28 - 1]; NetValue second;
    bool BaseEquals(const Descriptor& other) const;
    bool Equals(const Descriptor& other) const;
};
template<unsigned Key, unsigned Second> bool Descriptor<Key, Second>::Equals(const Descriptor& other) const {
    return BaseEquals(other) && first.Equals(other.first) && second.Equals(other.second);
}
#define DESCRIPTOR_EQUALS(Key, Second) template struct Descriptor<Key, Second>;
