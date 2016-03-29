
import unittest

from ..Python.c_1_1 import is_char_unique_str, is_char_unique_str_without_datastructure

class Test_1_1(unittest.TestCase):
    def test_is_char_unique_str(self):
        self.assertTrue(is_char_unique_str(''))
        self.assertTrue(is_char_unique_str('a'))
        self.assertTrue(is_char_unique_str('ab'))
        self.assertTrue(is_char_unique_str('abc'))

        self.assertFalse(is_char_unique_str('aa'))
        self.assertFalse(is_char_unique_str('abcdefghh'))
        self.assertFalse(is_char_unique_str('abcdefgha'))

    def test_is_char_unique_str_without_datastructure(self):
        self.assertTrue(is_char_unique_str(''))
        self.assertTrue(is_char_unique_str('a'))
        self.assertTrue(is_char_unique_str('ab'))
        self.assertTrue(is_char_unique_str('abc'))

        self.assertFalse(is_char_unique_str('aa'))
        self.assertFalse(is_char_unique_str('abcdefghh'))
        self.assertFalse(is_char_unique_str('abcdefgha'))