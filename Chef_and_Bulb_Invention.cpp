#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n, p, k;
    cin >> n >> p >> k;
    ll x = p % k;
    x--;
    ll y = (((n - 1) / k) * k);
    y = n - 1 - y;
    int ans = 0;
    if (x > y)
    {
        ans += (y + 1) * ((n - 1) / k + 1) + (x - y) * ((n - 1) / k);
    }
    else
    {
        ans += ((n - 1) / k + 1) * (x + 1);
    }
    for (int i = x + 1; i <= n - 1; i += k)
    {
        ans++;
        if (i == p)
        {
            cout << ans << endl;
            break;
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
