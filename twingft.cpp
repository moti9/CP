#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    unsigned short t;
    cin >> t;
    while (t--)
    {
        ll n, k, sum1 = 0, sum2 = 0;
        cin >> n >> k;
        ll x = k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (ll i = n - 1; x > 0; i -= 2)
        {
            sum1 += a[i];
            x--;
        }
        for (ll i = n - 2; k > 0; i -= 2)
        {
            if (k > 1)
            {
                sum2 += a[i];
            }
            else if (k == 1)
            {
                sum2 = a[i] + a[i - 1];
            }
            k--;
        }
        cout << max(sum1, sum2) << endl;
    }
    return 0;
}
// incomplete
// incomplete
