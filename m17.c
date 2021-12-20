#include <stdio.h>

int main()
{
    int n, i = 0, j = 0, count = 0;
    scanf("%d", &n);
    int a[n];
    int b[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++, count = 0)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {
                count++;
            }
        }
        b[i] = count;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", b[i]);
    }

    return 0;
}