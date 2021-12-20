#include <stdio.h>
#include <stdlib.h>
#define ll long long
void swapNum(int a, int b)
{
    if (a >= 0 && b >= 0)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    else
    {
        a = a * b;
        b = a / b;
        a = a / b;
    }
    printf("%d %d\n", a, b);
}

int main()
{
    int a, b;
    printf("Enter two number\n");
    scanf("%d %d", &a, &b);
    swapNum(a, b);

    return 0;
}