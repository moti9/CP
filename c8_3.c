#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int a[] = {7, 5, 9, 6, 8};
    int *p = a;
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", (*p));
        p++;
    }
    free(p);
}