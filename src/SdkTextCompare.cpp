// Exact original 0x7e460: case-insensitive SDK text comparison.
// Local ABI views; original class declarations have not been recovered.
#include "UbisoftStringStream.h"
#include <ctype.h>
using String = std::basic_string<char, std::char_traits<char>,
                                 ubiservices::ContainerAllocator<char>>;
struct Ref {
  virtual ~Ref();
  virtual void Dispose();
  uint32_t references, padding;
};
struct Object : Ref {
  String text;
};
struct Text {
  Object *value;
  Object *get() const { return __atomic_load_n(&value, __ATOMIC_ACQUIRE); }
};
extern "C" int CompareSdkText(const Text *a, const Text *b) {
  if (a->get()->text == b->get()->text)
    return 0;
  int i = 0;
  do {
    int diff = toupper(static_cast<unsigned char>(a->get()->text[i])) -
               toupper(static_cast<unsigned char>(b->get()->text[i]));
    if (diff)
      return diff;
    ++i;
  } while (a->get()->text[i]);
  if (b->get()->text[i])
    return -toupper(static_cast<unsigned char>(b->get()->text[i]));
  return 0;
}
