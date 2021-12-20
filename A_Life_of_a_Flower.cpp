#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int len = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1 && i < 1)
            len += 1;
        if (a[i] == 1 && a[i - 1] == 1 && i > 0)
            len += 5;
        else if (a[i] == 1 && a[i - 1] == 0 && i > 0)
            len += 1;
        else if (a[i] == 0 && a[i - 1] == 0 && i > 0)
        {
            cout << -1 << "\n";
            return;
        }
    }
    cout << len << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //#endif

    ll ttt = 1;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
