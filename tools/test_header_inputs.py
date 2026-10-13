import json
from pathlib import Path
import tempfile
import unittest
from project import input_hashes

class HeaderInputTests(unittest.TestCase):
    def fixture(self,root,header_root='vendor/include'):
        for directory in ('config','src','tools','vendor/include'):(root/directory).mkdir(parents=True,exist_ok=True)
        for name in ('config/target.json','config/functions.tsv','tools/elf.py','tools/project.py','tools/verify.py'):(root/name).write_text('{}')
        (root/'src/View.cpp').write_text('#include <public_api.h>\n')
        (root/'vendor/include/public_api.h').write_text('struct Value {unsigned size;};\n')
        (root/'config/builds.json').write_text(json.dumps(dict(builds=[dict(source='src/View.cpp',header_roots=[header_root])])))

    def test_system_header_changes_and_additions_invalidate_inputs(self):
        with tempfile.TemporaryDirectory()as folder:
            root=Path(folder);self.fixture(root);original=input_hashes(root)
            self.assertIn('vendor/include/public_api.h',original)
            (root/'vendor/include/public_api.h').write_text('struct Value {unsigned long size;};\n')
            self.assertNotEqual(input_hashes(root),original)
            changed=input_hashes(root);(root/'vendor/include/extra.h').write_text('// new configuration\n')
            self.assertNotEqual(input_hashes(root),changed)

    def test_header_root_cannot_escape_or_disappear(self):
        with tempfile.TemporaryDirectory()as folder:
            root=Path(folder)/'project';root.mkdir();self.fixture(root,'../outside')
            with self.assertRaisesRegex(ValueError,'Input path escapes'):input_hashes(root)
            self.fixture(root,'vendor/missing')
            with self.assertRaisesRegex(ValueError,'Missing header root'):input_hashes(root)

if __name__=='__main__':unittest.main()
