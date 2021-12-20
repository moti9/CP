#include <stdio.h>
#include <stdlib.h>
#define ll long long

int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    printf("Elements & Memory location\n");
    for (int i = 0; i < n; i++)
    {
        printf("Element[%d]= %d , Memory Location=%x\n", i + 1, *(arr + i), arr + i);
    }
    free(arr);
    return 0;
}