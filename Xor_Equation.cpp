#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    // int ct = 0;
    ll temp = 0;
    // unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        // mp[a[i]]++;
        temp ^= a[i];
    }
    // for (auto x : mp)
    // {
    //     if (x.second > 1 && x.second % 2 == 1)
    //     {
    //         cout << "-1\n";
    //         return;
    //     }
    // }
    if (temp == 0)
    {
        cout << "0\n";
    }
    else
    {
        ll x = 1;
        bool flag = 1;
        sort(a, a + n);

        while (flag && x <= a[n - 1])
        {
            temp = 0;
            for (ll i = 0; i < n; i++)
            {
                temp ^= (a[i] + x);
            }
            if (temp == 0)
            {
                cout << x << "\n";
                // flag = 0;
                return;
            }
            x++;
        }
        cout << "-1\n";
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