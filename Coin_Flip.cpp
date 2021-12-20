#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int g;
    cin >> g;
    while (g--)
    {
        int i, n, q;
        cin >> i >> n >> q;
        // int a[n];
        // if (i == 1)
        // {
        //     for (int i = 0; i < n; i++)
        //         a[i] = 1;
        // }
        // else
        // {
        //     for (int i = 0; i < n; i++)
        //         a[i] = 2;
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j <= i; j++)
        //     {
        //         if (a[i] == 1)
        //             a[i] = 2;
        //         else
        //             a[i] = 1;
        //     }
        // }
        // int ct1 = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i] == 1)
        //         ct1++;
        // }

        // if (q == 1)
        //     cout << ct1 << "\n";
        // else
        //     cout << (n - ct1) << "\n";

        if (n % 2 == 0)
        {
            cout << (n / 2) << "\n";
        }
        else
        {
            if (i == q)
                cout << (n - 1) / 2 << "\n";
            else
                cout << (n + 1) / 2 << "\n";
        }
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
