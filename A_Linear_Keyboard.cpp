#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    string s1;
    string s2;
    for (int i = 0; i < n; i++)
    {
        cin >> s1;
        cin >> s2;
        vector<pair<char, int>> m;
        for (int j = 0; j < s1.length(); j++)
        {
            m.push_back(make_pair(s1[j], j + 1));
        }
        int sum = 0;
        for (int j = 0; j < s2.length(); j++)
        {
            for (int k = 0; k < s1.size(); k++)
            {
                if (s2[j] == m[k].first)
                {
                    for (int l = 0; l < s1.length(); l++)
                    {
                        if (s2[j + 1] == m[l].first)
                        {
                            sum += abs(m[l].second - m[k].second);
                            break;
                        }
                    }
                }
            }
        }
        cout << sum << "\n";
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
