#include <iostream>
long long  fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

long long  fac(int n)
{
    int f = 1;
    for (int i = n; i > 1; i--)
    {
        f *= i;
    }
    return f;
}

using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl << fac(n);

    return 0;
}