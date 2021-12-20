#include <iostream>
using namespace std;
int REM(int r)
{
    int re = 1;
    for (int j = r; j >= 1; j--)
    {
        re = re * j;
    }
    return re;
}

int main()
{
    int n;
    cout << "enter n\n";
    cin >> n;
    int x = n, sum = 0;
    while (n != 0)
    {
        int rem;
        rem = n % 10;
        sum += REM(rem);
        n /= 10;
    }
    if (x == sum)
    {
        cout << "Strong\n";
    }
    else
        cout << "No Strong\n";
}