#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    ll x1, x2, y1, y2;
    vector<ll> vx;
    vector<ll> vy;
    for (ll i = 0; i < n; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        vx.push_back(min(x1, x2));
        vy.push_back(min(y1, y2));
    }
    sort(vx.begin(), vx.end());
    sort(vy.begin(), vy.end());
    cout << vx[n / 2] << " " << vy[n / 2];
    cout << "\n";
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