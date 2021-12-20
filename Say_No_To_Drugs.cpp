#include <bits/stdc++.h>
using namespace std;
#define ll int
#define mod 1000000007

void solve()
{
    ll n, k, l;
    cin >> n >> k >> l;
    ll s[n];
    ll maxm = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    if (k > 0)
    {
        ll dose = max(0, l - 1);
        s[n - 1] += (dose * k);
    }
    ll mx = INT_MIN;
    ll ct = 0;
    for (ll i = 0; i < n; i++)
    {
        if (mx < s[i])
        {
            mx = s[i];
            ct = 1;
        }
        else if (mx == s[i])
            ct++;
    }

    if (s[n - 1] == mx && ct == 1)
        cout << "Yes\n";
    else
        cout << "No\n";
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
