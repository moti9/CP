#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    int ct = 0;
    for (auto x : mp)
    {
        int maxmdiv = x.first - 1;
        if (x.second > maxmdiv)
        {
            ct += maxmdiv;
        }
        else
        {
            ct += x.second;
        }
    }
    cout << ct << "\n";
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
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
