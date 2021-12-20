#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll fib(ll n)
{
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
void solve()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
        cout << fib(i) << " ";
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
        cout << "\n";
    }
    return 0;
}