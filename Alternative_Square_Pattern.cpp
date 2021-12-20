#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;

    int temp;
    for (int i = 1; i <= n; i++)
    {
        int t = 5;
        if (i % 2 == 0)
        {
            temp = i * 5;
            while (t > 0)
            {
                cout << temp << " ";
                temp--;
                t--;
            }
        }
        else
        {
            temp = ((i - 1) * 5) + 1;
            while (t > 0 && temp <= (i * 5))
            {
                cout << temp << " ";
                temp++;
                t--;
            }
        }

        cout << "\n";
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
