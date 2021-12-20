#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

vector<int> arr[100001];
int vis[100001];

void dfs(int v)
{
    vis[v] = 1;

    for (int child : arr[v])
        if (vis[child] == 0)
            dfs(child);
}

void solve()
{
    int n, m, x, y;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> x >> y, arr[x].push_back(y), arr[y].push_back(x);

    int ct = 0;
    for (int i = 1; i <= n; i++)
        if (vis[i] == 0)
            dfs(i), ct += 1;

    cout << ct << "\n";
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
