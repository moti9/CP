#include <stdio.h>
int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 0)
    {
        printf("%d", reversDigits(n));
    }
    else
    {
        int temp = (n) * (-1);
        int ans = reversDigits(temp);
        ans *= (-1);
        printf("%d", ans);
    }

    return 0;
}
