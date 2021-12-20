#include <bits/stdc++.h>
using namespace std;
#define ll int
#define mod 1000000007

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    s.resize(n);
    ll ct0 = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
            ct0++;
    }
    ll ct1 = n - ct0;
    cout << (a * ct0) + (b * ct1) << "\n";
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
