#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll x[m+1], y[m+1], w[m+1];
    for (ll i = 1; i <= m; i++)
    {
        cin >> x[i] >> y[i] >> w[i];
    }
    cout<<"0\n";
    
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

    ll test = 1;
    //cin>>test;
    while (test--)
    {
        solve();
    }
    return 0;
}
