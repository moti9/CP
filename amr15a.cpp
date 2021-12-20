#include <iostream>

using namespace std;
int main()
{
    short n;
    cin >> n;
    short a[n];
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            c1++;
        }
        else
            c2++;
    }
        if (c1 > c2)
        {
            cout << "READY FOR BATTLE" << endl;
        }
        else
        {
            cout << "NOT READY" << endl;
        }
    return 0;
}
