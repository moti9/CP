#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    ll a[] = {100, 20, 10, 5, 1};
    ll ct = 0;
    for (ll i = 0; i < 5; i++)
    {
        ct += n / a[i];
        n %= a[i];
    }

    cout << ct;
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
