#include <stdio.h>
#define ll long long int

int main()
{
    int t;
    scanf("%d", &t);
    int n;
    ll c;
    while (t--)
    {
        scanf("%d %lld", &n, &c);
        int a[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
        }
        if (c >= sum)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}