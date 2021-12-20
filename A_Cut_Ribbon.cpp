#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll ans = 0;
    for (ll i = 0; i * a <= n; i++)
    {
        for (ll j = 0; i * a + j * b <= n; j++)
        {
            ll rem = n - i * a - j * b;
            if (rem % c == 0)
            {
                ll k = rem / c;
                ans = max(ans, i + j + k);
            }
        }
    }
    cout << ans;
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
    //cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
