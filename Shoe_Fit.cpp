#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = 0;
    if ((a + b + c) == 1 || (a + b + c) == 2)
    {
        flag = 1;
    }
    if (flag)
    {
        cout << "1\n";
    }
    else
    {
        cout << "0\n";
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

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
