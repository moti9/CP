#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int k1, k2;
    cin >> k1 >> k2;
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    if (k1 == 1)
    {
        if (k2 == k1)
        {
            int d1 = abs(k1 - x1);
            int d2 = abs(k1 - x2);
            if ((y1 == 2 || y2 == 2) && d1 > 1 && d2 > 1 && x1 != x2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {

            int d1 = abs(k2 - y1);
            int d2 = abs(k2 - y2);
            if ((x1 == 2 || x2 == 2) && d1 > 1 && d2 > 1 && y1 != y2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    else if (k1 == 8)
    {
        if (k2 == 1)
        {
            int d1 = abs(k1 - x1);
            int d2 = abs(k1 - x2);
            if ((y1 == 2 || y2 == 2) && d1 > 1 && d2 > 1 && x1 != x2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            int d1 = abs(k2 - y1);
            int d2 = abs(k2 - y2);
            if ((x1 == 7 || x2 == 7) && d1 > 1 && d2 > 1 && y1 != y2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    else if (k2 == 1)
    {
        // if (k1 == 8)
        // {
        //     int d1 = abs(k1 - x1);
        //     int d2 = abs(k1 - x2);
        //     if ((y1 == 2 || y2 == 2) && d1 > 1 && d2 > 1 && x1 != x2)
        //         cout << "YES\n";
        //     else
        //         cout << "NO\n";
        // }
        // else
        // {
        int d1 = abs(k1 - x1);
        int d2 = abs(k1 - x2);
        if ((y1 == 2 || y2 == 2) && d1 > 1 && d2 > 1 && x1 != x2)
            cout << "YES\n";
        else
            cout << "NO\n";
        // }
    }
    else if (k2 == 8)
    {
        if (k1 == k2)
        {
            int d1 = abs(k1 - x1);
            int d2 = abs(k1 - x2);
            if ((y1 == 7 || y2 == 7) && d1 > 1 && d2 > 1 && x1 != x2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else if (k1 == 8)
        {
            int d1 = abs(k1 - x1);
            int d2 = abs(k1 - x2);
            if ((y1 == 7 || y2 == 7) && d1 > 1 && d2 > 1 && x1 != x2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            int d1 = abs(k1 - x1);
            int d2 = abs(k1 - x2);
            if ((y1 == 7 || y2 == 7) && d1 > 1 && d2 > 1 && x1 != x2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    else
        cout << "NO\n";
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
