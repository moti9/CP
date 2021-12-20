#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll add_num(ll n)
{
    if (n < 2)
        return (2 - n);
    return add_num(n - 1) + add_num(n - 2);
}
void solve()
{
    ll n;
    cin >> n;
    cout << add_num(n) << "\n";
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
