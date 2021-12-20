#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll allSubsequences(ll arr[], ll n, ll total)
{
    ll opsize = pow(2, n);
    ll ct = 0;
    for (int counter = 1; counter < opsize; counter++)
    {
        ll sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (counter & (1 << j))
                sum += arr[j];
        }
        if (sum == total - 1)
            ct++;
    }
    return ct;
}

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll sum = 0;
    ll ct0 = 0, ct1 = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] == 0)
            ct0++;
        else if (a[i] == 1)
            ct1++;
    }
    // cout << ct0 << " " << ct1 << "\n";
    if (ct1 == 0)
    {
        cout << "0\n";
    }
    else if (n == 2)
    {
        if (ct0 == 1)
            cout << "2\n";
        else
            cout << "1\n";
    }

    else
    {
        // if (ct0 == 0 && ct1 != n)
        // {
        //     cout << ct1 << "\n";
        // }
        // else
        // {
        //     ll sum = (ct0 / 2) + (ct1 / 2) + 1;
        //     ll total = pow(2, sum);
        //     cout << total << "\n";
        // }
        cout << allSubsequences(a, n, sum) << "\n";
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

    ll ttt = 1;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
