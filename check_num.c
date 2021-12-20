#include <stdio.h>

void checknum(int a)
{
    if (a % 2 == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    checknum(n);
    return 0;
}