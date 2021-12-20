#include <stdio.h>

int main()
{
    // your code goes here
    int n, i, j, k = 1, temp;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", k++);
            if (i != j)
                printf("*");
        }
        printf("\n");
    }
    k -= n;
    temp = k;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", temp++);
            if (j != i)
                printf("*");
        }
        printf("\n");
        k -= (i - 1);
        temp = k;
    }
    return 0;
}

/*
1
2*3
4*5*6
7*8*9*10
7*8*9*10
4*5*6
2*3
1
*/