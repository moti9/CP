#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    if (a[0] != 0 && b[n - 1] != 0)
    {
        return;
    }
    int sum = a[0] + b[0];
    int maxm = sum;
    for (int i = 1; i < n; i++)
    {
        sum = (sum - a[i]) + b[i];
        maxm = max(maxm, sum);
    }
    cout << maxm << "\n";
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
