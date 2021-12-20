/*
4. Design a 2D matrix of size 4x4 and display the elements using a pointer to array
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int matrix[4][4];
    printf("Enter the elements of matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int *ptr = &matrix[0][0];
    printf("Matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", *((ptr + i * 4) + j));
        }
        printf("\n");
    }
    free(ptr);
    return 0;
}