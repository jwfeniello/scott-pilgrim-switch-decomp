// Provisional C++ wire-record and callback-ownership ABI views, shared by
// DeserializeCallbacks.cpp and the gameplay serializers that inline the
// loop. Includers define placement new first. The callback's invoke pointer
// is stored after the callback is published, as the inlined copies show.
#pragma once
#include <stdint.h>
#include <stddef.h>
struct DecodeEvent;
struct DecodeHost {char unknown[16];bool changed;void Typed(const DecodeEvent&);void Generic(const DecodeEvent&);};
using DecodeMember=void(DecodeHost::*)(const DecodeEvent&);
struct DecodeCallable {virtual ~DecodeCallable();};
template<unsigned Key> struct DecodeBinding {
    static unsigned char* context;static void* manager;
    static void Invoke();
    static void* Allocate(void*,size_t);
    static void ReadValue(void*,uint64_t*);
    static void* Lookup(void*,void*);
    static void Process(void*,void*,uint32_t,void*,uint64_t);
};
template<unsigned Key> struct DecodeCallback : DecodeCallable {
    void(*invoke)();DecodeHost* owner;DecodeMember member;
    __attribute__((always_inline)) DecodeCallback(DecodeHost* h,DecodeMember m):owner(h),member(m){}
    virtual ~DecodeCallback();
};
struct DecodeAllocator {virtual void Slot0();virtual void Slot1();virtual void Slot2();virtual void Slot3();virtual void Slot4();virtual void Slot5();virtual void Free(void*);};
struct DecodeAllocators {char unknown[0x370];DecodeAllocator* values[256];};
extern "C" {extern DecodeAllocators* DecodeAllocatorManager;uint8_t DecodeAllocatorIndex(DecodeAllocators*,void*);}
template<unsigned Key> struct DecodeOwner {
    DecodeCallback<Key>* value;
    __attribute__((always_inline)) ~DecodeOwner() {
        if(value) {
            DecodeAllocators* m=DecodeAllocatorManager;
            DecodeAllocator* a=m->values[DecodeAllocatorIndex(m,value)];
            static_cast<DecodeCallable*>(value)->~DecodeCallable();
            a->Free(value);
        }
    }
};
struct DecodeStream {virtual void Slot0();virtual void Slot1();virtual void Slot2();virtual void Slot3();virtual void Slot4();virtual void Slot5();virtual uint32_t Read(void*,uint32_t);};
struct DecodeReader {
    uint64_t position;DecodeStream* stream;
    __attribute__((always_inline)) void Read(void* out,uint32_t count) {position+=stream->Read(out,count);}
    __attribute__((always_inline)) bool ReadFlag() {bool flag;Read(&flag,1);return flag;}
};
struct DecodeKey {uint32_t first,second;};
template<unsigned Key> union DecodeTerminal {bool readonly;DecodeCallback<Key>* slot;};
template<unsigned Key,uint32_t Hash,class Host=DecodeHost> __attribute__((always_inline)) inline void DecodeLoop(DecodeReader* reader,void* descriptors,Host* host,uint32_t& count) {
    DecodeTerminal<Key> terminal;
    for(uint32_t index=0;index<count;++index) {
        DecodeKey key; uint32_t type; uint64_t value;
        key={0,0};value=0;
        reader->Read(&key.first,4);reader->Read(&key.second,4);reader->Read(&type,4);
        DecodeBinding<Key>::ReadValue(reader,&value);
        reader->Read(&terminal.readonly,1);
        if(terminal.readonly)continue;
        if(key.second && key.first) {
            uint32_t tag=type;uint64_t payload=value;
            void* info=DecodeBinding<Key>::Lookup(descriptors,&key);
            DecodeMember member=tag==Hash ? static_cast<DecodeMember>(&Host::Typed) : static_cast<DecodeMember>(&Host::Generic);
            DecodeOwner<Key> callback{new(DecodeBinding<Key>::Allocate(DecodeBinding<Key>::context+0x50,40))DecodeCallback<Key>(host,member)};__atomic_store_n(&terminal.slot,callback.value,__ATOMIC_RELAXED);callback.value->invoke=DecodeBinding<Key>::Invoke;
            DecodeBinding<Key>::Process(DecodeBinding<Key>::manager,info,tag,&terminal.slot,payload);
            host->changed=true;
        }
    }
}
template<unsigned Key,uint32_t Hash> __attribute__((noinline)) void DeserializeCallbacks(DecodeReader* reader,void* descriptors,DecodeHost* host) {
    uint32_t count;reader->Read(&count,4);DecodeLoop<Key,Hash>(reader,descriptors,host,count);
}
