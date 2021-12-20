#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll a[4];
    for (ll i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 4);
    cout << a[3] - a[0] << " " << a[3] - a[1] << " " << a[3] - a[2];
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
