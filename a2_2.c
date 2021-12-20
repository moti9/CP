/*
2. Implement a pointer to an array to display all the array elements alongside the
addresses
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int n;
    printf("Enter the length of an array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of an array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int *ptr = a;
    for (int i = 0; i < n; i++)
    {
        printf("Value [%d]: %d ,Address: %x\n", i, *(ptr + i), ptr + i);
    }
    free(ptr);
    return 0;
}