#include <stdio.h>

int main()
{
    int N;
    int a, b, r, i;
    
    a = 0;
    b = 1;
    r = 0;
    i = 0;
    scanf("%d", &N);
    if (N < 1)
        return (0);
    while (i < N)
    {
        a = b;
        b = r;
        printf("%d", r);
        if (i + 1 < N)
            printf(" ");
        r = a + b;
        i++;
    }
    printf("\n");
    
    return (0);
}