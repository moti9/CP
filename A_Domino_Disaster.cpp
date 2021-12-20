#include <bits/stdc++.h>
using namespace std;
#define ll int
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    string s;
    s.resize(n);
    cin >> s;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'U')
            s[i] = 'D';
        else if (s[i] == 'D')
            s[i] = 'U';
    }
    cout << s << "\n";
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
