//3. Find the largest from an array of integers

#include <stdio.h>
void max_num(int a[], int n)
{
    int maxm = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= maxm)
            maxm = a[i];
    }
    printf("The maximum number in the given array is %d ", maxm);
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
    max_num(a, n);
    return 0;
}