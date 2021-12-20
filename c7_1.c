#include <stdio.h>
#include <stdlib.h>
#define ll long long

int main()
{
    int *x;
    float *f;
    char *c;
    scanf("%d", &x);
    scanf("%f", &f);
    scanf("%c", &c);
    printf(" %d %f %c", *x, *f, *c);

    return 0;
}