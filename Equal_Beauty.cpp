#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    if (n == 2)
    {
        cout << "0\n";
        return;
    }

    ll sum0 = 0, sum1 = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i >= 0 && i < n - 1)
            sum0 += abs(a[i] - a[(n - 1) / 2]);
        if (i > 0 && i < n)
            sum1 += abs(a[i] - a[(n + 1) / 2]);
    }

    ll ans = min(sum0, sum1);
    ll left = 1;
    ll right = n - 2;
    while (left < right)
    {
        ll temp1 = a[n - 1] - a[left], temp2 = a[right] - a[0];
        ans = min(ans, abs(temp1 - temp2));
        if (temp1 > temp2)
            left++;
        else
            right--;
    }
    cout << ans << "\n";
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

    ll ttt = 1;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
