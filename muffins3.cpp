#include <iostream>

using namespace std;
int main()
{
    int t, c;
    long long n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        c = n / 2 + 1;
        cout << c << endl;
    }

    return 0;
}