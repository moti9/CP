#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll I;
    cin >> I;
    ll x, a[I + 1], b[I + 1], c[I + 1], d[I + 1];
    cin >> a[1] >> b[1] >> c[1] >> d[1];
    ll p, q, r, s, t, m;
    cin >> p >> q >> r >> s >> t >> m;
    ll ans[I + 1] = {0};
    ll i = 1;
    ll cash = x;
    ll j = i;
    while (j > 0)
    {
        ll cn = a[i] + (j - 1) * b[i];
        if (cn <= cash)
        {
            ans[i]++;
            cash -= cn;
        }
        ll cd = c[i] + (j - 1) * d[i];
        if (cd <= cash)
        {
            ans[i]++;
            cash -= cd;
        }
        if (cash < cn && cash < cd)
            break;
        j++;
    }
    cout << ans[i] << "\n";
    for (i = 2; i <= I; i++)
    {
        a[i] = ((a[i - 1] + ans[i - 1] * t) % m) + p;
        b[i] = ((b[i - 1] + ans[i - 1] * t) % m) + q;
        c[i] = ((c[i - 1] + ans[i - 1] * t) % m) + r;
        d[i] = ((d[i - 1] + ans[i - 1] * t) % m) + s;
        ll cash = x;
        ll j = i;
        while (j)
        {
            ll cn = a[i] + (j - 1) * b[i];
            if (cn <= cash)
            {
                ans[i]++;
                cash -= cn;
            }
            ll cd = c[i] + (j - 1) * d[i];
            if (cd <= cash)
            {
                ans[i]++;
                cash -= cd;
            }
            j++;
            if (cash < cn && cash < cd)
                break;
        }
        cout << ans[i] << "\n";
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

    solve();
    return 0;
}
