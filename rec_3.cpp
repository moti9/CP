#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll fact(ll n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}
void solve()
{
    ll n;
    cin >> n;
    cout << fact(n) << "\n";
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
