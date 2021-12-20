#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if (a + b <= d && c <= e)
    {
        cout << "YES\n";
        return;
    }
    else if (a + c <= d && b <= e)
    {
        cout << "YES\n";
        return;
    }
    else if (b + c <= d && a <= e)
    {
        cout << "YES\n";
        return;
    }
    else
    {
        cout << "NO\n";
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
