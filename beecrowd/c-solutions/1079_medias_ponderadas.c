#include <stdio.h>
 
int main() {
 
    int N;
    float n1, n2, n3, m;
    
    scanf("%d", &N);
    while (N-- > 0)
    {
        scanf("%f %f %f", &n1, &n2, &n3);
        m = (n1 * 0.2 + n2 * 0.3 + n3 * 0.5);
        printf("%.1f\n", m);
    }
 
    return 0;
}