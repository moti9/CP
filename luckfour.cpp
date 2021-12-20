#include <iostream>

using namespace std;
int main()
{
    int t, n, r, count;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        count = 0;
        while (n != 0)
        {
            r = n % 10;
            if (r == 4)
                count++;
            n /= 10;
        }
        cout << count << endl;
    }

    return 0;
}