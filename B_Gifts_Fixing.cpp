#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    ll mna = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mna = min(a[i], mna);
    }
    ll mnb = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        mnb = min(b[i], mnb);
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += max(a[i] - mna, b[i] - mnb);
    }
    cout << ans << "\n";
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
