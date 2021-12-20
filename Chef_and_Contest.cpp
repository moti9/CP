#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int x, y, p, q;
    cin >> x >> y >> p >> q;
    int chef = x + p * 10;
    int chefina = y + q * 10;
    if (chef > chefina)
        cout << "Chefina\n";
    else if (chef == chefina)
        cout << "Draw\n";
    else
        cout << "Chef\n";
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
