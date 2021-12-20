#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
#define ft first
#define sd second

int main()
{
    fastio;
    int n, maxc = 0;
    cin >> n;
    string s, result;
    unordered_map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        mp[s]++;
    }
    for (auto &i : mp)
    {
        if (maxc < i.sd)
        {
            result = i.ft;
            maxc = i.sd;
        }
    }
    cout << "The maximum occuring word is " << result << ".\n"
         << "The word_count is " << maxc << ".\n";
    return 0;
}