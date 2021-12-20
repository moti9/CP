#include <stdio.h>
float min(float x, float y)
{
    if (x <= y)
        return x;
    else
        return y;
}

int main()
{
    int T;
    scanf("%d", &T);
    int x, y, xr, yr, D;
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d %d %d\n", &x, &y, &xr, &yr, &D);
    }
    float a = 0.0, b = 0.0, min = 0.0;
    for (int i = 0; i < T; i++, a = 0.0, b = 0.0)
    {
        a = (x / xr) * 1.0;
        b = (y / yr) * 1.0;

        if (a < b)
            min = b;
        else if (a > b)
            min = b;
        else
            min = a;

        if (min >= D)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}