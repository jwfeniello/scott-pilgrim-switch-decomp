"""Exercise provenance failures, whole-code reporting and relocation boundaries."""
import copy
import json
import os
from pathlib import Path
import shutil
import struct
import tempfile
import unittest

from elf import relocate
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
