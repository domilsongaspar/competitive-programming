s = 0
n = 0
p = 0
for i in range(6):
    n = float(input())
    if (n >= 0):
        p += 1
        s += n
m = s / p
print(f"{p} valores positivos")
print(f"{m:.1f}")