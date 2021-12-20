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
    int ct = 0, temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
        {
            int j = i + 1;
            while (j < n && s[j] == s[i])
                j += 1;
            temp += j;
        }
        else if (i > 0 && s[i] != s[i - 1])
        {
            ct++;
            int j = i + 1;
            while (j < n && s[j] == s[i])
                j += 1;
            temp += j;
        }
        else
        {
            int j = i + 1;
            while (s[j] == s[i] && j < n)
                j += 1;
            temp += j;
        }
    }
    // cout << temp << "\n";
    if (temp)
        cout << ct << "\n";
    else
        cout << 0 << "\n";
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