#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll x, n;
    cin >> x >> n;
    if (x & 1)
    {
        ll nodd = (n + 1) / 2;
        ll neven = n / 2;
        ll left = neven * (neven + 1);
        ll right = nodd * (1 + n) / 2;
        cout << (x - left + right) << "\n";
    }
    else
    {
        ll nodd = n / 2;
        ll neven = n / 2;
        ll left = neven * (neven + 1);
        ll right = nodd * n / 2;
        cout << (x - left + right) << "\n";
    }
    // if (n & 1)
    // {
    //     ll nodd = (n + 1) / 2;
    //     ll neven = n / 2;
    //     ll left = neven * (neven + 1);
    //     ll right = nodd * (1 + n) / 2;
    //     cout << (x - left + right) << "\n";
    // }
    // else
    // {
    //     ll nodd = n / 2;
    //     ll neven = n / 2;
    //     ll left = neven * (neven + 1);
    //     ll right = nodd * n / 2;
    //     cout << (x - left + right) << "\n";
    // }
    // for (ll i = 1; i <= n; i++)
    // {
    //     if (x & 1)
    //         x += i;
    //     else
    //         x -= i;
    // }
    // cout << x << "\n";
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
