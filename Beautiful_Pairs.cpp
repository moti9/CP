#include <bits/stdc++.h>
using namespace std;
#define ll long int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, int> mp;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = 0;
    }
    for (ll i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    ll sum = 0;
    for (auto x : mp)
    {
        if (x.second > 1)
        {
            ll ct = (n - x.second);
            ct = ct * (x.second);
            sum = sum + ct;
        }
        else
        {
            sum = sum + n - 1;
        }
    }
    cout << sum << "\n";
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

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
