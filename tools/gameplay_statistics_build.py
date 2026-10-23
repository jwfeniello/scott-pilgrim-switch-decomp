"""Compile and link the shared statistics implementation at original locations."""
from pathlib import Path
from discover_engine_families import compile_family
from elf import immutable_literal, link_method, require
from project import ROOT, digest

FLAGS = ['-target', 'aarch64-none-elf', '-std=c++11', '-O2', '-mcpu=cortex-a57',
         '-fomit-frame-pointer', '-fno-pic', '-fno-strict-aliasing',
         '-ffunction-sections', '-fdata-sections']
FUNCTIONS = {'DispatchPlayerStatistic': 0x986410, 'MarkLifeEvent': 0x79ef90,
             'RecordDamage': 0x79f0e0, 'RecordPurchase': 0x79f170,
             'RecordLifeTakenBy': 0x79f1f0, 'RecordLifeTakenFrom': 0x79f270,
             'RecordThrown': 0x79f430, 'RecordKilled': 0x79f4b0,
             'RecordReanimated': 0x79f530, 'RecordTaunted': 0x79f5b0}
BINDINGS = {'GetStatisticsBureau': 0x772920, 'GetStatisticsContext': 0x777710,
            'InitializeStatisticStore': 0x6f3340, 'FindStatistic': 0x6f3670,
            'GameplayStatisticStore': 0x191c980,
            **dict(zip(['DamageLabels', 'PurchaseLabels', 'LifeTakenByLabels',
                        'LifeTakenFromLabels', 'ThrownLabels', 'KilledLabels',
                        'ReanimatedLabels', 'TauntedLabels'],
                       [0x1846508, 0x1846548, 0x1846568, 0x1846588,
                        0x1846648, 0x1846668, 0x1846688, 0x18466c8]))}


def compile_statistics(elf, compiler, folder, source=None):
    source = source or ROOT/'src/gameplay/Statistics.cpp'
    obj = compile_family(compiler, source, Path(folder)/'gameplay_statistics.o', dict(flags=FLAGS))
    spans, relative, results = elf.unwind_ranges(), elf.relative_relocations(), []
    for name, address in FUNCTIONS.items():
        code, relocs = obj.method(name)
        literals, bindings = {}, {}
        for relocation in relocs:
            symbol = relocation['symbol']
            if symbol in BINDINGS:
                bindings[symbol] = hex(BINDINGS[symbol])
                continue
            literal = immutable_literal(obj, relocation)
            for section in elf.sections:
                if section[1] == 8 or not section[2] & 2 or section[2] & 5: continue
                offset = elf.section_bytes(section).find(literal)
                if offset >= 0:
                    literals[literal.hex()] = hex(section[3]+offset)
                    break
            require(literal.hex() in literals, 'Original string not found')
        recipe = dict(address=hex(address), size=spans[address], symbol=name,
                      target_sha256=digest(elf.at(address, spans[address])), bindings=bindings,
                      got_bindings={}, literals=literals)
        linked, _ = link_method(obj, recipe, elf, relative)
        require(len(linked) <= spans[address], 'Integrated code would overlap another function')
        results.append((recipe, linked, linked == elf.at(address, spans[address])))
    return results
