#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    string x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;
    x = x + y;
    sort(x.begin(), x.end());
    sort(z.begin(), z.end());
    if (x == z)
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
