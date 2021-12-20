#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n * m];
    for (ll i = 0; i < n * m; i++)
    {
        cin >> a[i];
    }
    ll ct = 0;
    for (ll i = 0; i < n * m; i++)
    {
        for (ll j = 0; j < n * m; j++)
        {
            if (a[i] < a[j] && i < j)
            {
                // swap(a[i], a[j]);
                ct++;
            }
        }
    }
    cout << ct << "\n";
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
