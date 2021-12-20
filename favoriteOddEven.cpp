#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    string s;
    cin >> s;
    int ct4 = 0, ct7 = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == '4')
        {
            ct4++;
        }
        else if (s[i] == '7')
        {
            ct7++;
        }
    }

    if (ct4 == 0 && ct7 == 0)
    {
        cout << "-1\n";
        return;
    }

    string temp;
    vector<int> v4, v7;
    vector<string> v;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4')
        {
            v4.push_back(i);
        }
        else if (s[i] == '7')
        {
            v7.push_back(i);
        }
    }
    for (int i = 0; i < v4.size() - 1; i++)
    {
        if (abs(v4[i] - v4[i + 1]) == 1)
        {
            temp += s[v4[i]];
        }
        else
        {
            v.push_back(temp);
            temp = "";
        }
    }
    for (int i = 0; i < v7.size() - 1; i++)
    {
        if (abs(v7[i] - v7[i + 1]) == 1)
        {
            temp += s[v7[i]];
        }
        else
        {
            v.push_back(temp);
            temp = "";
        }
    }

    // for (auto x : v)
    //     cout << x << "\n";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
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
    //cin>>ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
