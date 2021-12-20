#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;

    ll ao = 1;
    ll aon = ao + (n - 1) * 2;

    ll ae = 2;
    ll aen = ae + (n - 1) * 2;

    ll oo = n * (ao + aon) / 2;

    ll ee = n * (ae + aen) / 2;

    cout << oo << " " << ee;
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
    //cin>>ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
