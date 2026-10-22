"""Small optional-Unicorn harness for bounded, uncredited behavioral research."""
import struct
from discover_engine_families import compile_family
from elf import Elf, relocate, require


class Arm64Behavior:
    MODEL, STUB, DATA, STOP = 0x3000000, 0x4000000, 0x5000000, 0x6000000

    def __init__(self, original, compiler, folder):
        from unicorn import Uc, UC_ARCH_ARM64, UC_MODE_ARM, UC_HOOK_CODE
        from unicorn import arm64_const as arm
        self.arm, self.compiler, self.folder = arm, compiler, folder
        folder.mkdir(parents=True, exist_ok=True)
        self.mu = Uc(UC_ARCH_ARM64, UC_MODE_ARM)
        self.handlers = {}
        self.flags = ['-target', 'aarch64-none-elf', '-std=c++11', '-O2', '-mcpu=cortex-a57',
                      '-fno-pic', '-fomit-frame-pointer', '-fno-jump-tables',
                      '-fno-vectorize', '-fno-slp-vectorize']
        allocated = [s for s in original.sections if s[2] & 2 and s[5]]
        self.mu.mem_map(0, (max(s[3]+s[5] for s in allocated)+4095) & ~4095)
        for s in allocated:
            if s[1] != 8: self.mu.mem_write(s[3], original.section_bytes(s))
        for address, value in original.relative_relocations().items(): self.put(address, value)
        for address, size in [(self.MODEL, 0x100000), (self.STUB, 0x1000),
                              (self.DATA, 0x80000), (self.STOP, 0x1000)]:
            self.mu.mem_map(address, size)
        fixture = folder/'return.cpp'
        fixture.write_text('extern "C" void FixtureReturn() {}\n')
        obj = compile_family(compiler, fixture, folder/'return.o', dict(flags=self.flags))
        self.ret, rels = obj.method('FixtureReturn')
        require(not rels, 'Return fixture has dependencies')
        self.mu.mem_write(self.STOP, self.ret)
        def hook(mu, address, size, data):
            if address == self.STOP:
                mu.emu_stop()
            elif address in self.handlers:
                results = self.handlers[address]() or {}
                for i in range(19): mu.reg_write(self.x(i), 0xd000000000000000+i)
                for i in list(range(8))+list(range(16, 32)):
                    mu.reg_write(getattr(arm, 'UC_ARM64_REG_Q'+str(i)), 0xaaaaaaaaaaaaaaaa)
                for reg, value in results.items(): mu.reg_write(reg, value)
                mu.reg_write(arm.UC_ARM64_REG_PC, mu.reg_read(self.x(30)))
        self.mu.hook_add(UC_HOOK_CODE, hook)

    def x(self, i): return getattr(self.arm, 'UC_ARM64_REG_X'+str(i))
    def arg(self, i): return self.mu.reg_read(self.x(i))
    def put(self, address, value): self.write(address, '<Q', value)
    def write(self, address, fmt, *values): self.mu.mem_write(address, struct.pack(fmt, *values))
    def read(self, address, fmt): return struct.unpack(fmt, self.mu.mem_read(address, struct.calcsize(fmt)))
    def stub(self, address, callback):
        # Called before execution; callbacks return through LR without executing the fixture.
        self.mu.mem_write(address, self.ret)
        self.handlers[address] = callback

    def install(self, source, name):
        obj = compile_family(self.compiler, source, self.folder/name, dict(flags=self.flags))
        addresses, contents = {}, {}
        cursor = self.MODEL
        for index, s in enumerate(obj.sections):
            if s[2] & 2 and s[5]:
                require(s[1] == 1, 'Unexpected model storage')
                cursor = (cursor+4095) & ~4095
                addresses[index], contents[index] = cursor, bytearray(obj.section_bytes(s))
                cursor += s[5]
        require(cursor < self.MODEL+0x100000, 'Model too large')
        symbols, names = obj.symbols()
        for s in obj.sections:
            if s[1] == 4 and s[7] in addresses:
                for off in range(s[4], s[4]+s[5], s[9]):
                    position, info, addend = struct.unpack_from('<QQq', obj.data, off)
                    symbol = symbols[info >> 32]
                    require(symbol[3] in addresses, 'External model dependency')
                    relocate(contents[s[7]], position, info & 0xffffffff,
                             addresses[symbol[3]]+symbol[4]+addend, addresses[s[7]])
        for index, content in contents.items(): self.mu.mem_write(addresses[index], bytes(content))
        self.mu.ctl_remove_cache(self.MODEL, self.MODEL+0x100000)
        return {name: addresses[s[3]]+s[4] for s, name in zip(symbols, names)
                if s[1] & 15 == 2 and s[3] in addresses}

    def execute(self, entry, *values):
        arm, mu = self.arm, self.mu
        sp = self.DATA+0x7f000
        mu.mem_write(sp-0x2000, b'\xa5'*0x2000)
        saved = {self.x(i): 0xb000000000000000+i for i in range(19, 30)}
        saved.update({getattr(arm, 'UC_ARM64_REG_D'+str(i)): 0x1234000000000000+i for i in range(8, 16)})
        for reg, value in saved.items(): mu.reg_write(reg, value)
        for i, value in enumerate(values): mu.reg_write(self.x(i), value)
        mu.reg_write(arm.UC_ARM64_REG_SP, sp); mu.reg_write(self.x(30), self.STOP)
        mu.emu_start(entry, self.STOP+4, count=30000)
        require(mu.reg_read(arm.UC_ARM64_REG_PC) == self.STOP, 'Did not return')
        require(mu.reg_read(arm.UC_ARM64_REG_SP) == sp, 'Unbalanced stack')
        require(all(mu.reg_read(reg) == value for reg, value in saved.items()), 'Callee-saved register changed')
        return self.arg(0) & 0xffffffff
