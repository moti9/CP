#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    string s;
    getline(cin, s);
    unordered_map<char, int> mp;
    for (int i = 1; i < s.length() - 1; i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            mp[s[i]]++;
        }
    }
    int sum = 0;
    for (auto x : mp)
        if (x.second >= 1)
            sum++;
    cout << sum;
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
