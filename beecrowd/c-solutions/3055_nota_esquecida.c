#include <stdio.h>
 
int main() {
    int A, M, N;
 
    scanf("%d", &A);
    scanf("%d", &M);
    
    N = M * 2 - A;
    printf("%d\n", N);
    return (0);
}