#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    ll key = 0;
    for (ll i = 1; i <= 9; i++)
    {
        ll k = 1;
        for (ll j = i; j <= n; j = (j * 10) + i)
        {
            key += k;
            k++;
        }
    }
    cout << key;
    cout << "\n";
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
