#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ct1 = 0, maxx = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > maxx)
        {
            ct1++;
            maxx = a[i];
        }
    }
    int ct2 = 0, minn = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < minn)
        {
            ct2++;
            minn = a[i];
        }
    }
    cout << ct1 + ct2;
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
