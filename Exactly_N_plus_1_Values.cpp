#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    v.push_back(1);
    ll sum = pow(2, n);
    // cout << sum << "\n";
    ll s = 1;
    ll s2 = n * (n - 1) / 2;
    ll temp = sum - s2 - s;
    for (ll i = 1; i < n; i++)
    {
        v.push_back(i);
    }
    v.push_back(temp);
    for (ll i = 0; i < n + 1; i++)
    {
        cout << v[i];
        if (i == n)
            cout << "\n";
        else
            cout << " ";
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
