#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll ct(1), mx(1);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0)
        {
            if (a[i] >= a[i - 1])
            {
                ct++;
                mx = max(ct, mx);
            }
            else
            {
                ct = 1;
            }
        }
    }
    cout << mx;
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
