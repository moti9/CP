#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    s.resize(n);
    int ct = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            ct++;
        }
    }
    cout << ct << "\n";
    if (ct & 1)
    {
        cout << "SAHID\n";
    }
    else
    {
        cout << "RAMADHIR\n";
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
