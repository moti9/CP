#include <iostream>

using namespace std;
int main()
{
    int t, n, a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        a = n % 10;
        while (n >= 10)
        {
            n /= 10;
        }
        b = n;
        cout << a + b << endl;
    }

    return 0;
}