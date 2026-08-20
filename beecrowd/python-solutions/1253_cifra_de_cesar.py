def Decifrar(_str, d):
    newStr = ""
    
    for k in _str:
        pos = ord(k)-d
        if pos > 64:
            newStr += chr(pos)
        else:
            ex = 65-pos
            pos = 91-ex
            newStr += chr(pos)
    return newStr

N = int(input())
testes = []

while N > 0:
    txt = input()
    desl = int(input())
    testes.append(Decifrar(txt, desl))
    
    N -= 1

for j in testes:
    print(j)