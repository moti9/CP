#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int count1 = 0, count2 = 0;
        for (int i = 1; i < (a + 1); i++)
        {
            a = a - i;
            count1++;
            i++;
        }
        for (int i = 2; i < (b + 1); i++)
        {
            b = b - i;
            count2++;
            i++;
        }

        if (count1 <= count2)
        {
            cout << "bob" << endl;
        }
        else
        {
            cout << "limak" << endl;
        }
    }
    return 0;
}