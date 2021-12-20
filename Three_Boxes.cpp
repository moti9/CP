#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = a + b + c;
    if (sum <= d)
    {
        cout << "1\n";
    }
    else
    {
        if (sum - c <= d)
        {
            cout << "2\n";
        }
        else if (sum - b <= d)
        {
            cout << "2\n";
        }
        else if (sum - a <= d)
        {
            cout << "2\n";
        }
        else
        {
            cout << "3\n";
        }
    }
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
