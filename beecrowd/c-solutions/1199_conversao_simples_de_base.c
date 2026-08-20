#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long hex_to_decimal(char *number)
{
    int _exp = 0, index = 0, value, diff;
    size_t  i;
    long res = 0;
    
    i = strlen(number);
    for (; i > 0; i--)
    {
        value = number[i - 1] - '0';
        diff = 55;
        if (number[i - 1] >= 'a' && number[i - 1] <= 'z')
            diff = 87;
        if (number[i - 1] < '0' || number[i - 1] > '9')
            value = number[i - 1] - diff;
        res += value * pow(16, _exp);
        _exp++;
    }
    return (res);
}
 
int main() {
    char *number;
    int base;
    long n;

    while (1)
    {
        number = malloc(sizeof(char) * 32);
        scanf("%s", number);
        if (number[0] == '-')
            break ;
        base = 10;
        if (number[1] == 'x' || number[1] == 'X')
            base = 16;
        if (base == 10)
        {
            n = atol(number);
            printf("0x%X\n", n);
        }
        if (base == 16)
        {
            number += 2;
            printf("%ld\n", hex_to_decimal(number));
        }
    }
 
    return 0;
}