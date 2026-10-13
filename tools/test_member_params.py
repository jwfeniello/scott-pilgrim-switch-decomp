import struct
import tempfile
import unittest
from pathlib import Path
from discover_engine_families import member_value,write_instances

class OriginalView:
    def __init__(self,words):self.raw=struct.pack('<'+'I'*len(words),*words)
    def at(self,address,size):return self.raw[:size]

class MemberParameterTests(unittest.TestCase):
    def test_related_member_fields_and_pair_store_recover_one_layout(self):
        original=OriginalView([0xf9400000|(17<<10),0xf9000000|(15<<10),0xa9000000|(14<<15)])
        parameter=dict(kind='ldst_uimm',offset=0,scale=8,fields=[
            dict(offset=4,encoding='ldst_uimm',scale=8,delta=-16),
            dict(offset=8,encoding='pair_simm',scale=8,delta=-24)])
        family=dict(size=12,macro='LAYOUT',parameters=[parameter])
        with tempfile.TemporaryDirectory()as folder:
            path=Path(folder)/'instances.inc';write_instances(path,family,[0x100],original)
            self.assertIn('LAYOUT(0x100u, 0x88u)',path.read_text())
            original.raw=original.raw[:4]+struct.pack('<I',0xf9000000|(16<<10))+original.raw[8:]
            with self.assertRaisesRegex(ValueError,'Inconsistent member-offset'):
                write_instances(path,family,[0x100],original)

    def test_signed_pair_offset_and_wrong_opcode(self):
        raw=struct.pack('<I',0xa9000000|((0x7f-1)<<15))
        location=dict(offset=0,encoding='pair_simm',scale=8)
        self.assertEqual(member_value(raw,location),-16)
        with self.assertRaisesRegex(ValueError,'Unexpected paired-member'):
            member_value(struct.pack('<I',0xd65f03c0),location)
        with self.assertRaisesRegex(ValueError,'Unexpected member-offset'):
            member_value(raw,dict(offset=0,encoding='ldst_uimm',scale=8))

    def test_address_calculation_agrees_with_flag_member(self):
        original=OriginalView([0x39400008|(0x118<<10),0x91000014|(0x108<<10)])
        parameter=dict(kind='ldst_uimm',offset=0,scale=1,fields=[
            dict(offset=4,encoding='add_uimm',scale=1,delta=-16)])
        family=dict(size=8,macro='OWNER',parameters=[parameter])
        with tempfile.TemporaryDirectory()as folder:
            path=Path(folder)/'instances.inc';write_instances(path,family,[0x100],original)
            self.assertIn('OWNER(0x100u, 0x118u)',path.read_text())
            original.raw=original.raw[:4]+struct.pack('<I',0x91000014|(0x100<<10))
            with self.assertRaisesRegex(ValueError,'Inconsistent member-offset'):
                write_instances(path,family,[0x100],original)
        with self.assertRaisesRegex(ValueError,'Unexpected ADD-member'):
            member_value(struct.pack('<I',0xd65f03c0),dict(offset=0,encoding='add_uimm',scale=1))

if __name__=='__main__':unittest.main()
