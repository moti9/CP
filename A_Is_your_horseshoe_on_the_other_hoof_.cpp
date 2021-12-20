#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll s[4];
    for (ll i = 0; i < 4; i++)
    {
        cin >> s[i];
    }
    sort(s, s + 4);
    ll total = 3;
    for (ll i = 1; i < 4; i++)
    {
        if (s[i] != s[i - 1])
        {
            total--;
        }
    }
    cout << total;
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
