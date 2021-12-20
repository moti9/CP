#include <bits/stdc++.h>
using namespace std;
#define ll int
#define ld long double
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    ll num = pow(2, n);
    ll i = n - 1;
    while (i >= n / 2)
    {
        num -= pow(2, i);
        i--;
    }
    for (ll j = 1; j < n / 2; j++)
    {
        num += pow(2, j);
    }
    cout << num << "\n";
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
