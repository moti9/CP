#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll maxxAnd(ll a[], ll n)
{
    sort(a, a + n);
    ll ct = 1;
    for (ll i = n - 2; i > 0; i--)
    {
        if (a[i] > 0)
        {
            ct &= a[i];
        }
    }
    return ct;
}

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll d[n];
    ll temp = maxxAnd(a, n);
    for (ll i = 0; i < n; i++)
    {
        cout << (temp & a[i]) << " ";
    }
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif

    ll ttt = 1;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
