#include <stdint.h>
#include <stddef.h>

typedef unsigned long ulong;
typedef unsigned char byte;

struct Component {
    int id;                 // 0x0
    char pad1[0x2c];        // 0x4 to 0x2f
    short state_flag;       // 0x30
    char pad2[0x26];        // 0x32 to 0x57
    byte flags;             // 0x58
    char pad3[0x7];         // 0x59 to 0x5f
    struct __attribute__((packed)) {
        unsigned int val : 24;
    } state;               // 0x60: packed 24-bit field
    byte pad_bits;
    char pad4[0x24];        // 0x64 to 0x87, total size 0x88 (136 bytes)
};

struct DummyReturn {
    ulong data[4];
};

class System {
public:
    virtual void pad1(); virtual void pad2(); virtual void pad3();
    virtual void pad4(); virtual void pad5(); virtual void pad6(); virtual void pad7();
    virtual void pad8(); virtual void pad9(); virtual void pad10(); virtual void pad11();
    virtual void pad12(); virtual void pad13(); virtual void pad14(); virtual void pad15();
    virtual void pad16(); virtual void pad17(); virtual void pad18(); virtual void pad19();
    virtual void pad20(); virtual void pad21(); virtual void pad22(); virtual void pad23();
    virtual void pad24(); virtual void pad25(); virtual void pad26();
    // 27th function = offset 0xD0
    virtual DummyReturn DispatchEvent(void* comp_18, byte* p_some_byte, void* param_2, void* param_3);
};

class ComponentManager {
    char pad0[0xB8];
public:
    System* system; // 0xB8
};

struct ActiveList {
    ulong count;
    unsigned int indices[140];
};

struct BitMask {
    ulong words[3];
};

class ComponentSystem {
    char pad0[0x68];
    int expected_id; // 0x68
    char pad1[0x3A];
    byte some_byte; // 0xA6
    char pad1_2[0x19];
    ComponentManager* manager; // 0xC0
    char pad2[0x60];
    Component* component_array; // 0x128
    char pad3[0x10];
    Component fallback_component; // 0x140: used for invalid/inactive indices
    BitMask active_bitmask; // 0x1C8
    ActiveList active_list; // 0x1E0
    bool is_cache_valid; // 0x418

public:
    void UpdateComponents(void* param_2, void* param_3);

    static void ValidateLayout() {
        static_assert(offsetof(ComponentSystem, expected_id) == 0x68, "ID offset");
        static_assert(offsetof(ComponentSystem, some_byte) == 0xa6, "Byte offset");
        static_assert(offsetof(ComponentSystem, manager) == 0xc0, "Manager offset");
        static_assert(offsetof(ComponentSystem, component_array) == 0x128, "Array offset");
        static_assert(offsetof(ComponentSystem, fallback_component) == 0x140, "Fallback offset");
        static_assert(offsetof(ComponentSystem, active_bitmask) == 0x1c8, "Mask offset");
        static_assert(offsetof(ComponentSystem, active_list) == 0x1e0, "List offset");
        static_assert(offsetof(ComponentSystem, is_cache_valid) == 0x418, "Cache offset");
    }
};

void swap(ActiveList& a, ActiveList& b) {
    ActiveList* pA = &a;
    ActiveList* pB = &b;
    
    if (pA == pB) return;
    
    if (pB->count < pA->count) {
        swap(b, a);
        return;
    }
    
    for (ulong i = 0; i < pA->count; i++) {
        unsigned int tmp = pA->indices[i];
        pA->indices[i] = pB->indices[i];
        pB->indices[i] = tmp;
    }
    
    ulong diff = pB->count - pA->count;
    if (diff != 0) {
        __builtin_memcpy(&pA->indices[pA->count], &pB->indices[pA->count], diff * sizeof(unsigned int));
        ulong tmp_count = pA->count;
        pA->count = pB->count;
        pB->count = tmp_count;
    }
}

void ComponentSystem::UpdateComponents(void* param_2, void* param_3) {
    if (!is_cache_valid) {
        BitMask bitmask_copy = active_bitmask;
        
        ActiveList local_list;
        local_list.count = 0;
        
        for (ulong i = 0; i < 140; i++) {
            if (local_list.count > 139) continue;
            
            ulong bit = 1UL << (i & 63);
            ulong mask = bitmask_copy.words[i >> 6];
            if (bit & mask) {
                local_list.indices[local_list.count] = i;
                local_list.count++;
            }
        }
        
        swap(active_list, local_list);
        is_cache_valid = true;
    }
    
    if (active_list.count != 0) {
        unsigned int* ptr = active_list.indices;
        unsigned int* end = ptr + active_list.count;
        do {
            ulong index = *ptr;
            Component* comp = &fallback_component;
            if (index <= 139) {
                ulong mask = active_bitmask.words[index >> 6];
                if (mask & (1ULL << (index & 63))) {
                    comp = &component_array[index];
                }
            }
            if (comp->id != expected_id) {
                comp->flags = 0x10;
                if (comp->state_flag != -1) {
                    if (!(comp->state.val & (1u << 22))) {
                        void* payload = (char*)comp + 0x18;
                        byte value = some_byte;
                        ComponentManager* owner = manager;
                        byte temp_byte = value;
                        System* dispatcher = owner->system;
                        dispatcher->DispatchEvent(payload, &temp_byte, param_2, param_3);
                    }
                }
            }
            ptr++;
        } while (ptr != end);
    }
}

static_assert(sizeof(ulong) == 8, "Target requires LP64");
static_assert(sizeof(Component) == 0x88, "Component stride");
static_assert(offsetof(Component, state_flag) == 0x30, "State offset");
static_assert(offsetof(Component, state) == 0x60, "Flag offset");
static_assert(sizeof(ActiveList) == 0x238, "List size");
