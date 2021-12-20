#include <iostream>

using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int l, b;
    cin >> l;
    cin >> b;
    int ar = 0, peri = 0;
    ar = l * b;
    peri = 2 * (l + b);
    if (ar > peri)
    {
        cout << "Area\n"
             << ar << endl;
    }
    else if (peri > ar)
    {
        cout << "Peri\n"
             << peri << endl;
    }
    else
    {
        cout << "Eq\n"
             << ar << endl;
    }

    return 0;
}