def is_char_unique_str(s):
    if not s:
        return True
    st = {i for i in s}
    return len(s) == len(st)

def is_char_unique_str_without_datastructure(s):
    if not s:
        return True
    for i, c in enumerate(s):
        if c in s[i+1:]:
            return False
    return True
