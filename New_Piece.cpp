#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int a, b, p, q;
    cin >> a >> b >> p >> q;
    if (a <= 8 && b <= 8 && p <= 8 && q <= 8)
    {
        if (a == p && b == q)
        {
            cout << "0\n";
        }
        else if ((a + b) % 2 == (p + q) % 2)
        {
            cout << "2\n";
        }
        else
        {
            cout << "1\n";
        }
    }
    else
        return;
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
