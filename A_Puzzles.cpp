#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n, m;
    cin >> n >> m;
    int f[m];
    for (int i = 0; i < m; i++)
    {
        cin >> f[i];
    }
    sort(f, f + m);
    int minn = 10002;
    for (int i = n; i <= m; i++)
    {
        minn = min(minn, abs(f[i - 1] - f[i - n]));
    }
    cout << minn;
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
