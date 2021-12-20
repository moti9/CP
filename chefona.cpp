#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
#define mod 1000000007
#define li long long

li nchefona(li m)
{
    li num = m;
    li final_num = 0;
    if (m <= 9)
    {
        final_num = num;
    }
    else if (m > 9)
    {
        m /= 10;
        while (m != 0)
        {
            num = (num * 10 + m % 10) % mod;
            m /= 10;
        }
        final_num = num % mod;
    }
    return final_num % mod;
}
li powersol(li base, li power)
{
    li result = 1;
    while (power != 0)
    {
        if (power % 2 == 0)
        {
            base = ((base % mod) * (base % mod)) % mod;
            power /= 2;
        }
        else
        {
            result = ((result % mod) * (base % mod)) % mod;
            power -= 1;
        }
    }
    return result % mod;
}
int main()
{
    fastio;
    li a[100000] = {0};
    li p_a[100000] = {0};
    for (li i = 0; i < 100000; i++)
    {
        a[i] = nchefona(i);
        p_a[i] = p_a[i - 1] + a[i];
    }

    li q;
    cin >> q;
    li l, r;
    while (q--)
    {
        cin >> l >> r;
        li d = p_a[r] - p_a[l];
        cout << powersol(a[l], d) % mod << "\n";
    }

    return 0;
}