#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number\n");
    scanf("%d", &n);
    int sum = 0;
    // while (n)
    // {
    //     sum += n % 10;
    //     n /= 10;
    // }
    for (; n != 0; n /= 10)
        sum += n % 10;
    printf("Sum of digits in the given number\n %d", sum);

    return 0;
}