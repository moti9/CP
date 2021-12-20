#include <bits/stdc++.h>

using namespace std;

int main()
{
    short t;
    cin >> t;
    double q, p;
    double exp;
    while (t--)
    {
        cin >> q >> p;
        exp = 0.0;
        if (q > 1000)
        {
            exp = q * p * 9 / 10;
        }
        else
        {
            exp = q * p;
        }
        cout << fixed << setprecision(6) << exp << endl;
    }

    return 0;
}