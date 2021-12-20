#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll x = a[n - 1];
    for (int i = 0; i < n; i++)
    {
        a[i] = (a[i] ^ x);
    }
    ll y = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        y = (a[i] | y);
    }
    cout << x << " " << y << "\n";
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
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
