#include <stdio.h>
#include <stdlib.h>

int getLength(int n)
{
    if (n == 0)
        return 1;
    int len = 0;
    while (n > 0)
    {
        n /= 10;
        len++;
    }
    return len;
}

int main() {
    int a, b, c1, c2, carry, count;
    
    while (1)
    {
        count = 0;
        scanf("%d %d", &a, &b);
        if (!a && !b)
            break;
        
        carry = 0;
        int max_len = (getLength(a) > getLength(b)) ? getLength(a) : getLength(b);
        
        for (int i = 0; i < max_len; i++)
        {
            c1 = a % 10;
            c2 = b % 10;
            if (c1 + c2 + carry > 9)
            {
                carry = 1;
                count++;
            }
            else
                carry = 0;
            
            a /= 10;
            b /= 10;
        }
        
        if (count == 0)
            printf("No carry operation.\n");
        else if (count == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", count);
    }
    return 0;
}