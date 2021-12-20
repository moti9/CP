#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n, l;
    cin >> n >> l;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll range = 2 * max(a[0], l - a[n - 1]);
    for (ll i = 0; i < n - 1; i++)
    {
        range = max(a[i + 1] - a[i], range);
    }
    printf("%.10f", range / 2.);
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
