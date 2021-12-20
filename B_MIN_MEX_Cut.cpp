#include <bits/stdc++.h>
using namespace std;
#define ll int
#define ld long double
#define mod 1000000007

void solve()
{
    string s;
    cin >> s;
    ll len = s.length();
    ll temp = 0;
    ll ct = 0;
    for (ll i = 0; i < len; i++)
    {
        if (s[i] == '0')
        {
            temp = 1;
        }
        else if (s[i] != '0' && temp == 1)
        {
            ct++;
            temp = 0;
        }
    }
    if (s[len - 1] == '0')
    {
        ct++;
    }
    ll ans = min(2, ct);
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

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
