import unittest
from c_source_functions import index,add_side_effect

class CSourceIndexTests(unittest.TestCase):
    def test_attributes_literals_and_initializer_are_distinguished(self):
        source='''typedef struct { int a; } Item;
static const Item items[] = { { 1 }, { 2 } };
__attribute__((noinline)) int actual(int x) { const char* text="brace } and asm"; if(x) { return 1; } return 2; }
void* (*callback(void))(int) { return 0; }
'''
        definitions=index(source)
        self.assertEqual(set(definitions),{'actual','callback'})
        self.assertFalse(definitions['actual']['has_inline_asm'])
        changed=add_side_effect(source,definitions)
        self.assertEqual(changed.count('LeafAddedSideEffect();'),2)
        self.assertIn('items[] = { { 1 }, { 2 } };',changed)
    def test_diagnostic_arguments_and_active_asm(self):
        source='''void ordinary(void) { ERR_put_error(1,2,3,"file.c",123); CRYPTO_malloc(sizeof(int),"file.c",456); }
void assembler(void) { __asm__("nop"); }
'''
        definitions=index(source)
        self.assertEqual([(c['callee'],c['value'])for c in definitions['ordinary']['diagnostics']],[('ERR_put_error',123),('CRYPTO_malloc',456)])
        self.assertTrue(definitions['assembler']['has_inline_asm'])
    def test_old_style_parameter_declarations_keep_the_function_header(self):
        source='''typedef unsigned long uLong;
extern __attribute__((nothrow)) int decorated(int);
typedef struct { int quotient; } Result;
typedef void (*Handler)(int);
uLong prototype(uLong x);
uLong checksum(value, buffer, length)
    uLong value;
    const unsigned char *buffer;
    unsigned length;
{ return value + (length ? buffer[0] : 0); }
int legacy_asm(value)
    int value;
{ __asm__("nop"); return value; }
int modern(void) { return 7; }
'''
        definitions=index(source)
        self.assertEqual(set(definitions),{'checksum','legacy_asm','modern'})
        self.assertTrue(source[definitions['checksum']['start']:].startswith('uLong checksum('))
        self.assertFalse(definitions['checksum']['has_inline_asm'])
        self.assertTrue(definitions['legacy_asm']['has_inline_asm'])
        changed=add_side_effect(source,definitions)
        self.assertEqual(changed.count('LeafAddedSideEffect();'),3)
        self.assertIn('uLong prototype(uLong x);',changed)
        self.assertIn('{ LeafAddedSideEffect();  return value',changed)
if __name__=='__main__':unittest.main()
