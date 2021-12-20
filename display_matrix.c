#include <stdio.h>

int main()
{
    int row = 3, col = 3;
    // printf("Input required number of row and column\n");
    //  scanf("%d %d",&row,&col);
    // row = 3, col = 3;
    printf("Enter the elements of matrix\n");
    int matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}