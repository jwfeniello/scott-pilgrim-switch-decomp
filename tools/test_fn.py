"""Tests for the parts of tools/fn.py that need no original ELF or compiler."""
import unittest

import fn


class NormalizeTest(unittest.TestCase):
    def test_relocated_fields_do_not_count(self):
        original = ['adrp x8, #0x191d000', 'ldr x10, [x8, #0xce8]', 'add x9, x8, #0x20', 'bl #0x812930',
                    'b.eq #0x8f6b10', 'ldr w1, [x19, #8]']
        ours = ['adrp x8, #0', 'ldr x10, [x8]', 'add x9, x8, #0', 'bl #0', 'b.eq #8', 'ldr w1, [x19, #8]']
        text, changed = fn.aligned_diff(original, ours)
        self.assertEqual(changed, 0, text)

    def test_real_difference_counts(self):
        text, changed = fn.aligned_diff(['ldr w1, [x19, #8]', 'ret'], ['ldr w2, [x19, #8]', 'ret'])
        self.assertEqual(changed, 2)
        self.assertIn(' -  ldr w1, [x19, #8]', text)
        self.assertIn(' +  ldr w2, [x19, #8]', text)

    def test_page_register_forgotten_after_overwrite(self):
        lines = fn.normalize(['adrp x8, #0x1000', 'mov x8, x0', 'ldr x1, [x8, #16]'])
        self.assertEqual(lines[-1], 'ldr x1, [x8, #16]')

    def test_orr_alias_reads_as_mov(self):
        self.assertEqual(fn.normalize(['orr w20, wzr, #1']), ['mov w20, #1'])


class NamesTest(unittest.TestCase):
    def test_mangled_part_from_signature(self):
        self.assertEqual(fn.mangled_part('void TimerAction::Start(void*) {'), '11TimerAction5Start')
        self.assertEqual(fn.mangled_part('int Onyx::Graphics::Blend::Apply(int a) {'), '5Blend5Apply')

    def test_demangle_type(self):
        self.assertEqual(fn.demangle_type('N4SPTG7StrikerE'), 'SPTG::Striker')
        self.assertEqual(fn.demangle_type('7Striker'), 'Striker')
        self.assertEqual(fn.demangle_type('N4SPTG9AsyncTaskIN4Onyx8FunctionE'), 'SPTG::AsyncTask<...>')

    def test_parse_address(self):
        self.assertEqual(fn.parse_address('0x8f6ae0'), 0x8f6ae0)
        self.assertEqual(fn.parse_address('8f6ae0'), 0x8f6ae0)


if __name__ == '__main__':
    unittest.main()
