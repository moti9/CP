#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int a, b;
    cin >> a >> b;
    // if (a > b)
    // {
    //     int rem = a - b;
    //     cout << b << " " << rem / 2;
    // }
    // else if (a < b)
    // {
    //     int rem = b - a;
    //     cout << a << " " << rem / 2;
    // }
    // else
    // {
    //     cout << a << " " << 0;
    // }
    cout << min(a, b) << " " << max((a - min(a, b)) / 2, (b - min(a, b)) / 2);
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
    //cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}