#include <iostream>
#include <conio.h>
int add(int *x, int *y)
{
    return *x + *y;
}

using namespace std;
int main()
{
    int a, b, t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        cin >> a >> b;
        int sum = add(&a, &b);

        cout << sum << endl;
    }

    return 0;
}