#include <bits/stdc++.h>
using namespace std;
#define ll int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 1);
    for (ll i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }
    ll ans = 0;
    for (ll s = 2; s <= 2 * n; s++)
    {
        int curr = 0;
        for (ll i = 0; i < (s + 1) / 2; i++)
        {
            if (s - i > n)
                continue;
            curr += min(v[i], v[s - i]);
        }
        if (s % 2 == 0)
            curr += v[s / 2] / 2;
        ans = max(curr, ans);
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
