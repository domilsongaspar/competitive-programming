#include <stdio.h>
 
int main() {
 
    int    v[4];
    
    scanf("%d %d %d %d", &v[0], &v[1], &v[2], &v[3]);
    for (int i  = 0; i < 4; i++)
    {
        if (v[i] == 1)
        {
            printf("%d\n", i + 1);
            break ;
        }
    }
 
    return 0;
}