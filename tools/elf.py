"""Small ELF64/AArch64 reader and checked standard relocation linker.

Only ELF relocation fields are written. Complete symbol bodies are retained;
there are no instruction masks, byte substitutions or partial-body acceptance.
"""
import struct
from pathlib import Path


def require(condition,message):
    if not condition:raise ValueError(message)


class Elf:
    def __init__(self,path):
        self.data = Path(path).read_bytes()
        require(self.data[:6] == b'\x7fELF\x02\x01','Expected little-endian ELF64')
        self.header = struct.unpack_from('<16sHHIQQQIHHHHHH',self.data)
        require(self.header[2] == 183,'Expected AArch64')
        h = self.header
        self.sections = [struct.unpack_from('<IIQQQQIIQQ',self.data,h[6]+i*h[11])for i in range(h[12])]
        strings = self.section_bytes(self.sections[h[13]])
        self.named = {strings[s[0]:].split(b'\0',1)[0].decode():s for s in self.sections}
        self.segments = [struct.unpack_from('<IIQQQQQQ',self.data,h[5]+i*h[9])for i in range(h[10])]

    def section_bytes(self,section):return self.data[section[4]:section[4]+section[5]]

    def at(self,address,size):
        matches = [s for s in self.sections if s[1] != 8 and s[3] <= address < address+size <= s[3]+s[5]]
        require(len(matches) == 1,f'Unmapped original bytes {address:#x}/{size}')
        s = matches[0];offset = s[4]+address-s[3]
        return self.data[offset:offset+size]

    def relative_relocations(self):
        s = self.named['.rela.dyn']; result = {}
        for offset in range(s[4],s[4]+s[5],s[9]):
            address,info,addend = struct.unpack_from('<QQq',self.data,offset)
            if info&0xffffffff == 1027:result[address] = addend
        return result

    def unwind_ranges(self):
        hdr,frame,text = (self.named[name]for name in ('.eh_frame_hdr','.eh_frame','.text'))
        require(self.data[hdr[4]:hdr[4]+4] == bytes.fromhex('011b033b'),'Unsupported unwind header')
        count = struct.unpack_from('<I',self.data,hdr[4]+8)[0]
        require(12+count*8 <= hdr[5],'Truncated unwind index')
        spans = {}
        for index in range(count):
            start,relative_fde = struct.unpack_from('<ii',self.data,hdr[4]+12+index*8)
            address,fde = hdr[3]+start,hdr[3]+relative_fde
            require(frame[3] <= fde < frame[3]+frame[5],'FDE outside frame section')
            offset = frame[4]+fde-frame[3]
            length,delta = struct.unpack_from('<II',self.data,offset)
            cie = offset+4-delta
            require(length >= 12 and offset+4+length <= frame[4]+frame[5] and frame[4] <= cie < offset,'Invalid FDE/CIE')
            simple = self.data[cie+8:cie+17] == bytes.fromhex('017a5200017c1e011b')
            personality = (self.data[cie+8:cie+19] == bytes.fromhex('017a504c5200017c1e0b9c')
                           and self.data[cie+27:cie+29] == bytes.fromhex('1c1b'))
            require(simple or personality,'Unrecognized CIE')
            relative_start,size = struct.unpack_from('<iI',self.data,offset+8)
            require(fde+8+relative_start == address and size > 0 and size%4 == 0 and address%4 == 0,'Invalid function extent')
            if not text[3] <= address < address+size <= text[3]+text[5]:
                require(any(s[3] == address and s[5] == size for s in (self.named['.init'],self.named['.fini'])),'FDE outside executable sections')
                continue
            require(address not in spans,'Duplicate FDE start')
            spans[address] = size
        previous_end = text[3]
        for address,size in sorted(spans.items()):
            require(address >= previous_end,'Overlapping function extents')
            previous_end = address+size
        return spans

    def symbols(self):
        if hasattr(self,'_symbols'):return self._symbols
        table = self.named['.symtab'];strings = self.section_bytes(self.sections[table[6]])
        values = [struct.unpack_from('<IBBHQQ',self.data,p)for p in range(table[4],table[4]+table[5],table[9])]
        names = [strings[s[0]:strings.index(b'\0',s[0])].decode()for s in values]
        self._symbols = values,names
        return self._symbols

    def method(self,name):
        symbols,names = self.symbols()
        if not hasattr(self,'_methods'):
            self._methods = {}
            for s,n in zip(symbols,names):
                if s[1]&15 == 2:self._methods.setdefault(n,[]).append(s)
            self._relocation_sections = {}
            for r in self.sections:
                if r[1] == 4:self._relocation_sections.setdefault(r[7],[]).append(r)
        found = self._methods.get(name,[])
        require(len(found) == 1,f'Function symbol not unique: {name}')
        symbol = found[0];section = self.sections[symbol[3]]
        offset = section[4]+symbol[4]
        code = self.data[offset:offset+symbol[5]];relocations = []
        for relocation in self._relocation_sections.get(symbol[3],[]):
            for p in range(relocation[4],relocation[4]+relocation[5],relocation[9]):
                position,info,addend = struct.unpack_from('<QQq',self.data,p)
                if symbol[4] <= position < symbol[4]+symbol[5]:
                    relocations.append(dict(offset=position-symbol[4],kind=info&0xffffffff,
                                            symbol=names[info>>32],addend=addend,
                                            symbol_record=symbols[info>>32]))
        return code,relocations


