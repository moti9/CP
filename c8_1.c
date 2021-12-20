#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int n;
    scanf("%d", &n);
    int *a = &n;
    printf("%d", *a);
    free(a);
    return 0;
}