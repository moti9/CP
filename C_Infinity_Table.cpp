#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    ll ans = ceil((double)sqrt(n));
    ll temp = sqrt(n);
    temp *= temp;
    if (n - temp == 0)
        cout << ans << " " << 1 << endl;
    else if (n - temp <= ans)
        cout << n - temp << " " << ans << endl;
    else
    {
        ll col = ans * ans;
        cout << ans << " " << col - n + 1 << endl;
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
