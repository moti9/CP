#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    set<int> lev;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        lev.insert(x);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int y;
        cin >> y;
        lev.insert(y);
    }
    if (lev.size() == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
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
