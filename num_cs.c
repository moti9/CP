#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x[n],i=0;
    int maxx = x[0];
    int minn =x[0];
    while (n--)
    {
        scanf("%d", &x[i]);
        if (x[i] >= maxx)
            maxx = x[i];
        if (x[i] <= minn)
            minn = x[i];
            i++;
    }
    printf("%d %d", maxx, minn);

    return 0;
}