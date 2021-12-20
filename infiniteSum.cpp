#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }
    ll q;
    cin >> q;
    ll l[q + 1], r[q + 1];
    for (ll i = 1; i < q + 1; i++)
    {
        cin >> l[i] >> r[i];
        ll sum = 0;
        ll k = 0;
        k = l[i] % n;
        for (ll j = l[i]; j <= r[i]; j++)
        {
            sum += a[k];
            ++k;
            if (k > n)
                k = 1;
        }
        cout << sum;
        if (i == q)
            cout << "\n";
        else
            cout << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //#endif

    ll ttt = 1;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
