#include <stdio.h>
 
int main() {
 
    long long a1, an, sn, n;
    
    scanf("%lld", &a1);
    scanf("%lld", &an);
    
    n = an - a1 + 1;
    sn = (a1 + an) * n / 2;
    printf("%lld\n", sn);
 
    return (0);
}