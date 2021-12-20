#include <stdio.h>
#include <stdlib.h>
#define ll long long

int checkComp(int n)
{
    if (n >= 1 && n <= 2)
        return 0;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the number of element\n");
    scanf("%d", &n);
    int *m = (int *)malloc(n * sizeof(int));
    int sum = 0;
    printf("Enter %d elements\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", m + i);
        if (checkComp(*(m + i)))
        {
            sum += (*(m + i));
        }
    }
    printf("Sum of all composite numbers= %d , Memory allocation=%x\n", sum, &sum);
    for (int i = 0; i < n; i++)
    {
        printf("Value[%d]= %d Memory allocation= %x", i + 1, *(m + i), m + i);
        printf("\n");
    }
    free(m);
    return 0;
}