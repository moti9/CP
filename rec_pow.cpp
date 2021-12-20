#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll powfunc(ll x, ll y)
{
    if (!y)
    {
        return 1;
    }
    else if (y & 1)
    {
        return x * powfunc(x, y / 2) * powfunc(x, y / 2);
    }
    else
    {
        return powfunc(x, y / 2) * powfunc(x, y / 2);
    }
}
void solve()
{
    ll x, y;
    cin >> x >> y;
    cout << powfunc(x, y);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll ttt = 1;
    //cin>>ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
