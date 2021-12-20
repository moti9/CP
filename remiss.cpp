#include <iostream>

using namespace std;
int main()
{
    short t;
    cin >> t;
    long int a, b;
    while (t--)
    {
        cin >> a >> b;
        if (a > b)
            cout << a << " " << a + b << endl;
        else
            cout << b << " " << a + b << endl;
    }

    return 0;
}