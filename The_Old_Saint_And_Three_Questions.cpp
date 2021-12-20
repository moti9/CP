#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    bool a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    bool b1, b2, b3;
    cin >> b1 >> b2 >> b3;
    if (a1 + a2 + a3 == b1 + b2 + b3)
        cout << "Pass\n";
    else
        cout << "Fail\n";
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

    signed test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
