#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll findMaxGCD(ll arr[], ll n)
{
    ll high = 0;
    for (ll i = 0; i < n; i++)
        high = max(high, arr[i]);
    ll divisors[high + 1] = {0};
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 1; j <= sqrt(arr[i]); j++)
        {
            if (arr[i] % j == 0)
            {
                divisors[j]++;
                if (j != arr[i] / j)
                    divisors[arr[i] / j]++;
            }
        }
    }

    for (ll i = high; i >= 1; i--)
        if (divisors[i] > 1)
            return i;
}

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll i = n-1,
       j = (n + 1) / 2;
    // while (i != j)
    // {
    a[i] = a[i] * a[j];
    a[j] = a[i] * a[j];
    // i++;
    // j--;
    // }

    cout << findMaxGCD(a, n) << "\n";
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
