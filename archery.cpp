#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int ans = 0, ct = 0;
    for (auto x : mp)
    {
        if (x.second > k)
        {
            ans++;
            n -= x.second;
        }
    }
    if (n % k != 0)
        n += k;
    cout << (n / k) + ans << "\n";
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

    int test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
