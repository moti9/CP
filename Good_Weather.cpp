#include <bits/stdc++.h>
using namespace std;
#define ll signed int
#define ld long double
#define mod 1000000007

void solve()
{
    bool x;
    int ct1 = 0, ct0 = 0;
    for (int i = 1; i <= 7; i++)
    {
        cin >> x;
        if (x == 1)
            ct1++;
        else if (x == 0)
            ct0++;
    }
    if (ct1 > ct0)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif

    ll tst = 1;
    cin >> tst;
    while (tst--)
    {
        solve();
    }
    return 0;
}
