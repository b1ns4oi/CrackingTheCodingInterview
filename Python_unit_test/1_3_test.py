import unittest

from ..Python.c_1_3 import is_permutation

class Test_1_3(unittest.TestCase):
    def test_is_permutation(self):
    	self.assertTrue(is_permutation('', ''))
    	self.assertTrue(is_permutation('a', 'a'))
    	self.assertTrue(is_permutation('aa', 'aa'))
    	self.assertTrue(is_permutation('ab', 'ab'))
    	self.assertTrue(is_permutation('ab', 'ba'))
    	self.assertTrue(is_permutation('abc', 'abc'))
    	self.assertTrue(is_permutation('abc', 'cba'))
    	self.assertTrue(is_permutation('abc', 'acb'))
    	self.assertTrue(is_permutation('aabcdefghijkl', 'alkjihgfedcba'))

    	self.assertFalse(is_permutation('', 'a'))
    	self.assertFalse(is_permutation('a', 'aa'))
    	self.assertFalse(is_permutation('ab', 'aa'))
    	self.assertFalse(is_permutation('abc', 'abb'))
