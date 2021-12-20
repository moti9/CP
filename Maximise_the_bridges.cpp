#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n, m;
    cin >> n >> m;
    int temp = m;
    vector<pair<int, int>> v;
    for (int i = 1; i < n; i++)
    {
        v.push_back(make_pair(i, i + 1));
        temp--;
    }
    int start = 1;
    while (start<n - 1 && temp> 0)
    {
        int end;
        // if (start == 1)
        end = start + 2;
        // else
        //     end = start + 1;
        // end = start;
        while (end <= n && temp > 0)
        {
            v.push_back(make_pair(start, end));
            end++;
            temp--;
        }
        start++;
    }
    // for (auto x : v)
    //     cout << x.first << " " << x.second << "\n";
    for (int i = 0; i < m; i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
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
