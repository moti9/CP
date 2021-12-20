#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int x, y, a, b, k;
    cin >> x >> y >> a >> b >> k;
    int petrol = x + a * k;
    int diesel = y + b * k;
    if (petrol < diesel)
    {
        cout << "PETROL\n";
    }
    else if (petrol > diesel)
    {
        cout << "DIESEL\n";
    }
    else
    {
        cout << "SAME PRICE\n";
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

    ll ttt = 1;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
