#include <bits/stdc++.h>
using namespace std;
#define ll int
#define ld long double
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
    sort(a, a + n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < 0 && k > 0)
        {
            a[i] *= (-1);
            k--;
        }
        else if (a[i] < 0 && k < 1)
        {
            a[i] = 0;
        }

        sum += a[i];
    }
    cout << sum << "\n";
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
