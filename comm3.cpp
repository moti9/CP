#include <bits/stdc++.h>
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;

int main()
{
    fastio;
    short t, r, x[3], y[3];
    cin >> t;
    while (t--)
    {
        cin >> r;
        for (int i = 0; i < 3; i++)
        {
            cin >> x[i] >> y[i];
        }
        int a1 = abs(x[0] - x[1]), a2 = abs(x[1] - x[2]), a3 = abs(x[0] - x[2]);
        int b1 = abs(y[0] - y[1]), b2 = abs(y[1] - y[2]), b3 = abs(y[0] - y[2]);
        double ch, hs, cs;
        ch = sqrt(a1 * a1 + b1 * b1);
        hs = sqrt(a2 * a2 + b2 * b2);
        cs = sqrt(a3 * a3 + b3 * b3);
        if ((ch <= r & cs <= r) || (ch <= r & hs <= r) || (hs <= r & cs <= r))
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }

    return 0;
}