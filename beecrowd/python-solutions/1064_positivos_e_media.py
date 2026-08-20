positivos = 0
soma = 0
for _ in range(6):
    n = float(input())
    if n >= 0:
        positivos += 1
        soma += n
media = soma / positivos
print(f"{positivos} valores positivos")
print(f"{media:.1f}")