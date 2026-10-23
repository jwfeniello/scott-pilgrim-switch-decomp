# Case-insensitive SDK text search

`src/SdkTextFindFolded.cpp` reconstructs `0x5a650`, a complete 400-byte
function. Clang 7.0.1 and 8.0.1 O3 reproduce it; the published recipe uses
Clang 8.0.1 and checks every byte and relocation.

The routine searches shared SDK text for a NUL-terminated needle, comparing
characters through `toupper` after conversion to unsigned char. It returns the
first matching offset or size_t(-1); an empty needle returns size_t(-1).
The inner search preserves the original inclusive bound at the string's NUL
terminator. The implementation follows the target's C character conversion
behavior, not Unicode case folding. Names are descriptive reconstructions.

The WebSocket handshake setup at 0x83890 calls this routine when deciding
whether to substitute `public-ws-ubiservices.ubi.com` for a host containing
`gaap.ubiservices.ubi.com`. This is a case-insensitive substring check, not an
exact-host comparison. The full setup routine remains unmatched.
