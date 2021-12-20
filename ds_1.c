//2. Reverse the array and store it in a new array REV

#include <stdio.h>
void rev_arr(int a[], int n)
{
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[n - i - 1];
    }
    printf("The reverse array of the given array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
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
    rev_arr(a, n);
    return 0;
}