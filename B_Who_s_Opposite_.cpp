#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll x = 2 * abs(a - b);
    ll ans = 0;
    if (a > x || b > x || c > x)
        ans = -1;
    else
    {
        ans = c + x / 2;
        if (ans > x)
            ans = c - x / 2;
    }
    cout << ans << "\n";
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
