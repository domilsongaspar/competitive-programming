# Função para verificar se um número é primo
def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

# Número de casos de teste
N = int(input())

# Processar cada caso de teste
for _ in range(N):
    # Número a ser testado
    X = int(input())

    # Verificar se o número é primo e imprimir o resultado
    if is_prime(X):
        print("Prime")
    else:
        print("Not Prime")
