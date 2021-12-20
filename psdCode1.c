#include <stdio.h>

int main()
{
    int *p, **t, a;
    a = 5;
    p = &a;
    t = &p;
    **t = **t + *p;
    *p = *p - 1;
    printf("%d", a);
    return 0;
}