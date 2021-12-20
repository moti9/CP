#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    char x, y;
    cin >> x >> y;
    if (x != y)
    {
        if (x == 'R' || y == 'R')
        {
            cout << 'R' << "\n";
        }
        else if (x == 'B' || y == 'B')
        {
            cout << 'B' << "\n";
        }
        else
        {
            cout << "\n";
        }
    }
    else
        cout << x << "\n";
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
