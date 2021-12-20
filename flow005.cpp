#include <iostream>

using namespace std;
int main()
{
    int t;
    int a[6] = {100, 50, 10, 5, 2, 1};
    cin >> t;
    long int n;
    while (t--)
    {
        cin >> n;
        int num = 0;
        for (int i = 0; i < 6; i++)
        {
            int temp = n / a[i];
            num += temp;
            n %= a[i];
        }
        cout << num << endl;
    }

    return 0;
}