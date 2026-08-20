N = int(input())
case = 1

for _ in range(0, N):
    line = input();
    value = line.split()[0]
    base = line.split()[1]
    
    print(f"Case {case}:")
    
    if base == "bin":
        print(int(value, 2), "dec")
        print(hex(int(value, 2))[2:], "hex")
    elif base == "hex":
        print(int(value, 16), "dec")
        print(bin(int(value, 16))[2:], "bin")
    else:
        print(hex(int(value))[2:], "hex")
        print(bin(int(value))[2:], "bin")
    print()
    case += 1