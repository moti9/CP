#include <iostream>

using namespace std;
long long int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    int t;
    short  n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << fact(n) << endl;
    }

    return 0;
}