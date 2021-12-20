#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && c + a > b)
    {
        if (a == b && b == c)
        {
            cout << 1;
        }
        else if (a == b || b == c || c == a)
        {
            cout << 2;
        }
        else
        {
            cout << 3;
        }
    }
    else
    {
        cout << -1;
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
    //cin>>ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
