#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int a[n];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int fr = 0;
    for (auto x : mp)
    {
        if (x.second > fr)
            fr = x.second;
    }
    if (n == 1 || fr == n)
        cout << 0 << "\n";
    else if (fr >= 2)
        cout << (n - fr + 1) << "\n";
    else
        cout << -1 << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //#endif

    ll ttt = 1;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
