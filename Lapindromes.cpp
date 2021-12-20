#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    string s;
    cin >> s;
    string sleft = "", sright = "";
    int len = s.length();
    int temp = (len + 1) / 2;
    for (int i = 0; i < len; i++)
    {
        if (i < len / 2)
        {
            sleft += s[i];
        }
        else if (i >= temp)
        {
            sright += s[i];
        }
    }
    sort(sleft.begin(), sleft.end());
    sort(sright.begin(), sright.end());

    if (sleft == sright)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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
