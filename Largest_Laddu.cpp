#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    ll size = pow(2, n);
    vector<ll> v(size);
    for (ll i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    ll minn = v[0];
    ll maxx = v[0];
    for (ll i = 0; i < size; i++)
    {
        if (v[i] < minn)
        {
            minn = v[i];
        }
        if (v[i] > maxx)
        {
            maxx = v[i];
        }
    }
    if (maxx - minn <= 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
