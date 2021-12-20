#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int a[4];
    unordered_map<int, int> mp;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    vector<int> v;
    for (auto x : mp)
        v.push_back(x.second);
    sort(v.begin(), v.end(), greater<>());
    if (v[0] > 3)
        cout << "0\n";
    else if (v[0] > 2)
        cout << "1\n";
    else
        cout << "2\n";
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
