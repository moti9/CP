#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int ctPalindrome(string str)
{
    int n = str.length();
    int ct = 0;
    for (int i = n / 2 - 1, j = n / 2; i >= 0 && j < n; i--, j++)
    {
        if (str[i] != str[j])
        {
            ct++;
        }
    }

    return ct;
}

void solve()
{
    string s;
    cin >> s;
    if (ctPalindrome(s) == 1)
    {
        cout << "2";
    }
    else
        cout << "0";
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
    // cin>>ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
