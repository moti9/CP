#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007

void solve()
{
    ll n, k, s;
    cin >> n >> k >> s;
    ll temp = 1;
    ll range = n;
    while (n--)
    {
        s -= temp;
        temp += 2;
    }

    // for (ll i = temp; i > 0; i -= 2)
    // {
    //     if (s / i == k - 1)
    //     {
    cout << s / (k - 1) << "\n";
    return;
    //     }
    // }
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
