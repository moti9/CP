#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int x, y;
    cin >> x >> y;
    int ct = 0;
    if (x < y)
    {
        while (x < y)
        {
            x += 2;
            ct++;
        }
        if (x > y)
            ct += 1;
        cout << ct << "\n";
    }
    else
    {
        // while (x > y)
        // {
        //     x -= 1;
        //     ct++;
        // }
        ct = x - y;
        cout << ct << "\n";
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
