#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long int
using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        ll d, dp, p, q;
        cin >> d >> dp >> p >> q;
        ll sum = 0;
        ll x = d / dp;
        if (x >= 2)
        {
            sum += ((x * (2 * p + (x - 1) * q) / 2) * dp);
            sum += (d % dp) * (p + x * q);
        }
        else
        {
            sum += (dp * p);
            sum += (d - dp) * (p + q);
        }
        cout << sum << endl;
    }
    return 0;
}