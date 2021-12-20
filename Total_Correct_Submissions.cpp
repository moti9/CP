// #include <bits/stdc++.h>
// #define fastio()             \
//     ios::sync_with_stdio(0); \
//     cin.tie(0);              \
//     cout.tie(0);
#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        map<string, int> mp;
        for (i = 0; i < 3 * n; i++)
        {
            string s;
            int a;
            cin >> s >> a;
            mp[s] += a;
        }
        vector<int> vs;
        for (auto x : mp)
        {
            vs.push_back(x.second);
        }
        sort(vs.begin(), vs.end());
        for (auto x : vs)
        {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}