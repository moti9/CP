#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int row, col;
    printf("Enter the size of the matrix(row X col)\n");
    scanf("%d %d", &row, &col);
    int mat[row][col];
    int sum_row[row]; // for sum of elements
    printf("Enter the elements of the matrix\n");
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
        sum_row[i] = sum;
    }
    printf("Matrix and the sum of row elements\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ", mat[i][j]);
        }
        printf("%d\n", sum_row[i]);
    }
    return 0;
}