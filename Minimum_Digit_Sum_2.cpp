#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n, base, r;
    cin >> n >> r;
    ll l = 2;
    map<ll, ll> mp;
    if (n < l)
    {
        cout << l << "\n";
        return;
    }
    else if (r >= n && l <= n)
    {
        cout << n << "\n";
        return;
    }

    for (ll base = l; base <= r; base++)
    {
        ll sum = 0;
        ll temp = n;
        while (temp > 0)
        {
            sum += (temp % base);
            temp /= base;
        }
        mp.insert({sum, base});
    }
    for (auto x : mp)
    {
        cout << x.second << "\n";
        break;
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

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}