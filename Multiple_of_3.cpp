#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n, d1, d2;
    cin >> n >> d1 >> d2;
    ll nxt = d1 + d2;
    if (n == 2)
    {
        if (nxt % 3 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else
    {
        ll temp = (2 * nxt) % 10 + (4 * nxt) % 10 + (8 * nxt) % 10 + (6 * nxt) % 10;
        ll step = (n - 3) / 4;
        ll left = n - (step * 4) - 3;
        ll sum = nxt + (nxt % 10) + (1LL * temp * step);
        ll power = 2;
        for (ll i = 1; i <= left; i++)
        {
            sum += (power * nxt) % 10;
            power = (2 * power) % 10;
        }
        if (sum % 3 == 0)
            cout << "YES\n";
        else
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
