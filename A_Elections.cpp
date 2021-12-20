#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int a[3];
    for (ll i = 0; i < 3; i++)
        cin >> a[i];
    cout << max(0, (max(a[1], a[2]) - a[0] + 1)) << " " << max(0, max(a[0], a[2]) - a[1] + 1) << " " << max(0, max(a[1], a[0]) - a[2] + 1) << "\n";
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
