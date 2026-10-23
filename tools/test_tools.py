"""Exercise provenance failures, whole-code reporting and relocation boundaries."""
import copy
import json
import os
from pathlib import Path
import shutil
import struct
import tempfile
import unittest
from types import SimpleNamespace

from elf import immutable_literal,immutable_section,link_method,relocate
from project import ROOT,input_hashes,load,validated_snapshot
from report import make_report
from check_publish import check_report


class ReportTests(unittest.TestCase):
    def test_current_report_and_unmatched_denominator(self):
        report = make_report();check_report(report)
        m = report['measures']
        snapshot = load(ROOT/'progress/verified.json')
        self.assertEqual(int(m['total_code']),16396664)
        self.assertEqual(int(m['matched_code']),snapshot['exact_bytes'])
        self.assertEqual(m['total_functions'],53675)
        self.assertEqual(m['matched_functions'],snapshot['exact_functions'])
        self.assertAlmostEqual(m['matched_code_percent'],100*snapshot['exact_bytes']/16396664)
        self.assertEqual(int(m['complete_code']),0)
        unknown = next(u for u in report['units']if u['name']=='unmatched/text_without_fde')
        self.assertEqual(int(unknown['measures']['total_code']),559736)
        self.assertEqual(unknown['functions'],[])

    def test_stale_source_and_tampered_snapshot(self):
        with tempfile.TemporaryDirectory(dir=os.environ.get('SCOTT_TEST_TMP')) as temporary:
            root = Path(temporary)
            for name in (*input_hashes(), 'progress/verified.json'):
                destination = root/name;destination.parent.mkdir(parents=True,exist_ok=True)
                shutil.copyfile(ROOT/name,destination)
            self.assertEqual(validated_snapshot(root)[2]['exact_functions'],load(ROOT/'progress/verified.json')['exact_functions'])
            source = root/'src/LazyTypeInfo.cpp';saved = source.read_bytes()
            source.write_bytes(saved+b'\n')
            with self.assertRaisesRegex(ValueError,'Stale'):validated_snapshot(root)
            source.write_bytes(saved)
            path = root/'progress/verified.json';original = load(path)
            for label,edit in (
                ('wrong_bytes',lambda r:r['matches'][0].update(compiled_sha256='0'*64)),
                ('partial',lambda r:r['matches'][0].update(size=r['matches'][0]['size']-4)),
                ('duplicate',lambda r:r['matches'].append(r['matches'][0])),
                ('missing',lambda r:r['matches'].pop()),
            ):
                with self.subTest(label=label):
                    changed = copy.deepcopy(original);edit(changed)
                    path.write_text(json.dumps(changed))
                    with self.assertRaises(ValueError):validated_snapshot(root)

    def test_wrong_report_totals_and_function_credit(self):
        original = make_report()
        changed = copy.deepcopy(original);changed['measures']['total_code']='670820'
        with self.assertRaises(ValueError):check_report(changed)
        changed = copy.deepcopy(original)
        for unit in changed['units']:
            if unit['functions']:
                unit['functions'][0]['fuzzy_match_percent']=99
                break
        with self.assertRaises(ValueError):check_report(changed)


