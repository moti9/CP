#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void solve()
{
    ll x, k;
    cin >> x >> k;
    ll minn = (2 * x * x) / gcd(x, 2 * x);
    ll maxx = (x * k) * (x * k - 1);
    cout << minn << " " << maxx << "\n";
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
