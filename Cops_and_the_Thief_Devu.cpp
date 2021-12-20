#include <bits/stdc++.h>
using namespace std;
#define ll int
#define mod 1000000007

void solve()
{
    ll m, x, y;
    cin >> m >> x >> y;
    ll cops[m];
    for (ll i = 0; i < m; i++)
    {
        cin >> cops[i];
    }
    ll safe[101] = {0};
    ll dist = x * y;
    for (ll i = 0; i < m; i++)
    {
        ll a = max(1, cops[i] - dist);
        ll b = min(100, cops[i] + dist);
        for (ll j = a; j <= b; j++)
        {
            safe[j] = 1;
        }
    }
    ll count = 0;
    for (ll i = 1; i <= 100; i++)
    {
        if (safe[i] == 0)
            count++;
    }
    cout << count << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //#endif

    ll ttt = 1;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
