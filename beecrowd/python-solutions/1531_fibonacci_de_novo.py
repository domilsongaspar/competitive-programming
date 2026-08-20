# This solution is not approved

# Função para calcular o resto de Fib(n) % m
def fibonacci_modulo(n, m):
    if n == 0:
        return 0, 1

    a, b = fibonacci_modulo(n // 2, m)
    c = (a * ((b << 1) - a + m)) % m
    d = (a * a + b * b) % m

    if n % 2 == 0:
        return c, d
    else:
        return d, (c + d) % m

# Função para calcular o resto de Fib(Fib(N)) % M
def fibonacci_fibonacci_modulo(N, M):
    if N == 0:
        return 0
    _, result = fibonacci_modulo(N - 1, M)
    return result

# Processar casos de teste
while True:
    try:
        # Ler entrada
        N, M = map(int, input().split())

        # Calcular e imprimir o resultado
        result = fibonacci_fibonacci_modulo(N, M)
        print(result)

    except EOFError:
        break
