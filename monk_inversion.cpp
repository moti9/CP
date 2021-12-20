#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    ll m[n][n];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
    }
    ll ct = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            for (ll p = i; p < n; p++)
            {
                for (ll q = j; q < n; q++)
                {
                    if (m[i][j] > m[p][q])
                        ct++;
                }
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
