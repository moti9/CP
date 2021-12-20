#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int base, count;
    while (t--)
    {
        cin >> base;
        count = 0;
        while (base > 2)
        {
            base -= 2;
            count += base / 2;
        }
        cout << count << endl;
    }

    return 0;
}
