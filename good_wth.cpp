#include <bits/stdc++.h>
#define fastio()             \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio();
    unsigned int t;
    cin >> t;
    while (t--)
    {
        bool x;
        unsigned ct = 0;
        for (unsigned i = 0; i < 7; i++)
        {
            cin >> x;
            ct += x;
        }
        if (ct >= 4)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}