#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    ll index = (k + 2) / 2;
    sort(v.begin(), v.end(), greater<>());
    vector<ll> newv(n);
    for (ll i = 0; i < index - 1; i++)
    {
        newv[v[i].second] = v[i].first;
    }
    newv[v[index - 1].second] = v[index - 1].first;
    for (ll i = index; i < k; i++)
    {
        newv[v[i].second] = v[i].first;
    }
    cout << v[index - 1].first << "\n";
    for (ll i = 0; i < n; i++)
    {
        if (newv[i] != 0)
        {
            cout << newv[i] << " ";
        }
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

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
