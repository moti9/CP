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
        ll i, j, k;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll mx1 = a[0];
        for (i = 0; i < n; i++)
        {
            ll ct = 0;
            for (j = 0; j < n; j++)
            {
                if (a[j] % i == 0)
                {
                    ct++;
                }
                else
                {
                    break;
                }
            }
            if (ct == n)
            {
                break;
            }
            else
            {
                continue;
            }
        }
        a[n - 1] = a[0];
        ll result = 0;
        for (k = 0; k < n; k++)
        {
            result += (a[k] / i);
        }
        cout << result << "\n";
    }

    return 0;
}