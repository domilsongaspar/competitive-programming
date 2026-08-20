while True:
    try:
        D, N = input().split()
        
        if D == N == "0":
            break
    
        lista = N
        if D in lista:
            lista = lista.remove(D)
        print(lista)
    except EOFError:
        break
