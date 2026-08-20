import math

fat = math.factorial

while True:
    n_lista = [_ for _ in input()]
    
    if n_lista[0] == '0':
        break
    
    tamanho_lista = len(n_lista)
    r = 0
    
    for i in n_lista:
        r += int(i) * fat(tamanho_lista)
        tamanho_lista -= 1
    print(r)