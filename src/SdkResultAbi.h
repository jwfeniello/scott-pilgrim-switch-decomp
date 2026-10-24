#pragma once
#include <stddef.h>
#include <stdint.h>

// Recovered Switch ABI view. These are descriptive names, not recovered C++
// names.
namespace SdkResultAbi {
struct Text {
  char *data;
  explicit Text(const char *);
  Text(const Text &);
  ~Text();
};

struct Result {
  int16_t code;
  const char *unknown08;
  uint32_t unknown10;
  Text domain;
  uint8_t error;
  Result(const Result &);
};

static_assert(sizeof(Text) == 8, "owned domain string ABI");
static_assert(offsetof(Result, domain) == 24, "result domain offset");
static_assert(offsetof(Result, error) == 32, "result error flag offset");
static_assert(sizeof(Result) == 40, "result ABI including trailing flag");

bool Equal(const Result &, const Result &);
} // namespace SdkResultAbi
