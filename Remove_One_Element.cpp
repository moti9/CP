#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    int a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll b[n - 1];
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }
    if (n == 2)
    {
        if (b[0] - a[0] > 0 && b[0] - a[1] > 0)
            cout << min(b[0] - a[0], b[0] - a[1]) << "\n";
        else
            cout << max(b[0] - a[0], b[0] - a[1]) << "\n";
        return;
    }
    sort(a, a + n);
    sort(b, b + n - 1);
    for (ll i = 0; i < n-1; i++)
    {
        // if (/* condition */)
        // {
        //     /* code */
        // }
        
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
