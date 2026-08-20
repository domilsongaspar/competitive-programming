x = input().split()
original = x
organizado = sorted([int(_) for _ in x])

for i in organizado:
    print(i)

print()

for j in original:
    print(j)