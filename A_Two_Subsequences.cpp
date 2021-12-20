#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

// char cfind(string s)
// {
//     sort(s.begin(), s.end());
//     return s[0];
// }

void solve()
{
    string s;
    cin >> s;
    string bStr;
    int idx;
    char ch = s[0];
    for (int i = 0; i < s.length(); i++)
    {
        if (ch > s[i])
        {
            ch = s[i];
            idx = i;
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (i != idx)
            bStr.push_back(s[i]);
    }

    cout << ch << " " << bStr << "\n";
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
