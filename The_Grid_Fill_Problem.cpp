#include <bits/stdc++.h>
using namespace std;
#define ll int
#define ld long double
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    // ll a[n][n];
    if (n % 2 == 0)
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cout << -1 << " ";
            }
            cout << "\n";
        }
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (i == j)
                    cout << -1 << " ";
                else
                    cout << 1 << " ";
            }
            cout << "\n";
        }
    }
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
