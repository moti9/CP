#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 1);
    ll cod = 0;
    ll cev = 0;
    for (ll i = 1; i < n + 1; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
            cev++;
        else
            cod++;
    }
    cout << min(cod, n / 2) + min(cev, (n + 1) / 2) << "\n";
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
