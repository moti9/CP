#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i - 1])
            continue;
        v.push_back(a[i] * (n - i));
    }
    ll maxx = v[0];
    for (ll i = 1; i < v.size(); i++)
    {
        if (v[i] > maxx)
        {
            maxx = v[i];
        }
    }

    // sort(v.begin(), v.end(), greater<int>());
    // cout << v[0];
    cout << maxx;
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
