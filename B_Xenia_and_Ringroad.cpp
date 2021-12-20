#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    ll move = a[0] - 1;
    for (int i = 1; i < m; i++)
    {
        if (a[i] < a[i - 1])
            move += (n - a[i - 1] + a[i]);
        else
            move += (a[i] - a[i - 1]);
    }
    cout << move;
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
