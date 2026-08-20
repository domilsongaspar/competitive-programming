#include <stdio.h>

int Fatorial(int n)
{
    if (n < 2)
        return (n);
    return n * Fatorial(n - 1);
}

int main() {
    int N;
    
    scanf("%i", &N);
    printf("%d\n", Fatorial(N));
    return 0;
}