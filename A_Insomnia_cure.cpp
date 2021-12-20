#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int k, l, m, n, d;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    if (k == 1 || l == 1 || m == 1 || n == 1)
        cout << d;
    else
    {
        int ct = d;
        for (int i = 1; i <= d; i++)
        {
            if (i % k != 0 && i % l != 0 && i % m != 0 && i % n != 0)
            {
                ct--;
            }
        }
        cout << ct;
    }
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
