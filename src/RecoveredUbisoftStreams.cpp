// Instantiate the original stream hierarchy through ordinary text insertion.
#include "UbisoftStringStream.h"
void BuildStreamMessage(const char *text) {
  ubiservices::BasicStringStream<char> stream;
  stream << text;
}
