#include <iostream>

using namespace std;

int main()
{
    short t, n, d;
    cin >> t;
    while (t--)
    {
        cin >> d >> n;
        int sum = 0;
        while (d--)
        {
            sum = n * (n + 1) / 2;
            n = sum;
        }
        cout << sum << endl;
    }

    return 0;
}