#include <stdio.h>
 
int main() {
 
    int N, current;
    
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &current);
        if (current % 2 == 0)
        {
            if (current > 0)
                printf("EVEN POSITIVE\n");
            else if (current < 0)
                printf("EVEN NEGATIVE\n");
            else
                printf("NULL\n");
        }
        else
        {
            if (current > 0)
                printf("ODD POSITIVE\n");
            else if (current < 0)
                printf("ODD NEGATIVE\n");
            else
                printf("NULL\n");
        }
        
    }
 
    return 0;
}