#include <iostream>

using namespace std;

int main()

{
    short int t, i;
    cin >> t;
    for (i = 1; i <= t; i++)
    {
        short int x, y, xr, yr, D, a, b;
        cin >> x >> y >> xr >> yr >> D;
        if (x >= xr)
        {
            if (y >= yr)
            {
                a = x / xr;
                b = y / yr;
                if (a <= b)
                {
                    if (a >= D)
                    {
                        cout << "YES" << endl;
                    }
                    else
                    {
                        cout << "NO" << endl;
                    }
                }
                else
                {
                    if (b >= D)
                    {
                        cout << "YES" << endl;
                    }
                    else
                    {
                        cout << "NO" << endl;
                    }
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}