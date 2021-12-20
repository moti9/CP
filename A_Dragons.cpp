#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int s, n;
    cin >> s >> n;
    // int x[n], y[n];
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        // cin >> x[i] >> y[i];
        cin >> a[i].first >> a[i].second;
    }
    // sort(x, x + n);
    // sort(y, y + n, greater<>());
    sort(a, a + n);
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (s <= a[i].first)
        {
            flag = 0;
            break;
        }
        s += a[i].second;
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
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
