#include <stdio.h>
#include <stdlib.h>
void rev(int a[], int i, int n)
{
    if (i == n)
    {
        return;
    }
    rev(a, i + 1, n);
    printf("%d ", a[i]);
    return;
}
int main()
{
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("enter elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    rev(a, 0, n);
    return 0;
}