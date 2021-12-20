#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int sum_b = 0, sum_g = 0;
    char ch;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (i % 2 == 0)
        {
            sum_b += a[i];
        }
        else
        {
            sum_g += a[i];
        }
    }
    getchar();
    scanf("%c", &ch);
    if (ch == 'b')
    {
        printf("%d\n", sum_b);
    }
    else if (ch == 'g')
    {
        printf("%d\n", sum_g);
    }

    return 0;
}