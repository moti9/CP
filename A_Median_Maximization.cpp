#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 1000000007

void solve()
{
    ll n, s;
    cin >> n >> s;
    // if (n % 2 == 1)
    // {
    //     n /= 2;
    //     // cout << n << "\n";
    //     s /= n;
    //     // cout << s << "\n";
    // }
    // else
    // {
    //     n = (n - 1) / 2;
    //     // cout << n << "\n";
    //     s /= n;
    // }
    n = (n / 2) + 1;
    cout << (s / n) << "\n";
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
