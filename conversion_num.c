#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long int
ll fun_1(ll x, ll nb)
{
    ll ans = 0;
    ll i = 0;
    while (x != 0)
    {
        ans += (x % 10) * pow(nb, i);
        x = x / 10;
        i++;
    }
    return ans;
}

ll fun_2(ll x, ll tb)
{
    ll ans = 0;
    ll i = 0;
    while (x != 0)
    {
        ans += (x % tb) * pow(10, i);
        x = x / tb;
        i++;
    }
    return ans;
}

ll fun_3(ll x, char n[])
{
    ll ans = 0;
    ll base = 0;
    for (ll i = x - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            char *c = &n[i];
            ll num = atoi(c);
            ans += num * pow(16, base);
        }
        else if (n[i] >= 'a' && n[i] <= 'f')
        {
            ll num = n[i];
            ans += (num - 87) * pow(16, base);
        }
        base++;
    }
    return ans;
}

int main()
{
    system("cls");
    char n[32];
    printf("enter no.:");
    gets(n);
    ll nb, tb;
    printf("enter native base:");
    scanf("%lld", &nb);
    printf("enter transfer base:");
    scanf("%lld", &tb);
    if ((nb == 2 && tb == 10) || (nb == 8 && tb == 10))
    {
        ll x = atol(n);
        ll ans = fun_1(x, nb);
        printf("%lld", ans);
    }
    else if ((nb == 10 && tb == 2) || (nb == 10 && tb == 8))
    {
        ll x = atol(n);
        ll ans = fun_2(x, tb);
        printf("%lld", ans);
    }
    else if ((nb == 2 && tb == 8) || (nb == 8 && tb == 2))
    {
        ll x = atol(n);
        ll ans = fun_1(x, nb);
        ans = fun_2(ans, tb);
        printf("%lld", ans);
    }
    else if ((nb == 2 && tb == 16) || (nb == 10 && tb == 16) || (nb == 8 && tb == 16))
    {
        ll x = atol(n);
        ll ans = fun_1(x, nb);
        printf("%x", ans);
    }
    else if (nb == 16 && tb == 10)
    {
        ll x = strlen(n);
        ll ans = fun_3(x, n);
        printf("%lld", ans);
    }
    else if ((nb == 16 && tb == 2) || (nb == 16 && tb == 8))
    {
        ll x = strlen(n);
        ll ans = fun_3(x, n);
        ans = fun_2(ans, tb);
        printf("%lld", ans);
    }
    return 0;
}