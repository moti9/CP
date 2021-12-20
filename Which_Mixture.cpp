#include <bits/stdc++.h>
using namespace std;
#define ll short
#define ld long double
#define mod 1000000007

void solve()
{
    short a, b;
    cin >> a >> b;
    if (a > 0 && b > 0)
        cout << "Solution\n";
    else if (a == 0 && b > 0)
        cout << "Liquid\n";
    else if (a > 0 && b == 0)
        cout << "Solid\n";
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
