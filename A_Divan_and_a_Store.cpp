#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n, l, r, k;
    cin >> n >> l >> r >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll ct = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] >= l && a[i] <= r && k >= a[i])
        {
            k -= a[i];
            ct++;
        }
    }
    cout << ct << "\n";
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
