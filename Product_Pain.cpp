#include <bits/stdc++.h>
using namespace std;
#define ll int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unordered_map<ll, ll> mp;
    // ll temp = 0;
    for (ll i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (ll k = j + 1; k < n; k++)
            {
                // temp += ((a[i] - a[j]) * (a[j] - a[k]));
                ll temp2 = (a[i] - a[j]) * (a[j] - a[k]);
                mp[temp2]++;
            }
        }
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
