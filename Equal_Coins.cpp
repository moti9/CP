#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int x, y;
    cin >> x >> y;
    if (y % 2 == 0)
    {
        if (x % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else
    {
        if ((x - 2) % 2 == 0 && x >= 2)
        {
            cout << "YES\n";
        }
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