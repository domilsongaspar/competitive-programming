#include <stdio.h>

long long Fib(long n)
{
    if (n < 2)
        return (n);
    else if (n == 2)
        return (1);
    long long a, b, r, x;
    long long i;
    
    a = 1;
    b = 1;
    r = 0;
    i = 2;
    while (i < n)
    {
        r = a + b;
        a = b;
        b = r;
        ++i;
    }
    return (r);
}

int main() {
    int T, N, i, o;
    
    T = 0;
    scanf("%d", &T);
    long long out[T], index[T];
    i = 0;
    o = T;
    while (T > 0)
    {
        scanf("%d", &N);
        out[i] = Fib(N);
        index[i] = N;
        ++i;
        --T;
    }
    while (T < o)
    {
        printf("Fib(%lld) = %lld\n", index[T], out[T]);
        ++T;
    }
}