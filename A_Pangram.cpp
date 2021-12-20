#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    string s;
    s.resize(n);
    cin >> s;
    if (n < 26)
    {
        cout << "NO";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
    }
    sort(s.begin(), s.end());
    auto res = unique(s.begin(), s.end());
    s = string(s.begin(), res);
    if (s.length() == 26)
        cout << "YES";
    else
        cout << "NO";
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
