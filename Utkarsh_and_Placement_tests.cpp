#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    char pre[3];
    for (int i = 0; i < 3; i++)
        cin >> pre[i];
    char lett[2];
    for (int i = 0; i < 2; i++)
        cin >> lett[i];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (pre[i] == lett[j])
            {
                cout << pre[i] << "\n";
                return;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    //#endif

    ll ttt = 1;
    cin >> ttt;
    while (ttt--)
    {
        solve();
    }
    return 0;
}
