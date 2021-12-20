#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 1; i <= n - 2; i++)
    {
        string s;
        cin >> s;
        s.resize(2);
        v.push_back(s);
    }
    string ans = "";
    ans += v[0];

    for (int i = 1; i < n - 2; i++)
    {
        string a = v[i];
        string b = v[i - 1];
        if (a[0] == b[1])
            ans += a[1];
        else
            ans += a;
    }
    if (ans.length() == n)
        cout << ans << "\n";
    else
    {
        int len = ans.length();
        if (ans[len - 1] == 'a')
        {
            ans += 'b';
        }
        else
            ans += 'a';
        cout << ans << "\n";
    }
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
