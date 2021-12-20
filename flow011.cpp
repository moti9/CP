#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int sal;
    while (t--)
    {
        cin >> sal;
        float gs = 0.0, hra = 0.0, da = 0.0;
        if (sal < 1500)
        {
            hra = sal * 0.10;
            da = sal * 0.90;
        }
        else if (sal >= 1500)
        {
            hra = 500;
            da = sal * 0.98;
        }
        gs = sal + hra + da;
        cout << fixed << setprecision(2) << gs << endl;
    }

    return 0;
}