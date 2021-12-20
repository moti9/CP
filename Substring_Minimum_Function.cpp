#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ct0 = n - m;
    if (m >= 1 && m < (n + 1) / 2)
    {

        ll ans = m - 1;
        ll temp = ct0 - m + 1;
        ll left = 0, right = 0;
        if (temp % 2 == 0)
        {
            left = right = temp / 2;
        }
        else
        {
            left = temp / 2;
            right = temp - left;
        }
        ll al = left * (left + 1) / 2;
        ll ar = right * (right + 1) / 2;
        ans = ans + al + ar;
        cout << ans << "\n";
    }
    else
        cout << ct0 << "\n";
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
