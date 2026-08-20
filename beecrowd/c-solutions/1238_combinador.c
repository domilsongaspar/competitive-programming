#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() {
 
    int N;
    size_t len1, len2, min;
    char *s1, *s2, *tmp1, *tmp2;
    
    scanf("%d", &N);
    getchar();
    for (int i = 0; i < N; i++)
    {
        s1 = malloc(sizeof(char) * 64);
        s2 = malloc(sizeof(char) * 64);
        scanf("%s %s", s1, s2);
        tmp1 = s1;
        tmp2 = s2;
        len1 = strlen(s1);
        len2 = strlen(s2);
        min = (len1 + len2 - abs(len1 - len2)) / 2;
        for (int j = 0; j < min; j++)
        {
            printf("%c%c", *s1, *s2);
            s1++; s2++;
        }
        while (*s1 != '\0')
            printf("%c", *(s1++));
        while (*s2 != '\0')
            printf("%c", *(s2++));
        printf("\n");
        free(tmp1);
        free(tmp2);
    }
 
    return 0;
}