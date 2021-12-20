#include <iostream>

using namespace std;
int main()
{
    short t;
    cin >> t;
    int n;
    int r, sum;
    while (t--)
    {
        cin >> n;
        int num = n;
        sum=0;
        while (n > 0)
        {
            r = n % 10;
            sum = (sum * 10) + r;
            n /= 10;
        }

        if (num == sum)
        {
            cout << "wins" << endl;
        }
        else
        {
            cout << "loses" << endl;
        }
    }

    return 0;
}