#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int ctO = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] & 1)
        {
            ctO++;
        }
    }
    if (n == 1)
    {
        cout << "0\n";
    }
    else
    {
        cout << ctO / 2 << "\n";
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

    int ttt = 1;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
