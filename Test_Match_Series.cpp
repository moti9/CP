#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll r[5];
    ll cti = 0, cte = 0, ct0 = 0;
    for (ll i = 0; i < 5; i++)
    {
        cin >> r[i];
        if (r[i] == 1)
            cti++;
        else if (r[i] == 0)
            ct0++;
        else if (r[i] == 2)
            cte++;
    }
    if (cti > cte)
        cout << "INDIA\n";
    else if (cti < cte)
        cout << "ENGLAND\n";
    else
        cout << "DRAW\n";
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
