#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007

void solve()
{
    ll n, k, j;
    cin >> n >> k >> j;
    ll c[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    ll temp = c[j - 1];
    ll sum = c[j - 1];
    sort(c, c + n);
    // for (ll i = 0; i < n && (c[i] == temp); i++)
    // {
    //     c[i] = 0;
    // }

    for (ll i = 0; i < n && k > 1; i++)
    {
        if (c[i] != temp)
        {
            sum += c[i];
            k--;
        }
    }
    cout << sum;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif

    ll tst = 1;
    //cin>>tst;
    while (tst--)
    {
        solve();
    }
    return 0;
}