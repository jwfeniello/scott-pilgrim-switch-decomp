#include "SdkResultAbi.h"

// Kept separate from Text's definition to preserve the external copy call.
SdkResultAbi::Result::Result(const Result &other)
    : code(other.code), unknown08(other.unknown08), unknown10(other.unknown10),
      domain(other.domain), error(other.error) {}
