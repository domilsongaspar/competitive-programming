#include <stdio.h>
 
int main() {
 
    int p, q, n;
    float res;
    
    res = 0;
    scanf("%d", &p);
    while (p-- > 0)
    {
        scanf("%d %d", &n, &q);
        if (n == 1001)
            res += 1.50 * q;
        if (n == 1002)
            res += 2.50 * q;
        if (n == 1003)
            res += 3.50 * q;
        if (n == 1004)
            res += 4.50 * q;
        if (n == 1005)
            res += 5.50 * q;
    }
    printf("%.2f\n", res);
    return (0);
}