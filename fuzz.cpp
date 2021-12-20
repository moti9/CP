#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll x, y, z, sum = 0;
    x = n - m;
    if (x <= m + 1)
        cout << x << "\n";
    else
    {
        y = x / (m + 1);
        z = x % (m + 1);
        ll cty = (m + 1) - z;
        ll ctx = y + 1;
        sum = cty * y * (y + 1) / 2 * z * (y + 1) * (y + 2) / 2;
        cout << sum << "\n";
    }
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
