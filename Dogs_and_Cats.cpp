#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define mod 1000000007

void solve()
{
    ll n, d, c, m;
    cin >> n >> d >> c >> m;
    string s;
    cin >> s;
    s.resize(n);
    ll ctd = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'D')
            ctd++;
    }
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'D' && d > 0)
        {
            d--;
            c += m;
            ctd--;
        }
        else if (s[i] == 'C' && c > 0)
        {
            c--;
        }
        else
            break;
    }
    if (ctd < 1)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll ttt, x = 1;
    cin >> ttt;
    while (ttt--)
    {
        cout << "Case #" << x << ": ";
        solve();
        x++;
    }
    return 0;
}