class RelocationTests(unittest.TestCase):
    def test_unnamed_jump_table_and_strings_are_bound_separately(self):
        table = (0,1,2,0,0,8,0,0,2,0)
        strings = (0,1,0x32,0,8,4,0,0,1,1)
        code = struct.pack('<IIII',0x90000002,0x91000042,0x90000001,0x91000021)
        table_low = dict(symbol='',kind=277,offset=4,addend=2,symbol_record=(0,3,0,1,2,0))
        string_low = dict(symbol='',kind=277,offset=12,addend=0,symbol_record=(0,3,0,2,0,0))
        rels = [dict(table_low,kind=275,offset=0),table_low,
                dict(string_low,kind=275,offset=8),string_low]
        obj = SimpleNamespace(data=b'abcdefgh' + b'tag\0',sections=[(),table,strings],
                              method=lambda _: (code,rels))
        original = SimpleNamespace(sections=[(0,1,2,0x1000,0,8,0,0,2,0),
                                             (0,1,2,0x2000,0,4,0,0,1,0)],
                                   at=lambda address,size:{0x1000:b'abcdefgh',0x2000:b'tag\0'}[address][:size])
        recipe = dict(symbol='switch',address='0x3000',bindings={},
                      immutable_sections={'1':'0x1000'},literals={'74616700':'0x2000'})
        linked,used = link_method(obj,recipe,original,{})
        self.assertEqual([u['target'] for u in used],['0x1004','0x1004','0x2000','0x2000'])
        self.assertEqual(struct.unpack_from('<I',linked,4)[0],0x91001042)
        # The unreferenced beginning of the table must also match.
        obj.data = b'Xbcdefgh' + b'tag\0'
        with self.assertRaisesRegex(ValueError,'Original immutable section bytes differ'):
            link_method(obj,recipe,original,{})
        obj.data = b'abcdefgh' + b'tag\0'
        for flags in (3,6,0x12):
            changed = list(table);changed[2]=flags;obj.sections[1]=tuple(changed)
            with self.assertRaises(ValueError):immutable_section(obj,table_low)
        obj.sections[1]=table
        with self.assertRaisesRegex(ValueError,'offset'):
            immutable_section(obj,dict(table_low,addend=6))
        obj.sections.append((0,4,0,0,0,24,0,1,8,24))
        with self.assertRaisesRegex(ValueError,'contains relocations'):
            immutable_section(obj,table_low)
        obj.sections.pop()
        original.sections[0]=(0,1,3,0x1000,0,8,0,0,2,0)
        with self.assertRaisesRegex(ValueError,'destination is not immutable'):
            link_method(obj,recipe,original,{})

    def test_string_literals_check_content_termination_and_storage(self):
        section = (0,1,0x32,0,0,4,0,0,1,1)
        relocation = dict(symbol='',kind=277,offset=4,addend=0,
                          symbol_record=(0,0,0,1,0,4))
        code = struct.pack('<II',0x90000002,0x91000042)
        high = dict(relocation,kind=275,offset=0)
        obj = SimpleNamespace(data=b'tag\0',sections=[(),section],
                              method=lambda _: (code,[high,relocation]))
        original = SimpleNamespace(sections=[(0,1,2,0x1000,0,4,0,0,1,0)],
                                   at=lambda address,size:b'tag\0'[:size])
        recipe = dict(symbol='example',address='0x2000',bindings={},
                      literals={'74616700':'0x1000'})
        self.assertEqual(immutable_literal(obj,relocation),b'tag\0')
        linked,used = link_method(obj,recipe,original,{})
        self.assertEqual(len(linked),8);self.assertEqual(len(used),2)
        original.at = lambda address,size:b'bad\0'[:size]
        with self.assertRaisesRegex(ValueError,'Original literal bytes differ'):
            link_method(obj,recipe,original,{})
        obj.data = b'tag!'
        with self.assertRaisesRegex(ValueError,'Unterminated'):
            immutable_literal(obj,relocation)
        obj.data = b'tag\0'
        for flags,width,offset in ((0x33,1,0),(0x22,1,0),(0x32,2,0),(0x32,1,4)):
            with self.subTest(flags=flags,width=width,offset=offset):
                changed = list(section);changed[2]=flags;changed[9]=width
                obj.sections=[(),tuple(changed)]
                with self.assertRaises(ValueError):
                    immutable_literal(obj,dict(relocation,addend=offset))

    def test_branches_reject_alignment_range_and_opcode_errors(self):
        for word,target in ((0x94000000,3),(0x94000000,1<<28),(0xd65f03c0,4)):
            with self.subTest(word=hex(word),target=target):
                with self.assertRaises(ValueError):relocate(bytearray(struct.pack('<I',word)),0,283,target,0)

    def test_load_width_and_got_opcode_are_checked(self):
        for word,kind,target in ((0xf9400000,285,0),(0x39400000,286,0),(0xf9400000,312,1),
                                 (0xf9000000,312,0),(0x3dc00000,278,0)):
            with self.subTest(word=hex(word),kind=kind):
                with self.assertRaises(ValueError):relocate(bytearray(struct.pack('<I',word)),0,kind,target,0)


if __name__ == '__main__':unittest.main()
