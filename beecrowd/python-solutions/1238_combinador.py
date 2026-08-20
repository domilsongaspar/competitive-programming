# This solution was not submitted

def Combinar(_txt):
    _str0 = _txt[0]
    _str1 = _txt[1]

    _str_long = _str0 if (len(_str0) > len(_str1)) else _str1
    _str_short = _str0 if (len(_str0) < len(_str1)) else _str1
    _str_equal = len(_str0) == len(_str1)

    r = ""
    i = 0

    while i < len(_str0):
        if _str_equal:
            r += _str0[i] + _str1[i]
        else:
            r += _str_short[i] + _str_long[i]
        i += 1
        
    if not _str_equal:
        r += _str_long[i:]
    return r

N = int(input())
i = 0
_outs = []

while i < N:
    _str = input().split()
    _outs.append(Combinar(_str))
    i += 1
for j in _outs:
    print(j)
