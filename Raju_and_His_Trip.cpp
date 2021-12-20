#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    if (n % 5 == 0 || n % 6 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
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

    ll ttt = 1;
    //cin>>ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
