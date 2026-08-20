# This solution is not approved, it received Time Limit Exceeded
def contar_digitos(A, B):
    contador_digitos = [0] * 10

    for numero in range(A, B + 1):
        temp_numero = numero
        while temp_numero > 0:
            digito = temp_numero % 10
            contador_digitos[digito] += 1
            temp_numero //= 10

    return contador_digitos

while True:
    A, B = map(int, input().split())
    if A == 0 and B == 0:
        break
    resultado = contar_digitos(A, B)
    print(*resultado)