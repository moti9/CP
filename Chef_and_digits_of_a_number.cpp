#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    string s;
    cin >> s;
    ll ct1 = 0, ct0 = 0;
    for (ll i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
            ct1++;
        else if (s[i] == '0')
            ct0++;
    }
    if (ct1 == 1 || ct0 == 1)
        cout << "Yes\n";
    else
        cout << "No\n";
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
