# This solution was not submitted
import math

def Ones(n):
    if (n % 2) != 0 or (n % 5) != 0:
        return True
    return False
def menor_multiplo(n):
    multiplos = []
    append = multiplos.append
    
    for i in range(1, int(n/2)+1):
        if n % i == 0:
            append(i)
    return multiplos

while True:
    try:
        n = int(input())
        print(menor_multiplo(n))
    except EOFError:
        break
