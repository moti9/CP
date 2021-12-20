/* 
Codeforce Round 737 
A Problem 
*/
// This is the code
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    double sum = 0.0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    sum -= a[n - 1];
    sum = sum / (n - 1);
    double ans = (a[n - 1] / 1.) + sum;
    printf("%.9f\n", ans);
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
// First Try by self
// Thankyou