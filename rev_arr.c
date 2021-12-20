#include <stdio.h>
#include <stdlib.h>

void revArr(int ar[], int i, int j)
{
    if (i >= j)
    {
        ar[i] = ar[j];
        return;
    }
    int temp = ar[i];
    ar[i] = ar[j - i];
    ar[j - i] = temp;
    revArr(ar, i + i, j - 1);
}
int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    revArr(arr, 0, n);
    printf("Array after reversing\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}