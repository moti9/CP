#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int arr[] = {20, 30, 40, 45, 40, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> ump;
    for (int i = 0; i < n; i++)
    {
        ump[arr[i]]++;
    }
    cout << "Using unordered_map\n";
    for (auto i : ump)
    {
        cout << i.first << " " << i.second << "\n";
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    cout << "Using ordered_map(Hash Map/Map)\n";
    for (auto i : mp)
    {
        cout << i.first << " " << i.second << "\n";
    }
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
    // cin>>ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
