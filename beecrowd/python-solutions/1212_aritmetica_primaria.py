def count_carry_operations(num1, num2):
    carry = 0
    carry_count = 0

    digits1 = [int(digit) for digit in str(num1)]
    digits2 = [int(digit) for digit in str(num2)]

    # Preenche com zeros à esquerda para igualar o comprimento das listas
    len_max = max(len(digits1), len(digits2))
    digits1 = [0] * (len_max - len(digits1)) + digits1
    digits2 = [0] * (len_max - len(digits2)) + digits2

    # Itera da direita para a esquerda
    for i in range(len_max - 1, -1, -1):
        current_sum = digits1[i] + digits2[i] + carry

        carry = current_sum // 10

        if carry > 0:
            carry_count += 1

    return carry_count

carry_count = []
while True:
    num1, num2 = map(int, input().split())
    
    if num1 == 0 and num2 == 0:
        break
    
    # Calcula e imprime o número de carries
    carry_count.append(count_carry_operations(num1, num2))
    
for i in carry_count:
    if i == 0:
        print("No carry operation.")
    elif i == 1:
        print("1 carry operation.")
    else:
        print(f"{i} carry operations.")
