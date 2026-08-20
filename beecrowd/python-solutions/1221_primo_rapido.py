def is_prime(N):
    if N < 2:
        return False
    for i in range(2, int(N**0.5)+1):
        if N % i == 0:
            return False
    return True
    
N = int(input())
X = 0
for _ in range(N):
    X = int(input())
    
    if is_prime(X):
        print("Prime")
    else:
        print("Not Prime")