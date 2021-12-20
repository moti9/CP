#include <iostream>
long long int fact(short n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

using namespace std;
int main()
{
    short t, n;
    cin >> t;
    for (short i = 0; i < t; i++)
    {
        cin >> n;
        cout << fact(n) << endl;
    }

    return 0;
}