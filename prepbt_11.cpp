#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll func(ll n)
{
    if (n == 0 || n == 1)
        return 2 - n;
    else
        return (func(n - 1) + func(n - 2)) % mod;
}

void solve()
{
    ll n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << func(i);
        if (i == n)
            cout << "\n";
        else
            cout << " ";
    }
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
    // cin>>ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
