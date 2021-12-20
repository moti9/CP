#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    // vector<ll> v(n);
    vector<pair<ll, ll>> v;
    // unordered_map<ll,ll> mp;
    // ll temp = v[0];
    ll index = 1;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    // cout << index << "\n";
    sort(v.begin(), v.end());
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            if (v[i].first != v[j].first)
            {
                cout << v[j].second << "\n";
                return;
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

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
