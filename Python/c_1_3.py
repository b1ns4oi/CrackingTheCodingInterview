def is_permutation(str1, str2):
    # Assume it's ASCII string
    if len(str1) != len(str2):
        return False
    char_dic1 = [0] * 128
    char_dic2 = [0] * 128
    for c in str1:
        char_dic1[ord(c)] += 1
    for c in str2:
        char_dic2[ord(c)] += 1

    # compare
    for i, count in enumerate(char_dic1):
        if char_dic2[i] != count:
            print('Error...Character "{}", str1: {}, '
                  'str2: {}'.format(chr(i), count, char_dic2[i]))
            return False
    return True
