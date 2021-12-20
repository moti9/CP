#include <iostream>
#include <array>
using namespace std;
int main()
{
    int n, k, mul, i, j, m, p;
    // cout << "enter n and k";
    cin >> n >> k;
    int array[n];
    for (j = 0; j < n; j++)
    {
        array[j] = j + 1;
    }
    if (n % 2 == 0)
    {
        for (i = 1; i < (n - 1) / k; i++)
        {
            mul = ((array[0]) * (array[(1 + i * 2)]));
        }
        cout << (2 * mul) << " ";
    }
    else
    {
        for (j = 1; j < (n - 1) / k; j++)
        {
            p = (j * k);
            m = ((array[0]) * (array[p]));
        }
        cout << m << " ";
    }
    return 0;
}