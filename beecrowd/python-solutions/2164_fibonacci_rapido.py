def Fib(n):
    return ((((1+5**0.5)/2)**n) - (((1-5**0.5)/2)**n)) / (5**0.5)
n = int(input())
n = Fib(n)
print(f"{n:.1f}")
