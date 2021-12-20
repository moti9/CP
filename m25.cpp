#include <iostream>

using namespace std;
int main()
{
    int n1, m1;
    cin >> m1 >> n1;
    long long int val1 = 1;
    for (int i = 0; i < n1; i++)
    {
        val1 *= m1;
        cout << val1 << " ";
    }

    return 0;
}