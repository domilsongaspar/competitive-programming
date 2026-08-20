while True:
    A, B, C = map(int, input().split())

    if A == 0:
        break

    area_casa = A * B
    lado_terreno = int((area_casa * 100) / C) ** 0.5

    print(lado_terreno)
