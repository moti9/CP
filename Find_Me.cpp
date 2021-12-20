#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == k)
        {
            cout << 1;
            return;
        }
        else if (a[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << -1;
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

    ll ttt = 1;
    //cin>>ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
