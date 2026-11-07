// Gear's sockets, over the system's socket API.
#include "GearCore.h"

// The system socket functions Gear calls, by their exported names. Only the enumerators used here are named, after
// the BSD options with the same numbers.
namespace nn {
namespace socket {
enum class Level : int32_t { SolSocket = 0xffff };
struct InAddr {
    uint32_t s_addr;
};
struct SockAddrIn {
    uint8_t sin_len;
    uint8_t sin_family;
    uint16_t sin_port;
    InAddr sin_addr;
    uint8_t sin_zero[8];
};
enum class MsgFlag : int32_t { None = 0 };
enum class FcntlCommand : int32_t { GetFl = 3, SetFl = 4 };
enum class Option : int32_t { SoDebug = 0x1, SoReuseAddr = 0x4, SoLinger = 0x80, SoSndBuf = 0x1001, SoRcvBuf = 0x1002 };
int Close(int socket) noexcept;                                                                          // 0xfa3d80
int SetSockOpt(int socket, Level level, Option option, const void* value, uint32_t length) noexcept;     // 0xfa4e50
int GetSockOpt(int socket, Level level, Option option, void* value, uint32_t* length) noexcept;          // 0xfa4e60
long Send(int socket, const void* data, size_t size, MsgFlag flags) noexcept;                     // 0xfa4e20
long Recv(int socket, void* data, size_t size, MsgFlag flags) noexcept;                           // 0xfa4e30
char* InetNtoa(InAddr address) noexcept;                                                         // 0xfa4d50
int Listen(int socket, int backlog) noexcept;                                                   // 0xfa3e40
int Fcntl(int socket, FcntlCommand command, ...) noexcept;                                      // 0xfa4e70
}  // namespace socket
}  // namespace nn
extern "C" int* __errno_location();

namespace Gear {

int32_t SocketError(int32_t systemError);

// Gear's error code for a system error number, which come in Winsock's numbering (10035 would block, 10060 timed out
// and so on): 0 for none, 28 for one Gear doesn't know.
// Not yet matched: the original places the return for 0 after case 10024's (its cbz goes to that block's ret); here
// it comes last, whether 0 is a case, tested first or tested after the switch.
int32_t SocketError(int32_t systemError) {   // 0xaaf910
    switch (systemError) {
    case 0: return 0;
    case 10022: return 5;
    case 10024: return 27;
    case 10035: return 1;
    case 10036: return 2;
    case 10037: return 3;
    case 10038: return 4;
    case 10039: return 6;
    case 10040: return 7;
    case 10041: return 8;
    case 10042: return 9;
    case 10043: return 10;
    case 10045: return 11;
    case 10047: return 12;
    case 10048: return 13;
    case 10049: return 14;
    case 10050: return 15;
    case 10051: return 16;
    case 10052: return 17;
    case 10053: return 18;
    case 10054: return 19;
    case 10055: return 20;
    case 10056: return 21;
    case 10057: return 22;
    case 10060: return 23;
    case 10061: return 24;
    case 10064: return 25;
    case 10065: return 26;
    default: return 28;
    }
}

// Gear::Socket (vtable 0x189efa8): the interface, whose own slots are stubs. Like DeviceInterface's, its destructor
// sets the vtable. Slot 19 says whether the socket is open; the others fail with error 4 when it isn't.
struct Socket {
    virtual ~Socket() { ; }                          // slots 0, 1
    virtual void Open();                             // slot 2
    virtual void Close();                            // slot 3
    virtual void Bind();
    virtual void Connect();
    virtual int32_t Send(const void* data, uint32_t size);    // slot 6
    virtual int32_t Receive(void* data, uint32_t size);       // slot 7
    virtual bool Ready(uint32_t events);             // slot 8: 1 readable, 2 writable, 4 failed
    virtual bool Wait(bool* readable, bool* writable, bool* failed);   // slot 9
    virtual bool SetReuseAddress(bool on);           // slot 10
    virtual bool ReuseAddress();                     // slot 11
    virtual bool SetBlocking(bool blocking);         // slot 12
    virtual void Slot13();
    virtual bool SetSendBufferSize(int32_t size);    // slot 14
    virtual int32_t SendBufferSize();                // slot 15
    virtual bool SetReceiveBufferSize(int32_t size); // slot 16
    virtual int32_t ReceiveBufferSize();             // slot 17
    virtual int32_t Slot18();
    virtual bool IsOpen() const;                     // slot 19
    virtual void Port();
    virtual const char* Address();                   // slot 21: the bound address as text
    virtual void Slot22();
    int32_t error;                     // +0x8: the last operation's Gear error code, 0 for none
};

// Gear::TcpSocket (vtable 0x189eea0).
struct TcpSocket : Socket {
    ~TcpSocket() override;
    void Close() override;
    int32_t Send(const void* data, uint32_t size) override;
    int32_t Receive(void* data, uint32_t size) override;
    bool Ready(uint32_t events) override;
    const char* Address() override;
    bool SetReuseAddress(bool on) override;
    bool ReuseAddress() override;
    bool SetBlocking(bool blocking) override;
    bool SetSendBufferSize(int32_t size) override;
    int32_t SendBufferSize() override;
    bool SetReceiveBufferSize(int32_t size) override;
    int32_t ReceiveBufferSize() override;
    int32_t Slot18() override;
    bool IsOpen() const override { return socket != -1; }
    virtual void Accept();                           // slot 23
    virtual bool Listen(int32_t backlog);            // slot 24
    virtual bool SetSlot25(bool on);                 // slot 25: option 1, inverted
    virtual bool Slot26();
    virtual bool SetLinger(bool on);                 // slot 27
    virtual bool Lingers();                          // slot 28
    virtual bool SetLingerTime(int32_t seconds);     // slot 29: kept to 16 bits
    virtual int32_t LingerTime();                    // slot 30

