#include <stdio.h>
 
int main() {
    double a, b, average;
    
    scanf("%lf\n%lf", &a, &b);
    
    average = (a * 3.5 + b * 7.5) / 11;
    printf("MEDIA = %.5lf\n", average);
 
    return 0;
}