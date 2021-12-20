#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    string a, b;
    cin >> a;
    getchar();
    cin >> b;
    getchar();
    cout << a.length() << " " << b.length() << endl;
    cout << a + b << endl;
    swap(a[0], b[0]);
    cout << a << " " << b << endl;

    return 0;
}