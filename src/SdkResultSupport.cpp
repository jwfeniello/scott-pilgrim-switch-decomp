// Owned domain strings and domain/code equality for SDK results.
#include "SdkResultAbi.h"
extern "C" unsigned long strlen(const char *);
extern "C" char *strcpy(char *, const char *);
extern "C" void *Allocate(unsigned, unsigned, unsigned, unsigned);
extern "C" void Free(void *);
extern bool TextEqual(const char *, const char *);
using namespace SdkResultAbi;
Text::Text(const char *s) {
  if (s) {
    unsigned n = static_cast<unsigned>(strlen(s)) + 1;
    unsigned *memory =
        static_cast<unsigned *>(Allocate(n + 4, 4, 0, 0x41500000));
    *memory = n;
    data = reinterpret_cast<char *>(memory + 1);
    strcpy(data, s);
  } else
    data = nullptr;
}
Text::Text(const Text &other) {
  const char *s = other.data;
  if (s) {
    unsigned n = static_cast<unsigned>(strlen(s)) + 1;
    unsigned *memory =
        static_cast<unsigned *>(Allocate(n + 4, 4, 0, 0x41500000));
    *memory = n;
    data = reinterpret_cast<char *>(memory + 1);
    strcpy(data, s);
  } else
    data = nullptr;
}
Text::~Text() {
  if (data)
    Free(reinterpret_cast<unsigned *>(data) - 1);
}
bool SdkResultAbi::Equal(const Result &a, const Result &b) {
  return TextEqual(a.domain.data, b.domain.data) && a.code == b.code;
}
