#include <bits/stdc++.h>
using namespace std;
#define ll unsigned int
#define ld long double
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    // ll a[n];
    // for (ll i = 0; i < n; i++)
    // {
    //     a[i]=(i+1);
    // }
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    for (ll i = n/2; i < n; i++)
    {
        // ll id = i * 2;
        for (ll j = i+1; j < 2 * (i + 1); j++)
        {
            if (a[i] * 2 == a[j])
            {
                a[j] = 0;
                break;
            }
        }
    }
    ll ct = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != 0)
            ct++;
    }
    cout << ct << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif

    ll tst = 1;
    cin >> tst;
    while (tst--)
    {
        solve();
    }
    return 0;
}
