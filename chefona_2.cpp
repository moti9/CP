#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
#define mod 1000000007
#define li unsigned long long
int main()
{
    fastio;
    li a[100001] = {0};
    li p[100001] = {0};
    for (li i = 0; i < 100001; i++)
    {
        li k = (i / 10) % mod;
        li s;
        s = i;
        while (k > 0)
        {
            li r = k % 10;
            s = ((s * 10 % mod + r % mod)) % mod;
            k = k / 10;
        }
        a[i] = s % mod;
    }
    for (li i = 0; i < 100001; i++)
    {
        p[i] = (p[i - 1] % mod + a[i] % mod) % mod;
    }
    li q;
    cin >> q;
    for (li i = 1; i <= q; i++)
    {
        li l, r;
        cin >> l >> r;
        li x, y;
        y = (p[r] - p[l]) % mod;
        x = a[l] % mod;
        li temp = 1;
        while (y > 0)
        {
            if (y % 2 == 0)
            {
                x = ((x % mod) * (x % mod)) % mod;
                y /= 2 % mod;
            }
            else
            {
                temp = ((temp % mod) * (x % mod)) % mod;
                y -= 1 % mod;
            }
        }
        cout << temp << endl;
    }
    return 0;
}