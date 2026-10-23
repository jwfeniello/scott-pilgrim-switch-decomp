// Reconstructed calendar helpers. SDK ABI declarations and descriptive names
// are provisional.
#include <stdint.h>
#include <time.h>
struct Calendar {
  int16_t year;
  int8_t month, day, hour, minute, second;
};
struct Additional {
  int32_t weekday, yearday;
  char unknown[8];
  bool dst;
  char padding[7];
};
struct Result {
  uint32_t value;
};
extern "C" Result CurrentTime(int64_t *);
extern "C" Result CalendarTime(Calendar *, Additional *, const int64_t *);
extern "C" __attribute__((noreturn)) void Abort(const char *, const char *,
                                                const char *, int,
                                                const Result *, const char *);
inline void Check(const Result &code) {
  if (code.value)
    Abort("", "", "", 0, &code, "");
}
extern "C" tm LocalCalendar() {
  time_t system = time(nullptr);
  int64_t posix;
  Check(CurrentTime(&posix));
  Calendar cal;
  Additional extra;
  Check(CalendarTime(&cal, &extra, &posix));
  tm result = *localtime(&system);
  result.tm_year = cal.year - 1900;
  result.tm_mon = cal.month - 1;
  result.tm_mday = cal.day;
  result.tm_hour = cal.hour;
  result.tm_min = cal.minute;
  result.tm_sec = cal.second;
  result.tm_wday = extra.weekday;
  result.tm_yday = extra.yearday;
  result.tm_isdst = extra.dst;
  return result;
}

extern "C" tm UtcCalendar() {
  time_t system = time(nullptr);
  int64_t posix;
  Check(CurrentTime(&posix));
  Calendar cal;
  Additional extra;
  Check(CalendarTime(&cal, &extra, &posix));
  tm result = *gmtime(&system);
  result.tm_year = cal.year - 1900;
  result.tm_mon = cal.month - 1;
  result.tm_mday = cal.day;
  result.tm_hour = cal.hour;
  result.tm_min = cal.minute;
  result.tm_sec = cal.second;
  result.tm_wday = extra.weekday;
  result.tm_yday = extra.yearday;
  result.tm_isdst = extra.dst;
  return result;
}
