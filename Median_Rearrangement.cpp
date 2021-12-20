#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define p10 1e14

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n][n];
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> a[i][j];
            v.push_back(a[i][j]);
        }
    }
    sort(v.begin(), v.end());
    // if (k == p10)
    // {
    cout << v[(n * n + 1) / 2] << "\n";
    // }
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
