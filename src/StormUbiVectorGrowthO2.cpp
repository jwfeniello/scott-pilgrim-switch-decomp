// libc++ container code instantiated in the storm and ubiservices libraries. A vector growing by one moves into a split buffer, the way libc++'s push_back does. The element and node
// types are stand-ins named after the function's address: their sizes and what their cleanup calls come
// from the code. Generated from the decompiler's reading and tested against the bytes.
#include <stdint.h>
#include <stddef.h>
inline void* operator new(size_t, void* address) noexcept { return address; }
// The allocators storm and ubiservices give their libc++ containers.
void* StormAllocate(size_t size, unsigned alignment, unsigned tag, const void* kind, const char* file, int line);
void StormFree(void* memory, const char* file, int line);
void* UbiAllocate(unsigned size, unsigned alignment, unsigned flags, unsigned tag);
void UbiFree(void* memory);
namespace std { template<bool> struct __vector_base_common { [[noreturn]] void __throw_length_error() const; }; }
template<class T> inline T&& lc_move(T& t) { return static_cast<T&&>(t); }
template<class T> inline void lc_swap(T& x, T& y) { T t(x); x = y; y = t; }
template<class T, unsigned Align, unsigned Tag> struct UbiAllocator {
    T* allocate(size_t n) { return static_cast<T*>(UbiAllocate(static_cast<unsigned>(n * sizeof(T)), Align, 0, Tag)); }
    void deallocate(T* p, size_t) { UbiFree(p); }
};
// The buffer a growing vector moves into.
template<class T, class A> struct LcSplitBufferBase {
    T* first;
    T* begin;
    T* end;
    T* cap;
    A& alloc;
    __attribute__((always_inline)) LcSplitBufferBase(size_t c, size_t start, A& a) : cap(nullptr), alloc(a) {
        first = c != 0 ? alloc.allocate(c) : nullptr;
        begin = end = first + start;
        cap = first + c;
    }
    __attribute__((always_inline)) void Destroy() {
        while (begin != end) (--end)->~T();
        if (first) alloc.deallocate(first, cap - first);
    }
};
// Whether the destructor is inlined depends on how big the element's destructor is.
template<class T, class A, bool Outlined> struct LcSplitBuffer;
template<class T, class A> struct LcSplitBuffer<T, A, false> : LcSplitBufferBase<T, A> {
    using LcSplitBufferBase<T, A>::LcSplitBufferBase;
    ~LcSplitBuffer() { this->Destroy(); }
};
template<class T, class A> struct LcSplitBuffer<T, A, true> : LcSplitBufferBase<T, A> {
    using LcSplitBufferBase<T, A>::LcSplitBufferBase;
    __attribute__((noinline)) ~LcSplitBuffer() { this->Destroy(); }
};
template<class T, class A> void lc_construct_backward(A&, T* begin1, T* end1, T*& end2) {
    while (end1 != begin1) {
        ::new (static_cast<void*>(end2 - 1)) T(lc_move(*--end1));
        --end2;
    }
}
// Values libc++ knows can be copied as bytes.
template<class T, class A> void lc_construct_backward_bytes(A&, T* begin1, T* end1, T*& end2) {
    ptrdiff_t n = end1 - begin1;
    end2 -= n;
    if (n > 0) __builtin_memcpy(end2, begin1, n * sizeof(T));
}
// libc++'s compressed pair: the allocator is an empty base.
template<class T> struct LcPairFirst { T value; T& get() { return value; } const T& get() const { return value; } };
template<class A> struct LcPairSecond : A { A& get() { return *this; } };
template<class T, class A> struct LcCompressedPair : LcPairFirst<T>, LcPairSecond<A> {
    T& first() { return static_cast<LcPairFirst<T>&>(*this).get(); }
    const T& first() const { return static_cast<const LcPairFirst<T>&>(*this).get(); }
    A& second() { return static_cast<LcPairSecond<A>&>(*this).get(); }
};
template<class T, class A, bool Bytes, bool SplitOut, bool SwapOut> struct LcVector : std::__vector_base_common<true> {
    typedef LcSplitBuffer<T, A, SplitOut> Buffer;
    T* begin_;
    T* end_;
    LcCompressedPair<T*, A> pair_;
    A& alloc() { return pair_.second(); }
    T*& cap_ref() { return pair_.first(); }
    size_t size() const { return static_cast<size_t>(end_ - begin_); }
    size_t capacity() const { return static_cast<size_t>(pair_.first() - begin_); }
    size_t max_size() const { return size_t(-1) / sizeof(T); }
    size_t recommend(size_t n) const {
        size_t ms = max_size();
        if (n > ms) this->__throw_length_error();
        size_t c = capacity();
        if (c >= ms / 2) return ms;
        return 2 * c >= n ? 2 * c : n;
    }
    __attribute__((always_inline)) void SwapOutBody(Buffer& v) {
        if (Bytes) lc_construct_backward_bytes(alloc(), begin_, end_, v.begin);
        else lc_construct_backward(alloc(), begin_, end_, v.begin);
        lc_swap(begin_, v.begin);
        lc_swap(end_, v.end);
        lc_swap(cap_ref(), v.cap);
        v.first = v.begin;
    }
    void SwapOutInline(Buffer& v) { SwapOutBody(v); }
    __attribute__((noinline)) void SwapOutCall(Buffer& v) { SwapOutBody(v); }
    template<class... Args> void GrowAndAdd(Args&&... args) {
        A& a = alloc();
        Buffer v(recommend(size() + 1), size(), a);
        ::new (static_cast<void*>(v.end)) T(static_cast<Args&&>(args)...);
        ++v.end;
        if (SwapOut) SwapOutCall(v);
        else SwapOutInline(v);
    }
};
struct OwnedObject { virtual ~OwnedObject(); };
struct SharedCount {
    virtual void S0(); virtual void S1();
    virtual void OnZeroShared();
    long owners;
    void ReleaseWeak();
};
struct E1741664 { char data[88]; E1741664(const E1741664& o); };
template void LcVector<E1741664, UbiAllocator<E1741664, 4, 1086324736>, false, true, false>::GrowAndAdd<const E1741664&>(const E1741664&);
extern const char Kind3179680[];
struct Alloc3179680 { template<class T> struct With { T* allocate(size_t n) { return static_cast<T*>(StormAllocate(n * sizeof(T), 8, 1092698112u, Kind3179680, "", 0)); } void deallocate(T* p, size_t) { StormFree(p, "", 0); } }; };
struct E3179680 { OwnedObject* p; OwnedObject* release() { OwnedObject* t = p; p = nullptr; return t; } E3179680(E3179680&& o) : p(o.release()) {} ~E3179680() { OwnedObject* q = p; p = nullptr; if (q) delete q; } };
template void LcVector<E3179680, Alloc3179680::With<E3179680>, false, true, false>::GrowAndAdd<E3179680&&>(E3179680&&);
extern const char Kind4571088[];
struct Alloc4571088 { template<class T> struct With { T* allocate(size_t n) { return static_cast<T*>(StormAllocate(n * sizeof(T), 4, 1092628486u, Kind4571088, "", 0)); } void deallocate(T* p, size_t) { StormFree(p, "", 0); } }; };
struct E4571088 { uint32_t w0; uint32_t w1; E4571088(const E4571088& o) : w0(o.w0), w1(o.w1) {} };
template void LcVector<E4571088, Alloc4571088::With<E4571088>, false, false, false>::GrowAndAdd<const E4571088&>(const E4571088&);
struct E5247552 { uint64_t w0; E5247552(const E5247552& o) : w0(o.w0) {} };
template void LcVector<E5247552, UbiAllocator<E5247552, 4, 1095761920>, false, false, false>::GrowAndAdd<const E5247552&>(const E5247552&);