def relocate(code,offset,kind,target,address):
    require(offset%4 == 0 and 0 <= offset <= len(code)-4,'Relocation outside function')
    word = struct.unpack_from('<I',code,offset)[0];place = address+offset
    if kind in (282,283):
        require(word&0xfc000000 == (0x14000000 if kind == 282 else 0x94000000),'Branch relocation opcode')
        delta = target-place
        require(delta%4 == 0 and -(1<<27) <= delta < (1<<27),'Branch relocation out of range')
        word = (word&0xfc000000)|((delta>>2)&0x3ffffff)
    elif kind in (275,311):
        require(word&0x9f000000 == 0x90000000,'ADRP relocation opcode')
        pages = (target&~4095)-(place&~4095)
        require(pages%4096 == 0 and -(1<<32) <= pages < (1<<32),'ADRP relocation out of range')
        immediate = (pages>>12)&0x1fffff
        word = (word&0x9f00001f)|((immediate&3)<<29)|((immediate>>2)<<5)
    elif kind == 277:
        require(word&0xffc00000 == 0x91000000,'ADD relocation opcode/shift')
        word = (word&~(0xfff<<10))|((target&0xfff)<<10)
    elif kind in (278,284,285,286,299,312):
        scale = {278:1,284:2,285:4,286:8,299:16,312:8}[kind]
        require(word&0x3b000000 == 0x39000000,'LDST relocation opcode')
        is_q = word&0x04800000 == 0x04800000;size = word>>30
        require(not is_q or size == 0,'Invalid SIMD width')
        require(scale == (16 if is_q else 1<<size) and target%scale == 0,'LDST width/alignment')
        if kind == 312:require(word&0xffc00000 == 0xf9400000,'GOT relocation requires 64-bit load')
        word = (word&~(0xfff<<10))|(((target&0xfff)//scale)<<10)
    else:raise ValueError(f'Unsupported ELF relocation {kind}')
    struct.pack_into('<I',code,offset,word)


def link_method(obj,recipe,original,relative):
    code,relocations = obj.method(recipe['symbol']);actual = bytearray(code)
    used = []
    for relocation in relocations:
        name,kind,addend = (relocation[k]for k in ('symbol','kind','addend'))
        if kind in (311,312):
            binding = recipe['got_bindings'][name];target = int(binding['cell'],0)
            require(addend == 0 and relative.get(target) == int(binding['pointee'],0),'Original GOT pointee mismatch')
            require(target%8 == 0 and any(s[0] == 1 and s[1]&2 and s[3] <= target <= s[3]+s[6]-8 for s in original.segments),'GOT outside writable PT_LOAD')
        elif name in recipe.get('bindings',{}):
            target = int(recipe['bindings'][name],0)+addend
        else:
            symbol = relocation['symbol_record']
            require(0 < symbol[3] < len(obj.sections),'Unresolved symbol '+name)
            storage = obj.sections[symbol[3]];width = storage[9];offset = symbol[4]+addend
            require(storage[1] == 1 and storage[2]&2 and storage[2]&0x10 and not storage[2]&5,'Not a mergeable immutable literal')
            require(width in (4,8,16) and offset%width == 0 and 0 <= offset <= storage[5]-width,'Invalid literal extent')
            literal = obj.data[storage[4]+offset:storage[4]+offset+width]
            target = int(recipe['literals'][literal.hex()],0)
            require(any(s[1] != 8 and s[2]&2 and not s[2]&5 and s[3] <= target < target+width <= s[3]+s[5]for s in original.sections),'Literal destination is not immutable')
            require(original.at(target,width) == literal,'Original literal bytes differ')
        relocate(actual,relocation['offset'],kind,target,int(recipe['address'],0))
        used.append(dict(offset=relocation['offset'],kind=kind,symbol=name,target=hex(target)))
    return bytes(actual),used
