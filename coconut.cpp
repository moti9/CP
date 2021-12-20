#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    short t, xa, xb, at, bt;
    cin >> t;
    while (t--)
    {
        cin >> xa >> xb >> at >> bt;
        int a = 0, b = 0;
        a = at / xa;
        b = bt / xb;
        cout << a + b << endl;
    }

    return 0;
}