#include <stdio.h>
#include <stdlib.h>
#define ll long long

int main()
{
    // system("cls");
    int a = 63, b = 85;
    int *const p = &b;
    free(p);
    *p = &b;
    printf("%d %x %p", *p, p, p);
    return 0;
}