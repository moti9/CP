#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n, v;
    cin >> n >> v;
    ll maxCost = n * (n - 1) / 2;
    ll minCost = 0;
    if (v == 1)
        minCost = maxCost;
    else if (n <= v)
    {
        minCost = n - 1;
    }
    else
    {
        ll num = n - v;
        ll val = num * (num + 1) / 2;
        minCost = val + v - 1;
    }
    cout << maxCost << " " << minCost << "\n";
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
