"""Reject incorrect import identities even when their GOT addresses would link."""
import copy
import struct
import unittest
from types import SimpleNamespace
from elf import Elf,link_method


def dynamic_elf(kind=1025,addend=0,defined=False):
    obj=Elf.__new__(Elf)
    names=b'\0_ZTIc\0'
    symbols=bytes(24)+struct.pack('<IBBHQQ',1,17,0,1 if defined else 0,0,0)
    obj.data=names+symbols+struct.pack('<QQq',0x2000,(1<<32)|kind,addend)
    strings=(0,3,0,0,0,len(names),0,0,1,0)
    table=(0,11,0,0,len(names),len(symbols),1,0,8,24)
    rel=(0,4,0,0,len(names)+len(symbols),24,2,0,8,24)
    obj.sections=[(),strings,table,rel];obj.named={'.rela.dyn':rel}
    return obj


class ImportedGotTests(unittest.TestCase):
    def test_only_undefined_zero_addend_object_imports(self):
        self.assertEqual(dynamic_elf().imported_got_symbols(),{0x2000:'_ZTIc'})
        for kwargs in ({'kind':1027},{'addend':8},{'defined':True}):
            with self.subTest(kwargs=kwargs):self.assertEqual(dynamic_elf(**kwargs).imported_got_symbols(),{})

    def test_link_checks_identity_addend_storage_and_undefined_source(self):
        record=(0,17,0,0,0,0)
        low=dict(symbol='_ZTIc',kind=312,offset=4,addend=0,symbol_record=record)
        rels=[dict(low,kind=311,offset=0),low]
        code=struct.pack('<II',0x90000000,0xf9400000)
        obj=SimpleNamespace(method=lambda _: (code,rels))
        original=dynamic_elf();original.segments=[(1,6,0,0x2000,0,8,8,8)]
        recipe=dict(symbol='example',address='0x3000',got_bindings={'_ZTIc':{'cell':'0x2000','import':'_ZTIc'}})
        linked,used=link_method(obj,recipe,original,{})
        self.assertEqual(len(linked),8);self.assertEqual([u['target']for u in used],['0x2000','0x2000'])
        for label,edit in (
            ('wrong import',lambda r:r['got_bindings']['_ZTIc'].update({'import':'_ZTIi'})),
            ('wrong cell',lambda r:r['got_bindings']['_ZTIc'].update(cell='0x2008')),
            ('ambiguous',lambda r:r['got_bindings']['_ZTIc'].update(pointee='0x1000')),
        ):
            changed=copy.deepcopy(recipe);edit(changed)
            with self.subTest(label=label),self.assertRaises(ValueError):link_method(obj,changed,original,{})
        with self.assertRaises(ValueError):link_method(obj,recipe,original,{0x2000:0x1000})
        for r in rels:r['addend']=8
        with self.assertRaises(ValueError):link_method(obj,recipe,original,{})
        for r in rels:r.update(addend=0,symbol_record=(0,17,0,1,0,8))
        with self.assertRaises(ValueError):link_method(obj,recipe,original,{})
        for r in rels:r['symbol_record']=record
        original.segments=[(1,4,0,0x2000,0,8,8,8)]
        with self.assertRaisesRegex(ValueError,'writable'):link_method(obj,recipe,original,{})


if __name__=='__main__':unittest.main()
