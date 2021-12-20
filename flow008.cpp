#include <iostream>

using namespace std;
int main()
{
    int t, n, num = -1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n < 10)
            cout << "Thanks for helping Chef!" << endl;
        else
            cout << num << endl;
    }

    return 0;
}