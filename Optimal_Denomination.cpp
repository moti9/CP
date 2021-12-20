#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
#define ll long long int

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ls[n], rs[n], ms[n];
        if (n == 1)
        {
            cout << 1 << "\n";
        }
        else
        {
            ll temp = 0;
            for (ll i = 0; i < n; i++)
            {
                ls[i] = temp;
                if (temp == 0)
                {
                    temp = a[i];
                }
                else
                {
                    temp = __gcd(temp, a[i]);
                }
            }
            temp = 0;
            for (ll i = n - 1; i >= 0; i--)
            {
                rs[i] = temp;
                if (temp == 0)
                {
                    temp = a[i];
                }
                else
                {
                    temp = __gcd(temp, a[i]);
                }
            }
            for (ll i = 0; i < n; i++)
            {
                if (ls[i] == 0)
                {
                    ms[i] = rs[i];
                }
                else if (rs[i] == 0)
                {
                    ms[i] = ls[i];
                }
                else
                {
                    ms[i] = __gcd(ls[i], rs[i]);
                }
            }
            ll mVal[] = {0, 0};
            for (ll i = 0; i < n; i++)
            {
                if (ms[i] > mVal[0])
                {
                    mVal[0] = ms[i];
                    mVal[1] = a[i];
                }
                else if (ms[i] == mVal[0] && a[i] > mVal[1])
                {
                    mVal[1] = a[i];
                }
            }
            ll result = 0;
            for (ll i = 0; i < n; i++)
            {
                if (ms[i] == mVal[0] && a[i] == mVal[1])
                {
                    temp = i;
                    result = ms[i];
                }
            }
            a[temp] = result;
            ll sum = 0;
            for (ll i = 0; i < n; i++)
            {
                sum += a[i] / mVal[0];
            }
            cout << sum << "\n";
        }
    }

    return 0;
}