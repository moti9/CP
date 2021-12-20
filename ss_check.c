#include "stdio.h"
int main()
{
    int i, n;
    long int a, b;
    puts("enter no:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            if (i == 1)
            {
                a = 1;
            }
            else
                a = a * 2;
            printf("%ld ", a);
        }
        else
        {
            if (i == 2)
                b = 1;

            else
                b = b * 3;
            printf("%ld ", b);
        }
        // printf("%d ", a);
        // printf("%ld ", b);
    }
    if (n % 2 != 0)
    {
        printf("\n%d terms of series is %d", n, a);
    }
    else
    {
        printf("\n%d terms of series is %d", n, b);
    }
    return 0;
}