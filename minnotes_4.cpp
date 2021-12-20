#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll maxA = INT_MIN;
        ll minA = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (maxA < a[i])
            {
                maxA = a[i];
            }
            if (minA > a[i])
            {
                minA = a[i];
            }
        }
        ll x = maxA, y = minA;
        ll sum = 0, temp = 1;
        cout << x << " " << y << " " << maxA << " " << minA << " " << sum << " " << temp;
        for (int i = 0; i < n; i++)
        {
            while (temp > 0)
            {
                if (a[i] == x)
                {
                    sum += minA;
                }
            }
        }
        // cout << sum / minA << endl;
    }
    return 0;
}