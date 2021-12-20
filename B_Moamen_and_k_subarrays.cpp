#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll temp = 1;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] > a[i + 1])
        {
            temp++;
        }
    }
    if (temp <= k)
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
//Wrong Solution