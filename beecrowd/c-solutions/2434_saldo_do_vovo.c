#include <stdio.h>
 
int main() {
 
    int n, s, moves, smallest;
    
    scanf("%d %d", &n, &s);
    smallest = s;
    while (n-- > 0)
    {
        scanf("%d", &moves);
        s += moves;
        if (s < smallest)
            smallest = s;
    }
    printf("%d\n", smallest);
    return 0;
}