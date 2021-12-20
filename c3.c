#include <stdio.h>

int main()
{
    int n;
    // printf("Enter Number\n");
    scanf("%d", &n);
    int bin = 0, x = 0;
    while (n != 0)
    {
        bin = x * 10 + n % 10;
        x++;
        n /= 10;
    }
    printf("%d", bin);
}