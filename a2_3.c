/*
3. Accept an array of integer ARR[ ] from the user to implement a call by reference and
find the sum of the odd numbers and even numbers separately.
*/
#include <stdio.h>
#include <stdlib.h>
void sum(int *a, int n)
{
    int odd_sum = 0, even_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) & 1)
            odd_sum += *(a + i);
        else
            even_sum += *(a + i);
    }
    printf("Sum of odd numbers: %d\nSum of even numbers: %d", odd_sum, even_sum);
    free(a);
}
int main()
{
    system("cls");
    int n;
    printf("Enter the length of an array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of an array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum(arr, n);
    return 0;
}