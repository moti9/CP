#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007

void solve()
{
    ll n, h;
    cin >> n >> h;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<>());
    // bool flag = 1;
    // while (h > 0)
    // {
    //     if (flag)
    //     {
    //         h -= a[0];
    //         flag = 0;
    //     }
    //     else
    //     {
    //         h -= a[1];
    //         flag = 1;
    //     }
    //     ct++;
    // }
    ll sum = a[1] + a[0];
    ll ct = (h / sum);
    if (h % sum == 0)
        // ct = 2 * (h / sum);
        cout << ct * 2 << "\n";
    else if (h % sum <= a[0])
        cout << 2 * ct + 1 << "\n";
    // ct = 2 * (h / sum) + 1;
    else
        // ct = 2 * (h / sum) + 2;
        cout << (ct + 1) * 2 << "\n";
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
