#include <stdio.h>
 
int main() {
    int C;
    char T;
    float sum, M[12][12];
    
    scanf("%i", &C);
    getchar();
    scanf("%c", &T);
    
    sum = 0;
    for (int y = 0; y < 12; y++)
    {
        for (int x = 0; x < 12; x++)
        {
            scanf("%f", &M[y][x]);
            if (x == C)
                sum += M[y][x];
        }
    }
    if (T == 'S')
        printf("%.1f\n", sum);
    if (T == 'M')
        printf("%.1f\n", sum / 12);
    return 0;
}