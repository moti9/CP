#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number\n");
    scanf("%d", &n);
    int a[32], j = 0;
    while (n != 0)
    {
        a[j] = n % 2;
        n /= 2;
        j++;
    }
    for (int i = j - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    return 0;
}