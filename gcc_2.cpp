#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll z;
    cin >> z;
    vector<ll> v;
    ll x;
    while (cin >> x)
    {
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ll ans = z / v[0];
    cout << ans - 1;
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
    //cin>>ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