    // Keeps the error code for the system's last error, if Gear has one for it.
    void KeepSystemError() {
        if (int32_t code = SocketError(*__errno_location())) error = code;
    }

    bool blocking;                     // +0xc: as last set (slot 12); true again once closed
    int32_t timeout;                   // +0x10: -1 for none; a blocking socket with one waits before each transfer
    char padding_14[0xc];
    int socket;                        // +0x20
    nn::socket::SockAddrIn address;    // +0x24
    char addressText[16];              // +0x34: slot 21's text, at most 15 characters
};

TcpSocket::~TcpSocket() { Close(); }   // 0xaafb90

void TcpSocket::Close() {   // 0xaafc70
    if (IsOpen()) {
        nn::socket::Close(socket);
        socket = -1;
        blocking = true;
        timeout = -1;
    }
    error = 0;
}

int32_t TcpSocket::Send(const void* data, uint32_t size) {   // 0xaafec0
    if (!IsOpen()) {
        error = 4;
        return -1;
    }
    if (blocking && timeout != -1 && !Ready(2)) return -1;
    int fd = socket;
    error = 0;
    int32_t sent = nn::socket::Send(fd, data, size, nn::socket::MsgFlag::None);
    if (sent != -1) return sent;
    KeepSystemError();
    return -1;
}

// Slot 7 also takes 0 (the peer closed) as a failure, and returns what the system did.
int32_t TcpSocket::Receive(void* data, uint32_t size) {   // 0xaaff60
    if (!IsOpen()) {
        error = 4;
        return -1;
    }
    if (blocking && timeout != -1 && !Ready(1)) return -1;
    int fd = socket;
    error = 0;
    int32_t received = nn::socket::Recv(fd, data, size, nn::socket::MsgFlag::None);
    if (received == -1 || received == 0) KeepSystemError();
    return received;
}

bool TcpSocket::Ready(uint32_t events) {   // 0xab0010
    bool readable = events & 1;
    bool writable = events & 2;
    bool failed = events & 4;
    return Wait(readable ? &readable : nullptr, writable ? &writable : nullptr, failed ? &failed : nullptr);
}

bool TcpSocket::SetReuseAddress(bool on) {   // 0xab0320
    if (!IsOpen()) {
        error = 4;
        return false;
    }
    int fd = socket;
    error = 0;
    int32_t value = on;
    if (nn::socket::SetSockOpt(fd, nn::socket::Level::SolSocket, nn::socket::Option::SoReuseAddr, &value, sizeof(value)) != -1) return true;
    KeepSystemError();
    return false;
}

bool TcpSocket::ReuseAddress() {   // 0xab03b0
    if (!IsOpen()) {
        error = 4;
        return false;
    }
    int fd = socket;
    error = 0;
    int32_t value = 0;
    uint32_t length = sizeof(value);
    if (nn::socket::GetSockOpt(fd, nn::socket::Level::SolSocket, nn::socket::Option::SoReuseAddr, &value, &length) != -1) return value != 0;
    KeepSystemError();
    return false;
}

bool TcpSocket::SetSendBufferSize(int32_t size) {   // 0xab0500
    if (!IsOpen()) {
        error = 4;
        return false;
    }
    int fd = socket;
    error = 0;
    int32_t value = size;
    if (nn::socket::SetSockOpt(fd, nn::socket::Level::SolSocket, nn::socket::Option::SoSndBuf, &value, sizeof(value)) != -1) return true;
    KeepSystemError();
    return false;
}

int32_t TcpSocket::SendBufferSize() {   // 0xab0590
    if (!IsOpen()) {
        error = 4;
        return 0;
    }
    int fd = socket;
    error = 0;
    int32_t value = 0;
    uint32_t length = sizeof(value);
    if (nn::socket::GetSockOpt(fd, nn::socket::Level::SolSocket, nn::socket::Option::SoSndBuf, &value, &length) != -1) return value;
    KeepSystemError();
    return 0;
}

bool TcpSocket::SetReceiveBufferSize(int32_t size) {   // 0xab0620
    if (!IsOpen()) {
        error = 4;
        return false;
    }
    int fd = socket;
    error = 0;
    int32_t value = size;
    if (nn::socket::SetSockOpt(fd, nn::socket::Level::SolSocket, nn::socket::Option::SoRcvBuf, &value, sizeof(value)) != -1) return true;
    KeepSystemError();
    return false;
}

int32_t TcpSocket::ReceiveBufferSize() {   // 0xab06b0
    if (!IsOpen()) {
        error = 4;
        return 0;
    }
    int fd = socket;
    error = 0;
    int32_t value = 0;
    uint32_t length = sizeof(value);
    if (nn::socket::GetSockOpt(fd, nn::socket::Level::SolSocket, nn::socket::Option::SoRcvBuf, &value, &length) != -1) return value;
    KeepSystemError();
    return 0;
}

// Slot 12 sets O_NONBLOCK (0x800) whichever way it's asked, once the state changes.
bool TcpSocket::SetBlocking(bool blocking) {   // 0xab0440
    if (!IsOpen()) {
        error = 4;
        return false;
    }
    if (this->blocking == blocking) {
        error = 0;
        return true;
    }
    error = 0;
    int fd = socket;
    this->blocking = blocking;
    int flags = nn::socket::Fcntl(fd, nn::socket::FcntlCommand::GetFl, 0);
    if (flags == -1) flags = 0;
    if (nn::socket::Fcntl(fd, nn::socket::FcntlCommand::SetFl, flags | 0x800) != -1) return true;
    KeepSystemError();
    return false;
}

int32_t TcpSocket::Slot18() {   // 0xab0740
    if (!IsOpen()) {
        error = 4;
        return -1;
    }
    error = 0;
    return 0;
}

bool TcpSocket::Listen(int32_t backlog) {   // 0xab0930
    if (!IsOpen()) {
        error = 4;
        return false;
    }
    int fd = socket;
    error = 0;
    if (nn::socket::Listen(fd, backlog) != -1) return true;
    KeepSystemError();
    return false;
}

// Not yet matched: the original works out the buffer's address before the call and copies by index, ending the
// terminator's place with a min; none of the copy loops tried here compiles that way.
const char* TcpSocket::Address() {   // 0xab07a0
    const char* text = nn::socket::InetNtoa(address.sin_addr);
    char* out = addressText;
    char* end = addressText + sizeof(addressText) - 1;
    while (*text && out < end) *out++ = *text++;
    *out = 0;
    return addressText;
}

// Not yet matched: the option number and the success value are both 1, and here they share one register kept across
// the call; the original sets them separately.
bool TcpSocket::SetSlot25(bool on) {   // 0xab09b0
    if (!IsOpen()) {
        error = 4;
        return false;
    }
    int fd = socket;
    error = 0;
    int32_t value = !on;
    if (nn::socket::SetSockOpt(fd, nn::socket::Level::SolSocket, nn::socket::Option::SoDebug, &value, sizeof(value)) != -1) return true;
    KeepSystemError();
    return false;
}

bool TcpSocket::Slot26() {   // 0xab0a40
    if (!IsOpen()) return false;
    int fd = socket;
    int32_t value = 0;
    uint32_t length = sizeof(value);
    nn::socket::GetSockOpt(fd, nn::socket::Level::SolSocket, nn::socket::Option::SoDebug, &value, &length);
    return value == 0;
}

// The linger option: whether closing waits for unsent data, and for how many seconds.
struct Linger {
    int32_t on;
    int32_t seconds;
};

bool TcpSocket::Lingers() {   // 0xab0b70
    if (!IsOpen()) return false;
    int fd = socket;
    Linger linger;
    uint32_t length = sizeof(linger);
    nn::socket::GetSockOpt(fd, nn::socket::Level::SolSocket, nn::socket::Option::SoLinger, &linger, &length);
    return linger.on != 0;
}

bool TcpSocket::SetLinger(bool on) {   // 0xab0aa0
    if (!IsOpen()) {
        error = 4;
        return false;
    }
    int fd = socket;
    error = 0;
    Linger linger;
    uint32_t length = sizeof(linger);
    nn::socket::GetSockOpt(fd, nn::socket::Level::SolSocket, nn::socket::Option::SoLinger, &linger, &length);
    if ((linger.on != 0) == on) return true;
    linger.on = on;
    if (nn::socket::SetSockOpt(fd, nn::socket::Level::SolSocket, nn::socket::Option::SoLinger, &linger, length) != -1) return true;
    KeepSystemError();
    return false;
}

bool TcpSocket::SetLingerTime(int32_t seconds) {   // 0xab0bd0
    if (!IsOpen()) {
        error = 4;
        return false;
    }
    int fd = socket;
    error = 0;
    Linger linger;
    uint32_t length = sizeof(linger);
    nn::socket::GetSockOpt(fd, nn::socket::Level::SolSocket, nn::socket::Option::SoLinger, &linger, &length);
    uint16_t time = seconds;
    if (time == linger.seconds) return true;
    linger.seconds = time;
    if (nn::socket::SetSockOpt(fd, nn::socket::Level::SolSocket, nn::socket::Option::SoLinger, &linger, length) != -1) return true;
    KeepSystemError();
    return false;
}

int32_t TcpSocket::LingerTime() {   // 0xab0c90
    if (!IsOpen()) return 0;
    int fd = socket;
    Linger linger;
    uint32_t length = sizeof(linger);
    nn::socket::GetSockOpt(fd, nn::socket::Level::SolSocket, nn::socket::Option::SoLinger, &linger, &length);
    return linger.seconds;
}

}  // namespace Gear
