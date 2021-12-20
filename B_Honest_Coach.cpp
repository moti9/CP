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
    sort(a, a + n, greater<ll>());
    ll mv = a[0] - a[n - 1];
    for (ll i = 0; i < n - 1; i++)
    {
        // ll m = a[i] - a[i + 1];
        if (a[i] - a[i + 1] < mv)
        {
            mv = a[i] - a[i + 1];
        }
    }
    cout << mv << "\n";
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
