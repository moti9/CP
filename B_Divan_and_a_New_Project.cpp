#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    ll a[n];
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        v.push_back(make_pair(a[i], i + 1));
    }
    ll x[n + 1];
    sort(v.begin(), v.end());
    x[0] = (n + 1) / 2;
    ll temp = x[0] * (-1);
    for (ll i = 0; i < n; i++)
    {
        if (temp == x[0])
            temp = x[0] + 1;
        x[v[i].second] = temp;
        temp += 1;
    }
    ll total = 0;
    for (ll i = 1; i < n + 1; i++)
    {
        total += (a[i - 1] * x[i]);
    }
    ll ans = 2 * ((x[0] * sum) - total);
    cout << ans << "\n";
    for (ll i = 0; i < n + 1; i++)
    {
        cout << x[i] << " ";
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
