//1. Find the number of occurrences of a given integer NUM from a pre-defined array.

#include <stdio.h>
void check_num(int a[], int n, int x)
{
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            ct++;
    }
    printf("The occurance of %d in the array is %d times", x, ct);
}
int main()
{
    int n;
    printf("Enter the length of Array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the element of Array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter number for check\n");
    int x;
    scanf("%d", &x);
    check_num(a, n, x);
    return 0;
}