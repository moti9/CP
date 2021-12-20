#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
#define mod 1000000007
#define li unsigned long long

li psol(li bs, li pw)
{
    li p = 1;
    while (pw != 0)
    {
        if (pw % 2 == 0)
        {
            bs = ((bs % mod) * (bs % mod)) % mod;
            pw /= 2 % mod;
        }
        else
        {
            p = ((p % mod) * (bs % mod)) % mod;
            pw -= 1 % mod;
        }
    }
    return p % mod;
}
li ncf(li m)
{
    li n = m;
    li fn = 0;
    if (m <= 9)
    {
        fn = n;
    }
    else if (m > 9)
    {
        m /= 10;
        while (m != 0)
        {
            n = (n * 10) % mod + (m % 10) % mod;
            m /= 10 % mod;
        }
        fn = n % mod;
    }
    return fn % mod;
}
int main()
{
    fastio;
    li q;
    cin >> q;
    li l, r;
    while (q--)
    {
        cin >> l >> r;
        li s = 0, i = l + 1;
        while (i <= r)
        {
            s += ncf(i) % mod;
            i++;
        }
        cout << psol(ncf(l) % mod, s % mod) % mod << "\n";
    }

    return 0;
}